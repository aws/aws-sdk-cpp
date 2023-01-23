/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudfront/model/FieldLevelEncryptionProfileConfig.h>
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

FieldLevelEncryptionProfileConfig::FieldLevelEncryptionProfileConfig() : 
    m_nameHasBeenSet(false),
    m_callerReferenceHasBeenSet(false),
    m_commentHasBeenSet(false),
    m_encryptionEntitiesHasBeenSet(false)
{
}

FieldLevelEncryptionProfileConfig::FieldLevelEncryptionProfileConfig(const XmlNode& xmlNode) : 
    m_nameHasBeenSet(false),
    m_callerReferenceHasBeenSet(false),
    m_commentHasBeenSet(false),
    m_encryptionEntitiesHasBeenSet(false)
{
  *this = xmlNode;
}

FieldLevelEncryptionProfileConfig& FieldLevelEncryptionProfileConfig::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode nameNode = resultNode.FirstChild("Name");
    if(!nameNode.IsNull())
    {
      m_name = Aws::Utils::Xml::DecodeEscapedXmlText(nameNode.GetText());
      m_nameHasBeenSet = true;
    }
    XmlNode callerReferenceNode = resultNode.FirstChild("CallerReference");
    if(!callerReferenceNode.IsNull())
    {
      m_callerReference = Aws::Utils::Xml::DecodeEscapedXmlText(callerReferenceNode.GetText());
      m_callerReferenceHasBeenSet = true;
    }
    XmlNode commentNode = resultNode.FirstChild("Comment");
    if(!commentNode.IsNull())
    {
      m_comment = Aws::Utils::Xml::DecodeEscapedXmlText(commentNode.GetText());
      m_commentHasBeenSet = true;
    }
    XmlNode encryptionEntitiesNode = resultNode.FirstChild("EncryptionEntities");
    if(!encryptionEntitiesNode.IsNull())
    {
      m_encryptionEntities = encryptionEntitiesNode;
      m_encryptionEntitiesHasBeenSet = true;
    }
  }

  return *this;
}

void FieldLevelEncryptionProfileConfig::AddToNode(XmlNode& parentNode) const
{
  Aws::StringStream ss;
  if(m_nameHasBeenSet)
  {
   XmlNode nameNode = parentNode.CreateChildElement("Name");
   nameNode.SetText(m_name);
  }

  if(m_callerReferenceHasBeenSet)
  {
   XmlNode callerReferenceNode = parentNode.CreateChildElement("CallerReference");
   callerReferenceNode.SetText(m_callerReference);
  }

  if(m_commentHasBeenSet)
  {
   XmlNode commentNode = parentNode.CreateChildElement("Comment");
   commentNode.SetText(m_comment);
  }

  if(m_encryptionEntitiesHasBeenSet)
  {
   XmlNode encryptionEntitiesNode = parentNode.CreateChildElement("EncryptionEntities");
   m_encryptionEntities.AddToNode(encryptionEntitiesNode);
  }

}

} // namespace Model
} // namespace CloudFront
} // namespace Aws
