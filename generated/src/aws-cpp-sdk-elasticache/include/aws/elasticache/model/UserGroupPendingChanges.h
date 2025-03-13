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
   * <p>Returns the updates being applied to the user group.</p><p><h3>See Also:</h3>
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/elasticache-2015-02-02/UserGroupPendingChanges">AWS
   * API Reference</a></p>
   */
  class UserGroupPendingChanges
  {
  public:
    AWS_ELASTICACHE_API UserGroupPendingChanges() = default;
    AWS_ELASTICACHE_API UserGroupPendingChanges(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_ELASTICACHE_API UserGroupPendingChanges& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_ELASTICACHE_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_ELASTICACHE_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The list of user IDs to remove.</p>
     */
    inline const Aws::Vector<Aws::String>& GetUserIdsToRemove() const { return m_userIdsToRemove; }
    inline bool UserIdsToRemoveHasBeenSet() const { return m_userIdsToRemoveHasBeenSet; }
    template<typename UserIdsToRemoveT = Aws::Vector<Aws::String>>
    void SetUserIdsToRemove(UserIdsToRemoveT&& value) { m_userIdsToRemoveHasBeenSet = true; m_userIdsToRemove = std::forward<UserIdsToRemoveT>(value); }
    template<typename UserIdsToRemoveT = Aws::Vector<Aws::String>>
    UserGroupPendingChanges& WithUserIdsToRemove(UserIdsToRemoveT&& value) { SetUserIdsToRemove(std::forward<UserIdsToRemoveT>(value)); return *this;}
    template<typename UserIdsToRemoveT = Aws::String>
    UserGroupPendingChanges& AddUserIdsToRemove(UserIdsToRemoveT&& value) { m_userIdsToRemoveHasBeenSet = true; m_userIdsToRemove.emplace_back(std::forward<UserIdsToRemoveT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The list of user IDs to add.</p>
     */
    inline const Aws::Vector<Aws::String>& GetUserIdsToAdd() const { return m_userIdsToAdd; }
    inline bool UserIdsToAddHasBeenSet() const { return m_userIdsToAddHasBeenSet; }
    template<typename UserIdsToAddT = Aws::Vector<Aws::String>>
    void SetUserIdsToAdd(UserIdsToAddT&& value) { m_userIdsToAddHasBeenSet = true; m_userIdsToAdd = std::forward<UserIdsToAddT>(value); }
    template<typename UserIdsToAddT = Aws::Vector<Aws::String>>
    UserGroupPendingChanges& WithUserIdsToAdd(UserIdsToAddT&& value) { SetUserIdsToAdd(std::forward<UserIdsToAddT>(value)); return *this;}
    template<typename UserIdsToAddT = Aws::String>
    UserGroupPendingChanges& AddUserIdsToAdd(UserIdsToAddT&& value) { m_userIdsToAddHasBeenSet = true; m_userIdsToAdd.emplace_back(std::forward<UserIdsToAddT>(value)); return *this; }
    ///@}
  private:

    Aws::Vector<Aws::String> m_userIdsToRemove;
    bool m_userIdsToRemoveHasBeenSet = false;

    Aws::Vector<Aws::String> m_userIdsToAdd;
    bool m_userIdsToAddHasBeenSet = false;
  };

} // namespace Model
} // namespace ElastiCache
} // namespace Aws
