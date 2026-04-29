/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore-control/BedrockAgentCoreControl_EXPORTS.h>
#include <aws/bedrock-agentcore-control/model/IamPrincipal.h>

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
 * <p>Union for principal matching. Currently supports IAM principal ARN glob
 * matching. Extensible for future principal types (e.g., OAuth client
 * ID).</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-control-2023-06-05/MatchPrincipalEntry">AWS
 * API Reference</a></p>
 */
class MatchPrincipalEntry {
 public:
  AWS_BEDROCKAGENTCORECONTROL_API MatchPrincipalEntry() = default;
  AWS_BEDROCKAGENTCORECONTROL_API MatchPrincipalEntry(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORECONTROL_API MatchPrincipalEntry& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORECONTROL_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>An IAM principal to match against, specified by ARN.</p>
   */
  inline const IamPrincipal& GetIamPrincipal() const { return m_iamPrincipal; }
  inline bool IamPrincipalHasBeenSet() const { return m_iamPrincipalHasBeenSet; }
  template <typename IamPrincipalT = IamPrincipal>
  void SetIamPrincipal(IamPrincipalT&& value) {
    m_iamPrincipalHasBeenSet = true;
    m_iamPrincipal = std::forward<IamPrincipalT>(value);
  }
  template <typename IamPrincipalT = IamPrincipal>
  MatchPrincipalEntry& WithIamPrincipal(IamPrincipalT&& value) {
    SetIamPrincipal(std::forward<IamPrincipalT>(value));
    return *this;
  }
  ///@}
 private:
  IamPrincipal m_iamPrincipal;
  bool m_iamPrincipalHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
