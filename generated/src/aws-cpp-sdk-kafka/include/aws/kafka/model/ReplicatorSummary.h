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
    AWS_KAFKA_API ReplicatorSummary();
    AWS_KAFKA_API ReplicatorSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_KAFKA_API ReplicatorSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_KAFKA_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The time the replicator was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }
    inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTimeHasBeenSet = true; m_creationTime = value; }
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::move(value); }
    inline ReplicatorSummary& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}
    inline ReplicatorSummary& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current version of the replicator.</p>
     */
    inline const Aws::String& GetCurrentVersion() const{ return m_currentVersion; }
    inline bool CurrentVersionHasBeenSet() const { return m_currentVersionHasBeenSet; }
    inline void SetCurrentVersion(const Aws::String& value) { m_currentVersionHasBeenSet = true; m_currentVersion = value; }
    inline void SetCurrentVersion(Aws::String&& value) { m_currentVersionHasBeenSet = true; m_currentVersion = std::move(value); }
    inline void SetCurrentVersion(const char* value) { m_currentVersionHasBeenSet = true; m_currentVersion.assign(value); }
    inline ReplicatorSummary& WithCurrentVersion(const Aws::String& value) { SetCurrentVersion(value); return *this;}
    inline ReplicatorSummary& WithCurrentVersion(Aws::String&& value) { SetCurrentVersion(std::move(value)); return *this;}
    inline ReplicatorSummary& WithCurrentVersion(const char* value) { SetCurrentVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Whether this resource is a replicator reference.</p>
     */
    inline bool GetIsReplicatorReference() const{ return m_isReplicatorReference; }
    inline bool IsReplicatorReferenceHasBeenSet() const { return m_isReplicatorReferenceHasBeenSet; }
    inline void SetIsReplicatorReference(bool value) { m_isReplicatorReferenceHasBeenSet = true; m_isReplicatorReference = value; }
    inline ReplicatorSummary& WithIsReplicatorReference(bool value) { SetIsReplicatorReference(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Kafka Clusters used in setting up sources / targets for replication.</p>
     */
    inline const Aws::Vector<KafkaClusterSummary>& GetKafkaClustersSummary() const{ return m_kafkaClustersSummary; }
    inline bool KafkaClustersSummaryHasBeenSet() const { return m_kafkaClustersSummaryHasBeenSet; }
    inline void SetKafkaClustersSummary(const Aws::Vector<KafkaClusterSummary>& value) { m_kafkaClustersSummaryHasBeenSet = true; m_kafkaClustersSummary = value; }
    inline void SetKafkaClustersSummary(Aws::Vector<KafkaClusterSummary>&& value) { m_kafkaClustersSummaryHasBeenSet = true; m_kafkaClustersSummary = std::move(value); }
    inline ReplicatorSummary& WithKafkaClustersSummary(const Aws::Vector<KafkaClusterSummary>& value) { SetKafkaClustersSummary(value); return *this;}
    inline ReplicatorSummary& WithKafkaClustersSummary(Aws::Vector<KafkaClusterSummary>&& value) { SetKafkaClustersSummary(std::move(value)); return *this;}
    inline ReplicatorSummary& AddKafkaClustersSummary(const KafkaClusterSummary& value) { m_kafkaClustersSummaryHasBeenSet = true; m_kafkaClustersSummary.push_back(value); return *this; }
    inline ReplicatorSummary& AddKafkaClustersSummary(KafkaClusterSummary&& value) { m_kafkaClustersSummaryHasBeenSet = true; m_kafkaClustersSummary.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of summarized information of replications between clusters.</p>
     */
    inline const Aws::Vector<ReplicationInfoSummary>& GetReplicationInfoSummaryList() const{ return m_replicationInfoSummaryList; }
    inline bool ReplicationInfoSummaryListHasBeenSet() const { return m_replicationInfoSummaryListHasBeenSet; }
    inline void SetReplicationInfoSummaryList(const Aws::Vector<ReplicationInfoSummary>& value) { m_replicationInfoSummaryListHasBeenSet = true; m_replicationInfoSummaryList = value; }
    inline void SetReplicationInfoSummaryList(Aws::Vector<ReplicationInfoSummary>&& value) { m_replicationInfoSummaryListHasBeenSet = true; m_replicationInfoSummaryList = std::move(value); }
    inline ReplicatorSummary& WithReplicationInfoSummaryList(const Aws::Vector<ReplicationInfoSummary>& value) { SetReplicationInfoSummaryList(value); return *this;}
    inline ReplicatorSummary& WithReplicationInfoSummaryList(Aws::Vector<ReplicationInfoSummary>&& value) { SetReplicationInfoSummaryList(std::move(value)); return *this;}
    inline ReplicatorSummary& AddReplicationInfoSummaryList(const ReplicationInfoSummary& value) { m_replicationInfoSummaryListHasBeenSet = true; m_replicationInfoSummaryList.push_back(value); return *this; }
    inline ReplicatorSummary& AddReplicationInfoSummaryList(ReplicationInfoSummary&& value) { m_replicationInfoSummaryListHasBeenSet = true; m_replicationInfoSummaryList.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the replicator.</p>
     */
    inline const Aws::String& GetReplicatorArn() const{ return m_replicatorArn; }
    inline bool ReplicatorArnHasBeenSet() const { return m_replicatorArnHasBeenSet; }
    inline void SetReplicatorArn(const Aws::String& value) { m_replicatorArnHasBeenSet = true; m_replicatorArn = value; }
    inline void SetReplicatorArn(Aws::String&& value) { m_replicatorArnHasBeenSet = true; m_replicatorArn = std::move(value); }
    inline void SetReplicatorArn(const char* value) { m_replicatorArnHasBeenSet = true; m_replicatorArn.assign(value); }
    inline ReplicatorSummary& WithReplicatorArn(const Aws::String& value) { SetReplicatorArn(value); return *this;}
    inline ReplicatorSummary& WithReplicatorArn(Aws::String&& value) { SetReplicatorArn(std::move(value)); return *this;}
    inline ReplicatorSummary& WithReplicatorArn(const char* value) { SetReplicatorArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the replicator.</p>
     */
    inline const Aws::String& GetReplicatorName() const{ return m_replicatorName; }
    inline bool ReplicatorNameHasBeenSet() const { return m_replicatorNameHasBeenSet; }
    inline void SetReplicatorName(const Aws::String& value) { m_replicatorNameHasBeenSet = true; m_replicatorName = value; }
    inline void SetReplicatorName(Aws::String&& value) { m_replicatorNameHasBeenSet = true; m_replicatorName = std::move(value); }
    inline void SetReplicatorName(const char* value) { m_replicatorNameHasBeenSet = true; m_replicatorName.assign(value); }
    inline ReplicatorSummary& WithReplicatorName(const Aws::String& value) { SetReplicatorName(value); return *this;}
    inline ReplicatorSummary& WithReplicatorName(Aws::String&& value) { SetReplicatorName(std::move(value)); return *this;}
    inline ReplicatorSummary& WithReplicatorName(const char* value) { SetReplicatorName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the replicator resource in the region where
     * the replicator was created.</p>
     */
    inline const Aws::String& GetReplicatorResourceArn() const{ return m_replicatorResourceArn; }
    inline bool ReplicatorResourceArnHasBeenSet() const { return m_replicatorResourceArnHasBeenSet; }
    inline void SetReplicatorResourceArn(const Aws::String& value) { m_replicatorResourceArnHasBeenSet = true; m_replicatorResourceArn = value; }
    inline void SetReplicatorResourceArn(Aws::String&& value) { m_replicatorResourceArnHasBeenSet = true; m_replicatorResourceArn = std::move(value); }
    inline void SetReplicatorResourceArn(const char* value) { m_replicatorResourceArnHasBeenSet = true; m_replicatorResourceArn.assign(value); }
    inline ReplicatorSummary& WithReplicatorResourceArn(const Aws::String& value) { SetReplicatorResourceArn(value); return *this;}
    inline ReplicatorSummary& WithReplicatorResourceArn(Aws::String&& value) { SetReplicatorResourceArn(std::move(value)); return *this;}
    inline ReplicatorSummary& WithReplicatorResourceArn(const char* value) { SetReplicatorResourceArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>State of the replicator.</p>
     */
    inline const ReplicatorState& GetReplicatorState() const{ return m_replicatorState; }
    inline bool ReplicatorStateHasBeenSet() const { return m_replicatorStateHasBeenSet; }
    inline void SetReplicatorState(const ReplicatorState& value) { m_replicatorStateHasBeenSet = true; m_replicatorState = value; }
    inline void SetReplicatorState(ReplicatorState&& value) { m_replicatorStateHasBeenSet = true; m_replicatorState = std::move(value); }
    inline ReplicatorSummary& WithReplicatorState(const ReplicatorState& value) { SetReplicatorState(value); return *this;}
    inline ReplicatorSummary& WithReplicatorState(ReplicatorState&& value) { SetReplicatorState(std::move(value)); return *this;}
    ///@}
  private:

    Aws::Utils::DateTime m_creationTime;
    bool m_creationTimeHasBeenSet = false;

    Aws::String m_currentVersion;
    bool m_currentVersionHasBeenSet = false;

    bool m_isReplicatorReference;
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

    ReplicatorState m_replicatorState;
    bool m_replicatorStateHasBeenSet = false;
  };

} // namespace Model
} // namespace Kafka
} // namespace Aws
