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
   * <p>The recommended Capacity Block that fits your search
   * requirements.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/CapacityBlockOffering">AWS
   * API Reference</a></p>
   */
  class CapacityBlockOffering
  {
  public:
    AWS_EC2_API CapacityBlockOffering();
    AWS_EC2_API CapacityBlockOffering(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API CapacityBlockOffering& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The ID of the Capacity Block offering.</p>
     */
    inline const Aws::String& GetCapacityBlockOfferingId() const{ return m_capacityBlockOfferingId; }
    inline bool CapacityBlockOfferingIdHasBeenSet() const { return m_capacityBlockOfferingIdHasBeenSet; }
    inline void SetCapacityBlockOfferingId(const Aws::String& value) { m_capacityBlockOfferingIdHasBeenSet = true; m_capacityBlockOfferingId = value; }
    inline void SetCapacityBlockOfferingId(Aws::String&& value) { m_capacityBlockOfferingIdHasBeenSet = true; m_capacityBlockOfferingId = std::move(value); }
    inline void SetCapacityBlockOfferingId(const char* value) { m_capacityBlockOfferingIdHasBeenSet = true; m_capacityBlockOfferingId.assign(value); }
    inline CapacityBlockOffering& WithCapacityBlockOfferingId(const Aws::String& value) { SetCapacityBlockOfferingId(value); return *this;}
    inline CapacityBlockOffering& WithCapacityBlockOfferingId(Aws::String&& value) { SetCapacityBlockOfferingId(std::move(value)); return *this;}
    inline CapacityBlockOffering& WithCapacityBlockOfferingId(const char* value) { SetCapacityBlockOfferingId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The instance type of the Capacity Block offering.</p>
     */
    inline const Aws::String& GetInstanceType() const{ return m_instanceType; }
    inline bool InstanceTypeHasBeenSet() const { return m_instanceTypeHasBeenSet; }
    inline void SetInstanceType(const Aws::String& value) { m_instanceTypeHasBeenSet = true; m_instanceType = value; }
    inline void SetInstanceType(Aws::String&& value) { m_instanceTypeHasBeenSet = true; m_instanceType = std::move(value); }
    inline void SetInstanceType(const char* value) { m_instanceTypeHasBeenSet = true; m_instanceType.assign(value); }
    inline CapacityBlockOffering& WithInstanceType(const Aws::String& value) { SetInstanceType(value); return *this;}
    inline CapacityBlockOffering& WithInstanceType(Aws::String&& value) { SetInstanceType(std::move(value)); return *this;}
    inline CapacityBlockOffering& WithInstanceType(const char* value) { SetInstanceType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Availability Zone of the Capacity Block offering.</p>
     */
    inline const Aws::String& GetAvailabilityZone() const{ return m_availabilityZone; }
    inline bool AvailabilityZoneHasBeenSet() const { return m_availabilityZoneHasBeenSet; }
    inline void SetAvailabilityZone(const Aws::String& value) { m_availabilityZoneHasBeenSet = true; m_availabilityZone = value; }
    inline void SetAvailabilityZone(Aws::String&& value) { m_availabilityZoneHasBeenSet = true; m_availabilityZone = std::move(value); }
    inline void SetAvailabilityZone(const char* value) { m_availabilityZoneHasBeenSet = true; m_availabilityZone.assign(value); }
    inline CapacityBlockOffering& WithAvailabilityZone(const Aws::String& value) { SetAvailabilityZone(value); return *this;}
    inline CapacityBlockOffering& WithAvailabilityZone(Aws::String&& value) { SetAvailabilityZone(std::move(value)); return *this;}
    inline CapacityBlockOffering& WithAvailabilityZone(const char* value) { SetAvailabilityZone(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of instances in the Capacity Block offering.</p>
     */
    inline int GetInstanceCount() const{ return m_instanceCount; }
    inline bool InstanceCountHasBeenSet() const { return m_instanceCountHasBeenSet; }
    inline void SetInstanceCount(int value) { m_instanceCountHasBeenSet = true; m_instanceCount = value; }
    inline CapacityBlockOffering& WithInstanceCount(int value) { SetInstanceCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The start date of the Capacity Block offering.</p>
     */
    inline const Aws::Utils::DateTime& GetStartDate() const{ return m_startDate; }
    inline bool StartDateHasBeenSet() const { return m_startDateHasBeenSet; }
    inline void SetStartDate(const Aws::Utils::DateTime& value) { m_startDateHasBeenSet = true; m_startDate = value; }
    inline void SetStartDate(Aws::Utils::DateTime&& value) { m_startDateHasBeenSet = true; m_startDate = std::move(value); }
    inline CapacityBlockOffering& WithStartDate(const Aws::Utils::DateTime& value) { SetStartDate(value); return *this;}
    inline CapacityBlockOffering& WithStartDate(Aws::Utils::DateTime&& value) { SetStartDate(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The end date of the Capacity Block offering.</p>
     */
    inline const Aws::Utils::DateTime& GetEndDate() const{ return m_endDate; }
    inline bool EndDateHasBeenSet() const { return m_endDateHasBeenSet; }
    inline void SetEndDate(const Aws::Utils::DateTime& value) { m_endDateHasBeenSet = true; m_endDate = value; }
    inline void SetEndDate(Aws::Utils::DateTime&& value) { m_endDateHasBeenSet = true; m_endDate = std::move(value); }
    inline CapacityBlockOffering& WithEndDate(const Aws::Utils::DateTime& value) { SetEndDate(value); return *this;}
    inline CapacityBlockOffering& WithEndDate(Aws::Utils::DateTime&& value) { SetEndDate(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of hours (in addition to
     * <code>capacityBlockDurationMinutes</code>) for the duration of the Capacity
     * Block reservation. For example, if a Capacity Block starts at <b>04:55</b> and
     * ends at <b>11:30</b>, the hours field would be <b>6</b>.</p>
     */
    inline int GetCapacityBlockDurationHours() const{ return m_capacityBlockDurationHours; }
    inline bool CapacityBlockDurationHoursHasBeenSet() const { return m_capacityBlockDurationHoursHasBeenSet; }
    inline void SetCapacityBlockDurationHours(int value) { m_capacityBlockDurationHoursHasBeenSet = true; m_capacityBlockDurationHours = value; }
    inline CapacityBlockOffering& WithCapacityBlockDurationHours(int value) { SetCapacityBlockDurationHours(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The total price to be paid up front.</p>
     */
    inline const Aws::String& GetUpfrontFee() const{ return m_upfrontFee; }
    inline bool UpfrontFeeHasBeenSet() const { return m_upfrontFeeHasBeenSet; }
    inline void SetUpfrontFee(const Aws::String& value) { m_upfrontFeeHasBeenSet = true; m_upfrontFee = value; }
    inline void SetUpfrontFee(Aws::String&& value) { m_upfrontFeeHasBeenSet = true; m_upfrontFee = std::move(value); }
    inline void SetUpfrontFee(const char* value) { m_upfrontFeeHasBeenSet = true; m_upfrontFee.assign(value); }
    inline CapacityBlockOffering& WithUpfrontFee(const Aws::String& value) { SetUpfrontFee(value); return *this;}
    inline CapacityBlockOffering& WithUpfrontFee(Aws::String&& value) { SetUpfrontFee(std::move(value)); return *this;}
    inline CapacityBlockOffering& WithUpfrontFee(const char* value) { SetUpfrontFee(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The currency of the payment for the Capacity Block.</p>
     */
    inline const Aws::String& GetCurrencyCode() const{ return m_currencyCode; }
    inline bool CurrencyCodeHasBeenSet() const { return m_currencyCodeHasBeenSet; }
    inline void SetCurrencyCode(const Aws::String& value) { m_currencyCodeHasBeenSet = true; m_currencyCode = value; }
    inline void SetCurrencyCode(Aws::String&& value) { m_currencyCodeHasBeenSet = true; m_currencyCode = std::move(value); }
    inline void SetCurrencyCode(const char* value) { m_currencyCodeHasBeenSet = true; m_currencyCode.assign(value); }
    inline CapacityBlockOffering& WithCurrencyCode(const Aws::String& value) { SetCurrencyCode(value); return *this;}
    inline CapacityBlockOffering& WithCurrencyCode(Aws::String&& value) { SetCurrencyCode(std::move(value)); return *this;}
    inline CapacityBlockOffering& WithCurrencyCode(const char* value) { SetCurrencyCode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The tenancy of the Capacity Block.</p>
     */
    inline const CapacityReservationTenancy& GetTenancy() const{ return m_tenancy; }
    inline bool TenancyHasBeenSet() const { return m_tenancyHasBeenSet; }
    inline void SetTenancy(const CapacityReservationTenancy& value) { m_tenancyHasBeenSet = true; m_tenancy = value; }
    inline void SetTenancy(CapacityReservationTenancy&& value) { m_tenancyHasBeenSet = true; m_tenancy = std::move(value); }
    inline CapacityBlockOffering& WithTenancy(const CapacityReservationTenancy& value) { SetTenancy(value); return *this;}
    inline CapacityBlockOffering& WithTenancy(CapacityReservationTenancy&& value) { SetTenancy(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of minutes (in addition to
     * <code>capacityBlockDurationHours</code>) for the duration of the Capacity Block
     * reservation. For example, if a Capacity Block starts at <b>08:55</b> and ends at
     * <b>11:30</b>, the minutes field would be <b>35</b>.</p>
     */
    inline int GetCapacityBlockDurationMinutes() const{ return m_capacityBlockDurationMinutes; }
    inline bool CapacityBlockDurationMinutesHasBeenSet() const { return m_capacityBlockDurationMinutesHasBeenSet; }
    inline void SetCapacityBlockDurationMinutes(int value) { m_capacityBlockDurationMinutesHasBeenSet = true; m_capacityBlockDurationMinutes = value; }
    inline CapacityBlockOffering& WithCapacityBlockDurationMinutes(int value) { SetCapacityBlockDurationMinutes(value); return *this;}
    ///@}
  private:

    Aws::String m_capacityBlockOfferingId;
    bool m_capacityBlockOfferingIdHasBeenSet = false;

    Aws::String m_instanceType;
    bool m_instanceTypeHasBeenSet = false;

    Aws::String m_availabilityZone;
    bool m_availabilityZoneHasBeenSet = false;

    int m_instanceCount;
    bool m_instanceCountHasBeenSet = false;

    Aws::Utils::DateTime m_startDate;
    bool m_startDateHasBeenSet = false;

    Aws::Utils::DateTime m_endDate;
    bool m_endDateHasBeenSet = false;

    int m_capacityBlockDurationHours;
    bool m_capacityBlockDurationHoursHasBeenSet = false;

    Aws::String m_upfrontFee;
    bool m_upfrontFeeHasBeenSet = false;

    Aws::String m_currencyCode;
    bool m_currencyCodeHasBeenSet = false;

    CapacityReservationTenancy m_tenancy;
    bool m_tenancyHasBeenSet = false;

    int m_capacityBlockDurationMinutes;
    bool m_capacityBlockDurationMinutesHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
