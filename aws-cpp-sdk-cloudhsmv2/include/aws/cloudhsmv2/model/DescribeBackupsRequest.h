/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudhsmv2/CloudHSMV2_EXPORTS.h>
#include <aws/cloudhsmv2/CloudHSMV2Request.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <utility>

namespace Aws
{
namespace CloudHSMV2
{
namespace Model
{

  /**
   */
  class DescribeBackupsRequest : public CloudHSMV2Request
  {
  public:
    AWS_CLOUDHSMV2_API DescribeBackupsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeBackups"; }

    AWS_CLOUDHSMV2_API Aws::String SerializePayload() const override;

    AWS_CLOUDHSMV2_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The <code>NextToken</code> value that you received in the previous response.
     * Use this value to get more backups.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The <code>NextToken</code> value that you received in the previous response.
     * Use this value to get more backups.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>The <code>NextToken</code> value that you received in the previous response.
     * Use this value to get more backups.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>The <code>NextToken</code> value that you received in the previous response.
     * Use this value to get more backups.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>The <code>NextToken</code> value that you received in the previous response.
     * Use this value to get more backups.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>The <code>NextToken</code> value that you received in the previous response.
     * Use this value to get more backups.</p>
     */
    inline DescribeBackupsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The <code>NextToken</code> value that you received in the previous response.
     * Use this value to get more backups.</p>
     */
    inline DescribeBackupsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The <code>NextToken</code> value that you received in the previous response.
     * Use this value to get more backups.</p>
     */
    inline DescribeBackupsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>The maximum number of backups to return in the response. When there are more
     * backups than the number you specify, the response contains a
     * <code>NextToken</code> value.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>The maximum number of backups to return in the response. When there are more
     * backups than the number you specify, the response contains a
     * <code>NextToken</code> value.</p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>The maximum number of backups to return in the response. When there are more
     * backups than the number you specify, the response contains a
     * <code>NextToken</code> value.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>The maximum number of backups to return in the response. When there are more
     * backups than the number you specify, the response contains a
     * <code>NextToken</code> value.</p>
     */
    inline DescribeBackupsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}


    /**
     * <p>One or more filters to limit the items returned in the response.</p> <p>Use
     * the <code>backupIds</code> filter to return only the specified backups. Specify
     * backups by their backup identifier (ID).</p> <p>Use the
     * <code>sourceBackupIds</code> filter to return only the backups created from a
     * source backup. The <code>sourceBackupID</code> of a source backup is returned by
     * the <a>CopyBackupToRegion</a> operation.</p> <p>Use the <code>clusterIds</code>
     * filter to return only the backups for the specified clusters. Specify clusters
     * by their cluster identifier (ID).</p> <p>Use the <code>states</code> filter to
     * return only backups that match the specified state.</p> <p>Use the
     * <code>neverExpires</code> filter to return backups filtered by the value in the
     * <code>neverExpires</code> parameter. <code>True</code> returns all backups
     * exempt from the backup retention policy. <code>False</code> returns all backups
     * with a backup retention policy defined at the cluster.</p>
     */
    inline const Aws::Map<Aws::String, Aws::Vector<Aws::String>>& GetFilters() const{ return m_filters; }

    /**
     * <p>One or more filters to limit the items returned in the response.</p> <p>Use
     * the <code>backupIds</code> filter to return only the specified backups. Specify
     * backups by their backup identifier (ID).</p> <p>Use the
     * <code>sourceBackupIds</code> filter to return only the backups created from a
     * source backup. The <code>sourceBackupID</code> of a source backup is returned by
     * the <a>CopyBackupToRegion</a> operation.</p> <p>Use the <code>clusterIds</code>
     * filter to return only the backups for the specified clusters. Specify clusters
     * by their cluster identifier (ID).</p> <p>Use the <code>states</code> filter to
     * return only backups that match the specified state.</p> <p>Use the
     * <code>neverExpires</code> filter to return backups filtered by the value in the
     * <code>neverExpires</code> parameter. <code>True</code> returns all backups
     * exempt from the backup retention policy. <code>False</code> returns all backups
     * with a backup retention policy defined at the cluster.</p>
     */
    inline bool FiltersHasBeenSet() const { return m_filtersHasBeenSet; }

