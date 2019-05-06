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
  class AWS_EC2_API DescribeBundleTasksRequest : public EC2Request
  {
  public:
    DescribeBundleTasksRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeBundleTasks"; }

    Aws::String SerializePayload() const override;

  protected:
    void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>The bundle task IDs.</p> <p>Default: Describes all your bundle tasks.</p>
     */
    inline const Aws::Vector<Aws::String>& GetBundleIds() const{ return m_bundleIds; }

    /**
     * <p>The bundle task IDs.</p> <p>Default: Describes all your bundle tasks.</p>
     */
    inline bool BundleIdsHasBeenSet() const { return m_bundleIdsHasBeenSet; }

    /**
     * <p>The bundle task IDs.</p> <p>Default: Describes all your bundle tasks.</p>
     */
    inline void SetBundleIds(const Aws::Vector<Aws::String>& value) { m_bundleIdsHasBeenSet = true; m_bundleIds = value; }

    /**
     * <p>The bundle task IDs.</p> <p>Default: Describes all your bundle tasks.</p>
     */
    inline void SetBundleIds(Aws::Vector<Aws::String>&& value) { m_bundleIdsHasBeenSet = true; m_bundleIds = std::move(value); }

    /**
     * <p>The bundle task IDs.</p> <p>Default: Describes all your bundle tasks.</p>
     */
    inline DescribeBundleTasksRequest& WithBundleIds(const Aws::Vector<Aws::String>& value) { SetBundleIds(value); return *this;}

    /**
     * <p>The bundle task IDs.</p> <p>Default: Describes all your bundle tasks.</p>
     */
    inline DescribeBundleTasksRequest& WithBundleIds(Aws::Vector<Aws::String>&& value) { SetBundleIds(std::move(value)); return *this;}

    /**
     * <p>The bundle task IDs.</p> <p>Default: Describes all your bundle tasks.</p>
     */
    inline DescribeBundleTasksRequest& AddBundleIds(const Aws::String& value) { m_bundleIdsHasBeenSet = true; m_bundleIds.push_back(value); return *this; }

    /**
     * <p>The bundle task IDs.</p> <p>Default: Describes all your bundle tasks.</p>
     */
    inline DescribeBundleTasksRequest& AddBundleIds(Aws::String&& value) { m_bundleIdsHasBeenSet = true; m_bundleIds.push_back(std::move(value)); return *this; }

    /**
     * <p>The bundle task IDs.</p> <p>Default: Describes all your bundle tasks.</p>
     */
    inline DescribeBundleTasksRequest& AddBundleIds(const char* value) { m_bundleIdsHasBeenSet = true; m_bundleIds.push_back(value); return *this; }


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
    inline const Aws::Vector<Filter>& GetFilters() const{ return m_filters; }

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
    inline bool FiltersHasBeenSet() const { return m_filtersHasBeenSet; }

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
    inline void SetFilters(const Aws::Vector<Filter>& value) { m_filtersHasBeenSet = true; m_filters = value; }

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
    inline void SetFilters(Aws::Vector<Filter>&& value) { m_filtersHasBeenSet = true; m_filters = std::move(value); }

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
    inline DescribeBundleTasksRequest& WithFilters(const Aws::Vector<Filter>& value) { SetFilters(value); return *this;}

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
    inline DescribeBundleTasksRequest& WithFilters(Aws::Vector<Filter>&& value) { SetFilters(std::move(value)); return *this;}

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
    inline DescribeBundleTasksRequest& AddFilters(const Filter& value) { m_filtersHasBeenSet = true; m_filters.push_back(value); return *this; }

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
    inline DescribeBundleTasksRequest& AddFilters(Filter&& value) { m_filtersHasBeenSet = true; m_filters.push_back(std::move(value)); return *this; }


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
    inline DescribeBundleTasksRequest& WithDryRun(bool value) { SetDryRun(value); return *this;}

  private:

    Aws::Vector<Aws::String> m_bundleIds;
    bool m_bundleIdsHasBeenSet;

    Aws::Vector<Filter> m_filters;
    bool m_filtersHasBeenSet;

    bool m_dryRun;
    bool m_dryRunHasBeenSet;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
