/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore-control/BedrockAgentCoreControl_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

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
 * <p>Contains a reference to a secret stored in AWS Secrets Manager.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-control-2023-06-05/SecretReference">AWS
 * API Reference</a></p>
 */
class SecretReference {
 public:
  AWS_BEDROCKAGENTCORECONTROL_API SecretReference() = default;
  AWS_BEDROCKAGENTCORECONTROL_API SecretReference(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORECONTROL_API SecretReference& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORECONTROL_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The ID of the AWS Secrets Manager secret that stores the secret value.</p>
   */
  inline const Aws::String& GetSecretId() const { return m_secretId; }
  inline bool SecretIdHasBeenSet() const { return m_secretIdHasBeenSet; }
  template <typename SecretIdT = Aws::String>
  void SetSecretId(SecretIdT&& value) {
    m_secretIdHasBeenSet = true;
    m_secretId = std::forward<SecretIdT>(value);
  }
  template <typename SecretIdT = Aws::String>
  SecretReference& WithSecretId(SecretIdT&& value) {
    SetSecretId(std::forward<SecretIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The JSON key used to extract the secret value from the AWS Secrets Manager
   * secret.</p>
   */
  inline const Aws::String& GetJsonKey() const { return m_jsonKey; }
  inline bool JsonKeyHasBeenSet() const { return m_jsonKeyHasBeenSet; }
  template <typename JsonKeyT = Aws::String>
  void SetJsonKey(JsonKeyT&& value) {
    m_jsonKeyHasBeenSet = true;
    m_jsonKey = std::forward<JsonKeyT>(value);
  }
  template <typename JsonKeyT = Aws::String>
  SecretReference& WithJsonKey(JsonKeyT&& value) {
    SetJsonKey(std::forward<JsonKeyT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_secretId;

  Aws::String m_jsonKey;
  bool m_secretIdHasBeenSet = false;
  bool m_jsonKeyHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
