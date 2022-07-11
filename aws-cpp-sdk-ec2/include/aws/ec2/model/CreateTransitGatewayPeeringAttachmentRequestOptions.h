/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/ec2/model/DynamicRoutingValue.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Xml
{
  class XmlNode;
} // namespace Xml
} // namespace Utils
namespace EC2
{
namespace Model
{

  class AWS_EC2_API CreateTransitGatewayPeeringAttachmentRequestOptions
  {
  public:
    CreateTransitGatewayPeeringAttachmentRequestOptions();
    CreateTransitGatewayPeeringAttachmentRequestOptions(const Aws::Utils::Xml::XmlNode& xmlNode);
    CreateTransitGatewayPeeringAttachmentRequestOptions& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    void OutputToStream(Aws::OStream& oStream, const char* location) const;


    
    inline const DynamicRoutingValue& GetDynamicRouting() const{ return m_dynamicRouting; }

    
    inline bool DynamicRoutingHasBeenSet() const { return m_dynamicRoutingHasBeenSet; }

    
    inline void SetDynamicRouting(const DynamicRoutingValue& value) { m_dynamicRoutingHasBeenSet = true; m_dynamicRouting = value; }

    
    inline void SetDynamicRouting(DynamicRoutingValue&& value) { m_dynamicRoutingHasBeenSet = true; m_dynamicRouting = std::move(value); }

    
    inline CreateTransitGatewayPeeringAttachmentRequestOptions& WithDynamicRouting(const DynamicRoutingValue& value) { SetDynamicRouting(value); return *this;}

    
    inline CreateTransitGatewayPeeringAttachmentRequestOptions& WithDynamicRouting(DynamicRoutingValue&& value) { SetDynamicRouting(std::move(value)); return *this;}

  private:

    DynamicRoutingValue m_dynamicRouting;
    bool m_dynamicRoutingHasBeenSet;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
