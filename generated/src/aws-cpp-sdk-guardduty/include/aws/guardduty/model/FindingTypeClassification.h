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
 * <p>Contains information about how a finding type compares with normal
 * behavior.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/FindingTypeClassification">AWS
 * API Reference</a></p>
 */
class FindingTypeClassification {
 public:
  AWS_GUARDDUTY_API FindingTypeClassification() = default;
  AWS_GUARDDUTY_API FindingTypeClassification(Aws::Utils::Json::JsonView jsonValue);
  AWS_GUARDDUTY_API FindingTypeClassification& operator=(Aws::Utils::Json::JsonView jsonValue);
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
  FindingTypeClassification& WithFindingType(FindingTypeT&& value) {
    SetFindingType(std::forward<FindingTypeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The classification of the finding type.</p>
   */
  inline const Aws::String& GetClassification() const { return m_classification; }
  inline bool ClassificationHasBeenSet() const { return m_classificationHasBeenSet; }
  template <typename ClassificationT = Aws::String>
  void SetClassification(ClassificationT&& value) {
    m_classificationHasBeenSet = true;
    m_classification = std::forward<ClassificationT>(value);
  }
  template <typename ClassificationT = Aws::String>
  FindingTypeClassification& WithClassification(ClassificationT&& value) {
    SetClassification(std::forward<ClassificationT>(value));
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
  inline FindingTypeClassification& WithCount(long long value) {
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
  inline FindingTypeClassification& WithPercentage(double value) {
    SetPercentage(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A description of the classification.</p>
   */
  inline const Aws::String& GetDescription() const { return m_description; }
  inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
  template <typename DescriptionT = Aws::String>
  void SetDescription(DescriptionT&& value) {
    m_descriptionHasBeenSet = true;
    m_description = std::forward<DescriptionT>(value);
  }
  template <typename DescriptionT = Aws::String>
  FindingTypeClassification& WithDescription(DescriptionT&& value) {
    SetDescription(std::forward<DescriptionT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_findingType;

  Aws::String m_classification;

  long long m_count{0};

  double m_percentage{0.0};

  Aws::String m_description;
  bool m_findingTypeHasBeenSet = false;
  bool m_classificationHasBeenSet = false;
  bool m_countHasBeenSet = false;
  bool m_percentageHasBeenSet = false;
  bool m_descriptionHasBeenSet = false;
};

}  // namespace Model
}  // namespace GuardDuty
}  // namespace Aws
