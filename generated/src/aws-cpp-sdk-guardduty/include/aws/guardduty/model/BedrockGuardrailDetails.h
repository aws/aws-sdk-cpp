/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/guardduty/GuardDuty_EXPORTS.h>
#include <aws/guardduty/model/BedrockGuardrail.h>
#include <aws/guardduty/model/ContentPolicyFilter.h>
#include <aws/guardduty/model/GuardrailAction.h>
#include <aws/guardduty/model/GuardrailSource.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace GuardDuty {
namespace Model {

/**
 * <p>Contains information about the Bedrock guardrail that was involved in a
 * finding.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/BedrockGuardrailDetails">AWS
 * API Reference</a></p>
 */
class BedrockGuardrailDetails {
 public:
  AWS_GUARDDUTY_API BedrockGuardrailDetails() = default;
  AWS_GUARDDUTY_API BedrockGuardrailDetails(Aws::Utils::Json::JsonView jsonValue);
  AWS_GUARDDUTY_API BedrockGuardrailDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_GUARDDUTY_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The list of Bedrock guardrails associated with the finding.</p>
   */
  inline const Aws::Vector<BedrockGuardrail>& GetGuardrails() const { return m_guardrails; }
  inline bool GuardrailsHasBeenSet() const { return m_guardrailsHasBeenSet; }
  template <typename GuardrailsT = Aws::Vector<BedrockGuardrail>>
  void SetGuardrails(GuardrailsT&& value) {
    m_guardrailsHasBeenSet = true;
    m_guardrails = std::forward<GuardrailsT>(value);
  }
  template <typename GuardrailsT = Aws::Vector<BedrockGuardrail>>
  BedrockGuardrailDetails& WithGuardrails(GuardrailsT&& value) {
    SetGuardrails(std::forward<GuardrailsT>(value));
    return *this;
  }
  template <typename GuardrailsT = BedrockGuardrail>
  BedrockGuardrailDetails& AddGuardrails(GuardrailsT&& value) {
    m_guardrailsHasBeenSet = true;
    m_guardrails.emplace_back(std::forward<GuardrailsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Indicates whether the guardrail intervened or not.</p>
   */
  inline GuardrailAction GetGuardrailAction() const { return m_guardrailAction; }
  inline bool GuardrailActionHasBeenSet() const { return m_guardrailActionHasBeenSet; }
  inline void SetGuardrailAction(GuardrailAction value) {
    m_guardrailActionHasBeenSet = true;
    m_guardrailAction = value;
  }
  inline BedrockGuardrailDetails& WithGuardrailAction(GuardrailAction value) {
    SetGuardrailAction(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Indicates whether the guardrail was applied on the input or output of the
   * model invocation.</p>
   */
  inline GuardrailSource GetGuardrailSource() const { return m_guardrailSource; }
  inline bool GuardrailSourceHasBeenSet() const { return m_guardrailSourceHasBeenSet; }
  inline void SetGuardrailSource(GuardrailSource value) {
    m_guardrailSourceHasBeenSet = true;
    m_guardrailSource = value;
  }
  inline BedrockGuardrailDetails& WithGuardrailSource(GuardrailSource value) {
    SetGuardrailSource(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The list of content policy filters that matched during the guardrail
   * evaluation.</p>
   */
  inline const Aws::Vector<ContentPolicyFilter>& GetContentPolicyFilters() const { return m_contentPolicyFilters; }
  inline bool ContentPolicyFiltersHasBeenSet() const { return m_contentPolicyFiltersHasBeenSet; }
  template <typename ContentPolicyFiltersT = Aws::Vector<ContentPolicyFilter>>
  void SetContentPolicyFilters(ContentPolicyFiltersT&& value) {
    m_contentPolicyFiltersHasBeenSet = true;
    m_contentPolicyFilters = std::forward<ContentPolicyFiltersT>(value);
  }
  template <typename ContentPolicyFiltersT = Aws::Vector<ContentPolicyFilter>>
  BedrockGuardrailDetails& WithContentPolicyFilters(ContentPolicyFiltersT&& value) {
    SetContentPolicyFilters(std::forward<ContentPolicyFiltersT>(value));
    return *this;
  }
  template <typename ContentPolicyFiltersT = ContentPolicyFilter>
  BedrockGuardrailDetails& AddContentPolicyFilters(ContentPolicyFiltersT&& value) {
    m_contentPolicyFiltersHasBeenSet = true;
    m_contentPolicyFilters.emplace_back(std::forward<ContentPolicyFiltersT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Vector<BedrockGuardrail> m_guardrails;

  GuardrailAction m_guardrailAction{GuardrailAction::NOT_SET};

  GuardrailSource m_guardrailSource{GuardrailSource::NOT_SET};

  Aws::Vector<ContentPolicyFilter> m_contentPolicyFilters;
  bool m_guardrailsHasBeenSet = false;
  bool m_guardrailActionHasBeenSet = false;
  bool m_guardrailSourceHasBeenSet = false;
  bool m_contentPolicyFiltersHasBeenSet = false;
};

}  // namespace Model
}  // namespace GuardDuty
}  // namespace Aws
