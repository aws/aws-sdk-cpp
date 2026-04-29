/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore-control/BedrockAgentCoreControl_EXPORTS.h>
#include <aws/bedrock-agentcore-control/model/PrincipalMatchOperator.h>
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
 * <p>An IAM principal specification for rule matching.</p><p><h3>See Also:</h3>
 * <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-control-2023-06-05/IamPrincipal">AWS
 * API Reference</a></p>
 */
class IamPrincipal {
 public:
  AWS_BEDROCKAGENTCORECONTROL_API IamPrincipal() = default;
  AWS_BEDROCKAGENTCORECONTROL_API IamPrincipal(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORECONTROL_API IamPrincipal& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORECONTROL_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the IAM principal. Supports user, role, and
   * assumed-role ARNs. Wildcards can be used with the <code>StringLike</code>
   * operator.</p>
   */
  inline const Aws::String& GetArn() const { return m_arn; }
  inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
  template <typename ArnT = Aws::String>
  void SetArn(ArnT&& value) {
    m_arnHasBeenSet = true;
    m_arn = std::forward<ArnT>(value);
  }
  template <typename ArnT = Aws::String>
  IamPrincipal& WithArn(ArnT&& value) {
    SetArn(std::forward<ArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The match operator. <code>StringEquals</code> requires an exact match.
   * <code>StringLike</code> supports wildcard patterns using <code>*</code> and
   * <code>?</code>.</p>
   */
  inline PrincipalMatchOperator GetOperator() const { return m_operator; }
  inline bool OperatorHasBeenSet() const { return m_operatorHasBeenSet; }
  inline void SetOperator(PrincipalMatchOperator value) {
    m_operatorHasBeenSet = true;
    m_operator = value;
  }
  inline IamPrincipal& WithOperator(PrincipalMatchOperator value) {
    SetOperator(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_arn;

  PrincipalMatchOperator m_operator{PrincipalMatchOperator::NOT_SET};
  bool m_arnHasBeenSet = false;
  bool m_operatorHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
