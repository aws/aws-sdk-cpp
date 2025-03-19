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
    AWS_CLOUDHSMV2_API DescribeBackupsRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeBackups"; }

    AWS_CLOUDHSMV2_API Aws::String SerializePayload() const override;

    AWS_CLOUDHSMV2_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The <code>NextToken</code> value that you received in the previous response.
     * Use this value to get more backups.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    DescribeBackupsRequest& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of backups to return in the response. When there are more
     * backups than the number you specify, the response contains a
     * <code>NextToken</code> value.</p>
     */
    inline int GetMaxResults() const { return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline DescribeBackupsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}

    ///@{
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
    inline const Aws::Map<Aws::String, Aws::Vector<Aws::String>>& GetFilters() const { return m_filters; }
    inline bool FiltersHasBeenSet() const { return m_filtersHasBeenSet; }
    template<typename FiltersT = Aws::Map<Aws::String, Aws::Vector<Aws::String>>>
    void SetFilters(FiltersT&& value) { m_filtersHasBeenSet = true; m_filters = std::forward<FiltersT>(value); }
    template<typename FiltersT = Aws::Map<Aws::String, Aws::Vector<Aws::String>>>
    DescribeBackupsRequest& WithFilters(FiltersT&& value) { SetFilters(std::forward<FiltersT>(value)); return *this;}
    template<typename FiltersKeyT = Aws::String, typename FiltersValueT = Aws::Vector<Aws::String>>
    DescribeBackupsRequest& AddFilters(FiltersKeyT&& key, FiltersValueT&& value) {
      m_filtersHasBeenSet = true; m_filters.emplace(std::forward<FiltersKeyT>(key), std::forward<FiltersValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>Describe backups that are shared with you.</p>  <p>By default when
     * using this option, the command returns backups that have been shared using a
     * standard Resource Access Manager resource share. In order for a backup that was
     * shared using the PutResourcePolicy command to be returned, the share must be
     * promoted to a standard resource share using the RAM <a
     * href="https://docs.aws.amazon.com/cli/latest/reference/ram/promote-resource-share-created-from-policy.html">PromoteResourceShareCreatedFromPolicy</a>
     * API operation. For more information about sharing backups, see <a
     * href="https://docs.aws.amazon.com/cloudhsm/latest/userguide/sharing.html">
     * Working with shared backups</a> in the CloudHSM User Guide.</p> 
     */
    inline bool GetShared() const { return m_shared; }
    inline bool SharedHasBeenSet() const { return m_sharedHasBeenSet; }
    inline void SetShared(bool value) { m_sharedHasBeenSet = true; m_shared = value; }
    inline DescribeBackupsRequest& WithShared(bool value) { SetShared(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Designates whether or not to sort the return backups by ascending
     * chronological order of generation.</p>
     */
    inline bool GetSortAscending() const { return m_sortAscending; }
    inline bool SortAscendingHasBeenSet() const { return m_sortAscendingHasBeenSet; }
    inline void SetSortAscending(bool value) { m_sortAscendingHasBeenSet = true; m_sortAscending = value; }
    inline DescribeBackupsRequest& WithSortAscending(bool value) { SetSortAscending(value); return *this;}
    ///@}
  private:

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    int m_maxResults{0};
    bool m_maxResultsHasBeenSet = false;

    Aws::Map<Aws::String, Aws::Vector<Aws::String>> m_filters;
    bool m_filtersHasBeenSet = false;

    bool m_shared{false};
    bool m_sharedHasBeenSet = false;

    bool m_sortAscending{false};
    bool m_sortAscendingHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudHSMV2
} // namespace Aws
