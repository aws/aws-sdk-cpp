/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elasticache/ElastiCache_EXPORTS.h>
#include <aws/elasticache/ElastiCacheRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/elasticache/model/CustomerNodeEndpoint.h>
#include <utility>

namespace Aws
{
namespace ElastiCache
{
namespace Model
{

  /**
   */
  class TestMigrationRequest : public ElastiCacheRequest
  {
  public:
    AWS_ELASTICACHE_API TestMigrationRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "TestMigration"; }

    AWS_ELASTICACHE_API Aws::String SerializePayload() const override;

  protected:
    AWS_ELASTICACHE_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    ///@{
    /**
     * <p> The ID of the replication group to which data is to be migrated. </p>
     */
    inline const Aws::String& GetReplicationGroupId() const { return m_replicationGroupId; }
    inline bool ReplicationGroupIdHasBeenSet() const { return m_replicationGroupIdHasBeenSet; }
    template<typename ReplicationGroupIdT = Aws::String>
    void SetReplicationGroupId(ReplicationGroupIdT&& value) { m_replicationGroupIdHasBeenSet = true; m_replicationGroupId = std::forward<ReplicationGroupIdT>(value); }
    template<typename ReplicationGroupIdT = Aws::String>
    TestMigrationRequest& WithReplicationGroupId(ReplicationGroupIdT&& value) { SetReplicationGroupId(std::forward<ReplicationGroupIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> List of endpoints from which data should be migrated. List should have only
     * one element. </p>
     */
    inline const Aws::Vector<CustomerNodeEndpoint>& GetCustomerNodeEndpointList() const { return m_customerNodeEndpointList; }
    inline bool CustomerNodeEndpointListHasBeenSet() const { return m_customerNodeEndpointListHasBeenSet; }
    template<typename CustomerNodeEndpointListT = Aws::Vector<CustomerNodeEndpoint>>
    void SetCustomerNodeEndpointList(CustomerNodeEndpointListT&& value) { m_customerNodeEndpointListHasBeenSet = true; m_customerNodeEndpointList = std::forward<CustomerNodeEndpointListT>(value); }
    template<typename CustomerNodeEndpointListT = Aws::Vector<CustomerNodeEndpoint>>
    TestMigrationRequest& WithCustomerNodeEndpointList(CustomerNodeEndpointListT&& value) { SetCustomerNodeEndpointList(std::forward<CustomerNodeEndpointListT>(value)); return *this;}
    template<typename CustomerNodeEndpointListT = CustomerNodeEndpoint>
    TestMigrationRequest& AddCustomerNodeEndpointList(CustomerNodeEndpointListT&& value) { m_customerNodeEndpointListHasBeenSet = true; m_customerNodeEndpointList.emplace_back(std::forward<CustomerNodeEndpointListT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_replicationGroupId;
    bool m_replicationGroupIdHasBeenSet = false;

    Aws::Vector<CustomerNodeEndpoint> m_customerNodeEndpointList;
    bool m_customerNodeEndpointListHasBeenSet = false;
  };

} // namespace Model
} // namespace ElastiCache
} // namespace Aws
