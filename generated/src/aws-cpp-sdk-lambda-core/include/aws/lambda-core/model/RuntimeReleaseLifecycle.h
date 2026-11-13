/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/lambda-core/LambdaCore_EXPORTS.h>
#include <aws/lambda-core/model/RuntimeReleaseState.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace LambdaCore {
namespace Model {

/**
 * <p>The runtime lifecycle for the runtime or alias. Optional. Used to schedule
 * runtime deprecation. Omitting or providing an empty object removes the existing
 * lifecycle.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/lambda-core-2026-04-30/RuntimeReleaseLifecycle">AWS
 * API Reference</a></p>
 */
class RuntimeReleaseLifecycle {
 public:
  AWS_LAMBDACORE_API RuntimeReleaseLifecycle() = default;
  AWS_LAMBDACORE_API RuntimeReleaseLifecycle(Aws::Utils::Json::JsonView jsonValue);
  AWS_LAMBDACORE_API RuntimeReleaseLifecycle& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_LAMBDACORE_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Optional, with no default applied. DEPRECATED requires a DeprecationDate on
   * or before today (UTC); PREVIEW and GA require a later one, or none. Reads report
   * DEPRECATED once DeprecationDate is reached.</p>
   */
  inline RuntimeReleaseState GetReleaseState() const { return m_releaseState; }
  inline bool ReleaseStateHasBeenSet() const { return m_releaseStateHasBeenSet; }
  inline void SetReleaseState(RuntimeReleaseState value) {
    m_releaseStateHasBeenSet = true;
    m_releaseState = value;
  }
  inline RuntimeReleaseLifecycle& WithReleaseState(RuntimeReleaseState value) {
    SetReleaseState(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The date (UTC) on which the runtime or alias becomes deprecated.</p>
   */
  inline const Aws::String& GetDeprecationDate() const { return m_deprecationDate; }
  inline bool DeprecationDateHasBeenSet() const { return m_deprecationDateHasBeenSet; }
  template <typename DeprecationDateT = Aws::String>
  void SetDeprecationDate(DeprecationDateT&& value) {
    m_deprecationDateHasBeenSet = true;
    m_deprecationDate = std::forward<DeprecationDateT>(value);
  }
  template <typename DeprecationDateT = Aws::String>
  RuntimeReleaseLifecycle& WithDeprecationDate(DeprecationDateT&& value) {
    SetDeprecationDate(std::forward<DeprecationDateT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The date (UTC) on which creating new functions that use this runtime or alias
   * is blocked.</p>
   */
  inline const Aws::String& GetFunctionCreateBlockDate() const { return m_functionCreateBlockDate; }
  inline bool FunctionCreateBlockDateHasBeenSet() const { return m_functionCreateBlockDateHasBeenSet; }
  template <typename FunctionCreateBlockDateT = Aws::String>
  void SetFunctionCreateBlockDate(FunctionCreateBlockDateT&& value) {
    m_functionCreateBlockDateHasBeenSet = true;
    m_functionCreateBlockDate = std::forward<FunctionCreateBlockDateT>(value);
  }
  template <typename FunctionCreateBlockDateT = Aws::String>
  RuntimeReleaseLifecycle& WithFunctionCreateBlockDate(FunctionCreateBlockDateT&& value) {
    SetFunctionCreateBlockDate(std::forward<FunctionCreateBlockDateT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The date (UTC) on which updating existing functions that use this runtime or
   * alias is blocked.</p>
   */
  inline const Aws::String& GetFunctionUpdateBlockDate() const { return m_functionUpdateBlockDate; }
  inline bool FunctionUpdateBlockDateHasBeenSet() const { return m_functionUpdateBlockDateHasBeenSet; }
  template <typename FunctionUpdateBlockDateT = Aws::String>
  void SetFunctionUpdateBlockDate(FunctionUpdateBlockDateT&& value) {
    m_functionUpdateBlockDateHasBeenSet = true;
    m_functionUpdateBlockDate = std::forward<FunctionUpdateBlockDateT>(value);
  }
  template <typename FunctionUpdateBlockDateT = Aws::String>
  RuntimeReleaseLifecycle& WithFunctionUpdateBlockDate(FunctionUpdateBlockDateT&& value) {
    SetFunctionUpdateBlockDate(std::forward<FunctionUpdateBlockDateT>(value));
    return *this;
  }
  ///@}
 private:
  RuntimeReleaseState m_releaseState{RuntimeReleaseState::NOT_SET};

  Aws::String m_deprecationDate;

  Aws::String m_functionCreateBlockDate;

  Aws::String m_functionUpdateBlockDate;
  bool m_releaseStateHasBeenSet = false;
  bool m_deprecationDateHasBeenSet = false;
  bool m_functionCreateBlockDateHasBeenSet = false;
  bool m_functionUpdateBlockDateHasBeenSet = false;
};

}  // namespace Model
}  // namespace LambdaCore
}  // namespace Aws
