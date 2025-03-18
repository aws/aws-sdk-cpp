/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kafka/Kafka_EXPORTS.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/kafka/model/ReplicatorState.h>
#include <aws/kafka/model/KafkaClusterSummary.h>
#include <aws/kafka/model/ReplicationInfoSummary.h>
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
   * <p>Information about a replicator.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/kafka-2018-11-14/ReplicatorSummary">AWS
   * API Reference</a></p>
   */
  class ReplicatorSummary
  {
  public:
    AWS_KAFKA_API ReplicatorSummary() = default;
    AWS_KAFKA_API ReplicatorSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_KAFKA_API ReplicatorSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_KAFKA_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The time the replicator was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const { return m_creationTime; }
    inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    void SetCreationTime(CreationTimeT&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::forward<CreationTimeT>(value); }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    ReplicatorSummary& WithCreationTime(CreationTimeT&& value) { SetCreationTime(std::forward<CreationTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current version of the replicator.</p>
     */
    inline const Aws::String& GetCurrentVersion() const { return m_currentVersion; }
    inline bool CurrentVersionHasBeenSet() const { return m_currentVersionHasBeenSet; }
    template<typename CurrentVersionT = Aws::String>
    void SetCurrentVersion(CurrentVersionT&& value) { m_currentVersionHasBeenSet = true; m_currentVersion = std::forward<CurrentVersionT>(value); }
    template<typename CurrentVersionT = Aws::String>
    ReplicatorSummary& WithCurrentVersion(CurrentVersionT&& value) { SetCurrentVersion(std::forward<CurrentVersionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Whether this resource is a replicator reference.</p>
     */
    inline bool GetIsReplicatorReference() const { return m_isReplicatorReference; }
    inline bool IsReplicatorReferenceHasBeenSet() const { return m_isReplicatorReferenceHasBeenSet; }
    inline void SetIsReplicatorReference(bool value) { m_isReplicatorReferenceHasBeenSet = true; m_isReplicatorReference = value; }
    inline ReplicatorSummary& WithIsReplicatorReference(bool value) { SetIsReplicatorReference(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Kafka Clusters used in setting up sources / targets for replication.</p>
     */
    inline const Aws::Vector<KafkaClusterSummary>& GetKafkaClustersSummary() const { return m_kafkaClustersSummary; }
    inline bool KafkaClustersSummaryHasBeenSet() const { return m_kafkaClustersSummaryHasBeenSet; }
    template<typename KafkaClustersSummaryT = Aws::Vector<KafkaClusterSummary>>
    void SetKafkaClustersSummary(KafkaClustersSummaryT&& value) { m_kafkaClustersSummaryHasBeenSet = true; m_kafkaClustersSummary = std::forward<KafkaClustersSummaryT>(value); }
    template<typename KafkaClustersSummaryT = Aws::Vector<KafkaClusterSummary>>
    ReplicatorSummary& WithKafkaClustersSummary(KafkaClustersSummaryT&& value) { SetKafkaClustersSummary(std::forward<KafkaClustersSummaryT>(value)); return *this;}
    template<typename KafkaClustersSummaryT = KafkaClusterSummary>
    ReplicatorSummary& AddKafkaClustersSummary(KafkaClustersSummaryT&& value) { m_kafkaClustersSummaryHasBeenSet = true; m_kafkaClustersSummary.emplace_back(std::forward<KafkaClustersSummaryT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of summarized information of replications between clusters.</p>
     */
    inline const Aws::Vector<ReplicationInfoSummary>& GetReplicationInfoSummaryList() const { return m_replicationInfoSummaryList; }
    inline bool ReplicationInfoSummaryListHasBeenSet() const { return m_replicationInfoSummaryListHasBeenSet; }
    template<typename ReplicationInfoSummaryListT = Aws::Vector<ReplicationInfoSummary>>
    void SetReplicationInfoSummaryList(ReplicationInfoSummaryListT&& value) { m_replicationInfoSummaryListHasBeenSet = true; m_replicationInfoSummaryList = std::forward<ReplicationInfoSummaryListT>(value); }
    template<typename ReplicationInfoSummaryListT = Aws::Vector<ReplicationInfoSummary>>
    ReplicatorSummary& WithReplicationInfoSummaryList(ReplicationInfoSummaryListT&& value) { SetReplicationInfoSummaryList(std::forward<ReplicationInfoSummaryListT>(value)); return *this;}
    template<typename ReplicationInfoSummaryListT = ReplicationInfoSummary>
    ReplicatorSummary& AddReplicationInfoSummaryList(ReplicationInfoSummaryListT&& value) { m_replicationInfoSummaryListHasBeenSet = true; m_replicationInfoSummaryList.emplace_back(std::forward<ReplicationInfoSummaryListT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the replicator.</p>
     */
    inline const Aws::String& GetReplicatorArn() const { return m_replicatorArn; }
    inline bool ReplicatorArnHasBeenSet() const { return m_replicatorArnHasBeenSet; }
    template<typename ReplicatorArnT = Aws::String>
    void SetReplicatorArn(ReplicatorArnT&& value) { m_replicatorArnHasBeenSet = true; m_replicatorArn = std::forward<ReplicatorArnT>(value); }
    template<typename ReplicatorArnT = Aws::String>
    ReplicatorSummary& WithReplicatorArn(ReplicatorArnT&& value) { SetReplicatorArn(std::forward<ReplicatorArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the replicator.</p>
     */
    inline const Aws::String& GetReplicatorName() const { return m_replicatorName; }
    inline bool ReplicatorNameHasBeenSet() const { return m_replicatorNameHasBeenSet; }
    template<typename ReplicatorNameT = Aws::String>
    void SetReplicatorName(ReplicatorNameT&& value) { m_replicatorNameHasBeenSet = true; m_replicatorName = std::forward<ReplicatorNameT>(value); }
    template<typename ReplicatorNameT = Aws::String>
    ReplicatorSummary& WithReplicatorName(ReplicatorNameT&& value) { SetReplicatorName(std::forward<ReplicatorNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the replicator resource in the region where
     * the replicator was created.</p>
     */
    inline const Aws::String& GetReplicatorResourceArn() const { return m_replicatorResourceArn; }
    inline bool ReplicatorResourceArnHasBeenSet() const { return m_replicatorResourceArnHasBeenSet; }
    template<typename ReplicatorResourceArnT = Aws::String>
    void SetReplicatorResourceArn(ReplicatorResourceArnT&& value) { m_replicatorResourceArnHasBeenSet = true; m_replicatorResourceArn = std::forward<ReplicatorResourceArnT>(value); }
    template<typename ReplicatorResourceArnT = Aws::String>
    ReplicatorSummary& WithReplicatorResourceArn(ReplicatorResourceArnT&& value) { SetReplicatorResourceArn(std::forward<ReplicatorResourceArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>State of the replicator.</p>
     */
    inline ReplicatorState GetReplicatorState() const { return m_replicatorState; }
    inline bool ReplicatorStateHasBeenSet() const { return m_replicatorStateHasBeenSet; }
    inline void SetReplicatorState(ReplicatorState value) { m_replicatorStateHasBeenSet = true; m_replicatorState = value; }
    inline ReplicatorSummary& WithReplicatorState(ReplicatorState value) { SetReplicatorState(value); return *this;}
    ///@}
  private:

    Aws::Utils::DateTime m_creationTime{};
    bool m_creationTimeHasBeenSet = false;

    Aws::String m_currentVersion;
    bool m_currentVersionHasBeenSet = false;

    bool m_isReplicatorReference{false};
    bool m_isReplicatorReferenceHasBeenSet = false;

    Aws::Vector<KafkaClusterSummary> m_kafkaClustersSummary;
    bool m_kafkaClustersSummaryHasBeenSet = false;

    Aws::Vector<ReplicationInfoSummary> m_replicationInfoSummaryList;
    bool m_replicationInfoSummaryListHasBeenSet = false;

    Aws::String m_replicatorArn;
    bool m_replicatorArnHasBeenSet = false;

    Aws::String m_replicatorName;
    bool m_replicatorNameHasBeenSet = false;

    Aws::String m_replicatorResourceArn;
    bool m_replicatorResourceArnHasBeenSet = false;

    ReplicatorState m_replicatorState{ReplicatorState::NOT_SET};
    bool m_replicatorStateHasBeenSet = false;
  };

} // namespace Model
} // namespace Kafka
} // namespace Aws
