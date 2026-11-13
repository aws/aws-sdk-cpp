/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/lambda-core/LambdaCoreRequest.h>
#include <aws/lambda-core/LambdaCore_EXPORTS.h>

#include <utility>

namespace Aws {
namespace LambdaCore {
namespace Model {

/**
 */
class DeleteRuntimeRequest : public LambdaCoreRequest {
 public:
  AWS_LAMBDACORE_API DeleteRuntimeRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "DeleteRuntime"; }

  AWS_LAMBDACORE_API Aws::String SerializePayload() const override;

  AWS_LAMBDACORE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

  ///@{
  /**
   * <p>The name or ARN of the runtime to delete.</p>
   */
  inline const Aws::String& GetRuntimeName() const { return m_runtimeName; }
  inline bool RuntimeNameHasBeenSet() const { return m_runtimeNameHasBeenSet; }
  template <typename RuntimeNameT = Aws::String>
  void SetRuntimeName(RuntimeNameT&& value) {
    m_runtimeNameHasBeenSet = true;
    m_runtimeName = std::forward<RuntimeNameT>(value);
  }
  template <typename RuntimeNameT = Aws::String>
  DeleteRuntimeRequest& WithRuntimeName(RuntimeNameT&& value) {
    SetRuntimeName(std::forward<RuntimeNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Optional. The waiting period, in days (7-30), before the runtime is
   * permanently deleted.</p>
   */
  inline int GetRecoveryWindowInDays() const { return m_recoveryWindowInDays; }
  inline bool RecoveryWindowInDaysHasBeenSet() const { return m_recoveryWindowInDaysHasBeenSet; }
  inline void SetRecoveryWindowInDays(int value) {
    m_recoveryWindowInDaysHasBeenSet = true;
    m_recoveryWindowInDays = value;
  }
  inline DeleteRuntimeRequest& WithRecoveryWindowInDays(int value) {
    SetRecoveryWindowInDays(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_runtimeName;

  int m_recoveryWindowInDays{0};
  bool m_runtimeNameHasBeenSet = false;
  bool m_recoveryWindowInDaysHasBeenSet = false;
};

}  // namespace Model
}  // namespace LambdaCore
}  // namespace Aws
