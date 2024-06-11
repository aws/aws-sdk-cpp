/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/autoscaling/AutoScaling_EXPORTS.h>
#include <aws/autoscaling/AutoScalingRequest.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/autoscaling/model/Filter.h>
#include <utility>

namespace Aws
{
namespace AutoScaling
{
namespace Model
{

  /**
   */
  class DescribeAutoScalingGroupsRequest : public AutoScalingRequest
  {
  public:
    AWS_AUTOSCALING_API DescribeAutoScalingGroupsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeAutoScalingGroups"; }

    AWS_AUTOSCALING_API Aws::String SerializePayload() const override;

  protected:
    AWS_AUTOSCALING_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    ///@{
    /**
     * <p>The names of the Auto Scaling groups. By default, you can only specify up to
     * 50 names. You can optionally increase this limit using the
     * <code>MaxRecords</code> property.</p> <p>If you omit this property, all Auto
     * Scaling groups are described.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAutoScalingGroupNames() const{ return m_autoScalingGroupNames; }
    inline bool AutoScalingGroupNamesHasBeenSet() const { return m_autoScalingGroupNamesHasBeenSet; }
    inline void SetAutoScalingGroupNames(const Aws::Vector<Aws::String>& value) { m_autoScalingGroupNamesHasBeenSet = true; m_autoScalingGroupNames = value; }
    inline void SetAutoScalingGroupNames(Aws::Vector<Aws::String>&& value) { m_autoScalingGroupNamesHasBeenSet = true; m_autoScalingGroupNames = std::move(value); }
    inline DescribeAutoScalingGroupsRequest& WithAutoScalingGroupNames(const Aws::Vector<Aws::String>& value) { SetAutoScalingGroupNames(value); return *this;}
    inline DescribeAutoScalingGroupsRequest& WithAutoScalingGroupNames(Aws::Vector<Aws::String>&& value) { SetAutoScalingGroupNames(std::move(value)); return *this;}
    inline DescribeAutoScalingGroupsRequest& AddAutoScalingGroupNames(const Aws::String& value) { m_autoScalingGroupNamesHasBeenSet = true; m_autoScalingGroupNames.push_back(value); return *this; }
    inline DescribeAutoScalingGroupsRequest& AddAutoScalingGroupNames(Aws::String&& value) { m_autoScalingGroupNamesHasBeenSet = true; m_autoScalingGroupNames.push_back(std::move(value)); return *this; }
    inline DescribeAutoScalingGroupsRequest& AddAutoScalingGroupNames(const char* value) { m_autoScalingGroupNamesHasBeenSet = true; m_autoScalingGroupNames.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The token for the next set of items to return. (You received this token from
     * a previous call.)</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }
    inline DescribeAutoScalingGroupsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline DescribeAutoScalingGroupsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline DescribeAutoScalingGroupsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of items to return with this call. The default value is
     * <code>50</code> and the maximum value is <code>100</code>.</p>
     */
    inline int GetMaxRecords() const{ return m_maxRecords; }
    inline bool MaxRecordsHasBeenSet() const { return m_maxRecordsHasBeenSet; }
    inline void SetMaxRecords(int value) { m_maxRecordsHasBeenSet = true; m_maxRecords = value; }
    inline DescribeAutoScalingGroupsRequest& WithMaxRecords(int value) { SetMaxRecords(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>One or more filters to limit the results based on specific tags. </p>
     */
    inline const Aws::Vector<Filter>& GetFilters() const{ return m_filters; }
    inline bool FiltersHasBeenSet() const { return m_filtersHasBeenSet; }
    inline void SetFilters(const Aws::Vector<Filter>& value) { m_filtersHasBeenSet = true; m_filters = value; }
    inline void SetFilters(Aws::Vector<Filter>&& value) { m_filtersHasBeenSet = true; m_filters = std::move(value); }
    inline DescribeAutoScalingGroupsRequest& WithFilters(const Aws::Vector<Filter>& value) { SetFilters(value); return *this;}
    inline DescribeAutoScalingGroupsRequest& WithFilters(Aws::Vector<Filter>&& value) { SetFilters(std::move(value)); return *this;}
    inline DescribeAutoScalingGroupsRequest& AddFilters(const Filter& value) { m_filtersHasBeenSet = true; m_filters.push_back(value); return *this; }
    inline DescribeAutoScalingGroupsRequest& AddFilters(Filter&& value) { m_filtersHasBeenSet = true; m_filters.push_back(std::move(value)); return *this; }
    ///@}
  private:

    Aws::Vector<Aws::String> m_autoScalingGroupNames;
    bool m_autoScalingGroupNamesHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    int m_maxRecords;
    bool m_maxRecordsHasBeenSet = false;

    Aws::Vector<Filter> m_filters;
    bool m_filtersHasBeenSet = false;
  };

} // namespace Model
} // namespace AutoScaling
} // namespace Aws
