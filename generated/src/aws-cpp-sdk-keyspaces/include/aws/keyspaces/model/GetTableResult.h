/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/keyspaces/Keyspaces_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/keyspaces/model/TableStatus.h>
#include <aws/keyspaces/model/SchemaDefinition.h>
#include <aws/keyspaces/model/CapacitySpecificationSummary.h>
#include <aws/keyspaces/model/EncryptionSpecification.h>
#include <aws/keyspaces/model/PointInTimeRecoverySummary.h>
#include <aws/keyspaces/model/TimeToLive.h>
#include <aws/keyspaces/model/Comment.h>
#include <aws/keyspaces/model/ClientSideTimestamps.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/keyspaces/model/ReplicaSpecificationSummary.h>
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
namespace Keyspaces
{
namespace Model
{
  class GetTableResult
  {
  public:
    AWS_KEYSPACES_API GetTableResult();
    AWS_KEYSPACES_API GetTableResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_KEYSPACES_API GetTableResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The name of the keyspace that the specified table is stored in.</p>
     */
    inline const Aws::String& GetKeyspaceName() const{ return m_keyspaceName; }

    /**
     * <p>The name of the keyspace that the specified table is stored in.</p>
     */
    inline void SetKeyspaceName(const Aws::String& value) { m_keyspaceName = value; }

    /**
     * <p>The name of the keyspace that the specified table is stored in.</p>
     */
    inline void SetKeyspaceName(Aws::String&& value) { m_keyspaceName = std::move(value); }

    /**
     * <p>The name of the keyspace that the specified table is stored in.</p>
     */
    inline void SetKeyspaceName(const char* value) { m_keyspaceName.assign(value); }

    /**
     * <p>The name of the keyspace that the specified table is stored in.</p>
     */
    inline GetTableResult& WithKeyspaceName(const Aws::String& value) { SetKeyspaceName(value); return *this;}

    /**
     * <p>The name of the keyspace that the specified table is stored in.</p>
     */
    inline GetTableResult& WithKeyspaceName(Aws::String&& value) { SetKeyspaceName(std::move(value)); return *this;}

    /**
     * <p>The name of the keyspace that the specified table is stored in.</p>
     */
    inline GetTableResult& WithKeyspaceName(const char* value) { SetKeyspaceName(value); return *this;}


    /**
     * <p>The name of the specified table.</p>
     */
    inline const Aws::String& GetTableName() const{ return m_tableName; }

    /**
     * <p>The name of the specified table.</p>
     */
    inline void SetTableName(const Aws::String& value) { m_tableName = value; }

    /**
     * <p>The name of the specified table.</p>
     */
    inline void SetTableName(Aws::String&& value) { m_tableName = std::move(value); }

    /**
     * <p>The name of the specified table.</p>
     */
    inline void SetTableName(const char* value) { m_tableName.assign(value); }

    /**
     * <p>The name of the specified table.</p>
     */
    inline GetTableResult& WithTableName(const Aws::String& value) { SetTableName(value); return *this;}

    /**
     * <p>The name of the specified table.</p>
     */
    inline GetTableResult& WithTableName(Aws::String&& value) { SetTableName(std::move(value)); return *this;}

