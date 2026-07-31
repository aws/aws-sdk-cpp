/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/kafka/Kafka_EXPORTS.h>
#include <aws/kafka/model/ChannelDestinationType.h>
#include <aws/kafka/model/ChannelStatus.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace Kafka {
namespace Model {

/**
 * <p>Summary information about a channel returned by ListChannels.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/kafka-2018-11-14/ChannelInfo">AWS
 * API Reference</a></p>
 */
class ChannelInfo {
 public:
  AWS_KAFKA_API ChannelInfo() = default;
  AWS_KAFKA_API ChannelInfo(Aws::Utils::Json::JsonView jsonValue);
  AWS_KAFKA_API ChannelInfo& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_KAFKA_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   *
          <p>The Amazon Resource Name (ARN) that uniquely identifies the
   * channel.</p>

   */
  inline const Aws::String& GetChannelArn() const { return m_channelArn; }
  inline bool ChannelArnHasBeenSet() const { return m_channelArnHasBeenSet; }
  template <typename ChannelArnT = Aws::String>
  void SetChannelArn(ChannelArnT&& value) {
    m_channelArnHasBeenSet = true;
    m_channelArn = std::forward<ChannelArnT>(value);
  }
  template <typename ChannelArnT = Aws::String>
  ChannelInfo& WithChannelArn(ChannelArnT&& value) {
    SetChannelArn(std::forward<ChannelArnT>(value));
    return *this;
  }
  ///@}

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
  ChannelInfo& WithChannelName(ChannelNameT&& value) {
    SetChannelName(std::forward<ChannelNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The current lifecycle state of the channel.</p>
   */
  inline ChannelStatus GetStatus() const { return m_status; }
  inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
  inline void SetStatus(ChannelStatus value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline ChannelInfo& WithStatus(ChannelStatus value) {
    SetStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   *
          <p>The time when the channel was created.</p>

   */
  inline const Aws::Utils::DateTime& GetCreationTime() const { return m_creationTime; }
  inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }
  template <typename CreationTimeT = Aws::Utils::DateTime>
  void SetCreationTime(CreationTimeT&& value) {
    m_creationTimeHasBeenSet = true;
    m_creationTime = std::forward<CreationTimeT>(value);
  }
  template <typename CreationTimeT = Aws::Utils::DateTime>
  ChannelInfo& WithCreationTime(CreationTimeT&& value) {
    SetCreationTime(std::forward<CreationTimeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The type of destination configured for the channel.</p>
   */
  inline ChannelDestinationType GetDestinationType() const { return m_destinationType; }
  inline bool DestinationTypeHasBeenSet() const { return m_destinationTypeHasBeenSet; }
  inline void SetDestinationType(ChannelDestinationType value) {
    m_destinationTypeHasBeenSet = true;
    m_destinationType = value;
  }
  inline ChannelInfo& WithDestinationType(ChannelDestinationType value) {
    SetDestinationType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the in-flight cluster operation. Returned
   * only while the channel is in CREATING, UPDATING, or DELETING.</p>
   */
  inline const Aws::String& GetClusterOperationArn() const { return m_clusterOperationArn; }
  inline bool ClusterOperationArnHasBeenSet() const { return m_clusterOperationArnHasBeenSet; }
  template <typename ClusterOperationArnT = Aws::String>
  void SetClusterOperationArn(ClusterOperationArnT&& value) {
    m_clusterOperationArnHasBeenSet = true;
    m_clusterOperationArn = std::forward<ClusterOperationArnT>(value);
  }
  template <typename ClusterOperationArnT = Aws::String>
  ChannelInfo& WithClusterOperationArn(ClusterOperationArnT&& value) {
    SetClusterOperationArn(std::forward<ClusterOperationArnT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_channelArn;

  Aws::String m_channelName;

  ChannelStatus m_status{ChannelStatus::NOT_SET};

  Aws::Utils::DateTime m_creationTime{};

  ChannelDestinationType m_destinationType{ChannelDestinationType::NOT_SET};

  Aws::String m_clusterOperationArn;
  bool m_channelArnHasBeenSet = false;
  bool m_channelNameHasBeenSet = false;
  bool m_statusHasBeenSet = false;
  bool m_creationTimeHasBeenSet = false;
  bool m_destinationTypeHasBeenSet = false;
  bool m_clusterOperationArnHasBeenSet = false;
};

}  // namespace Model
}  // namespace Kafka
}  // namespace Aws
