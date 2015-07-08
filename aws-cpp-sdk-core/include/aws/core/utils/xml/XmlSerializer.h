/*
  * Copyright 2010-2015 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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

#pragma once

#include <aws/core/Core_EXPORTS.h>

#include <aws/core/utils/Outcome.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace External
{
namespace tinyxml2
{
class XMLNode;

class XMLDocument;
} // namespace tinyxml2
} // namespace External
} // namespace Aws

namespace Aws
{
template<typename PAYLOAD_TYPE>
class AmazonWebServiceResult;
namespace Client
{
enum class CoreErrors;
template<typename ERROR_TYPE>
class AWSError;
class AWSXMLClient;
} // namespace Client
namespace Utils
{
namespace Xml
{
AWS_CORE_API Aws::String DecodeEscapedXmlText(const Aws::String& textToDecode);

class XmlDocument;

class AWS_CORE_API XmlNode
{
public:
    XmlNode(const XmlNode& other);

    XmlNode& operator=(const XmlNode& other);

    const Aws::String GetName() const;

    void SetName(const Aws::String& name);

    const Aws::String GetAttributeValue(const Aws::String& name) const;

    void SetAttributeValue(const Aws::String& name, const Aws::String& value);

    Aws::String GetText() const;

    void SetText(const Aws::String& textValue);

    bool HasNextNode() const;

    XmlNode NextNode() const;
    XmlNode NextNode(const char* name) const;
    XmlNode NextNode(const Aws::String& name) const;

    XmlNode FirstChild() const;
    XmlNode FirstChild(const char* name) const;
    XmlNode FirstChild(const Aws::String& name) const;

    bool HasChildren() const;

    XmlNode Parent() const;

    XmlNode CreateChildElement(const Aws::String& name);

    XmlNode CreateSiblingElement(const Aws::String& name);

    bool IsNull();

private:
    XmlNode(Aws::External::tinyxml2::XMLNode* node, const XmlDocument& document) :
        m_node(node), m_doc(&document)
    {
    }

    //we do not own these.... I just had to change it from ref because the compiler was
    //confused about which assignment operator to call. Do not... I repeat... do not delete
    //these pointers in your destructor.
    Aws::External::tinyxml2::XMLNode* m_node;
    const XmlDocument* m_doc;

    friend class XmlDocument;
};

class AWS_CORE_API XmlDocument
{
public:
    XmlDocument(XmlDocument&& doc); // Move Constructor
    XmlDocument(const XmlDocument& other) = delete; // Remove to prevent duplication of underlying resource

    ~XmlDocument();

    XmlNode GetRootElement() const;

    Aws::String ConvertToString() const;

    bool WasParseSuccessful() const;

    Aws::String GetErrorMessage() const;

    static XmlDocument CreateFromXmlStream(Aws::IOStream&);

    static XmlDocument CreateFromXmlString(const Aws::String&);

    static XmlDocument CreateWithRootNode(const Aws::String&);

private:
    XmlDocument();

    Aws::External::tinyxml2::XMLDocument* m_doc;

    friend class XmlNode;

    //allow outcome call the default constructor to handle it's error case.
    friend class Aws::Utils::Outcome<Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>, Aws::Client::AWSError<Aws::Client::CoreErrors>>;
    friend class Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>;
    friend class Client::AWSXMLClient;
};

} // namespace Xml
} // namespace Utils
} // namespace Aws

