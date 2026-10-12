/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore/BedrockAgentCore_EXPORTS.h>
#include <aws/bedrock-agentcore/model/RecordExpiryAction.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace BedrockAgentCore {
namespace Model {

/**
 * <p>Specifies the record expiry (long-term memory time-to-live) applied to the
 * records in a batch request. Provide exactly one of
 * <code>recordExpiryDurationDays</code> or <code>action</code>. Set
 * <code>recordExpiryDurationDays</code> to configure or update the expiry, or set
 * <code>action</code> to <code>REMOVE</code> to remove a previously configured
 * expiry.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-2024-02-28/RecordExpirySpecification">AWS
 * API Reference</a></p>
 */
class RecordExpirySpecification {
 public:
  AWS_BEDROCKAGENTCORE_API RecordExpirySpecification() = default;
  AWS_BEDROCKAGENTCORE_API RecordExpirySpecification(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORE_API RecordExpirySpecification& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORE_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The duration, in days, after which the records in this request expire. The
   * minimum is 31 days.</p>
   */
  inline int GetRecordExpiryDurationDays() const { return m_recordExpiryDurationDays; }
  inline bool RecordExpiryDurationDaysHasBeenSet() const { return m_recordExpiryDurationDaysHasBeenSet; }
  inline void SetRecordExpiryDurationDays(int value) {
    m_recordExpiryDurationDaysHasBeenSet = true;
    m_recordExpiryDurationDays = value;
  }
  inline RecordExpirySpecification& WithRecordExpiryDurationDays(int value) {
    SetRecordExpiryDurationDays(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The action to apply to the existing record expiry configuration. Set to
   * <code>REMOVE</code> to remove a previously configured expiry so that the records
   * no longer expire. This value does not apply when creating records.</p>
   */
  inline RecordExpiryAction GetAction() const { return m_action; }
  inline bool ActionHasBeenSet() const { return m_actionHasBeenSet; }
  inline void SetAction(RecordExpiryAction value) {
    m_actionHasBeenSet = true;
    m_action = value;
  }
  inline RecordExpirySpecification& WithAction(RecordExpiryAction value) {
    SetAction(value);
    return *this;
  }
  ///@}
 private:
  int m_recordExpiryDurationDays{0};

  RecordExpiryAction m_action{RecordExpiryAction::NOT_SET};
  bool m_recordExpiryDurationDaysHasBeenSet = false;
  bool m_actionHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockAgentCore
}  // namespace Aws
