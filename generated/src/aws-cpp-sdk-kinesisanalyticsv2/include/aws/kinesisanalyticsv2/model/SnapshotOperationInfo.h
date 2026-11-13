/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/kinesisanalyticsv2/KinesisAnalyticsV2_EXPORTS.h>
#include <aws/kinesisanalyticsv2/model/SnapshotOperation.h>
#include <aws/kinesisanalyticsv2/model/SnapshotOperationStatus.h>

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
 * <p>Provides summary information about an operation that was performed on an
 * enhanced snapshot.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/kinesisanalyticsv2-2018-05-23/SnapshotOperationInfo">AWS
 * API Reference</a></p>
 */
class SnapshotOperationInfo {
 public:
  AWS_KINESISANALYTICSV2_API SnapshotOperationInfo() = default;
  AWS_KINESISANALYTICSV2_API SnapshotOperationInfo(Aws::Utils::Json::JsonView jsonValue);
  AWS_KINESISANALYTICSV2_API SnapshotOperationInfo& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_KINESISANALYTICSV2_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The ID of the snapshot operation.</p>
   */
  inline const Aws::String& GetSnapshotOperationId() const { return m_snapshotOperationId; }
  inline bool SnapshotOperationIdHasBeenSet() const { return m_snapshotOperationIdHasBeenSet; }
  template <typename SnapshotOperationIdT = Aws::String>
  void SetSnapshotOperationId(SnapshotOperationIdT&& value) {
    m_snapshotOperationIdHasBeenSet = true;
    m_snapshotOperationId = std::forward<SnapshotOperationIdT>(value);
  }
  template <typename SnapshotOperationIdT = Aws::String>
  SnapshotOperationInfo& WithSnapshotOperationId(SnapshotOperationIdT&& value) {
    SetSnapshotOperationId(std::forward<SnapshotOperationIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The type of operation that was performed on the snapshot.</p>
   */
  inline SnapshotOperation GetSnapshotOperation() const { return m_snapshotOperation; }
  inline bool SnapshotOperationHasBeenSet() const { return m_snapshotOperationHasBeenSet; }
  inline void SetSnapshotOperation(SnapshotOperation value) {
    m_snapshotOperationHasBeenSet = true;
    m_snapshotOperation = value;
  }
  inline SnapshotOperationInfo& WithSnapshotOperation(SnapshotOperation value) {
    SetSnapshotOperation(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The status of the snapshot operation.</p>
   */
  inline SnapshotOperationStatus GetSnapshotOperationStatus() const { return m_snapshotOperationStatus; }
  inline bool SnapshotOperationStatusHasBeenSet() const { return m_snapshotOperationStatusHasBeenSet; }
  inline void SetSnapshotOperationStatus(SnapshotOperationStatus value) {
    m_snapshotOperationStatusHasBeenSet = true;
    m_snapshotOperationStatus = value;
  }
  inline SnapshotOperationInfo& WithSnapshotOperationStatus(SnapshotOperationStatus value) {
    SetSnapshotOperationStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The timestamp that indicates when the operation was created.</p>
   */
  inline const Aws::Utils::DateTime& GetStartTime() const { return m_startTime; }
  inline bool StartTimeHasBeenSet() const { return m_startTimeHasBeenSet; }
  template <typename StartTimeT = Aws::Utils::DateTime>
  void SetStartTime(StartTimeT&& value) {
    m_startTimeHasBeenSet = true;
    m_startTime = std::forward<StartTimeT>(value);
  }
  template <typename StartTimeT = Aws::Utils::DateTime>
  SnapshotOperationInfo& WithStartTime(StartTimeT&& value) {
    SetStartTime(std::forward<StartTimeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The timestamp that indicates when the operation finished. This field is
   * present only after the operation completes.</p>
   */
  inline const Aws::Utils::DateTime& GetEndTime() const { return m_endTime; }
  inline bool EndTimeHasBeenSet() const { return m_endTimeHasBeenSet; }
  template <typename EndTimeT = Aws::Utils::DateTime>
  void SetEndTime(EndTimeT&& value) {
    m_endTimeHasBeenSet = true;
    m_endTime = std::forward<EndTimeT>(value);
  }
  template <typename EndTimeT = Aws::Utils::DateTime>
  SnapshotOperationInfo& WithEndTime(EndTimeT&& value) {
    SetEndTime(std::forward<EndTimeT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_snapshotOperationId;

  SnapshotOperation m_snapshotOperation{SnapshotOperation::NOT_SET};

  SnapshotOperationStatus m_snapshotOperationStatus{SnapshotOperationStatus::NOT_SET};

  Aws::Utils::DateTime m_startTime{};

  Aws::Utils::DateTime m_endTime{};
  bool m_snapshotOperationIdHasBeenSet = false;
  bool m_snapshotOperationHasBeenSet = false;
  bool m_snapshotOperationStatusHasBeenSet = false;
  bool m_startTimeHasBeenSet = false;
  bool m_endTimeHasBeenSet = false;
};

}  // namespace Model
}  // namespace KinesisAnalyticsV2
}  // namespace Aws
