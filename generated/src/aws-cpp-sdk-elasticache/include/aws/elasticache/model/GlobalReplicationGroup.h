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
    AWS_ELASTICACHE_API GlobalReplicationGroup() = default;
    AWS_ELASTICACHE_API GlobalReplicationGroup(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_ELASTICACHE_API GlobalReplicationGroup& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_ELASTICACHE_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_ELASTICACHE_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The name of the Global datastore</p>
     */
    inline const Aws::String& GetGlobalReplicationGroupId() const { return m_globalReplicationGroupId; }
    inline bool GlobalReplicationGroupIdHasBeenSet() const { return m_globalReplicationGroupIdHasBeenSet; }
    template<typename GlobalReplicationGroupIdT = Aws::String>
    void SetGlobalReplicationGroupId(GlobalReplicationGroupIdT&& value) { m_globalReplicationGroupIdHasBeenSet = true; m_globalReplicationGroupId = std::forward<GlobalReplicationGroupIdT>(value); }
    template<typename GlobalReplicationGroupIdT = Aws::String>
    GlobalReplicationGroup& WithGlobalReplicationGroupId(GlobalReplicationGroupIdT&& value) { SetGlobalReplicationGroupId(std::forward<GlobalReplicationGroupIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The optional description of the Global datastore</p>
     */
    inline const Aws::String& GetGlobalReplicationGroupDescription() const { return m_globalReplicationGroupDescription; }
    inline bool GlobalReplicationGroupDescriptionHasBeenSet() const { return m_globalReplicationGroupDescriptionHasBeenSet; }
    template<typename GlobalReplicationGroupDescriptionT = Aws::String>
    void SetGlobalReplicationGroupDescription(GlobalReplicationGroupDescriptionT&& value) { m_globalReplicationGroupDescriptionHasBeenSet = true; m_globalReplicationGroupDescription = std::forward<GlobalReplicationGroupDescriptionT>(value); }
    template<typename GlobalReplicationGroupDescriptionT = Aws::String>
    GlobalReplicationGroup& WithGlobalReplicationGroupDescription(GlobalReplicationGroupDescriptionT&& value) { SetGlobalReplicationGroupDescription(std::forward<GlobalReplicationGroupDescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the Global datastore</p>
     */
    inline const Aws::String& GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    template<typename StatusT = Aws::String>
    void SetStatus(StatusT&& value) { m_statusHasBeenSet = true; m_status = std::forward<StatusT>(value); }
    template<typename StatusT = Aws::String>
    GlobalReplicationGroup& WithStatus(StatusT&& value) { SetStatus(std::forward<StatusT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The cache node type of the Global datastore</p>
     */
    inline const Aws::String& GetCacheNodeType() const { return m_cacheNodeType; }
    inline bool CacheNodeTypeHasBeenSet() const { return m_cacheNodeTypeHasBeenSet; }
    template<typename CacheNodeTypeT = Aws::String>
    void SetCacheNodeType(CacheNodeTypeT&& value) { m_cacheNodeTypeHasBeenSet = true; m_cacheNodeType = std::forward<CacheNodeTypeT>(value); }
    template<typename CacheNodeTypeT = Aws::String>
    GlobalReplicationGroup& WithCacheNodeType(CacheNodeTypeT&& value) { SetCacheNodeType(std::forward<CacheNodeTypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ElastiCache engine. For Valkey or Redis OSS only.</p>
     */
    inline const Aws::String& GetEngine() const { return m_engine; }
    inline bool EngineHasBeenSet() const { return m_engineHasBeenSet; }
    template<typename EngineT = Aws::String>
    void SetEngine(EngineT&& value) { m_engineHasBeenSet = true; m_engine = std::forward<EngineT>(value); }
    template<typename EngineT = Aws::String>
    GlobalReplicationGroup& WithEngine(EngineT&& value) { SetEngine(std::forward<EngineT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ElastiCache engine version.</p>
     */
    inline const Aws::String& GetEngineVersion() const { return m_engineVersion; }
    inline bool EngineVersionHasBeenSet() const { return m_engineVersionHasBeenSet; }
    template<typename EngineVersionT = Aws::String>
    void SetEngineVersion(EngineVersionT&& value) { m_engineVersionHasBeenSet = true; m_engineVersion = std::forward<EngineVersionT>(value); }
    template<typename EngineVersionT = Aws::String>
    GlobalReplicationGroup& WithEngineVersion(EngineVersionT&& value) { SetEngineVersion(std::forward<EngineVersionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The replication groups that comprise the Global datastore.</p>
     */
    inline const Aws::Vector<GlobalReplicationGroupMember>& GetMembers() const { return m_members; }
    inline bool MembersHasBeenSet() const { return m_membersHasBeenSet; }
    template<typename MembersT = Aws::Vector<GlobalReplicationGroupMember>>
    void SetMembers(MembersT&& value) { m_membersHasBeenSet = true; m_members = std::forward<MembersT>(value); }
    template<typename MembersT = Aws::Vector<GlobalReplicationGroupMember>>
    GlobalReplicationGroup& WithMembers(MembersT&& value) { SetMembers(std::forward<MembersT>(value)); return *this;}
    template<typename MembersT = GlobalReplicationGroupMember>
    GlobalReplicationGroup& AddMembers(MembersT&& value) { m_membersHasBeenSet = true; m_members.emplace_back(std::forward<MembersT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A flag that indicates whether the Global datastore is cluster enabled.</p>
     */
    inline bool GetClusterEnabled() const { return m_clusterEnabled; }
    inline bool ClusterEnabledHasBeenSet() const { return m_clusterEnabledHasBeenSet; }
    inline void SetClusterEnabled(bool value) { m_clusterEnabledHasBeenSet = true; m_clusterEnabled = value; }
    inline GlobalReplicationGroup& WithClusterEnabled(bool value) { SetClusterEnabled(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates the slot configuration and global identifier for each slice
     * group.</p>
     */
    inline const Aws::Vector<GlobalNodeGroup>& GetGlobalNodeGroups() const { return m_globalNodeGroups; }
    inline bool GlobalNodeGroupsHasBeenSet() const { return m_globalNodeGroupsHasBeenSet; }
    template<typename GlobalNodeGroupsT = Aws::Vector<GlobalNodeGroup>>
    void SetGlobalNodeGroups(GlobalNodeGroupsT&& value) { m_globalNodeGroupsHasBeenSet = true; m_globalNodeGroups = std::forward<GlobalNodeGroupsT>(value); }
    template<typename GlobalNodeGroupsT = Aws::Vector<GlobalNodeGroup>>
    GlobalReplicationGroup& WithGlobalNodeGroups(GlobalNodeGroupsT&& value) { SetGlobalNodeGroups(std::forward<GlobalNodeGroupsT>(value)); return *this;}
    template<typename GlobalNodeGroupsT = GlobalNodeGroup>
    GlobalReplicationGroup& AddGlobalNodeGroups(GlobalNodeGroupsT&& value) { m_globalNodeGroupsHasBeenSet = true; m_globalNodeGroups.emplace_back(std::forward<GlobalNodeGroupsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A flag that enables using an <code>AuthToken</code> (password) when issuing
     * Valkey or Redis OSS commands.</p> <p>Default: <code>false</code> </p>
     */
    inline bool GetAuthTokenEnabled() const { return m_authTokenEnabled; }
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
    inline bool GetTransitEncryptionEnabled() const { return m_transitEncryptionEnabled; }
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
    inline bool GetAtRestEncryptionEnabled() const { return m_atRestEncryptionEnabled; }
    inline bool AtRestEncryptionEnabledHasBeenSet() const { return m_atRestEncryptionEnabledHasBeenSet; }
    inline void SetAtRestEncryptionEnabled(bool value) { m_atRestEncryptionEnabledHasBeenSet = true; m_atRestEncryptionEnabled = value; }
    inline GlobalReplicationGroup& WithAtRestEncryptionEnabled(bool value) { SetAtRestEncryptionEnabled(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN (Amazon Resource Name) of the global replication group.</p>
     */
    inline const Aws::String& GetARN() const { return m_aRN; }
    inline bool ARNHasBeenSet() const { return m_aRNHasBeenSet; }
    template<typename ARNT = Aws::String>
    void SetARN(ARNT&& value) { m_aRNHasBeenSet = true; m_aRN = std::forward<ARNT>(value); }
    template<typename ARNT = Aws::String>
    GlobalReplicationGroup& WithARN(ARNT&& value) { SetARN(std::forward<ARNT>(value)); return *this;}
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

    bool m_clusterEnabled{false};
    bool m_clusterEnabledHasBeenSet = false;

    Aws::Vector<GlobalNodeGroup> m_globalNodeGroups;
    bool m_globalNodeGroupsHasBeenSet = false;

    bool m_authTokenEnabled{false};
    bool m_authTokenEnabledHasBeenSet = false;

    bool m_transitEncryptionEnabled{false};
    bool m_transitEncryptionEnabledHasBeenSet = false;

    bool m_atRestEncryptionEnabled{false};
    bool m_atRestEncryptionEnabledHasBeenSet = false;

    Aws::String m_aRN;
    bool m_aRNHasBeenSet = false;
  };

} // namespace Model
} // namespace ElastiCache
} // namespace Aws
