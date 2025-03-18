/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/EC2Request.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/model/Filter.h>
#include <utility>

namespace Aws
{
namespace EC2
{
namespace Model
{

  /**
   */
  class DescribeBundleTasksRequest : public EC2Request
  {
  public:
    AWS_EC2_API DescribeBundleTasksRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeBundleTasks"; }

    AWS_EC2_API Aws::String SerializePayload() const override;

  protected:
    AWS_EC2_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    ///@{
    /**
     * <p>The bundle task IDs.</p> <p>Default: Describes all your bundle tasks.</p>
     */
    inline const Aws::Vector<Aws::String>& GetBundleIds() const { return m_bundleIds; }
    inline bool BundleIdsHasBeenSet() const { return m_bundleIdsHasBeenSet; }
    template<typename BundleIdsT = Aws::Vector<Aws::String>>
    void SetBundleIds(BundleIdsT&& value) { m_bundleIdsHasBeenSet = true; m_bundleIds = std::forward<BundleIdsT>(value); }
    template<typename BundleIdsT = Aws::Vector<Aws::String>>
    DescribeBundleTasksRequest& WithBundleIds(BundleIdsT&& value) { SetBundleIds(std::forward<BundleIdsT>(value)); return *this;}
    template<typename BundleIdsT = Aws::String>
    DescribeBundleTasksRequest& AddBundleIds(BundleIdsT&& value) { m_bundleIdsHasBeenSet = true; m_bundleIds.emplace_back(std::forward<BundleIdsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Checks whether you have the required permissions for the action, without
     * actually making the request, and provides an error response. If you have the
     * required permissions, the error response is <code>DryRunOperation</code>.
     * Otherwise, it is <code>UnauthorizedOperation</code>.</p>
     */
    inline bool GetDryRun() const { return m_dryRun; }
    inline bool DryRunHasBeenSet() const { return m_dryRunHasBeenSet; }
    inline void SetDryRun(bool value) { m_dryRunHasBeenSet = true; m_dryRun = value; }
    inline DescribeBundleTasksRequest& WithDryRun(bool value) { SetDryRun(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The filters.</p> <ul> <li> <p> <code>bundle-id</code> - The ID of the bundle
     * task.</p> </li> <li> <p> <code>error-code</code> - If the task failed, the error
     * code returned.</p> </li> <li> <p> <code>error-message</code> - If the task
     * failed, the error message returned.</p> </li> <li> <p> <code>instance-id</code>
     * - The ID of the instance.</p> </li> <li> <p> <code>progress</code> - The level
     * of task completion, as a percentage (for example, 20%).</p> </li> <li> <p>
     * <code>s3-bucket</code> - The Amazon S3 bucket to store the AMI.</p> </li> <li>
     * <p> <code>s3-prefix</code> - The beginning of the AMI name.</p> </li> <li> <p>
     * <code>start-time</code> - The time the task started (for example,
     * 2013-09-15T17:15:20.000Z).</p> </li> <li> <p> <code>state</code> - The state of
     * the task (<code>pending</code> | <code>waiting-for-shutdown</code> |
     * <code>bundling</code> | <code>storing</code> | <code>cancelling</code> |
     * <code>complete</code> | <code>failed</code>).</p> </li> <li> <p>
     * <code>update-time</code> - The time of the most recent update for the task.</p>
     * </li> </ul>
     */
    inline const Aws::Vector<Filter>& GetFilters() const { return m_filters; }
    inline bool FiltersHasBeenSet() const { return m_filtersHasBeenSet; }
    template<typename FiltersT = Aws::Vector<Filter>>
    void SetFilters(FiltersT&& value) { m_filtersHasBeenSet = true; m_filters = std::forward<FiltersT>(value); }
    template<typename FiltersT = Aws::Vector<Filter>>
    DescribeBundleTasksRequest& WithFilters(FiltersT&& value) { SetFilters(std::forward<FiltersT>(value)); return *this;}
    template<typename FiltersT = Filter>
    DescribeBundleTasksRequest& AddFilters(FiltersT&& value) { m_filtersHasBeenSet = true; m_filters.emplace_back(std::forward<FiltersT>(value)); return *this; }
    ///@}
  private:

    Aws::Vector<Aws::String> m_bundleIds;
    bool m_bundleIdsHasBeenSet = false;

    bool m_dryRun{false};
    bool m_dryRunHasBeenSet = false;

    Aws::Vector<Filter> m_filters;
    bool m_filtersHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
