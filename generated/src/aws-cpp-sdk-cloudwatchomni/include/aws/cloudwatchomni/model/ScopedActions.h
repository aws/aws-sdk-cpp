/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudwatchomni/CloudWatchOmni_EXPORTS.h>
#include <aws/cloudwatchomni/model/ResourceScope.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/crt/cbor/Cbor.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Cbor {
class CborValue;
}  // namespace Cbor
}  // namespace Utils
namespace CloudWatchOmni {
namespace Model {

/**
 * <p>A group of actions within an access grant, together with the resource scopes
 * and context conditions that apply to exactly those actions.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/cloudwatchomni-2025-01-01/ScopedActions">AWS
 * API Reference</a></p>
 */
class ScopedActions {
 public:
  AWS_CLOUDWATCHOMNI_API ScopedActions() = default;
  AWS_CLOUDWATCHOMNI_API ScopedActions(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_CLOUDWATCHOMNI_API ScopedActions& operator=(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_CLOUDWATCHOMNI_API void CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const;

  ///@{
  /**
   * <p>The actions this group applies to.</p>
   */
  inline const Aws::Vector<Aws::String>& GetActions() const { return m_actions; }
  inline bool ActionsHasBeenSet() const { return m_actionsHasBeenSet; }
  template <typename ActionsT = Aws::Vector<Aws::String>>
  void SetActions(ActionsT&& value) {
    m_actionsHasBeenSet = true;
    m_actions = std::forward<ActionsT>(value);
  }
  template <typename ActionsT = Aws::Vector<Aws::String>>
  ScopedActions& WithActions(ActionsT&& value) {
    SetActions(std::forward<ActionsT>(value));
    return *this;
  }
  template <typename ActionsT = Aws::String>
  ScopedActions& AddActions(ActionsT&& value) {
    m_actionsHasBeenSet = true;
    m_actions.emplace_back(std::forward<ActionsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Optional resource scopes constraining these actions to specific
   * resources.</p>
   */
  inline const Aws::Vector<ResourceScope>& GetResources() const { return m_resources; }
  inline bool ResourcesHasBeenSet() const { return m_resourcesHasBeenSet; }
  template <typename ResourcesT = Aws::Vector<ResourceScope>>
  void SetResources(ResourcesT&& value) {
    m_resourcesHasBeenSet = true;
    m_resources = std::forward<ResourcesT>(value);
  }
  template <typename ResourcesT = Aws::Vector<ResourceScope>>
  ScopedActions& WithResources(ResourcesT&& value) {
    SetResources(std::forward<ResourcesT>(value));
    return *this;
  }
  template <typename ResourcesT = ResourceScope>
  ScopedActions& AddResources(ResourcesT&& value) {
    m_resourcesHasBeenSet = true;
    m_resources.emplace_back(std::forward<ResourcesT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Optional context conditions for fine-grained access control on these
   * actions.</p>
   */
  inline const Aws::Map<Aws::String, Aws::Vector<Aws::String>>& GetContextConditions() const { return m_contextConditions; }
  inline bool ContextConditionsHasBeenSet() const { return m_contextConditionsHasBeenSet; }
  template <typename ContextConditionsT = Aws::Map<Aws::String, Aws::Vector<Aws::String>>>
  void SetContextConditions(ContextConditionsT&& value) {
    m_contextConditionsHasBeenSet = true;
    m_contextConditions = std::forward<ContextConditionsT>(value);
  }
  template <typename ContextConditionsT = Aws::Map<Aws::String, Aws::Vector<Aws::String>>>
  ScopedActions& WithContextConditions(ContextConditionsT&& value) {
    SetContextConditions(std::forward<ContextConditionsT>(value));
    return *this;
  }
  template <typename ContextConditionsKeyT = Aws::String, typename ContextConditionsValueT = Aws::Vector<Aws::String>>
  ScopedActions& AddContextConditions(ContextConditionsKeyT&& key, ContextConditionsValueT&& value) {
    m_contextConditionsHasBeenSet = true;
    m_contextConditions.emplace(std::forward<ContextConditionsKeyT>(key), std::forward<ContextConditionsValueT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Vector<Aws::String> m_actions;

  Aws::Vector<ResourceScope> m_resources;

  Aws::Map<Aws::String, Aws::Vector<Aws::String>> m_contextConditions;
  bool m_actionsHasBeenSet = false;
  bool m_resourcesHasBeenSet = false;
  bool m_contextConditionsHasBeenSet = false;
};

}  // namespace Model
}  // namespace CloudWatchOmni
}  // namespace Aws
