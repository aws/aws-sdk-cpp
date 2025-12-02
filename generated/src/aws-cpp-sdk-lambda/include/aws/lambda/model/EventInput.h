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
 * <p>Input information for an event.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/lambda-2015-03-31/EventInput">AWS
 * API Reference</a></p>
 */
class EventInput {
 public:
  AWS_LAMBDA_API EventInput() = default;
  AWS_LAMBDA_API EventInput(Aws::Utils::Json::JsonView jsonValue);
  AWS_LAMBDA_API EventInput& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_LAMBDA_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The input payload.</p>
   */
  inline const Aws::String& GetPayload() const { return m_payload; }
  inline bool PayloadHasBeenSet() const { return m_payloadHasBeenSet; }
  template <typename PayloadT = Aws::String>
  void SetPayload(PayloadT&& value) {
    m_payloadHasBeenSet = true;
    m_payload = std::forward<PayloadT>(value);
  }
  template <typename PayloadT = Aws::String>
  EventInput& WithPayload(PayloadT&& value) {
    SetPayload(std::forward<PayloadT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Indicates if the error payload was truncated due to size limits.</p>
   */
  inline bool GetTruncated() const { return m_truncated; }
  inline bool TruncatedHasBeenSet() const { return m_truncatedHasBeenSet; }
  inline void SetTruncated(bool value) {
    m_truncatedHasBeenSet = true;
    m_truncated = value;
  }
  inline EventInput& WithTruncated(bool value) {
    SetTruncated(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_payload;
  bool m_payloadHasBeenSet = false;

  bool m_truncated{false};
  bool m_truncatedHasBeenSet = false;
};

}  // namespace Model
}  // namespace Lambda
}  // namespace Aws
