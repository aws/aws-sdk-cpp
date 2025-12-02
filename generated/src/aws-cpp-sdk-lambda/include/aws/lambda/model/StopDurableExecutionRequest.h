/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/lambda/LambdaRequest.h>
#include <aws/lambda/Lambda_EXPORTS.h>
#include <aws/lambda/model/ErrorObject.h>

#include <utility>

namespace Aws {
namespace Lambda {
namespace Model {

/**
 */
class StopDurableExecutionRequest : public LambdaRequest {
 public:
  AWS_LAMBDA_API StopDurableExecutionRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "StopDurableExecution"; }

  AWS_LAMBDA_API Aws::String SerializePayload() const override;

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the durable execution.</p>
   */
  inline const Aws::String& GetDurableExecutionArn() const { return m_durableExecutionArn; }
  inline bool DurableExecutionArnHasBeenSet() const { return m_durableExecutionArnHasBeenSet; }
  template <typename DurableExecutionArnT = Aws::String>
  void SetDurableExecutionArn(DurableExecutionArnT&& value) {
    m_durableExecutionArnHasBeenSet = true;
    m_durableExecutionArn = std::forward<DurableExecutionArnT>(value);
  }
  template <typename DurableExecutionArnT = Aws::String>
  StopDurableExecutionRequest& WithDurableExecutionArn(DurableExecutionArnT&& value) {
    SetDurableExecutionArn(std::forward<DurableExecutionArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Optional error details explaining why the execution is being stopped.</p>
   */
  inline const ErrorObject& GetError() const { return m_error; }
  inline bool ErrorHasBeenSet() const { return m_errorHasBeenSet; }
  template <typename ErrorT = ErrorObject>
  void SetError(ErrorT&& value) {
    m_errorHasBeenSet = true;
    m_error = std::forward<ErrorT>(value);
  }
  template <typename ErrorT = ErrorObject>
  StopDurableExecutionRequest& WithError(ErrorT&& value) {
    SetError(std::forward<ErrorT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_durableExecutionArn;
  bool m_durableExecutionArnHasBeenSet = false;

  ErrorObject m_error;
  bool m_errorHasBeenSet = false;
};

}  // namespace Model
}  // namespace Lambda
}  // namespace Aws
