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
    AWS_ELASTICACHE_API CreateUserGroupResult();
    AWS_ELASTICACHE_API CreateUserGroupResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_ELASTICACHE_API CreateUserGroupResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>The ID of the user group.</p>
     */
    inline const Aws::String& GetUserGroupId() const{ return m_userGroupId; }

    /**
     * <p>The ID of the user group.</p>
     */
    inline void SetUserGroupId(const Aws::String& value) { m_userGroupId = value; }

    /**
     * <p>The ID of the user group.</p>
     */
    inline void SetUserGroupId(Aws::String&& value) { m_userGroupId = std::move(value); }

    /**
     * <p>The ID of the user group.</p>
     */
    inline void SetUserGroupId(const char* value) { m_userGroupId.assign(value); }

    /**
     * <p>The ID of the user group.</p>
     */
    inline CreateUserGroupResult& WithUserGroupId(const Aws::String& value) { SetUserGroupId(value); return *this;}

    /**
     * <p>The ID of the user group.</p>
     */
    inline CreateUserGroupResult& WithUserGroupId(Aws::String&& value) { SetUserGroupId(std::move(value)); return *this;}

    /**
     * <p>The ID of the user group.</p>
     */
    inline CreateUserGroupResult& WithUserGroupId(const char* value) { SetUserGroupId(value); return *this;}


    /**
     * <p>Indicates user group status. Can be "creating", "active", "modifying",
     * "deleting".</p>
     */
    inline const Aws::String& GetStatus() const{ return m_status; }

    /**
     * <p>Indicates user group status. Can be "creating", "active", "modifying",
     * "deleting".</p>
     */
    inline void SetStatus(const Aws::String& value) { m_status = value; }

    /**
     * <p>Indicates user group status. Can be "creating", "active", "modifying",
     * "deleting".</p>
     */
    inline void SetStatus(Aws::String&& value) { m_status = std::move(value); }

    /**
     * <p>Indicates user group status. Can be "creating", "active", "modifying",
     * "deleting".</p>
     */
    inline void SetStatus(const char* value) { m_status.assign(value); }

    /**
     * <p>Indicates user group status. Can be "creating", "active", "modifying",
     * "deleting".</p>
     */
    inline CreateUserGroupResult& WithStatus(const Aws::String& value) { SetStatus(value); return *this;}

    /**
     * <p>Indicates user group status. Can be "creating", "active", "modifying",
     * "deleting".</p>
     */
    inline CreateUserGroupResult& WithStatus(Aws::String&& value) { SetStatus(std::move(value)); return *this;}

    /**
     * <p>Indicates user group status. Can be "creating", "active", "modifying",
     * "deleting".</p>
     */
    inline CreateUserGroupResult& WithStatus(const char* value) { SetStatus(value); return *this;}


    /**
     * <p>The current supported value is Redis. </p>
     */
    inline const Aws::String& GetEngine() const{ return m_engine; }

    /**
     * <p>The current supported value is Redis. </p>
     */
    inline void SetEngine(const Aws::String& value) { m_engine = value; }

    /**
     * <p>The current supported value is Redis. </p>
     */
    inline void SetEngine(Aws::String&& value) { m_engine = std::move(value); }

    /**
     * <p>The current supported value is Redis. </p>
     */
    inline void SetEngine(const char* value) { m_engine.assign(value); }

    /**
     * <p>The current supported value is Redis. </p>
     */
    inline CreateUserGroupResult& WithEngine(const Aws::String& value) { SetEngine(value); return *this;}

    /**
     * <p>The current supported value is Redis. </p>
     */
    inline CreateUserGroupResult& WithEngine(Aws::String&& value) { SetEngine(std::move(value)); return *this;}

    /**
     * <p>The current supported value is Redis. </p>
     */
    inline CreateUserGroupResult& WithEngine(const char* value) { SetEngine(value); return *this;}


    /**
     * <p>The list of user IDs that belong to the user group.</p>
     */
    inline const Aws::Vector<Aws::String>& GetUserIds() const{ return m_userIds; }

    /**
     * <p>The list of user IDs that belong to the user group.</p>
     */
    inline void SetUserIds(const Aws::Vector<Aws::String>& value) { m_userIds = value; }

    /**
     * <p>The list of user IDs that belong to the user group.</p>
     */
    inline void SetUserIds(Aws::Vector<Aws::String>&& value) { m_userIds = std::move(value); }

    /**
     * <p>The list of user IDs that belong to the user group.</p>
     */
    inline CreateUserGroupResult& WithUserIds(const Aws::Vector<Aws::String>& value) { SetUserIds(value); return *this;}

    /**
     * <p>The list of user IDs that belong to the user group.</p>
     */
    inline CreateUserGroupResult& WithUserIds(Aws::Vector<Aws::String>&& value) { SetUserIds(std::move(value)); return *this;}

    /**
     * <p>The list of user IDs that belong to the user group.</p>
     */
    inline CreateUserGroupResult& AddUserIds(const Aws::String& value) { m_userIds.push_back(value); return *this; }

    /**
     * <p>The list of user IDs that belong to the user group.</p>
     */
    inline CreateUserGroupResult& AddUserIds(Aws::String&& value) { m_userIds.push_back(std::move(value)); return *this; }

    /**
     * <p>The list of user IDs that belong to the user group.</p>
     */
    inline CreateUserGroupResult& AddUserIds(const char* value) { m_userIds.push_back(value); return *this; }


    /**
     * <p>The minimum engine version required, which is Redis 6.0</p>
     */
    inline const Aws::String& GetMinimumEngineVersion() const{ return m_minimumEngineVersion; }

    /**
     * <p>The minimum engine version required, which is Redis 6.0</p>
     */
    inline void SetMinimumEngineVersion(const Aws::String& value) { m_minimumEngineVersion = value; }

    /**
     * <p>The minimum engine version required, which is Redis 6.0</p>
     */
    inline void SetMinimumEngineVersion(Aws::String&& value) { m_minimumEngineVersion = std::move(value); }

    /**
     * <p>The minimum engine version required, which is Redis 6.0</p>
     */
    inline void SetMinimumEngineVersion(const char* value) { m_minimumEngineVersion.assign(value); }

    /**
     * <p>The minimum engine version required, which is Redis 6.0</p>
     */
    inline CreateUserGroupResult& WithMinimumEngineVersion(const Aws::String& value) { SetMinimumEngineVersion(value); return *this;}

    /**
     * <p>The minimum engine version required, which is Redis 6.0</p>
     */
    inline CreateUserGroupResult& WithMinimumEngineVersion(Aws::String&& value) { SetMinimumEngineVersion(std::move(value)); return *this;}

    /**
     * <p>The minimum engine version required, which is Redis 6.0</p>
     */
    inline CreateUserGroupResult& WithMinimumEngineVersion(const char* value) { SetMinimumEngineVersion(value); return *this;}


    /**
     * <p>A list of updates being applied to the user group.</p>
     */
    inline const UserGroupPendingChanges& GetPendingChanges() const{ return m_pendingChanges; }

    /**
     * <p>A list of updates being applied to the user group.</p>
     */
    inline void SetPendingChanges(const UserGroupPendingChanges& value) { m_pendingChanges = value; }

    /**
     * <p>A list of updates being applied to the user group.</p>
     */
    inline void SetPendingChanges(UserGroupPendingChanges&& value) { m_pendingChanges = std::move(value); }

    /**
     * <p>A list of updates being applied to the user group.</p>
     */
    inline CreateUserGroupResult& WithPendingChanges(const UserGroupPendingChanges& value) { SetPendingChanges(value); return *this;}

    /**
     * <p>A list of updates being applied to the user group.</p>
     */
    inline CreateUserGroupResult& WithPendingChanges(UserGroupPendingChanges&& value) { SetPendingChanges(std::move(value)); return *this;}


    /**
     * <p>A list of replication groups that the user group can access.</p>
     */
    inline const Aws::Vector<Aws::String>& GetReplicationGroups() const{ return m_replicationGroups; }

    /**
     * <p>A list of replication groups that the user group can access.</p>
     */
    inline void SetReplicationGroups(const Aws::Vector<Aws::String>& value) { m_replicationGroups = value; }

    /**
     * <p>A list of replication groups that the user group can access.</p>
     */
    inline void SetReplicationGroups(Aws::Vector<Aws::String>&& value) { m_replicationGroups = std::move(value); }

    /**
     * <p>A list of replication groups that the user group can access.</p>
     */
    inline CreateUserGroupResult& WithReplicationGroups(const Aws::Vector<Aws::String>& value) { SetReplicationGroups(value); return *this;}

    /**
     * <p>A list of replication groups that the user group can access.</p>
     */
    inline CreateUserGroupResult& WithReplicationGroups(Aws::Vector<Aws::String>&& value) { SetReplicationGroups(std::move(value)); return *this;}

    /**
     * <p>A list of replication groups that the user group can access.</p>
     */
    inline CreateUserGroupResult& AddReplicationGroups(const Aws::String& value) { m_replicationGroups.push_back(value); return *this; }

    /**
     * <p>A list of replication groups that the user group can access.</p>
     */
    inline CreateUserGroupResult& AddReplicationGroups(Aws::String&& value) { m_replicationGroups.push_back(std::move(value)); return *this; }

    /**
     * <p>A list of replication groups that the user group can access.</p>
     */
    inline CreateUserGroupResult& AddReplicationGroups(const char* value) { m_replicationGroups.push_back(value); return *this; }


    /**
     * <p>The Amazon Resource Name (ARN) of the user group.</p>
     */
    inline const Aws::String& GetARN() const{ return m_aRN; }

    /**
     * <p>The Amazon Resource Name (ARN) of the user group.</p>
     */
    inline void SetARN(const Aws::String& value) { m_aRN = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the user group.</p>
     */
    inline void SetARN(Aws::String&& value) { m_aRN = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the user group.</p>
     */
    inline void SetARN(const char* value) { m_aRN.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the user group.</p>
     */
    inline CreateUserGroupResult& WithARN(const Aws::String& value) { SetARN(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the user group.</p>
     */
    inline CreateUserGroupResult& WithARN(Aws::String&& value) { SetARN(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the user group.</p>
     */
    inline CreateUserGroupResult& WithARN(const char* value) { SetARN(value); return *this;}


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline CreateUserGroupResult& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline CreateUserGroupResult& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    Aws::String m_userGroupId;

    Aws::String m_status;

    Aws::String m_engine;

    Aws::Vector<Aws::String> m_userIds;

    Aws::String m_minimumEngineVersion;

    UserGroupPendingChanges m_pendingChanges;

    Aws::Vector<Aws::String> m_replicationGroups;

    Aws::String m_aRN;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace ElastiCache
} // namespace Aws
