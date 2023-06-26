/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudfront/model/FieldLevelEncryptionSummary.h>
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

FieldLevelEncryptionSummary::FieldLevelEncryptionSummary() : 
    m_idHasBeenSet(false),
    m_lastModifiedTimeHasBeenSet(false),
    m_commentHasBeenSet(false),
    m_queryArgProfileConfigHasBeenSet(false),
    m_contentTypeProfileConfigHasBeenSet(false)
{
}

FieldLevelEncryptionSummary::FieldLevelEncryptionSummary(const XmlNode& xmlNode) : 
    m_idHasBeenSet(false),
    m_lastModifiedTimeHasBeenSet(false),
    m_commentHasBeenSet(false),
    m_queryArgProfileConfigHasBeenSet(false),
    m_contentTypeProfileConfigHasBeenSet(false)
{
  *this = xmlNode;
}

FieldLevelEncryptionSummary& FieldLevelEncryptionSummary::operator =(const XmlNode& xmlNode)
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
    XmlNode lastModifiedTimeNode = resultNode.FirstChild("LastModifiedTime");
    if(!lastModifiedTimeNode.IsNull())
    {
      m_lastModifiedTime = DateTime(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(lastModifiedTimeNode.GetText()).c_str()).c_str(), Aws::Utils::DateFormat::ISO_8601);
      m_lastModifiedTimeHasBeenSet = true;
    }
    XmlNode commentNode = resultNode.FirstChild("Comment");
    if(!commentNode.IsNull())
    {
      m_comment = Aws::Utils::Xml::DecodeEscapedXmlText(commentNode.GetText());
      m_commentHasBeenSet = true;
    }
    XmlNode queryArgProfileConfigNode = resultNode.FirstChild("QueryArgProfileConfig");
    if(!queryArgProfileConfigNode.IsNull())
    {
      m_queryArgProfileConfig = queryArgProfileConfigNode;
      m_queryArgProfileConfigHasBeenSet = true;
    }
    XmlNode contentTypeProfileConfigNode = resultNode.FirstChild("ContentTypeProfileConfig");
    if(!contentTypeProfileConfigNode.IsNull())
    {
      m_contentTypeProfileConfig = contentTypeProfileConfigNode;
      m_contentTypeProfileConfigHasBeenSet = true;
    }
  }

  return *this;
}

void FieldLevelEncryptionSummary::AddToNode(XmlNode& parentNode) const
{
  Aws::StringStream ss;
  if(m_idHasBeenSet)
  {
   XmlNode idNode = parentNode.CreateChildElement("Id");
   idNode.SetText(m_id);
  }

  if(m_lastModifiedTimeHasBeenSet)
  {
   XmlNode lastModifiedTimeNode = parentNode.CreateChildElement("LastModifiedTime");
   lastModifiedTimeNode.SetText(m_lastModifiedTime.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if(m_commentHasBeenSet)
  {
   XmlNode commentNode = parentNode.CreateChildElement("Comment");
   commentNode.SetText(m_comment);
  }

  if(m_queryArgProfileConfigHasBeenSet)
  {
   XmlNode queryArgProfileConfigNode = parentNode.CreateChildElement("QueryArgProfileConfig");
   m_queryArgProfileConfig.AddToNode(queryArgProfileConfigNode);
  }

  if(m_contentTypeProfileConfigHasBeenSet)
  {
   XmlNode contentTypeProfileConfigNode = parentNode.CreateChildElement("ContentTypeProfileConfig");
   m_contentTypeProfileConfig.AddToNode(contentTypeProfileConfigNode);
  }

}

} // namespace Model
} // namespace CloudFront
} // namespace Aws
