/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/kafka/KafkaRequest.h>
#include <aws/kafka/Kafka_EXPORTS.h>
#include <aws/kafka/model/ChannelLoggingInfo.h>
#include <aws/kafka/model/EncryptionConfiguration.h>
#include <aws/kafka/model/IcebergDestinationConfiguration.h>
#include <aws/kafka/model/S3DestinationConfiguration.h>
#include <aws/kafka/model/TopicConfiguration.h>

#include <utility>

namespace Aws {
namespace Kafka {
namespace Model {

/**
 * <p>Creates a Channel that streams records from an Amazon MSK Express cluster
 * topic to Amazon S3 or Apache Iceberg.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/kafka-2018-11-14/CreateChannelRequest">AWS
 * API Reference</a></p>
 */
class CreateChannelRequest : public KafkaRequest {
 public:
  AWS_KAFKA_API CreateChannelRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "CreateChannel"; }

  AWS_KAFKA_API Aws::String SerializePayload() const override;

  ///@{
  /**
   * <p>The name of the channel. Must be unique within the cluster.</p>
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
   *
          <p>The Amazon Resource Name (ARN) that uniquely identifies the
   * cluster.</p>

   */
  inline const Aws::String& GetClusterArn() const { return m_clusterArn; }
  inline bool ClusterArnHasBeenSet() const { return m_clusterArnHasBeenSet; }
  template <typename ClusterArnT = Aws::String>
  void SetClusterArn(ClusterArnT&& value) {
    m_clusterArnHasBeenSet = true;
    m_clusterArn = std::forward<ClusterArnT>(value);
  }
  template <typename ClusterArnT = Aws::String>
  CreateChannelRequest& WithClusterArn(ClusterArnT&& value) {
    SetClusterArn(std::forward<ClusterArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The encryption configuration applied to the channel.</p>
   */
  inline const EncryptionConfiguration& GetEncryptionConfiguration() const { return m_encryptionConfiguration; }
  inline bool EncryptionConfigurationHasBeenSet() const { return m_encryptionConfigurationHasBeenSet; }
  template <typename EncryptionConfigurationT = EncryptionConfiguration>
  void SetEncryptionConfiguration(EncryptionConfigurationT&& value) {
    m_encryptionConfigurationHasBeenSet = true;
    m_encryptionConfiguration = std::forward<EncryptionConfigurationT>(value);
  }
  template <typename EncryptionConfigurationT = EncryptionConfiguration>
  CreateChannelRequest& WithEncryptionConfiguration(EncryptionConfigurationT&& value) {
    SetEncryptionConfiguration(std::forward<EncryptionConfigurationT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Apache Iceberg destination for the channel. Mutually exclusive with
   * s3DestinationConfiguration.</p>
   */
  inline const IcebergDestinationConfiguration& GetIcebergDestinationConfiguration() const { return m_icebergDestinationConfiguration; }
  inline bool IcebergDestinationConfigurationHasBeenSet() const { return m_icebergDestinationConfigurationHasBeenSet; }
  template <typename IcebergDestinationConfigurationT = IcebergDestinationConfiguration>
  void SetIcebergDestinationConfiguration(IcebergDestinationConfigurationT&& value) {
    m_icebergDestinationConfigurationHasBeenSet = true;
    m_icebergDestinationConfiguration = std::forward<IcebergDestinationConfigurationT>(value);
  }
  template <typename IcebergDestinationConfigurationT = IcebergDestinationConfiguration>
  CreateChannelRequest& WithIcebergDestinationConfiguration(IcebergDestinationConfigurationT&& value) {
    SetIcebergDestinationConfiguration(std::forward<IcebergDestinationConfigurationT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon S3 destination for the channel. Mutually exclusive with
   * icebergDestinationConfiguration.</p>
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
   * <p>The tags attached to the channel.</p>
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
   * <p>The list of topic configurations for the channel. Currently exactly one topic
   * must be specified.</p>
   */
  inline const Aws::Vector<TopicConfiguration>& GetTopicConfigurationList() const { return m_topicConfigurationList; }
  inline bool TopicConfigurationListHasBeenSet() const { return m_topicConfigurationListHasBeenSet; }
  template <typename TopicConfigurationListT = Aws::Vector<TopicConfiguration>>
  void SetTopicConfigurationList(TopicConfigurationListT&& value) {
    m_topicConfigurationListHasBeenSet = true;
    m_topicConfigurationList = std::forward<TopicConfigurationListT>(value);
  }
  template <typename TopicConfigurationListT = Aws::Vector<TopicConfiguration>>
  CreateChannelRequest& WithTopicConfigurationList(TopicConfigurationListT&& value) {
    SetTopicConfigurationList(std::forward<TopicConfigurationListT>(value));
    return *this;
  }
  template <typename TopicConfigurationListT = TopicConfiguration>
  CreateChannelRequest& AddTopicConfigurationList(TopicConfigurationListT&& value) {
    m_topicConfigurationListHasBeenSet = true;
    m_topicConfigurationList.emplace_back(std::forward<TopicConfigurationListT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The destinations to which the channel publishes operational logs.</p>
   */
  inline const ChannelLoggingInfo& GetLoggingInfo() const { return m_loggingInfo; }
  inline bool LoggingInfoHasBeenSet() const { return m_loggingInfoHasBeenSet; }
  template <typename LoggingInfoT = ChannelLoggingInfo>
  void SetLoggingInfo(LoggingInfoT&& value) {
    m_loggingInfoHasBeenSet = true;
    m_loggingInfo = std::forward<LoggingInfoT>(value);
  }
  template <typename LoggingInfoT = ChannelLoggingInfo>
  CreateChannelRequest& WithLoggingInfo(LoggingInfoT&& value) {
    SetLoggingInfo(std::forward<LoggingInfoT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_channelName;

  Aws::String m_clusterArn;

  EncryptionConfiguration m_encryptionConfiguration;

  IcebergDestinationConfiguration m_icebergDestinationConfiguration;

  S3DestinationConfiguration m_s3DestinationConfiguration;

  Aws::Map<Aws::String, Aws::String> m_tags;

  Aws::Vector<TopicConfiguration> m_topicConfigurationList;

  ChannelLoggingInfo m_loggingInfo;
  bool m_channelNameHasBeenSet = false;
  bool m_clusterArnHasBeenSet = false;
  bool m_encryptionConfigurationHasBeenSet = false;
  bool m_icebergDestinationConfigurationHasBeenSet = false;
  bool m_s3DestinationConfigurationHasBeenSet = false;
  bool m_tagsHasBeenSet = false;
  bool m_topicConfigurationListHasBeenSet = false;
  bool m_loggingInfoHasBeenSet = false;
};

}  // namespace Model
}  // namespace Kafka
}  // namespace Aws
