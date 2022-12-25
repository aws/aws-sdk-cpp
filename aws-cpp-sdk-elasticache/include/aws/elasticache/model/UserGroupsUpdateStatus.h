/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elasticache/ElastiCache_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
   * <p>The status of the user group update.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/elasticache-2015-02-02/UserGroupsUpdateStatus">AWS
   * API Reference</a></p>
   */
  class UserGroupsUpdateStatus
  {
  public:
    AWS_ELASTICACHE_API UserGroupsUpdateStatus();
    AWS_ELASTICACHE_API UserGroupsUpdateStatus(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_ELASTICACHE_API UserGroupsUpdateStatus& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_ELASTICACHE_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_ELASTICACHE_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The ID of the user group to add.</p>
     */
    inline const Aws::Vector<Aws::String>& GetUserGroupIdsToAdd() const{ return m_userGroupIdsToAdd; }

    /**
     * <p>The ID of the user group to add.</p>
     */
    inline bool UserGroupIdsToAddHasBeenSet() const { return m_userGroupIdsToAddHasBeenSet; }

    /**
     * <p>The ID of the user group to add.</p>
     */
    inline void SetUserGroupIdsToAdd(const Aws::Vector<Aws::String>& value) { m_userGroupIdsToAddHasBeenSet = true; m_userGroupIdsToAdd = value; }

    /**
     * <p>The ID of the user group to add.</p>
     */
    inline void SetUserGroupIdsToAdd(Aws::Vector<Aws::String>&& value) { m_userGroupIdsToAddHasBeenSet = true; m_userGroupIdsToAdd = std::move(value); }

    /**
     * <p>The ID of the user group to add.</p>
     */
    inline UserGroupsUpdateStatus& WithUserGroupIdsToAdd(const Aws::Vector<Aws::String>& value) { SetUserGroupIdsToAdd(value); return *this;}

    /**
     * <p>The ID of the user group to add.</p>
     */
    inline UserGroupsUpdateStatus& WithUserGroupIdsToAdd(Aws::Vector<Aws::String>&& value) { SetUserGroupIdsToAdd(std::move(value)); return *this;}

    /**
     * <p>The ID of the user group to add.</p>
     */
    inline UserGroupsUpdateStatus& AddUserGroupIdsToAdd(const Aws::String& value) { m_userGroupIdsToAddHasBeenSet = true; m_userGroupIdsToAdd.push_back(value); return *this; }

    /**
     * <p>The ID of the user group to add.</p>
     */
    inline UserGroupsUpdateStatus& AddUserGroupIdsToAdd(Aws::String&& value) { m_userGroupIdsToAddHasBeenSet = true; m_userGroupIdsToAdd.push_back(std::move(value)); return *this; }

    /**
     * <p>The ID of the user group to add.</p>
     */
    inline UserGroupsUpdateStatus& AddUserGroupIdsToAdd(const char* value) { m_userGroupIdsToAddHasBeenSet = true; m_userGroupIdsToAdd.push_back(value); return *this; }


    /**
     * <p>The ID of the user group to remove.</p>
     */
    inline const Aws::Vector<Aws::String>& GetUserGroupIdsToRemove() const{ return m_userGroupIdsToRemove; }

    /**
     * <p>The ID of the user group to remove.</p>
     */
    inline bool UserGroupIdsToRemoveHasBeenSet() const { return m_userGroupIdsToRemoveHasBeenSet; }

    /**
     * <p>The ID of the user group to remove.</p>
     */
    inline void SetUserGroupIdsToRemove(const Aws::Vector<Aws::String>& value) { m_userGroupIdsToRemoveHasBeenSet = true; m_userGroupIdsToRemove = value; }

    /**
     * <p>The ID of the user group to remove.</p>
     */
    inline void SetUserGroupIdsToRemove(Aws::Vector<Aws::String>&& value) { m_userGroupIdsToRemoveHasBeenSet = true; m_userGroupIdsToRemove = std::move(value); }

    /**
     * <p>The ID of the user group to remove.</p>
     */
    inline UserGroupsUpdateStatus& WithUserGroupIdsToRemove(const Aws::Vector<Aws::String>& value) { SetUserGroupIdsToRemove(value); return *this;}

    /**
     * <p>The ID of the user group to remove.</p>
     */
    inline UserGroupsUpdateStatus& WithUserGroupIdsToRemove(Aws::Vector<Aws::String>&& value) { SetUserGroupIdsToRemove(std::move(value)); return *this;}

    /**
     * <p>The ID of the user group to remove.</p>
     */
    inline UserGroupsUpdateStatus& AddUserGroupIdsToRemove(const Aws::String& value) { m_userGroupIdsToRemoveHasBeenSet = true; m_userGroupIdsToRemove.push_back(value); return *this; }

    /**
     * <p>The ID of the user group to remove.</p>
     */
    inline UserGroupsUpdateStatus& AddUserGroupIdsToRemove(Aws::String&& value) { m_userGroupIdsToRemoveHasBeenSet = true; m_userGroupIdsToRemove.push_back(std::move(value)); return *this; }

    /**
     * <p>The ID of the user group to remove.</p>
     */
    inline UserGroupsUpdateStatus& AddUserGroupIdsToRemove(const char* value) { m_userGroupIdsToRemoveHasBeenSet = true; m_userGroupIdsToRemove.push_back(value); return *this; }

  private:

    Aws::Vector<Aws::String> m_userGroupIdsToAdd;
    bool m_userGroupIdsToAddHasBeenSet = false;

    Aws::Vector<Aws::String> m_userGroupIdsToRemove;
    bool m_userGroupIdsToRemoveHasBeenSet = false;
  };

} // namespace Model
} // namespace ElastiCache
} // namespace Aws
