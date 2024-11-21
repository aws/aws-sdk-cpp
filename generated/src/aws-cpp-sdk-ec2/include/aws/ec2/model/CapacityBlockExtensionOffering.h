/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
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
   * <p>The recommended Capacity Block extension that fits your search
   * requirements.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/CapacityBlockExtensionOffering">AWS
   * API Reference</a></p>
   */
  class CapacityBlockExtensionOffering
  {
  public:
    AWS_EC2_API CapacityBlockExtensionOffering();
    AWS_EC2_API CapacityBlockExtensionOffering(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API CapacityBlockExtensionOffering& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The ID of the Capacity Block extension offering.</p>
     */
    inline const Aws::String& GetCapacityBlockExtensionOfferingId() const{ return m_capacityBlockExtensionOfferingId; }
    inline bool CapacityBlockExtensionOfferingIdHasBeenSet() const { return m_capacityBlockExtensionOfferingIdHasBeenSet; }
    inline void SetCapacityBlockExtensionOfferingId(const Aws::String& value) { m_capacityBlockExtensionOfferingIdHasBeenSet = true; m_capacityBlockExtensionOfferingId = value; }
    inline void SetCapacityBlockExtensionOfferingId(Aws::String&& value) { m_capacityBlockExtensionOfferingIdHasBeenSet = true; m_capacityBlockExtensionOfferingId = std::move(value); }
    inline void SetCapacityBlockExtensionOfferingId(const char* value) { m_capacityBlockExtensionOfferingIdHasBeenSet = true; m_capacityBlockExtensionOfferingId.assign(value); }
    inline CapacityBlockExtensionOffering& WithCapacityBlockExtensionOfferingId(const Aws::String& value) { SetCapacityBlockExtensionOfferingId(value); return *this;}
    inline CapacityBlockExtensionOffering& WithCapacityBlockExtensionOfferingId(Aws::String&& value) { SetCapacityBlockExtensionOfferingId(std::move(value)); return *this;}
    inline CapacityBlockExtensionOffering& WithCapacityBlockExtensionOfferingId(const char* value) { SetCapacityBlockExtensionOfferingId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The instance type of the Capacity Block that will be extended.</p>
     */
    inline const Aws::String& GetInstanceType() const{ return m_instanceType; }
    inline bool InstanceTypeHasBeenSet() const { return m_instanceTypeHasBeenSet; }
    inline void SetInstanceType(const Aws::String& value) { m_instanceTypeHasBeenSet = true; m_instanceType = value; }
    inline void SetInstanceType(Aws::String&& value) { m_instanceTypeHasBeenSet = true; m_instanceType = std::move(value); }
    inline void SetInstanceType(const char* value) { m_instanceTypeHasBeenSet = true; m_instanceType.assign(value); }
    inline CapacityBlockExtensionOffering& WithInstanceType(const Aws::String& value) { SetInstanceType(value); return *this;}
    inline CapacityBlockExtensionOffering& WithInstanceType(Aws::String&& value) { SetInstanceType(std::move(value)); return *this;}
    inline CapacityBlockExtensionOffering& WithInstanceType(const char* value) { SetInstanceType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of instances in the Capacity Block extension offering.</p>
     */
    inline int GetInstanceCount() const{ return m_instanceCount; }
    inline bool InstanceCountHasBeenSet() const { return m_instanceCountHasBeenSet; }
    inline void SetInstanceCount(int value) { m_instanceCountHasBeenSet = true; m_instanceCount = value; }
    inline CapacityBlockExtensionOffering& WithInstanceCount(int value) { SetInstanceCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Availability Zone of the Capacity Block that will be extended.</p>
     */
    inline const Aws::String& GetAvailabilityZone() const{ return m_availabilityZone; }
    inline bool AvailabilityZoneHasBeenSet() const { return m_availabilityZoneHasBeenSet; }
    inline void SetAvailabilityZone(const Aws::String& value) { m_availabilityZoneHasBeenSet = true; m_availabilityZone = value; }
    inline void SetAvailabilityZone(Aws::String&& value) { m_availabilityZoneHasBeenSet = true; m_availabilityZone = std::move(value); }
    inline void SetAvailabilityZone(const char* value) { m_availabilityZoneHasBeenSet = true; m_availabilityZone.assign(value); }
    inline CapacityBlockExtensionOffering& WithAvailabilityZone(const Aws::String& value) { SetAvailabilityZone(value); return *this;}
    inline CapacityBlockExtensionOffering& WithAvailabilityZone(Aws::String&& value) { SetAvailabilityZone(std::move(value)); return *this;}
    inline CapacityBlockExtensionOffering& WithAvailabilityZone(const char* value) { SetAvailabilityZone(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Availability Zone ID of the Capacity Block that will be extended.</p>
     */
    inline const Aws::String& GetAvailabilityZoneId() const{ return m_availabilityZoneId; }
    inline bool AvailabilityZoneIdHasBeenSet() const { return m_availabilityZoneIdHasBeenSet; }
    inline void SetAvailabilityZoneId(const Aws::String& value) { m_availabilityZoneIdHasBeenSet = true; m_availabilityZoneId = value; }
    inline void SetAvailabilityZoneId(Aws::String&& value) { m_availabilityZoneIdHasBeenSet = true; m_availabilityZoneId = std::move(value); }
    inline void SetAvailabilityZoneId(const char* value) { m_availabilityZoneIdHasBeenSet = true; m_availabilityZoneId.assign(value); }
    inline CapacityBlockExtensionOffering& WithAvailabilityZoneId(const Aws::String& value) { SetAvailabilityZoneId(value); return *this;}
    inline CapacityBlockExtensionOffering& WithAvailabilityZoneId(Aws::String&& value) { SetAvailabilityZoneId(std::move(value)); return *this;}
    inline CapacityBlockExtensionOffering& WithAvailabilityZoneId(const char* value) { SetAvailabilityZoneId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The start date of the Capacity Block that will be extended.</p>
     */
    inline const Aws::Utils::DateTime& GetStartDate() const{ return m_startDate; }
    inline bool StartDateHasBeenSet() const { return m_startDateHasBeenSet; }
    inline void SetStartDate(const Aws::Utils::DateTime& value) { m_startDateHasBeenSet = true; m_startDate = value; }
    inline void SetStartDate(Aws::Utils::DateTime&& value) { m_startDateHasBeenSet = true; m_startDate = std::move(value); }
    inline CapacityBlockExtensionOffering& WithStartDate(const Aws::Utils::DateTime& value) { SetStartDate(value); return *this;}
    inline CapacityBlockExtensionOffering& WithStartDate(Aws::Utils::DateTime&& value) { SetStartDate(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time at which the Capacity Block extension will start. This date
     * is also the same as the end date of the Capacity Block that will be
     * extended.</p>
     */
    inline const Aws::Utils::DateTime& GetCapacityBlockExtensionStartDate() const{ return m_capacityBlockExtensionStartDate; }
    inline bool CapacityBlockExtensionStartDateHasBeenSet() const { return m_capacityBlockExtensionStartDateHasBeenSet; }
    inline void SetCapacityBlockExtensionStartDate(const Aws::Utils::DateTime& value) { m_capacityBlockExtensionStartDateHasBeenSet = true; m_capacityBlockExtensionStartDate = value; }
    inline void SetCapacityBlockExtensionStartDate(Aws::Utils::DateTime&& value) { m_capacityBlockExtensionStartDateHasBeenSet = true; m_capacityBlockExtensionStartDate = std::move(value); }
    inline CapacityBlockExtensionOffering& WithCapacityBlockExtensionStartDate(const Aws::Utils::DateTime& value) { SetCapacityBlockExtensionStartDate(value); return *this;}
    inline CapacityBlockExtensionOffering& WithCapacityBlockExtensionStartDate(Aws::Utils::DateTime&& value) { SetCapacityBlockExtensionStartDate(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time at which the Capacity Block extension expires. When a
     * Capacity Block expires, the reserved capacity is released and you can no longer
     * launch instances into it. The Capacity Block's state changes to
     * <code>expired</code> when it reaches its end date</p>
     */
    inline const Aws::Utils::DateTime& GetCapacityBlockExtensionEndDate() const{ return m_capacityBlockExtensionEndDate; }
    inline bool CapacityBlockExtensionEndDateHasBeenSet() const { return m_capacityBlockExtensionEndDateHasBeenSet; }
    inline void SetCapacityBlockExtensionEndDate(const Aws::Utils::DateTime& value) { m_capacityBlockExtensionEndDateHasBeenSet = true; m_capacityBlockExtensionEndDate = value; }
    inline void SetCapacityBlockExtensionEndDate(Aws::Utils::DateTime&& value) { m_capacityBlockExtensionEndDateHasBeenSet = true; m_capacityBlockExtensionEndDate = std::move(value); }
    inline CapacityBlockExtensionOffering& WithCapacityBlockExtensionEndDate(const Aws::Utils::DateTime& value) { SetCapacityBlockExtensionEndDate(value); return *this;}
    inline CapacityBlockExtensionOffering& WithCapacityBlockExtensionEndDate(Aws::Utils::DateTime&& value) { SetCapacityBlockExtensionEndDate(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The amount of time of the Capacity Block extension offering in hours.</p>
     */
    inline int GetCapacityBlockExtensionDurationHours() const{ return m_capacityBlockExtensionDurationHours; }
    inline bool CapacityBlockExtensionDurationHoursHasBeenSet() const { return m_capacityBlockExtensionDurationHoursHasBeenSet; }
    inline void SetCapacityBlockExtensionDurationHours(int value) { m_capacityBlockExtensionDurationHoursHasBeenSet = true; m_capacityBlockExtensionDurationHours = value; }
    inline CapacityBlockExtensionOffering& WithCapacityBlockExtensionDurationHours(int value) { SetCapacityBlockExtensionDurationHours(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The total price of the Capacity Block extension offering, to be paid up
     * front.</p>
     */
    inline const Aws::String& GetUpfrontFee() const{ return m_upfrontFee; }
    inline bool UpfrontFeeHasBeenSet() const { return m_upfrontFeeHasBeenSet; }
    inline void SetUpfrontFee(const Aws::String& value) { m_upfrontFeeHasBeenSet = true; m_upfrontFee = value; }
    inline void SetUpfrontFee(Aws::String&& value) { m_upfrontFeeHasBeenSet = true; m_upfrontFee = std::move(value); }
    inline void SetUpfrontFee(const char* value) { m_upfrontFeeHasBeenSet = true; m_upfrontFee.assign(value); }
    inline CapacityBlockExtensionOffering& WithUpfrontFee(const Aws::String& value) { SetUpfrontFee(value); return *this;}
    inline CapacityBlockExtensionOffering& WithUpfrontFee(Aws::String&& value) { SetUpfrontFee(std::move(value)); return *this;}
    inline CapacityBlockExtensionOffering& WithUpfrontFee(const char* value) { SetUpfrontFee(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The currency of the payment for the Capacity Block extension offering.</p>
     */
    inline const Aws::String& GetCurrencyCode() const{ return m_currencyCode; }
    inline bool CurrencyCodeHasBeenSet() const { return m_currencyCodeHasBeenSet; }
    inline void SetCurrencyCode(const Aws::String& value) { m_currencyCodeHasBeenSet = true; m_currencyCode = value; }
    inline void SetCurrencyCode(Aws::String&& value) { m_currencyCodeHasBeenSet = true; m_currencyCode = std::move(value); }
    inline void SetCurrencyCode(const char* value) { m_currencyCodeHasBeenSet = true; m_currencyCode.assign(value); }
    inline CapacityBlockExtensionOffering& WithCurrencyCode(const Aws::String& value) { SetCurrencyCode(value); return *this;}
    inline CapacityBlockExtensionOffering& WithCurrencyCode(Aws::String&& value) { SetCurrencyCode(std::move(value)); return *this;}
    inline CapacityBlockExtensionOffering& WithCurrencyCode(const char* value) { SetCurrencyCode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates the tenancy of the Capacity Block extension offering. A Capacity
     * Block can have one of the following tenancy settings:</p> <ul> <li> <p>
     * <code>default</code> - The Capacity Block is created on hardware that is shared
     * with other Amazon Web Services accounts.</p> </li> <li> <p>
     * <code>dedicated</code> - The Capacity Block is created on single-tenant hardware
     * that is dedicated to a single Amazon Web Services account.</p> </li> </ul>
     */
    inline const CapacityReservationTenancy& GetTenancy() const{ return m_tenancy; }
    inline bool TenancyHasBeenSet() const { return m_tenancyHasBeenSet; }
    inline void SetTenancy(const CapacityReservationTenancy& value) { m_tenancyHasBeenSet = true; m_tenancy = value; }
    inline void SetTenancy(CapacityReservationTenancy&& value) { m_tenancyHasBeenSet = true; m_tenancy = std::move(value); }
    inline CapacityBlockExtensionOffering& WithTenancy(const CapacityReservationTenancy& value) { SetTenancy(value); return *this;}
    inline CapacityBlockExtensionOffering& WithTenancy(CapacityReservationTenancy&& value) { SetTenancy(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_capacityBlockExtensionOfferingId;
    bool m_capacityBlockExtensionOfferingIdHasBeenSet = false;

    Aws::String m_instanceType;
    bool m_instanceTypeHasBeenSet = false;

    int m_instanceCount;
    bool m_instanceCountHasBeenSet = false;

    Aws::String m_availabilityZone;
    bool m_availabilityZoneHasBeenSet = false;

    Aws::String m_availabilityZoneId;
    bool m_availabilityZoneIdHasBeenSet = false;

    Aws::Utils::DateTime m_startDate;
    bool m_startDateHasBeenSet = false;

    Aws::Utils::DateTime m_capacityBlockExtensionStartDate;
    bool m_capacityBlockExtensionStartDateHasBeenSet = false;

    Aws::Utils::DateTime m_capacityBlockExtensionEndDate;
    bool m_capacityBlockExtensionEndDateHasBeenSet = false;

    int m_capacityBlockExtensionDurationHours;
    bool m_capacityBlockExtensionDurationHoursHasBeenSet = false;

    Aws::String m_upfrontFee;
    bool m_upfrontFeeHasBeenSet = false;

    Aws::String m_currencyCode;
    bool m_currencyCodeHasBeenSet = false;

    CapacityReservationTenancy m_tenancy;
    bool m_tenancyHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
