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
    AWS_FSX_API DescribeBackupsRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeBackups"; }

    AWS_FSX_API Aws::String SerializePayload() const override;

    AWS_FSX_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The IDs of the backups that you want to retrieve. This parameter value
     * overrides any filters. If any IDs aren't found, a <code>BackupNotFound</code>
     * error occurs.</p>
     */
    inline const Aws::Vector<Aws::String>& GetBackupIds() const { return m_backupIds; }
    inline bool BackupIdsHasBeenSet() const { return m_backupIdsHasBeenSet; }
    template<typename BackupIdsT = Aws::Vector<Aws::String>>
    void SetBackupIds(BackupIdsT&& value) { m_backupIdsHasBeenSet = true; m_backupIds = std::forward<BackupIdsT>(value); }
    template<typename BackupIdsT = Aws::Vector<Aws::String>>
    DescribeBackupsRequest& WithBackupIds(BackupIdsT&& value) { SetBackupIds(std::forward<BackupIdsT>(value)); return *this;}
    template<typename BackupIdsT = Aws::String>
    DescribeBackupsRequest& AddBackupIds(BackupIdsT&& value) { m_backupIdsHasBeenSet = true; m_backupIds.emplace_back(std::forward<BackupIdsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The filters structure. The supported names are <code>file-system-id</code>,
     * <code>backup-type</code>, <code>file-system-type</code>, and
     * <code>volume-id</code>.</p>
     */
    inline const Aws::Vector<Filter>& GetFilters() const { return m_filters; }
    inline bool FiltersHasBeenSet() const { return m_filtersHasBeenSet; }
    template<typename FiltersT = Aws::Vector<Filter>>
    void SetFilters(FiltersT&& value) { m_filtersHasBeenSet = true; m_filters = std::forward<FiltersT>(value); }
    template<typename FiltersT = Aws::Vector<Filter>>
    DescribeBackupsRequest& WithFilters(FiltersT&& value) { SetFilters(std::forward<FiltersT>(value)); return *this;}
    template<typename FiltersT = Filter>
    DescribeBackupsRequest& AddFilters(FiltersT&& value) { m_filtersHasBeenSet = true; m_filters.emplace_back(std::forward<FiltersT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Maximum number of backups to return in the response. This parameter value
     * must be greater than 0. The number of items that Amazon FSx returns is the
     * minimum of the <code>MaxResults</code> parameter specified in the request and
     * the service's internal maximum number of items per page.</p>
     */
    inline int GetMaxResults() const { return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline DescribeBackupsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An opaque pagination token returned from a previous
     * <code>DescribeBackups</code> operation. If a token is present, the operation
     * continues the list from where the returning call left off.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    DescribeBackupsRequest& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<Aws::String> m_backupIds;
    bool m_backupIdsHasBeenSet = false;

    Aws::Vector<Filter> m_filters;
    bool m_filtersHasBeenSet = false;

    int m_maxResults{0};
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace FSx
} // namespace Aws
