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
class SendDurableExecutionCallbackFailureRequest : public LambdaRequest {
 public:
  AWS_LAMBDA_API SendDurableExecutionCallbackFailureRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "SendDurableExecutionCallbackFailure"; }

  AWS_LAMBDA_API Aws::String SerializePayload() const override;

  ///@{
  /**
   * <p>The unique identifier for the callback operation.</p>
   */
  inline const Aws::String& GetCallbackId() const { return m_callbackId; }
  inline bool CallbackIdHasBeenSet() const { return m_callbackIdHasBeenSet; }
  template <typename CallbackIdT = Aws::String>
  void SetCallbackId(CallbackIdT&& value) {
    m_callbackIdHasBeenSet = true;
    m_callbackId = std::forward<CallbackIdT>(value);
  }
  template <typename CallbackIdT = Aws::String>
  SendDurableExecutionCallbackFailureRequest& WithCallbackId(CallbackIdT&& value) {
    SetCallbackId(std::forward<CallbackIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Error details describing why the callback operation failed.</p>
   */
  inline const ErrorObject& GetError() const { return m_error; }
  inline bool ErrorHasBeenSet() const { return m_errorHasBeenSet; }
  template <typename ErrorT = ErrorObject>
  void SetError(ErrorT&& value) {
    m_errorHasBeenSet = true;
    m_error = std::forward<ErrorT>(value);
  }
  template <typename ErrorT = ErrorObject>
  SendDurableExecutionCallbackFailureRequest& WithError(ErrorT&& value) {
    SetError(std::forward<ErrorT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_callbackId;
  bool m_callbackIdHasBeenSet = false;

  ErrorObject m_error;
  bool m_errorHasBeenSet = false;
};

}  // namespace Model
}  // namespace Lambda
}  // namespace Aws
