/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/EC2Request.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ec2/model/AddPrefixListEntry.h>
#include <aws/ec2/model/RemovePrefixListEntry.h>
#include <utility>

namespace Aws
{
namespace EC2
{
namespace Model
{

  /**
   */
  class ModifyManagedPrefixListRequest : public EC2Request
  {
  public:
    AWS_EC2_API ModifyManagedPrefixListRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ModifyManagedPrefixList"; }

    AWS_EC2_API Aws::String SerializePayload() const override;

  protected:
    AWS_EC2_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>Checks whether you have the required permissions for the action, without
     * actually making the request, and provides an error response. If you have the
     * required permissions, the error response is <code>DryRunOperation</code>.
     * Otherwise, it is <code>UnauthorizedOperation</code>.</p>
     */
    inline bool GetDryRun() const{ return m_dryRun; }

    /**
     * <p>Checks whether you have the required permissions for the action, without
     * actually making the request, and provides an error response. If you have the
     * required permissions, the error response is <code>DryRunOperation</code>.
     * Otherwise, it is <code>UnauthorizedOperation</code>.</p>
     */
    inline bool DryRunHasBeenSet() const { return m_dryRunHasBeenSet; }

    /**
     * <p>Checks whether you have the required permissions for the action, without
     * actually making the request, and provides an error response. If you have the
     * required permissions, the error response is <code>DryRunOperation</code>.
     * Otherwise, it is <code>UnauthorizedOperation</code>.</p>
     */
    inline void SetDryRun(bool value) { m_dryRunHasBeenSet = true; m_dryRun = value; }

    /**
     * <p>Checks whether you have the required permissions for the action, without
     * actually making the request, and provides an error response. If you have the
     * required permissions, the error response is <code>DryRunOperation</code>.
     * Otherwise, it is <code>UnauthorizedOperation</code>.</p>
     */
    inline ModifyManagedPrefixListRequest& WithDryRun(bool value) { SetDryRun(value); return *this;}


    /**
     * <p>The ID of the prefix list.</p>
     */
    inline const Aws::String& GetPrefixListId() const{ return m_prefixListId; }

    /**
     * <p>The ID of the prefix list.</p>
     */
    inline bool PrefixListIdHasBeenSet() const { return m_prefixListIdHasBeenSet; }

    /**
     * <p>The ID of the prefix list.</p>
     */
    inline void SetPrefixListId(const Aws::String& value) { m_prefixListIdHasBeenSet = true; m_prefixListId = value; }

    /**
     * <p>The ID of the prefix list.</p>
     */
    inline void SetPrefixListId(Aws::String&& value) { m_prefixListIdHasBeenSet = true; m_prefixListId = std::move(value); }

    /**
     * <p>The ID of the prefix list.</p>
     */
    inline void SetPrefixListId(const char* value) { m_prefixListIdHasBeenSet = true; m_prefixListId.assign(value); }

    /**
     * <p>The ID of the prefix list.</p>
     */
    inline ModifyManagedPrefixListRequest& WithPrefixListId(const Aws::String& value) { SetPrefixListId(value); return *this;}

    /**
     * <p>The ID of the prefix list.</p>
     */
    inline ModifyManagedPrefixListRequest& WithPrefixListId(Aws::String&& value) { SetPrefixListId(std::move(value)); return *this;}

    /**
     * <p>The ID of the prefix list.</p>
     */
    inline ModifyManagedPrefixListRequest& WithPrefixListId(const char* value) { SetPrefixListId(value); return *this;}


    /**
     * <p>The current version of the prefix list.</p>
     */
    inline long long GetCurrentVersion() const{ return m_currentVersion; }

    /**
     * <p>The current version of the prefix list.</p>
     */
    inline bool CurrentVersionHasBeenSet() const { return m_currentVersionHasBeenSet; }

    /**
     * <p>The current version of the prefix list.</p>
     */
    inline void SetCurrentVersion(long long value) { m_currentVersionHasBeenSet = true; m_currentVersion = value; }

