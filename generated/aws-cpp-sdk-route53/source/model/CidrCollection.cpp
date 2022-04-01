/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/route53/model/CidrCollection.h>
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

CidrCollection::CidrCollection() : 
    m_arnHasBeenSet(false),
    m_idHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_version(0),
    m_versionHasBeenSet(false)
{
}

CidrCollection::CidrCollection(const XmlNode& xmlNode) : 
    m_arnHasBeenSet(false),
    m_idHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_version(0),
    m_versionHasBeenSet(false)
{
  *this = xmlNode;
}

CidrCollection& CidrCollection::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode arnNode = resultNode.FirstChild("Arn");
    if(!arnNode.IsNull())
    {
      m_arn = Aws::Utils::Xml::DecodeEscapedXmlText(arnNode.GetText());
      m_arnHasBeenSet = true;
    }
    XmlNode idNode = resultNode.FirstChild("Id");
    if(!idNode.IsNull())
    {
      m_id = Aws::Utils::Xml::DecodeEscapedXmlText(idNode.GetText());
      m_idHasBeenSet = true;
    }
    XmlNode nameNode = resultNode.FirstChild("Name");
    if(!nameNode.IsNull())
    {
      m_name = Aws::Utils::Xml::DecodeEscapedXmlText(nameNode.GetText());
      m_nameHasBeenSet = true;
    }
    XmlNode versionNode = resultNode.FirstChild("Version");
    if(!versionNode.IsNull())
    {
      m_version = StringUtils::ConvertToInt64(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(versionNode.GetText()).c_str()).c_str());
      m_versionHasBeenSet = true;
    }
  }

  return *this;
}

void CidrCollection::AddToNode(XmlNode& parentNode) const
{
  Aws::StringStream ss;
  if(m_arnHasBeenSet)
  {
   XmlNode arnNode = parentNode.CreateChildElement("Arn");
   arnNode.SetText(m_arn);
  }

  if(m_idHasBeenSet)
  {
   XmlNode idNode = parentNode.CreateChildElement("Id");
   idNode.SetText(m_id);
  }

  if(m_nameHasBeenSet)
  {
   XmlNode nameNode = parentNode.CreateChildElement("Name");
   nameNode.SetText(m_name);
  }

  if(m_versionHasBeenSet)
  {
   XmlNode versionNode = parentNode.CreateChildElement("Version");
   ss << m_version;
   versionNode.SetText(ss.str());
   ss.str("");
  }

}

} // namespace Model
} // namespace Route53
} // namespace Aws
