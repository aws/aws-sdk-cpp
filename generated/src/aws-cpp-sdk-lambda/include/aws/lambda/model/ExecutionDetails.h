/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/lambda/Lambda_EXPORTS.h>

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
 * <p>Details about a <a
 * href="https://docs.aws.amazon.com/lambda/latest/dg/durable-functions.html">durable
 * execution</a>.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/lambda-2015-03-31/ExecutionDetails">AWS
 * API Reference</a></p>
 */
class ExecutionDetails {
 public:
  AWS_LAMBDA_API ExecutionDetails() = default;
  AWS_LAMBDA_API ExecutionDetails(Aws::Utils::Json::JsonView jsonValue);
  AWS_LAMBDA_API ExecutionDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_LAMBDA_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The original input payload provided for the durable execution.</p>
   */
  inline const Aws::String& GetInputPayload() const { return m_inputPayload; }
  inline bool InputPayloadHasBeenSet() const { return m_inputPayloadHasBeenSet; }
  template <typename InputPayloadT = Aws::String>
  void SetInputPayload(InputPayloadT&& value) {
    m_inputPayloadHasBeenSet = true;
    m_inputPayload = std::forward<InputPayloadT>(value);
  }
  template <typename InputPayloadT = Aws::String>
  ExecutionDetails& WithInputPayload(InputPayloadT&& value) {
    SetInputPayload(std::forward<InputPayloadT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_inputPayload;
  bool m_inputPayloadHasBeenSet = false;
};

}  // namespace Model
}  // namespace Lambda
}  // namespace Aws
