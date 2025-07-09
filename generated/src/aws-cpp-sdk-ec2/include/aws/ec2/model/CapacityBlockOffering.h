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
    AWS_EC2_API CapacityBlockOffering() = default;
    AWS_EC2_API CapacityBlockOffering(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API CapacityBlockOffering& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The ID of the Capacity Block offering.</p>
     */
    inline const Aws::String& GetCapacityBlockOfferingId() const { return m_capacityBlockOfferingId; }
    inline bool CapacityBlockOfferingIdHasBeenSet() const { return m_capacityBlockOfferingIdHasBeenSet; }
    template<typename CapacityBlockOfferingIdT = Aws::String>
    void SetCapacityBlockOfferingId(CapacityBlockOfferingIdT&& value) { m_capacityBlockOfferingIdHasBeenSet = true; m_capacityBlockOfferingId = std::forward<CapacityBlockOfferingIdT>(value); }
    template<typename CapacityBlockOfferingIdT = Aws::String>
    CapacityBlockOffering& WithCapacityBlockOfferingId(CapacityBlockOfferingIdT&& value) { SetCapacityBlockOfferingId(std::forward<CapacityBlockOfferingIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The instance type of the Capacity Block offering.</p>
     */
    inline const Aws::String& GetInstanceType() const { return m_instanceType; }
    inline bool InstanceTypeHasBeenSet() const { return m_instanceTypeHasBeenSet; }
    template<typename InstanceTypeT = Aws::String>
    void SetInstanceType(InstanceTypeT&& value) { m_instanceTypeHasBeenSet = true; m_instanceType = std::forward<InstanceTypeT>(value); }
    template<typename InstanceTypeT = Aws::String>
    CapacityBlockOffering& WithInstanceType(InstanceTypeT&& value) { SetInstanceType(std::forward<InstanceTypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Availability Zone of the Capacity Block offering.</p>
     */
    inline const Aws::String& GetAvailabilityZone() const { return m_availabilityZone; }
    inline bool AvailabilityZoneHasBeenSet() const { return m_availabilityZoneHasBeenSet; }
    template<typename AvailabilityZoneT = Aws::String>
    void SetAvailabilityZone(AvailabilityZoneT&& value) { m_availabilityZoneHasBeenSet = true; m_availabilityZone = std::forward<AvailabilityZoneT>(value); }
    template<typename AvailabilityZoneT = Aws::String>
    CapacityBlockOffering& WithAvailabilityZone(AvailabilityZoneT&& value) { SetAvailabilityZone(std::forward<AvailabilityZoneT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of instances in the Capacity Block offering.</p>
     */
    inline int GetInstanceCount() const { return m_instanceCount; }
    inline bool InstanceCountHasBeenSet() const { return m_instanceCountHasBeenSet; }
    inline void SetInstanceCount(int value) { m_instanceCountHasBeenSet = true; m_instanceCount = value; }
    inline CapacityBlockOffering& WithInstanceCount(int value) { SetInstanceCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The start date of the Capacity Block offering.</p>
     */
    inline const Aws::Utils::DateTime& GetStartDate() const { return m_startDate; }
    inline bool StartDateHasBeenSet() const { return m_startDateHasBeenSet; }
    template<typename StartDateT = Aws::Utils::DateTime>
    void SetStartDate(StartDateT&& value) { m_startDateHasBeenSet = true; m_startDate = std::forward<StartDateT>(value); }
    template<typename StartDateT = Aws::Utils::DateTime>
    CapacityBlockOffering& WithStartDate(StartDateT&& value) { SetStartDate(std::forward<StartDateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The end date of the Capacity Block offering.</p>
     */
    inline const Aws::Utils::DateTime& GetEndDate() const { return m_endDate; }
    inline bool EndDateHasBeenSet() const { return m_endDateHasBeenSet; }
    template<typename EndDateT = Aws::Utils::DateTime>
    void SetEndDate(EndDateT&& value) { m_endDateHasBeenSet = true; m_endDate = std::forward<EndDateT>(value); }
    template<typename EndDateT = Aws::Utils::DateTime>
    CapacityBlockOffering& WithEndDate(EndDateT&& value) { SetEndDate(std::forward<EndDateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of hours (in addition to
     * <code>capacityBlockDurationMinutes</code>) for the duration of the Capacity
     * Block reservation. For example, if a Capacity Block starts at <b>04:55</b> and
     * ends at <b>11:30</b>, the hours field would be <b>6</b>.</p>
     */
    inline int GetCapacityBlockDurationHours() const { return m_capacityBlockDurationHours; }
    inline bool CapacityBlockDurationHoursHasBeenSet() const { return m_capacityBlockDurationHoursHasBeenSet; }
    inline void SetCapacityBlockDurationHours(int value) { m_capacityBlockDurationHoursHasBeenSet = true; m_capacityBlockDurationHours = value; }
    inline CapacityBlockOffering& WithCapacityBlockDurationHours(int value) { SetCapacityBlockDurationHours(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The total price to be paid up front.</p>
     */
    inline const Aws::String& GetUpfrontFee() const { return m_upfrontFee; }
    inline bool UpfrontFeeHasBeenSet() const { return m_upfrontFeeHasBeenSet; }
    template<typename UpfrontFeeT = Aws::String>
    void SetUpfrontFee(UpfrontFeeT&& value) { m_upfrontFeeHasBeenSet = true; m_upfrontFee = std::forward<UpfrontFeeT>(value); }
    template<typename UpfrontFeeT = Aws::String>
    CapacityBlockOffering& WithUpfrontFee(UpfrontFeeT&& value) { SetUpfrontFee(std::forward<UpfrontFeeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The currency of the payment for the Capacity Block.</p>
     */
    inline const Aws::String& GetCurrencyCode() const { return m_currencyCode; }
    inline bool CurrencyCodeHasBeenSet() const { return m_currencyCodeHasBeenSet; }
    template<typename CurrencyCodeT = Aws::String>
    void SetCurrencyCode(CurrencyCodeT&& value) { m_currencyCodeHasBeenSet = true; m_currencyCode = std::forward<CurrencyCodeT>(value); }
    template<typename CurrencyCodeT = Aws::String>
    CapacityBlockOffering& WithCurrencyCode(CurrencyCodeT&& value) { SetCurrencyCode(std::forward<CurrencyCodeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The tenancy of the Capacity Block.</p>
     */
    inline CapacityReservationTenancy GetTenancy() const { return m_tenancy; }
    inline bool TenancyHasBeenSet() const { return m_tenancyHasBeenSet; }
    inline void SetTenancy(CapacityReservationTenancy value) { m_tenancyHasBeenSet = true; m_tenancy = value; }
    inline CapacityBlockOffering& WithTenancy(CapacityReservationTenancy value) { SetTenancy(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The EC2 UltraServer type of the Capacity Block offering.</p>
     */
    inline const Aws::String& GetUltraserverType() const { return m_ultraserverType; }
    inline bool UltraserverTypeHasBeenSet() const { return m_ultraserverTypeHasBeenSet; }
    template<typename UltraserverTypeT = Aws::String>
    void SetUltraserverType(UltraserverTypeT&& value) { m_ultraserverTypeHasBeenSet = true; m_ultraserverType = std::forward<UltraserverTypeT>(value); }
    template<typename UltraserverTypeT = Aws::String>
    CapacityBlockOffering& WithUltraserverType(UltraserverTypeT&& value) { SetUltraserverType(std::forward<UltraserverTypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of EC2 UltraServers in the offering.</p>
     */
    inline int GetUltraserverCount() const { return m_ultraserverCount; }
    inline bool UltraserverCountHasBeenSet() const { return m_ultraserverCountHasBeenSet; }
    inline void SetUltraserverCount(int value) { m_ultraserverCountHasBeenSet = true; m_ultraserverCount = value; }
    inline CapacityBlockOffering& WithUltraserverCount(int value) { SetUltraserverCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of minutes (in addition to
     * <code>capacityBlockDurationHours</code>) for the duration of the Capacity Block
     * reservation. For example, if a Capacity Block starts at <b>08:55</b> and ends at
     * <b>11:30</b>, the minutes field would be <b>35</b>.</p>
     */
    inline int GetCapacityBlockDurationMinutes() const { return m_capacityBlockDurationMinutes; }
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

    int m_instanceCount{0};
    bool m_instanceCountHasBeenSet = false;

    Aws::Utils::DateTime m_startDate{};
    bool m_startDateHasBeenSet = false;

    Aws::Utils::DateTime m_endDate{};
    bool m_endDateHasBeenSet = false;

    int m_capacityBlockDurationHours{0};
    bool m_capacityBlockDurationHoursHasBeenSet = false;

    Aws::String m_upfrontFee;
    bool m_upfrontFeeHasBeenSet = false;

    Aws::String m_currencyCode;
    bool m_currencyCodeHasBeenSet = false;

    CapacityReservationTenancy m_tenancy{CapacityReservationTenancy::NOT_SET};
    bool m_tenancyHasBeenSet = false;

    Aws::String m_ultraserverType;
    bool m_ultraserverTypeHasBeenSet = false;

    int m_ultraserverCount{0};
    bool m_ultraserverCountHasBeenSet = false;

    int m_capacityBlockDurationMinutes{0};
    bool m_capacityBlockDurationMinutesHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
