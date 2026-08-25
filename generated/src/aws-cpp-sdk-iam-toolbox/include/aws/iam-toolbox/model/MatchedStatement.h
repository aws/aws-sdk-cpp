/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iam-toolbox/IAMToolbox_EXPORTS.h>
#include <aws/iam-toolbox/model/StatementEffect.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace IAMToolbox {
namespace Model {

/**
 * <p>A statement that matched during evaluation.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/iam-toolbox-2018-05-10/MatchedStatement">AWS
 * API Reference</a></p>
 */
class MatchedStatement {
 public:
  AWS_IAMTOOLBOX_API MatchedStatement() = default;
  AWS_IAMTOOLBOX_API MatchedStatement(Aws::Utils::Json::JsonView jsonValue);
  AWS_IAMTOOLBOX_API MatchedStatement& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_IAMTOOLBOX_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The statement ID (Sid). If the statement has no Sid, one is generated for
   * reference.</p>
   */
  inline const Aws::String& GetSid() const { return m_sid; }
  inline bool SidHasBeenSet() const { return m_sidHasBeenSet; }
  template <typename SidT = Aws::String>
  void SetSid(SidT&& value) {
    m_sidHasBeenSet = true;
    m_sid = std::forward<SidT>(value);
  }
  template <typename SidT = Aws::String>
  MatchedStatement& WithSid(SidT&& value) {
    SetSid(std::forward<SidT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The evaluated effect of this statement. Valid values:</p> <ul> <li> <p>
   * <code>ALLOW</code> - The statement allows the action.</p> </li> <li> <p>
   * <code>DENY</code> - The statement denies the action.</p> </li> </ul>
   */
  inline StatementEffect GetEvaluatedEffect() const { return m_evaluatedEffect; }
  inline bool EvaluatedEffectHasBeenSet() const { return m_evaluatedEffectHasBeenSet; }
  inline void SetEvaluatedEffect(StatementEffect value) {
    m_evaluatedEffectHasBeenSet = true;
    m_evaluatedEffect = value;
  }
  inline MatchedStatement& WithEvaluatedEffect(StatementEffect value) {
    SetEvaluatedEffect(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_sid;

  StatementEffect m_evaluatedEffect{StatementEffect::NOT_SET};
  bool m_sidHasBeenSet = false;
  bool m_evaluatedEffectHasBeenSet = false;
};

}  // namespace Model
}  // namespace IAMToolbox
}  // namespace Aws
