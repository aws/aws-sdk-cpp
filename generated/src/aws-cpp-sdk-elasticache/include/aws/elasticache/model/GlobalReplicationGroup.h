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


    ///@{
    /**
     * <p>The name of the Global datastore</p>
     */
    inline const Aws::String& GetGlobalReplicationGroupId() const{ return m_globalReplicationGroupId; }
    inline bool GlobalReplicationGroupIdHasBeenSet() const { return m_globalReplicationGroupIdHasBeenSet; }
    inline void SetGlobalReplicationGroupId(const Aws::String& value) { m_globalReplicationGroupIdHasBeenSet = true; m_globalReplicationGroupId = value; }
    inline void SetGlobalReplicationGroupId(Aws::String&& value) { m_globalReplicationGroupIdHasBeenSet = true; m_globalReplicationGroupId = std::move(value); }
    inline void SetGlobalReplicationGroupId(const char* value) { m_globalReplicationGroupIdHasBeenSet = true; m_globalReplicationGroupId.assign(value); }
    inline GlobalReplicationGroup& WithGlobalReplicationGroupId(const Aws::String& value) { SetGlobalReplicationGroupId(value); return *this;}
    inline GlobalReplicationGroup& WithGlobalReplicationGroupId(Aws::String&& value) { SetGlobalReplicationGroupId(std::move(value)); return *this;}
    inline GlobalReplicationGroup& WithGlobalReplicationGroupId(const char* value) { SetGlobalReplicationGroupId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The optional description of the Global datastore</p>
     */
    inline const Aws::String& GetGlobalReplicationGroupDescription() const{ return m_globalReplicationGroupDescription; }
    inline bool GlobalReplicationGroupDescriptionHasBeenSet() const { return m_globalReplicationGroupDescriptionHasBeenSet; }
    inline void SetGlobalReplicationGroupDescription(const Aws::String& value) { m_globalReplicationGroupDescriptionHasBeenSet = true; m_globalReplicationGroupDescription = value; }
    inline void SetGlobalReplicationGroupDescription(Aws::String&& value) { m_globalReplicationGroupDescriptionHasBeenSet = true; m_globalReplicationGroupDescription = std::move(value); }
    inline void SetGlobalReplicationGroupDescription(const char* value) { m_globalReplicationGroupDescriptionHasBeenSet = true; m_globalReplicationGroupDescription.assign(value); }
    inline GlobalReplicationGroup& WithGlobalReplicationGroupDescription(const Aws::String& value) { SetGlobalReplicationGroupDescription(value); return *this;}
    inline GlobalReplicationGroup& WithGlobalReplicationGroupDescription(Aws::String&& value) { SetGlobalReplicationGroupDescription(std::move(value)); return *this;}
    inline GlobalReplicationGroup& WithGlobalReplicationGroupDescription(const char* value) { SetGlobalReplicationGroupDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the Global datastore</p>
     */
    inline const Aws::String& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const Aws::String& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(Aws::String&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline void SetStatus(const char* value) { m_statusHasBeenSet = true; m_status.assign(value); }
    inline GlobalReplicationGroup& WithStatus(const Aws::String& value) { SetStatus(value); return *this;}
    inline GlobalReplicationGroup& WithStatus(Aws::String&& value) { SetStatus(std::move(value)); return *this;}
    inline GlobalReplicationGroup& WithStatus(const char* value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The cache node type of the Global datastore</p>
     */
    inline const Aws::String& GetCacheNodeType() const{ return m_cacheNodeType; }
    inline bool CacheNodeTypeHasBeenSet() const { return m_cacheNodeTypeHasBeenSet; }
    inline void SetCacheNodeType(const Aws::String& value) { m_cacheNodeTypeHasBeenSet = true; m_cacheNodeType = value; }
    inline void SetCacheNodeType(Aws::String&& value) { m_cacheNodeTypeHasBeenSet = true; m_cacheNodeType = std::move(value); }
    inline void SetCacheNodeType(const char* value) { m_cacheNodeTypeHasBeenSet = true; m_cacheNodeType.assign(value); }
    inline GlobalReplicationGroup& WithCacheNodeType(const Aws::String& value) { SetCacheNodeType(value); return *this;}
    inline GlobalReplicationGroup& WithCacheNodeType(Aws::String&& value) { SetCacheNodeType(std::move(value)); return *this;}
    inline GlobalReplicationGroup& WithCacheNodeType(const char* value) { SetCacheNodeType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ElastiCache engine. For Valkey or Redis OSS only.</p>
     */
    inline const Aws::String& GetEngine() const{ return m_engine; }
    inline bool EngineHasBeenSet() const { return m_engineHasBeenSet; }
    inline void SetEngine(const Aws::String& value) { m_engineHasBeenSet = true; m_engine = value; }
    inline void SetEngine(Aws::String&& value) { m_engineHasBeenSet = true; m_engine = std::move(value); }
    inline void SetEngine(const char* value) { m_engineHasBeenSet = true; m_engine.assign(value); }
    inline GlobalReplicationGroup& WithEngine(const Aws::String& value) { SetEngine(value); return *this;}
    inline GlobalReplicationGroup& WithEngine(Aws::String&& value) { SetEngine(std::move(value)); return *this;}
    inline GlobalReplicationGroup& WithEngine(const char* value) { SetEngine(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ElastiCache engine version.</p>
     */
    inline const Aws::String& GetEngineVersion() const{ return m_engineVersion; }
    inline bool EngineVersionHasBeenSet() const { return m_engineVersionHasBeenSet; }
    inline void SetEngineVersion(const Aws::String& value) { m_engineVersionHasBeenSet = true; m_engineVersion = value; }
    inline void SetEngineVersion(Aws::String&& value) { m_engineVersionHasBeenSet = true; m_engineVersion = std::move(value); }
    inline void SetEngineVersion(const char* value) { m_engineVersionHasBeenSet = true; m_engineVersion.assign(value); }
    inline GlobalReplicationGroup& WithEngineVersion(const Aws::String& value) { SetEngineVersion(value); return *this;}
    inline GlobalReplicationGroup& WithEngineVersion(Aws::String&& value) { SetEngineVersion(std::move(value)); return *this;}
    inline GlobalReplicationGroup& WithEngineVersion(const char* value) { SetEngineVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The replication groups that comprise the Global datastore.</p>
     */
    inline const Aws::Vector<GlobalReplicationGroupMember>& GetMembers() const{ return m_members; }
    inline bool MembersHasBeenSet() const { return m_membersHasBeenSet; }
    inline void SetMembers(const Aws::Vector<GlobalReplicationGroupMember>& value) { m_membersHasBeenSet = true; m_members = value; }
    inline void SetMembers(Aws::Vector<GlobalReplicationGroupMember>&& value) { m_membersHasBeenSet = true; m_members = std::move(value); }
    inline GlobalReplicationGroup& WithMembers(const Aws::Vector<GlobalReplicationGroupMember>& value) { SetMembers(value); return *this;}
    inline GlobalReplicationGroup& WithMembers(Aws::Vector<GlobalReplicationGroupMember>&& value) { SetMembers(std::move(value)); return *this;}
    inline GlobalReplicationGroup& AddMembers(const GlobalReplicationGroupMember& value) { m_membersHasBeenSet = true; m_members.push_back(value); return *this; }
    inline GlobalReplicationGroup& AddMembers(GlobalReplicationGroupMember&& value) { m_membersHasBeenSet = true; m_members.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A flag that indicates whether the Global datastore is cluster enabled.</p>
     */
    inline bool GetClusterEnabled() const{ return m_clusterEnabled; }
    inline bool ClusterEnabledHasBeenSet() const { return m_clusterEnabledHasBeenSet; }
    inline void SetClusterEnabled(bool value) { m_clusterEnabledHasBeenSet = true; m_clusterEnabled = value; }
    inline GlobalReplicationGroup& WithClusterEnabled(bool value) { SetClusterEnabled(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates the slot configuration and global identifier for each slice
     * group.</p>
     */
    inline const Aws::Vector<GlobalNodeGroup>& GetGlobalNodeGroups() const{ return m_globalNodeGroups; }
    inline bool GlobalNodeGroupsHasBeenSet() const { return m_globalNodeGroupsHasBeenSet; }
    inline void SetGlobalNodeGroups(const Aws::Vector<GlobalNodeGroup>& value) { m_globalNodeGroupsHasBeenSet = true; m_globalNodeGroups = value; }
    inline void SetGlobalNodeGroups(Aws::Vector<GlobalNodeGroup>&& value) { m_globalNodeGroupsHasBeenSet = true; m_globalNodeGroups = std::move(value); }
    inline GlobalReplicationGroup& WithGlobalNodeGroups(const Aws::Vector<GlobalNodeGroup>& value) { SetGlobalNodeGroups(value); return *this;}
    inline GlobalReplicationGroup& WithGlobalNodeGroups(Aws::Vector<GlobalNodeGroup>&& value) { SetGlobalNodeGroups(std::move(value)); return *this;}
    inline GlobalReplicationGroup& AddGlobalNodeGroups(const GlobalNodeGroup& value) { m_globalNodeGroupsHasBeenSet = true; m_globalNodeGroups.push_back(value); return *this; }
    inline GlobalReplicationGroup& AddGlobalNodeGroups(GlobalNodeGroup&& value) { m_globalNodeGroupsHasBeenSet = true; m_globalNodeGroups.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A flag that enables using an <code>AuthToken</code> (password) when issuing
     * Valkey or Redis OSS commands.</p> <p>Default: <code>false</code> </p>
     */
    inline bool GetAuthTokenEnabled() const{ return m_authTokenEnabled; }
    inline bool AuthTokenEnabledHasBeenSet() const { return m_authTokenEnabledHasBeenSet; }
    inline void SetAuthTokenEnabled(bool value) { m_authTokenEnabledHasBeenSet = true; m_authTokenEnabled = value; }
    inline GlobalReplicationGroup& WithAuthTokenEnabled(bool value) { SetAuthTokenEnabled(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A flag that enables in-transit encryption when set to true.</p> <p>
     * <b>Required:</b> Only available when creating a replication group in an Amazon
     * VPC using Redis OSS version <code>3.2.6</code>, <code>4.x</code> or later.</p>
     */
    inline bool GetTransitEncryptionEnabled() const{ return m_transitEncryptionEnabled; }
    inline bool TransitEncryptionEnabledHasBeenSet() const { return m_transitEncryptionEnabledHasBeenSet; }
    inline void SetTransitEncryptionEnabled(bool value) { m_transitEncryptionEnabledHasBeenSet = true; m_transitEncryptionEnabled = value; }
    inline GlobalReplicationGroup& WithTransitEncryptionEnabled(bool value) { SetTransitEncryptionEnabled(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A flag that enables encryption at rest when set to <code>true</code>.</p>
     * <p>You cannot modify the value of <code>AtRestEncryptionEnabled</code> after the
     * replication group is created. To enable encryption at rest on a replication
     * group you must set <code>AtRestEncryptionEnabled</code> to <code>true</code>
     * when you create the replication group. </p> <p> <b>Required:</b> Only available
     * when creating a replication group in an Amazon VPC using Redis OSS version
     * <code>3.2.6</code>, <code>4.x</code> or later.</p>
     */
    inline bool GetAtRestEncryptionEnabled() const{ return m_atRestEncryptionEnabled; }
    inline bool AtRestEncryptionEnabledHasBeenSet() const { return m_atRestEncryptionEnabledHasBeenSet; }
    inline void SetAtRestEncryptionEnabled(bool value) { m_atRestEncryptionEnabledHasBeenSet = true; m_atRestEncryptionEnabled = value; }
    inline GlobalReplicationGroup& WithAtRestEncryptionEnabled(bool value) { SetAtRestEncryptionEnabled(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN (Amazon Resource Name) of the global replication group.</p>
     */
    inline const Aws::String& GetARN() const{ return m_aRN; }
    inline bool ARNHasBeenSet() const { return m_aRNHasBeenSet; }
    inline void SetARN(const Aws::String& value) { m_aRNHasBeenSet = true; m_aRN = value; }
    inline void SetARN(Aws::String&& value) { m_aRNHasBeenSet = true; m_aRN = std::move(value); }
    inline void SetARN(const char* value) { m_aRNHasBeenSet = true; m_aRN.assign(value); }
    inline GlobalReplicationGroup& WithARN(const Aws::String& value) { SetARN(value); return *this;}
    inline GlobalReplicationGroup& WithARN(Aws::String&& value) { SetARN(std::move(value)); return *this;}
    inline GlobalReplicationGroup& WithARN(const char* value) { SetARN(value); return *this;}
    ///@}
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
