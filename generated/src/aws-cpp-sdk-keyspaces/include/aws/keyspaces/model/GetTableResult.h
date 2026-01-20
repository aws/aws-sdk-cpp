/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/keyspaces/Keyspaces_EXPORTS.h>
#include <aws/keyspaces/model/CapacitySpecificationSummary.h>
#include <aws/keyspaces/model/CdcSpecificationSummary.h>
#include <aws/keyspaces/model/ClientSideTimestamps.h>
#include <aws/keyspaces/model/Comment.h>
#include <aws/keyspaces/model/EncryptionSpecification.h>
#include <aws/keyspaces/model/PointInTimeRecoverySummary.h>
#include <aws/keyspaces/model/ReplicaSpecificationSummary.h>
#include <aws/keyspaces/model/SchemaDefinition.h>
#include <aws/keyspaces/model/TableStatus.h>
#include <aws/keyspaces/model/TimeToLive.h>
#include <aws/keyspaces/model/WarmThroughputSpecificationSummary.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Json {
class JsonValue;
}  // namespace Json
}  // namespace Utils
namespace Keyspaces {
namespace Model {
class GetTableResult {
 public:
  AWS_KEYSPACES_API GetTableResult() = default;
  AWS_KEYSPACES_API GetTableResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_KEYSPACES_API GetTableResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The name of the keyspace that the specified table is stored in.</p>
   */
  inline const Aws::String& GetKeyspaceName() const { return m_keyspaceName; }
  template <typename KeyspaceNameT = Aws::String>
  void SetKeyspaceName(KeyspaceNameT&& value) {
    m_keyspaceNameHasBeenSet = true;
    m_keyspaceName = std::forward<KeyspaceNameT>(value);
  }
  template <typename KeyspaceNameT = Aws::String>
  GetTableResult& WithKeyspaceName(KeyspaceNameT&& value) {
    SetKeyspaceName(std::forward<KeyspaceNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The name of the specified table.</p>
   */
  inline const Aws::String& GetTableName() const { return m_tableName; }
  template <typename TableNameT = Aws::String>
  void SetTableName(TableNameT&& value) {
    m_tableNameHasBeenSet = true;
    m_tableName = std::forward<TableNameT>(value);
  }
  template <typename TableNameT = Aws::String>
  GetTableResult& WithTableName(TableNameT&& value) {
    SetTableName(std::forward<TableNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the specified table.</p>
   */
  inline const Aws::String& GetResourceArn() const { return m_resourceArn; }
  template <typename ResourceArnT = Aws::String>
  void SetResourceArn(ResourceArnT&& value) {
    m_resourceArnHasBeenSet = true;
    m_resourceArn = std::forward<ResourceArnT>(value);
  }
  template <typename ResourceArnT = Aws::String>
  GetTableResult& WithResourceArn(ResourceArnT&& value) {
    SetResourceArn(std::forward<ResourceArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The creation timestamp of the specified table.</p>
   */
  inline const Aws::Utils::DateTime& GetCreationTimestamp() const { return m_creationTimestamp; }
  template <typename CreationTimestampT = Aws::Utils::DateTime>
  void SetCreationTimestamp(CreationTimestampT&& value) {
    m_creationTimestampHasBeenSet = true;
    m_creationTimestamp = std::forward<CreationTimestampT>(value);
  }
  template <typename CreationTimestampT = Aws::Utils::DateTime>
  GetTableResult& WithCreationTimestamp(CreationTimestampT&& value) {
    SetCreationTimestamp(std::forward<CreationTimestampT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The current status of the specified table.</p>
   */
  inline TableStatus GetStatus() const { return m_status; }
  inline void SetStatus(TableStatus value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline GetTableResult& WithStatus(TableStatus value) {
    SetStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The schema definition of the specified table.</p>
   */
  inline const SchemaDefinition& GetSchemaDefinition() const { return m_schemaDefinition; }
  template <typename SchemaDefinitionT = SchemaDefinition>
  void SetSchemaDefinition(SchemaDefinitionT&& value) {
    m_schemaDefinitionHasBeenSet = true;
    m_schemaDefinition = std::forward<SchemaDefinitionT>(value);
  }
  template <typename SchemaDefinitionT = SchemaDefinition>
  GetTableResult& WithSchemaDefinition(SchemaDefinitionT&& value) {
    SetSchemaDefinition(std::forward<SchemaDefinitionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The read/write throughput capacity mode for a table. The options are:</p>
   * <ul> <li> <p> <code>throughputMode:PAY_PER_REQUEST</code> </p> </li> <li> <p>
   * <code>throughputMode:PROVISIONED</code> </p> </li> </ul>
   */
  inline const CapacitySpecificationSummary& GetCapacitySpecification() const { return m_capacitySpecification; }
  template <typename CapacitySpecificationT = CapacitySpecificationSummary>
  void SetCapacitySpecification(CapacitySpecificationT&& value) {
    m_capacitySpecificationHasBeenSet = true;
    m_capacitySpecification = std::forward<CapacitySpecificationT>(value);
  }
  template <typename CapacitySpecificationT = CapacitySpecificationSummary>
  GetTableResult& WithCapacitySpecification(CapacitySpecificationT&& value) {
    SetCapacitySpecification(std::forward<CapacitySpecificationT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The encryption settings of the specified table.</p>
   */
  inline const EncryptionSpecification& GetEncryptionSpecification() const { return m_encryptionSpecification; }
  template <typename EncryptionSpecificationT = EncryptionSpecification>
  void SetEncryptionSpecification(EncryptionSpecificationT&& value) {
    m_encryptionSpecificationHasBeenSet = true;
    m_encryptionSpecification = std::forward<EncryptionSpecificationT>(value);
  }
  template <typename EncryptionSpecificationT = EncryptionSpecification>
  GetTableResult& WithEncryptionSpecification(EncryptionSpecificationT&& value) {
    SetEncryptionSpecification(std::forward<EncryptionSpecificationT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The point-in-time recovery status of the specified table.</p>
   */
  inline const PointInTimeRecoverySummary& GetPointInTimeRecovery() const { return m_pointInTimeRecovery; }
  template <typename PointInTimeRecoveryT = PointInTimeRecoverySummary>
  void SetPointInTimeRecovery(PointInTimeRecoveryT&& value) {
    m_pointInTimeRecoveryHasBeenSet = true;
    m_pointInTimeRecovery = std::forward<PointInTimeRecoveryT>(value);
  }
  template <typename PointInTimeRecoveryT = PointInTimeRecoverySummary>
  GetTableResult& WithPointInTimeRecovery(PointInTimeRecoveryT&& value) {
    SetPointInTimeRecovery(std::forward<PointInTimeRecoveryT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The custom Time to Live settings of the specified table.</p>
   */
  inline const TimeToLive& GetTtl() const { return m_ttl; }
  template <typename TtlT = TimeToLive>
  void SetTtl(TtlT&& value) {
    m_ttlHasBeenSet = true;
    m_ttl = std::forward<TtlT>(value);
  }
  template <typename TtlT = TimeToLive>
  GetTableResult& WithTtl(TtlT&& value) {
    SetTtl(std::forward<TtlT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The default Time to Live settings in seconds of the specified table.</p>
   */
  inline int GetDefaultTimeToLive() const { return m_defaultTimeToLive; }
  inline void SetDefaultTimeToLive(int value) {
    m_defaultTimeToLiveHasBeenSet = true;
    m_defaultTimeToLive = value;
  }
  inline GetTableResult& WithDefaultTimeToLive(int value) {
    SetDefaultTimeToLive(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The the description of the specified table.</p>
   */
  inline const Comment& GetComment() const { return m_comment; }
  template <typename CommentT = Comment>
  void SetComment(CommentT&& value) {
    m_commentHasBeenSet = true;
    m_comment = std::forward<CommentT>(value);
  }
  template <typename CommentT = Comment>
  GetTableResult& WithComment(CommentT&& value) {
    SetComment(std::forward<CommentT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p> The client-side timestamps setting of the table.</p>
   */
  inline const ClientSideTimestamps& GetClientSideTimestamps() const { return m_clientSideTimestamps; }
  template <typename ClientSideTimestampsT = ClientSideTimestamps>
  void SetClientSideTimestamps(ClientSideTimestampsT&& value) {
    m_clientSideTimestampsHasBeenSet = true;
    m_clientSideTimestamps = std::forward<ClientSideTimestampsT>(value);
  }
  template <typename ClientSideTimestampsT = ClientSideTimestamps>
  GetTableResult& WithClientSideTimestamps(ClientSideTimestampsT&& value) {
    SetClientSideTimestamps(std::forward<ClientSideTimestampsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Returns the Amazon Web Services Region specific settings of all Regions a
   * multi-Region table is replicated in.</p>
   */
  inline const Aws::Vector<ReplicaSpecificationSummary>& GetReplicaSpecifications() const { return m_replicaSpecifications; }
  template <typename ReplicaSpecificationsT = Aws::Vector<ReplicaSpecificationSummary>>
  void SetReplicaSpecifications(ReplicaSpecificationsT&& value) {
    m_replicaSpecificationsHasBeenSet = true;
    m_replicaSpecifications = std::forward<ReplicaSpecificationsT>(value);
  }
  template <typename ReplicaSpecificationsT = Aws::Vector<ReplicaSpecificationSummary>>
  GetTableResult& WithReplicaSpecifications(ReplicaSpecificationsT&& value) {
    SetReplicaSpecifications(std::forward<ReplicaSpecificationsT>(value));
    return *this;
  }
  template <typename ReplicaSpecificationsT = ReplicaSpecificationSummary>
  GetTableResult& AddReplicaSpecifications(ReplicaSpecificationsT&& value) {
    m_replicaSpecificationsHasBeenSet = true;
    m_replicaSpecifications.emplace_back(std::forward<ReplicaSpecificationsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the stream.</p>
   */
  inline const Aws::String& GetLatestStreamArn() const { return m_latestStreamArn; }
  template <typename LatestStreamArnT = Aws::String>
  void SetLatestStreamArn(LatestStreamArnT&& value) {
    m_latestStreamArnHasBeenSet = true;
    m_latestStreamArn = std::forward<LatestStreamArnT>(value);
  }
  template <typename LatestStreamArnT = Aws::String>
  GetTableResult& WithLatestStreamArn(LatestStreamArnT&& value) {
    SetLatestStreamArn(std::forward<LatestStreamArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The CDC stream settings of the table.</p>
   */
  inline const CdcSpecificationSummary& GetCdcSpecification() const { return m_cdcSpecification; }
  template <typename CdcSpecificationT = CdcSpecificationSummary>
  void SetCdcSpecification(CdcSpecificationT&& value) {
    m_cdcSpecificationHasBeenSet = true;
    m_cdcSpecification = std::forward<CdcSpecificationT>(value);
  }
  template <typename CdcSpecificationT = CdcSpecificationSummary>
  GetTableResult& WithCdcSpecification(CdcSpecificationT&& value) {
    SetCdcSpecification(std::forward<CdcSpecificationT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The warm throughput settings for the table, including the current status and
   * configured read and write capacity units.</p>
   */
  inline const WarmThroughputSpecificationSummary& GetWarmThroughputSpecification() const { return m_warmThroughputSpecification; }
  template <typename WarmThroughputSpecificationT = WarmThroughputSpecificationSummary>
  void SetWarmThroughputSpecification(WarmThroughputSpecificationT&& value) {
    m_warmThroughputSpecificationHasBeenSet = true;
    m_warmThroughputSpecification = std::forward<WarmThroughputSpecificationT>(value);
  }
  template <typename WarmThroughputSpecificationT = WarmThroughputSpecificationSummary>
  GetTableResult& WithWarmThroughputSpecification(WarmThroughputSpecificationT&& value) {
    SetWarmThroughputSpecification(std::forward<WarmThroughputSpecificationT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const Aws::String& GetRequestId() const { return m_requestId; }
  template <typename RequestIdT = Aws::String>
  void SetRequestId(RequestIdT&& value) {
    m_requestIdHasBeenSet = true;
    m_requestId = std::forward<RequestIdT>(value);
  }
  template <typename RequestIdT = Aws::String>
  GetTableResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_keyspaceName;

  Aws::String m_tableName;

  Aws::String m_resourceArn;

  Aws::Utils::DateTime m_creationTimestamp{};

  TableStatus m_status{TableStatus::NOT_SET};

  SchemaDefinition m_schemaDefinition;

  CapacitySpecificationSummary m_capacitySpecification;

  EncryptionSpecification m_encryptionSpecification;

  PointInTimeRecoverySummary m_pointInTimeRecovery;

  TimeToLive m_ttl;

  int m_defaultTimeToLive{0};

  Comment m_comment;

  ClientSideTimestamps m_clientSideTimestamps;

  Aws::Vector<ReplicaSpecificationSummary> m_replicaSpecifications;

  Aws::String m_latestStreamArn;

  CdcSpecificationSummary m_cdcSpecification;

  WarmThroughputSpecificationSummary m_warmThroughputSpecification;

  Aws::String m_requestId;
  bool m_keyspaceNameHasBeenSet = false;
  bool m_tableNameHasBeenSet = false;
  bool m_resourceArnHasBeenSet = false;
  bool m_creationTimestampHasBeenSet = false;
  bool m_statusHasBeenSet = false;
  bool m_schemaDefinitionHasBeenSet = false;
  bool m_capacitySpecificationHasBeenSet = false;
  bool m_encryptionSpecificationHasBeenSet = false;
  bool m_pointInTimeRecoveryHasBeenSet = false;
  bool m_ttlHasBeenSet = false;
  bool m_defaultTimeToLiveHasBeenSet = false;
  bool m_commentHasBeenSet = false;
  bool m_clientSideTimestampsHasBeenSet = false;
  bool m_replicaSpecificationsHasBeenSet = false;
  bool m_latestStreamArnHasBeenSet = false;
  bool m_cdcSpecificationHasBeenSet = false;
  bool m_warmThroughputSpecificationHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace Keyspaces
}  // namespace Aws
