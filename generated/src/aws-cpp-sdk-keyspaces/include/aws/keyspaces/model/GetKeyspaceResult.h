/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/keyspaces/Keyspaces_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/keyspaces/model/Rs.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/keyspaces/model/ReplicationGroupStatus.h>
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
  class GetKeyspaceResult
  {
  public:
    AWS_KEYSPACES_API GetKeyspaceResult() = default;
    AWS_KEYSPACES_API GetKeyspaceResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_KEYSPACES_API GetKeyspaceResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The name of the keyspace.</p>
     */
    inline const Aws::String& GetKeyspaceName() const { return m_keyspaceName; }
    template<typename KeyspaceNameT = Aws::String>
    void SetKeyspaceName(KeyspaceNameT&& value) { m_keyspaceNameHasBeenSet = true; m_keyspaceName = std::forward<KeyspaceNameT>(value); }
    template<typename KeyspaceNameT = Aws::String>
    GetKeyspaceResult& WithKeyspaceName(KeyspaceNameT&& value) { SetKeyspaceName(std::forward<KeyspaceNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Returns the ARN of the keyspace.</p>
     */
    inline const Aws::String& GetResourceArn() const { return m_resourceArn; }
    template<typename ResourceArnT = Aws::String>
    void SetResourceArn(ResourceArnT&& value) { m_resourceArnHasBeenSet = true; m_resourceArn = std::forward<ResourceArnT>(value); }
    template<typename ResourceArnT = Aws::String>
    GetKeyspaceResult& WithResourceArn(ResourceArnT&& value) { SetResourceArn(std::forward<ResourceArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> Returns the replication strategy of the keyspace. The options are
     * <code>SINGLE_REGION</code> or <code>MULTI_REGION</code>. </p>
     */
    inline Rs GetReplicationStrategy() const { return m_replicationStrategy; }
    inline void SetReplicationStrategy(Rs value) { m_replicationStrategyHasBeenSet = true; m_replicationStrategy = value; }
    inline GetKeyspaceResult& WithReplicationStrategy(Rs value) { SetReplicationStrategy(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> If the <code>replicationStrategy</code> of the keyspace is
     * <code>MULTI_REGION</code>, a list of replication Regions is returned. </p>
     */
    inline const Aws::Vector<Aws::String>& GetReplicationRegions() const { return m_replicationRegions; }
    template<typename ReplicationRegionsT = Aws::Vector<Aws::String>>
    void SetReplicationRegions(ReplicationRegionsT&& value) { m_replicationRegionsHasBeenSet = true; m_replicationRegions = std::forward<ReplicationRegionsT>(value); }
    template<typename ReplicationRegionsT = Aws::Vector<Aws::String>>
    GetKeyspaceResult& WithReplicationRegions(ReplicationRegionsT&& value) { SetReplicationRegions(std::forward<ReplicationRegionsT>(value)); return *this;}
    template<typename ReplicationRegionsT = Aws::String>
    GetKeyspaceResult& AddReplicationRegions(ReplicationRegionsT&& value) { m_replicationRegionsHasBeenSet = true; m_replicationRegions.emplace_back(std::forward<ReplicationRegionsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> A list of all Regions the keyspace is replicated in after the update
     * keyspace operation and their status. </p>
     */
    inline const Aws::Vector<ReplicationGroupStatus>& GetReplicationGroupStatuses() const { return m_replicationGroupStatuses; }
    template<typename ReplicationGroupStatusesT = Aws::Vector<ReplicationGroupStatus>>
    void SetReplicationGroupStatuses(ReplicationGroupStatusesT&& value) { m_replicationGroupStatusesHasBeenSet = true; m_replicationGroupStatuses = std::forward<ReplicationGroupStatusesT>(value); }
    template<typename ReplicationGroupStatusesT = Aws::Vector<ReplicationGroupStatus>>
    GetKeyspaceResult& WithReplicationGroupStatuses(ReplicationGroupStatusesT&& value) { SetReplicationGroupStatuses(std::forward<ReplicationGroupStatusesT>(value)); return *this;}
    template<typename ReplicationGroupStatusesT = ReplicationGroupStatus>
    GetKeyspaceResult& AddReplicationGroupStatuses(ReplicationGroupStatusesT&& value) { m_replicationGroupStatusesHasBeenSet = true; m_replicationGroupStatuses.emplace_back(std::forward<ReplicationGroupStatusesT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetKeyspaceResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_keyspaceName;
    bool m_keyspaceNameHasBeenSet = false;

    Aws::String m_resourceArn;
    bool m_resourceArnHasBeenSet = false;

    Rs m_replicationStrategy{Rs::NOT_SET};
    bool m_replicationStrategyHasBeenSet = false;

    Aws::Vector<Aws::String> m_replicationRegions;
    bool m_replicationRegionsHasBeenSet = false;

    Aws::Vector<ReplicationGroupStatus> m_replicationGroupStatuses;
    bool m_replicationGroupStatusesHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Keyspaces
} // namespace Aws