    /**
     * <p>One or more filters to limit the items returned in the response.</p> <p>Use
     * the <code>backupIds</code> filter to return only the specified backups. Specify
     * backups by their backup identifier (ID).</p> <p>Use the
     * <code>sourceBackupIds</code> filter to return only the backups created from a
     * source backup. The <code>sourceBackupID</code> of a source backup is returned by
     * the <a>CopyBackupToRegion</a> operation.</p> <p>Use the <code>clusterIds</code>
     * filter to return only the backups for the specified clusters. Specify clusters
     * by their cluster identifier (ID).</p> <p>Use the <code>states</code> filter to
     * return only backups that match the specified state.</p> <p>Use the
     * <code>neverExpires</code> filter to return backups filtered by the value in the
     * <code>neverExpires</code> parameter. <code>True</code> returns all backups
     * exempt from the backup retention policy. <code>False</code> returns all backups
     * with a backup retention policy defined at the cluster.</p>
     */
    inline void SetFilters(const Aws::Map<Aws::String, Aws::Vector<Aws::String>>& value) { m_filtersHasBeenSet = true; m_filters = value; }

    /**
     * <p>One or more filters to limit the items returned in the response.</p> <p>Use
     * the <code>backupIds</code> filter to return only the specified backups. Specify
     * backups by their backup identifier (ID).</p> <p>Use the
     * <code>sourceBackupIds</code> filter to return only the backups created from a
     * source backup. The <code>sourceBackupID</code> of a source backup is returned by
     * the <a>CopyBackupToRegion</a> operation.</p> <p>Use the <code>clusterIds</code>
     * filter to return only the backups for the specified clusters. Specify clusters
     * by their cluster identifier (ID).</p> <p>Use the <code>states</code> filter to
     * return only backups that match the specified state.</p> <p>Use the
     * <code>neverExpires</code> filter to return backups filtered by the value in the
     * <code>neverExpires</code> parameter. <code>True</code> returns all backups
     * exempt from the backup retention policy. <code>False</code> returns all backups
     * with a backup retention policy defined at the cluster.</p>
     */
    inline void SetFilters(Aws::Map<Aws::String, Aws::Vector<Aws::String>>&& value) { m_filtersHasBeenSet = true; m_filters = std::move(value); }

    /**
     * <p>One or more filters to limit the items returned in the response.</p> <p>Use
     * the <code>backupIds</code> filter to return only the specified backups. Specify
     * backups by their backup identifier (ID).</p> <p>Use the
     * <code>sourceBackupIds</code> filter to return only the backups created from a
     * source backup. The <code>sourceBackupID</code> of a source backup is returned by
     * the <a>CopyBackupToRegion</a> operation.</p> <p>Use the <code>clusterIds</code>
     * filter to return only the backups for the specified clusters. Specify clusters
     * by their cluster identifier (ID).</p> <p>Use the <code>states</code> filter to
     * return only backups that match the specified state.</p> <p>Use the
     * <code>neverExpires</code> filter to return backups filtered by the value in the
     * <code>neverExpires</code> parameter. <code>True</code> returns all backups
     * exempt from the backup retention policy. <code>False</code> returns all backups
     * with a backup retention policy defined at the cluster.</p>
     */
    inline DescribeBackupsRequest& WithFilters(const Aws::Map<Aws::String, Aws::Vector<Aws::String>>& value) { SetFilters(value); return *this;}

    /**
     * <p>One or more filters to limit the items returned in the response.</p> <p>Use
     * the <code>backupIds</code> filter to return only the specified backups. Specify
     * backups by their backup identifier (ID).</p> <p>Use the
     * <code>sourceBackupIds</code> filter to return only the backups created from a
     * source backup. The <code>sourceBackupID</code> of a source backup is returned by
     * the <a>CopyBackupToRegion</a> operation.</p> <p>Use the <code>clusterIds</code>
     * filter to return only the backups for the specified clusters. Specify clusters
     * by their cluster identifier (ID).</p> <p>Use the <code>states</code> filter to
     * return only backups that match the specified state.</p> <p>Use the
     * <code>neverExpires</code> filter to return backups filtered by the value in the
     * <code>neverExpires</code> parameter. <code>True</code> returns all backups
     * exempt from the backup retention policy. <code>False</code> returns all backups
     * with a backup retention policy defined at the cluster.</p>
     */
    inline DescribeBackupsRequest& WithFilters(Aws::Map<Aws::String, Aws::Vector<Aws::String>>&& value) { SetFilters(std::move(value)); return *this;}

