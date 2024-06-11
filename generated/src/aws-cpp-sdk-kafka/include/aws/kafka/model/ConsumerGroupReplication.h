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
   * <p>Details about consumer group replication.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/kafka-2018-11-14/ConsumerGroupReplication">AWS
   * API Reference</a></p>
   */
  class ConsumerGroupReplication
  {
  public:
    AWS_KAFKA_API ConsumerGroupReplication();
    AWS_KAFKA_API ConsumerGroupReplication(Aws::Utils::Json::JsonView jsonValue);
    AWS_KAFKA_API ConsumerGroupReplication& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_KAFKA_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>List of regular expression patterns indicating the consumer groups that
     * should not be replicated.</p>
     */
    inline const Aws::Vector<Aws::String>& GetConsumerGroupsToExclude() const{ return m_consumerGroupsToExclude; }
    inline bool ConsumerGroupsToExcludeHasBeenSet() const { return m_consumerGroupsToExcludeHasBeenSet; }
    inline void SetConsumerGroupsToExclude(const Aws::Vector<Aws::String>& value) { m_consumerGroupsToExcludeHasBeenSet = true; m_consumerGroupsToExclude = value; }
    inline void SetConsumerGroupsToExclude(Aws::Vector<Aws::String>&& value) { m_consumerGroupsToExcludeHasBeenSet = true; m_consumerGroupsToExclude = std::move(value); }
    inline ConsumerGroupReplication& WithConsumerGroupsToExclude(const Aws::Vector<Aws::String>& value) { SetConsumerGroupsToExclude(value); return *this;}
    inline ConsumerGroupReplication& WithConsumerGroupsToExclude(Aws::Vector<Aws::String>&& value) { SetConsumerGroupsToExclude(std::move(value)); return *this;}
    inline ConsumerGroupReplication& AddConsumerGroupsToExclude(const Aws::String& value) { m_consumerGroupsToExcludeHasBeenSet = true; m_consumerGroupsToExclude.push_back(value); return *this; }
    inline ConsumerGroupReplication& AddConsumerGroupsToExclude(Aws::String&& value) { m_consumerGroupsToExcludeHasBeenSet = true; m_consumerGroupsToExclude.push_back(std::move(value)); return *this; }
    inline ConsumerGroupReplication& AddConsumerGroupsToExclude(const char* value) { m_consumerGroupsToExcludeHasBeenSet = true; m_consumerGroupsToExclude.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>List of regular expression patterns indicating the consumer groups to
     * copy.</p>
     */
    inline const Aws::Vector<Aws::String>& GetConsumerGroupsToReplicate() const{ return m_consumerGroupsToReplicate; }
    inline bool ConsumerGroupsToReplicateHasBeenSet() const { return m_consumerGroupsToReplicateHasBeenSet; }
    inline void SetConsumerGroupsToReplicate(const Aws::Vector<Aws::String>& value) { m_consumerGroupsToReplicateHasBeenSet = true; m_consumerGroupsToReplicate = value; }
    inline void SetConsumerGroupsToReplicate(Aws::Vector<Aws::String>&& value) { m_consumerGroupsToReplicateHasBeenSet = true; m_consumerGroupsToReplicate = std::move(value); }
    inline ConsumerGroupReplication& WithConsumerGroupsToReplicate(const Aws::Vector<Aws::String>& value) { SetConsumerGroupsToReplicate(value); return *this;}
    inline ConsumerGroupReplication& WithConsumerGroupsToReplicate(Aws::Vector<Aws::String>&& value) { SetConsumerGroupsToReplicate(std::move(value)); return *this;}
    inline ConsumerGroupReplication& AddConsumerGroupsToReplicate(const Aws::String& value) { m_consumerGroupsToReplicateHasBeenSet = true; m_consumerGroupsToReplicate.push_back(value); return *this; }
    inline ConsumerGroupReplication& AddConsumerGroupsToReplicate(Aws::String&& value) { m_consumerGroupsToReplicateHasBeenSet = true; m_consumerGroupsToReplicate.push_back(std::move(value)); return *this; }
    inline ConsumerGroupReplication& AddConsumerGroupsToReplicate(const char* value) { m_consumerGroupsToReplicateHasBeenSet = true; m_consumerGroupsToReplicate.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>Enables synchronization of consumer groups to target cluster.</p>
     */
    inline bool GetDetectAndCopyNewConsumerGroups() const{ return m_detectAndCopyNewConsumerGroups; }
    inline bool DetectAndCopyNewConsumerGroupsHasBeenSet() const { return m_detectAndCopyNewConsumerGroupsHasBeenSet; }
    inline void SetDetectAndCopyNewConsumerGroups(bool value) { m_detectAndCopyNewConsumerGroupsHasBeenSet = true; m_detectAndCopyNewConsumerGroups = value; }
    inline ConsumerGroupReplication& WithDetectAndCopyNewConsumerGroups(bool value) { SetDetectAndCopyNewConsumerGroups(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Enables synchronization of consumer group offsets to target cluster. The
     * translated offsets will be written to topic __consumer_offsets.</p>
     */
    inline bool GetSynchroniseConsumerGroupOffsets() const{ return m_synchroniseConsumerGroupOffsets; }
    inline bool SynchroniseConsumerGroupOffsetsHasBeenSet() const { return m_synchroniseConsumerGroupOffsetsHasBeenSet; }
    inline void SetSynchroniseConsumerGroupOffsets(bool value) { m_synchroniseConsumerGroupOffsetsHasBeenSet = true; m_synchroniseConsumerGroupOffsets = value; }
    inline ConsumerGroupReplication& WithSynchroniseConsumerGroupOffsets(bool value) { SetSynchroniseConsumerGroupOffsets(value); return *this;}
    ///@}
  private:

    Aws::Vector<Aws::String> m_consumerGroupsToExclude;
    bool m_consumerGroupsToExcludeHasBeenSet = false;

    Aws::Vector<Aws::String> m_consumerGroupsToReplicate;
    bool m_consumerGroupsToReplicateHasBeenSet = false;

    bool m_detectAndCopyNewConsumerGroups;
    bool m_detectAndCopyNewConsumerGroupsHasBeenSet = false;

    bool m_synchroniseConsumerGroupOffsets;
    bool m_synchroniseConsumerGroupOffsetsHasBeenSet = false;
  };

} // namespace Model
} // namespace Kafka
} // namespace Aws
