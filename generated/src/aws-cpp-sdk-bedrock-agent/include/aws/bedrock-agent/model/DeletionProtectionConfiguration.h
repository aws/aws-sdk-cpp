/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent/BedrockAgent_EXPORTS.h>
#include <aws/bedrock-agent/model/EnabledOrDisabledState.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace BedrockAgent {
namespace Model {

/**
 * <p>Configuration for deletion protection.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agent-2023-06-05/DeletionProtectionConfiguration">AWS
 * API Reference</a></p>
 */
class DeletionProtectionConfiguration {
 public:
  AWS_BEDROCKAGENT_API DeletionProtectionConfiguration() = default;
  AWS_BEDROCKAGENT_API DeletionProtectionConfiguration(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENT_API DeletionProtectionConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Enable or disable deletion protection for the connector.</p>
   */
  inline EnabledOrDisabledState GetDeletionProtectionStatus() const { return m_deletionProtectionStatus; }
  inline bool DeletionProtectionStatusHasBeenSet() const { return m_deletionProtectionStatusHasBeenSet; }
  inline void SetDeletionProtectionStatus(EnabledOrDisabledState value) {
    m_deletionProtectionStatusHasBeenSet = true;
    m_deletionProtectionStatus = value;
  }
  inline DeletionProtectionConfiguration& WithDeletionProtectionStatus(EnabledOrDisabledState value) {
    SetDeletionProtectionStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The threshold is the maximum percentage of documents that a sync job can
   * delete from your index. If a sync would delete more than this percentage, the
   * sync skips its delete phase, leaving your indexed documents in place. Not
   * supported for the Custom connector.</p>
   */
  inline int GetDeletionProtectionThreshold() const { return m_deletionProtectionThreshold; }
  inline bool DeletionProtectionThresholdHasBeenSet() const { return m_deletionProtectionThresholdHasBeenSet; }
  inline void SetDeletionProtectionThreshold(int value) {
    m_deletionProtectionThresholdHasBeenSet = true;
    m_deletionProtectionThreshold = value;
  }
  inline DeletionProtectionConfiguration& WithDeletionProtectionThreshold(int value) {
    SetDeletionProtectionThreshold(value);
    return *this;
  }
  ///@}
 private:
  EnabledOrDisabledState m_deletionProtectionStatus{EnabledOrDisabledState::NOT_SET};

  int m_deletionProtectionThreshold{0};
  bool m_deletionProtectionStatusHasBeenSet = false;
  bool m_deletionProtectionThresholdHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockAgent
}  // namespace Aws
