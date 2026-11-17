/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/EC2_EXPORTS.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Xml {
class XmlNode;
}  // namespace Xml
}  // namespace Utils
namespace EC2 {
namespace Model {

/**
 * <p>Describes an individual segment within a Capacity Block offering. Each
 * segment represents a distinct block of capacity with its own Availability Zone,
 * instance type, duration, pricing, and schedule.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/CapacityBlockOfferingSegment">AWS
 * API Reference</a></p>
 */
class CapacityBlockOfferingSegment {
 public:
  AWS_EC2_API CapacityBlockOfferingSegment() = default;
  AWS_EC2_API CapacityBlockOfferingSegment(const Aws::Utils::Xml::XmlNode& xmlNode);
  AWS_EC2_API CapacityBlockOfferingSegment& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

  AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
  AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;

  ///@{
  /**
   * <p>The instance type of the Capacity Block offering segment.</p>
   */
  inline const Aws::String& GetInstanceType() const { return m_instanceType; }
  inline bool InstanceTypeHasBeenSet() const { return m_instanceTypeHasBeenSet; }
  template <typename InstanceTypeT = Aws::String>
  void SetInstanceType(InstanceTypeT&& value) {
    m_instanceTypeHasBeenSet = true;
    m_instanceType = std::forward<InstanceTypeT>(value);
  }
  template <typename InstanceTypeT = Aws::String>
  CapacityBlockOfferingSegment& WithInstanceType(InstanceTypeT&& value) {
    SetInstanceType(std::forward<InstanceTypeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Availability Zone of the Capacity Block offering segment.</p>
   */
  inline const Aws::String& GetAvailabilityZone() const { return m_availabilityZone; }
  inline bool AvailabilityZoneHasBeenSet() const { return m_availabilityZoneHasBeenSet; }
  template <typename AvailabilityZoneT = Aws::String>
  void SetAvailabilityZone(AvailabilityZoneT&& value) {
    m_availabilityZoneHasBeenSet = true;
    m_availabilityZone = std::forward<AvailabilityZoneT>(value);
  }
  template <typename AvailabilityZoneT = Aws::String>
  CapacityBlockOfferingSegment& WithAvailabilityZone(AvailabilityZoneT&& value) {
    SetAvailabilityZone(std::forward<AvailabilityZoneT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ID of the Availability Zone for the Capacity Block offering segment.</p>
   */
  inline const Aws::String& GetAvailabilityZoneId() const { return m_availabilityZoneId; }
  inline bool AvailabilityZoneIdHasBeenSet() const { return m_availabilityZoneIdHasBeenSet; }
  template <typename AvailabilityZoneIdT = Aws::String>
  void SetAvailabilityZoneId(AvailabilityZoneIdT&& value) {
    m_availabilityZoneIdHasBeenSet = true;
    m_availabilityZoneId = std::forward<AvailabilityZoneIdT>(value);
  }
  template <typename AvailabilityZoneIdT = Aws::String>
  CapacityBlockOfferingSegment& WithAvailabilityZoneId(AvailabilityZoneIdT&& value) {
    SetAvailabilityZoneId(std::forward<AvailabilityZoneIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The number of instances in the Capacity Block offering segment.</p>
   */
  inline int GetInstanceCount() const { return m_instanceCount; }
  inline bool InstanceCountHasBeenSet() const { return m_instanceCountHasBeenSet; }
  inline void SetInstanceCount(int value) {
    m_instanceCountHasBeenSet = true;
    m_instanceCount = value;
  }
  inline CapacityBlockOfferingSegment& WithInstanceCount(int value) {
    SetInstanceCount(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The start date of the Capacity Block offering segment.</p>
   */
  inline const Aws::Utils::DateTime& GetStartDate() const { return m_startDate; }
  inline bool StartDateHasBeenSet() const { return m_startDateHasBeenSet; }
  template <typename StartDateT = Aws::Utils::DateTime>
  void SetStartDate(StartDateT&& value) {
    m_startDateHasBeenSet = true;
    m_startDate = std::forward<StartDateT>(value);
  }
  template <typename StartDateT = Aws::Utils::DateTime>
  CapacityBlockOfferingSegment& WithStartDate(StartDateT&& value) {
    SetStartDate(std::forward<StartDateT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The end date of the Capacity Block offering segment.</p>
   */
  inline const Aws::Utils::DateTime& GetEndDate() const { return m_endDate; }
  inline bool EndDateHasBeenSet() const { return m_endDateHasBeenSet; }
  template <typename EndDateT = Aws::Utils::DateTime>
  void SetEndDate(EndDateT&& value) {
    m_endDateHasBeenSet = true;
    m_endDate = std::forward<EndDateT>(value);
  }
  template <typename EndDateT = Aws::Utils::DateTime>
  CapacityBlockOfferingSegment& WithEndDate(EndDateT&& value) {
    SetEndDate(std::forward<EndDateT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The number of hours for the duration of the Capacity Block offering
   * segment.</p>
   */
  inline int GetCapacityBlockDurationHours() const { return m_capacityBlockDurationHours; }
  inline bool CapacityBlockDurationHoursHasBeenSet() const { return m_capacityBlockDurationHoursHasBeenSet; }
  inline void SetCapacityBlockDurationHours(int value) {
    m_capacityBlockDurationHoursHasBeenSet = true;
    m_capacityBlockDurationHours = value;
  }
  inline CapacityBlockOfferingSegment& WithCapacityBlockDurationHours(int value) {
    SetCapacityBlockDurationHours(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The number of minutes for the duration of the Capacity Block offering
   * segment.</p>
   */
  inline int GetCapacityBlockDurationMinutes() const { return m_capacityBlockDurationMinutes; }
  inline bool CapacityBlockDurationMinutesHasBeenSet() const { return m_capacityBlockDurationMinutesHasBeenSet; }
  inline void SetCapacityBlockDurationMinutes(int value) {
    m_capacityBlockDurationMinutesHasBeenSet = true;
    m_capacityBlockDurationMinutes = value;
  }
  inline CapacityBlockOfferingSegment& WithCapacityBlockDurationMinutes(int value) {
    SetCapacityBlockDurationMinutes(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The total price to be paid up front for the Capacity Block offering
   * segment.</p>
   */
  inline const Aws::String& GetUpfrontFee() const { return m_upfrontFee; }
  inline bool UpfrontFeeHasBeenSet() const { return m_upfrontFeeHasBeenSet; }
  template <typename UpfrontFeeT = Aws::String>
  void SetUpfrontFee(UpfrontFeeT&& value) {
    m_upfrontFeeHasBeenSet = true;
    m_upfrontFee = std::forward<UpfrontFeeT>(value);
  }
  template <typename UpfrontFeeT = Aws::String>
  CapacityBlockOfferingSegment& WithUpfrontFee(UpfrontFeeT&& value) {
    SetUpfrontFee(std::forward<UpfrontFeeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The currency of the payment for the Capacity Block offering segment.</p>
   */
  inline const Aws::String& GetCurrencyCode() const { return m_currencyCode; }
  inline bool CurrencyCodeHasBeenSet() const { return m_currencyCodeHasBeenSet; }
  template <typename CurrencyCodeT = Aws::String>
  void SetCurrencyCode(CurrencyCodeT&& value) {
    m_currencyCodeHasBeenSet = true;
    m_currencyCode = std::forward<CurrencyCodeT>(value);
  }
  template <typename CurrencyCodeT = Aws::String>
  CapacityBlockOfferingSegment& WithCurrencyCode(CurrencyCodeT&& value) {
    SetCurrencyCode(std::forward<CurrencyCodeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The type of zone where the Capacity Block offering segment is available.</p>
   */
  inline const Aws::String& GetZoneType() const { return m_zoneType; }
  inline bool ZoneTypeHasBeenSet() const { return m_zoneTypeHasBeenSet; }
  template <typename ZoneTypeT = Aws::String>
  void SetZoneType(ZoneTypeT&& value) {
    m_zoneTypeHasBeenSet = true;
    m_zoneType = std::forward<ZoneTypeT>(value);
  }
  template <typename ZoneTypeT = Aws::String>
  CapacityBlockOfferingSegment& WithZoneType(ZoneTypeT&& value) {
    SetZoneType(std::forward<ZoneTypeT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_instanceType;

  Aws::String m_availabilityZone;

  Aws::String m_availabilityZoneId;

  int m_instanceCount{0};

  Aws::Utils::DateTime m_startDate{};

  Aws::Utils::DateTime m_endDate{};

  int m_capacityBlockDurationHours{0};

  int m_capacityBlockDurationMinutes{0};

  Aws::String m_upfrontFee;

  Aws::String m_currencyCode;

  Aws::String m_zoneType;
  bool m_instanceTypeHasBeenSet = false;
  bool m_availabilityZoneHasBeenSet = false;
  bool m_availabilityZoneIdHasBeenSet = false;
  bool m_instanceCountHasBeenSet = false;
  bool m_startDateHasBeenSet = false;
  bool m_endDateHasBeenSet = false;
  bool m_capacityBlockDurationHoursHasBeenSet = false;
  bool m_capacityBlockDurationMinutesHasBeenSet = false;
  bool m_upfrontFeeHasBeenSet = false;
  bool m_currencyCodeHasBeenSet = false;
  bool m_zoneTypeHasBeenSet = false;
};

}  // namespace Model
}  // namespace EC2
}  // namespace Aws
