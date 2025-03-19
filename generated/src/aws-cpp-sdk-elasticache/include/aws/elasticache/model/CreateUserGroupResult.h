/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elasticache/ElastiCache_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/elasticache/model/UserGroupPendingChanges.h>
#include <aws/elasticache/model/ResponseMetadata.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Xml
{
  class XmlDocument;
} // namespace Xml
} // namespace Utils
namespace ElastiCache
{
namespace Model
{
  class CreateUserGroupResult
  {
  public:
    AWS_ELASTICACHE_API CreateUserGroupResult() = default;
    AWS_ELASTICACHE_API CreateUserGroupResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_ELASTICACHE_API CreateUserGroupResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>The ID of the user group.</p>
     */
    inline const Aws::String& GetUserGroupId() const { return m_userGroupId; }
    template<typename UserGroupIdT = Aws::String>
    void SetUserGroupId(UserGroupIdT&& value) { m_userGroupIdHasBeenSet = true; m_userGroupId = std::forward<UserGroupIdT>(value); }
    template<typename UserGroupIdT = Aws::String>
    CreateUserGroupResult& WithUserGroupId(UserGroupIdT&& value) { SetUserGroupId(std::forward<UserGroupIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates user group status. Can be "creating", "active", "modifying",
     * "deleting".</p>
     */
    inline const Aws::String& GetStatus() const { return m_status; }
    template<typename StatusT = Aws::String>
    void SetStatus(StatusT&& value) { m_statusHasBeenSet = true; m_status = std::forward<StatusT>(value); }
    template<typename StatusT = Aws::String>
    CreateUserGroupResult& WithStatus(StatusT&& value) { SetStatus(std::forward<StatusT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The options are valkey or redis.</p>
     */
    inline const Aws::String& GetEngine() const { return m_engine; }
    template<typename EngineT = Aws::String>
    void SetEngine(EngineT&& value) { m_engineHasBeenSet = true; m_engine = std::forward<EngineT>(value); }
    template<typename EngineT = Aws::String>
    CreateUserGroupResult& WithEngine(EngineT&& value) { SetEngine(std::forward<EngineT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The list of user IDs that belong to the user group.</p>
     */
    inline const Aws::Vector<Aws::String>& GetUserIds() const { return m_userIds; }
    template<typename UserIdsT = Aws::Vector<Aws::String>>
    void SetUserIds(UserIdsT&& value) { m_userIdsHasBeenSet = true; m_userIds = std::forward<UserIdsT>(value); }
    template<typename UserIdsT = Aws::Vector<Aws::String>>
    CreateUserGroupResult& WithUserIds(UserIdsT&& value) { SetUserIds(std::forward<UserIdsT>(value)); return *this;}
    template<typename UserIdsT = Aws::String>
    CreateUserGroupResult& AddUserIds(UserIdsT&& value) { m_userIdsHasBeenSet = true; m_userIds.emplace_back(std::forward<UserIdsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The minimum engine version required, which is Redis OSS 6.0</p>
     */
    inline const Aws::String& GetMinimumEngineVersion() const { return m_minimumEngineVersion; }
    template<typename MinimumEngineVersionT = Aws::String>
    void SetMinimumEngineVersion(MinimumEngineVersionT&& value) { m_minimumEngineVersionHasBeenSet = true; m_minimumEngineVersion = std::forward<MinimumEngineVersionT>(value); }
    template<typename MinimumEngineVersionT = Aws::String>
    CreateUserGroupResult& WithMinimumEngineVersion(MinimumEngineVersionT&& value) { SetMinimumEngineVersion(std::forward<MinimumEngineVersionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of updates being applied to the user group.</p>
     */
    inline const UserGroupPendingChanges& GetPendingChanges() const { return m_pendingChanges; }
    template<typename PendingChangesT = UserGroupPendingChanges>
    void SetPendingChanges(PendingChangesT&& value) { m_pendingChangesHasBeenSet = true; m_pendingChanges = std::forward<PendingChangesT>(value); }
    template<typename PendingChangesT = UserGroupPendingChanges>
    CreateUserGroupResult& WithPendingChanges(PendingChangesT&& value) { SetPendingChanges(std::forward<PendingChangesT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of replication groups that the user group can access.</p>
     */
    inline const Aws::Vector<Aws::String>& GetReplicationGroups() const { return m_replicationGroups; }
    template<typename ReplicationGroupsT = Aws::Vector<Aws::String>>
    void SetReplicationGroups(ReplicationGroupsT&& value) { m_replicationGroupsHasBeenSet = true; m_replicationGroups = std::forward<ReplicationGroupsT>(value); }
    template<typename ReplicationGroupsT = Aws::Vector<Aws::String>>
    CreateUserGroupResult& WithReplicationGroups(ReplicationGroupsT&& value) { SetReplicationGroups(std::forward<ReplicationGroupsT>(value)); return *this;}
    template<typename ReplicationGroupsT = Aws::String>
    CreateUserGroupResult& AddReplicationGroups(ReplicationGroupsT&& value) { m_replicationGroupsHasBeenSet = true; m_replicationGroups.emplace_back(std::forward<ReplicationGroupsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Indicates which serverless caches the specified user group is associated
     * with. Available for Valkey, Redis OSS and Serverless Memcached only.</p>
     */
    inline const Aws::Vector<Aws::String>& GetServerlessCaches() const { return m_serverlessCaches; }
    template<typename ServerlessCachesT = Aws::Vector<Aws::String>>
    void SetServerlessCaches(ServerlessCachesT&& value) { m_serverlessCachesHasBeenSet = true; m_serverlessCaches = std::forward<ServerlessCachesT>(value); }
    template<typename ServerlessCachesT = Aws::Vector<Aws::String>>
    CreateUserGroupResult& WithServerlessCaches(ServerlessCachesT&& value) { SetServerlessCaches(std::forward<ServerlessCachesT>(value)); return *this;}
    template<typename ServerlessCachesT = Aws::String>
    CreateUserGroupResult& AddServerlessCaches(ServerlessCachesT&& value) { m_serverlessCachesHasBeenSet = true; m_serverlessCaches.emplace_back(std::forward<ServerlessCachesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the user group.</p>
     */
    inline const Aws::String& GetARN() const { return m_aRN; }
    template<typename ARNT = Aws::String>
    void SetARN(ARNT&& value) { m_aRNHasBeenSet = true; m_aRN = std::forward<ARNT>(value); }
    template<typename ARNT = Aws::String>
    CreateUserGroupResult& WithARN(ARNT&& value) { SetARN(std::forward<ARNT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const { return m_responseMetadata; }
    template<typename ResponseMetadataT = ResponseMetadata>
    void SetResponseMetadata(ResponseMetadataT&& value) { m_responseMetadataHasBeenSet = true; m_responseMetadata = std::forward<ResponseMetadataT>(value); }
    template<typename ResponseMetadataT = ResponseMetadata>
    CreateUserGroupResult& WithResponseMetadata(ResponseMetadataT&& value) { SetResponseMetadata(std::forward<ResponseMetadataT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_userGroupId;
    bool m_userGroupIdHasBeenSet = false;

    Aws::String m_status;
    bool m_statusHasBeenSet = false;

    Aws::String m_engine;
    bool m_engineHasBeenSet = false;

    Aws::Vector<Aws::String> m_userIds;
    bool m_userIdsHasBeenSet = false;

    Aws::String m_minimumEngineVersion;
    bool m_minimumEngineVersionHasBeenSet = false;

    UserGroupPendingChanges m_pendingChanges;
    bool m_pendingChangesHasBeenSet = false;

    Aws::Vector<Aws::String> m_replicationGroups;
    bool m_replicationGroupsHasBeenSet = false;

    Aws::Vector<Aws::String> m_serverlessCaches;
    bool m_serverlessCachesHasBeenSet = false;

    Aws::String m_aRN;
    bool m_aRNHasBeenSet = false;

    ResponseMetadata m_responseMetadata;
    bool m_responseMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace ElastiCache
} // namespace Aws