    /**
     * <p>One or more filters to limit the items returned in the response.</p> <p>Use
     * the <code>backupIds</code> filter to return only the specified backups. Specify
     * backups by their backup identifier (ID).</p> <p>Use the
     * <code>sourceBackupIds</code> filter to return only the backups created from a
     * source backup. The <code>sourceBackupID</code> of a source backup is returned by
     * the <a>CopyBackupToRegion</a> operation.</p> <p>Use the <code>clusterIds</code>
     * filter to return only the backups for the specified clusters. Specify clusters
     * by their cluster identifier (ID).</p> <p>Use the <code>states</code> filter to
     * return only backups that match the specified state.</p> <p>Use the
     * <code>neverExpires</code> filter to return backups filtered by the value in the
     * <code>neverExpires</code> parameter. <code>True</code> returns all backups
     * exempt from the backup retention policy. <code>False</code> returns all backups
     * with a backup retention policy defined at the cluster.</p>
     */
    inline DescribeBackupsRequest& AddFilters(const Aws::String& key, const Aws::Vector<Aws::String>& value) { m_filtersHasBeenSet = true; m_filters.emplace(key, value); return *this; }

    /**
     * <p>One or more filters to limit the items returned in the response.</p> <p>Use
     * the <code>backupIds</code> filter to return only the specified backups. Specify
     * backups by their backup identifier (ID).</p> <p>Use the
     * <code>sourceBackupIds</code> filter to return only the backups created from a
     * source backup. The <code>sourceBackupID</code> of a source backup is returned by
     * the <a>CopyBackupToRegion</a> operation.</p> <p>Use the <code>clusterIds</code>
     * filter to return only the backups for the specified clusters. Specify clusters
     * by their cluster identifier (ID).</p> <p>Use the <code>states</code> filter to
     * return only backups that match the specified state.</p> <p>Use the
     * <code>neverExpires</code> filter to return backups filtered by the value in the
     * <code>neverExpires</code> parameter. <code>True</code> returns all backups
     * exempt from the backup retention policy. <code>False</code> returns all backups
     * with a backup retention policy defined at the cluster.</p>
     */
    inline DescribeBackupsRequest& AddFilters(Aws::String&& key, const Aws::Vector<Aws::String>& value) { m_filtersHasBeenSet = true; m_filters.emplace(std::move(key), value); return *this; }

    /**
     * <p>One or more filters to limit the items returned in the response.</p> <p>Use
     * the <code>backupIds</code> filter to return only the specified backups. Specify
     * backups by their backup identifier (ID).</p> <p>Use the
     * <code>sourceBackupIds</code> filter to return only the backups created from a
     * source backup. The <code>sourceBackupID</code> of a source backup is returned by
     * the <a>CopyBackupToRegion</a> operation.</p> <p>Use the <code>clusterIds</code>
     * filter to return only the backups for the specified clusters. Specify clusters
     * by their cluster identifier (ID).</p> <p>Use the <code>states</code> filter to
     * return only backups that match the specified state.</p> <p>Use the
     * <code>neverExpires</code> filter to return backups filtered by the value in the
     * <code>neverExpires</code> parameter. <code>True</code> returns all backups
     * exempt from the backup retention policy. <code>False</code> returns all backups
     * with a backup retention policy defined at the cluster.</p>
     */
    inline DescribeBackupsRequest& AddFilters(const Aws::String& key, Aws::Vector<Aws::String>&& value) { m_filtersHasBeenSet = true; m_filters.emplace(key, std::move(value)); return *this; }

