/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/kafka/Kafka_EXPORTS.h>
#include <aws/kafka/model/ChannelDestinationType.h>
#include <aws/kafka/model/ChannelLoggingInfo.h>
#include <aws/kafka/model/ChannelStateInfo.h>
#include <aws/kafka/model/ChannelStatus.h>
#include <aws/kafka/model/EncryptionConfiguration.h>
#include <aws/kafka/model/IcebergDestinationConfiguration.h>
#include <aws/kafka/model/S3DestinationConfiguration.h>
#include <aws/kafka/model/TopicConfiguration.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Json {
class JsonValue;
}  // namespace Json
}  // namespace Utils
namespace Kafka {
namespace Model {
/**
 * <p>Contains the current configuration and state of a channel.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/kafka-2018-11-14/DescribeChannelResponse">AWS
 * API Reference</a></p>
 */
class DescribeChannelResult {
 public:
  AWS_KAFKA_API DescribeChannelResult() = default;
  AWS_KAFKA_API DescribeChannelResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_KAFKA_API DescribeChannelResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   *
          <p>The Amazon Resource Name (ARN) that uniquely identifies the
   * channel.</p>

   */
  inline const Aws::String& GetChannelArn() const { return m_channelArn; }
  template <typename ChannelArnT = Aws::String>
  void SetChannelArn(ChannelArnT&& value) {
    m_channelArnHasBeenSet = true;
    m_channelArn = std::forward<ChannelArnT>(value);
  }
  template <typename ChannelArnT = Aws::String>
  DescribeChannelResult& WithChannelArn(ChannelArnT&& value) {
    SetChannelArn(std::forward<ChannelArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The name of the channel.</p>
   */
  inline const Aws::String& GetChannelName() const { return m_channelName; }
  template <typename ChannelNameT = Aws::String>
  void SetChannelName(ChannelNameT&& value) {
    m_channelNameHasBeenSet = true;
    m_channelName = std::forward<ChannelNameT>(value);
  }
  template <typename ChannelNameT = Aws::String>
  DescribeChannelResult& WithChannelName(ChannelNameT&& value) {
    SetChannelName(std::forward<ChannelNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The encryption configuration applied to the channel.</p>
   */
  inline const EncryptionConfiguration& GetEncryptionConfiguration() const { return m_encryptionConfiguration; }
  template <typename EncryptionConfigurationT = EncryptionConfiguration>
  void SetEncryptionConfiguration(EncryptionConfigurationT&& value) {
    m_encryptionConfigurationHasBeenSet = true;
    m_encryptionConfiguration = std::forward<EncryptionConfigurationT>(value);
  }
  template <typename EncryptionConfigurationT = EncryptionConfiguration>
  DescribeChannelResult& WithEncryptionConfiguration(EncryptionConfigurationT&& value) {
    SetEncryptionConfiguration(std::forward<EncryptionConfigurationT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Apache Iceberg destination for the channel, if configured.</p>
   */
  inline const IcebergDestinationConfiguration& GetIcebergDestinationConfiguration() const { return m_icebergDestinationConfiguration; }
  template <typename IcebergDestinationConfigurationT = IcebergDestinationConfiguration>
  void SetIcebergDestinationConfiguration(IcebergDestinationConfigurationT&& value) {
    m_icebergDestinationConfigurationHasBeenSet = true;
    m_icebergDestinationConfiguration = std::forward<IcebergDestinationConfigurationT>(value);
  }
  template <typename IcebergDestinationConfigurationT = IcebergDestinationConfiguration>
  DescribeChannelResult& WithIcebergDestinationConfiguration(IcebergDestinationConfigurationT&& value) {
    SetIcebergDestinationConfiguration(std::forward<IcebergDestinationConfigurationT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon S3 destination for the channel, if configured.</p>
   */
  inline const S3DestinationConfiguration& GetS3DestinationConfiguration() const { return m_s3DestinationConfiguration; }
  template <typename S3DestinationConfigurationT = S3DestinationConfiguration>
  void SetS3DestinationConfiguration(S3DestinationConfigurationT&& value) {
    m_s3DestinationConfigurationHasBeenSet = true;
    m_s3DestinationConfiguration = std::forward<S3DestinationConfigurationT>(value);
  }
  template <typename S3DestinationConfigurationT = S3DestinationConfiguration>
  DescribeChannelResult& WithS3DestinationConfiguration(S3DestinationConfigurationT&& value) {
    SetS3DestinationConfiguration(std::forward<S3DestinationConfigurationT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The current lifecycle state of the channel.</p>
   */
  inline ChannelStatus GetStatus() const { return m_status; }
  inline void SetStatus(ChannelStatus value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline DescribeChannelResult& WithStatus(ChannelStatus value) {
    SetStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The type of destination configured for the channel.</p>
   */
  inline ChannelDestinationType GetDestinationType() const { return m_destinationType; }
  inline void SetDestinationType(ChannelDestinationType value) {
    m_destinationTypeHasBeenSet = true;
    m_destinationType = value;
  }
  inline DescribeChannelResult& WithDestinationType(ChannelDestinationType value) {
    SetDestinationType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   *
          <p>The time when the channel was created.</p>

   */
  inline const Aws::Utils::DateTime& GetCreationTime() const { return m_creationTime; }
  template <typename CreationTimeT = Aws::Utils::DateTime>
  void SetCreationTime(CreationTimeT&& value) {
    m_creationTimeHasBeenSet = true;
    m_creationTime = std::forward<CreationTimeT>(value);
  }
  template <typename CreationTimeT = Aws::Utils::DateTime>
  DescribeChannelResult& WithCreationTime(CreationTimeT&& value) {
    SetCreationTime(std::forward<CreationTimeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The list of topic configurations for the channel.</p>
   */
  inline const Aws::Vector<TopicConfiguration>& GetTopicConfigurationList() const { return m_topicConfigurationList; }
  template <typename TopicConfigurationListT = Aws::Vector<TopicConfiguration>>
  void SetTopicConfigurationList(TopicConfigurationListT&& value) {
    m_topicConfigurationListHasBeenSet = true;
    m_topicConfigurationList = std::forward<TopicConfigurationListT>(value);
  }
  template <typename TopicConfigurationListT = Aws::Vector<TopicConfiguration>>
  DescribeChannelResult& WithTopicConfigurationList(TopicConfigurationListT&& value) {
    SetTopicConfigurationList(std::forward<TopicConfigurationListT>(value));
    return *this;
  }
  template <typename TopicConfigurationListT = TopicConfiguration>
  DescribeChannelResult& AddTopicConfigurationList(TopicConfigurationListT&& value) {
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
  template <typename LoggingInfoT = ChannelLoggingInfo>
  void SetLoggingInfo(LoggingInfoT&& value) {
    m_loggingInfoHasBeenSet = true;
    m_loggingInfo = std::forward<LoggingInfoT>(value);
  }
  template <typename LoggingInfoT = ChannelLoggingInfo>
  DescribeChannelResult& WithLoggingInfo(LoggingInfoT&& value) {
    SetLoggingInfo(std::forward<LoggingInfoT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Additional context for the current channel state, populated when the channel
   * is in FAILED.</p>
   */
  inline const ChannelStateInfo& GetStateInfo() const { return m_stateInfo; }
  template <typename StateInfoT = ChannelStateInfo>
  void SetStateInfo(StateInfoT&& value) {
    m_stateInfoHasBeenSet = true;
    m_stateInfo = std::forward<StateInfoT>(value);
  }
  template <typename StateInfoT = ChannelStateInfo>
  DescribeChannelResult& WithStateInfo(StateInfoT&& value) {
    SetStateInfo(std::forward<StateInfoT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the in-flight cluster operation. Returned
   * only while the channel is in CREATING, UPDATING, or DELETING.</p>
   */
  inline const Aws::String& GetClusterOperationArn() const { return m_clusterOperationArn; }
  template <typename ClusterOperationArnT = Aws::String>
  void SetClusterOperationArn(ClusterOperationArnT&& value) {
    m_clusterOperationArnHasBeenSet = true;
    m_clusterOperationArn = std::forward<ClusterOperationArnT>(value);
  }
  template <typename ClusterOperationArnT = Aws::String>
  DescribeChannelResult& WithClusterOperationArn(ClusterOperationArnT&& value) {
    SetClusterOperationArn(std::forward<ClusterOperationArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The tags attached to the channel.</p>
   */
  inline const Aws::Map<Aws::String, Aws::String>& GetTags() const { return m_tags; }
  template <typename TagsT = Aws::Map<Aws::String, Aws::String>>
  void SetTags(TagsT&& value) {
    m_tagsHasBeenSet = true;
    m_tags = std::forward<TagsT>(value);
  }
  template <typename TagsT = Aws::Map<Aws::String, Aws::String>>
  DescribeChannelResult& WithTags(TagsT&& value) {
    SetTags(std::forward<TagsT>(value));
    return *this;
  }
  template <typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
  DescribeChannelResult& AddTags(TagsKeyT&& key, TagsValueT&& value) {
    m_tagsHasBeenSet = true;
    m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const Aws::String& GetRequestId() const { return m_requestId; }
  template <typename RequestIdT = Aws::String>
  void SetRequestId(RequestIdT&& value) {
    m_requestIdHasBeenSet = true;
    m_requestId = std::forward<RequestIdT>(value);
  }
  template <typename RequestIdT = Aws::String>
  DescribeChannelResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::String m_channelArn;

  Aws::String m_channelName;

  EncryptionConfiguration m_encryptionConfiguration;

  IcebergDestinationConfiguration m_icebergDestinationConfiguration;

  S3DestinationConfiguration m_s3DestinationConfiguration;

  ChannelStatus m_status{ChannelStatus::NOT_SET};

  ChannelDestinationType m_destinationType{ChannelDestinationType::NOT_SET};

  Aws::Utils::DateTime m_creationTime{};

  Aws::Vector<TopicConfiguration> m_topicConfigurationList;

  ChannelLoggingInfo m_loggingInfo;

  ChannelStateInfo m_stateInfo;

  Aws::String m_clusterOperationArn;

  Aws::Map<Aws::String, Aws::String> m_tags;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_channelArnHasBeenSet = false;
  bool m_channelNameHasBeenSet = false;
  bool m_encryptionConfigurationHasBeenSet = false;
  bool m_icebergDestinationConfigurationHasBeenSet = false;
  bool m_s3DestinationConfigurationHasBeenSet = false;
  bool m_statusHasBeenSet = false;
  bool m_destinationTypeHasBeenSet = false;
  bool m_creationTimeHasBeenSet = false;
  bool m_topicConfigurationListHasBeenSet = false;
  bool m_loggingInfoHasBeenSet = false;
  bool m_stateInfoHasBeenSet = false;
  bool m_clusterOperationArnHasBeenSet = false;
  bool m_tagsHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace Kafka
}  // namespace Aws
