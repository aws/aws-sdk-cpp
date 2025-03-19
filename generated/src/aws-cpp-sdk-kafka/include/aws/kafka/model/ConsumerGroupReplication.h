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
    AWS_KAFKA_API ConsumerGroupReplication() = default;
    AWS_KAFKA_API ConsumerGroupReplication(Aws::Utils::Json::JsonView jsonValue);
    AWS_KAFKA_API ConsumerGroupReplication& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_KAFKA_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>List of regular expression patterns indicating the consumer groups that
     * should not be replicated.</p>
     */
    inline const Aws::Vector<Aws::String>& GetConsumerGroupsToExclude() const { return m_consumerGroupsToExclude; }
    inline bool ConsumerGroupsToExcludeHasBeenSet() const { return m_consumerGroupsToExcludeHasBeenSet; }
    template<typename ConsumerGroupsToExcludeT = Aws::Vector<Aws::String>>
    void SetConsumerGroupsToExclude(ConsumerGroupsToExcludeT&& value) { m_consumerGroupsToExcludeHasBeenSet = true; m_consumerGroupsToExclude = std::forward<ConsumerGroupsToExcludeT>(value); }
    template<typename ConsumerGroupsToExcludeT = Aws::Vector<Aws::String>>
    ConsumerGroupReplication& WithConsumerGroupsToExclude(ConsumerGroupsToExcludeT&& value) { SetConsumerGroupsToExclude(std::forward<ConsumerGroupsToExcludeT>(value)); return *this;}
    template<typename ConsumerGroupsToExcludeT = Aws::String>
    ConsumerGroupReplication& AddConsumerGroupsToExclude(ConsumerGroupsToExcludeT&& value) { m_consumerGroupsToExcludeHasBeenSet = true; m_consumerGroupsToExclude.emplace_back(std::forward<ConsumerGroupsToExcludeT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>List of regular expression patterns indicating the consumer groups to
     * copy.</p>
     */
    inline const Aws::Vector<Aws::String>& GetConsumerGroupsToReplicate() const { return m_consumerGroupsToReplicate; }
    inline bool ConsumerGroupsToReplicateHasBeenSet() const { return m_consumerGroupsToReplicateHasBeenSet; }
    template<typename ConsumerGroupsToReplicateT = Aws::Vector<Aws::String>>
    void SetConsumerGroupsToReplicate(ConsumerGroupsToReplicateT&& value) { m_consumerGroupsToReplicateHasBeenSet = true; m_consumerGroupsToReplicate = std::forward<ConsumerGroupsToReplicateT>(value); }
    template<typename ConsumerGroupsToReplicateT = Aws::Vector<Aws::String>>
    ConsumerGroupReplication& WithConsumerGroupsToReplicate(ConsumerGroupsToReplicateT&& value) { SetConsumerGroupsToReplicate(std::forward<ConsumerGroupsToReplicateT>(value)); return *this;}
    template<typename ConsumerGroupsToReplicateT = Aws::String>
    ConsumerGroupReplication& AddConsumerGroupsToReplicate(ConsumerGroupsToReplicateT&& value) { m_consumerGroupsToReplicateHasBeenSet = true; m_consumerGroupsToReplicate.emplace_back(std::forward<ConsumerGroupsToReplicateT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Enables synchronization of consumer groups to target cluster.</p>
     */
    inline bool GetDetectAndCopyNewConsumerGroups() const { return m_detectAndCopyNewConsumerGroups; }
    inline bool DetectAndCopyNewConsumerGroupsHasBeenSet() const { return m_detectAndCopyNewConsumerGroupsHasBeenSet; }
    inline void SetDetectAndCopyNewConsumerGroups(bool value) { m_detectAndCopyNewConsumerGroupsHasBeenSet = true; m_detectAndCopyNewConsumerGroups = value; }
    inline ConsumerGroupReplication& WithDetectAndCopyNewConsumerGroups(bool value) { SetDetectAndCopyNewConsumerGroups(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Enables synchronization of consumer group offsets to target cluster. The
     * translated offsets will be written to topic __consumer_offsets.</p>
     */
    inline bool GetSynchroniseConsumerGroupOffsets() const { return m_synchroniseConsumerGroupOffsets; }
    inline bool SynchroniseConsumerGroupOffsetsHasBeenSet() const { return m_synchroniseConsumerGroupOffsetsHasBeenSet; }
    inline void SetSynchroniseConsumerGroupOffsets(bool value) { m_synchroniseConsumerGroupOffsetsHasBeenSet = true; m_synchroniseConsumerGroupOffsets = value; }
    inline ConsumerGroupReplication& WithSynchroniseConsumerGroupOffsets(bool value) { SetSynchroniseConsumerGroupOffsets(value); return *this;}
    ///@}
  private:

    Aws::Vector<Aws::String> m_consumerGroupsToExclude;
    bool m_consumerGroupsToExcludeHasBeenSet = false;

    Aws::Vector<Aws::String> m_consumerGroupsToReplicate;
    bool m_consumerGroupsToReplicateHasBeenSet = false;

    bool m_detectAndCopyNewConsumerGroups{false};
    bool m_detectAndCopyNewConsumerGroupsHasBeenSet = false;

    bool m_synchroniseConsumerGroupOffsets{false};
    bool m_synchroniseConsumerGroupOffsetsHasBeenSet = false;
  };

} // namespace Model
} // namespace Kafka
} // namespace Aws