    /**
     * <p>The current version of the prefix list.</p>
     */
    inline ModifyManagedPrefixListRequest& WithCurrentVersion(long long value) { SetCurrentVersion(value); return *this;}


    /**
     * <p>A name for the prefix list.</p>
     */
    inline const Aws::String& GetPrefixListName() const{ return m_prefixListName; }

    /**
     * <p>A name for the prefix list.</p>
     */
    inline bool PrefixListNameHasBeenSet() const { return m_prefixListNameHasBeenSet; }

    /**
     * <p>A name for the prefix list.</p>
     */
    inline void SetPrefixListName(const Aws::String& value) { m_prefixListNameHasBeenSet = true; m_prefixListName = value; }

    /**
     * <p>A name for the prefix list.</p>
     */
    inline void SetPrefixListName(Aws::String&& value) { m_prefixListNameHasBeenSet = true; m_prefixListName = std::move(value); }

    /**
     * <p>A name for the prefix list.</p>
     */
    inline void SetPrefixListName(const char* value) { m_prefixListNameHasBeenSet = true; m_prefixListName.assign(value); }

    /**
     * <p>A name for the prefix list.</p>
     */
    inline ModifyManagedPrefixListRequest& WithPrefixListName(const Aws::String& value) { SetPrefixListName(value); return *this;}

    /**
     * <p>A name for the prefix list.</p>
     */
    inline ModifyManagedPrefixListRequest& WithPrefixListName(Aws::String&& value) { SetPrefixListName(std::move(value)); return *this;}

    /**
     * <p>A name for the prefix list.</p>
     */
    inline ModifyManagedPrefixListRequest& WithPrefixListName(const char* value) { SetPrefixListName(value); return *this;}


    /**
     * <p>One or more entries to add to the prefix list.</p>
     */
    inline const Aws::Vector<AddPrefixListEntry>& GetAddEntries() const{ return m_addEntries; }

    /**
     * <p>One or more entries to add to the prefix list.</p>
     */
    inline bool AddEntriesHasBeenSet() const { return m_addEntriesHasBeenSet; }

    /**
     * <p>One or more entries to add to the prefix list.</p>
     */
    inline void SetAddEntries(const Aws::Vector<AddPrefixListEntry>& value) { m_addEntriesHasBeenSet = true; m_addEntries = value; }

    /**
     * <p>One or more entries to add to the prefix list.</p>
     */
    inline void SetAddEntries(Aws::Vector<AddPrefixListEntry>&& value) { m_addEntriesHasBeenSet = true; m_addEntries = std::move(value); }

    /**
     * <p>One or more entries to add to the prefix list.</p>
     */
    inline ModifyManagedPrefixListRequest& WithAddEntries(const Aws::Vector<AddPrefixListEntry>& value) { SetAddEntries(value); return *this;}

    /**
     * <p>One or more entries to add to the prefix list.</p>
     */
    inline ModifyManagedPrefixListRequest& WithAddEntries(Aws::Vector<AddPrefixListEntry>&& value) { SetAddEntries(std::move(value)); return *this;}

    /**
     * <p>One or more entries to add to the prefix list.</p>
     */
    inline ModifyManagedPrefixListRequest& AddAddEntries(const AddPrefixListEntry& value) { m_addEntriesHasBeenSet = true; m_addEntries.push_back(value); return *this; }

    /**
     * <p>One or more entries to add to the prefix list.</p>
     */
    inline ModifyManagedPrefixListRequest& AddAddEntries(AddPrefixListEntry&& value) { m_addEntriesHasBeenSet = true; m_addEntries.push_back(std::move(value)); return *this; }


    /**
     * <p>One or more entries to remove from the prefix list.</p>
     */
    inline const Aws::Vector<RemovePrefixListEntry>& GetRemoveEntries() const{ return m_removeEntries; }

    /**
     * <p>One or more entries to remove from the prefix list.</p>
     */
    inline bool RemoveEntriesHasBeenSet() const { return m_removeEntriesHasBeenSet; }

