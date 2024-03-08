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
   * <p>Details about topic replication.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/kafka-2018-11-14/TopicReplication">AWS
   * API Reference</a></p>
   */
  class TopicReplication
  {
  public:
    AWS_KAFKA_API TopicReplication();
    AWS_KAFKA_API TopicReplication(Aws::Utils::Json::JsonView jsonValue);
    AWS_KAFKA_API TopicReplication& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_KAFKA_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Whether to periodically configure remote topic ACLs to match their
     * corresponding upstream topics.</p>
     */
    inline bool GetCopyAccessControlListsForTopics() const{ return m_copyAccessControlListsForTopics; }

    /**
     * <p>Whether to periodically configure remote topic ACLs to match their
     * corresponding upstream topics.</p>
     */
    inline bool CopyAccessControlListsForTopicsHasBeenSet() const { return m_copyAccessControlListsForTopicsHasBeenSet; }

    /**
     * <p>Whether to periodically configure remote topic ACLs to match their
     * corresponding upstream topics.</p>
     */
    inline void SetCopyAccessControlListsForTopics(bool value) { m_copyAccessControlListsForTopicsHasBeenSet = true; m_copyAccessControlListsForTopics = value; }

    /**
     * <p>Whether to periodically configure remote topic ACLs to match their
     * corresponding upstream topics.</p>
     */
    inline TopicReplication& WithCopyAccessControlListsForTopics(bool value) { SetCopyAccessControlListsForTopics(value); return *this;}


    /**
     * <p>Whether to periodically configure remote topics to match their corresponding
     * upstream topics.</p>
     */
    inline bool GetCopyTopicConfigurations() const{ return m_copyTopicConfigurations; }

    /**
     * <p>Whether to periodically configure remote topics to match their corresponding
     * upstream topics.</p>
     */
    inline bool CopyTopicConfigurationsHasBeenSet() const { return m_copyTopicConfigurationsHasBeenSet; }

    /**
     * <p>Whether to periodically configure remote topics to match their corresponding
     * upstream topics.</p>
     */
    inline void SetCopyTopicConfigurations(bool value) { m_copyTopicConfigurationsHasBeenSet = true; m_copyTopicConfigurations = value; }

    /**
     * <p>Whether to periodically configure remote topics to match their corresponding
     * upstream topics.</p>
     */
    inline TopicReplication& WithCopyTopicConfigurations(bool value) { SetCopyTopicConfigurations(value); return *this;}


    /**
     * <p>Whether to periodically check for new topics and partitions.</p>
     */
    inline bool GetDetectAndCopyNewTopics() const{ return m_detectAndCopyNewTopics; }

    /**
     * <p>Whether to periodically check for new topics and partitions.</p>
     */
    inline bool DetectAndCopyNewTopicsHasBeenSet() const { return m_detectAndCopyNewTopicsHasBeenSet; }

    /**
     * <p>Whether to periodically check for new topics and partitions.</p>
     */
    inline void SetDetectAndCopyNewTopics(bool value) { m_detectAndCopyNewTopicsHasBeenSet = true; m_detectAndCopyNewTopics = value; }

    /**
     * <p>Whether to periodically check for new topics and partitions.</p>
     */
    inline TopicReplication& WithDetectAndCopyNewTopics(bool value) { SetDetectAndCopyNewTopics(value); return *this;}


    /**
     * <p>List of regular expression patterns indicating the topics that should not be
     * replicated.</p>
     */
    inline const Aws::Vector<Aws::String>& GetTopicsToExclude() const{ return m_topicsToExclude; }

    /**
     * <p>List of regular expression patterns indicating the topics that should not be
     * replicated.</p>
     */
    inline bool TopicsToExcludeHasBeenSet() const { return m_topicsToExcludeHasBeenSet; }

    /**
     * <p>List of regular expression patterns indicating the topics that should not be
     * replicated.</p>
     */
    inline void SetTopicsToExclude(const Aws::Vector<Aws::String>& value) { m_topicsToExcludeHasBeenSet = true; m_topicsToExclude = value; }

    /**
     * <p>List of regular expression patterns indicating the topics that should not be
     * replicated.</p>
     */
    inline void SetTopicsToExclude(Aws::Vector<Aws::String>&& value) { m_topicsToExcludeHasBeenSet = true; m_topicsToExclude = std::move(value); }

    /**
     * <p>List of regular expression patterns indicating the topics that should not be
     * replicated.</p>
     */
    inline TopicReplication& WithTopicsToExclude(const Aws::Vector<Aws::String>& value) { SetTopicsToExclude(value); return *this;}

    /**
     * <p>List of regular expression patterns indicating the topics that should not be
     * replicated.</p>
     */
    inline TopicReplication& WithTopicsToExclude(Aws::Vector<Aws::String>&& value) { SetTopicsToExclude(std::move(value)); return *this;}

    /**
     * <p>List of regular expression patterns indicating the topics that should not be
     * replicated.</p>
     */
    inline TopicReplication& AddTopicsToExclude(const Aws::String& value) { m_topicsToExcludeHasBeenSet = true; m_topicsToExclude.push_back(value); return *this; }

    /**
     * <p>List of regular expression patterns indicating the topics that should not be
     * replicated.</p>
     */
    inline TopicReplication& AddTopicsToExclude(Aws::String&& value) { m_topicsToExcludeHasBeenSet = true; m_topicsToExclude.push_back(std::move(value)); return *this; }

    /**
     * <p>List of regular expression patterns indicating the topics that should not be
     * replicated.</p>
     */
    inline TopicReplication& AddTopicsToExclude(const char* value) { m_topicsToExcludeHasBeenSet = true; m_topicsToExclude.push_back(value); return *this; }


    /**
     * <p>List of regular expression patterns indicating the topics to copy.</p>
     */
    inline const Aws::Vector<Aws::String>& GetTopicsToReplicate() const{ return m_topicsToReplicate; }

    /**
     * <p>List of regular expression patterns indicating the topics to copy.</p>
     */
    inline bool TopicsToReplicateHasBeenSet() const { return m_topicsToReplicateHasBeenSet; }

    /**
     * <p>List of regular expression patterns indicating the topics to copy.</p>
     */
    inline void SetTopicsToReplicate(const Aws::Vector<Aws::String>& value) { m_topicsToReplicateHasBeenSet = true; m_topicsToReplicate = value; }

    /**
     * <p>List of regular expression patterns indicating the topics to copy.</p>
     */
    inline void SetTopicsToReplicate(Aws::Vector<Aws::String>&& value) { m_topicsToReplicateHasBeenSet = true; m_topicsToReplicate = std::move(value); }

    /**
     * <p>List of regular expression patterns indicating the topics to copy.</p>
     */
    inline TopicReplication& WithTopicsToReplicate(const Aws::Vector<Aws::String>& value) { SetTopicsToReplicate(value); return *this;}

    /**
     * <p>List of regular expression patterns indicating the topics to copy.</p>
     */
    inline TopicReplication& WithTopicsToReplicate(Aws::Vector<Aws::String>&& value) { SetTopicsToReplicate(std::move(value)); return *this;}

    /**
     * <p>List of regular expression patterns indicating the topics to copy.</p>
     */
    inline TopicReplication& AddTopicsToReplicate(const Aws::String& value) { m_topicsToReplicateHasBeenSet = true; m_topicsToReplicate.push_back(value); return *this; }

    /**
     * <p>List of regular expression patterns indicating the topics to copy.</p>
     */
    inline TopicReplication& AddTopicsToReplicate(Aws::String&& value) { m_topicsToReplicateHasBeenSet = true; m_topicsToReplicate.push_back(std::move(value)); return *this; }

    /**
     * <p>List of regular expression patterns indicating the topics to copy.</p>
     */
    inline TopicReplication& AddTopicsToReplicate(const char* value) { m_topicsToReplicateHasBeenSet = true; m_topicsToReplicate.push_back(value); return *this; }

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
