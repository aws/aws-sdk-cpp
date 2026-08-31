/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/kinesis/Kinesis_EXPORTS.h>
#include <aws/kinesis/model/ChannelEncryptionConfiguration.h>
#include <aws/kinesis/model/ChannelLoggingConfiguration.h>
#include <aws/kinesis/model/ChannelStatus.h>
#include <aws/kinesis/model/ChannelStreamDescription.h>
#include <aws/kinesis/model/S3DestinationDescription.h>
#include <aws/kinesis/model/S3TablesDestinationDescription.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace Kinesis {
namespace Model {

/**
 * <p>Describes the configuration and current status of a channel.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/kinesis-2013-12-02/ChannelDescription">AWS
 * API Reference</a></p>
 */
class ChannelDescription {
 public:
  AWS_KINESIS_API ChannelDescription() = default;
  AWS_KINESIS_API ChannelDescription(Aws::Utils::Json::JsonView jsonValue);
  AWS_KINESIS_API ChannelDescription& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_KINESIS_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The name of the channel.</p>
   */
  inline const Aws::String& GetChannelName() const { return m_channelName; }
  inline bool ChannelNameHasBeenSet() const { return m_channelNameHasBeenSet; }
  template <typename ChannelNameT = Aws::String>
  void SetChannelName(ChannelNameT&& value) {
    m_channelNameHasBeenSet = true;
    m_channelName = std::forward<ChannelNameT>(value);
  }
  template <typename ChannelNameT = Aws::String>
  ChannelDescription& WithChannelName(ChannelNameT&& value) {
    SetChannelName(std::forward<ChannelNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the channel.</p>
   */
  inline const Aws::String& GetChannelARN() const { return m_channelARN; }
  inline bool ChannelARNHasBeenSet() const { return m_channelARNHasBeenSet; }
  template <typename ChannelARNT = Aws::String>
  void SetChannelARN(ChannelARNT&& value) {
    m_channelARNHasBeenSet = true;
    m_channelARN = std::forward<ChannelARNT>(value);
  }
  template <typename ChannelARNT = Aws::String>
  ChannelDescription& WithChannelARN(ChannelARNT&& value) {
    SetChannelARN(std::forward<ChannelARNT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The unique identifier of the channel.</p>
   */
  inline const Aws::String& GetChannelId() const { return m_channelId; }
  inline bool ChannelIdHasBeenSet() const { return m_channelIdHasBeenSet; }
  template <typename ChannelIdT = Aws::String>
  void SetChannelId(ChannelIdT&& value) {
    m_channelIdHasBeenSet = true;
    m_channelId = std::forward<ChannelIdT>(value);
  }
  template <typename ChannelIdT = Aws::String>
  ChannelDescription& WithChannelId(ChannelIdT&& value) {
    SetChannelId(std::forward<ChannelIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The current status of the channel. Valid values:</p> <ul> <li> <p>
   * <code>CREATING</code> </p> </li> <li> <p> <code>ACTIVE</code> </p> </li> <li>
   * <p> <code>UPDATING</code> </p> </li> <li> <p> <code>DELETING</code> </p> </li>
   * <li> <p> <code>FAILED</code> - See <code>ChannelStatusReason</code> for the
   * failure cause.</p> </li> </ul>
   */
  inline ChannelStatus GetChannelStatus() const { return m_channelStatus; }
  inline bool ChannelStatusHasBeenSet() const { return m_channelStatusHasBeenSet; }
  inline void SetChannelStatus(ChannelStatus value) {
    m_channelStatusHasBeenSet = true;
    m_channelStatus = value;
  }
  inline ChannelDescription& WithChannelStatus(ChannelStatus value) {
    SetChannelStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A message describing the reason for a <code>FAILED</code> status.</p>
   */
  inline const Aws::String& GetChannelStatusReason() const { return m_channelStatusReason; }
  inline bool ChannelStatusReasonHasBeenSet() const { return m_channelStatusReasonHasBeenSet; }
  template <typename ChannelStatusReasonT = Aws::String>
  void SetChannelStatusReason(ChannelStatusReasonT&& value) {
    m_channelStatusReasonHasBeenSet = true;
    m_channelStatusReason = std::forward<ChannelStatusReasonT>(value);
  }
  template <typename ChannelStatusReasonT = Aws::String>
  ChannelDescription& WithChannelStatusReason(ChannelStatusReasonT&& value) {
    SetChannelStatusReason(std::forward<ChannelStatusReasonT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The time at which the channel was created.</p>
   */
  inline const Aws::Utils::DateTime& GetChannelCreationTimestamp() const { return m_channelCreationTimestamp; }
  inline bool ChannelCreationTimestampHasBeenSet() const { return m_channelCreationTimestampHasBeenSet; }
  template <typename ChannelCreationTimestampT = Aws::Utils::DateTime>
  void SetChannelCreationTimestamp(ChannelCreationTimestampT&& value) {
    m_channelCreationTimestampHasBeenSet = true;
    m_channelCreationTimestamp = std::forward<ChannelCreationTimestampT>(value);
  }
  template <typename ChannelCreationTimestampT = Aws::Utils::DateTime>
  ChannelDescription& WithChannelCreationTimestamp(ChannelCreationTimestampT&& value) {
    SetChannelCreationTimestamp(std::forward<ChannelCreationTimestampT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the IAM role that Amazon Kinesis Data
   * Streams assumes to write records to the destination.</p>
   */
  inline const Aws::String& GetServiceExecutionRoleARN() const { return m_serviceExecutionRoleARN; }
  inline bool ServiceExecutionRoleARNHasBeenSet() const { return m_serviceExecutionRoleARNHasBeenSet; }
  template <typename ServiceExecutionRoleARNT = Aws::String>
  void SetServiceExecutionRoleARN(ServiceExecutionRoleARNT&& value) {
    m_serviceExecutionRoleARNHasBeenSet = true;
    m_serviceExecutionRoleARN = std::forward<ServiceExecutionRoleARNT>(value);
  }
  template <typename ServiceExecutionRoleARNT = Aws::String>
  ChannelDescription& WithServiceExecutionRoleARN(ServiceExecutionRoleARNT&& value) {
    SetServiceExecutionRoleARN(std::forward<ServiceExecutionRoleARNT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The source stream configuration for the channel.</p>
   */
  inline const Aws::Vector<ChannelStreamDescription>& GetStreamConfigurationList() const { return m_streamConfigurationList; }
  inline bool StreamConfigurationListHasBeenSet() const { return m_streamConfigurationListHasBeenSet; }
  template <typename StreamConfigurationListT = Aws::Vector<ChannelStreamDescription>>
  void SetStreamConfigurationList(StreamConfigurationListT&& value) {
    m_streamConfigurationListHasBeenSet = true;
    m_streamConfigurationList = std::forward<StreamConfigurationListT>(value);
  }
  template <typename StreamConfigurationListT = Aws::Vector<ChannelStreamDescription>>
  ChannelDescription& WithStreamConfigurationList(StreamConfigurationListT&& value) {
    SetStreamConfigurationList(std::forward<StreamConfigurationListT>(value));
    return *this;
  }
  template <typename StreamConfigurationListT = ChannelStreamDescription>
  ChannelDescription& AddStreamConfigurationList(StreamConfigurationListT&& value) {
    m_streamConfigurationListHasBeenSet = true;
    m_streamConfigurationList.emplace_back(std::forward<StreamConfigurationListT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The configuration for delivery to a general purpose Amazon S3 bucket. Present
   * only when the channel destination is a general purpose Amazon S3 bucket.</p>
   */
  inline const S3DestinationDescription& GetS3DestinationConfiguration() const { return m_s3DestinationConfiguration; }
  inline bool S3DestinationConfigurationHasBeenSet() const { return m_s3DestinationConfigurationHasBeenSet; }
  template <typename S3DestinationConfigurationT = S3DestinationDescription>
  void SetS3DestinationConfiguration(S3DestinationConfigurationT&& value) {
    m_s3DestinationConfigurationHasBeenSet = true;
    m_s3DestinationConfiguration = std::forward<S3DestinationConfigurationT>(value);
  }
  template <typename S3DestinationConfigurationT = S3DestinationDescription>
  ChannelDescription& WithS3DestinationConfiguration(S3DestinationConfigurationT&& value) {
    SetS3DestinationConfiguration(std::forward<S3DestinationConfigurationT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The configuration for delivery to streaming tables on Apache Iceberg in
   * Amazon S3 Tables. Present only when the channel destination is a streaming
   * table.</p>
   */
  inline const S3TablesDestinationDescription& GetS3TablesDestinationConfiguration() const { return m_s3TablesDestinationConfiguration; }
  inline bool S3TablesDestinationConfigurationHasBeenSet() const { return m_s3TablesDestinationConfigurationHasBeenSet; }
  template <typename S3TablesDestinationConfigurationT = S3TablesDestinationDescription>
  void SetS3TablesDestinationConfiguration(S3TablesDestinationConfigurationT&& value) {
    m_s3TablesDestinationConfigurationHasBeenSet = true;
    m_s3TablesDestinationConfiguration = std::forward<S3TablesDestinationConfigurationT>(value);
  }
  template <typename S3TablesDestinationConfigurationT = S3TablesDestinationDescription>
  ChannelDescription& WithS3TablesDestinationConfiguration(S3TablesDestinationConfigurationT&& value) {
    SetS3TablesDestinationConfiguration(std::forward<S3TablesDestinationConfigurationT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The server-side encryption configuration for the channel.</p>
   */
  inline const ChannelEncryptionConfiguration& GetEncryptionConfiguration() const { return m_encryptionConfiguration; }
  inline bool EncryptionConfigurationHasBeenSet() const { return m_encryptionConfigurationHasBeenSet; }
  template <typename EncryptionConfigurationT = ChannelEncryptionConfiguration>
  void SetEncryptionConfiguration(EncryptionConfigurationT&& value) {
    m_encryptionConfigurationHasBeenSet = true;
    m_encryptionConfiguration = std::forward<EncryptionConfigurationT>(value);
  }
  template <typename EncryptionConfigurationT = ChannelEncryptionConfiguration>
  ChannelDescription& WithEncryptionConfiguration(EncryptionConfigurationT&& value) {
    SetEncryptionConfiguration(std::forward<EncryptionConfigurationT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon CloudWatch Logs configuration for the channel.</p>
   */
  inline const ChannelLoggingConfiguration& GetLoggingConfiguration() const { return m_loggingConfiguration; }
  inline bool LoggingConfigurationHasBeenSet() const { return m_loggingConfigurationHasBeenSet; }
  template <typename LoggingConfigurationT = ChannelLoggingConfiguration>
  void SetLoggingConfiguration(LoggingConfigurationT&& value) {
    m_loggingConfigurationHasBeenSet = true;
    m_loggingConfiguration = std::forward<LoggingConfigurationT>(value);
  }
  template <typename LoggingConfigurationT = ChannelLoggingConfiguration>
  ChannelDescription& WithLoggingConfiguration(LoggingConfigurationT&& value) {
    SetLoggingConfiguration(std::forward<LoggingConfigurationT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_channelName;

  Aws::String m_channelARN;

  Aws::String m_channelId;

  ChannelStatus m_channelStatus{ChannelStatus::NOT_SET};

  Aws::String m_channelStatusReason;

  Aws::Utils::DateTime m_channelCreationTimestamp{};

  Aws::String m_serviceExecutionRoleARN;

  Aws::Vector<ChannelStreamDescription> m_streamConfigurationList;

  S3DestinationDescription m_s3DestinationConfiguration;

  S3TablesDestinationDescription m_s3TablesDestinationConfiguration;

  ChannelEncryptionConfiguration m_encryptionConfiguration;

  ChannelLoggingConfiguration m_loggingConfiguration;
  bool m_channelNameHasBeenSet = false;
  bool m_channelARNHasBeenSet = false;
  bool m_channelIdHasBeenSet = false;
  bool m_channelStatusHasBeenSet = false;
  bool m_channelStatusReasonHasBeenSet = false;
  bool m_channelCreationTimestampHasBeenSet = false;
  bool m_serviceExecutionRoleARNHasBeenSet = false;
  bool m_streamConfigurationListHasBeenSet = false;
  bool m_s3DestinationConfigurationHasBeenSet = false;
  bool m_s3TablesDestinationConfigurationHasBeenSet = false;
  bool m_encryptionConfigurationHasBeenSet = false;
  bool m_loggingConfigurationHasBeenSet = false;
};

}  // namespace Model
}  // namespace Kinesis
}  // namespace Aws
