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
 * <p>Authentication method using JWT with key ID and subject claims.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-2024-02-28/LinkedAccountDeveloperJwt">AWS
 * API Reference</a></p>
 */
class LinkedAccountDeveloperJwt {
 public:
  AWS_BEDROCKAGENTCORE_API LinkedAccountDeveloperJwt() = default;
  AWS_BEDROCKAGENTCORE_API LinkedAccountDeveloperJwt(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORE_API LinkedAccountDeveloperJwt& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORE_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The key ID (kid) from the JWT header. Identifies which key was used to sign
   * the JWT.</p>
   */
  inline const Aws::String& GetKid() const { return m_kid; }
  inline bool KidHasBeenSet() const { return m_kidHasBeenSet; }
  template <typename KidT = Aws::String>
  void SetKid(KidT&& value) {
    m_kidHasBeenSet = true;
    m_kid = std::forward<KidT>(value);
  }
  template <typename KidT = Aws::String>
  LinkedAccountDeveloperJwt& WithKid(KidT&& value) {
    SetKid(std::forward<KidT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The subject (sub) claim from the JWT payload. Identifies the principal that
   * is the subject of the JWT.</p>
   */
  inline const Aws::String& GetSub() const { return m_sub; }
  inline bool SubHasBeenSet() const { return m_subHasBeenSet; }
  template <typename SubT = Aws::String>
  void SetSub(SubT&& value) {
    m_subHasBeenSet = true;
    m_sub = std::forward<SubT>(value);
  }
  template <typename SubT = Aws::String>
  LinkedAccountDeveloperJwt& WithSub(SubT&& value) {
    SetSub(std::forward<SubT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_kid;

  Aws::String m_sub;
  bool m_kidHasBeenSet = false;
  bool m_subHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockAgentCore
}  // namespace Aws
