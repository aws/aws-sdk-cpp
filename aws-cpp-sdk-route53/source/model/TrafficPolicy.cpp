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

#include <aws/route53/model/TrafficPolicy.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws
{
namespace Route53
{
namespace Model
{

TrafficPolicy::TrafficPolicy() : 
    m_idHasBeenSet(false),
    m_version(0),
    m_versionHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_type(RRType::NOT_SET),
    m_typeHasBeenSet(false),
    m_documentHasBeenSet(false),
    m_commentHasBeenSet(false)
{
}

TrafficPolicy::TrafficPolicy(const XmlNode& xmlNode) : 
    m_idHasBeenSet(false),
    m_version(0),
    m_versionHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_type(RRType::NOT_SET),
    m_typeHasBeenSet(false),
    m_documentHasBeenSet(false),
    m_commentHasBeenSet(false)
{
  *this = xmlNode;
}

TrafficPolicy& TrafficPolicy::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode idNode = resultNode.FirstChild("Id");
    if(!idNode.IsNull())
    {
      m_id = idNode.GetText();
      m_idHasBeenSet = true;
    }
    XmlNode versionNode = resultNode.FirstChild("Version");
    if(!versionNode.IsNull())
    {
      m_version = StringUtils::ConvertToInt32(StringUtils::Trim(versionNode.GetText().c_str()).c_str());
      m_versionHasBeenSet = true;
    }
    XmlNode nameNode = resultNode.FirstChild("Name");
    if(!nameNode.IsNull())
    {
      m_name = nameNode.GetText();
      m_nameHasBeenSet = true;
    }
    XmlNode typeNode = resultNode.FirstChild("Type");
    if(!typeNode.IsNull())
    {
      m_type = RRTypeMapper::GetRRTypeForName(StringUtils::Trim(typeNode.GetText().c_str()).c_str());
      m_typeHasBeenSet = true;
    }
    XmlNode documentNode = resultNode.FirstChild("Document");
    if(!documentNode.IsNull())
    {
      m_document = documentNode.GetText();
      m_documentHasBeenSet = true;
    }
    XmlNode commentNode = resultNode.FirstChild("Comment");
    if(!commentNode.IsNull())
    {
      m_comment = commentNode.GetText();
      m_commentHasBeenSet = true;
    }
  }

  return *this;
}

void TrafficPolicy::AddToNode(XmlNode& parentNode) const
{
  Aws::StringStream ss;
  if(m_idHasBeenSet)
  {
   XmlNode idNode = parentNode.CreateChildElement("Id");
   idNode.SetText(m_id);
  }

  if(m_versionHasBeenSet)
  {
   XmlNode versionNode = parentNode.CreateChildElement("Version");
   ss << m_version;
   versionNode.SetText(ss.str());
   ss.str("");
  }

  if(m_nameHasBeenSet)
  {
   XmlNode nameNode = parentNode.CreateChildElement("Name");
   nameNode.SetText(m_name);
  }

  if(m_typeHasBeenSet)
  {
   XmlNode typeNode = parentNode.CreateChildElement("Type");
   typeNode.SetText(RRTypeMapper::GetNameForRRType(m_type));
  }

  if(m_documentHasBeenSet)
  {
   XmlNode documentNode = parentNode.CreateChildElement("Document");
   documentNode.SetText(m_document);
  }

  if(m_commentHasBeenSet)
  {
   XmlNode commentNode = parentNode.CreateChildElement("Comment");
   commentNode.SetText(m_comment);
  }

}

} // namespace Model
} // namespace Route53
} // namespace Aws
