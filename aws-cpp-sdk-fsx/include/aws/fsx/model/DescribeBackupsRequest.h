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
   * <p>The request object for <code>DescribeBackups</code> operation.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/fsx-2018-03-01/DescribeBackupsRequest">AWS
   * API Reference</a></p>
   */
  class AWS_FSX_API DescribeBackupsRequest : public FSxRequest
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
     * <p>(Optional) IDs of the backups you want to retrieve (String). This overrides
     * any filters. If any IDs are not found, BackupNotFound will be thrown.</p>
     */
    inline const Aws::Vector<Aws::String>& GetBackupIds() const{ return m_backupIds; }

    /**
     * <p>(Optional) IDs of the backups you want to retrieve (String). This overrides
     * any filters. If any IDs are not found, BackupNotFound will be thrown.</p>
     */
    inline bool BackupIdsHasBeenSet() const { return m_backupIdsHasBeenSet; }

    /**
     * <p>(Optional) IDs of the backups you want to retrieve (String). This overrides
     * any filters. If any IDs are not found, BackupNotFound will be thrown.</p>
     */
    inline void SetBackupIds(const Aws::Vector<Aws::String>& value) { m_backupIdsHasBeenSet = true; m_backupIds = value; }

    /**
     * <p>(Optional) IDs of the backups you want to retrieve (String). This overrides
     * any filters. If any IDs are not found, BackupNotFound will be thrown.</p>
     */
    inline void SetBackupIds(Aws::Vector<Aws::String>&& value) { m_backupIdsHasBeenSet = true; m_backupIds = std::move(value); }

    /**
     * <p>(Optional) IDs of the backups you want to retrieve (String). This overrides
     * any filters. If any IDs are not found, BackupNotFound will be thrown.</p>
     */
    inline DescribeBackupsRequest& WithBackupIds(const Aws::Vector<Aws::String>& value) { SetBackupIds(value); return *this;}

    /**
     * <p>(Optional) IDs of the backups you want to retrieve (String). This overrides
     * any filters. If any IDs are not found, BackupNotFound will be thrown.</p>
     */
    inline DescribeBackupsRequest& WithBackupIds(Aws::Vector<Aws::String>&& value) { SetBackupIds(std::move(value)); return *this;}

    /**
     * <p>(Optional) IDs of the backups you want to retrieve (String). This overrides
     * any filters. If any IDs are not found, BackupNotFound will be thrown.</p>
     */
    inline DescribeBackupsRequest& AddBackupIds(const Aws::String& value) { m_backupIdsHasBeenSet = true; m_backupIds.push_back(value); return *this; }

    /**
     * <p>(Optional) IDs of the backups you want to retrieve (String). This overrides
     * any filters. If any IDs are not found, BackupNotFound will be thrown.</p>
     */
    inline DescribeBackupsRequest& AddBackupIds(Aws::String&& value) { m_backupIdsHasBeenSet = true; m_backupIds.push_back(std::move(value)); return *this; }

    /**
     * <p>(Optional) IDs of the backups you want to retrieve (String). This overrides
     * any filters. If any IDs are not found, BackupNotFound will be thrown.</p>
     */
    inline DescribeBackupsRequest& AddBackupIds(const char* value) { m_backupIdsHasBeenSet = true; m_backupIds.push_back(value); return *this; }


    /**
     * <p>(Optional) Filters structure. Supported names are file-system-id and
     * backup-type.</p>
     */
    inline const Aws::Vector<Filter>& GetFilters() const{ return m_filters; }

    /**
     * <p>(Optional) Filters structure. Supported names are file-system-id and
     * backup-type.</p>
     */
    inline bool FiltersHasBeenSet() const { return m_filtersHasBeenSet; }

    /**
     * <p>(Optional) Filters structure. Supported names are file-system-id and
     * backup-type.</p>
     */
    inline void SetFilters(const Aws::Vector<Filter>& value) { m_filtersHasBeenSet = true; m_filters = value; }

    /**
     * <p>(Optional) Filters structure. Supported names are file-system-id and
     * backup-type.</p>
     */
    inline void SetFilters(Aws::Vector<Filter>&& value) { m_filtersHasBeenSet = true; m_filters = std::move(value); }

    /**
     * <p>(Optional) Filters structure. Supported names are file-system-id and
     * backup-type.</p>
     */
    inline DescribeBackupsRequest& WithFilters(const Aws::Vector<Filter>& value) { SetFilters(value); return *this;}

    /**
     * <p>(Optional) Filters structure. Supported names are file-system-id and
     * backup-type.</p>
     */
    inline DescribeBackupsRequest& WithFilters(Aws::Vector<Filter>&& value) { SetFilters(std::move(value)); return *this;}

    /**
     * <p>(Optional) Filters structure. Supported names are file-system-id and
     * backup-type.</p>
     */
    inline DescribeBackupsRequest& AddFilters(const Filter& value) { m_filtersHasBeenSet = true; m_filters.push_back(value); return *this; }

    /**
     * <p>(Optional) Filters structure. Supported names are file-system-id and
     * backup-type.</p>
     */
    inline DescribeBackupsRequest& AddFilters(Filter&& value) { m_filtersHasBeenSet = true; m_filters.push_back(std::move(value)); return *this; }


    /**
     * <p>(Optional) Maximum number of backups to return in the response (integer).
     * This parameter value must be greater than 0. The number of items that Amazon FSx
     * returns is the minimum of the <code>MaxResults</code> parameter specified in the
     * request and the service's internal maximum number of items per page.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>(Optional) Maximum number of backups to return in the response (integer).
     * This parameter value must be greater than 0. The number of items that Amazon FSx
     * returns is the minimum of the <code>MaxResults</code> parameter specified in the
     * request and the service's internal maximum number of items per page.</p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>(Optional) Maximum number of backups to return in the response (integer).
     * This parameter value must be greater than 0. The number of items that Amazon FSx
     * returns is the minimum of the <code>MaxResults</code> parameter specified in the
     * request and the service's internal maximum number of items per page.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>(Optional) Maximum number of backups to return in the response (integer).
     * This parameter value must be greater than 0. The number of items that Amazon FSx
     * returns is the minimum of the <code>MaxResults</code> parameter specified in the
     * request and the service's internal maximum number of items per page.</p>
     */
    inline DescribeBackupsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}


    /**
     * <p>(Optional) Opaque pagination token returned from a previous
     * <code>DescribeBackups</code> operation (String). If a token present, the action
     * continues the list from where the returning call left off.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>(Optional) Opaque pagination token returned from a previous
     * <code>DescribeBackups</code> operation (String). If a token present, the action
     * continues the list from where the returning call left off.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>(Optional) Opaque pagination token returned from a previous
     * <code>DescribeBackups</code> operation (String). If a token present, the action
     * continues the list from where the returning call left off.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>(Optional) Opaque pagination token returned from a previous
     * <code>DescribeBackups</code> operation (String). If a token present, the action
     * continues the list from where the returning call left off.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>(Optional) Opaque pagination token returned from a previous
     * <code>DescribeBackups</code> operation (String). If a token present, the action
     * continues the list from where the returning call left off.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>(Optional) Opaque pagination token returned from a previous
     * <code>DescribeBackups</code> operation (String). If a token present, the action
     * continues the list from where the returning call left off.</p>
     */
    inline DescribeBackupsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>(Optional) Opaque pagination token returned from a previous
     * <code>DescribeBackups</code> operation (String). If a token present, the action
     * continues the list from where the returning call left off.</p>
     */
    inline DescribeBackupsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>(Optional) Opaque pagination token returned from a previous
     * <code>DescribeBackups</code> operation (String). If a token present, the action
     * continues the list from where the returning call left off.</p>
     */
    inline DescribeBackupsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<Aws::String> m_backupIds;
    bool m_backupIdsHasBeenSet;

    Aws::Vector<Filter> m_filters;
    bool m_filtersHasBeenSet;

    int m_maxResults;
    bool m_maxResultsHasBeenSet;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet;
  };

} // namespace Model
} // namespace FSx
} // namespace Aws
