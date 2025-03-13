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
    AWS_ELASTICACHE_API UserGroupsUpdateStatus() = default;
    AWS_ELASTICACHE_API UserGroupsUpdateStatus(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_ELASTICACHE_API UserGroupsUpdateStatus& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_ELASTICACHE_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_ELASTICACHE_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The ID of the user group to add.</p>
     */
    inline const Aws::Vector<Aws::String>& GetUserGroupIdsToAdd() const { return m_userGroupIdsToAdd; }
    inline bool UserGroupIdsToAddHasBeenSet() const { return m_userGroupIdsToAddHasBeenSet; }
    template<typename UserGroupIdsToAddT = Aws::Vector<Aws::String>>
    void SetUserGroupIdsToAdd(UserGroupIdsToAddT&& value) { m_userGroupIdsToAddHasBeenSet = true; m_userGroupIdsToAdd = std::forward<UserGroupIdsToAddT>(value); }
    template<typename UserGroupIdsToAddT = Aws::Vector<Aws::String>>
    UserGroupsUpdateStatus& WithUserGroupIdsToAdd(UserGroupIdsToAddT&& value) { SetUserGroupIdsToAdd(std::forward<UserGroupIdsToAddT>(value)); return *this;}
    template<typename UserGroupIdsToAddT = Aws::String>
    UserGroupsUpdateStatus& AddUserGroupIdsToAdd(UserGroupIdsToAddT&& value) { m_userGroupIdsToAddHasBeenSet = true; m_userGroupIdsToAdd.emplace_back(std::forward<UserGroupIdsToAddT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The ID of the user group to remove.</p>
     */
    inline const Aws::Vector<Aws::String>& GetUserGroupIdsToRemove() const { return m_userGroupIdsToRemove; }
    inline bool UserGroupIdsToRemoveHasBeenSet() const { return m_userGroupIdsToRemoveHasBeenSet; }
    template<typename UserGroupIdsToRemoveT = Aws::Vector<Aws::String>>
    void SetUserGroupIdsToRemove(UserGroupIdsToRemoveT&& value) { m_userGroupIdsToRemoveHasBeenSet = true; m_userGroupIdsToRemove = std::forward<UserGroupIdsToRemoveT>(value); }
    template<typename UserGroupIdsToRemoveT = Aws::Vector<Aws::String>>
    UserGroupsUpdateStatus& WithUserGroupIdsToRemove(UserGroupIdsToRemoveT&& value) { SetUserGroupIdsToRemove(std::forward<UserGroupIdsToRemoveT>(value)); return *this;}
    template<typename UserGroupIdsToRemoveT = Aws::String>
    UserGroupsUpdateStatus& AddUserGroupIdsToRemove(UserGroupIdsToRemoveT&& value) { m_userGroupIdsToRemoveHasBeenSet = true; m_userGroupIdsToRemove.emplace_back(std::forward<UserGroupIdsToRemoveT>(value)); return *this; }
    ///@}
  private:

    Aws::Vector<Aws::String> m_userGroupIdsToAdd;
    bool m_userGroupIdsToAddHasBeenSet = false;

    Aws::Vector<Aws::String> m_userGroupIdsToRemove;
    bool m_userGroupIdsToRemoveHasBeenSet = false;
  };

} // namespace Model
} // namespace ElastiCache
} // namespace Aws
