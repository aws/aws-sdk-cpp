/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/TransitGatewayPeeringAttachmentOptions.h>
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

TransitGatewayPeeringAttachmentOptions::TransitGatewayPeeringAttachmentOptions() : 
    m_dynamicRouting(DynamicRoutingValue::NOT_SET),
    m_dynamicRoutingHasBeenSet(false)
{
}

TransitGatewayPeeringAttachmentOptions::TransitGatewayPeeringAttachmentOptions(const XmlNode& xmlNode) : 
    m_dynamicRouting(DynamicRoutingValue::NOT_SET),
    m_dynamicRoutingHasBeenSet(false)
{
  *this = xmlNode;
}

TransitGatewayPeeringAttachmentOptions& TransitGatewayPeeringAttachmentOptions::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode dynamicRoutingNode = resultNode.FirstChild("dynamicRouting");
    if(!dynamicRoutingNode.IsNull())
    {
      m_dynamicRouting = DynamicRoutingValueMapper::GetDynamicRoutingValueForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(dynamicRoutingNode.GetText()).c_str()).c_str());
      m_dynamicRoutingHasBeenSet = true;
    }
  }

  return *this;
}

void TransitGatewayPeeringAttachmentOptions::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_dynamicRoutingHasBeenSet)
  {
      oStream << location << index << locationValue << ".DynamicRouting=" << DynamicRoutingValueMapper::GetNameForDynamicRoutingValue(m_dynamicRouting) << "&";
  }

}

void TransitGatewayPeeringAttachmentOptions::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_dynamicRoutingHasBeenSet)
  {
      oStream << location << ".DynamicRouting=" << DynamicRoutingValueMapper::GetNameForDynamicRoutingValue(m_dynamicRouting) << "&";
  }
}

} // namespace Model
} // namespace EC2
} // namespace Aws
