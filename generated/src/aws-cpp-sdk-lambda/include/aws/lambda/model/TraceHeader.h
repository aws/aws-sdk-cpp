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
 * <p>Contains trace headers for the Lambda durable execution.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/lambda-2015-03-31/TraceHeader">AWS
 * API Reference</a></p>
 */
class TraceHeader {
 public:
  AWS_LAMBDA_API TraceHeader() = default;
  AWS_LAMBDA_API TraceHeader(Aws::Utils::Json::JsonView jsonValue);
  AWS_LAMBDA_API TraceHeader& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_LAMBDA_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The X-Ray trace header associated with the durable execution.</p>
   */
  inline const Aws::String& GetXAmznTraceId() const { return m_xAmznTraceId; }
  inline bool XAmznTraceIdHasBeenSet() const { return m_xAmznTraceIdHasBeenSet; }
  template <typename XAmznTraceIdT = Aws::String>
  void SetXAmznTraceId(XAmznTraceIdT&& value) {
    m_xAmznTraceIdHasBeenSet = true;
    m_xAmznTraceId = std::forward<XAmznTraceIdT>(value);
  }
  template <typename XAmznTraceIdT = Aws::String>
  TraceHeader& WithXAmznTraceId(XAmznTraceIdT&& value) {
    SetXAmznTraceId(std::forward<XAmznTraceIdT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_xAmznTraceId;
  bool m_xAmznTraceIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace Lambda
}  // namespace Aws