    /**
     * <p>One or more filters to limit the items returned in the response.</p> <p>Use
     * the <code>backupIds</code> filter to return only the specified backups. Specify
     * backups by their backup identifier (ID).</p> <p>Use the
     * <code>sourceBackupIds</code> filter to return only the backups created from a
     * source backup. The <code>sourceBackupID</code> of a source backup is returned by
     * the <a>CopyBackupToRegion</a> operation.</p> <p>Use the <code>clusterIds</code>
     * filter to return only the backups for the specified clusters. Specify clusters
     * by their cluster identifier (ID).</p> <p>Use the <code>states</code> filter to
     * return only backups that match the specified state.</p> <p>Use the
     * <code>neverExpires</code> filter to return backups filtered by the value in the
     * <code>neverExpires</code> parameter. <code>True</code> returns all backups
     * exempt from the backup retention policy. <code>False</code> returns all backups
     * with a backup retention policy defined at the cluster.</p>
     */
    inline DescribeBackupsRequest& AddFilters(Aws::String&& key, Aws::Vector<Aws::String>&& value) { m_filtersHasBeenSet = true; m_filters.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>One or more filters to limit the items returned in the response.</p> <p>Use
     * the <code>backupIds</code> filter to return only the specified backups. Specify
     * backups by their backup identifier (ID).</p> <p>Use the
     * <code>sourceBackupIds</code> filter to return only the backups created from a
     * source backup. The <code>sourceBackupID</code> of a source backup is returned by
     * the <a>CopyBackupToRegion</a> operation.</p> <p>Use the <code>clusterIds</code>
     * filter to return only the backups for the specified clusters. Specify clusters
     * by their cluster identifier (ID).</p> <p>Use the <code>states</code> filter to
     * return only backups that match the specified state.</p> <p>Use the
     * <code>neverExpires</code> filter to return backups filtered by the value in the
     * <code>neverExpires</code> parameter. <code>True</code> returns all backups
     * exempt from the backup retention policy. <code>False</code> returns all backups
     * with a backup retention policy defined at the cluster.</p>
     */
    inline DescribeBackupsRequest& AddFilters(const char* key, Aws::Vector<Aws::String>&& value) { m_filtersHasBeenSet = true; m_filters.emplace(key, std::move(value)); return *this; }

    /**
     * <p>One or more filters to limit the items returned in the response.</p> <p>Use
     * the <code>backupIds</code> filter to return only the specified backups. Specify
     * backups by their backup identifier (ID).</p> <p>Use the
     * <code>sourceBackupIds</code> filter to return only the backups created from a
     * source backup. The <code>sourceBackupID</code> of a source backup is returned by
     * the <a>CopyBackupToRegion</a> operation.</p> <p>Use the <code>clusterIds</code>
     * filter to return only the backups for the specified clusters. Specify clusters
     * by their cluster identifier (ID).</p> <p>Use the <code>states</code> filter to
     * return only backups that match the specified state.</p> <p>Use the
     * <code>neverExpires</code> filter to return backups filtered by the value in the
     * <code>neverExpires</code> parameter. <code>True</code> returns all backups
     * exempt from the backup retention policy. <code>False</code> returns all backups
     * with a backup retention policy defined at the cluster.</p>
     */
    inline DescribeBackupsRequest& AddFilters(const char* key, const Aws::Vector<Aws::String>& value) { m_filtersHasBeenSet = true; m_filters.emplace(key, value); return *this; }


    /**
     * <p>Designates whether or not to sort the return backups by ascending
     * chronological order of generation.</p>
     */
    inline bool GetSortAscending() const{ return m_sortAscending; }

    /**
     * <p>Designates whether or not to sort the return backups by ascending
     * chronological order of generation.</p>
     */
    inline bool SortAscendingHasBeenSet() const { return m_sortAscendingHasBeenSet; }

    /**
     * <p>Designates whether or not to sort the return backups by ascending
     * chronological order of generation.</p>
     */
    inline void SetSortAscending(bool value) { m_sortAscendingHasBeenSet = true; m_sortAscending = value; }

    /**
     * <p>Designates whether or not to sort the return backups by ascending
     * chronological order of generation.</p>
     */
    inline DescribeBackupsRequest& WithSortAscending(bool value) { SetSortAscending(value); return *this;}

  private:

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    Aws::Map<Aws::String, Aws::Vector<Aws::String>> m_filters;
    bool m_filtersHasBeenSet = false;

    bool m_sortAscending;
    bool m_sortAscendingHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudHSMV2
} // namespace Aws
