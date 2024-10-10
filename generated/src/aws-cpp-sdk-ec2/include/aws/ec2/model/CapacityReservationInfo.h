/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/model/CapacityReservationTenancy.h>
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
   * <p>Information about a Capacity Reservation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/CapacityReservationInfo">AWS
   * API Reference</a></p>
   */
  class CapacityReservationInfo
  {
  public:
    AWS_EC2_API CapacityReservationInfo();
    AWS_EC2_API CapacityReservationInfo(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API CapacityReservationInfo& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The instance type for the Capacity Reservation.</p>
     */
    inline const Aws::String& GetInstanceType() const{ return m_instanceType; }
    inline bool InstanceTypeHasBeenSet() const { return m_instanceTypeHasBeenSet; }
    inline void SetInstanceType(const Aws::String& value) { m_instanceTypeHasBeenSet = true; m_instanceType = value; }
    inline void SetInstanceType(Aws::String&& value) { m_instanceTypeHasBeenSet = true; m_instanceType = std::move(value); }
    inline void SetInstanceType(const char* value) { m_instanceTypeHasBeenSet = true; m_instanceType.assign(value); }
    inline CapacityReservationInfo& WithInstanceType(const Aws::String& value) { SetInstanceType(value); return *this;}
    inline CapacityReservationInfo& WithInstanceType(Aws::String&& value) { SetInstanceType(std::move(value)); return *this;}
    inline CapacityReservationInfo& WithInstanceType(const char* value) { SetInstanceType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Availability Zone for the Capacity Reservation.</p>
     */
    inline const Aws::String& GetAvailabilityZone() const{ return m_availabilityZone; }
    inline bool AvailabilityZoneHasBeenSet() const { return m_availabilityZoneHasBeenSet; }
    inline void SetAvailabilityZone(const Aws::String& value) { m_availabilityZoneHasBeenSet = true; m_availabilityZone = value; }
    inline void SetAvailabilityZone(Aws::String&& value) { m_availabilityZoneHasBeenSet = true; m_availabilityZone = std::move(value); }
    inline void SetAvailabilityZone(const char* value) { m_availabilityZoneHasBeenSet = true; m_availabilityZone.assign(value); }
    inline CapacityReservationInfo& WithAvailabilityZone(const Aws::String& value) { SetAvailabilityZone(value); return *this;}
    inline CapacityReservationInfo& WithAvailabilityZone(Aws::String&& value) { SetAvailabilityZone(std::move(value)); return *this;}
    inline CapacityReservationInfo& WithAvailabilityZone(const char* value) { SetAvailabilityZone(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The tenancy of the Capacity Reservation.</p>
     */
    inline const CapacityReservationTenancy& GetTenancy() const{ return m_tenancy; }
    inline bool TenancyHasBeenSet() const { return m_tenancyHasBeenSet; }
    inline void SetTenancy(const CapacityReservationTenancy& value) { m_tenancyHasBeenSet = true; m_tenancy = value; }
    inline void SetTenancy(CapacityReservationTenancy&& value) { m_tenancyHasBeenSet = true; m_tenancy = std::move(value); }
    inline CapacityReservationInfo& WithTenancy(const CapacityReservationTenancy& value) { SetTenancy(value); return *this;}
    inline CapacityReservationInfo& WithTenancy(CapacityReservationTenancy&& value) { SetTenancy(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_instanceType;
    bool m_instanceTypeHasBeenSet = false;

    Aws::String m_availabilityZone;
    bool m_availabilityZoneHasBeenSet = false;

    CapacityReservationTenancy m_tenancy;
    bool m_tenancyHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
