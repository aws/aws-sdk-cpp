/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore-control/BedrockAgentCoreControl_EXPORTS.h>
#include <aws/bedrock-agentcore-control/model/SessionStorageConfiguration.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace BedrockAgentCoreControl {
namespace Model {

/**
 * <p>Configuration for a filesystem that can be mounted into the AgentCore
 * Runtime.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-control-2023-06-05/FilesystemConfiguration">AWS
 * API Reference</a></p>
 */
class FilesystemConfiguration {
 public:
  AWS_BEDROCKAGENTCORECONTROL_API FilesystemConfiguration() = default;
  AWS_BEDROCKAGENTCORECONTROL_API FilesystemConfiguration(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORECONTROL_API FilesystemConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORECONTROL_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Configuration for session storage. Session storage provides persistent
   * storage that is preserved across AgentCore Runtime session invocations.</p>
   */
  inline const SessionStorageConfiguration& GetSessionStorage() const { return m_sessionStorage; }
  inline bool SessionStorageHasBeenSet() const { return m_sessionStorageHasBeenSet; }
  template <typename SessionStorageT = SessionStorageConfiguration>
  void SetSessionStorage(SessionStorageT&& value) {
    m_sessionStorageHasBeenSet = true;
    m_sessionStorage = std::forward<SessionStorageT>(value);
  }
  template <typename SessionStorageT = SessionStorageConfiguration>
  FilesystemConfiguration& WithSessionStorage(SessionStorageT&& value) {
    SetSessionStorage(std::forward<SessionStorageT>(value));
    return *this;
  }
  ///@}
 private:
  SessionStorageConfiguration m_sessionStorage;
  bool m_sessionStorageHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
