/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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

namespace Aws
{
namespace EC2
{
namespace Model
{

  /**
   * <p>Contains the parameters for DescribeRegions.</p>
   */
  class AWS_EC2_API DescribeRegionsRequest : public EC2Request
  {
  public:
    DescribeRegionsRequest();
    Aws::String SerializePayload() const override;

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
    inline void SetDryRun(bool value) { m_dryRunHasBeenSet = true; m_dryRun = value; }

    /**
     * <p>Checks whether you have the required permissions for the action, without
     * actually making the request, and provides an error response. If you have the
     * required permissions, the error response is <code>DryRunOperation</code>.
     * Otherwise, it is <code>UnauthorizedOperation</code>.</p>
     */
    inline DescribeRegionsRequest& WithDryRun(bool value) { SetDryRun(value); return *this;}

    /**
     * <p>The names of one or more regions.</p>
     */
    inline const Aws::Vector<Aws::String>& GetRegionNames() const{ return m_regionNames; }

    /**
     * <p>The names of one or more regions.</p>
     */
    inline void SetRegionNames(const Aws::Vector<Aws::String>& value) { m_regionNamesHasBeenSet = true; m_regionNames = value; }

    /**
     * <p>The names of one or more regions.</p>
     */
    inline void SetRegionNames(Aws::Vector<Aws::String>&& value) { m_regionNamesHasBeenSet = true; m_regionNames = value; }

    /**
     * <p>The names of one or more regions.</p>
     */
    inline DescribeRegionsRequest& WithRegionNames(const Aws::Vector<Aws::String>& value) { SetRegionNames(value); return *this;}

    /**
     * <p>The names of one or more regions.</p>
     */
    inline DescribeRegionsRequest& WithRegionNames(Aws::Vector<Aws::String>&& value) { SetRegionNames(value); return *this;}

    /**
     * <p>The names of one or more regions.</p>
     */
    inline DescribeRegionsRequest& AddRegionNames(const Aws::String& value) { m_regionNamesHasBeenSet = true; m_regionNames.push_back(value); return *this; }

    /**
     * <p>The names of one or more regions.</p>
     */
    inline DescribeRegionsRequest& AddRegionNames(Aws::String&& value) { m_regionNamesHasBeenSet = true; m_regionNames.push_back(value); return *this; }

    /**
     * <p>The names of one or more regions.</p>
     */
    inline DescribeRegionsRequest& AddRegionNames(const char* value) { m_regionNamesHasBeenSet = true; m_regionNames.push_back(value); return *this; }

    /**
     * <p>One or more filters.</p> <ul> <li> <p><code>endpoint</code> - The endpoint of
     * the region (for example, <code>ec2.us-east-1.amazonaws.com</code>).</p> </li>
     * <li> <p><code>region-name</code> - The name of the region (for example,
     * <code>us-east-1</code>).</p> </li> </ul>
     */
    inline const Aws::Vector<Filter>& GetFilters() const{ return m_filters; }

    /**
     * <p>One or more filters.</p> <ul> <li> <p><code>endpoint</code> - The endpoint of
     * the region (for example, <code>ec2.us-east-1.amazonaws.com</code>).</p> </li>
     * <li> <p><code>region-name</code> - The name of the region (for example,
     * <code>us-east-1</code>).</p> </li> </ul>
     */
    inline void SetFilters(const Aws::Vector<Filter>& value) { m_filtersHasBeenSet = true; m_filters = value; }

    /**
     * <p>One or more filters.</p> <ul> <li> <p><code>endpoint</code> - The endpoint of
     * the region (for example, <code>ec2.us-east-1.amazonaws.com</code>).</p> </li>
     * <li> <p><code>region-name</code> - The name of the region (for example,
     * <code>us-east-1</code>).</p> </li> </ul>
     */
    inline void SetFilters(Aws::Vector<Filter>&& value) { m_filtersHasBeenSet = true; m_filters = value; }

    /**
     * <p>One or more filters.</p> <ul> <li> <p><code>endpoint</code> - The endpoint of
     * the region (for example, <code>ec2.us-east-1.amazonaws.com</code>).</p> </li>
     * <li> <p><code>region-name</code> - The name of the region (for example,
     * <code>us-east-1</code>).</p> </li> </ul>
     */
    inline DescribeRegionsRequest& WithFilters(const Aws::Vector<Filter>& value) { SetFilters(value); return *this;}

    /**
     * <p>One or more filters.</p> <ul> <li> <p><code>endpoint</code> - The endpoint of
     * the region (for example, <code>ec2.us-east-1.amazonaws.com</code>).</p> </li>
     * <li> <p><code>region-name</code> - The name of the region (for example,
     * <code>us-east-1</code>).</p> </li> </ul>
     */
    inline DescribeRegionsRequest& WithFilters(Aws::Vector<Filter>&& value) { SetFilters(value); return *this;}

    /**
     * <p>One or more filters.</p> <ul> <li> <p><code>endpoint</code> - The endpoint of
     * the region (for example, <code>ec2.us-east-1.amazonaws.com</code>).</p> </li>
     * <li> <p><code>region-name</code> - The name of the region (for example,
     * <code>us-east-1</code>).</p> </li> </ul>
     */
    inline DescribeRegionsRequest& AddFilters(const Filter& value) { m_filtersHasBeenSet = true; m_filters.push_back(value); return *this; }

    /**
     * <p>One or more filters.</p> <ul> <li> <p><code>endpoint</code> - The endpoint of
     * the region (for example, <code>ec2.us-east-1.amazonaws.com</code>).</p> </li>
     * <li> <p><code>region-name</code> - The name of the region (for example,
     * <code>us-east-1</code>).</p> </li> </ul>
     */
    inline DescribeRegionsRequest& AddFilters(Filter&& value) { m_filtersHasBeenSet = true; m_filters.push_back(value); return *this; }

  private:
    bool m_dryRun;
    bool m_dryRunHasBeenSet;
    Aws::Vector<Aws::String> m_regionNames;
    bool m_regionNamesHasBeenSet;
    Aws::Vector<Filter> m_filters;
    bool m_filtersHasBeenSet;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
