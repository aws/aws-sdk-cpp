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
    AWS_ELASTICACHE_API GlobalReplicationGroupInfo();
    AWS_ELASTICACHE_API GlobalReplicationGroupInfo(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_ELASTICACHE_API GlobalReplicationGroupInfo& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

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
    inline GlobalReplicationGroupInfo& WithGlobalReplicationGroupId(const Aws::String& value) { SetGlobalReplicationGroupId(value); return *this;}
    inline GlobalReplicationGroupInfo& WithGlobalReplicationGroupId(Aws::String&& value) { SetGlobalReplicationGroupId(std::move(value)); return *this;}
    inline GlobalReplicationGroupInfo& WithGlobalReplicationGroupId(const char* value) { SetGlobalReplicationGroupId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The role of the replication group in a Global datastore. Can be primary or
     * secondary.</p>
     */
    inline const Aws::String& GetGlobalReplicationGroupMemberRole() const{ return m_globalReplicationGroupMemberRole; }
    inline bool GlobalReplicationGroupMemberRoleHasBeenSet() const { return m_globalReplicationGroupMemberRoleHasBeenSet; }
    inline void SetGlobalReplicationGroupMemberRole(const Aws::String& value) { m_globalReplicationGroupMemberRoleHasBeenSet = true; m_globalReplicationGroupMemberRole = value; }
    inline void SetGlobalReplicationGroupMemberRole(Aws::String&& value) { m_globalReplicationGroupMemberRoleHasBeenSet = true; m_globalReplicationGroupMemberRole = std::move(value); }
    inline void SetGlobalReplicationGroupMemberRole(const char* value) { m_globalReplicationGroupMemberRoleHasBeenSet = true; m_globalReplicationGroupMemberRole.assign(value); }
    inline GlobalReplicationGroupInfo& WithGlobalReplicationGroupMemberRole(const Aws::String& value) { SetGlobalReplicationGroupMemberRole(value); return *this;}
    inline GlobalReplicationGroupInfo& WithGlobalReplicationGroupMemberRole(Aws::String&& value) { SetGlobalReplicationGroupMemberRole(std::move(value)); return *this;}
    inline GlobalReplicationGroupInfo& WithGlobalReplicationGroupMemberRole(const char* value) { SetGlobalReplicationGroupMemberRole(value); return *this;}
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
