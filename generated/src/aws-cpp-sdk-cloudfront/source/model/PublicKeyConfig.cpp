/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudfront/model/PublicKeyConfig.h>
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

PublicKeyConfig::PublicKeyConfig() : 
    m_callerReferenceHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_encodedKeyHasBeenSet(false),
    m_commentHasBeenSet(false)
{
}

PublicKeyConfig::PublicKeyConfig(const XmlNode& xmlNode) : 
    m_callerReferenceHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_encodedKeyHasBeenSet(false),
    m_commentHasBeenSet(false)
{
  *this = xmlNode;
}

PublicKeyConfig& PublicKeyConfig::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode callerReferenceNode = resultNode.FirstChild("CallerReference");
    if(!callerReferenceNode.IsNull())
    {
      m_callerReference = Aws::Utils::Xml::DecodeEscapedXmlText(callerReferenceNode.GetText());
      m_callerReferenceHasBeenSet = true;
    }
    XmlNode nameNode = resultNode.FirstChild("Name");
    if(!nameNode.IsNull())
    {
      m_name = Aws::Utils::Xml::DecodeEscapedXmlText(nameNode.GetText());
      m_nameHasBeenSet = true;
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

void PublicKeyConfig::AddToNode(XmlNode& parentNode) const
{
  Aws::StringStream ss;
  if(m_callerReferenceHasBeenSet)
  {
   XmlNode callerReferenceNode = parentNode.CreateChildElement("CallerReference");
   callerReferenceNode.SetText(m_callerReference);
  }

  if(m_nameHasBeenSet)
  {
   XmlNode nameNode = parentNode.CreateChildElement("Name");
   nameNode.SetText(m_name);
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
