/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/crt/cbor/Cbor.h>
#include <aws/health/Health_EXPORTS.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Cbor {
class CborValue;
}  // namespace Cbor
}  // namespace Utils
namespace Health {
namespace Model {

/**
 * <p>A lifecycle event for an Amazon Web Services service version, such as
 * end-of-support or end-of-life.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/health-2016-08-04/LifecycleEvent">AWS
 * API Reference</a></p>
 */
class LifecycleEvent {
 public:
  AWS_HEALTH_API LifecycleEvent() = default;
  AWS_HEALTH_API LifecycleEvent(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_HEALTH_API LifecycleEvent& operator=(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_HEALTH_API void CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const;

  ///@{
  /**
   * <p>The type of lifecycle event (for example, end-of-support, end-of-life).</p>
   */
  inline const Aws::String& GetLifecycleEventType() const { return m_lifecycleEventType; }
  inline bool LifecycleEventTypeHasBeenSet() const { return m_lifecycleEventTypeHasBeenSet; }
  template <typename LifecycleEventTypeT = Aws::String>
  void SetLifecycleEventType(LifecycleEventTypeT&& value) {
    m_lifecycleEventTypeHasBeenSet = true;
    m_lifecycleEventType = std::forward<LifecycleEventTypeT>(value);
  }
  template <typename LifecycleEventTypeT = Aws::String>
  LifecycleEvent& WithLifecycleEventType(LifecycleEventTypeT&& value) {
    SetLifecycleEventType(std::forward<LifecycleEventTypeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The date of the lifecycle event.</p>
   */
  inline const Aws::Utils::DateTime& GetDate() const { return m_date; }
  inline bool DateHasBeenSet() const { return m_dateHasBeenSet; }
  template <typename DateT = Aws::Utils::DateTime>
  void SetDate(DateT&& value) {
    m_dateHasBeenSet = true;
    m_date = std::forward<DateT>(value);
  }
  template <typename DateT = Aws::Utils::DateTime>
  LifecycleEvent& WithDate(DateT&& value) {
    SetDate(std::forward<DateT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Web Services Regions affected by this lifecycle event.</p>
   */
  inline const Aws::Vector<Aws::String>& GetRegions() const { return m_regions; }
  inline bool RegionsHasBeenSet() const { return m_regionsHasBeenSet; }
  template <typename RegionsT = Aws::Vector<Aws::String>>
  void SetRegions(RegionsT&& value) {
    m_regionsHasBeenSet = true;
    m_regions = std::forward<RegionsT>(value);
  }
  template <typename RegionsT = Aws::Vector<Aws::String>>
  LifecycleEvent& WithRegions(RegionsT&& value) {
    SetRegions(std::forward<RegionsT>(value));
    return *this;
  }
  template <typename RegionsT = Aws::String>
  LifecycleEvent& AddRegions(RegionsT&& value) {
    m_regionsHasBeenSet = true;
    m_regions.emplace_back(std::forward<RegionsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The potential impact risks associated with this lifecycle event.</p>
   */
  inline const Aws::Vector<Aws::String>& GetImpactRisks() const { return m_impactRisks; }
  inline bool ImpactRisksHasBeenSet() const { return m_impactRisksHasBeenSet; }
  template <typename ImpactRisksT = Aws::Vector<Aws::String>>
  void SetImpactRisks(ImpactRisksT&& value) {
    m_impactRisksHasBeenSet = true;
    m_impactRisks = std::forward<ImpactRisksT>(value);
  }
  template <typename ImpactRisksT = Aws::Vector<Aws::String>>
  LifecycleEvent& WithImpactRisks(ImpactRisksT&& value) {
    SetImpactRisks(std::forward<ImpactRisksT>(value));
    return *this;
  }
  template <typename ImpactRisksT = Aws::String>
  LifecycleEvent& AddImpactRisks(ImpactRisksT&& value) {
    m_impactRisksHasBeenSet = true;
    m_impactRisks.emplace_back(std::forward<ImpactRisksT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A description of the lifecycle event.</p>
   */
  inline const Aws::String& GetDescription() const { return m_description; }
  inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
  template <typename DescriptionT = Aws::String>
  void SetDescription(DescriptionT&& value) {
    m_descriptionHasBeenSet = true;
    m_description = std::forward<DescriptionT>(value);
  }
  template <typename DescriptionT = Aws::String>
  LifecycleEvent& WithDescription(DescriptionT&& value) {
    SetDescription(std::forward<DescriptionT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_lifecycleEventType;

  Aws::Utils::DateTime m_date{};

  Aws::Vector<Aws::String> m_regions;

  Aws::Vector<Aws::String> m_impactRisks;

  Aws::String m_description;
  bool m_lifecycleEventTypeHasBeenSet = false;
  bool m_dateHasBeenSet = false;
  bool m_regionsHasBeenSet = false;
  bool m_impactRisksHasBeenSet = false;
  bool m_descriptionHasBeenSet = false;
};

}  // namespace Model
}  // namespace Health
}  // namespace Aws
