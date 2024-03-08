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
#include <aws/kafka/model/ReplicationStateInfo.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/kafka/model/KafkaClusterDescription.h>
#include <aws/kafka/model/ReplicationInfoDescription.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace Kafka
{
namespace Model
{
  class DescribeReplicatorResult
  {
  public:
    AWS_KAFKA_API DescribeReplicatorResult();
    AWS_KAFKA_API DescribeReplicatorResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_KAFKA_API DescribeReplicatorResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The time when the replicator was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }

    /**
     * <p>The time when the replicator was created.</p>
     */
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTime = value; }

    /**
     * <p>The time when the replicator was created.</p>
     */
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTime = std::move(value); }

    /**
     * <p>The time when the replicator was created.</p>
     */
    inline DescribeReplicatorResult& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}

    /**
     * <p>The time when the replicator was created.</p>
     */
    inline DescribeReplicatorResult& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}


    /**
     * <p>The current version number of the replicator.</p>
     */
    inline const Aws::String& GetCurrentVersion() const{ return m_currentVersion; }

    /**
     * <p>The current version number of the replicator.</p>
     */
    inline void SetCurrentVersion(const Aws::String& value) { m_currentVersion = value; }

    /**
     * <p>The current version number of the replicator.</p>
     */
    inline void SetCurrentVersion(Aws::String&& value) { m_currentVersion = std::move(value); }

    /**
     * <p>The current version number of the replicator.</p>
     */
    inline void SetCurrentVersion(const char* value) { m_currentVersion.assign(value); }

    /**
     * <p>The current version number of the replicator.</p>
     */
    inline DescribeReplicatorResult& WithCurrentVersion(const Aws::String& value) { SetCurrentVersion(value); return *this;}

    /**
     * <p>The current version number of the replicator.</p>
     */
    inline DescribeReplicatorResult& WithCurrentVersion(Aws::String&& value) { SetCurrentVersion(std::move(value)); return *this;}

    /**
     * <p>The current version number of the replicator.</p>
     */
    inline DescribeReplicatorResult& WithCurrentVersion(const char* value) { SetCurrentVersion(value); return *this;}


    /**
     * <p>Whether this resource is a replicator reference.</p>
     */
    inline bool GetIsReplicatorReference() const{ return m_isReplicatorReference; }

    /**
     * <p>Whether this resource is a replicator reference.</p>
     */
    inline void SetIsReplicatorReference(bool value) { m_isReplicatorReference = value; }

    /**
     * <p>Whether this resource is a replicator reference.</p>
     */
    inline DescribeReplicatorResult& WithIsReplicatorReference(bool value) { SetIsReplicatorReference(value); return *this;}


    /**
     * <p>Kafka Clusters used in setting up sources / targets for replication.</p>
     */
    inline const Aws::Vector<KafkaClusterDescription>& GetKafkaClusters() const{ return m_kafkaClusters; }

    /**
     * <p>Kafka Clusters used in setting up sources / targets for replication.</p>
     */
    inline void SetKafkaClusters(const Aws::Vector<KafkaClusterDescription>& value) { m_kafkaClusters = value; }

    /**
     * <p>Kafka Clusters used in setting up sources / targets for replication.</p>
     */
    inline void SetKafkaClusters(Aws::Vector<KafkaClusterDescription>&& value) { m_kafkaClusters = std::move(value); }

    /**
     * <p>Kafka Clusters used in setting up sources / targets for replication.</p>
     */
    inline DescribeReplicatorResult& WithKafkaClusters(const Aws::Vector<KafkaClusterDescription>& value) { SetKafkaClusters(value); return *this;}

    /**
     * <p>Kafka Clusters used in setting up sources / targets for replication.</p>
     */
    inline DescribeReplicatorResult& WithKafkaClusters(Aws::Vector<KafkaClusterDescription>&& value) { SetKafkaClusters(std::move(value)); return *this;}

    /**
     * <p>Kafka Clusters used in setting up sources / targets for replication.</p>
     */
    inline DescribeReplicatorResult& AddKafkaClusters(const KafkaClusterDescription& value) { m_kafkaClusters.push_back(value); return *this; }

    /**
     * <p>Kafka Clusters used in setting up sources / targets for replication.</p>
     */
    inline DescribeReplicatorResult& AddKafkaClusters(KafkaClusterDescription&& value) { m_kafkaClusters.push_back(std::move(value)); return *this; }


    /**
     * <p>A list of replication configurations, where each configuration targets a
     * given source cluster to target cluster replication flow.</p>
     */
    inline const Aws::Vector<ReplicationInfoDescription>& GetReplicationInfoList() const{ return m_replicationInfoList; }

    /**
     * <p>A list of replication configurations, where each configuration targets a
     * given source cluster to target cluster replication flow.</p>
     */
    inline void SetReplicationInfoList(const Aws::Vector<ReplicationInfoDescription>& value) { m_replicationInfoList = value; }

    /**
     * <p>A list of replication configurations, where each configuration targets a
     * given source cluster to target cluster replication flow.</p>
     */
    inline void SetReplicationInfoList(Aws::Vector<ReplicationInfoDescription>&& value) { m_replicationInfoList = std::move(value); }

    /**
     * <p>A list of replication configurations, where each configuration targets a
     * given source cluster to target cluster replication flow.</p>
     */
    inline DescribeReplicatorResult& WithReplicationInfoList(const Aws::Vector<ReplicationInfoDescription>& value) { SetReplicationInfoList(value); return *this;}

    /**
     * <p>A list of replication configurations, where each configuration targets a
     * given source cluster to target cluster replication flow.</p>
     */
    inline DescribeReplicatorResult& WithReplicationInfoList(Aws::Vector<ReplicationInfoDescription>&& value) { SetReplicationInfoList(std::move(value)); return *this;}

    /**
     * <p>A list of replication configurations, where each configuration targets a
     * given source cluster to target cluster replication flow.</p>
     */
    inline DescribeReplicatorResult& AddReplicationInfoList(const ReplicationInfoDescription& value) { m_replicationInfoList.push_back(value); return *this; }

    /**
     * <p>A list of replication configurations, where each configuration targets a
     * given source cluster to target cluster replication flow.</p>
     */
    inline DescribeReplicatorResult& AddReplicationInfoList(ReplicationInfoDescription&& value) { m_replicationInfoList.push_back(std::move(value)); return *this; }


    /**
     * <p>The Amazon Resource Name (ARN) of the replicator.</p>
     */
    inline const Aws::String& GetReplicatorArn() const{ return m_replicatorArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the replicator.</p>
     */
    inline void SetReplicatorArn(const Aws::String& value) { m_replicatorArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the replicator.</p>
     */
    inline void SetReplicatorArn(Aws::String&& value) { m_replicatorArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the replicator.</p>
     */
    inline void SetReplicatorArn(const char* value) { m_replicatorArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the replicator.</p>
     */
    inline DescribeReplicatorResult& WithReplicatorArn(const Aws::String& value) { SetReplicatorArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the replicator.</p>
     */
    inline DescribeReplicatorResult& WithReplicatorArn(Aws::String&& value) { SetReplicatorArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the replicator.</p>
     */
    inline DescribeReplicatorResult& WithReplicatorArn(const char* value) { SetReplicatorArn(value); return *this;}


    /**
     * <p>The description of the replicator.</p>
     */
    inline const Aws::String& GetReplicatorDescription() const{ return m_replicatorDescription; }

    /**
     * <p>The description of the replicator.</p>
     */
    inline void SetReplicatorDescription(const Aws::String& value) { m_replicatorDescription = value; }

    /**
     * <p>The description of the replicator.</p>
     */
    inline void SetReplicatorDescription(Aws::String&& value) { m_replicatorDescription = std::move(value); }

    /**
     * <p>The description of the replicator.</p>
     */
    inline void SetReplicatorDescription(const char* value) { m_replicatorDescription.assign(value); }

    /**
     * <p>The description of the replicator.</p>
     */
    inline DescribeReplicatorResult& WithReplicatorDescription(const Aws::String& value) { SetReplicatorDescription(value); return *this;}

    /**
     * <p>The description of the replicator.</p>
     */
    inline DescribeReplicatorResult& WithReplicatorDescription(Aws::String&& value) { SetReplicatorDescription(std::move(value)); return *this;}

    /**
     * <p>The description of the replicator.</p>
     */
    inline DescribeReplicatorResult& WithReplicatorDescription(const char* value) { SetReplicatorDescription(value); return *this;}


    /**
     * <p>The name of the replicator.</p>
     */
    inline const Aws::String& GetReplicatorName() const{ return m_replicatorName; }

    /**
     * <p>The name of the replicator.</p>
     */
    inline void SetReplicatorName(const Aws::String& value) { m_replicatorName = value; }

    /**
     * <p>The name of the replicator.</p>
     */
    inline void SetReplicatorName(Aws::String&& value) { m_replicatorName = std::move(value); }

    /**
     * <p>The name of the replicator.</p>
     */
    inline void SetReplicatorName(const char* value) { m_replicatorName.assign(value); }

    /**
     * <p>The name of the replicator.</p>
     */
    inline DescribeReplicatorResult& WithReplicatorName(const Aws::String& value) { SetReplicatorName(value); return *this;}

    /**
     * <p>The name of the replicator.</p>
     */
    inline DescribeReplicatorResult& WithReplicatorName(Aws::String&& value) { SetReplicatorName(std::move(value)); return *this;}

    /**
     * <p>The name of the replicator.</p>
     */
    inline DescribeReplicatorResult& WithReplicatorName(const char* value) { SetReplicatorName(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the replicator resource in the region where
     * the replicator was created.</p>
     */
    inline const Aws::String& GetReplicatorResourceArn() const{ return m_replicatorResourceArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the replicator resource in the region where
     * the replicator was created.</p>
     */
    inline void SetReplicatorResourceArn(const Aws::String& value) { m_replicatorResourceArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the replicator resource in the region where
     * the replicator was created.</p>
     */
    inline void SetReplicatorResourceArn(Aws::String&& value) { m_replicatorResourceArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the replicator resource in the region where
     * the replicator was created.</p>
     */
    inline void SetReplicatorResourceArn(const char* value) { m_replicatorResourceArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the replicator resource in the region where
     * the replicator was created.</p>
     */
    inline DescribeReplicatorResult& WithReplicatorResourceArn(const Aws::String& value) { SetReplicatorResourceArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the replicator resource in the region where
     * the replicator was created.</p>
     */
    inline DescribeReplicatorResult& WithReplicatorResourceArn(Aws::String&& value) { SetReplicatorResourceArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the replicator resource in the region where
     * the replicator was created.</p>
     */
    inline DescribeReplicatorResult& WithReplicatorResourceArn(const char* value) { SetReplicatorResourceArn(value); return *this;}


    /**
     * <p>State of the replicator.</p>
     */
    inline const ReplicatorState& GetReplicatorState() const{ return m_replicatorState; }

    /**
     * <p>State of the replicator.</p>
     */
    inline void SetReplicatorState(const ReplicatorState& value) { m_replicatorState = value; }

    /**
     * <p>State of the replicator.</p>
     */
    inline void SetReplicatorState(ReplicatorState&& value) { m_replicatorState = std::move(value); }

    /**
     * <p>State of the replicator.</p>
     */
    inline DescribeReplicatorResult& WithReplicatorState(const ReplicatorState& value) { SetReplicatorState(value); return *this;}

    /**
     * <p>State of the replicator.</p>
     */
    inline DescribeReplicatorResult& WithReplicatorState(ReplicatorState&& value) { SetReplicatorState(std::move(value)); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role used by the replicator to
     * access resources in the customer's account (e.g source and target clusters)</p>
     */
    inline const Aws::String& GetServiceExecutionRoleArn() const{ return m_serviceExecutionRoleArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role used by the replicator to
     * access resources in the customer's account (e.g source and target clusters)</p>
     */
    inline void SetServiceExecutionRoleArn(const Aws::String& value) { m_serviceExecutionRoleArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role used by the replicator to
     * access resources in the customer's account (e.g source and target clusters)</p>
     */
    inline void SetServiceExecutionRoleArn(Aws::String&& value) { m_serviceExecutionRoleArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role used by the replicator to
     * access resources in the customer's account (e.g source and target clusters)</p>
     */
    inline void SetServiceExecutionRoleArn(const char* value) { m_serviceExecutionRoleArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role used by the replicator to
     * access resources in the customer's account (e.g source and target clusters)</p>
     */
    inline DescribeReplicatorResult& WithServiceExecutionRoleArn(const Aws::String& value) { SetServiceExecutionRoleArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role used by the replicator to
     * access resources in the customer's account (e.g source and target clusters)</p>
     */
    inline DescribeReplicatorResult& WithServiceExecutionRoleArn(Aws::String&& value) { SetServiceExecutionRoleArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role used by the replicator to
     * access resources in the customer's account (e.g source and target clusters)</p>
     */
    inline DescribeReplicatorResult& WithServiceExecutionRoleArn(const char* value) { SetServiceExecutionRoleArn(value); return *this;}


    /**
     * <p>Details about the state of the replicator.</p>
     */
    inline const ReplicationStateInfo& GetStateInfo() const{ return m_stateInfo; }

    /**
     * <p>Details about the state of the replicator.</p>
     */
    inline void SetStateInfo(const ReplicationStateInfo& value) { m_stateInfo = value; }

    /**
     * <p>Details about the state of the replicator.</p>
     */
    inline void SetStateInfo(ReplicationStateInfo&& value) { m_stateInfo = std::move(value); }

    /**
     * <p>Details about the state of the replicator.</p>
     */
    inline DescribeReplicatorResult& WithStateInfo(const ReplicationStateInfo& value) { SetStateInfo(value); return *this;}

    /**
     * <p>Details about the state of the replicator.</p>
     */
    inline DescribeReplicatorResult& WithStateInfo(ReplicationStateInfo&& value) { SetStateInfo(std::move(value)); return *this;}


    /**
     * <p>List of tags attached to the Replicator.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }

    /**
     * <p>List of tags attached to the Replicator.</p>
     */
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tags = value; }

    /**
     * <p>List of tags attached to the Replicator.</p>
     */
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tags = std::move(value); }

    /**
     * <p>List of tags attached to the Replicator.</p>
     */
    inline DescribeReplicatorResult& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}

    /**
     * <p>List of tags attached to the Replicator.</p>
     */
    inline DescribeReplicatorResult& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>List of tags attached to the Replicator.</p>
     */
    inline DescribeReplicatorResult& AddTags(const Aws::String& key, const Aws::String& value) { m_tags.emplace(key, value); return *this; }

    /**
     * <p>List of tags attached to the Replicator.</p>
     */
    inline DescribeReplicatorResult& AddTags(Aws::String&& key, const Aws::String& value) { m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>List of tags attached to the Replicator.</p>
     */
    inline DescribeReplicatorResult& AddTags(const Aws::String& key, Aws::String&& value) { m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>List of tags attached to the Replicator.</p>
     */
    inline DescribeReplicatorResult& AddTags(Aws::String&& key, Aws::String&& value) { m_tags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>List of tags attached to the Replicator.</p>
     */
    inline DescribeReplicatorResult& AddTags(const char* key, Aws::String&& value) { m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>List of tags attached to the Replicator.</p>
     */
    inline DescribeReplicatorResult& AddTags(Aws::String&& key, const char* value) { m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>List of tags attached to the Replicator.</p>
     */
    inline DescribeReplicatorResult& AddTags(const char* key, const char* value) { m_tags.emplace(key, value); return *this; }


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline DescribeReplicatorResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline DescribeReplicatorResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline DescribeReplicatorResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::Utils::DateTime m_creationTime;

    Aws::String m_currentVersion;

    bool m_isReplicatorReference;

    Aws::Vector<KafkaClusterDescription> m_kafkaClusters;

    Aws::Vector<ReplicationInfoDescription> m_replicationInfoList;

    Aws::String m_replicatorArn;

    Aws::String m_replicatorDescription;

    Aws::String m_replicatorName;

    Aws::String m_replicatorResourceArn;

    ReplicatorState m_replicatorState;

    Aws::String m_serviceExecutionRoleArn;

    ReplicationStateInfo m_stateInfo;

    Aws::Map<Aws::String, Aws::String> m_tags;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Kafka
} // namespace Aws
