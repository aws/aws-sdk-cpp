/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/guardduty/GuardDuty_EXPORTS.h>
#include <aws/guardduty/model/ConfidenceLevel.h>
#include <aws/guardduty/model/ContentPolicyFilterAction.h>
#include <aws/guardduty/model/ContentPolicyFilterType.h>

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
 * <p>Contains information about a content policy filter that matched during a
 * guardrail evaluation.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/ContentPolicyFilter">AWS
 * API Reference</a></p>
 */
class ContentPolicyFilter {
 public:
  AWS_GUARDDUTY_API ContentPolicyFilter() = default;
  AWS_GUARDDUTY_API ContentPolicyFilter(Aws::Utils::Json::JsonView jsonValue);
  AWS_GUARDDUTY_API ContentPolicyFilter& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_GUARDDUTY_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The type of content that was filtered by the guardrail.</p>
   */
  inline ContentPolicyFilterType GetType() const { return m_type; }
  inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
  inline void SetType(ContentPolicyFilterType value) {
    m_typeHasBeenSet = true;
    m_type = value;
  }
  inline ContentPolicyFilter& WithType(ContentPolicyFilterType value) {
    SetType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The confidence level that the content matched the filter.</p>
   */
  inline ConfidenceLevel GetConfidence() const { return m_confidence; }
  inline bool ConfidenceHasBeenSet() const { return m_confidenceHasBeenSet; }
  inline void SetConfidence(ConfidenceLevel value) {
    m_confidenceHasBeenSet = true;
    m_confidence = value;
  }
  inline ContentPolicyFilter& WithConfidence(ConfidenceLevel value) {
    SetConfidence(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The action taken by the guardrail filter.</p>
   */
  inline ContentPolicyFilterAction GetAction() const { return m_action; }
  inline bool ActionHasBeenSet() const { return m_actionHasBeenSet; }
  inline void SetAction(ContentPolicyFilterAction value) {
    m_actionHasBeenSet = true;
    m_action = value;
  }
  inline ContentPolicyFilter& WithAction(ContentPolicyFilterAction value) {
    SetAction(value);
    return *this;
  }
  ///@}
 private:
  ContentPolicyFilterType m_type{ContentPolicyFilterType::NOT_SET};

  ConfidenceLevel m_confidence{ConfidenceLevel::NOT_SET};

  ContentPolicyFilterAction m_action{ContentPolicyFilterAction::NOT_SET};
  bool m_typeHasBeenSet = false;
  bool m_confidenceHasBeenSet = false;
  bool m_actionHasBeenSet = false;
};

}  // namespace Model
}  // namespace GuardDuty
}  // namespace Aws
