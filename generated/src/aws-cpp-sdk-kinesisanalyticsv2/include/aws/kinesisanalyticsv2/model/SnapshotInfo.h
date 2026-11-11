/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/kinesisanalyticsv2/KinesisAnalyticsV2_EXPORTS.h>
#include <aws/kinesisanalyticsv2/model/SnapshotFormat.h>
#include <aws/kinesisanalyticsv2/model/SnapshotInitiator.h>
#include <aws/kinesisanalyticsv2/model/SnapshotInitiatorOperation.h>
#include <aws/kinesisanalyticsv2/model/SnapshotStatus.h>

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
 * <p>Provides summary information about an enhanced snapshot.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/kinesisanalyticsv2-2018-05-23/SnapshotInfo">AWS
 * API Reference</a></p>
 */
class SnapshotInfo {
 public:
  AWS_KINESISANALYTICSV2_API SnapshotInfo() = default;
  AWS_KINESISANALYTICSV2_API SnapshotInfo(Aws::Utils::Json::JsonView jsonValue);
  AWS_KINESISANALYTICSV2_API SnapshotInfo& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_KINESISANALYTICSV2_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The name of the enhanced snapshot.</p>
   */
  inline const Aws::String& GetSnapshotName() const { return m_snapshotName; }
  inline bool SnapshotNameHasBeenSet() const { return m_snapshotNameHasBeenSet; }
  template <typename SnapshotNameT = Aws::String>
  void SetSnapshotName(SnapshotNameT&& value) {
    m_snapshotNameHasBeenSet = true;
    m_snapshotName = std::forward<SnapshotNameT>(value);
  }
  template <typename SnapshotNameT = Aws::String>
  SnapshotInfo& WithSnapshotName(SnapshotNameT&& value) {
    SetSnapshotName(std::forward<SnapshotNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ARN of the enhanced snapshot.</p>
   */
  inline const Aws::String& GetSnapshotArn() const { return m_snapshotArn; }
  inline bool SnapshotArnHasBeenSet() const { return m_snapshotArnHasBeenSet; }
  template <typename SnapshotArnT = Aws::String>
  void SetSnapshotArn(SnapshotArnT&& value) {
    m_snapshotArnHasBeenSet = true;
    m_snapshotArn = std::forward<SnapshotArnT>(value);
  }
  template <typename SnapshotArnT = Aws::String>
  SnapshotInfo& WithSnapshotArn(SnapshotArnT&& value) {
    SetSnapshotArn(std::forward<SnapshotArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The status of the enhanced snapshot.</p>
   */
  inline SnapshotStatus GetSnapshotStatus() const { return m_snapshotStatus; }
  inline bool SnapshotStatusHasBeenSet() const { return m_snapshotStatusHasBeenSet; }
  inline void SetSnapshotStatus(SnapshotStatus value) {
    m_snapshotStatusHasBeenSet = true;
    m_snapshotStatus = value;
  }
  inline SnapshotInfo& WithSnapshotStatus(SnapshotStatus value) {
    SetSnapshotStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The timestamp that indicates when the snapshot was created.</p>
   */
  inline const Aws::Utils::DateTime& GetSnapshotCreationTimestamp() const { return m_snapshotCreationTimestamp; }
  inline bool SnapshotCreationTimestampHasBeenSet() const { return m_snapshotCreationTimestampHasBeenSet; }
  template <typename SnapshotCreationTimestampT = Aws::Utils::DateTime>
  void SetSnapshotCreationTimestamp(SnapshotCreationTimestampT&& value) {
    m_snapshotCreationTimestampHasBeenSet = true;
    m_snapshotCreationTimestamp = std::forward<SnapshotCreationTimestampT>(value);
  }
  template <typename SnapshotCreationTimestampT = Aws::Utils::DateTime>
  SnapshotInfo& WithSnapshotCreationTimestamp(SnapshotCreationTimestampT&& value) {
    SetSnapshotCreationTimestamp(std::forward<SnapshotCreationTimestampT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Indicates who initiated the snapshot. <code>USER</code> indicates a snapshot
   * that you created or imported. <code>SYSTEM</code> indicates a snapshot that
   * Managed Service for Apache Flink created.</p>
   */
  inline SnapshotInitiator GetSnapshotInitiator() const { return m_snapshotInitiator; }
  inline bool SnapshotInitiatorHasBeenSet() const { return m_snapshotInitiatorHasBeenSet; }
  inline void SetSnapshotInitiator(SnapshotInitiator value) {
    m_snapshotInitiatorHasBeenSet = true;
    m_snapshotInitiator = value;
  }
  inline SnapshotInfo& WithSnapshotInitiator(SnapshotInitiator value) {
    SetSnapshotInitiator(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The operation that created the snapshot.</p>
   */
  inline SnapshotInitiatorOperation GetSnapshotInitiatorOperation() const { return m_snapshotInitiatorOperation; }
  inline bool SnapshotInitiatorOperationHasBeenSet() const { return m_snapshotInitiatorOperationHasBeenSet; }
  inline void SetSnapshotInitiatorOperation(SnapshotInitiatorOperation value) {
    m_snapshotInitiatorOperationHasBeenSet = true;
    m_snapshotInitiatorOperation = value;
  }
  inline SnapshotInfo& WithSnapshotInitiatorOperation(SnapshotInitiatorOperation value) {
    SetSnapshotInitiatorOperation(value);
    return *this;
  }
  ///@}

  ///@{

  inline const Aws::String& GetSourceApplicationName() const { return m_sourceApplicationName; }
  inline bool SourceApplicationNameHasBeenSet() const { return m_sourceApplicationNameHasBeenSet; }
  template <typename SourceApplicationNameT = Aws::String>
  void SetSourceApplicationName(SourceApplicationNameT&& value) {
    m_sourceApplicationNameHasBeenSet = true;
    m_sourceApplicationName = std::forward<SourceApplicationNameT>(value);
  }
  template <typename SourceApplicationNameT = Aws::String>
  SnapshotInfo& WithSourceApplicationName(SourceApplicationNameT&& value) {
    SetSourceApplicationName(std::forward<SourceApplicationNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The format of the snapshot.</p>
   */
  inline SnapshotFormat GetSnapshotFormat() const { return m_snapshotFormat; }
  inline bool SnapshotFormatHasBeenSet() const { return m_snapshotFormatHasBeenSet; }
  inline void SetSnapshotFormat(SnapshotFormat value) {
    m_snapshotFormatHasBeenSet = true;
    m_snapshotFormat = value;
  }
  inline SnapshotInfo& WithSnapshotFormat(SnapshotFormat value) {
    SetSnapshotFormat(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_snapshotName;

  Aws::String m_snapshotArn;

  SnapshotStatus m_snapshotStatus{SnapshotStatus::NOT_SET};

  Aws::Utils::DateTime m_snapshotCreationTimestamp{};

  SnapshotInitiator m_snapshotInitiator{SnapshotInitiator::NOT_SET};

  SnapshotInitiatorOperation m_snapshotInitiatorOperation{SnapshotInitiatorOperation::NOT_SET};

  Aws::String m_sourceApplicationName;

  SnapshotFormat m_snapshotFormat{SnapshotFormat::NOT_SET};
  bool m_snapshotNameHasBeenSet = false;
  bool m_snapshotArnHasBeenSet = false;
  bool m_snapshotStatusHasBeenSet = false;
  bool m_snapshotCreationTimestampHasBeenSet = false;
  bool m_snapshotInitiatorHasBeenSet = false;
  bool m_snapshotInitiatorOperationHasBeenSet = false;
  bool m_sourceApplicationNameHasBeenSet = false;
  bool m_snapshotFormatHasBeenSet = false;
};

}  // namespace Model
}  // namespace KinesisAnalyticsV2
}  // namespace Aws
