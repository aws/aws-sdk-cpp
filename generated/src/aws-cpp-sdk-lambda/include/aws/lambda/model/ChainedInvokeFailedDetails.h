/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lambda/Lambda_EXPORTS.h>
#include <aws/lambda/model/EventError.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace Lambda {
namespace Model {

/**
 * <p>Contains details about a failed chained function invocation, including error
 * information and failure reason.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/lambda-2015-03-31/ChainedInvokeFailedDetails">AWS
 * API Reference</a></p>
 */
class ChainedInvokeFailedDetails {
 public:
  AWS_LAMBDA_API ChainedInvokeFailedDetails() = default;
  AWS_LAMBDA_API ChainedInvokeFailedDetails(Aws::Utils::Json::JsonView jsonValue);
  AWS_LAMBDA_API ChainedInvokeFailedDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_LAMBDA_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Details about the chained invocation failure.</p>
   */
  inline const EventError& GetError() const { return m_error; }
  inline bool ErrorHasBeenSet() const { return m_errorHasBeenSet; }
  template <typename ErrorT = EventError>
  void SetError(ErrorT&& value) {
    m_errorHasBeenSet = true;
    m_error = std::forward<ErrorT>(value);
  }
  template <typename ErrorT = EventError>
  ChainedInvokeFailedDetails& WithError(ErrorT&& value) {
    SetError(std::forward<ErrorT>(value));
    return *this;
  }
  ///@}
 private:
  EventError m_error;
  bool m_errorHasBeenSet = false;
};

}  // namespace Model
}  // namespace Lambda
}  // namespace Aws
