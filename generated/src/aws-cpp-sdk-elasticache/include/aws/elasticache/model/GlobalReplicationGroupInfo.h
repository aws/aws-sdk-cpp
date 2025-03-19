/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elasticache/ElastiCache_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
   * <p>The name of the Global datastore and role of this replication group in the
   * Global datastore.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/elasticache-2015-02-02/GlobalReplicationGroupInfo">AWS
   * API Reference</a></p>
   */
  class GlobalReplicationGroupInfo
  {
  public:
    AWS_ELASTICACHE_API GlobalReplicationGroupInfo() = default;
    AWS_ELASTICACHE_API GlobalReplicationGroupInfo(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_ELASTICACHE_API GlobalReplicationGroupInfo& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

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
    GlobalReplicationGroupInfo& WithGlobalReplicationGroupId(GlobalReplicationGroupIdT&& value) { SetGlobalReplicationGroupId(std::forward<GlobalReplicationGroupIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The role of the replication group in a Global datastore. Can be primary or
     * secondary.</p>
     */
    inline const Aws::String& GetGlobalReplicationGroupMemberRole() const { return m_globalReplicationGroupMemberRole; }
    inline bool GlobalReplicationGroupMemberRoleHasBeenSet() const { return m_globalReplicationGroupMemberRoleHasBeenSet; }
    template<typename GlobalReplicationGroupMemberRoleT = Aws::String>
    void SetGlobalReplicationGroupMemberRole(GlobalReplicationGroupMemberRoleT&& value) { m_globalReplicationGroupMemberRoleHasBeenSet = true; m_globalReplicationGroupMemberRole = std::forward<GlobalReplicationGroupMemberRoleT>(value); }
    template<typename GlobalReplicationGroupMemberRoleT = Aws::String>
    GlobalReplicationGroupInfo& WithGlobalReplicationGroupMemberRole(GlobalReplicationGroupMemberRoleT&& value) { SetGlobalReplicationGroupMemberRole(std::forward<GlobalReplicationGroupMemberRoleT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_globalReplicationGroupId;
    bool m_globalReplicationGroupIdHasBeenSet = false;

    Aws::String m_globalReplicationGroupMemberRole;
    bool m_globalReplicationGroupMemberRoleHasBeenSet = false;
  };

} // namespace Model
} // namespace ElastiCache
} // namespace Aws