    /**
     * <p>One or more entries to remove from the prefix list.</p>
     */
    inline void SetRemoveEntries(const Aws::Vector<RemovePrefixListEntry>& value) { m_removeEntriesHasBeenSet = true; m_removeEntries = value; }

    /**
     * <p>One or more entries to remove from the prefix list.</p>
     */
    inline void SetRemoveEntries(Aws::Vector<RemovePrefixListEntry>&& value) { m_removeEntriesHasBeenSet = true; m_removeEntries = std::move(value); }

    /**
     * <p>One or more entries to remove from the prefix list.</p>
     */
    inline ModifyManagedPrefixListRequest& WithRemoveEntries(const Aws::Vector<RemovePrefixListEntry>& value) { SetRemoveEntries(value); return *this;}

    /**
     * <p>One or more entries to remove from the prefix list.</p>
     */
    inline ModifyManagedPrefixListRequest& WithRemoveEntries(Aws::Vector<RemovePrefixListEntry>&& value) { SetRemoveEntries(std::move(value)); return *this;}

    /**
     * <p>One or more entries to remove from the prefix list.</p>
     */
    inline ModifyManagedPrefixListRequest& AddRemoveEntries(const RemovePrefixListEntry& value) { m_removeEntriesHasBeenSet = true; m_removeEntries.push_back(value); return *this; }

    /**
     * <p>One or more entries to remove from the prefix list.</p>
     */
    inline ModifyManagedPrefixListRequest& AddRemoveEntries(RemovePrefixListEntry&& value) { m_removeEntriesHasBeenSet = true; m_removeEntries.push_back(std::move(value)); return *this; }


    /**
     * <p>The maximum number of entries for the prefix list. You cannot modify the
     * entries of a prefix list and modify the size of a prefix list at the same
     * time.</p> <p>If any of the resources that reference the prefix list cannot
     * support the new maximum size, the modify operation fails. Check the state
     * message for the IDs of the first ten resources that do not support the new
     * maximum size.</p>
     */
    inline int GetMaxEntries() const{ return m_maxEntries; }

    /**
     * <p>The maximum number of entries for the prefix list. You cannot modify the
     * entries of a prefix list and modify the size of a prefix list at the same
     * time.</p> <p>If any of the resources that reference the prefix list cannot
     * support the new maximum size, the modify operation fails. Check the state
     * message for the IDs of the first ten resources that do not support the new
     * maximum size.</p>
     */
    inline bool MaxEntriesHasBeenSet() const { return m_maxEntriesHasBeenSet; }

    /**
     * <p>The maximum number of entries for the prefix list. You cannot modify the
     * entries of a prefix list and modify the size of a prefix list at the same
     * time.</p> <p>If any of the resources that reference the prefix list cannot
     * support the new maximum size, the modify operation fails. Check the state
     * message for the IDs of the first ten resources that do not support the new
     * maximum size.</p>
     */
    inline void SetMaxEntries(int value) { m_maxEntriesHasBeenSet = true; m_maxEntries = value; }

    /**
     * <p>The maximum number of entries for the prefix list. You cannot modify the
     * entries of a prefix list and modify the size of a prefix list at the same
     * time.</p> <p>If any of the resources that reference the prefix list cannot
     * support the new maximum size, the modify operation fails. Check the state
     * message for the IDs of the first ten resources that do not support the new
     * maximum size.</p>
     */
    inline ModifyManagedPrefixListRequest& WithMaxEntries(int value) { SetMaxEntries(value); return *this;}

  private:

    bool m_dryRun;
    bool m_dryRunHasBeenSet = false;

    Aws::String m_prefixListId;
    bool m_prefixListIdHasBeenSet = false;

    long long m_currentVersion;
    bool m_currentVersionHasBeenSet = false;

    Aws::String m_prefixListName;
    bool m_prefixListNameHasBeenSet = false;

    Aws::Vector<AddPrefixListEntry> m_addEntries;
    bool m_addEntriesHasBeenSet = false;

    Aws::Vector<RemovePrefixListEntry> m_removeEntries;
    bool m_removeEntriesHasBeenSet = false;

    int m_maxEntries;
    bool m_maxEntriesHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
