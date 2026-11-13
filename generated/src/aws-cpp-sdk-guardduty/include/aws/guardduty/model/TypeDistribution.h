/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/guardduty/GuardDuty_EXPORTS.h>

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
 * <p>Contains the number and percentage of findings of a finding
 * type.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/TypeDistribution">AWS
 * API Reference</a></p>
 */
class TypeDistribution {
 public:
  AWS_GUARDDUTY_API TypeDistribution() = default;
  AWS_GUARDDUTY_API TypeDistribution(Aws::Utils::Json::JsonView jsonValue);
  AWS_GUARDDUTY_API TypeDistribution& operator=(Aws::Utils::Json::JsonView jsonValue);
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
  TypeDistribution& WithFindingType(FindingTypeT&& value) {
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
  inline TypeDistribution& WithCount(long long value) {
    SetCount(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The percentage of findings that are of this type, from 0 to 100.</p>
   */
  inline double GetPercentage() const { return m_percentage; }
  inline bool PercentageHasBeenSet() const { return m_percentageHasBeenSet; }
  inline void SetPercentage(double value) {
    m_percentageHasBeenSet = true;
    m_percentage = value;
  }
  inline TypeDistribution& WithPercentage(double value) {
    SetPercentage(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The most common severity among findings of this type.</p>
   */
  inline const Aws::String& GetDominantSeverity() const { return m_dominantSeverity; }
  inline bool DominantSeverityHasBeenSet() const { return m_dominantSeverityHasBeenSet; }
  template <typename DominantSeverityT = Aws::String>
  void SetDominantSeverity(DominantSeverityT&& value) {
    m_dominantSeverityHasBeenSet = true;
    m_dominantSeverity = std::forward<DominantSeverityT>(value);
  }
  template <typename DominantSeverityT = Aws::String>
  TypeDistribution& WithDominantSeverity(DominantSeverityT&& value) {
    SetDominantSeverity(std::forward<DominantSeverityT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_findingType;

  long long m_count{0};

  double m_percentage{0.0};

  Aws::String m_dominantSeverity;
  bool m_findingTypeHasBeenSet = false;
  bool m_countHasBeenSet = false;
  bool m_percentageHasBeenSet = false;
  bool m_dominantSeverityHasBeenSet = false;
};

}  // namespace Model
}  // namespace GuardDuty
}  // namespace Aws
