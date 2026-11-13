/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cleanrooms/CleanRooms_EXPORTS.h>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace CleanRooms {
namespace Model {

/**
 * <p>Contains information about whether running a failed protected query or
 * protected job again might succeed.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/cleanrooms-2022-02-17/RetryInfo">AWS
 * API Reference</a></p>
 */
class RetryInfo {
 public:
  AWS_CLEANROOMS_API RetryInfo() = default;
  AWS_CLEANROOMS_API RetryInfo(Aws::Utils::Json::JsonView jsonValue);
  AWS_CLEANROOMS_API RetryInfo& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_CLEANROOMS_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Specifies whether running the same request again might succeed.
   * <code>true</code> means that the failure was transient. <code>false</code> means
   * that running the same request again is not expected to succeed.</p>
   */
  inline bool GetRetryable() const { return m_retryable; }
  inline bool RetryableHasBeenSet() const { return m_retryableHasBeenSet; }
  inline void SetRetryable(bool value) {
    m_retryableHasBeenSet = true;
    m_retryable = value;
  }
  inline RetryInfo& WithRetryable(bool value) {
    SetRetryable(value);
    return *this;
  }
  ///@}
 private:
  bool m_retryable{false};
  bool m_retryableHasBeenSet = false;
};

}  // namespace Model
}  // namespace CleanRooms
}  // namespace Aws
