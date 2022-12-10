/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elasticache/ElastiCache_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/elasticache/model/GlobalReplicationGroupMember.h>
#include <aws/elasticache/model/GlobalNodeGroup.h>
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

  /**
   * <p>Consists of a primary cluster that accepts writes and an associated secondary
   * cluster that resides in a different Amazon region. The secondary cluster accepts
   * only reads. The primary cluster automatically replicates updates to the
   * secondary cluster.</p> <ul> <li> <p>The <b>GlobalReplicationGroupIdSuffix</b>
   * represents the name of the Global datastore, which is what you use to associate
   * a secondary cluster.</p> </li> </ul><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/elasticache-2015-02-02/GlobalReplicationGroup">AWS
   * API Reference</a></p>
   */
  class GlobalReplicationGroup
  {
  public:
    AWS_ELASTICACHE_API GlobalReplicationGroup();
    AWS_ELASTICACHE_API GlobalReplicationGroup(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_ELASTICACHE_API GlobalReplicationGroup& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_ELASTICACHE_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_ELASTICACHE_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The name of the Global datastore</p>
     */
    inline const Aws::String& GetGlobalReplicationGroupId() const{ return m_globalReplicationGroupId; }

    /**
     * <p>The name of the Global datastore</p>
     */
    inline bool GlobalReplicationGroupIdHasBeenSet() const { return m_globalReplicationGroupIdHasBeenSet; }

    /**
     * <p>The name of the Global datastore</p>
     */
    inline void SetGlobalReplicationGroupId(const Aws::String& value) { m_globalReplicationGroupIdHasBeenSet = true; m_globalReplicationGroupId = value; }

    /**
     * <p>The name of the Global datastore</p>
     */
    inline void SetGlobalReplicationGroupId(Aws::String&& value) { m_globalReplicationGroupIdHasBeenSet = true; m_globalReplicationGroupId = std::move(value); }

    /**
     * <p>The name of the Global datastore</p>
     */
    inline void SetGlobalReplicationGroupId(const char* value) { m_globalReplicationGroupIdHasBeenSet = true; m_globalReplicationGroupId.assign(value); }

    /**
     * <p>The name of the Global datastore</p>
     */
    inline GlobalReplicationGroup& WithGlobalReplicationGroupId(const Aws::String& value) { SetGlobalReplicationGroupId(value); return *this;}

    /**
     * <p>The name of the Global datastore</p>
     */
    inline GlobalReplicationGroup& WithGlobalReplicationGroupId(Aws::String&& value) { SetGlobalReplicationGroupId(std::move(value)); return *this;}

    /**
     * <p>The name of the Global datastore</p>
     */
    inline GlobalReplicationGroup& WithGlobalReplicationGroupId(const char* value) { SetGlobalReplicationGroupId(value); return *this;}


    /**
     * <p>The optional description of the Global datastore</p>
     */
    inline const Aws::String& GetGlobalReplicationGroupDescription() const{ return m_globalReplicationGroupDescription; }

    /**
     * <p>The optional description of the Global datastore</p>
     */
    inline bool GlobalReplicationGroupDescriptionHasBeenSet() const { return m_globalReplicationGroupDescriptionHasBeenSet; }

    /**
     * <p>The optional description of the Global datastore</p>
     */
    inline void SetGlobalReplicationGroupDescription(const Aws::String& value) { m_globalReplicationGroupDescriptionHasBeenSet = true; m_globalReplicationGroupDescription = value; }

    /**
     * <p>The optional description of the Global datastore</p>
     */
    inline void SetGlobalReplicationGroupDescription(Aws::String&& value) { m_globalReplicationGroupDescriptionHasBeenSet = true; m_globalReplicationGroupDescription = std::move(value); }

    /**
     * <p>The optional description of the Global datastore</p>
     */
    inline void SetGlobalReplicationGroupDescription(const char* value) { m_globalReplicationGroupDescriptionHasBeenSet = true; m_globalReplicationGroupDescription.assign(value); }

    /**
     * <p>The optional description of the Global datastore</p>
     */
    inline GlobalReplicationGroup& WithGlobalReplicationGroupDescription(const Aws::String& value) { SetGlobalReplicationGroupDescription(value); return *this;}

    /**
     * <p>The optional description of the Global datastore</p>
     */
    inline GlobalReplicationGroup& WithGlobalReplicationGroupDescription(Aws::String&& value) { SetGlobalReplicationGroupDescription(std::move(value)); return *this;}

    /**
     * <p>The optional description of the Global datastore</p>
     */
    inline GlobalReplicationGroup& WithGlobalReplicationGroupDescription(const char* value) { SetGlobalReplicationGroupDescription(value); return *this;}


    /**
     * <p>The status of the Global datastore</p>
     */
    inline const Aws::String& GetStatus() const{ return m_status; }

    /**
     * <p>The status of the Global datastore</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The status of the Global datastore</p>
     */
    inline void SetStatus(const Aws::String& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The status of the Global datastore</p>
     */
    inline void SetStatus(Aws::String&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The status of the Global datastore</p>
     */
    inline void SetStatus(const char* value) { m_statusHasBeenSet = true; m_status.assign(value); }

    /**
     * <p>The status of the Global datastore</p>
     */
    inline GlobalReplicationGroup& WithStatus(const Aws::String& value) { SetStatus(value); return *this;}

    /**
     * <p>The status of the Global datastore</p>
     */
    inline GlobalReplicationGroup& WithStatus(Aws::String&& value) { SetStatus(std::move(value)); return *this;}

    /**
     * <p>The status of the Global datastore</p>
     */
    inline GlobalReplicationGroup& WithStatus(const char* value) { SetStatus(value); return *this;}


    /**
     * <p>The cache node type of the Global datastore</p>
     */
    inline const Aws::String& GetCacheNodeType() const{ return m_cacheNodeType; }

    /**
     * <p>The cache node type of the Global datastore</p>
     */
    inline bool CacheNodeTypeHasBeenSet() const { return m_cacheNodeTypeHasBeenSet; }

    /**
     * <p>The cache node type of the Global datastore</p>
     */
    inline void SetCacheNodeType(const Aws::String& value) { m_cacheNodeTypeHasBeenSet = true; m_cacheNodeType = value; }

    /**
     * <p>The cache node type of the Global datastore</p>
     */
    inline void SetCacheNodeType(Aws::String&& value) { m_cacheNodeTypeHasBeenSet = true; m_cacheNodeType = std::move(value); }

    /**
     * <p>The cache node type of the Global datastore</p>
     */
    inline void SetCacheNodeType(const char* value) { m_cacheNodeTypeHasBeenSet = true; m_cacheNodeType.assign(value); }

    /**
     * <p>The cache node type of the Global datastore</p>
     */
    inline GlobalReplicationGroup& WithCacheNodeType(const Aws::String& value) { SetCacheNodeType(value); return *this;}

    /**
     * <p>The cache node type of the Global datastore</p>
     */
    inline GlobalReplicationGroup& WithCacheNodeType(Aws::String&& value) { SetCacheNodeType(std::move(value)); return *this;}

    /**
     * <p>The cache node type of the Global datastore</p>
     */
    inline GlobalReplicationGroup& WithCacheNodeType(const char* value) { SetCacheNodeType(value); return *this;}


    /**
     * <p>The Elasticache engine. For Redis only.</p>
     */
    inline const Aws::String& GetEngine() const{ return m_engine; }

    /**
     * <p>The Elasticache engine. For Redis only.</p>
     */
    inline bool EngineHasBeenSet() const { return m_engineHasBeenSet; }

    /**
     * <p>The Elasticache engine. For Redis only.</p>
     */
    inline void SetEngine(const Aws::String& value) { m_engineHasBeenSet = true; m_engine = value; }

    /**
     * <p>The Elasticache engine. For Redis only.</p>
     */
    inline void SetEngine(Aws::String&& value) { m_engineHasBeenSet = true; m_engine = std::move(value); }

    /**
     * <p>The Elasticache engine. For Redis only.</p>
     */
    inline void SetEngine(const char* value) { m_engineHasBeenSet = true; m_engine.assign(value); }

    /**
     * <p>The Elasticache engine. For Redis only.</p>
     */
    inline GlobalReplicationGroup& WithEngine(const Aws::String& value) { SetEngine(value); return *this;}

    /**
     * <p>The Elasticache engine. For Redis only.</p>
     */
    inline GlobalReplicationGroup& WithEngine(Aws::String&& value) { SetEngine(std::move(value)); return *this;}

    /**
     * <p>The Elasticache engine. For Redis only.</p>
     */
    inline GlobalReplicationGroup& WithEngine(const char* value) { SetEngine(value); return *this;}


    /**
     * <p>The Elasticache Redis engine version.</p>
     */
    inline const Aws::String& GetEngineVersion() const{ return m_engineVersion; }

    /**
     * <p>The Elasticache Redis engine version.</p>
     */
    inline bool EngineVersionHasBeenSet() const { return m_engineVersionHasBeenSet; }

    /**
     * <p>The Elasticache Redis engine version.</p>
     */
    inline void SetEngineVersion(const Aws::String& value) { m_engineVersionHasBeenSet = true; m_engineVersion = value; }

    /**
     * <p>The Elasticache Redis engine version.</p>
     */
    inline void SetEngineVersion(Aws::String&& value) { m_engineVersionHasBeenSet = true; m_engineVersion = std::move(value); }

    /**
     * <p>The Elasticache Redis engine version.</p>
     */
    inline void SetEngineVersion(const char* value) { m_engineVersionHasBeenSet = true; m_engineVersion.assign(value); }

    /**
     * <p>The Elasticache Redis engine version.</p>
     */
    inline GlobalReplicationGroup& WithEngineVersion(const Aws::String& value) { SetEngineVersion(value); return *this;}

    /**
     * <p>The Elasticache Redis engine version.</p>
     */
    inline GlobalReplicationGroup& WithEngineVersion(Aws::String&& value) { SetEngineVersion(std::move(value)); return *this;}

    /**
     * <p>The Elasticache Redis engine version.</p>
     */
    inline GlobalReplicationGroup& WithEngineVersion(const char* value) { SetEngineVersion(value); return *this;}


    /**
     * <p>The replication groups that comprise the Global datastore.</p>
     */
    inline const Aws::Vector<GlobalReplicationGroupMember>& GetMembers() const{ return m_members; }

    /**
     * <p>The replication groups that comprise the Global datastore.</p>
     */
    inline bool MembersHasBeenSet() const { return m_membersHasBeenSet; }

    /**
     * <p>The replication groups that comprise the Global datastore.</p>
     */
    inline void SetMembers(const Aws::Vector<GlobalReplicationGroupMember>& value) { m_membersHasBeenSet = true; m_members = value; }

    /**
     * <p>The replication groups that comprise the Global datastore.</p>
     */
    inline void SetMembers(Aws::Vector<GlobalReplicationGroupMember>&& value) { m_membersHasBeenSet = true; m_members = std::move(value); }

    /**
     * <p>The replication groups that comprise the Global datastore.</p>
     */
    inline GlobalReplicationGroup& WithMembers(const Aws::Vector<GlobalReplicationGroupMember>& value) { SetMembers(value); return *this;}

    /**
     * <p>The replication groups that comprise the Global datastore.</p>
     */
    inline GlobalReplicationGroup& WithMembers(Aws::Vector<GlobalReplicationGroupMember>&& value) { SetMembers(std::move(value)); return *this;}

    /**
     * <p>The replication groups that comprise the Global datastore.</p>
     */
    inline GlobalReplicationGroup& AddMembers(const GlobalReplicationGroupMember& value) { m_membersHasBeenSet = true; m_members.push_back(value); return *this; }

    /**
     * <p>The replication groups that comprise the Global datastore.</p>
     */
    inline GlobalReplicationGroup& AddMembers(GlobalReplicationGroupMember&& value) { m_membersHasBeenSet = true; m_members.push_back(std::move(value)); return *this; }


    /**
     * <p>A flag that indicates whether the Global datastore is cluster enabled.</p>
     */
    inline bool GetClusterEnabled() const{ return m_clusterEnabled; }

    /**
     * <p>A flag that indicates whether the Global datastore is cluster enabled.</p>
     */
    inline bool ClusterEnabledHasBeenSet() const { return m_clusterEnabledHasBeenSet; }

    /**
     * <p>A flag that indicates whether the Global datastore is cluster enabled.</p>
     */
    inline void SetClusterEnabled(bool value) { m_clusterEnabledHasBeenSet = true; m_clusterEnabled = value; }

    /**
     * <p>A flag that indicates whether the Global datastore is cluster enabled.</p>
     */
    inline GlobalReplicationGroup& WithClusterEnabled(bool value) { SetClusterEnabled(value); return *this;}


    /**
     * <p>Indicates the slot configuration and global identifier for each slice
     * group.</p>
     */
    inline const Aws::Vector<GlobalNodeGroup>& GetGlobalNodeGroups() const{ return m_globalNodeGroups; }

    /**
     * <p>Indicates the slot configuration and global identifier for each slice
     * group.</p>
     */
    inline bool GlobalNodeGroupsHasBeenSet() const { return m_globalNodeGroupsHasBeenSet; }

    /**
     * <p>Indicates the slot configuration and global identifier for each slice
     * group.</p>
     */
    inline void SetGlobalNodeGroups(const Aws::Vector<GlobalNodeGroup>& value) { m_globalNodeGroupsHasBeenSet = true; m_globalNodeGroups = value; }

    /**
     * <p>Indicates the slot configuration and global identifier for each slice
     * group.</p>
     */
    inline void SetGlobalNodeGroups(Aws::Vector<GlobalNodeGroup>&& value) { m_globalNodeGroupsHasBeenSet = true; m_globalNodeGroups = std::move(value); }

    /**
     * <p>Indicates the slot configuration and global identifier for each slice
     * group.</p>
     */
    inline GlobalReplicationGroup& WithGlobalNodeGroups(const Aws::Vector<GlobalNodeGroup>& value) { SetGlobalNodeGroups(value); return *this;}

    /**
     * <p>Indicates the slot configuration and global identifier for each slice
     * group.</p>
     */
    inline GlobalReplicationGroup& WithGlobalNodeGroups(Aws::Vector<GlobalNodeGroup>&& value) { SetGlobalNodeGroups(std::move(value)); return *this;}

    /**
     * <p>Indicates the slot configuration and global identifier for each slice
     * group.</p>
     */
    inline GlobalReplicationGroup& AddGlobalNodeGroups(const GlobalNodeGroup& value) { m_globalNodeGroupsHasBeenSet = true; m_globalNodeGroups.push_back(value); return *this; }

    /**
     * <p>Indicates the slot configuration and global identifier for each slice
     * group.</p>
     */
    inline GlobalReplicationGroup& AddGlobalNodeGroups(GlobalNodeGroup&& value) { m_globalNodeGroupsHasBeenSet = true; m_globalNodeGroups.push_back(std::move(value)); return *this; }


    /**
     * <p>A flag that enables using an <code>AuthToken</code> (password) when issuing
     * Redis commands.</p> <p>Default: <code>false</code> </p>
     */
    inline bool GetAuthTokenEnabled() const{ return m_authTokenEnabled; }

    /**
     * <p>A flag that enables using an <code>AuthToken</code> (password) when issuing
     * Redis commands.</p> <p>Default: <code>false</code> </p>
     */
    inline bool AuthTokenEnabledHasBeenSet() const { return m_authTokenEnabledHasBeenSet; }

    /**
     * <p>A flag that enables using an <code>AuthToken</code> (password) when issuing
     * Redis commands.</p> <p>Default: <code>false</code> </p>
     */
    inline void SetAuthTokenEnabled(bool value) { m_authTokenEnabledHasBeenSet = true; m_authTokenEnabled = value; }

    /**
     * <p>A flag that enables using an <code>AuthToken</code> (password) when issuing
     * Redis commands.</p> <p>Default: <code>false</code> </p>
     */
    inline GlobalReplicationGroup& WithAuthTokenEnabled(bool value) { SetAuthTokenEnabled(value); return *this;}


    /**
     * <p>A flag that enables in-transit encryption when set to true. You cannot modify
     * the value of <code>TransitEncryptionEnabled</code> after the cluster is created.
     * To enable in-transit encryption on a cluster you must set
     * <code>TransitEncryptionEnabled</code> to true when you create a cluster. </p>
     * <p> <b>Required:</b> Only available when creating a replication group in an
     * Amazon VPC using redis version <code>3.2.6</code>, <code>4.x</code> or
     * later.</p>
     */
    inline bool GetTransitEncryptionEnabled() const{ return m_transitEncryptionEnabled; }

    /**
     * <p>A flag that enables in-transit encryption when set to true. You cannot modify
     * the value of <code>TransitEncryptionEnabled</code> after the cluster is created.
     * To enable in-transit encryption on a cluster you must set
     * <code>TransitEncryptionEnabled</code> to true when you create a cluster. </p>
     * <p> <b>Required:</b> Only available when creating a replication group in an
     * Amazon VPC using redis version <code>3.2.6</code>, <code>4.x</code> or
     * later.</p>
     */
    inline bool TransitEncryptionEnabledHasBeenSet() const { return m_transitEncryptionEnabledHasBeenSet; }

    /**
     * <p>A flag that enables in-transit encryption when set to true. You cannot modify
     * the value of <code>TransitEncryptionEnabled</code> after the cluster is created.
     * To enable in-transit encryption on a cluster you must set
     * <code>TransitEncryptionEnabled</code> to true when you create a cluster. </p>
     * <p> <b>Required:</b> Only available when creating a replication group in an
     * Amazon VPC using redis version <code>3.2.6</code>, <code>4.x</code> or
     * later.</p>
     */
    inline void SetTransitEncryptionEnabled(bool value) { m_transitEncryptionEnabledHasBeenSet = true; m_transitEncryptionEnabled = value; }

    /**
     * <p>A flag that enables in-transit encryption when set to true. You cannot modify
     * the value of <code>TransitEncryptionEnabled</code> after the cluster is created.
     * To enable in-transit encryption on a cluster you must set
     * <code>TransitEncryptionEnabled</code> to true when you create a cluster. </p>
     * <p> <b>Required:</b> Only available when creating a replication group in an
     * Amazon VPC using redis version <code>3.2.6</code>, <code>4.x</code> or
     * later.</p>
     */
    inline GlobalReplicationGroup& WithTransitEncryptionEnabled(bool value) { SetTransitEncryptionEnabled(value); return *this;}


    /**
     * <p>A flag that enables encryption at rest when set to <code>true</code>.</p>
     * <p>You cannot modify the value of <code>AtRestEncryptionEnabled</code> after the
     * replication group is created. To enable encryption at rest on a replication
     * group you must set <code>AtRestEncryptionEnabled</code> to <code>true</code>
     * when you create the replication group. </p> <p> <b>Required:</b> Only available
     * when creating a replication group in an Amazon VPC using redis version
     * <code>3.2.6</code>, <code>4.x</code> or later.</p>
     */
    inline bool GetAtRestEncryptionEnabled() const{ return m_atRestEncryptionEnabled; }

    /**
     * <p>A flag that enables encryption at rest when set to <code>true</code>.</p>
     * <p>You cannot modify the value of <code>AtRestEncryptionEnabled</code> after the
     * replication group is created. To enable encryption at rest on a replication
     * group you must set <code>AtRestEncryptionEnabled</code> to <code>true</code>
     * when you create the replication group. </p> <p> <b>Required:</b> Only available
     * when creating a replication group in an Amazon VPC using redis version
     * <code>3.2.6</code>, <code>4.x</code> or later.</p>
     */
    inline bool AtRestEncryptionEnabledHasBeenSet() const { return m_atRestEncryptionEnabledHasBeenSet; }

    /**
     * <p>A flag that enables encryption at rest when set to <code>true</code>.</p>
     * <p>You cannot modify the value of <code>AtRestEncryptionEnabled</code> after the
     * replication group is created. To enable encryption at rest on a replication
     * group you must set <code>AtRestEncryptionEnabled</code> to <code>true</code>
     * when you create the replication group. </p> <p> <b>Required:</b> Only available
     * when creating a replication group in an Amazon VPC using redis version
     * <code>3.2.6</code>, <code>4.x</code> or later.</p>
     */
    inline void SetAtRestEncryptionEnabled(bool value) { m_atRestEncryptionEnabledHasBeenSet = true; m_atRestEncryptionEnabled = value; }

    /**
     * <p>A flag that enables encryption at rest when set to <code>true</code>.</p>
     * <p>You cannot modify the value of <code>AtRestEncryptionEnabled</code> after the
     * replication group is created. To enable encryption at rest on a replication
     * group you must set <code>AtRestEncryptionEnabled</code> to <code>true</code>
     * when you create the replication group. </p> <p> <b>Required:</b> Only available
     * when creating a replication group in an Amazon VPC using redis version
     * <code>3.2.6</code>, <code>4.x</code> or later.</p>
     */
    inline GlobalReplicationGroup& WithAtRestEncryptionEnabled(bool value) { SetAtRestEncryptionEnabled(value); return *this;}


    /**
     * <p>The ARN (Amazon Resource Name) of the global replication group.</p>
     */
    inline const Aws::String& GetARN() const{ return m_aRN; }

    /**
     * <p>The ARN (Amazon Resource Name) of the global replication group.</p>
     */
    inline bool ARNHasBeenSet() const { return m_aRNHasBeenSet; }

    /**
     * <p>The ARN (Amazon Resource Name) of the global replication group.</p>
     */
    inline void SetARN(const Aws::String& value) { m_aRNHasBeenSet = true; m_aRN = value; }

    /**
     * <p>The ARN (Amazon Resource Name) of the global replication group.</p>
     */
    inline void SetARN(Aws::String&& value) { m_aRNHasBeenSet = true; m_aRN = std::move(value); }

    /**
     * <p>The ARN (Amazon Resource Name) of the global replication group.</p>
     */
    inline void SetARN(const char* value) { m_aRNHasBeenSet = true; m_aRN.assign(value); }

    /**
     * <p>The ARN (Amazon Resource Name) of the global replication group.</p>
     */
    inline GlobalReplicationGroup& WithARN(const Aws::String& value) { SetARN(value); return *this;}

    /**
     * <p>The ARN (Amazon Resource Name) of the global replication group.</p>
     */
    inline GlobalReplicationGroup& WithARN(Aws::String&& value) { SetARN(std::move(value)); return *this;}

    /**
     * <p>The ARN (Amazon Resource Name) of the global replication group.</p>
     */
    inline GlobalReplicationGroup& WithARN(const char* value) { SetARN(value); return *this;}

  private:

    Aws::String m_globalReplicationGroupId;
    bool m_globalReplicationGroupIdHasBeenSet = false;

    Aws::String m_globalReplicationGroupDescription;
    bool m_globalReplicationGroupDescriptionHasBeenSet = false;

    Aws::String m_status;
    bool m_statusHasBeenSet = false;

    Aws::String m_cacheNodeType;
    bool m_cacheNodeTypeHasBeenSet = false;

    Aws::String m_engine;
    bool m_engineHasBeenSet = false;

    Aws::String m_engineVersion;
    bool m_engineVersionHasBeenSet = false;

    Aws::Vector<GlobalReplicationGroupMember> m_members;
    bool m_membersHasBeenSet = false;

    bool m_clusterEnabled;
    bool m_clusterEnabledHasBeenSet = false;

    Aws::Vector<GlobalNodeGroup> m_globalNodeGroups;
    bool m_globalNodeGroupsHasBeenSet = false;

    bool m_authTokenEnabled;
    bool m_authTokenEnabledHasBeenSet = false;

    bool m_transitEncryptionEnabled;
    bool m_transitEncryptionEnabledHasBeenSet = false;

    bool m_atRestEncryptionEnabled;
    bool m_atRestEncryptionEnabledHasBeenSet = false;

    Aws::String m_aRN;
    bool m_aRNHasBeenSet = false;
  };

} // namespace Model
} // namespace ElastiCache
} // namespace Aws
