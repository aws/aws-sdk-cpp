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
    AWS_ELASTICACHE_API GlobalReplicationGroupMember();
    AWS_ELASTICACHE_API GlobalReplicationGroupMember(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_ELASTICACHE_API GlobalReplicationGroupMember& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_ELASTICACHE_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_ELASTICACHE_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The replication group id of the Global datastore member.</p>
     */
    inline const Aws::String& GetReplicationGroupId() const{ return m_replicationGroupId; }
    inline bool ReplicationGroupIdHasBeenSet() const { return m_replicationGroupIdHasBeenSet; }
    inline void SetReplicationGroupId(const Aws::String& value) { m_replicationGroupIdHasBeenSet = true; m_replicationGroupId = value; }
    inline void SetReplicationGroupId(Aws::String&& value) { m_replicationGroupIdHasBeenSet = true; m_replicationGroupId = std::move(value); }
    inline void SetReplicationGroupId(const char* value) { m_replicationGroupIdHasBeenSet = true; m_replicationGroupId.assign(value); }
    inline GlobalReplicationGroupMember& WithReplicationGroupId(const Aws::String& value) { SetReplicationGroupId(value); return *this;}
    inline GlobalReplicationGroupMember& WithReplicationGroupId(Aws::String&& value) { SetReplicationGroupId(std::move(value)); return *this;}
    inline GlobalReplicationGroupMember& WithReplicationGroupId(const char* value) { SetReplicationGroupId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon region of the Global datastore member.</p>
     */
    inline const Aws::String& GetReplicationGroupRegion() const{ return m_replicationGroupRegion; }
    inline bool ReplicationGroupRegionHasBeenSet() const { return m_replicationGroupRegionHasBeenSet; }
    inline void SetReplicationGroupRegion(const Aws::String& value) { m_replicationGroupRegionHasBeenSet = true; m_replicationGroupRegion = value; }
    inline void SetReplicationGroupRegion(Aws::String&& value) { m_replicationGroupRegionHasBeenSet = true; m_replicationGroupRegion = std::move(value); }
    inline void SetReplicationGroupRegion(const char* value) { m_replicationGroupRegionHasBeenSet = true; m_replicationGroupRegion.assign(value); }
    inline GlobalReplicationGroupMember& WithReplicationGroupRegion(const Aws::String& value) { SetReplicationGroupRegion(value); return *this;}
    inline GlobalReplicationGroupMember& WithReplicationGroupRegion(Aws::String&& value) { SetReplicationGroupRegion(std::move(value)); return *this;}
    inline GlobalReplicationGroupMember& WithReplicationGroupRegion(const char* value) { SetReplicationGroupRegion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates the role of the replication group, primary or secondary.</p>
     */
    inline const Aws::String& GetRole() const{ return m_role; }
    inline bool RoleHasBeenSet() const { return m_roleHasBeenSet; }
    inline void SetRole(const Aws::String& value) { m_roleHasBeenSet = true; m_role = value; }
    inline void SetRole(Aws::String&& value) { m_roleHasBeenSet = true; m_role = std::move(value); }
    inline void SetRole(const char* value) { m_roleHasBeenSet = true; m_role.assign(value); }
    inline GlobalReplicationGroupMember& WithRole(const Aws::String& value) { SetRole(value); return *this;}
    inline GlobalReplicationGroupMember& WithRole(Aws::String&& value) { SetRole(std::move(value)); return *this;}
    inline GlobalReplicationGroupMember& WithRole(const char* value) { SetRole(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether automatic failover is enabled for the replication
     * group.</p>
     */
    inline const AutomaticFailoverStatus& GetAutomaticFailover() const{ return m_automaticFailover; }
    inline bool AutomaticFailoverHasBeenSet() const { return m_automaticFailoverHasBeenSet; }
    inline void SetAutomaticFailover(const AutomaticFailoverStatus& value) { m_automaticFailoverHasBeenSet = true; m_automaticFailover = value; }
    inline void SetAutomaticFailover(AutomaticFailoverStatus&& value) { m_automaticFailoverHasBeenSet = true; m_automaticFailover = std::move(value); }
    inline GlobalReplicationGroupMember& WithAutomaticFailover(const AutomaticFailoverStatus& value) { SetAutomaticFailover(value); return *this;}
    inline GlobalReplicationGroupMember& WithAutomaticFailover(AutomaticFailoverStatus&& value) { SetAutomaticFailover(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the membership of the replication group.</p>
     */
    inline const Aws::String& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const Aws::String& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(Aws::String&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline void SetStatus(const char* value) { m_statusHasBeenSet = true; m_status.assign(value); }
    inline GlobalReplicationGroupMember& WithStatus(const Aws::String& value) { SetStatus(value); return *this;}
    inline GlobalReplicationGroupMember& WithStatus(Aws::String&& value) { SetStatus(std::move(value)); return *this;}
    inline GlobalReplicationGroupMember& WithStatus(const char* value) { SetStatus(value); return *this;}
    ///@}
  private:

    Aws::String m_replicationGroupId;
    bool m_replicationGroupIdHasBeenSet = false;

    Aws::String m_replicationGroupRegion;
    bool m_replicationGroupRegionHasBeenSet = false;

    Aws::String m_role;
    bool m_roleHasBeenSet = false;

    AutomaticFailoverStatus m_automaticFailover;
    bool m_automaticFailoverHasBeenSet = false;

    Aws::String m_status;
    bool m_statusHasBeenSet = false;
  };

} // namespace Model
} // namespace ElastiCache
} // namespace Aws
