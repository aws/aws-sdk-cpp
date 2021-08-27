/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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

TEST(XmlSerializerTest, TestXmlCopyAndMove)
{
    const char* testXml = "<?xml version=\"1.0\" ?>\n"
        "<!-- Our to do list data -->\n"
        "<ToDo>\n"
        "</ToDo>";

    XmlDocument doc = XmlDocument::CreateFromXmlString(testXml);
    ASSERT_TRUE(doc.WasParseSuccessful());

    // Copy constructor
    XmlDocument copiedDoc(doc);
    ASSERT_TRUE(copiedDoc.GetErrorMessage().empty());
    ASSERT_EQ("ToDo", copiedDoc.GetRootElement().GetName());

    ASSERT_TRUE(doc.GetErrorMessage().empty());
    ASSERT_EQ("ToDo", doc.GetRootElement().GetName());

    // Move constructor
    XmlDocument movedDoc(std::move(doc));
    ASSERT_TRUE(movedDoc.GetErrorMessage().empty());
    ASSERT_EQ("ToDo", movedDoc.GetRootElement().GetName());
    ASSERT_EQ("", doc.ConvertToString());

    // Copy assignment
    {
        XmlDocument scopedDoc = XmlDocument::CreateFromXmlString(testXml);
        copiedDoc = scopedDoc;
    }
    ASSERT_TRUE(copiedDoc.GetErrorMessage().empty());
    ASSERT_EQ("ToDo", copiedDoc.GetRootElement().GetName());

    // Move assignment
    {
        XmlDocument scopedDoc = XmlDocument::CreateFromXmlString(testXml);
        movedDoc = std::move(scopedDoc);
    }
    ASSERT_TRUE(movedDoc.GetErrorMessage().empty());
    ASSERT_EQ("ToDo", movedDoc.GetRootElement().GetName());
}
