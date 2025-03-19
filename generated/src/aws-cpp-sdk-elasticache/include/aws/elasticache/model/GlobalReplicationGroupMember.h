/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elasticache/ElastiCache_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/elasticache/model/AutomaticFailoverStatus.h>
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
   * <p>A member of a Global datastore. It contains the Replication Group Id, the
   * Amazon region and the role of the replication group. </p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/elasticache-2015-02-02/GlobalReplicationGroupMember">AWS
   * API Reference</a></p>
   */
  class GlobalReplicationGroupMember
  {
  public:
    AWS_ELASTICACHE_API GlobalReplicationGroupMember() = default;
    AWS_ELASTICACHE_API GlobalReplicationGroupMember(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_ELASTICACHE_API GlobalReplicationGroupMember& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_ELASTICACHE_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_ELASTICACHE_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The replication group id of the Global datastore member.</p>
     */
    inline const Aws::String& GetReplicationGroupId() const { return m_replicationGroupId; }
    inline bool ReplicationGroupIdHasBeenSet() const { return m_replicationGroupIdHasBeenSet; }
    template<typename ReplicationGroupIdT = Aws::String>
    void SetReplicationGroupId(ReplicationGroupIdT&& value) { m_replicationGroupIdHasBeenSet = true; m_replicationGroupId = std::forward<ReplicationGroupIdT>(value); }
    template<typename ReplicationGroupIdT = Aws::String>
    GlobalReplicationGroupMember& WithReplicationGroupId(ReplicationGroupIdT&& value) { SetReplicationGroupId(std::forward<ReplicationGroupIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon region of the Global datastore member.</p>
     */
    inline const Aws::String& GetReplicationGroupRegion() const { return m_replicationGroupRegion; }
    inline bool ReplicationGroupRegionHasBeenSet() const { return m_replicationGroupRegionHasBeenSet; }
    template<typename ReplicationGroupRegionT = Aws::String>
    void SetReplicationGroupRegion(ReplicationGroupRegionT&& value) { m_replicationGroupRegionHasBeenSet = true; m_replicationGroupRegion = std::forward<ReplicationGroupRegionT>(value); }
    template<typename ReplicationGroupRegionT = Aws::String>
    GlobalReplicationGroupMember& WithReplicationGroupRegion(ReplicationGroupRegionT&& value) { SetReplicationGroupRegion(std::forward<ReplicationGroupRegionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates the role of the replication group, primary or secondary.</p>
     */
    inline const Aws::String& GetRole() const { return m_role; }
    inline bool RoleHasBeenSet() const { return m_roleHasBeenSet; }
    template<typename RoleT = Aws::String>
    void SetRole(RoleT&& value) { m_roleHasBeenSet = true; m_role = std::forward<RoleT>(value); }
    template<typename RoleT = Aws::String>
    GlobalReplicationGroupMember& WithRole(RoleT&& value) { SetRole(std::forward<RoleT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether automatic failover is enabled for the replication
     * group.</p>
     */
    inline AutomaticFailoverStatus GetAutomaticFailover() const { return m_automaticFailover; }
    inline bool AutomaticFailoverHasBeenSet() const { return m_automaticFailoverHasBeenSet; }
    inline void SetAutomaticFailover(AutomaticFailoverStatus value) { m_automaticFailoverHasBeenSet = true; m_automaticFailover = value; }
    inline GlobalReplicationGroupMember& WithAutomaticFailover(AutomaticFailoverStatus value) { SetAutomaticFailover(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the membership of the replication group.</p>
     */
    inline const Aws::String& GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    template<typename StatusT = Aws::String>
    void SetStatus(StatusT&& value) { m_statusHasBeenSet = true; m_status = std::forward<StatusT>(value); }
    template<typename StatusT = Aws::String>
    GlobalReplicationGroupMember& WithStatus(StatusT&& value) { SetStatus(std::forward<StatusT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_replicationGroupId;
    bool m_replicationGroupIdHasBeenSet = false;

    Aws::String m_replicationGroupRegion;
    bool m_replicationGroupRegionHasBeenSet = false;

    Aws::String m_role;
    bool m_roleHasBeenSet = false;

    AutomaticFailoverStatus m_automaticFailover{AutomaticFailoverStatus::NOT_SET};
    bool m_automaticFailoverHasBeenSet = false;

    Aws::String m_status;
    bool m_statusHasBeenSet = false;
  };

} // namespace Model
} // namespace ElastiCache
} // namespace Aws
