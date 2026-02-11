/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore/BedrockAgentCore_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

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
 * <p>Configuration for HTTP Basic Authentication using credentials stored in
 * Amazon Web Services Secrets Manager. The secret must contain a JSON object with
 * <code>username</code> and <code>password</code> string fields. Username allows
 * alphanumeric characters and <code>@._+=-</code> symbols (pattern:
 * <code>^[a-zA-Z0-9@._+=\-]+$</code>). Password allows alphanumeric characters and
 * <code>@._+=-!#$%&amp;*</code> symbols (pattern:
 * <code>^[a-zA-Z0-9@._+=\-!#$%&amp;*]+$</code>). Both fields have a maximum length
 * of 256 characters.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-2024-02-28/BasicAuth">AWS
 * API Reference</a></p>
 */
class BasicAuth {
 public:
  AWS_BEDROCKAGENTCORE_API BasicAuth() = default;
  AWS_BEDROCKAGENTCORE_API BasicAuth(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORE_API BasicAuth& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORE_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the Amazon Web Services Secrets Manager
   * secret containing proxy credentials. The secret must be a JSON object with
   * <code>username</code> and <code>password</code> string fields that meet
   * validation requirements. The caller must have
   * <code>secretsmanager:GetSecretValue</code> permission for this ARN. Example
   * secret format: <code>{"username": "proxy_user", "password":
   * "secure_password"}</code> </p>
   */
  inline const Aws::String& GetSecretArn() const { return m_secretArn; }
  inline bool SecretArnHasBeenSet() const { return m_secretArnHasBeenSet; }
  template <typename SecretArnT = Aws::String>
  void SetSecretArn(SecretArnT&& value) {
    m_secretArnHasBeenSet = true;
    m_secretArn = std::forward<SecretArnT>(value);
  }
  template <typename SecretArnT = Aws::String>
  BasicAuth& WithSecretArn(SecretArnT&& value) {
    SetSecretArn(std::forward<SecretArnT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_secretArn;
  bool m_secretArnHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockAgentCore
}  // namespace Aws
