/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/drs/Drs_EXPORTS.h>
#include <aws/drs/DrsRequest.h>
#include <aws/drs/model/DescribeRecoverySnapshotsRequestFilters.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/drs/model/RecoverySnapshotsOrder.h>
#include <utility>

namespace Aws
{
namespace drs
{
namespace Model
{

  /**
   */
  class DescribeRecoverySnapshotsRequest : public DrsRequest
  {
  public:
    AWS_DRS_API DescribeRecoverySnapshotsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeRecoverySnapshots"; }

    AWS_DRS_API Aws::String SerializePayload() const override;


    /**
     * <p>A set of filters by which to return Recovery Snapshots.</p>
     */
    inline const DescribeRecoverySnapshotsRequestFilters& GetFilters() const{ return m_filters; }

    /**
     * <p>A set of filters by which to return Recovery Snapshots.</p>
     */
    inline bool FiltersHasBeenSet() const { return m_filtersHasBeenSet; }

    /**
     * <p>A set of filters by which to return Recovery Snapshots.</p>
     */
    inline void SetFilters(const DescribeRecoverySnapshotsRequestFilters& value) { m_filtersHasBeenSet = true; m_filters = value; }

    /**
     * <p>A set of filters by which to return Recovery Snapshots.</p>
     */
    inline void SetFilters(DescribeRecoverySnapshotsRequestFilters&& value) { m_filtersHasBeenSet = true; m_filters = std::move(value); }

    /**
     * <p>A set of filters by which to return Recovery Snapshots.</p>
     */
    inline DescribeRecoverySnapshotsRequest& WithFilters(const DescribeRecoverySnapshotsRequestFilters& value) { SetFilters(value); return *this;}

    /**
     * <p>A set of filters by which to return Recovery Snapshots.</p>
     */
    inline DescribeRecoverySnapshotsRequest& WithFilters(DescribeRecoverySnapshotsRequestFilters&& value) { SetFilters(std::move(value)); return *this;}


    /**
     * <p>Maximum number of Recovery Snapshots to retrieve.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>Maximum number of Recovery Snapshots to retrieve.</p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>Maximum number of Recovery Snapshots to retrieve.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>Maximum number of Recovery Snapshots to retrieve.</p>
     */
    inline DescribeRecoverySnapshotsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}


    /**
     * <p>The token of the next Recovery Snapshot to retrieve.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The token of the next Recovery Snapshot to retrieve.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>The token of the next Recovery Snapshot to retrieve.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>The token of the next Recovery Snapshot to retrieve.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>The token of the next Recovery Snapshot to retrieve.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>The token of the next Recovery Snapshot to retrieve.</p>
     */
    inline DescribeRecoverySnapshotsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token of the next Recovery Snapshot to retrieve.</p>
     */
    inline DescribeRecoverySnapshotsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token of the next Recovery Snapshot to retrieve.</p>
     */
    inline DescribeRecoverySnapshotsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>The sorted ordering by which to return Recovery Snapshots.</p>
     */
    inline const RecoverySnapshotsOrder& GetOrder() const{ return m_order; }

    /**
     * <p>The sorted ordering by which to return Recovery Snapshots.</p>
     */
    inline bool OrderHasBeenSet() const { return m_orderHasBeenSet; }

    /**
     * <p>The sorted ordering by which to return Recovery Snapshots.</p>
     */
    inline void SetOrder(const RecoverySnapshotsOrder& value) { m_orderHasBeenSet = true; m_order = value; }

    /**
     * <p>The sorted ordering by which to return Recovery Snapshots.</p>
     */
    inline void SetOrder(RecoverySnapshotsOrder&& value) { m_orderHasBeenSet = true; m_order = std::move(value); }

    /**
     * <p>The sorted ordering by which to return Recovery Snapshots.</p>
     */
    inline DescribeRecoverySnapshotsRequest& WithOrder(const RecoverySnapshotsOrder& value) { SetOrder(value); return *this;}

    /**
     * <p>The sorted ordering by which to return Recovery Snapshots.</p>
     */
    inline DescribeRecoverySnapshotsRequest& WithOrder(RecoverySnapshotsOrder&& value) { SetOrder(std::move(value)); return *this;}


    /**
     * <p>Filter Recovery Snapshots by Source Server ID.</p>
     */
    inline const Aws::String& GetSourceServerID() const{ return m_sourceServerID; }

    /**
     * <p>Filter Recovery Snapshots by Source Server ID.</p>
     */
    inline bool SourceServerIDHasBeenSet() const { return m_sourceServerIDHasBeenSet; }

    /**
     * <p>Filter Recovery Snapshots by Source Server ID.</p>
     */
    inline void SetSourceServerID(const Aws::String& value) { m_sourceServerIDHasBeenSet = true; m_sourceServerID = value; }

    /**
     * <p>Filter Recovery Snapshots by Source Server ID.</p>
     */
    inline void SetSourceServerID(Aws::String&& value) { m_sourceServerIDHasBeenSet = true; m_sourceServerID = std::move(value); }

    /**
     * <p>Filter Recovery Snapshots by Source Server ID.</p>
     */
    inline void SetSourceServerID(const char* value) { m_sourceServerIDHasBeenSet = true; m_sourceServerID.assign(value); }

    /**
     * <p>Filter Recovery Snapshots by Source Server ID.</p>
     */
    inline DescribeRecoverySnapshotsRequest& WithSourceServerID(const Aws::String& value) { SetSourceServerID(value); return *this;}

    /**
     * <p>Filter Recovery Snapshots by Source Server ID.</p>
     */
    inline DescribeRecoverySnapshotsRequest& WithSourceServerID(Aws::String&& value) { SetSourceServerID(std::move(value)); return *this;}

    /**
     * <p>Filter Recovery Snapshots by Source Server ID.</p>
     */
    inline DescribeRecoverySnapshotsRequest& WithSourceServerID(const char* value) { SetSourceServerID(value); return *this;}

  private:

    DescribeRecoverySnapshotsRequestFilters m_filters;
    bool m_filtersHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    RecoverySnapshotsOrder m_order;
    bool m_orderHasBeenSet = false;

    Aws::String m_sourceServerID;
    bool m_sourceServerIDHasBeenSet = false;
  };

} // namespace Model
} // namespace drs
} // namespace Aws
