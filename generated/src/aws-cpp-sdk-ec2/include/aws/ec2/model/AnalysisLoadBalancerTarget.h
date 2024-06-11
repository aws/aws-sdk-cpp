/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/model/AnalysisComponent.h>
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

  /**
   * <p>Describes a load balancer target.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/AnalysisLoadBalancerTarget">AWS
   * API Reference</a></p>
   */
  class AnalysisLoadBalancerTarget
  {
  public:
    AWS_EC2_API AnalysisLoadBalancerTarget();
    AWS_EC2_API AnalysisLoadBalancerTarget(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API AnalysisLoadBalancerTarget& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The IP address.</p>
     */
    inline const Aws::String& GetAddress() const{ return m_address; }
    inline bool AddressHasBeenSet() const { return m_addressHasBeenSet; }
    inline void SetAddress(const Aws::String& value) { m_addressHasBeenSet = true; m_address = value; }
    inline void SetAddress(Aws::String&& value) { m_addressHasBeenSet = true; m_address = std::move(value); }
    inline void SetAddress(const char* value) { m_addressHasBeenSet = true; m_address.assign(value); }
    inline AnalysisLoadBalancerTarget& WithAddress(const Aws::String& value) { SetAddress(value); return *this;}
    inline AnalysisLoadBalancerTarget& WithAddress(Aws::String&& value) { SetAddress(std::move(value)); return *this;}
    inline AnalysisLoadBalancerTarget& WithAddress(const char* value) { SetAddress(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Availability Zone.</p>
     */
    inline const Aws::String& GetAvailabilityZone() const{ return m_availabilityZone; }
    inline bool AvailabilityZoneHasBeenSet() const { return m_availabilityZoneHasBeenSet; }
    inline void SetAvailabilityZone(const Aws::String& value) { m_availabilityZoneHasBeenSet = true; m_availabilityZone = value; }
    inline void SetAvailabilityZone(Aws::String&& value) { m_availabilityZoneHasBeenSet = true; m_availabilityZone = std::move(value); }
    inline void SetAvailabilityZone(const char* value) { m_availabilityZoneHasBeenSet = true; m_availabilityZone.assign(value); }
    inline AnalysisLoadBalancerTarget& WithAvailabilityZone(const Aws::String& value) { SetAvailabilityZone(value); return *this;}
    inline AnalysisLoadBalancerTarget& WithAvailabilityZone(Aws::String&& value) { SetAvailabilityZone(std::move(value)); return *this;}
    inline AnalysisLoadBalancerTarget& WithAvailabilityZone(const char* value) { SetAvailabilityZone(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the instance.</p>
     */
    inline const AnalysisComponent& GetInstance() const{ return m_instance; }
    inline bool InstanceHasBeenSet() const { return m_instanceHasBeenSet; }
    inline void SetInstance(const AnalysisComponent& value) { m_instanceHasBeenSet = true; m_instance = value; }
    inline void SetInstance(AnalysisComponent&& value) { m_instanceHasBeenSet = true; m_instance = std::move(value); }
    inline AnalysisLoadBalancerTarget& WithInstance(const AnalysisComponent& value) { SetInstance(value); return *this;}
    inline AnalysisLoadBalancerTarget& WithInstance(AnalysisComponent&& value) { SetInstance(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The port on which the target is listening.</p>
     */
    inline int GetPort() const{ return m_port; }
    inline bool PortHasBeenSet() const { return m_portHasBeenSet; }
    inline void SetPort(int value) { m_portHasBeenSet = true; m_port = value; }
    inline AnalysisLoadBalancerTarget& WithPort(int value) { SetPort(value); return *this;}
    ///@}
  private:

    Aws::String m_address;
    bool m_addressHasBeenSet = false;

    Aws::String m_availabilityZone;
    bool m_availabilityZoneHasBeenSet = false;

    AnalysisComponent m_instance;
    bool m_instanceHasBeenSet = false;

    int m_port;
    bool m_portHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
