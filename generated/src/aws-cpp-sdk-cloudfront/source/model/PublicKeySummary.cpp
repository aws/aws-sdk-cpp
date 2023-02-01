/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudfront/model/PublicKeySummary.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws
{
namespace CloudFront
{
namespace Model
{

PublicKeySummary::PublicKeySummary() : 
    m_idHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_createdTimeHasBeenSet(false),
    m_encodedKeyHasBeenSet(false),
    m_commentHasBeenSet(false)
{
}

PublicKeySummary::PublicKeySummary(const XmlNode& xmlNode) : 
    m_idHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_createdTimeHasBeenSet(false),
    m_encodedKeyHasBeenSet(false),
    m_commentHasBeenSet(false)
{
  *this = xmlNode;
}

PublicKeySummary& PublicKeySummary::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
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
    XmlNode createdTimeNode = resultNode.FirstChild("CreatedTime");
    if(!createdTimeNode.IsNull())
    {
      m_createdTime = DateTime(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(createdTimeNode.GetText()).c_str()).c_str(), Aws::Utils::DateFormat::ISO_8601);
      m_createdTimeHasBeenSet = true;
    }
    XmlNode encodedKeyNode = resultNode.FirstChild("EncodedKey");
    if(!encodedKeyNode.IsNull())
    {
      m_encodedKey = Aws::Utils::Xml::DecodeEscapedXmlText(encodedKeyNode.GetText());
      m_encodedKeyHasBeenSet = true;
    }
    XmlNode commentNode = resultNode.FirstChild("Comment");
    if(!commentNode.IsNull())
    {
      m_comment = Aws::Utils::Xml::DecodeEscapedXmlText(commentNode.GetText());
      m_commentHasBeenSet = true;
    }
  }

  return *this;
}

void PublicKeySummary::AddToNode(XmlNode& parentNode) const
{
  Aws::StringStream ss;
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

  if(m_createdTimeHasBeenSet)
  {
   XmlNode createdTimeNode = parentNode.CreateChildElement("CreatedTime");
   createdTimeNode.SetText(m_createdTime.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if(m_encodedKeyHasBeenSet)
  {
   XmlNode encodedKeyNode = parentNode.CreateChildElement("EncodedKey");
   encodedKeyNode.SetText(m_encodedKey);
  }

  if(m_commentHasBeenSet)
  {
   XmlNode commentNode = parentNode.CreateChildElement("Comment");
   commentNode.SetText(m_comment);
  }

}

} // namespace Model
} // namespace CloudFront
} // namespace Aws
