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
    AWS_ELASTICACHE_API UserGroupPendingChanges();
    AWS_ELASTICACHE_API UserGroupPendingChanges(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_ELASTICACHE_API UserGroupPendingChanges& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_ELASTICACHE_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_ELASTICACHE_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The list of user IDs to remove.</p>
     */
    inline const Aws::Vector<Aws::String>& GetUserIdsToRemove() const{ return m_userIdsToRemove; }

    /**
     * <p>The list of user IDs to remove.</p>
     */
    inline bool UserIdsToRemoveHasBeenSet() const { return m_userIdsToRemoveHasBeenSet; }

    /**
     * <p>The list of user IDs to remove.</p>
     */
    inline void SetUserIdsToRemove(const Aws::Vector<Aws::String>& value) { m_userIdsToRemoveHasBeenSet = true; m_userIdsToRemove = value; }

    /**
     * <p>The list of user IDs to remove.</p>
     */
    inline void SetUserIdsToRemove(Aws::Vector<Aws::String>&& value) { m_userIdsToRemoveHasBeenSet = true; m_userIdsToRemove = std::move(value); }

    /**
     * <p>The list of user IDs to remove.</p>
     */
    inline UserGroupPendingChanges& WithUserIdsToRemove(const Aws::Vector<Aws::String>& value) { SetUserIdsToRemove(value); return *this;}

    /**
     * <p>The list of user IDs to remove.</p>
     */
    inline UserGroupPendingChanges& WithUserIdsToRemove(Aws::Vector<Aws::String>&& value) { SetUserIdsToRemove(std::move(value)); return *this;}

    /**
     * <p>The list of user IDs to remove.</p>
     */
    inline UserGroupPendingChanges& AddUserIdsToRemove(const Aws::String& value) { m_userIdsToRemoveHasBeenSet = true; m_userIdsToRemove.push_back(value); return *this; }

    /**
     * <p>The list of user IDs to remove.</p>
     */
    inline UserGroupPendingChanges& AddUserIdsToRemove(Aws::String&& value) { m_userIdsToRemoveHasBeenSet = true; m_userIdsToRemove.push_back(std::move(value)); return *this; }

    /**
     * <p>The list of user IDs to remove.</p>
     */
    inline UserGroupPendingChanges& AddUserIdsToRemove(const char* value) { m_userIdsToRemoveHasBeenSet = true; m_userIdsToRemove.push_back(value); return *this; }


    /**
     * <p>The list of user IDs to add.</p>
     */
    inline const Aws::Vector<Aws::String>& GetUserIdsToAdd() const{ return m_userIdsToAdd; }

    /**
     * <p>The list of user IDs to add.</p>
     */
    inline bool UserIdsToAddHasBeenSet() const { return m_userIdsToAddHasBeenSet; }

    /**
     * <p>The list of user IDs to add.</p>
     */
    inline void SetUserIdsToAdd(const Aws::Vector<Aws::String>& value) { m_userIdsToAddHasBeenSet = true; m_userIdsToAdd = value; }

    /**
     * <p>The list of user IDs to add.</p>
     */
    inline void SetUserIdsToAdd(Aws::Vector<Aws::String>&& value) { m_userIdsToAddHasBeenSet = true; m_userIdsToAdd = std::move(value); }

    /**
     * <p>The list of user IDs to add.</p>
     */
    inline UserGroupPendingChanges& WithUserIdsToAdd(const Aws::Vector<Aws::String>& value) { SetUserIdsToAdd(value); return *this;}

    /**
     * <p>The list of user IDs to add.</p>
     */
    inline UserGroupPendingChanges& WithUserIdsToAdd(Aws::Vector<Aws::String>&& value) { SetUserIdsToAdd(std::move(value)); return *this;}

    /**
     * <p>The list of user IDs to add.</p>
     */
    inline UserGroupPendingChanges& AddUserIdsToAdd(const Aws::String& value) { m_userIdsToAddHasBeenSet = true; m_userIdsToAdd.push_back(value); return *this; }

    /**
     * <p>The list of user IDs to add.</p>
     */
    inline UserGroupPendingChanges& AddUserIdsToAdd(Aws::String&& value) { m_userIdsToAddHasBeenSet = true; m_userIdsToAdd.push_back(std::move(value)); return *this; }

    /**
     * <p>The list of user IDs to add.</p>
     */
    inline UserGroupPendingChanges& AddUserIdsToAdd(const char* value) { m_userIdsToAddHasBeenSet = true; m_userIdsToAdd.push_back(value); return *this; }

  private:

    Aws::Vector<Aws::String> m_userIdsToRemove;
    bool m_userIdsToRemoveHasBeenSet = false;

    Aws::Vector<Aws::String> m_userIdsToAdd;
    bool m_userIdsToAddHasBeenSet = false;
  };

} // namespace Model
} // namespace ElastiCache
} // namespace Aws
