/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/fsx/FSx_EXPORTS.h>
#include <aws/fsx/FSxRequest.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/fsx/model/Filter.h>
#include <utility>

namespace Aws
{
namespace FSx
{
namespace Model
{

  /**
   * <p>The request object for the <code>DescribeBackups</code>
   * operation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/fsx-2018-03-01/DescribeBackupsRequest">AWS
   * API Reference</a></p>
   */
  class DescribeBackupsRequest : public FSxRequest
  {
  public:
    AWS_FSX_API DescribeBackupsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeBackups"; }

    AWS_FSX_API Aws::String SerializePayload() const override;

    AWS_FSX_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The IDs of the backups that you want to retrieve. This parameter value
     * overrides any filters. If any IDs aren't found, a <code>BackupNotFound</code>
     * error occurs.</p>
     */
    inline const Aws::Vector<Aws::String>& GetBackupIds() const{ return m_backupIds; }

    /**
     * <p>The IDs of the backups that you want to retrieve. This parameter value
     * overrides any filters. If any IDs aren't found, a <code>BackupNotFound</code>
     * error occurs.</p>
     */
    inline bool BackupIdsHasBeenSet() const { return m_backupIdsHasBeenSet; }

    /**
     * <p>The IDs of the backups that you want to retrieve. This parameter value
     * overrides any filters. If any IDs aren't found, a <code>BackupNotFound</code>
     * error occurs.</p>
     */
    inline void SetBackupIds(const Aws::Vector<Aws::String>& value) { m_backupIdsHasBeenSet = true; m_backupIds = value; }

    /**
     * <p>The IDs of the backups that you want to retrieve. This parameter value
     * overrides any filters. If any IDs aren't found, a <code>BackupNotFound</code>
     * error occurs.</p>
     */
    inline void SetBackupIds(Aws::Vector<Aws::String>&& value) { m_backupIdsHasBeenSet = true; m_backupIds = std::move(value); }

    /**
     * <p>The IDs of the backups that you want to retrieve. This parameter value
     * overrides any filters. If any IDs aren't found, a <code>BackupNotFound</code>
     * error occurs.</p>
     */
    inline DescribeBackupsRequest& WithBackupIds(const Aws::Vector<Aws::String>& value) { SetBackupIds(value); return *this;}

    /**
     * <p>The IDs of the backups that you want to retrieve. This parameter value
     * overrides any filters. If any IDs aren't found, a <code>BackupNotFound</code>
     * error occurs.</p>
     */
    inline DescribeBackupsRequest& WithBackupIds(Aws::Vector<Aws::String>&& value) { SetBackupIds(std::move(value)); return *this;}

    /**
     * <p>The IDs of the backups that you want to retrieve. This parameter value
     * overrides any filters. If any IDs aren't found, a <code>BackupNotFound</code>
     * error occurs.</p>
     */
    inline DescribeBackupsRequest& AddBackupIds(const Aws::String& value) { m_backupIdsHasBeenSet = true; m_backupIds.push_back(value); return *this; }

    /**
     * <p>The IDs of the backups that you want to retrieve. This parameter value
     * overrides any filters. If any IDs aren't found, a <code>BackupNotFound</code>
     * error occurs.</p>
     */
    inline DescribeBackupsRequest& AddBackupIds(Aws::String&& value) { m_backupIdsHasBeenSet = true; m_backupIds.push_back(std::move(value)); return *this; }

    /**
     * <p>The IDs of the backups that you want to retrieve. This parameter value
     * overrides any filters. If any IDs aren't found, a <code>BackupNotFound</code>
     * error occurs.</p>
     */
    inline DescribeBackupsRequest& AddBackupIds(const char* value) { m_backupIdsHasBeenSet = true; m_backupIds.push_back(value); return *this; }


    /**
     * <p>The filters structure. The supported names are <code>file-system-id</code>,
     * <code>backup-type</code>, <code>file-system-type</code>, and
     * <code>volume-id</code>.</p>
     */
    inline const Aws::Vector<Filter>& GetFilters() const{ return m_filters; }

    /**
     * <p>The filters structure. The supported names are <code>file-system-id</code>,
     * <code>backup-type</code>, <code>file-system-type</code>, and
     * <code>volume-id</code>.</p>
     */
    inline bool FiltersHasBeenSet() const { return m_filtersHasBeenSet; }

