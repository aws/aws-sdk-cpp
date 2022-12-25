/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/TransitGatewayPolicyRuleMetaData.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws
{
namespace EC2
{
namespace Model
{

TransitGatewayPolicyRuleMetaData::TransitGatewayPolicyRuleMetaData() : 
    m_metaDataKeyHasBeenSet(false),
    m_metaDataValueHasBeenSet(false)
{
}

TransitGatewayPolicyRuleMetaData::TransitGatewayPolicyRuleMetaData(const XmlNode& xmlNode) : 
    m_metaDataKeyHasBeenSet(false),
    m_metaDataValueHasBeenSet(false)
{
  *this = xmlNode;
}

TransitGatewayPolicyRuleMetaData& TransitGatewayPolicyRuleMetaData::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode metaDataKeyNode = resultNode.FirstChild("metaDataKey");
    if(!metaDataKeyNode.IsNull())
    {
      m_metaDataKey = Aws::Utils::Xml::DecodeEscapedXmlText(metaDataKeyNode.GetText());
      m_metaDataKeyHasBeenSet = true;
    }
    XmlNode metaDataValueNode = resultNode.FirstChild("metaDataValue");
    if(!metaDataValueNode.IsNull())
    {
      m_metaDataValue = Aws::Utils::Xml::DecodeEscapedXmlText(metaDataValueNode.GetText());
      m_metaDataValueHasBeenSet = true;
    }
  }

  return *this;
}

void TransitGatewayPolicyRuleMetaData::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_metaDataKeyHasBeenSet)
  {
      oStream << location << index << locationValue << ".MetaDataKey=" << StringUtils::URLEncode(m_metaDataKey.c_str()) << "&";
  }

  if(m_metaDataValueHasBeenSet)
  {
      oStream << location << index << locationValue << ".MetaDataValue=" << StringUtils::URLEncode(m_metaDataValue.c_str()) << "&";
  }

}

void TransitGatewayPolicyRuleMetaData::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_metaDataKeyHasBeenSet)
  {
      oStream << location << ".MetaDataKey=" << StringUtils::URLEncode(m_metaDataKey.c_str()) << "&";
  }
  if(m_metaDataValueHasBeenSet)
  {
      oStream << location << ".MetaDataValue=" << StringUtils::URLEncode(m_metaDataValue.c_str()) << "&";
  }
}

} // namespace Model
} // namespace EC2
} // namespace Aws
