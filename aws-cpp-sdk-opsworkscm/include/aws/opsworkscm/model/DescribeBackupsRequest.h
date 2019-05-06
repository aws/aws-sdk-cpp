/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/opsworkscm/OpsWorksCM_EXPORTS.h>
#include <aws/opsworkscm/OpsWorksCMRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace OpsWorksCM
{
namespace Model
{

  /**
   */
  class AWS_OPSWORKSCM_API DescribeBackupsRequest : public OpsWorksCMRequest
  {
  public:
    DescribeBackupsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeBackups"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>Describes a single backup. </p>
     */
    inline const Aws::String& GetBackupId() const{ return m_backupId; }

    /**
     * <p>Describes a single backup. </p>
     */
    inline bool BackupIdHasBeenSet() const { return m_backupIdHasBeenSet; }

    /**
     * <p>Describes a single backup. </p>
     */
    inline void SetBackupId(const Aws::String& value) { m_backupIdHasBeenSet = true; m_backupId = value; }

    /**
     * <p>Describes a single backup. </p>
     */
    inline void SetBackupId(Aws::String&& value) { m_backupIdHasBeenSet = true; m_backupId = std::move(value); }

    /**
     * <p>Describes a single backup. </p>
     */
    inline void SetBackupId(const char* value) { m_backupIdHasBeenSet = true; m_backupId.assign(value); }

    /**
     * <p>Describes a single backup. </p>
     */
    inline DescribeBackupsRequest& WithBackupId(const Aws::String& value) { SetBackupId(value); return *this;}

    /**
     * <p>Describes a single backup. </p>
     */
    inline DescribeBackupsRequest& WithBackupId(Aws::String&& value) { SetBackupId(std::move(value)); return *this;}

    /**
     * <p>Describes a single backup. </p>
     */
    inline DescribeBackupsRequest& WithBackupId(const char* value) { SetBackupId(value); return *this;}


    /**
     * <p>Returns backups for the server with the specified ServerName. </p>
     */
    inline const Aws::String& GetServerName() const{ return m_serverName; }

    /**
     * <p>Returns backups for the server with the specified ServerName. </p>
     */
    inline bool ServerNameHasBeenSet() const { return m_serverNameHasBeenSet; }

    /**
     * <p>Returns backups for the server with the specified ServerName. </p>
     */
    inline void SetServerName(const Aws::String& value) { m_serverNameHasBeenSet = true; m_serverName = value; }

    /**
     * <p>Returns backups for the server with the specified ServerName. </p>
     */
    inline void SetServerName(Aws::String&& value) { m_serverNameHasBeenSet = true; m_serverName = std::move(value); }

    /**
     * <p>Returns backups for the server with the specified ServerName. </p>
     */
    inline void SetServerName(const char* value) { m_serverNameHasBeenSet = true; m_serverName.assign(value); }

    /**
     * <p>Returns backups for the server with the specified ServerName. </p>
     */
    inline DescribeBackupsRequest& WithServerName(const Aws::String& value) { SetServerName(value); return *this;}

    /**
     * <p>Returns backups for the server with the specified ServerName. </p>
     */
    inline DescribeBackupsRequest& WithServerName(Aws::String&& value) { SetServerName(std::move(value)); return *this;}

    /**
     * <p>Returns backups for the server with the specified ServerName. </p>
     */
    inline DescribeBackupsRequest& WithServerName(const char* value) { SetServerName(value); return *this;}


    /**
     * <p>This is not currently implemented for <code>DescribeBackups</code>
     * requests.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>This is not currently implemented for <code>DescribeBackups</code>
     * requests.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>This is not currently implemented for <code>DescribeBackups</code>
     * requests.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>This is not currently implemented for <code>DescribeBackups</code>
     * requests.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>This is not currently implemented for <code>DescribeBackups</code>
     * requests.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>This is not currently implemented for <code>DescribeBackups</code>
     * requests.</p>
     */
    inline DescribeBackupsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>This is not currently implemented for <code>DescribeBackups</code>
     * requests.</p>
     */
    inline DescribeBackupsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>This is not currently implemented for <code>DescribeBackups</code>
     * requests.</p>
     */
    inline DescribeBackupsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>This is not currently implemented for <code>DescribeBackups</code>
     * requests.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>This is not currently implemented for <code>DescribeBackups</code>
     * requests.</p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>This is not currently implemented for <code>DescribeBackups</code>
     * requests.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>This is not currently implemented for <code>DescribeBackups</code>
     * requests.</p>
     */
    inline DescribeBackupsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}

  private:

    Aws::String m_backupId;
    bool m_backupIdHasBeenSet;

    Aws::String m_serverName;
    bool m_serverNameHasBeenSet;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet;

    int m_maxResults;
    bool m_maxResultsHasBeenSet;
  };

} // namespace Model
} // namespace OpsWorksCM
} // namespace Aws
