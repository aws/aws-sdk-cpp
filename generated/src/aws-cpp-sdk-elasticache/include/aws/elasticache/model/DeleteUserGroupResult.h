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
  class DeleteUserGroupResult
  {
  public:
    AWS_ELASTICACHE_API DeleteUserGroupResult();
    AWS_ELASTICACHE_API DeleteUserGroupResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_ELASTICACHE_API DeleteUserGroupResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>The ID of the user group.</p>
     */
    inline const Aws::String& GetUserGroupId() const{ return m_userGroupId; }
    inline void SetUserGroupId(const Aws::String& value) { m_userGroupId = value; }
    inline void SetUserGroupId(Aws::String&& value) { m_userGroupId = std::move(value); }
    inline void SetUserGroupId(const char* value) { m_userGroupId.assign(value); }
    inline DeleteUserGroupResult& WithUserGroupId(const Aws::String& value) { SetUserGroupId(value); return *this;}
    inline DeleteUserGroupResult& WithUserGroupId(Aws::String&& value) { SetUserGroupId(std::move(value)); return *this;}
    inline DeleteUserGroupResult& WithUserGroupId(const char* value) { SetUserGroupId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates user group status. Can be "creating", "active", "modifying",
     * "deleting".</p>
     */
    inline const Aws::String& GetStatus() const{ return m_status; }
    inline void SetStatus(const Aws::String& value) { m_status = value; }
    inline void SetStatus(Aws::String&& value) { m_status = std::move(value); }
    inline void SetStatus(const char* value) { m_status.assign(value); }
    inline DeleteUserGroupResult& WithStatus(const Aws::String& value) { SetStatus(value); return *this;}
    inline DeleteUserGroupResult& WithStatus(Aws::String&& value) { SetStatus(std::move(value)); return *this;}
    inline DeleteUserGroupResult& WithStatus(const char* value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current supported value is Redis user. </p>
     */
    inline const Aws::String& GetEngine() const{ return m_engine; }
    inline void SetEngine(const Aws::String& value) { m_engine = value; }
    inline void SetEngine(Aws::String&& value) { m_engine = std::move(value); }
    inline void SetEngine(const char* value) { m_engine.assign(value); }
    inline DeleteUserGroupResult& WithEngine(const Aws::String& value) { SetEngine(value); return *this;}
    inline DeleteUserGroupResult& WithEngine(Aws::String&& value) { SetEngine(std::move(value)); return *this;}
    inline DeleteUserGroupResult& WithEngine(const char* value) { SetEngine(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The list of user IDs that belong to the user group.</p>
     */
    inline const Aws::Vector<Aws::String>& GetUserIds() const{ return m_userIds; }
    inline void SetUserIds(const Aws::Vector<Aws::String>& value) { m_userIds = value; }
    inline void SetUserIds(Aws::Vector<Aws::String>&& value) { m_userIds = std::move(value); }
    inline DeleteUserGroupResult& WithUserIds(const Aws::Vector<Aws::String>& value) { SetUserIds(value); return *this;}
    inline DeleteUserGroupResult& WithUserIds(Aws::Vector<Aws::String>&& value) { SetUserIds(std::move(value)); return *this;}
    inline DeleteUserGroupResult& AddUserIds(const Aws::String& value) { m_userIds.push_back(value); return *this; }
    inline DeleteUserGroupResult& AddUserIds(Aws::String&& value) { m_userIds.push_back(std::move(value)); return *this; }
    inline DeleteUserGroupResult& AddUserIds(const char* value) { m_userIds.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The minimum engine version required, which is Redis OSS 6.0</p>
     */
    inline const Aws::String& GetMinimumEngineVersion() const{ return m_minimumEngineVersion; }
    inline void SetMinimumEngineVersion(const Aws::String& value) { m_minimumEngineVersion = value; }
    inline void SetMinimumEngineVersion(Aws::String&& value) { m_minimumEngineVersion = std::move(value); }
    inline void SetMinimumEngineVersion(const char* value) { m_minimumEngineVersion.assign(value); }
    inline DeleteUserGroupResult& WithMinimumEngineVersion(const Aws::String& value) { SetMinimumEngineVersion(value); return *this;}
    inline DeleteUserGroupResult& WithMinimumEngineVersion(Aws::String&& value) { SetMinimumEngineVersion(std::move(value)); return *this;}
    inline DeleteUserGroupResult& WithMinimumEngineVersion(const char* value) { SetMinimumEngineVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of updates being applied to the user group.</p>
     */
    inline const UserGroupPendingChanges& GetPendingChanges() const{ return m_pendingChanges; }
    inline void SetPendingChanges(const UserGroupPendingChanges& value) { m_pendingChanges = value; }
    inline void SetPendingChanges(UserGroupPendingChanges&& value) { m_pendingChanges = std::move(value); }
    inline DeleteUserGroupResult& WithPendingChanges(const UserGroupPendingChanges& value) { SetPendingChanges(value); return *this;}
    inline DeleteUserGroupResult& WithPendingChanges(UserGroupPendingChanges&& value) { SetPendingChanges(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of replication groups that the user group can access.</p>
     */
    inline const Aws::Vector<Aws::String>& GetReplicationGroups() const{ return m_replicationGroups; }
    inline void SetReplicationGroups(const Aws::Vector<Aws::String>& value) { m_replicationGroups = value; }
    inline void SetReplicationGroups(Aws::Vector<Aws::String>&& value) { m_replicationGroups = std::move(value); }
    inline DeleteUserGroupResult& WithReplicationGroups(const Aws::Vector<Aws::String>& value) { SetReplicationGroups(value); return *this;}
    inline DeleteUserGroupResult& WithReplicationGroups(Aws::Vector<Aws::String>&& value) { SetReplicationGroups(std::move(value)); return *this;}
    inline DeleteUserGroupResult& AddReplicationGroups(const Aws::String& value) { m_replicationGroups.push_back(value); return *this; }
    inline DeleteUserGroupResult& AddReplicationGroups(Aws::String&& value) { m_replicationGroups.push_back(std::move(value)); return *this; }
    inline DeleteUserGroupResult& AddReplicationGroups(const char* value) { m_replicationGroups.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>Indicates which serverless caches the specified user group is associated
     * with. Available for Valkey, Redis OSS and Serverless Memcached only.</p>
     */
    inline const Aws::Vector<Aws::String>& GetServerlessCaches() const{ return m_serverlessCaches; }
    inline void SetServerlessCaches(const Aws::Vector<Aws::String>& value) { m_serverlessCaches = value; }
    inline void SetServerlessCaches(Aws::Vector<Aws::String>&& value) { m_serverlessCaches = std::move(value); }
    inline DeleteUserGroupResult& WithServerlessCaches(const Aws::Vector<Aws::String>& value) { SetServerlessCaches(value); return *this;}
    inline DeleteUserGroupResult& WithServerlessCaches(Aws::Vector<Aws::String>&& value) { SetServerlessCaches(std::move(value)); return *this;}
    inline DeleteUserGroupResult& AddServerlessCaches(const Aws::String& value) { m_serverlessCaches.push_back(value); return *this; }
    inline DeleteUserGroupResult& AddServerlessCaches(Aws::String&& value) { m_serverlessCaches.push_back(std::move(value)); return *this; }
    inline DeleteUserGroupResult& AddServerlessCaches(const char* value) { m_serverlessCaches.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the user group.</p>
     */
    inline const Aws::String& GetARN() const{ return m_aRN; }
    inline void SetARN(const Aws::String& value) { m_aRN = value; }
    inline void SetARN(Aws::String&& value) { m_aRN = std::move(value); }
    inline void SetARN(const char* value) { m_aRN.assign(value); }
    inline DeleteUserGroupResult& WithARN(const Aws::String& value) { SetARN(value); return *this;}
    inline DeleteUserGroupResult& WithARN(Aws::String&& value) { SetARN(std::move(value)); return *this;}
    inline DeleteUserGroupResult& WithARN(const char* value) { SetARN(value); return *this;}
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }
    inline DeleteUserGroupResult& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}
    inline DeleteUserGroupResult& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_userGroupId;

    Aws::String m_status;

    Aws::String m_engine;

    Aws::Vector<Aws::String> m_userIds;

    Aws::String m_minimumEngineVersion;

    UserGroupPendingChanges m_pendingChanges;

    Aws::Vector<Aws::String> m_replicationGroups;

    Aws::Vector<Aws::String> m_serverlessCaches;

    Aws::String m_aRN;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace ElastiCache
} // namespace Aws
