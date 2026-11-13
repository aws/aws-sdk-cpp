/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/guardduty/GuardDuty_EXPORTS.h>
#include <aws/guardduty/model/SharedResource.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace GuardDuty {
namespace Model {

/**
 * <p>Contains information about a finding type that GuardDuty
 * observed.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/ObservedFindingType">AWS
 * API Reference</a></p>
 */
class ObservedFindingType {
 public:
  AWS_GUARDDUTY_API ObservedFindingType() = default;
  AWS_GUARDDUTY_API ObservedFindingType(Aws::Utils::Json::JsonView jsonValue);
  AWS_GUARDDUTY_API ObservedFindingType& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_GUARDDUTY_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The finding type.</p>
   */
  inline const Aws::String& GetFindingType() const { return m_findingType; }
  inline bool FindingTypeHasBeenSet() const { return m_findingTypeHasBeenSet; }
  template <typename FindingTypeT = Aws::String>
  void SetFindingType(FindingTypeT&& value) {
    m_findingTypeHasBeenSet = true;
    m_findingType = std::forward<FindingTypeT>(value);
  }
  template <typename FindingTypeT = Aws::String>
  ObservedFindingType& WithFindingType(FindingTypeT&& value) {
    SetFindingType(std::forward<FindingTypeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The number of findings of this type.</p>
   */
  inline long long GetCount() const { return m_count; }
  inline bool CountHasBeenSet() const { return m_countHasBeenSet; }
  inline void SetCount(long long value) {
    m_countHasBeenSet = true;
    m_count = value;
  }
  inline ObservedFindingType& WithCount(long long value) {
    SetCount(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The highest severity score among the findings of this type, from 0 to 10.</p>
   */
  inline double GetSeverityMax() const { return m_severityMax; }
  inline bool SeverityMaxHasBeenSet() const { return m_severityMaxHasBeenSet; }
  inline void SetSeverityMax(double value) {
    m_severityMaxHasBeenSet = true;
    m_severityMax = value;
  }
  inline ObservedFindingType& WithSeverityMax(double value) {
    SetSeverityMax(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The resources that the findings of this type share with the investigated
   * activity.</p>
   */
  inline const Aws::Vector<SharedResource>& GetSharedResources() const { return m_sharedResources; }
  inline bool SharedResourcesHasBeenSet() const { return m_sharedResourcesHasBeenSet; }
  template <typename SharedResourcesT = Aws::Vector<SharedResource>>
  void SetSharedResources(SharedResourcesT&& value) {
    m_sharedResourcesHasBeenSet = true;
    m_sharedResources = std::forward<SharedResourcesT>(value);
  }
  template <typename SharedResourcesT = Aws::Vector<SharedResource>>
  ObservedFindingType& WithSharedResources(SharedResourcesT&& value) {
    SetSharedResources(std::forward<SharedResourcesT>(value));
    return *this;
  }
  template <typename SharedResourcesT = SharedResource>
  ObservedFindingType& AddSharedResources(SharedResourcesT&& value) {
    m_sharedResourcesHasBeenSet = true;
    m_sharedResources.emplace_back(std::forward<SharedResourcesT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_findingType;

  long long m_count{0};

  double m_severityMax{0.0};

  Aws::Vector<SharedResource> m_sharedResources;
  bool m_findingTypeHasBeenSet = false;
  bool m_countHasBeenSet = false;
  bool m_severityMaxHasBeenSet = false;
  bool m_sharedResourcesHasBeenSet = false;
};

}  // namespace Model
}  // namespace GuardDuty
}  // namespace Aws
