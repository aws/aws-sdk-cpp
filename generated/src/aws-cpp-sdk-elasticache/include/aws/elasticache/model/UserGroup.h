/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elasticache/ElastiCache_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/elasticache/model/UserGroupPendingChanges.h>
#include <aws/elasticache/model/ResponseMetadata.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Xml
{
  class XmlNode;
} // namespace Xml
} // namespace Utils
namespace ElastiCache
{
namespace Model
{

  class UserGroup
  {
  public:
    AWS_ELASTICACHE_API UserGroup();
    AWS_ELASTICACHE_API UserGroup(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_ELASTICACHE_API UserGroup& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_ELASTICACHE_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_ELASTICACHE_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The ID of the user group.</p>
     */
    inline const Aws::String& GetUserGroupId() const{ return m_userGroupId; }
    inline bool UserGroupIdHasBeenSet() const { return m_userGroupIdHasBeenSet; }
    inline void SetUserGroupId(const Aws::String& value) { m_userGroupIdHasBeenSet = true; m_userGroupId = value; }
    inline void SetUserGroupId(Aws::String&& value) { m_userGroupIdHasBeenSet = true; m_userGroupId = std::move(value); }
    inline void SetUserGroupId(const char* value) { m_userGroupIdHasBeenSet = true; m_userGroupId.assign(value); }
    inline UserGroup& WithUserGroupId(const Aws::String& value) { SetUserGroupId(value); return *this;}
    inline UserGroup& WithUserGroupId(Aws::String&& value) { SetUserGroupId(std::move(value)); return *this;}
    inline UserGroup& WithUserGroupId(const char* value) { SetUserGroupId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates user group status. Can be "creating", "active", "modifying",
     * "deleting".</p>
     */
    inline const Aws::String& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const Aws::String& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(Aws::String&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline void SetStatus(const char* value) { m_statusHasBeenSet = true; m_status.assign(value); }
    inline UserGroup& WithStatus(const Aws::String& value) { SetStatus(value); return *this;}
    inline UserGroup& WithStatus(Aws::String&& value) { SetStatus(std::move(value)); return *this;}
    inline UserGroup& WithStatus(const char* value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current supported value is Redis user. </p>
     */
    inline const Aws::String& GetEngine() const{ return m_engine; }
    inline bool EngineHasBeenSet() const { return m_engineHasBeenSet; }
    inline void SetEngine(const Aws::String& value) { m_engineHasBeenSet = true; m_engine = value; }
    inline void SetEngine(Aws::String&& value) { m_engineHasBeenSet = true; m_engine = std::move(value); }
    inline void SetEngine(const char* value) { m_engineHasBeenSet = true; m_engine.assign(value); }
    inline UserGroup& WithEngine(const Aws::String& value) { SetEngine(value); return *this;}
    inline UserGroup& WithEngine(Aws::String&& value) { SetEngine(std::move(value)); return *this;}
    inline UserGroup& WithEngine(const char* value) { SetEngine(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The list of user IDs that belong to the user group.</p>
     */
    inline const Aws::Vector<Aws::String>& GetUserIds() const{ return m_userIds; }
    inline bool UserIdsHasBeenSet() const { return m_userIdsHasBeenSet; }
    inline void SetUserIds(const Aws::Vector<Aws::String>& value) { m_userIdsHasBeenSet = true; m_userIds = value; }
    inline void SetUserIds(Aws::Vector<Aws::String>&& value) { m_userIdsHasBeenSet = true; m_userIds = std::move(value); }
    inline UserGroup& WithUserIds(const Aws::Vector<Aws::String>& value) { SetUserIds(value); return *this;}
    inline UserGroup& WithUserIds(Aws::Vector<Aws::String>&& value) { SetUserIds(std::move(value)); return *this;}
    inline UserGroup& AddUserIds(const Aws::String& value) { m_userIdsHasBeenSet = true; m_userIds.push_back(value); return *this; }
    inline UserGroup& AddUserIds(Aws::String&& value) { m_userIdsHasBeenSet = true; m_userIds.push_back(std::move(value)); return *this; }
    inline UserGroup& AddUserIds(const char* value) { m_userIdsHasBeenSet = true; m_userIds.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The minimum engine version required, which is Redis OSS 6.0</p>
     */
    inline const Aws::String& GetMinimumEngineVersion() const{ return m_minimumEngineVersion; }
    inline bool MinimumEngineVersionHasBeenSet() const { return m_minimumEngineVersionHasBeenSet; }
    inline void SetMinimumEngineVersion(const Aws::String& value) { m_minimumEngineVersionHasBeenSet = true; m_minimumEngineVersion = value; }
    inline void SetMinimumEngineVersion(Aws::String&& value) { m_minimumEngineVersionHasBeenSet = true; m_minimumEngineVersion = std::move(value); }
    inline void SetMinimumEngineVersion(const char* value) { m_minimumEngineVersionHasBeenSet = true; m_minimumEngineVersion.assign(value); }
    inline UserGroup& WithMinimumEngineVersion(const Aws::String& value) { SetMinimumEngineVersion(value); return *this;}
    inline UserGroup& WithMinimumEngineVersion(Aws::String&& value) { SetMinimumEngineVersion(std::move(value)); return *this;}
    inline UserGroup& WithMinimumEngineVersion(const char* value) { SetMinimumEngineVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of updates being applied to the user group.</p>
     */
    inline const UserGroupPendingChanges& GetPendingChanges() const{ return m_pendingChanges; }
    inline bool PendingChangesHasBeenSet() const { return m_pendingChangesHasBeenSet; }
    inline void SetPendingChanges(const UserGroupPendingChanges& value) { m_pendingChangesHasBeenSet = true; m_pendingChanges = value; }
    inline void SetPendingChanges(UserGroupPendingChanges&& value) { m_pendingChangesHasBeenSet = true; m_pendingChanges = std::move(value); }
    inline UserGroup& WithPendingChanges(const UserGroupPendingChanges& value) { SetPendingChanges(value); return *this;}
    inline UserGroup& WithPendingChanges(UserGroupPendingChanges&& value) { SetPendingChanges(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of replication groups that the user group can access.</p>
     */
    inline const Aws::Vector<Aws::String>& GetReplicationGroups() const{ return m_replicationGroups; }
    inline bool ReplicationGroupsHasBeenSet() const { return m_replicationGroupsHasBeenSet; }
    inline void SetReplicationGroups(const Aws::Vector<Aws::String>& value) { m_replicationGroupsHasBeenSet = true; m_replicationGroups = value; }
    inline void SetReplicationGroups(Aws::Vector<Aws::String>&& value) { m_replicationGroupsHasBeenSet = true; m_replicationGroups = std::move(value); }
    inline UserGroup& WithReplicationGroups(const Aws::Vector<Aws::String>& value) { SetReplicationGroups(value); return *this;}
    inline UserGroup& WithReplicationGroups(Aws::Vector<Aws::String>&& value) { SetReplicationGroups(std::move(value)); return *this;}
    inline UserGroup& AddReplicationGroups(const Aws::String& value) { m_replicationGroupsHasBeenSet = true; m_replicationGroups.push_back(value); return *this; }
    inline UserGroup& AddReplicationGroups(Aws::String&& value) { m_replicationGroupsHasBeenSet = true; m_replicationGroups.push_back(std::move(value)); return *this; }
    inline UserGroup& AddReplicationGroups(const char* value) { m_replicationGroupsHasBeenSet = true; m_replicationGroups.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>Indicates which serverless caches the specified user group is associated
     * with. Available for Valkey, Redis OSS and Serverless Memcached only.</p>
     */
    inline const Aws::Vector<Aws::String>& GetServerlessCaches() const{ return m_serverlessCaches; }
    inline bool ServerlessCachesHasBeenSet() const { return m_serverlessCachesHasBeenSet; }
    inline void SetServerlessCaches(const Aws::Vector<Aws::String>& value) { m_serverlessCachesHasBeenSet = true; m_serverlessCaches = value; }
    inline void SetServerlessCaches(Aws::Vector<Aws::String>&& value) { m_serverlessCachesHasBeenSet = true; m_serverlessCaches = std::move(value); }
    inline UserGroup& WithServerlessCaches(const Aws::Vector<Aws::String>& value) { SetServerlessCaches(value); return *this;}
    inline UserGroup& WithServerlessCaches(Aws::Vector<Aws::String>&& value) { SetServerlessCaches(std::move(value)); return *this;}
    inline UserGroup& AddServerlessCaches(const Aws::String& value) { m_serverlessCachesHasBeenSet = true; m_serverlessCaches.push_back(value); return *this; }
    inline UserGroup& AddServerlessCaches(Aws::String&& value) { m_serverlessCachesHasBeenSet = true; m_serverlessCaches.push_back(std::move(value)); return *this; }
    inline UserGroup& AddServerlessCaches(const char* value) { m_serverlessCachesHasBeenSet = true; m_serverlessCaches.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the user group.</p>
     */
    inline const Aws::String& GetARN() const{ return m_aRN; }
    inline bool ARNHasBeenSet() const { return m_aRNHasBeenSet; }
    inline void SetARN(const Aws::String& value) { m_aRNHasBeenSet = true; m_aRN = value; }
    inline void SetARN(Aws::String&& value) { m_aRNHasBeenSet = true; m_aRN = std::move(value); }
    inline void SetARN(const char* value) { m_aRNHasBeenSet = true; m_aRN.assign(value); }
    inline UserGroup& WithARN(const Aws::String& value) { SetARN(value); return *this;}
    inline UserGroup& WithARN(Aws::String&& value) { SetARN(std::move(value)); return *this;}
    inline UserGroup& WithARN(const char* value) { SetARN(value); return *this;}
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }
    inline UserGroup& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}
    inline UserGroup& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}
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
  };

} // namespace Model
} // namespace ElastiCache
} // namespace Aws
