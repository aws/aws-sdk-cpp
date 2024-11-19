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
    AWS_KEYSPACES_API GetKeyspaceResult();
    AWS_KEYSPACES_API GetKeyspaceResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_KEYSPACES_API GetKeyspaceResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The name of the keyspace.</p>
     */
    inline const Aws::String& GetKeyspaceName() const{ return m_keyspaceName; }
    inline void SetKeyspaceName(const Aws::String& value) { m_keyspaceName = value; }
    inline void SetKeyspaceName(Aws::String&& value) { m_keyspaceName = std::move(value); }
    inline void SetKeyspaceName(const char* value) { m_keyspaceName.assign(value); }
    inline GetKeyspaceResult& WithKeyspaceName(const Aws::String& value) { SetKeyspaceName(value); return *this;}
    inline GetKeyspaceResult& WithKeyspaceName(Aws::String&& value) { SetKeyspaceName(std::move(value)); return *this;}
    inline GetKeyspaceResult& WithKeyspaceName(const char* value) { SetKeyspaceName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Returns the ARN of the keyspace.</p>
     */
    inline const Aws::String& GetResourceArn() const{ return m_resourceArn; }
    inline void SetResourceArn(const Aws::String& value) { m_resourceArn = value; }
    inline void SetResourceArn(Aws::String&& value) { m_resourceArn = std::move(value); }
    inline void SetResourceArn(const char* value) { m_resourceArn.assign(value); }
    inline GetKeyspaceResult& WithResourceArn(const Aws::String& value) { SetResourceArn(value); return *this;}
    inline GetKeyspaceResult& WithResourceArn(Aws::String&& value) { SetResourceArn(std::move(value)); return *this;}
    inline GetKeyspaceResult& WithResourceArn(const char* value) { SetResourceArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> Returns the replication strategy of the keyspace. The options are
     * <code>SINGLE_REGION</code> or <code>MULTI_REGION</code>. </p>
     */
    inline const Rs& GetReplicationStrategy() const{ return m_replicationStrategy; }
    inline void SetReplicationStrategy(const Rs& value) { m_replicationStrategy = value; }
    inline void SetReplicationStrategy(Rs&& value) { m_replicationStrategy = std::move(value); }
    inline GetKeyspaceResult& WithReplicationStrategy(const Rs& value) { SetReplicationStrategy(value); return *this;}
    inline GetKeyspaceResult& WithReplicationStrategy(Rs&& value) { SetReplicationStrategy(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> If the <code>replicationStrategy</code> of the keyspace is
     * <code>MULTI_REGION</code>, a list of replication Regions is returned. </p>
     */
    inline const Aws::Vector<Aws::String>& GetReplicationRegions() const{ return m_replicationRegions; }
    inline void SetReplicationRegions(const Aws::Vector<Aws::String>& value) { m_replicationRegions = value; }
    inline void SetReplicationRegions(Aws::Vector<Aws::String>&& value) { m_replicationRegions = std::move(value); }
    inline GetKeyspaceResult& WithReplicationRegions(const Aws::Vector<Aws::String>& value) { SetReplicationRegions(value); return *this;}
    inline GetKeyspaceResult& WithReplicationRegions(Aws::Vector<Aws::String>&& value) { SetReplicationRegions(std::move(value)); return *this;}
    inline GetKeyspaceResult& AddReplicationRegions(const Aws::String& value) { m_replicationRegions.push_back(value); return *this; }
    inline GetKeyspaceResult& AddReplicationRegions(Aws::String&& value) { m_replicationRegions.push_back(std::move(value)); return *this; }
    inline GetKeyspaceResult& AddReplicationRegions(const char* value) { m_replicationRegions.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p> A list of all Regions the keyspace is replicated in after the update
     * keyspace operation and their status. </p>
     */
    inline const Aws::Vector<ReplicationGroupStatus>& GetReplicationGroupStatuses() const{ return m_replicationGroupStatuses; }
    inline void SetReplicationGroupStatuses(const Aws::Vector<ReplicationGroupStatus>& value) { m_replicationGroupStatuses = value; }
    inline void SetReplicationGroupStatuses(Aws::Vector<ReplicationGroupStatus>&& value) { m_replicationGroupStatuses = std::move(value); }
    inline GetKeyspaceResult& WithReplicationGroupStatuses(const Aws::Vector<ReplicationGroupStatus>& value) { SetReplicationGroupStatuses(value); return *this;}
    inline GetKeyspaceResult& WithReplicationGroupStatuses(Aws::Vector<ReplicationGroupStatus>&& value) { SetReplicationGroupStatuses(std::move(value)); return *this;}
    inline GetKeyspaceResult& AddReplicationGroupStatuses(const ReplicationGroupStatus& value) { m_replicationGroupStatuses.push_back(value); return *this; }
    inline GetKeyspaceResult& AddReplicationGroupStatuses(ReplicationGroupStatus&& value) { m_replicationGroupStatuses.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetKeyspaceResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetKeyspaceResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetKeyspaceResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_keyspaceName;

    Aws::String m_resourceArn;

    Rs m_replicationStrategy;

    Aws::Vector<Aws::String> m_replicationRegions;

    Aws::Vector<ReplicationGroupStatus> m_replicationGroupStatuses;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Keyspaces
} // namespace Aws
