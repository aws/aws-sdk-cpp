/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/kinesisanalyticsv2/KinesisAnalyticsV2_EXPORTS.h>
#include <aws/kinesisanalyticsv2/model/RuntimeEnvironment.h>
#include <aws/kinesisanalyticsv2/model/SnapshotEncryptionConfiguration.h>
#include <aws/kinesisanalyticsv2/model/SnapshotFormat.h>
#include <aws/kinesisanalyticsv2/model/SnapshotInitiator.h>
#include <aws/kinesisanalyticsv2/model/SnapshotInitiatorOperation.h>
#include <aws/kinesisanalyticsv2/model/SnapshotSourceDescription.h>
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
 * <p>Provides details about an enhanced snapshot.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/kinesisanalyticsv2-2018-05-23/SnapshotInfoDetails">AWS
 * API Reference</a></p>
 */
class SnapshotInfoDetails {
 public:
  AWS_KINESISANALYTICSV2_API SnapshotInfoDetails() = default;
  AWS_KINESISANALYTICSV2_API SnapshotInfoDetails(Aws::Utils::Json::JsonView jsonValue);
  AWS_KINESISANALYTICSV2_API SnapshotInfoDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
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
  SnapshotInfoDetails& WithSnapshotName(SnapshotNameT&& value) {
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
  SnapshotInfoDetails& WithSnapshotArn(SnapshotArnT&& value) {
    SetSnapshotArn(std::forward<SnapshotArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The summary description of the snapshot.</p>
   */
  inline const Aws::String& GetSnapshotDescription() const { return m_snapshotDescription; }
  inline bool SnapshotDescriptionHasBeenSet() const { return m_snapshotDescriptionHasBeenSet; }
  template <typename SnapshotDescriptionT = Aws::String>
  void SetSnapshotDescription(SnapshotDescriptionT&& value) {
    m_snapshotDescriptionHasBeenSet = true;
    m_snapshotDescription = std::forward<SnapshotDescriptionT>(value);
  }
  template <typename SnapshotDescriptionT = Aws::String>
  SnapshotInfoDetails& WithSnapshotDescription(SnapshotDescriptionT&& value) {
    SetSnapshotDescription(std::forward<SnapshotDescriptionT>(value));
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
  inline SnapshotInfoDetails& WithSnapshotStatus(SnapshotStatus value) {
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
  SnapshotInfoDetails& WithSnapshotCreationTimestamp(SnapshotCreationTimestampT&& value) {
    SetSnapshotCreationTimestamp(std::forward<SnapshotCreationTimestampT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Flink runtime of the application that the snapshot was created from. This
   * field is not present for imported snapshots.</p>
   */
  inline RuntimeEnvironment GetRuntimeEnvironment() const { return m_runtimeEnvironment; }
  inline bool RuntimeEnvironmentHasBeenSet() const { return m_runtimeEnvironmentHasBeenSet; }
  inline void SetRuntimeEnvironment(RuntimeEnvironment value) {
    m_runtimeEnvironmentHasBeenSet = true;
    m_runtimeEnvironment = value;
  }
  inline SnapshotInfoDetails& WithRuntimeEnvironment(RuntimeEnvironment value) {
    SetRuntimeEnvironment(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The size of the snapshot, in bytes. The value is <code>0</code> until the
   * snapshot status is <code>READY</code>.</p>
   */
  inline long long GetSnapshotSizeInBytes() const { return m_snapshotSizeInBytes; }
  inline bool SnapshotSizeInBytesHasBeenSet() const { return m_snapshotSizeInBytesHasBeenSet; }
  inline void SetSnapshotSizeInBytes(long long value) {
    m_snapshotSizeInBytesHasBeenSet = true;
    m_snapshotSizeInBytes = value;
  }
  inline SnapshotInfoDetails& WithSnapshotSizeInBytes(long long value) {
    SetSnapshotSizeInBytes(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Describes the encryption settings of data at rest for the snapshot.</p>
   */
  inline const SnapshotEncryptionConfiguration& GetSnapshotEncryptionConfigurationDescription() const {
    return m_snapshotEncryptionConfigurationDescription;
  }
  inline bool SnapshotEncryptionConfigurationDescriptionHasBeenSet() const {
    return m_snapshotEncryptionConfigurationDescriptionHasBeenSet;
  }
  template <typename SnapshotEncryptionConfigurationDescriptionT = SnapshotEncryptionConfiguration>
  void SetSnapshotEncryptionConfigurationDescription(SnapshotEncryptionConfigurationDescriptionT&& value) {
    m_snapshotEncryptionConfigurationDescriptionHasBeenSet = true;
    m_snapshotEncryptionConfigurationDescription = std::forward<SnapshotEncryptionConfigurationDescriptionT>(value);
  }
  template <typename SnapshotEncryptionConfigurationDescriptionT = SnapshotEncryptionConfiguration>
  SnapshotInfoDetails& WithSnapshotEncryptionConfigurationDescription(SnapshotEncryptionConfigurationDescriptionT&& value) {
    SetSnapshotEncryptionConfigurationDescription(std::forward<SnapshotEncryptionConfigurationDescriptionT>(value));
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
  inline SnapshotInfoDetails& WithSnapshotInitiator(SnapshotInitiator value) {
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
  inline SnapshotInfoDetails& WithSnapshotInitiatorOperation(SnapshotInitiatorOperation value) {
    SetSnapshotInitiatorOperation(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Describes the source of the snapshot.</p>
   */
  inline const SnapshotSourceDescription& GetSnapshotSourceDescription() const { return m_snapshotSourceDescription; }
  inline bool SnapshotSourceDescriptionHasBeenSet() const { return m_snapshotSourceDescriptionHasBeenSet; }
  template <typename SnapshotSourceDescriptionT = SnapshotSourceDescription>
  void SetSnapshotSourceDescription(SnapshotSourceDescriptionT&& value) {
    m_snapshotSourceDescriptionHasBeenSet = true;
    m_snapshotSourceDescription = std::forward<SnapshotSourceDescriptionT>(value);
  }
  template <typename SnapshotSourceDescriptionT = SnapshotSourceDescription>
  SnapshotInfoDetails& WithSnapshotSourceDescription(SnapshotSourceDescriptionT&& value) {
    SetSnapshotSourceDescription(std::forward<SnapshotSourceDescriptionT>(value));
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
  inline SnapshotInfoDetails& WithSnapshotFormat(SnapshotFormat value) {
    SetSnapshotFormat(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_snapshotName;

  Aws::String m_snapshotArn;

  Aws::String m_snapshotDescription;

  SnapshotStatus m_snapshotStatus{SnapshotStatus::NOT_SET};

  Aws::Utils::DateTime m_snapshotCreationTimestamp{};

  RuntimeEnvironment m_runtimeEnvironment{RuntimeEnvironment::NOT_SET};

  long long m_snapshotSizeInBytes{0};

  SnapshotEncryptionConfiguration m_snapshotEncryptionConfigurationDescription;

  SnapshotInitiator m_snapshotInitiator{SnapshotInitiator::NOT_SET};

  SnapshotInitiatorOperation m_snapshotInitiatorOperation{SnapshotInitiatorOperation::NOT_SET};

  SnapshotSourceDescription m_snapshotSourceDescription;

  SnapshotFormat m_snapshotFormat{SnapshotFormat::NOT_SET};
  bool m_snapshotNameHasBeenSet = false;
  bool m_snapshotArnHasBeenSet = false;
  bool m_snapshotDescriptionHasBeenSet = false;
  bool m_snapshotStatusHasBeenSet = false;
  bool m_snapshotCreationTimestampHasBeenSet = false;
  bool m_runtimeEnvironmentHasBeenSet = false;
  bool m_snapshotSizeInBytesHasBeenSet = false;
  bool m_snapshotEncryptionConfigurationDescriptionHasBeenSet = false;
  bool m_snapshotInitiatorHasBeenSet = false;
  bool m_snapshotInitiatorOperationHasBeenSet = false;
  bool m_snapshotSourceDescriptionHasBeenSet = false;
  bool m_snapshotFormatHasBeenSet = false;
};

}  // namespace Model
}  // namespace KinesisAnalyticsV2
}  // namespace Aws
