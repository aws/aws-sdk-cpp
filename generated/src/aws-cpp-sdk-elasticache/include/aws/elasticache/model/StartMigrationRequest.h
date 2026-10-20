/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/elasticache/ElastiCacheRequest.h>
#include <aws/elasticache/ElastiCache_EXPORTS.h>
#include <aws/elasticache/model/CustomerNodeEndpoint.h>

#include <utility>

namespace Aws {
namespace ElastiCache {
namespace Model {

/**
 */
class StartMigrationRequest : public ElastiCacheRequest {
 public:
  AWS_ELASTICACHE_API StartMigrationRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "StartMigration"; }

  AWS_ELASTICACHE_API Aws::String SerializePayload() const override;

 protected:
  AWS_ELASTICACHE_API void DumpBodyToUrl(Aws::Http::URI& uri) const override;

 public:
  ///@{
  /**
   * <p>The name of the serverless cache to which data is being migrated.</p>
   */
  inline const Aws::String& GetServerlessCacheName() const { return m_serverlessCacheName; }
  inline bool ServerlessCacheNameHasBeenSet() const { return m_serverlessCacheNameHasBeenSet; }
  template <typename ServerlessCacheNameT = Aws::String>
  void SetServerlessCacheName(ServerlessCacheNameT&& value) {
    m_serverlessCacheNameHasBeenSet = true;
    m_serverlessCacheName = std::forward<ServerlessCacheNameT>(value);
  }
  template <typename ServerlessCacheNameT = Aws::String>
  StartMigrationRequest& WithServerlessCacheName(ServerlessCacheNameT&& value) {
    SetServerlessCacheName(std::forward<ServerlessCacheNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ID of the replication group to which data should be migrated.</p>
   */
  inline const Aws::String& GetReplicationGroupId() const { return m_replicationGroupId; }
  inline bool ReplicationGroupIdHasBeenSet() const { return m_replicationGroupIdHasBeenSet; }
  template <typename ReplicationGroupIdT = Aws::String>
  void SetReplicationGroupId(ReplicationGroupIdT&& value) {
    m_replicationGroupIdHasBeenSet = true;
    m_replicationGroupId = std::forward<ReplicationGroupIdT>(value);
  }
  template <typename ReplicationGroupIdT = Aws::String>
  StartMigrationRequest& WithReplicationGroupId(ReplicationGroupIdT&& value) {
    SetReplicationGroupId(std::forward<ReplicationGroupIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The list of endpoints from which to migrate data. For Valkey or Redis OSS
   * (cluster mode disabled), the list should have only one element. For serverless
   * cache migrations, ElastiCache uses the endpoint that you provided in
   * <code>PrepareMigration</code>.</p>
   */
  inline const Aws::Vector<CustomerNodeEndpoint>& GetCustomerNodeEndpointList() const { return m_customerNodeEndpointList; }
  inline bool CustomerNodeEndpointListHasBeenSet() const { return m_customerNodeEndpointListHasBeenSet; }
  template <typename CustomerNodeEndpointListT = Aws::Vector<CustomerNodeEndpoint>>
  void SetCustomerNodeEndpointList(CustomerNodeEndpointListT&& value) {
    m_customerNodeEndpointListHasBeenSet = true;
    m_customerNodeEndpointList = std::forward<CustomerNodeEndpointListT>(value);
  }
  template <typename CustomerNodeEndpointListT = Aws::Vector<CustomerNodeEndpoint>>
  StartMigrationRequest& WithCustomerNodeEndpointList(CustomerNodeEndpointListT&& value) {
    SetCustomerNodeEndpointList(std::forward<CustomerNodeEndpointListT>(value));
    return *this;
  }
  template <typename CustomerNodeEndpointListT = CustomerNodeEndpoint>
  StartMigrationRequest& AddCustomerNodeEndpointList(CustomerNodeEndpointListT&& value) {
    m_customerNodeEndpointListHasBeenSet = true;
    m_customerNodeEndpointList.emplace_back(std::forward<CustomerNodeEndpointListT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Specifies whether ElastiCache automatically attempts to complete the
   * migration after data sync is established.</p>
   */
  inline bool GetAutoCutover() const { return m_autoCutover; }
  inline bool AutoCutoverHasBeenSet() const { return m_autoCutoverHasBeenSet; }
  inline void SetAutoCutover(bool value) {
    m_autoCutoverHasBeenSet = true;
    m_autoCutover = value;
  }
  inline StartMigrationRequest& WithAutoCutover(bool value) {
    SetAutoCutover(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Specifies whether ElastiCache deletes existing data in the serverless cache
   * before migration begins. After <code>StopMigration</code>,
   * <code>StartMigration</code> requires this option to restart the data sync.</p>
   */
  inline bool GetClearTargetCacheData() const { return m_clearTargetCacheData; }
  inline bool ClearTargetCacheDataHasBeenSet() const { return m_clearTargetCacheDataHasBeenSet; }
  inline void SetClearTargetCacheData(bool value) {
    m_clearTargetCacheDataHasBeenSet = true;
    m_clearTargetCacheData = value;
  }
  inline StartMigrationRequest& WithClearTargetCacheData(bool value) {
    SetClearTargetCacheData(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_serverlessCacheName;

  Aws::String m_replicationGroupId;

  Aws::Vector<CustomerNodeEndpoint> m_customerNodeEndpointList;

  bool m_autoCutover{false};

  bool m_clearTargetCacheData{false};
  bool m_serverlessCacheNameHasBeenSet = false;
  bool m_replicationGroupIdHasBeenSet = false;
  bool m_customerNodeEndpointListHasBeenSet = false;
  bool m_autoCutoverHasBeenSet = false;
  bool m_clearTargetCacheDataHasBeenSet = false;
};

}  // namespace Model
}  // namespace ElastiCache
}  // namespace Aws
