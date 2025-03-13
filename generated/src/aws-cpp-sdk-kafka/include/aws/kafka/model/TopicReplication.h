/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kafka/Kafka_EXPORTS.h>
#include <aws/kafka/model/ReplicationStartingPosition.h>
#include <aws/kafka/model/ReplicationTopicNameConfiguration.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace Kafka
{
namespace Model
{

  /**
   * <p>Details about topic replication.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/kafka-2018-11-14/TopicReplication">AWS
   * API Reference</a></p>
   */
  class TopicReplication
  {
  public:
    AWS_KAFKA_API TopicReplication() = default;
    AWS_KAFKA_API TopicReplication(Aws::Utils::Json::JsonView jsonValue);
    AWS_KAFKA_API TopicReplication& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_KAFKA_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Whether to periodically configure remote topic ACLs to match their
     * corresponding upstream topics.</p>
     */
    inline bool GetCopyAccessControlListsForTopics() const { return m_copyAccessControlListsForTopics; }
    inline bool CopyAccessControlListsForTopicsHasBeenSet() const { return m_copyAccessControlListsForTopicsHasBeenSet; }
    inline void SetCopyAccessControlListsForTopics(bool value) { m_copyAccessControlListsForTopicsHasBeenSet = true; m_copyAccessControlListsForTopics = value; }
    inline TopicReplication& WithCopyAccessControlListsForTopics(bool value) { SetCopyAccessControlListsForTopics(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Whether to periodically configure remote topics to match their corresponding
     * upstream topics.</p>
     */
    inline bool GetCopyTopicConfigurations() const { return m_copyTopicConfigurations; }
    inline bool CopyTopicConfigurationsHasBeenSet() const { return m_copyTopicConfigurationsHasBeenSet; }
    inline void SetCopyTopicConfigurations(bool value) { m_copyTopicConfigurationsHasBeenSet = true; m_copyTopicConfigurations = value; }
    inline TopicReplication& WithCopyTopicConfigurations(bool value) { SetCopyTopicConfigurations(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Whether to periodically check for new topics and partitions.</p>
     */
    inline bool GetDetectAndCopyNewTopics() const { return m_detectAndCopyNewTopics; }
    inline bool DetectAndCopyNewTopicsHasBeenSet() const { return m_detectAndCopyNewTopicsHasBeenSet; }
    inline void SetDetectAndCopyNewTopics(bool value) { m_detectAndCopyNewTopicsHasBeenSet = true; m_detectAndCopyNewTopics = value; }
    inline TopicReplication& WithDetectAndCopyNewTopics(bool value) { SetDetectAndCopyNewTopics(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Configuration for specifying the position in the topics to start replicating
     * from.</p>
     */
    inline const ReplicationStartingPosition& GetStartingPosition() const { return m_startingPosition; }
    inline bool StartingPositionHasBeenSet() const { return m_startingPositionHasBeenSet; }
    template<typename StartingPositionT = ReplicationStartingPosition>
    void SetStartingPosition(StartingPositionT&& value) { m_startingPositionHasBeenSet = true; m_startingPosition = std::forward<StartingPositionT>(value); }
    template<typename StartingPositionT = ReplicationStartingPosition>
    TopicReplication& WithStartingPosition(StartingPositionT&& value) { SetStartingPosition(std::forward<StartingPositionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Configuration for specifying replicated topic names should be the same as
     * their corresponding upstream topics or prefixed with source cluster alias.</p>
     */
    inline const ReplicationTopicNameConfiguration& GetTopicNameConfiguration() const { return m_topicNameConfiguration; }
    inline bool TopicNameConfigurationHasBeenSet() const { return m_topicNameConfigurationHasBeenSet; }
    template<typename TopicNameConfigurationT = ReplicationTopicNameConfiguration>
    void SetTopicNameConfiguration(TopicNameConfigurationT&& value) { m_topicNameConfigurationHasBeenSet = true; m_topicNameConfiguration = std::forward<TopicNameConfigurationT>(value); }
    template<typename TopicNameConfigurationT = ReplicationTopicNameConfiguration>
    TopicReplication& WithTopicNameConfiguration(TopicNameConfigurationT&& value) { SetTopicNameConfiguration(std::forward<TopicNameConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>List of regular expression patterns indicating the topics that should not be
     * replicated.</p>
     */
    inline const Aws::Vector<Aws::String>& GetTopicsToExclude() const { return m_topicsToExclude; }
    inline bool TopicsToExcludeHasBeenSet() const { return m_topicsToExcludeHasBeenSet; }
    template<typename TopicsToExcludeT = Aws::Vector<Aws::String>>
    void SetTopicsToExclude(TopicsToExcludeT&& value) { m_topicsToExcludeHasBeenSet = true; m_topicsToExclude = std::forward<TopicsToExcludeT>(value); }
    template<typename TopicsToExcludeT = Aws::Vector<Aws::String>>
    TopicReplication& WithTopicsToExclude(TopicsToExcludeT&& value) { SetTopicsToExclude(std::forward<TopicsToExcludeT>(value)); return *this;}
    template<typename TopicsToExcludeT = Aws::String>
    TopicReplication& AddTopicsToExclude(TopicsToExcludeT&& value) { m_topicsToExcludeHasBeenSet = true; m_topicsToExclude.emplace_back(std::forward<TopicsToExcludeT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>List of regular expression patterns indicating the topics to copy.</p>
     */
    inline const Aws::Vector<Aws::String>& GetTopicsToReplicate() const { return m_topicsToReplicate; }
    inline bool TopicsToReplicateHasBeenSet() const { return m_topicsToReplicateHasBeenSet; }
    template<typename TopicsToReplicateT = Aws::Vector<Aws::String>>
    void SetTopicsToReplicate(TopicsToReplicateT&& value) { m_topicsToReplicateHasBeenSet = true; m_topicsToReplicate = std::forward<TopicsToReplicateT>(value); }
    template<typename TopicsToReplicateT = Aws::Vector<Aws::String>>
    TopicReplication& WithTopicsToReplicate(TopicsToReplicateT&& value) { SetTopicsToReplicate(std::forward<TopicsToReplicateT>(value)); return *this;}
    template<typename TopicsToReplicateT = Aws::String>
    TopicReplication& AddTopicsToReplicate(TopicsToReplicateT&& value) { m_topicsToReplicateHasBeenSet = true; m_topicsToReplicate.emplace_back(std::forward<TopicsToReplicateT>(value)); return *this; }
    ///@}
  private:

    bool m_copyAccessControlListsForTopics{false};
    bool m_copyAccessControlListsForTopicsHasBeenSet = false;

    bool m_copyTopicConfigurations{false};
    bool m_copyTopicConfigurationsHasBeenSet = false;

    bool m_detectAndCopyNewTopics{false};
    bool m_detectAndCopyNewTopicsHasBeenSet = false;

    ReplicationStartingPosition m_startingPosition;
    bool m_startingPositionHasBeenSet = false;

    ReplicationTopicNameConfiguration m_topicNameConfiguration;
    bool m_topicNameConfigurationHasBeenSet = false;

    Aws::Vector<Aws::String> m_topicsToExclude;
    bool m_topicsToExcludeHasBeenSet = false;

    Aws::Vector<Aws::String> m_topicsToReplicate;
    bool m_topicsToReplicateHasBeenSet = false;
  };

} // namespace Model
} // namespace Kafka
} // namespace Aws