    /**
     * <p>The filters structure. The supported names are <code>file-system-id</code>,
     * <code>backup-type</code>, <code>file-system-type</code>, and
     * <code>volume-id</code>.</p>
     */
    inline void SetFilters(const Aws::Vector<Filter>& value) { m_filtersHasBeenSet = true; m_filters = value; }

    /**
     * <p>The filters structure. The supported names are <code>file-system-id</code>,
     * <code>backup-type</code>, <code>file-system-type</code>, and
     * <code>volume-id</code>.</p>
     */
    inline void SetFilters(Aws::Vector<Filter>&& value) { m_filtersHasBeenSet = true; m_filters = std::move(value); }

    /**
     * <p>The filters structure. The supported names are <code>file-system-id</code>,
     * <code>backup-type</code>, <code>file-system-type</code>, and
     * <code>volume-id</code>.</p>
     */
    inline DescribeBackupsRequest& WithFilters(const Aws::Vector<Filter>& value) { SetFilters(value); return *this;}

    /**
     * <p>The filters structure. The supported names are <code>file-system-id</code>,
     * <code>backup-type</code>, <code>file-system-type</code>, and
     * <code>volume-id</code>.</p>
     */
    inline DescribeBackupsRequest& WithFilters(Aws::Vector<Filter>&& value) { SetFilters(std::move(value)); return *this;}

    /**
     * <p>The filters structure. The supported names are <code>file-system-id</code>,
     * <code>backup-type</code>, <code>file-system-type</code>, and
     * <code>volume-id</code>.</p>
     */
    inline DescribeBackupsRequest& AddFilters(const Filter& value) { m_filtersHasBeenSet = true; m_filters.push_back(value); return *this; }

    /**
     * <p>The filters structure. The supported names are <code>file-system-id</code>,
     * <code>backup-type</code>, <code>file-system-type</code>, and
     * <code>volume-id</code>.</p>
     */
    inline DescribeBackupsRequest& AddFilters(Filter&& value) { m_filtersHasBeenSet = true; m_filters.push_back(std::move(value)); return *this; }


    /**
     * <p>Maximum number of backups to return in the response. This parameter value
     * must be greater than 0. The number of items that Amazon FSx returns is the
     * minimum of the <code>MaxResults</code> parameter specified in the request and
     * the service's internal maximum number of items per page.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>Maximum number of backups to return in the response. This parameter value
     * must be greater than 0. The number of items that Amazon FSx returns is the
     * minimum of the <code>MaxResults</code> parameter specified in the request and
     * the service's internal maximum number of items per page.</p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>Maximum number of backups to return in the response. This parameter value
     * must be greater than 0. The number of items that Amazon FSx returns is the
     * minimum of the <code>MaxResults</code> parameter specified in the request and
     * the service's internal maximum number of items per page.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>Maximum number of backups to return in the response. This parameter value
     * must be greater than 0. The number of items that Amazon FSx returns is the
     * minimum of the <code>MaxResults</code> parameter specified in the request and
     * the service's internal maximum number of items per page.</p>
     */
    inline DescribeBackupsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}


    /**
     * <p>An opaque pagination token returned from a previous
     * <code>DescribeBackups</code> operation. If a token is present, the operation
     * continues the list from where the returning call left off.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>An opaque pagination token returned from a previous
     * <code>DescribeBackups</code> operation. If a token is present, the operation
     * continues the list from where the returning call left off.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>An opaque pagination token returned from a previous
     * <code>DescribeBackups</code> operation. If a token is present, the operation
     * continues the list from where the returning call left off.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>An opaque pagination token returned from a previous
     * <code>DescribeBackups</code> operation. If a token is present, the operation
     * continues the list from where the returning call left off.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>An opaque pagination token returned from a previous
     * <code>DescribeBackups</code> operation. If a token is present, the operation
     * continues the list from where the returning call left off.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>An opaque pagination token returned from a previous
     * <code>DescribeBackups</code> operation. If a token is present, the operation
     * continues the list from where the returning call left off.</p>
     */
    inline DescribeBackupsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>An opaque pagination token returned from a previous
     * <code>DescribeBackups</code> operation. If a token is present, the operation
     * continues the list from where the returning call left off.</p>
     */
    inline DescribeBackupsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>An opaque pagination token returned from a previous
     * <code>DescribeBackups</code> operation. If a token is present, the operation
     * continues the list from where the returning call left off.</p>
     */
    inline DescribeBackupsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<Aws::String> m_backupIds;
    bool m_backupIdsHasBeenSet = false;

    Aws::Vector<Filter> m_filters;
    bool m_filtersHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace FSx
} // namespace Aws
