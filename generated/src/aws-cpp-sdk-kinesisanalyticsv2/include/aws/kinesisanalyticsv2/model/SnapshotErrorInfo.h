/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/kinesisanalyticsv2/KinesisAnalyticsV2_EXPORTS.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace KinesisAnalyticsV2 {
namespace Model {

/**
 * <p>A description of the error that caused a snapshot operation to
 * fail.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/kinesisanalyticsv2-2018-05-23/SnapshotErrorInfo">AWS
 * API Reference</a></p>
 */
class SnapshotErrorInfo {
 public:
  AWS_KINESISANALYTICSV2_API SnapshotErrorInfo() = default;
  AWS_KINESISANALYTICSV2_API SnapshotErrorInfo(Aws::Utils::Json::JsonView jsonValue);
  AWS_KINESISANALYTICSV2_API SnapshotErrorInfo& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_KINESISANALYTICSV2_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The error code that identifies the cause of the failure.</p>
   */
  inline const Aws::String& GetErrorCode() const { return m_errorCode; }
  inline bool ErrorCodeHasBeenSet() const { return m_errorCodeHasBeenSet; }
  template <typename ErrorCodeT = Aws::String>
  void SetErrorCode(ErrorCodeT&& value) {
    m_errorCodeHasBeenSet = true;
    m_errorCode = std::forward<ErrorCodeT>(value);
  }
  template <typename ErrorCodeT = Aws::String>
  SnapshotErrorInfo& WithErrorCode(ErrorCodeT&& value) {
    SetErrorCode(std::forward<ErrorCodeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>An error message that is returned when an operation fails.</p>
   */
  inline const Aws::String& GetErrorString() const { return m_errorString; }
  inline bool ErrorStringHasBeenSet() const { return m_errorStringHasBeenSet; }
  template <typename ErrorStringT = Aws::String>
  void SetErrorString(ErrorStringT&& value) {
    m_errorStringHasBeenSet = true;
    m_errorString = std::forward<ErrorStringT>(value);
  }
  template <typename ErrorStringT = Aws::String>
  SnapshotErrorInfo& WithErrorString(ErrorStringT&& value) {
    SetErrorString(std::forward<ErrorStringT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_errorCode;

  Aws::String m_errorString;
  bool m_errorCodeHasBeenSet = false;
  bool m_errorStringHasBeenSet = false;
};

}  // namespace Model
}  // namespace KinesisAnalyticsV2
}  // namespace Aws
