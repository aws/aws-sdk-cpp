/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/Document.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/iam-toolbox/IAMToolbox_EXPORTS.h>
#include <aws/iam-toolbox/model/EvaluatedEffect.h>
#include <aws/iam-toolbox/model/MatchedPolicy.h>

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
 * <p>Represents an individual evaluation for a single action and resource pair.
 * This includes the context, the resulting effect, and any policies that
 * matched.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/iam-toolbox-2018-05-10/Evaluation">AWS
 * API Reference</a></p>
 */
class Evaluation {
 public:
  AWS_IAMTOOLBOX_API Evaluation() = default;
  AWS_IAMTOOLBOX_API Evaluation(Aws::Utils::Json::JsonView jsonValue);
  AWS_IAMTOOLBOX_API Evaluation& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_IAMTOOLBOX_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The action evaluated for this request (for example,
   * <code>iam:PassRole</code>).</p>
   */
  inline const Aws::String& GetAction() const { return m_action; }
  inline bool ActionHasBeenSet() const { return m_actionHasBeenSet; }
  template <typename ActionT = Aws::String>
  void SetAction(ActionT&& value) {
    m_actionHasBeenSet = true;
    m_action = std::forward<ActionT>(value);
  }
  template <typename ActionT = Aws::String>
  Evaluation& WithAction(ActionT&& value) {
    SetAction(std::forward<ActionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The resource that the action targeted. This is typically a resource ARN, but
   * can be a wildcard ARN that matches multiple resources, or empty for actions that
   * are not resource-specific.</p>
   */
  inline const Aws::String& GetResource() const { return m_resource; }
  inline bool ResourceHasBeenSet() const { return m_resourceHasBeenSet; }
  template <typename ResourceT = Aws::String>
  void SetResource(ResourceT&& value) {
    m_resourceHasBeenSet = true;
    m_resource = std::forward<ResourceT>(value);
  }
  template <typename ResourceT = Aws::String>
  Evaluation& WithResource(ResourceT&& value) {
    SetResource(std::forward<ResourceT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The context keys and values specific to this evaluation. These are applied on
   * top of the request context.</p>
   */
  inline const Aws::Map<Aws::String, Aws::Utils::Document>& GetContext() const { return m_context; }
  inline bool ContextHasBeenSet() const { return m_contextHasBeenSet; }
  template <typename ContextT = Aws::Map<Aws::String, Aws::Utils::Document>>
  void SetContext(ContextT&& value) {
    m_contextHasBeenSet = true;
    m_context = std::forward<ContextT>(value);
  }
  template <typename ContextT = Aws::Map<Aws::String, Aws::Utils::Document>>
  Evaluation& WithContext(ContextT&& value) {
    SetContext(std::forward<ContextT>(value));
    return *this;
  }
  template <typename ContextKeyT = Aws::String, typename ContextValueT = Aws::Utils::Document>
  Evaluation& AddContext(ContextKeyT&& key, ContextValueT&& value) {
    m_contextHasBeenSet = true;
    m_context.emplace(std::forward<ContextKeyT>(key), std::forward<ContextValueT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The result of the evaluation. Valid values:</p> <ul> <li> <p>
   * <code>ALLOW</code> - The action was allowed.</p> </li> <li> <p>
   * <code>EXPLICIT_DENY</code> - The action was explicitly denied by a policy.</p>
   * </li> <li> <p> <code>IMPLICIT_DENY</code> - The action was denied because no
   * policy allowed it.</p> </li> </ul>
   */
  inline EvaluatedEffect GetEvaluatedEffect() const { return m_evaluatedEffect; }
  inline bool EvaluatedEffectHasBeenSet() const { return m_evaluatedEffectHasBeenSet; }
  inline void SetEvaluatedEffect(EvaluatedEffect value) {
    m_evaluatedEffectHasBeenSet = true;
    m_evaluatedEffect = value;
  }
  inline Evaluation& WithEvaluatedEffect(EvaluatedEffect value) {
    SetEvaluatedEffect(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The policies that matched during evaluation of this action and resource. An
   * implicit denial produces no matched policies.</p>
   */
  inline const Aws::Vector<MatchedPolicy>& GetMatchedPolicies() const { return m_matchedPolicies; }
  inline bool MatchedPoliciesHasBeenSet() const { return m_matchedPoliciesHasBeenSet; }
  template <typename MatchedPoliciesT = Aws::Vector<MatchedPolicy>>
  void SetMatchedPolicies(MatchedPoliciesT&& value) {
    m_matchedPoliciesHasBeenSet = true;
    m_matchedPolicies = std::forward<MatchedPoliciesT>(value);
  }
  template <typename MatchedPoliciesT = Aws::Vector<MatchedPolicy>>
  Evaluation& WithMatchedPolicies(MatchedPoliciesT&& value) {
    SetMatchedPolicies(std::forward<MatchedPoliciesT>(value));
    return *this;
  }
  template <typename MatchedPoliciesT = MatchedPolicy>
  Evaluation& AddMatchedPolicies(MatchedPoliciesT&& value) {
    m_matchedPoliciesHasBeenSet = true;
    m_matchedPolicies.emplace_back(std::forward<MatchedPoliciesT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_action;

  Aws::String m_resource;

  Aws::Map<Aws::String, Aws::Utils::Document> m_context;

  EvaluatedEffect m_evaluatedEffect{EvaluatedEffect::NOT_SET};

  Aws::Vector<MatchedPolicy> m_matchedPolicies;
  bool m_actionHasBeenSet = false;
  bool m_resourceHasBeenSet = false;
  bool m_contextHasBeenSet = false;
  bool m_evaluatedEffectHasBeenSet = false;
  bool m_matchedPoliciesHasBeenSet = false;
};

}  // namespace Model
}  // namespace IAMToolbox
}  // namespace Aws