    /**
     * <p>The name of the specified table.</p>
     */
    inline GetTableResult& WithTableName(const char* value) { SetTableName(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the specified table.</p>
     */
    inline const Aws::String& GetResourceArn() const{ return m_resourceArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the specified table.</p>
     */
    inline void SetResourceArn(const Aws::String& value) { m_resourceArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the specified table.</p>
     */
    inline void SetResourceArn(Aws::String&& value) { m_resourceArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the specified table.</p>
     */
    inline void SetResourceArn(const char* value) { m_resourceArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the specified table.</p>
     */
    inline GetTableResult& WithResourceArn(const Aws::String& value) { SetResourceArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the specified table.</p>
     */
    inline GetTableResult& WithResourceArn(Aws::String&& value) { SetResourceArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the specified table.</p>
     */
    inline GetTableResult& WithResourceArn(const char* value) { SetResourceArn(value); return *this;}


    /**
     * <p>The creation timestamp of the specified table.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTimestamp() const{ return m_creationTimestamp; }

    /**
     * <p>The creation timestamp of the specified table.</p>
     */
    inline void SetCreationTimestamp(const Aws::Utils::DateTime& value) { m_creationTimestamp = value; }

    /**
     * <p>The creation timestamp of the specified table.</p>
     */
    inline void SetCreationTimestamp(Aws::Utils::DateTime&& value) { m_creationTimestamp = std::move(value); }

    /**
     * <p>The creation timestamp of the specified table.</p>
     */
    inline GetTableResult& WithCreationTimestamp(const Aws::Utils::DateTime& value) { SetCreationTimestamp(value); return *this;}

    /**
     * <p>The creation timestamp of the specified table.</p>
     */
    inline GetTableResult& WithCreationTimestamp(Aws::Utils::DateTime&& value) { SetCreationTimestamp(std::move(value)); return *this;}


    /**
     * <p>The current status of the specified table.</p>
     */
    inline const TableStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The current status of the specified table.</p>
     */
    inline void SetStatus(const TableStatus& value) { m_status = value; }

    /**
     * <p>The current status of the specified table.</p>
     */
    inline void SetStatus(TableStatus&& value) { m_status = std::move(value); }

    /**
     * <p>The current status of the specified table.</p>
     */
    inline GetTableResult& WithStatus(const TableStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The current status of the specified table.</p>
     */
    inline GetTableResult& WithStatus(TableStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>The schema definition of the specified table.</p>
     */
    inline const SchemaDefinition& GetSchemaDefinition() const{ return m_schemaDefinition; }

    /**
     * <p>The schema definition of the specified table.</p>
     */
    inline void SetSchemaDefinition(const SchemaDefinition& value) { m_schemaDefinition = value; }

    /**
     * <p>The schema definition of the specified table.</p>
     */
    inline void SetSchemaDefinition(SchemaDefinition&& value) { m_schemaDefinition = std::move(value); }

    /**
     * <p>The schema definition of the specified table.</p>
     */
    inline GetTableResult& WithSchemaDefinition(const SchemaDefinition& value) { SetSchemaDefinition(value); return *this;}

    /**
     * <p>The schema definition of the specified table.</p>
     */
    inline GetTableResult& WithSchemaDefinition(SchemaDefinition&& value) { SetSchemaDefinition(std::move(value)); return *this;}


    /**
     * <p>The read/write throughput capacity mode for a table. The options are:</p>
     * <ul> <li> <p> <code>throughputMode:PAY_PER_REQUEST</code> </p> </li> <li> <p>
     * <code>throughputMode:PROVISIONED</code> </p> </li> </ul>
     */
    inline const CapacitySpecificationSummary& GetCapacitySpecification() const{ return m_capacitySpecification; }

    /**
     * <p>The read/write throughput capacity mode for a table. The options are:</p>
     * <ul> <li> <p> <code>throughputMode:PAY_PER_REQUEST</code> </p> </li> <li> <p>
     * <code>throughputMode:PROVISIONED</code> </p> </li> </ul>
     */
    inline void SetCapacitySpecification(const CapacitySpecificationSummary& value) { m_capacitySpecification = value; }

    /**
     * <p>The read/write throughput capacity mode for a table. The options are:</p>
     * <ul> <li> <p> <code>throughputMode:PAY_PER_REQUEST</code> </p> </li> <li> <p>
     * <code>throughputMode:PROVISIONED</code> </p> </li> </ul>
     */
    inline void SetCapacitySpecification(CapacitySpecificationSummary&& value) { m_capacitySpecification = std::move(value); }

    /**
     * <p>The read/write throughput capacity mode for a table. The options are:</p>
     * <ul> <li> <p> <code>throughputMode:PAY_PER_REQUEST</code> </p> </li> <li> <p>
     * <code>throughputMode:PROVISIONED</code> </p> </li> </ul>
     */
    inline GetTableResult& WithCapacitySpecification(const CapacitySpecificationSummary& value) { SetCapacitySpecification(value); return *this;}

    /**
     * <p>The read/write throughput capacity mode for a table. The options are:</p>
     * <ul> <li> <p> <code>throughputMode:PAY_PER_REQUEST</code> </p> </li> <li> <p>
     * <code>throughputMode:PROVISIONED</code> </p> </li> </ul>
     */
    inline GetTableResult& WithCapacitySpecification(CapacitySpecificationSummary&& value) { SetCapacitySpecification(std::move(value)); return *this;}


    /**
     * <p>The encryption settings of the specified table.</p>
     */
    inline const EncryptionSpecification& GetEncryptionSpecification() const{ return m_encryptionSpecification; }

    /**
     * <p>The encryption settings of the specified table.</p>
     */
    inline void SetEncryptionSpecification(const EncryptionSpecification& value) { m_encryptionSpecification = value; }

    /**
     * <p>The encryption settings of the specified table.</p>
     */
    inline void SetEncryptionSpecification(EncryptionSpecification&& value) { m_encryptionSpecification = std::move(value); }

    /**
     * <p>The encryption settings of the specified table.</p>
     */
    inline GetTableResult& WithEncryptionSpecification(const EncryptionSpecification& value) { SetEncryptionSpecification(value); return *this;}

    /**
     * <p>The encryption settings of the specified table.</p>
     */
    inline GetTableResult& WithEncryptionSpecification(EncryptionSpecification&& value) { SetEncryptionSpecification(std::move(value)); return *this;}


    /**
     * <p>The point-in-time recovery status of the specified table.</p>
     */
    inline const PointInTimeRecoverySummary& GetPointInTimeRecovery() const{ return m_pointInTimeRecovery; }

    /**
     * <p>The point-in-time recovery status of the specified table.</p>
     */
    inline void SetPointInTimeRecovery(const PointInTimeRecoverySummary& value) { m_pointInTimeRecovery = value; }

    /**
     * <p>The point-in-time recovery status of the specified table.</p>
     */
    inline void SetPointInTimeRecovery(PointInTimeRecoverySummary&& value) { m_pointInTimeRecovery = std::move(value); }

    /**
     * <p>The point-in-time recovery status of the specified table.</p>
     */
    inline GetTableResult& WithPointInTimeRecovery(const PointInTimeRecoverySummary& value) { SetPointInTimeRecovery(value); return *this;}

    /**
     * <p>The point-in-time recovery status of the specified table.</p>
     */
    inline GetTableResult& WithPointInTimeRecovery(PointInTimeRecoverySummary&& value) { SetPointInTimeRecovery(std::move(value)); return *this;}


    /**
     * <p>The custom Time to Live settings of the specified table.</p>
     */
    inline const TimeToLive& GetTtl() const{ return m_ttl; }

    /**
     * <p>The custom Time to Live settings of the specified table.</p>
     */
    inline void SetTtl(const TimeToLive& value) { m_ttl = value; }

    /**
     * <p>The custom Time to Live settings of the specified table.</p>
     */
    inline void SetTtl(TimeToLive&& value) { m_ttl = std::move(value); }

    /**
     * <p>The custom Time to Live settings of the specified table.</p>
     */
    inline GetTableResult& WithTtl(const TimeToLive& value) { SetTtl(value); return *this;}

    /**
     * <p>The custom Time to Live settings of the specified table.</p>
     */
    inline GetTableResult& WithTtl(TimeToLive&& value) { SetTtl(std::move(value)); return *this;}


    /**
     * <p>The default Time to Live settings in seconds of the specified table.</p>
     */
    inline int GetDefaultTimeToLive() const{ return m_defaultTimeToLive; }

    /**
     * <p>The default Time to Live settings in seconds of the specified table.</p>
     */
    inline void SetDefaultTimeToLive(int value) { m_defaultTimeToLive = value; }

    /**
     * <p>The default Time to Live settings in seconds of the specified table.</p>
     */
    inline GetTableResult& WithDefaultTimeToLive(int value) { SetDefaultTimeToLive(value); return *this;}


    /**
     * <p>The the description of the specified table.</p>
     */
    inline const Comment& GetComment() const{ return m_comment; }

    /**
     * <p>The the description of the specified table.</p>
     */
    inline void SetComment(const Comment& value) { m_comment = value; }

    /**
     * <p>The the description of the specified table.</p>
     */
    inline void SetComment(Comment&& value) { m_comment = std::move(value); }

    /**
     * <p>The the description of the specified table.</p>
     */
    inline GetTableResult& WithComment(const Comment& value) { SetComment(value); return *this;}

    /**
     * <p>The the description of the specified table.</p>
     */
    inline GetTableResult& WithComment(Comment&& value) { SetComment(std::move(value)); return *this;}


    /**
     * <p> The client-side timestamps setting of the table.</p>
     */
    inline const ClientSideTimestamps& GetClientSideTimestamps() const{ return m_clientSideTimestamps; }

    /**
     * <p> The client-side timestamps setting of the table.</p>
     */
    inline void SetClientSideTimestamps(const ClientSideTimestamps& value) { m_clientSideTimestamps = value; }

    /**
     * <p> The client-side timestamps setting of the table.</p>
     */
    inline void SetClientSideTimestamps(ClientSideTimestamps&& value) { m_clientSideTimestamps = std::move(value); }

    /**
     * <p> The client-side timestamps setting of the table.</p>
     */
    inline GetTableResult& WithClientSideTimestamps(const ClientSideTimestamps& value) { SetClientSideTimestamps(value); return *this;}

    /**
     * <p> The client-side timestamps setting of the table.</p>
     */
    inline GetTableResult& WithClientSideTimestamps(ClientSideTimestamps&& value) { SetClientSideTimestamps(std::move(value)); return *this;}


    /**
     * <p>Returns the Amazon Web Services Region specific settings of all Regions a
     * multi-Region table is replicated in.</p>
     */
    inline const Aws::Vector<ReplicaSpecificationSummary>& GetReplicaSpecifications() const{ return m_replicaSpecifications; }

    /**
     * <p>Returns the Amazon Web Services Region specific settings of all Regions a
     * multi-Region table is replicated in.</p>
     */
    inline void SetReplicaSpecifications(const Aws::Vector<ReplicaSpecificationSummary>& value) { m_replicaSpecifications = value; }

    /**
     * <p>Returns the Amazon Web Services Region specific settings of all Regions a
     * multi-Region table is replicated in.</p>
     */
    inline void SetReplicaSpecifications(Aws::Vector<ReplicaSpecificationSummary>&& value) { m_replicaSpecifications = std::move(value); }

    /**
     * <p>Returns the Amazon Web Services Region specific settings of all Regions a
     * multi-Region table is replicated in.</p>
     */
    inline GetTableResult& WithReplicaSpecifications(const Aws::Vector<ReplicaSpecificationSummary>& value) { SetReplicaSpecifications(value); return *this;}

    /**
     * <p>Returns the Amazon Web Services Region specific settings of all Regions a
     * multi-Region table is replicated in.</p>
     */
    inline GetTableResult& WithReplicaSpecifications(Aws::Vector<ReplicaSpecificationSummary>&& value) { SetReplicaSpecifications(std::move(value)); return *this;}

    /**
     * <p>Returns the Amazon Web Services Region specific settings of all Regions a
     * multi-Region table is replicated in.</p>
     */
    inline GetTableResult& AddReplicaSpecifications(const ReplicaSpecificationSummary& value) { m_replicaSpecifications.push_back(value); return *this; }

    /**
     * <p>Returns the Amazon Web Services Region specific settings of all Regions a
     * multi-Region table is replicated in.</p>
     */
    inline GetTableResult& AddReplicaSpecifications(ReplicaSpecificationSummary&& value) { m_replicaSpecifications.push_back(std::move(value)); return *this; }


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline GetTableResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline GetTableResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline GetTableResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_keyspaceName;

    Aws::String m_tableName;

    Aws::String m_resourceArn;

    Aws::Utils::DateTime m_creationTimestamp;

    TableStatus m_status;

    SchemaDefinition m_schemaDefinition;

    CapacitySpecificationSummary m_capacitySpecification;

    EncryptionSpecification m_encryptionSpecification;

    PointInTimeRecoverySummary m_pointInTimeRecovery;

    TimeToLive m_ttl;

    int m_defaultTimeToLive;

    Comment m_comment;

    ClientSideTimestamps m_clientSideTimestamps;

    Aws::Vector<ReplicaSpecificationSummary> m_replicaSpecifications;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Keyspaces
} // namespace Aws
