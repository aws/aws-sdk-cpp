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
 * <p>The reason for pausing a durable execution, as recorded in the execution
 * history.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/lambda-2015-03-31/EventPauseReason">AWS
 * API Reference</a></p>
 */
class EventPauseReason {
 public:
  AWS_LAMBDA_API EventPauseReason() = default;
  AWS_LAMBDA_API EventPauseReason(Aws::Utils::Json::JsonView jsonValue);
  AWS_LAMBDA_API EventPauseReason& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_LAMBDA_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The reason that you provided when you paused the execution. This field is
   * only present if you set <code>IncludeExecutionData</code> to <code>true</code>
   * in the request.</p>
   */
  inline const Aws::String& GetPayload() const { return m_payload; }
  inline bool PayloadHasBeenSet() const { return m_payloadHasBeenSet; }
  template <typename PayloadT = Aws::String>
  void SetPayload(PayloadT&& value) {
    m_payloadHasBeenSet = true;
    m_payload = std::forward<PayloadT>(value);
  }
  template <typename PayloadT = Aws::String>
  EventPauseReason& WithPayload(PayloadT&& value) {
    SetPayload(std::forward<PayloadT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Specifies whether Lambda omitted the reason from the response because
   * <code>IncludeExecutionData</code> is <code>false</code>.</p>
   */
  inline bool GetTruncated() const { return m_truncated; }
  inline bool TruncatedHasBeenSet() const { return m_truncatedHasBeenSet; }
  inline void SetTruncated(bool value) {
    m_truncatedHasBeenSet = true;
    m_truncated = value;
  }
  inline EventPauseReason& WithTruncated(bool value) {
    SetTruncated(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_payload;

  bool m_truncated{false};
  bool m_payloadHasBeenSet = false;
  bool m_truncatedHasBeenSet = false;
};

}  // namespace Model
}  // namespace Lambda
}  // namespace Aws
