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
    AWS_EC2_API CapacityBlockExtensionOffering() = default;
    AWS_EC2_API CapacityBlockExtensionOffering(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API CapacityBlockExtensionOffering& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The ID of the Capacity Block extension offering.</p>
     */
    inline const Aws::String& GetCapacityBlockExtensionOfferingId() const { return m_capacityBlockExtensionOfferingId; }
    inline bool CapacityBlockExtensionOfferingIdHasBeenSet() const { return m_capacityBlockExtensionOfferingIdHasBeenSet; }
    template<typename CapacityBlockExtensionOfferingIdT = Aws::String>
    void SetCapacityBlockExtensionOfferingId(CapacityBlockExtensionOfferingIdT&& value) { m_capacityBlockExtensionOfferingIdHasBeenSet = true; m_capacityBlockExtensionOfferingId = std::forward<CapacityBlockExtensionOfferingIdT>(value); }
    template<typename CapacityBlockExtensionOfferingIdT = Aws::String>
    CapacityBlockExtensionOffering& WithCapacityBlockExtensionOfferingId(CapacityBlockExtensionOfferingIdT&& value) { SetCapacityBlockExtensionOfferingId(std::forward<CapacityBlockExtensionOfferingIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The instance type of the Capacity Block that will be extended.</p>
     */
    inline const Aws::String& GetInstanceType() const { return m_instanceType; }
    inline bool InstanceTypeHasBeenSet() const { return m_instanceTypeHasBeenSet; }
    template<typename InstanceTypeT = Aws::String>
    void SetInstanceType(InstanceTypeT&& value) { m_instanceTypeHasBeenSet = true; m_instanceType = std::forward<InstanceTypeT>(value); }
    template<typename InstanceTypeT = Aws::String>
    CapacityBlockExtensionOffering& WithInstanceType(InstanceTypeT&& value) { SetInstanceType(std::forward<InstanceTypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of instances in the Capacity Block extension offering.</p>
     */
    inline int GetInstanceCount() const { return m_instanceCount; }
    inline bool InstanceCountHasBeenSet() const { return m_instanceCountHasBeenSet; }
    inline void SetInstanceCount(int value) { m_instanceCountHasBeenSet = true; m_instanceCount = value; }
    inline CapacityBlockExtensionOffering& WithInstanceCount(int value) { SetInstanceCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Availability Zone of the Capacity Block that will be extended.</p>
     */
    inline const Aws::String& GetAvailabilityZone() const { return m_availabilityZone; }
    inline bool AvailabilityZoneHasBeenSet() const { return m_availabilityZoneHasBeenSet; }
    template<typename AvailabilityZoneT = Aws::String>
    void SetAvailabilityZone(AvailabilityZoneT&& value) { m_availabilityZoneHasBeenSet = true; m_availabilityZone = std::forward<AvailabilityZoneT>(value); }
    template<typename AvailabilityZoneT = Aws::String>
    CapacityBlockExtensionOffering& WithAvailabilityZone(AvailabilityZoneT&& value) { SetAvailabilityZone(std::forward<AvailabilityZoneT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Availability Zone ID of the Capacity Block that will be extended.</p>
     */
    inline const Aws::String& GetAvailabilityZoneId() const { return m_availabilityZoneId; }
    inline bool AvailabilityZoneIdHasBeenSet() const { return m_availabilityZoneIdHasBeenSet; }
    template<typename AvailabilityZoneIdT = Aws::String>
    void SetAvailabilityZoneId(AvailabilityZoneIdT&& value) { m_availabilityZoneIdHasBeenSet = true; m_availabilityZoneId = std::forward<AvailabilityZoneIdT>(value); }
    template<typename AvailabilityZoneIdT = Aws::String>
    CapacityBlockExtensionOffering& WithAvailabilityZoneId(AvailabilityZoneIdT&& value) { SetAvailabilityZoneId(std::forward<AvailabilityZoneIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The start date of the Capacity Block that will be extended.</p>
     */
    inline const Aws::Utils::DateTime& GetStartDate() const { return m_startDate; }
    inline bool StartDateHasBeenSet() const { return m_startDateHasBeenSet; }
    template<typename StartDateT = Aws::Utils::DateTime>
    void SetStartDate(StartDateT&& value) { m_startDateHasBeenSet = true; m_startDate = std::forward<StartDateT>(value); }
    template<typename StartDateT = Aws::Utils::DateTime>
    CapacityBlockExtensionOffering& WithStartDate(StartDateT&& value) { SetStartDate(std::forward<StartDateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time at which the Capacity Block extension will start. This date
     * is also the same as the end date of the Capacity Block that will be
     * extended.</p>
     */
    inline const Aws::Utils::DateTime& GetCapacityBlockExtensionStartDate() const { return m_capacityBlockExtensionStartDate; }
    inline bool CapacityBlockExtensionStartDateHasBeenSet() const { return m_capacityBlockExtensionStartDateHasBeenSet; }
    template<typename CapacityBlockExtensionStartDateT = Aws::Utils::DateTime>
    void SetCapacityBlockExtensionStartDate(CapacityBlockExtensionStartDateT&& value) { m_capacityBlockExtensionStartDateHasBeenSet = true; m_capacityBlockExtensionStartDate = std::forward<CapacityBlockExtensionStartDateT>(value); }
    template<typename CapacityBlockExtensionStartDateT = Aws::Utils::DateTime>
    CapacityBlockExtensionOffering& WithCapacityBlockExtensionStartDate(CapacityBlockExtensionStartDateT&& value) { SetCapacityBlockExtensionStartDate(std::forward<CapacityBlockExtensionStartDateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time at which the Capacity Block extension expires. When a
     * Capacity Block expires, the reserved capacity is released and you can no longer
     * launch instances into it. The Capacity Block's state changes to
     * <code>expired</code> when it reaches its end date</p>
     */
    inline const Aws::Utils::DateTime& GetCapacityBlockExtensionEndDate() const { return m_capacityBlockExtensionEndDate; }
    inline bool CapacityBlockExtensionEndDateHasBeenSet() const { return m_capacityBlockExtensionEndDateHasBeenSet; }
    template<typename CapacityBlockExtensionEndDateT = Aws::Utils::DateTime>
    void SetCapacityBlockExtensionEndDate(CapacityBlockExtensionEndDateT&& value) { m_capacityBlockExtensionEndDateHasBeenSet = true; m_capacityBlockExtensionEndDate = std::forward<CapacityBlockExtensionEndDateT>(value); }
    template<typename CapacityBlockExtensionEndDateT = Aws::Utils::DateTime>
    CapacityBlockExtensionOffering& WithCapacityBlockExtensionEndDate(CapacityBlockExtensionEndDateT&& value) { SetCapacityBlockExtensionEndDate(std::forward<CapacityBlockExtensionEndDateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The amount of time of the Capacity Block extension offering in hours.</p>
     */
    inline int GetCapacityBlockExtensionDurationHours() const { return m_capacityBlockExtensionDurationHours; }
    inline bool CapacityBlockExtensionDurationHoursHasBeenSet() const { return m_capacityBlockExtensionDurationHoursHasBeenSet; }
    inline void SetCapacityBlockExtensionDurationHours(int value) { m_capacityBlockExtensionDurationHoursHasBeenSet = true; m_capacityBlockExtensionDurationHours = value; }
    inline CapacityBlockExtensionOffering& WithCapacityBlockExtensionDurationHours(int value) { SetCapacityBlockExtensionDurationHours(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The total price of the Capacity Block extension offering, to be paid up
     * front.</p>
     */
    inline const Aws::String& GetUpfrontFee() const { return m_upfrontFee; }
    inline bool UpfrontFeeHasBeenSet() const { return m_upfrontFeeHasBeenSet; }
    template<typename UpfrontFeeT = Aws::String>
    void SetUpfrontFee(UpfrontFeeT&& value) { m_upfrontFeeHasBeenSet = true; m_upfrontFee = std::forward<UpfrontFeeT>(value); }
    template<typename UpfrontFeeT = Aws::String>
    CapacityBlockExtensionOffering& WithUpfrontFee(UpfrontFeeT&& value) { SetUpfrontFee(std::forward<UpfrontFeeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The currency of the payment for the Capacity Block extension offering.</p>
     */
    inline const Aws::String& GetCurrencyCode() const { return m_currencyCode; }
    inline bool CurrencyCodeHasBeenSet() const { return m_currencyCodeHasBeenSet; }
    template<typename CurrencyCodeT = Aws::String>
    void SetCurrencyCode(CurrencyCodeT&& value) { m_currencyCodeHasBeenSet = true; m_currencyCode = std::forward<CurrencyCodeT>(value); }
    template<typename CurrencyCodeT = Aws::String>
    CapacityBlockExtensionOffering& WithCurrencyCode(CurrencyCodeT&& value) { SetCurrencyCode(std::forward<CurrencyCodeT>(value)); return *this;}
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
    inline CapacityReservationTenancy GetTenancy() const { return m_tenancy; }
    inline bool TenancyHasBeenSet() const { return m_tenancyHasBeenSet; }
    inline void SetTenancy(CapacityReservationTenancy value) { m_tenancyHasBeenSet = true; m_tenancy = value; }
    inline CapacityBlockExtensionOffering& WithTenancy(CapacityReservationTenancy value) { SetTenancy(value); return *this;}
    ///@}
  private:

    Aws::String m_capacityBlockExtensionOfferingId;
    bool m_capacityBlockExtensionOfferingIdHasBeenSet = false;

    Aws::String m_instanceType;
    bool m_instanceTypeHasBeenSet = false;

    int m_instanceCount{0};
    bool m_instanceCountHasBeenSet = false;

    Aws::String m_availabilityZone;
    bool m_availabilityZoneHasBeenSet = false;

    Aws::String m_availabilityZoneId;
    bool m_availabilityZoneIdHasBeenSet = false;

    Aws::Utils::DateTime m_startDate{};
    bool m_startDateHasBeenSet = false;

    Aws::Utils::DateTime m_capacityBlockExtensionStartDate{};
    bool m_capacityBlockExtensionStartDateHasBeenSet = false;

    Aws::Utils::DateTime m_capacityBlockExtensionEndDate{};
    bool m_capacityBlockExtensionEndDateHasBeenSet = false;

    int m_capacityBlockExtensionDurationHours{0};
    bool m_capacityBlockExtensionDurationHoursHasBeenSet = false;

    Aws::String m_upfrontFee;
    bool m_upfrontFeeHasBeenSet = false;

    Aws::String m_currencyCode;
    bool m_currencyCodeHasBeenSet = false;

    CapacityReservationTenancy m_tenancy{CapacityReservationTenancy::NOT_SET};
    bool m_tenancyHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
