﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/backup/Backup_EXPORTS.h>
#include <aws/backup/BackupRequest.h>
#include <aws/backup/model/VaultType.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace Backup
{
namespace Model
{

  /**
   */
  class ListBackupVaultsRequest : public BackupRequest
  {
  public:
    AWS_BACKUP_API ListBackupVaultsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListBackupVaults"; }

    AWS_BACKUP_API Aws::String SerializePayload() const override;

    AWS_BACKUP_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    ///@{
    /**
     * <p>This parameter will sort the list of vaults by vault type.</p>
     */
    inline const VaultType& GetByVaultType() const{ return m_byVaultType; }
    inline bool ByVaultTypeHasBeenSet() const { return m_byVaultTypeHasBeenSet; }
    inline void SetByVaultType(const VaultType& value) { m_byVaultTypeHasBeenSet = true; m_byVaultType = value; }
    inline void SetByVaultType(VaultType&& value) { m_byVaultTypeHasBeenSet = true; m_byVaultType = std::move(value); }
    inline ListBackupVaultsRequest& WithByVaultType(const VaultType& value) { SetByVaultType(value); return *this;}
    inline ListBackupVaultsRequest& WithByVaultType(VaultType&& value) { SetByVaultType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>This parameter will sort the list of vaults by shared vaults.</p>
     */
    inline bool GetByShared() const{ return m_byShared; }
    inline bool BySharedHasBeenSet() const { return m_bySharedHasBeenSet; }
    inline void SetByShared(bool value) { m_bySharedHasBeenSet = true; m_byShared = value; }
    inline ListBackupVaultsRequest& WithByShared(bool value) { SetByShared(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The next item following a partial list of returned items. For example, if a
     * request is made to return <code>MaxResults</code> number of items,
     * <code>NextToken</code> allows you to return more items in your list starting at
     * the location pointed to by the next token.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }
    inline ListBackupVaultsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListBackupVaultsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListBackupVaultsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of items to be returned.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline ListBackupVaultsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}
  private:

    VaultType m_byVaultType;
    bool m_byVaultTypeHasBeenSet = false;

    bool m_byShared;
    bool m_bySharedHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;
  };

} // namespace Model
} // namespace Backup
} // namespace Aws
