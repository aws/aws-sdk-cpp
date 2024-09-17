/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kafka/Kafka_EXPORTS.h>
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
   * <p>Details for updating the topic replication of a replicator.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/kafka-2018-11-14/TopicReplicationUpdate">AWS
   * API Reference</a></p>
   */
  class TopicReplicationUpdate
  {
  public:
    AWS_KAFKA_API TopicReplicationUpdate();
    AWS_KAFKA_API TopicReplicationUpdate(Aws::Utils::Json::JsonView jsonValue);
    AWS_KAFKA_API TopicReplicationUpdate& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_KAFKA_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Whether to periodically configure remote topic ACLs to match their
     * corresponding upstream topics.</p>
     */
    inline bool GetCopyAccessControlListsForTopics() const{ return m_copyAccessControlListsForTopics; }
    inline bool CopyAccessControlListsForTopicsHasBeenSet() const { return m_copyAccessControlListsForTopicsHasBeenSet; }
    inline void SetCopyAccessControlListsForTopics(bool value) { m_copyAccessControlListsForTopicsHasBeenSet = true; m_copyAccessControlListsForTopics = value; }
    inline TopicReplicationUpdate& WithCopyAccessControlListsForTopics(bool value) { SetCopyAccessControlListsForTopics(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Whether to periodically configure remote topics to match their corresponding
     * upstream topics.</p>
     */
    inline bool GetCopyTopicConfigurations() const{ return m_copyTopicConfigurations; }
    inline bool CopyTopicConfigurationsHasBeenSet() const { return m_copyTopicConfigurationsHasBeenSet; }
    inline void SetCopyTopicConfigurations(bool value) { m_copyTopicConfigurationsHasBeenSet = true; m_copyTopicConfigurations = value; }
    inline TopicReplicationUpdate& WithCopyTopicConfigurations(bool value) { SetCopyTopicConfigurations(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Whether to periodically check for new topics and partitions.</p>
     */
    inline bool GetDetectAndCopyNewTopics() const{ return m_detectAndCopyNewTopics; }
    inline bool DetectAndCopyNewTopicsHasBeenSet() const { return m_detectAndCopyNewTopicsHasBeenSet; }
    inline void SetDetectAndCopyNewTopics(bool value) { m_detectAndCopyNewTopicsHasBeenSet = true; m_detectAndCopyNewTopics = value; }
    inline TopicReplicationUpdate& WithDetectAndCopyNewTopics(bool value) { SetDetectAndCopyNewTopics(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>List of regular expression patterns indicating the topics that should not be
     * replicated.</p>
     */
    inline const Aws::Vector<Aws::String>& GetTopicsToExclude() const{ return m_topicsToExclude; }
    inline bool TopicsToExcludeHasBeenSet() const { return m_topicsToExcludeHasBeenSet; }
    inline void SetTopicsToExclude(const Aws::Vector<Aws::String>& value) { m_topicsToExcludeHasBeenSet = true; m_topicsToExclude = value; }
    inline void SetTopicsToExclude(Aws::Vector<Aws::String>&& value) { m_topicsToExcludeHasBeenSet = true; m_topicsToExclude = std::move(value); }
    inline TopicReplicationUpdate& WithTopicsToExclude(const Aws::Vector<Aws::String>& value) { SetTopicsToExclude(value); return *this;}
    inline TopicReplicationUpdate& WithTopicsToExclude(Aws::Vector<Aws::String>&& value) { SetTopicsToExclude(std::move(value)); return *this;}
    inline TopicReplicationUpdate& AddTopicsToExclude(const Aws::String& value) { m_topicsToExcludeHasBeenSet = true; m_topicsToExclude.push_back(value); return *this; }
    inline TopicReplicationUpdate& AddTopicsToExclude(Aws::String&& value) { m_topicsToExcludeHasBeenSet = true; m_topicsToExclude.push_back(std::move(value)); return *this; }
    inline TopicReplicationUpdate& AddTopicsToExclude(const char* value) { m_topicsToExcludeHasBeenSet = true; m_topicsToExclude.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>List of regular expression patterns indicating the topics to copy.</p>
     */
    inline const Aws::Vector<Aws::String>& GetTopicsToReplicate() const{ return m_topicsToReplicate; }
    inline bool TopicsToReplicateHasBeenSet() const { return m_topicsToReplicateHasBeenSet; }
    inline void SetTopicsToReplicate(const Aws::Vector<Aws::String>& value) { m_topicsToReplicateHasBeenSet = true; m_topicsToReplicate = value; }
    inline void SetTopicsToReplicate(Aws::Vector<Aws::String>&& value) { m_topicsToReplicateHasBeenSet = true; m_topicsToReplicate = std::move(value); }
    inline TopicReplicationUpdate& WithTopicsToReplicate(const Aws::Vector<Aws::String>& value) { SetTopicsToReplicate(value); return *this;}
    inline TopicReplicationUpdate& WithTopicsToReplicate(Aws::Vector<Aws::String>&& value) { SetTopicsToReplicate(std::move(value)); return *this;}
    inline TopicReplicationUpdate& AddTopicsToReplicate(const Aws::String& value) { m_topicsToReplicateHasBeenSet = true; m_topicsToReplicate.push_back(value); return *this; }
    inline TopicReplicationUpdate& AddTopicsToReplicate(Aws::String&& value) { m_topicsToReplicateHasBeenSet = true; m_topicsToReplicate.push_back(std::move(value)); return *this; }
    inline TopicReplicationUpdate& AddTopicsToReplicate(const char* value) { m_topicsToReplicateHasBeenSet = true; m_topicsToReplicate.push_back(value); return *this; }
    ///@}
  private:

    bool m_copyAccessControlListsForTopics;
    bool m_copyAccessControlListsForTopicsHasBeenSet = false;

    bool m_copyTopicConfigurations;
    bool m_copyTopicConfigurationsHasBeenSet = false;

    bool m_detectAndCopyNewTopics;
    bool m_detectAndCopyNewTopicsHasBeenSet = false;

    Aws::Vector<Aws::String> m_topicsToExclude;
    bool m_topicsToExcludeHasBeenSet = false;

    Aws::Vector<Aws::String> m_topicsToReplicate;
    bool m_topicsToReplicateHasBeenSet = false;
  };

} // namespace Model
} // namespace Kafka
} // namespace Aws
