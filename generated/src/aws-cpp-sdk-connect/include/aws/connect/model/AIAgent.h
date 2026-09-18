/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/connect/model/AIAgentType.h>
#include <aws/core/utils/memory/stl/AWSString.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace Connect {
namespace Model {

/**
 * <p>Information about an AI agent that a security profile allows access to for
 * Agent-to-Agent authorization.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/AIAgent">AWS API
 * Reference</a></p>
 */
class AIAgent {
 public:
  AWS_CONNECT_API AIAgent() = default;
  AWS_CONNECT_API AIAgent(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONNECT_API AIAgent& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the AI agent.</p>
   */
  inline const Aws::String& GetArn() const { return m_arn; }
  inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
  template <typename ArnT = Aws::String>
  void SetArn(ArnT&& value) {
    m_arnHasBeenSet = true;
    m_arn = std::forward<ArnT>(value);
  }
  template <typename ArnT = Aws::String>
  AIAgent& WithArn(ArnT&& value) {
    SetArn(std::forward<ArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The type of the AI agent. The valid value is <code>THIRD_PARTY</code>.</p>
   */
  inline AIAgentType GetType() const { return m_type; }
  inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
  inline void SetType(AIAgentType value) {
    m_typeHasBeenSet = true;
    m_type = value;
  }
  inline AIAgent& WithType(AIAgentType value) {
    SetType(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_arn;

  AIAgentType m_type{AIAgentType::NOT_SET};
  bool m_arnHasBeenSet = false;
  bool m_typeHasBeenSet = false;
};

}  // namespace Model
}  // namespace Connect
}  // namespace Aws
