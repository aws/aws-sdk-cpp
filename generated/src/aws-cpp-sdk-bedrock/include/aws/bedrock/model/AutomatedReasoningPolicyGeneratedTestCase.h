/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock/Bedrock_EXPORTS.h>
#include <aws/bedrock/model/AutomatedReasoningCheckResult.h>
#include <aws/core/utils/memory/stl/AWSString.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace Bedrock {
namespace Model {

/**
 * <p>Represents a generated test case, consisting of query content, guard content,
 * and expected results.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-2023-04-20/AutomatedReasoningPolicyGeneratedTestCase">AWS
 * API Reference</a></p>
 */
class AutomatedReasoningPolicyGeneratedTestCase {
 public:
  AWS_BEDROCK_API AutomatedReasoningPolicyGeneratedTestCase() = default;
  AWS_BEDROCK_API AutomatedReasoningPolicyGeneratedTestCase(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCK_API AutomatedReasoningPolicyGeneratedTestCase& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCK_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The input query or prompt that generated the content. This provides context
   * for the validation.</p>
   */
  inline const Aws::String& GetQueryContent() const { return m_queryContent; }
  inline bool QueryContentHasBeenSet() const { return m_queryContentHasBeenSet; }
  template <typename QueryContentT = Aws::String>
  void SetQueryContent(QueryContentT&& value) {
    m_queryContentHasBeenSet = true;
    m_queryContent = std::forward<QueryContentT>(value);
  }
  template <typename QueryContentT = Aws::String>
  AutomatedReasoningPolicyGeneratedTestCase& WithQueryContent(QueryContentT&& value) {
    SetQueryContent(std::forward<QueryContentT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The output content that's validated by the Automated Reasoning policy. This
   * represents the foundation model response that will be checked for accuracy.</p>
   */
  inline const Aws::String& GetGuardContent() const { return m_guardContent; }
  inline bool GuardContentHasBeenSet() const { return m_guardContentHasBeenSet; }
  template <typename GuardContentT = Aws::String>
  void SetGuardContent(GuardContentT&& value) {
    m_guardContentHasBeenSet = true;
    m_guardContent = std::forward<GuardContentT>(value);
  }
  template <typename GuardContentT = Aws::String>
  AutomatedReasoningPolicyGeneratedTestCase& WithGuardContent(GuardContentT&& value) {
    SetGuardContent(std::forward<GuardContentT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The expected results of the generated test case. Possible values include:</p>
   * <ul> <li> <p> <code>VALID</code> - The claims are true. The claims are implied
   * by the premises and the Automated Reasoning policy. Given the Automated
   * Reasoning policy and premises, it is not possible for these claims to be false.
   * In other words, there are no alternative answers that are true that contradict
   * the claims.</p> </li> <li> <p> <code>INVALID</code> - The claims are false. The
   * claims are not implied by the premises and Automated Reasoning policy.
   * Furthermore, there exists different claims that are consistent with the premises
   * and Automated Reasoning policy.</p> </li> <li> <p> <code>SATISFIABLE</code> -
   * The claims can be true or false. It depends on what assumptions are made for the
   * claim to be implied from the premises and Automated Reasoning policy rules. In
   * this situation, different assumptions can make input claims false and
   * alternative claims true.</p> </li> <li> <p> <code>IMPOSSIBLE</code> - Automated
   * Reasoning can’t make a statement about the claims. This can happen if the
   * premises are logically incorrect, or if there is a conflict within the Automated
   * Reasoning policy itself.</p> </li> </ul>
   */
  inline AutomatedReasoningCheckResult GetExpectedAggregatedFindingsResult() const { return m_expectedAggregatedFindingsResult; }
  inline bool ExpectedAggregatedFindingsResultHasBeenSet() const { return m_expectedAggregatedFindingsResultHasBeenSet; }
  inline void SetExpectedAggregatedFindingsResult(AutomatedReasoningCheckResult value) {
    m_expectedAggregatedFindingsResultHasBeenSet = true;
    m_expectedAggregatedFindingsResult = value;
  }
  inline AutomatedReasoningPolicyGeneratedTestCase& WithExpectedAggregatedFindingsResult(AutomatedReasoningCheckResult value) {
    SetExpectedAggregatedFindingsResult(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_queryContent;

  Aws::String m_guardContent;

  AutomatedReasoningCheckResult m_expectedAggregatedFindingsResult{AutomatedReasoningCheckResult::NOT_SET};
  bool m_queryContentHasBeenSet = false;
  bool m_guardContentHasBeenSet = false;
  bool m_expectedAggregatedFindingsResultHasBeenSet = false;
};

}  // namespace Model
}  // namespace Bedrock
}  // namespace Aws
