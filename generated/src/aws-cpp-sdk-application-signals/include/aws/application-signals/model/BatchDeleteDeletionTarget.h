/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/application-signals/ApplicationSignals_EXPORTS.h>
#include <aws/application-signals/model/BatchDeleteByResourceArns.h>
#include <aws/application-signals/model/BatchDeleteScope.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace ApplicationSignals {
namespace Model {

/**
 * <p>Union type for batch delete target selection. Exactly one of the two modes
 * must be specified.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/application-signals-2024-04-15/BatchDeleteDeletionTarget">AWS
 * API Reference</a></p>
 */
class BatchDeleteDeletionTarget {
 public:
  AWS_APPLICATIONSIGNALS_API BatchDeleteDeletionTarget() = default;
  AWS_APPLICATIONSIGNALS_API BatchDeleteDeletionTarget(Aws::Utils::Json::JsonView jsonValue);
  AWS_APPLICATIONSIGNALS_API BatchDeleteDeletionTarget& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_APPLICATIONSIGNALS_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Delete all configurations matching the specified scope.</p>
   */
  inline const BatchDeleteScope& GetScope() const { return m_scope; }
  inline bool ScopeHasBeenSet() const { return m_scopeHasBeenSet; }
  template <typename ScopeT = BatchDeleteScope>
  void SetScope(ScopeT&& value) {
    m_scopeHasBeenSet = true;
    m_scope = std::forward<ScopeT>(value);
  }
  template <typename ScopeT = BatchDeleteScope>
  BatchDeleteDeletionTarget& WithScope(ScopeT&& value) {
    SetScope(std::forward<ScopeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Delete specific configurations by ARN list.</p>
   */
  inline const BatchDeleteByResourceArns& GetResourceArns() const { return m_resourceArns; }
  inline bool ResourceArnsHasBeenSet() const { return m_resourceArnsHasBeenSet; }
  template <typename ResourceArnsT = BatchDeleteByResourceArns>
  void SetResourceArns(ResourceArnsT&& value) {
    m_resourceArnsHasBeenSet = true;
    m_resourceArns = std::forward<ResourceArnsT>(value);
  }
  template <typename ResourceArnsT = BatchDeleteByResourceArns>
  BatchDeleteDeletionTarget& WithResourceArns(ResourceArnsT&& value) {
    SetResourceArns(std::forward<ResourceArnsT>(value));
    return *this;
  }
  ///@}
 private:
  BatchDeleteScope m_scope;

  BatchDeleteByResourceArns m_resourceArns;
  bool m_scopeHasBeenSet = false;
  bool m_resourceArnsHasBeenSet = false;
};

}  // namespace Model
}  // namespace ApplicationSignals
}  // namespace Aws
