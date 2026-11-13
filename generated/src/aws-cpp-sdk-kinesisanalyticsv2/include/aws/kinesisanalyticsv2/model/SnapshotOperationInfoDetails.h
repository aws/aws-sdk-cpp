/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/kinesisanalyticsv2/KinesisAnalyticsV2_EXPORTS.h>
#include <aws/kinesisanalyticsv2/model/ApplicationOperationDescription.h>
#include <aws/kinesisanalyticsv2/model/EncryptionConfigurationDescription.h>
#include <aws/kinesisanalyticsv2/model/SnapshotOperation.h>
#include <aws/kinesisanalyticsv2/model/SnapshotOperationFailureDetails.h>
#include <aws/kinesisanalyticsv2/model/SnapshotOperationLocationDescription.h>
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
 * <p>A description of a snapshot operation that provides information about the
 * operation that was performed on an enhanced snapshot.</p><p><h3>See Also:</h3>
 * <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/kinesisanalyticsv2-2018-05-23/SnapshotOperationInfoDetails">AWS
 * API Reference</a></p>
 */
class SnapshotOperationInfoDetails {
 public:
  AWS_KINESISANALYTICSV2_API SnapshotOperationInfoDetails() = default;
  AWS_KINESISANALYTICSV2_API SnapshotOperationInfoDetails(Aws::Utils::Json::JsonView jsonValue);
  AWS_KINESISANALYTICSV2_API SnapshotOperationInfoDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
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
  SnapshotOperationInfoDetails& WithSnapshotOperationId(SnapshotOperationIdT&& value) {
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
  inline SnapshotOperationInfoDetails& WithSnapshotOperation(SnapshotOperation value) {
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
  inline SnapshotOperationInfoDetails& WithSnapshotOperationStatus(SnapshotOperationStatus value) {
    SetSnapshotOperationStatus(value);
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
  SnapshotOperationInfoDetails& WithSnapshotArn(SnapshotArnT&& value) {
    SetSnapshotArn(std::forward<SnapshotArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Describes the encryption configuration of the source data. This field is
   * present only for <code>ImportSnapshot</code> operation.</p>
   */
  inline const EncryptionConfigurationDescription& GetSourceEncryptionConfigurationDescription() const {
    return m_sourceEncryptionConfigurationDescription;
  }
  inline bool SourceEncryptionConfigurationDescriptionHasBeenSet() const { return m_sourceEncryptionConfigurationDescriptionHasBeenSet; }
  template <typename SourceEncryptionConfigurationDescriptionT = EncryptionConfigurationDescription>
  void SetSourceEncryptionConfigurationDescription(SourceEncryptionConfigurationDescriptionT&& value) {
    m_sourceEncryptionConfigurationDescriptionHasBeenSet = true;
    m_sourceEncryptionConfigurationDescription = std::forward<SourceEncryptionConfigurationDescriptionT>(value);
  }
  template <typename SourceEncryptionConfigurationDescriptionT = EncryptionConfigurationDescription>
  SnapshotOperationInfoDetails& WithSourceEncryptionConfigurationDescription(SourceEncryptionConfigurationDescriptionT&& value) {
    SetSourceEncryptionConfigurationDescription(std::forward<SourceEncryptionConfigurationDescriptionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Describes the encryption configuration of the destination data. This field is
   * present only for <code>ImportSnapshot</code> and <code>ExportSnapshot</code>
   * operations.</p>
   */
  inline const EncryptionConfigurationDescription& GetDestinationEncryptionConfigurationDescription() const {
    return m_destinationEncryptionConfigurationDescription;
  }
  inline bool DestinationEncryptionConfigurationDescriptionHasBeenSet() const {
    return m_destinationEncryptionConfigurationDescriptionHasBeenSet;
  }
  template <typename DestinationEncryptionConfigurationDescriptionT = EncryptionConfigurationDescription>
  void SetDestinationEncryptionConfigurationDescription(DestinationEncryptionConfigurationDescriptionT&& value) {
    m_destinationEncryptionConfigurationDescriptionHasBeenSet = true;
    m_destinationEncryptionConfigurationDescription = std::forward<DestinationEncryptionConfigurationDescriptionT>(value);
  }
  template <typename DestinationEncryptionConfigurationDescriptionT = EncryptionConfigurationDescription>
  SnapshotOperationInfoDetails& WithDestinationEncryptionConfigurationDescription(DestinationEncryptionConfigurationDescriptionT&& value) {
    SetDestinationEncryptionConfigurationDescription(std::forward<DestinationEncryptionConfigurationDescriptionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Describes the location that the snapshot data was read from. This field is
   * present only for <code>ImportSnapshot</code> operations.</p>
   */
  inline const SnapshotOperationLocationDescription& GetSnapshotSourceLocationDescription() const {
    return m_snapshotSourceLocationDescription;
  }
  inline bool SnapshotSourceLocationDescriptionHasBeenSet() const { return m_snapshotSourceLocationDescriptionHasBeenSet; }
  template <typename SnapshotSourceLocationDescriptionT = SnapshotOperationLocationDescription>
  void SetSnapshotSourceLocationDescription(SnapshotSourceLocationDescriptionT&& value) {
    m_snapshotSourceLocationDescriptionHasBeenSet = true;
    m_snapshotSourceLocationDescription = std::forward<SnapshotSourceLocationDescriptionT>(value);
  }
  template <typename SnapshotSourceLocationDescriptionT = SnapshotOperationLocationDescription>
  SnapshotOperationInfoDetails& WithSnapshotSourceLocationDescription(SnapshotSourceLocationDescriptionT&& value) {
    SetSnapshotSourceLocationDescription(std::forward<SnapshotSourceLocationDescriptionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Describes the location that the snapshot data was written to. This field is
   * present only for <code>ExportSnapshot</code> operations, after the operation
   * completes.</p>
   */
  inline const SnapshotOperationLocationDescription& GetSnapshotDestinationLocationDescription() const {
    return m_snapshotDestinationLocationDescription;
  }
  inline bool SnapshotDestinationLocationDescriptionHasBeenSet() const { return m_snapshotDestinationLocationDescriptionHasBeenSet; }
  template <typename SnapshotDestinationLocationDescriptionT = SnapshotOperationLocationDescription>
  void SetSnapshotDestinationLocationDescription(SnapshotDestinationLocationDescriptionT&& value) {
    m_snapshotDestinationLocationDescriptionHasBeenSet = true;
    m_snapshotDestinationLocationDescription = std::forward<SnapshotDestinationLocationDescriptionT>(value);
  }
  template <typename SnapshotDestinationLocationDescriptionT = SnapshotOperationLocationDescription>
  SnapshotOperationInfoDetails& WithSnapshotDestinationLocationDescription(SnapshotDestinationLocationDescriptionT&& value) {
    SetSnapshotDestinationLocationDescription(std::forward<SnapshotDestinationLocationDescriptionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Describes the application operation that initiated the snapshot operation.
   * This field is present only for <code>SystemCreateSnapshot</code> operations.</p>
   */
  inline const ApplicationOperationDescription& GetApplicationOperationDescription() const { return m_applicationOperationDescription; }
  inline bool ApplicationOperationDescriptionHasBeenSet() const { return m_applicationOperationDescriptionHasBeenSet; }
  template <typename ApplicationOperationDescriptionT = ApplicationOperationDescription>
  void SetApplicationOperationDescription(ApplicationOperationDescriptionT&& value) {
    m_applicationOperationDescriptionHasBeenSet = true;
    m_applicationOperationDescription = std::forward<ApplicationOperationDescriptionT>(value);
  }
  template <typename ApplicationOperationDescriptionT = ApplicationOperationDescription>
  SnapshotOperationInfoDetails& WithApplicationOperationDescription(ApplicationOperationDescriptionT&& value) {
    SetApplicationOperationDescription(std::forward<ApplicationOperationDescriptionT>(value));
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
  SnapshotOperationInfoDetails& WithStartTime(StartTimeT&& value) {
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
  SnapshotOperationInfoDetails& WithEndTime(EndTimeT&& value) {
    SetEndTime(std::forward<EndTimeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Provides a description of the operation failure. This field is present only
   * if <code>SnapshotOperationStatus</code> is <code>FAILED</code>.</p>
   */
  inline const SnapshotOperationFailureDetails& GetSnapshotOperationFailureDetails() const { return m_snapshotOperationFailureDetails; }
  inline bool SnapshotOperationFailureDetailsHasBeenSet() const { return m_snapshotOperationFailureDetailsHasBeenSet; }
  template <typename SnapshotOperationFailureDetailsT = SnapshotOperationFailureDetails>
  void SetSnapshotOperationFailureDetails(SnapshotOperationFailureDetailsT&& value) {
    m_snapshotOperationFailureDetailsHasBeenSet = true;
    m_snapshotOperationFailureDetails = std::forward<SnapshotOperationFailureDetailsT>(value);
  }
  template <typename SnapshotOperationFailureDetailsT = SnapshotOperationFailureDetails>
  SnapshotOperationInfoDetails& WithSnapshotOperationFailureDetails(SnapshotOperationFailureDetailsT&& value) {
    SetSnapshotOperationFailureDetails(std::forward<SnapshotOperationFailureDetailsT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_snapshotOperationId;

  SnapshotOperation m_snapshotOperation{SnapshotOperation::NOT_SET};

  SnapshotOperationStatus m_snapshotOperationStatus{SnapshotOperationStatus::NOT_SET};

  Aws::String m_snapshotArn;

  EncryptionConfigurationDescription m_sourceEncryptionConfigurationDescription;

  EncryptionConfigurationDescription m_destinationEncryptionConfigurationDescription;

  SnapshotOperationLocationDescription m_snapshotSourceLocationDescription;

  SnapshotOperationLocationDescription m_snapshotDestinationLocationDescription;

  ApplicationOperationDescription m_applicationOperationDescription;

  Aws::Utils::DateTime m_startTime{};

  Aws::Utils::DateTime m_endTime{};

  SnapshotOperationFailureDetails m_snapshotOperationFailureDetails;
  bool m_snapshotOperationIdHasBeenSet = false;
  bool m_snapshotOperationHasBeenSet = false;
  bool m_snapshotOperationStatusHasBeenSet = false;
  bool m_snapshotArnHasBeenSet = false;
  bool m_sourceEncryptionConfigurationDescriptionHasBeenSet = false;
  bool m_destinationEncryptionConfigurationDescriptionHasBeenSet = false;
  bool m_snapshotSourceLocationDescriptionHasBeenSet = false;
  bool m_snapshotDestinationLocationDescriptionHasBeenSet = false;
  bool m_applicationOperationDescriptionHasBeenSet = false;
  bool m_startTimeHasBeenSet = false;
  bool m_endTimeHasBeenSet = false;
  bool m_snapshotOperationFailureDetailsHasBeenSet = false;
};

}  // namespace Model
}  // namespace KinesisAnalyticsV2
}  // namespace Aws
