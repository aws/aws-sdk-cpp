/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/kinesis/KinesisRequest.h>
#include <aws/kinesis/Kinesis_EXPORTS.h>
#include <aws/kinesis/model/ChannelEncryptionConfiguration.h>
#include <aws/kinesis/model/ChannelLoggingConfiguration.h>
#include <aws/kinesis/model/ChannelStreamConfiguration.h>
#include <aws/kinesis/model/S3DestinationConfiguration.h>
#include <aws/kinesis/model/S3TablesDestinationConfiguration.h>

#include <utility>

namespace Aws {
namespace Kinesis {
namespace Model {

/**
 */
class CreateChannelRequest : public KinesisRequest {
 public:
  AWS_KINESIS_API CreateChannelRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "CreateChannel"; }

  AWS_KINESIS_API Aws::String SerializePayload() const override;

  AWS_KINESIS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

  /**
   * Helper function to collect parameters (configurable and static hardcoded) required for endpoint computation.
   */
  AWS_KINESIS_API EndpointParameters GetEndpointContextParams() const override;

  ///@{
  /**
   * <p>The name of the channel. The name is unique within your Amazon Web Services
   * account and Amazon Web Services Region.</p>
   */
  inline const Aws::String& GetChannelName() const { return m_channelName; }
  inline bool ChannelNameHasBeenSet() const { return m_channelNameHasBeenSet; }
  template <typename ChannelNameT = Aws::String>
  void SetChannelName(ChannelNameT&& value) {
    m_channelNameHasBeenSet = true;
    m_channelName = std::forward<ChannelNameT>(value);
  }
  template <typename ChannelNameT = Aws::String>
  CreateChannelRequest& WithChannelName(ChannelNameT&& value) {
    SetChannelName(std::forward<ChannelNameT>(value));
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
  CreateChannelRequest& WithServiceExecutionRoleARN(ServiceExecutionRoleARNT&& value) {
    SetServiceExecutionRoleARN(std::forward<ServiceExecutionRoleARNT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The source stream configuration for the channel. Currently, one stream is
   * supported per channel.</p>
   */
  inline const Aws::Vector<ChannelStreamConfiguration>& GetStreamConfigurationList() const { return m_streamConfigurationList; }
  inline bool StreamConfigurationListHasBeenSet() const { return m_streamConfigurationListHasBeenSet; }
  template <typename StreamConfigurationListT = Aws::Vector<ChannelStreamConfiguration>>
  void SetStreamConfigurationList(StreamConfigurationListT&& value) {
    m_streamConfigurationListHasBeenSet = true;
    m_streamConfigurationList = std::forward<StreamConfigurationListT>(value);
  }
  template <typename StreamConfigurationListT = Aws::Vector<ChannelStreamConfiguration>>
  CreateChannelRequest& WithStreamConfigurationList(StreamConfigurationListT&& value) {
    SetStreamConfigurationList(std::forward<StreamConfigurationListT>(value));
    return *this;
  }
  template <typename StreamConfigurationListT = ChannelStreamConfiguration>
  CreateChannelRequest& AddStreamConfigurationList(StreamConfigurationListT&& value) {
    m_streamConfigurationListHasBeenSet = true;
    m_streamConfigurationList.emplace_back(std::forward<StreamConfigurationListT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The configuration for delivery to a general purpose Amazon S3 bucket. You
   * must specify either <code>S3DestinationConfiguration</code> or
   * <code>S3TablesDestinationConfiguration</code>, but not both.</p>
   */
  inline const S3DestinationConfiguration& GetS3DestinationConfiguration() const { return m_s3DestinationConfiguration; }
  inline bool S3DestinationConfigurationHasBeenSet() const { return m_s3DestinationConfigurationHasBeenSet; }
  template <typename S3DestinationConfigurationT = S3DestinationConfiguration>
  void SetS3DestinationConfiguration(S3DestinationConfigurationT&& value) {
    m_s3DestinationConfigurationHasBeenSet = true;
    m_s3DestinationConfiguration = std::forward<S3DestinationConfigurationT>(value);
  }
  template <typename S3DestinationConfigurationT = S3DestinationConfiguration>
  CreateChannelRequest& WithS3DestinationConfiguration(S3DestinationConfigurationT&& value) {
    SetS3DestinationConfiguration(std::forward<S3DestinationConfigurationT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The configuration for delivery to streaming tables on Apache Iceberg in
   * Amazon S3 Tables. You must specify either
   * <code>S3DestinationConfiguration</code> or
   * <code>S3TablesDestinationConfiguration</code>, but not both.</p>
   */
  inline const S3TablesDestinationConfiguration& GetS3TablesDestinationConfiguration() const { return m_s3TablesDestinationConfiguration; }
  inline bool S3TablesDestinationConfigurationHasBeenSet() const { return m_s3TablesDestinationConfigurationHasBeenSet; }
  template <typename S3TablesDestinationConfigurationT = S3TablesDestinationConfiguration>
  void SetS3TablesDestinationConfiguration(S3TablesDestinationConfigurationT&& value) {
    m_s3TablesDestinationConfigurationHasBeenSet = true;
    m_s3TablesDestinationConfiguration = std::forward<S3TablesDestinationConfigurationT>(value);
  }
  template <typename S3TablesDestinationConfigurationT = S3TablesDestinationConfiguration>
  CreateChannelRequest& WithS3TablesDestinationConfiguration(S3TablesDestinationConfigurationT&& value) {
    SetS3TablesDestinationConfiguration(std::forward<S3TablesDestinationConfigurationT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The server-side encryption configuration that uses an Amazon Web Services KMS
   * key to encrypt data delivered to the destination.</p>
   */
  inline const ChannelEncryptionConfiguration& GetEncryptionConfiguration() const { return m_encryptionConfiguration; }
  inline bool EncryptionConfigurationHasBeenSet() const { return m_encryptionConfigurationHasBeenSet; }
  template <typename EncryptionConfigurationT = ChannelEncryptionConfiguration>
  void SetEncryptionConfiguration(EncryptionConfigurationT&& value) {
    m_encryptionConfigurationHasBeenSet = true;
    m_encryptionConfiguration = std::forward<EncryptionConfigurationT>(value);
  }
  template <typename EncryptionConfigurationT = ChannelEncryptionConfiguration>
  CreateChannelRequest& WithEncryptionConfiguration(EncryptionConfigurationT&& value) {
    SetEncryptionConfiguration(std::forward<EncryptionConfigurationT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A set of key-value pairs to assign to the channel. A tag consists of a
   * required key and an optional value.</p>
   */
  inline const Aws::Map<Aws::String, Aws::String>& GetTags() const { return m_tags; }
  inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
  template <typename TagsT = Aws::Map<Aws::String, Aws::String>>
  void SetTags(TagsT&& value) {
    m_tagsHasBeenSet = true;
    m_tags = std::forward<TagsT>(value);
  }
  template <typename TagsT = Aws::Map<Aws::String, Aws::String>>
  CreateChannelRequest& WithTags(TagsT&& value) {
    SetTags(std::forward<TagsT>(value));
    return *this;
  }
  template <typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
  CreateChannelRequest& AddTags(TagsKeyT&& key, TagsValueT&& value) {
    m_tagsHasBeenSet = true;
    m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value));
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
  CreateChannelRequest& WithLoggingConfiguration(LoggingConfigurationT&& value) {
    SetLoggingConfiguration(std::forward<LoggingConfigurationT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_channelName;

  Aws::String m_serviceExecutionRoleARN;

  Aws::Vector<ChannelStreamConfiguration> m_streamConfigurationList;

  S3DestinationConfiguration m_s3DestinationConfiguration;

  S3TablesDestinationConfiguration m_s3TablesDestinationConfiguration;

  ChannelEncryptionConfiguration m_encryptionConfiguration;

  Aws::Map<Aws::String, Aws::String> m_tags;

  ChannelLoggingConfiguration m_loggingConfiguration;
  bool m_channelNameHasBeenSet = false;
  bool m_serviceExecutionRoleARNHasBeenSet = false;
  bool m_streamConfigurationListHasBeenSet = false;
  bool m_s3DestinationConfigurationHasBeenSet = false;
  bool m_s3TablesDestinationConfigurationHasBeenSet = false;
  bool m_encryptionConfigurationHasBeenSet = false;
  bool m_tagsHasBeenSet = false;
  bool m_loggingConfigurationHasBeenSet = false;
};

}  // namespace Model
}  // namespace Kinesis
}  // namespace Aws
