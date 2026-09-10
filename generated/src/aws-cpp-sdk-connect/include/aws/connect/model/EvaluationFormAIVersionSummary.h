/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/connect/model/EvaluationFormAIVersionLifecycle.h>
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
 * <p>Contains the name and lifecycle information for an AI version that you can
 * use when creating or updating an evaluation form.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/EvaluationFormAIVersionSummary">AWS
 * API Reference</a></p>
 */
class EvaluationFormAIVersionSummary {
 public:
  AWS_CONNECT_API EvaluationFormAIVersionSummary() = default;
  AWS_CONNECT_API EvaluationFormAIVersionSummary(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONNECT_API EvaluationFormAIVersionSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The name of the AI version.</p>
   */
  inline const Aws::String& GetAIVersionName() const { return m_aIVersionName; }
  inline bool AIVersionNameHasBeenSet() const { return m_aIVersionNameHasBeenSet; }
  template <typename AIVersionNameT = Aws::String>
  void SetAIVersionName(AIVersionNameT&& value) {
    m_aIVersionNameHasBeenSet = true;
    m_aIVersionName = std::forward<AIVersionNameT>(value);
  }
  template <typename AIVersionNameT = Aws::String>
  EvaluationFormAIVersionSummary& WithAIVersionName(AIVersionNameT&& value) {
    SetAIVersionName(std::forward<AIVersionNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The lifecycle information for this AI version, including its status and
   * availability dates.</p>
   */
  inline const EvaluationFormAIVersionLifecycle& GetAIVersionLifecycle() const { return m_aIVersionLifecycle; }
  inline bool AIVersionLifecycleHasBeenSet() const { return m_aIVersionLifecycleHasBeenSet; }
  template <typename AIVersionLifecycleT = EvaluationFormAIVersionLifecycle>
  void SetAIVersionLifecycle(AIVersionLifecycleT&& value) {
    m_aIVersionLifecycleHasBeenSet = true;
    m_aIVersionLifecycle = std::forward<AIVersionLifecycleT>(value);
  }
  template <typename AIVersionLifecycleT = EvaluationFormAIVersionLifecycle>
  EvaluationFormAIVersionSummary& WithAIVersionLifecycle(AIVersionLifecycleT&& value) {
    SetAIVersionLifecycle(std::forward<AIVersionLifecycleT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_aIVersionName;

  EvaluationFormAIVersionLifecycle m_aIVersionLifecycle;
  bool m_aIVersionNameHasBeenSet = false;
  bool m_aIVersionLifecycleHasBeenSet = false;
};

}  // namespace Model
}  // namespace Connect
}  // namespace Aws
