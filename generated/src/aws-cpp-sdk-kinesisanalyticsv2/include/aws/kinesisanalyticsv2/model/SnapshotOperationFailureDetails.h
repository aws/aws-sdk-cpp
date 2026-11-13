/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kinesisanalyticsv2/KinesisAnalyticsV2_EXPORTS.h>
#include <aws/kinesisanalyticsv2/model/SnapshotErrorInfo.h>

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
 * <p>Provides a description of the snapshot operation failure.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/kinesisanalyticsv2-2018-05-23/SnapshotOperationFailureDetails">AWS
 * API Reference</a></p>
 */
class SnapshotOperationFailureDetails {
 public:
  AWS_KINESISANALYTICSV2_API SnapshotOperationFailureDetails() = default;
  AWS_KINESISANALYTICSV2_API SnapshotOperationFailureDetails(Aws::Utils::Json::JsonView jsonValue);
  AWS_KINESISANALYTICSV2_API SnapshotOperationFailureDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_KINESISANALYTICSV2_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>A description of the error that caused the snapshot operation to fail.</p>
   */
  inline const SnapshotErrorInfo& GetErrorInfo() const { return m_errorInfo; }
  inline bool ErrorInfoHasBeenSet() const { return m_errorInfoHasBeenSet; }
  template <typename ErrorInfoT = SnapshotErrorInfo>
  void SetErrorInfo(ErrorInfoT&& value) {
    m_errorInfoHasBeenSet = true;
    m_errorInfo = std::forward<ErrorInfoT>(value);
  }
  template <typename ErrorInfoT = SnapshotErrorInfo>
  SnapshotOperationFailureDetails& WithErrorInfo(ErrorInfoT&& value) {
    SetErrorInfo(std::forward<ErrorInfoT>(value));
    return *this;
  }
  ///@}
 private:
  SnapshotErrorInfo m_errorInfo;
  bool m_errorInfoHasBeenSet = false;
};

}  // namespace Model
}  // namespace KinesisAnalyticsV2
}  // namespace Aws
