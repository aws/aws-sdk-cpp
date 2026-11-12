/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/guardduty/GuardDuty_EXPORTS.h>
#include <aws/guardduty/model/InvestigationFilterCondition.h>
#include <aws/guardduty/model/InvestigationFilterCriterionKey.h>

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
 * <p>Contains the criteria used to filter investigations.</p><p><h3>See Also:</h3>
 * <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/InvestigationFilterCriteria">AWS
 * API Reference</a></p>
 */
class InvestigationFilterCriteria {
 public:
  AWS_GUARDDUTY_API InvestigationFilterCriteria() = default;
  AWS_GUARDDUTY_API InvestigationFilterCriteria(Aws::Utils::Json::JsonView jsonValue);
  AWS_GUARDDUTY_API InvestigationFilterCriteria& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_GUARDDUTY_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>A map of investigation attributes to the conditions that they must match.
   * When you specify more than one attribute, an investigation must match the
   * conditions for every attribute. Valid attributes and values:</p> <ul> <li> <p>
   * <code>STATUS</code> – <code>RUNNING</code>, <code>COMPLETED</code>, and
   * <code>FAILED</code>.</p> </li> <li> <p> <code>RISK_LEVEL</code> –
   * <code>Info</code>, <code>Low</code>, <code>Medium</code>, <code>High</code>, and
   * <code>Critical</code>.</p> </li> <li> <p> <code>CONFIDENCE</code> –
   * <code>Unknown</code>, <code>Low</code>, <code>Medium</code>, and
   * <code>High</code>.</p> </li> <li> <p> <code>FINDING_ID</code> – A finding ID,
   * which is 32 lowercase hexadecimal characters.</p> </li> <li> <p>
   * <code>INVESTIGATION_TYPE</code> – <code>FINDING</code>, <code>ACCOUNT</code>,
   * and <code>ORGANIZATION</code>.</p> </li> </ul> <p>Values are case sensitive.
   * GuardDuty sets the risk level, confidence, and investigation type of an
   * investigation only when the investigation completes.</p>
   */
  inline const Aws::Map<InvestigationFilterCriterionKey, InvestigationFilterCondition>& GetCriterion() const { return m_criterion; }
  inline bool CriterionHasBeenSet() const { return m_criterionHasBeenSet; }
  template <typename CriterionT = Aws::Map<InvestigationFilterCriterionKey, InvestigationFilterCondition>>
  void SetCriterion(CriterionT&& value) {
    m_criterionHasBeenSet = true;
    m_criterion = std::forward<CriterionT>(value);
  }
  template <typename CriterionT = Aws::Map<InvestigationFilterCriterionKey, InvestigationFilterCondition>>
  InvestigationFilterCriteria& WithCriterion(CriterionT&& value) {
    SetCriterion(std::forward<CriterionT>(value));
    return *this;
  }
  inline InvestigationFilterCriteria& AddCriterion(InvestigationFilterCriterionKey key, InvestigationFilterCondition value) {
    m_criterionHasBeenSet = true;
    m_criterion.emplace(key, value);
    return *this;
  }
  ///@}
 private:
  Aws::Map<InvestigationFilterCriterionKey, InvestigationFilterCondition> m_criterion;
  bool m_criterionHasBeenSet = false;
};

}  // namespace Model
}  // namespace GuardDuty
}  // namespace Aws
