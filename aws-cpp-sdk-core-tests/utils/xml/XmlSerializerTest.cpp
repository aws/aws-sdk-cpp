/*
  * Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
  * 
  * Licensed under the Apache License, Version 2.0 (the "License").
  * You may not use this file except in compliance with the License.
  * A copy of the License is located at
  * 
  *  http://aws.amazon.com/apache2.0
  * 
  * or in the "license" file accompanying this file. This file is distributed
  * on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
  * express or implied. See the License for the specific language governing
  * permissions and limitations under the License.
  */

#include <aws/external/gtest.h>

#include <aws/core/utils/xml/XmlSerializer.h>

using namespace Aws::Utils::Xml;

TEST(XmlSerializerTest, TestXmlDeserialize)
{
    const char* testXml = "<?xml version=\"1.0\" ?>\n"
        "<!-- Our to do list data -->\n"
        "<ToDo>\n"
        "<Item priority=\"1\"> Go to the <bold>Toy store!</bold></Item>\n"
        "<Item priority=\"2\"> Do bills</Item>\n"
        "</ToDo>";

    XmlDocument doc = XmlDocument::CreateFromXmlString(testXml);

    if (doc.WasParseSuccessful())
    {
        XmlNode rootElement = doc.GetRootElement();
        ASSERT_TRUE(doc.GetErrorMessage().empty());
        ASSERT_EQ("ToDo", rootElement.GetName());

        XmlNode firstChild = rootElement.FirstChild();
        ASSERT_EQ("Item", firstChild.GetName());
        ASSERT_EQ("1", firstChild.GetAttributeValue("priority"));
        ASSERT_EQ(" Go to the <bold>Toy store!</bold>\n", firstChild.GetText());
        XmlNode nextChild = firstChild.NextNode();
        ASSERT_EQ("Item", nextChild.GetName());
        ASSERT_EQ("2", nextChild.GetAttributeValue("priority"));
        ASSERT_EQ(" Do bills", nextChild.GetText());
        ASSERT_FALSE(nextChild.HasNextNode());
    }
    else
    {
        GTEST_NONFATAL_FAILURE_(doc.GetErrorMessage().c_str());
    }
}

TEST(XmlSerializerTest, TestXmlDeserializeFailed)
{
    const char* testXml = "blah blah blah";

    XmlDocument doc = XmlDocument::CreateFromXmlString(testXml);
    ASSERT_FALSE(doc.WasParseSuccessful());
    ASSERT_FALSE(doc.GetErrorMessage().empty());
}

TEST(XmlSerializerTest, TestXmlSerialize)
{
    XmlDocument doc = XmlDocument::CreateWithRootNode("ToDo");
    XmlNode rootElement = doc.GetRootElement();
    XmlNode item1 = rootElement.CreateChildElement("Item");
    item1.SetAttributeValue("priority", "1");
    item1.SetText("Go to the <bold>Toy store!</bold>");
    XmlNode item2 = rootElement.CreateChildElement("Item");
    item2.SetAttributeValue("priority", "2");
    item2.SetText("Do bills");

    Aws::String serializedXml = doc.ConvertToString();

    Aws::String toCompare = "<?xml version=\"1.0\"?>\n"
        "<ToDo>\n"
        "    <Item priority=\"1\">Go to the &lt;bold&gt;Toy store!&lt;/bold&gt;</Item>\n"
        "    <Item priority=\"2\">Do bills</Item>\n"
        "</ToDo>\n";
    ASSERT_EQ(toCompare, serializedXml);
    ASSERT_TRUE(doc.GetErrorMessage().empty());
}

TEST(XmlSerializerTest, TestXmlHasChildren)
{
    XmlDocument doc = XmlDocument::CreateWithRootNode("ToDo");
    XmlNode rootElement = doc.GetRootElement();
    XmlNode item1 = rootElement.CreateChildElement("Item");
   
    ASSERT_TRUE(rootElement.HasChildren());
    ASSERT_FALSE(item1.HasChildren());
}
    
