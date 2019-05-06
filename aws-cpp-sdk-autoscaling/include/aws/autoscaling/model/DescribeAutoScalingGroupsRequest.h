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
#include <aws/autoscaling/AutoScaling_EXPORTS.h>
#include <aws/autoscaling/AutoScalingRequest.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace AutoScaling
{
namespace Model
{

  /**
   */
  class AWS_AUTOSCALING_API DescribeAutoScalingGroupsRequest : public AutoScalingRequest
  {
  public:
    DescribeAutoScalingGroupsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeAutoScalingGroups"; }

    Aws::String SerializePayload() const override;

  protected:
    void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>The names of the Auto Scaling groups. Each name can be a maximum of 1600
     * characters. By default, you can only specify up to 50 names. You can optionally
     * increase this limit using the <code>MaxRecords</code> parameter. </p> <p>If you
     * omit this parameter, all Auto Scaling groups are described.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAutoScalingGroupNames() const{ return m_autoScalingGroupNames; }

    /**
     * <p>The names of the Auto Scaling groups. Each name can be a maximum of 1600
     * characters. By default, you can only specify up to 50 names. You can optionally
     * increase this limit using the <code>MaxRecords</code> parameter. </p> <p>If you
     * omit this parameter, all Auto Scaling groups are described.</p>
     */
    inline bool AutoScalingGroupNamesHasBeenSet() const { return m_autoScalingGroupNamesHasBeenSet; }

    /**
     * <p>The names of the Auto Scaling groups. Each name can be a maximum of 1600
     * characters. By default, you can only specify up to 50 names. You can optionally
     * increase this limit using the <code>MaxRecords</code> parameter. </p> <p>If you
     * omit this parameter, all Auto Scaling groups are described.</p>
     */
    inline void SetAutoScalingGroupNames(const Aws::Vector<Aws::String>& value) { m_autoScalingGroupNamesHasBeenSet = true; m_autoScalingGroupNames = value; }

    /**
     * <p>The names of the Auto Scaling groups. Each name can be a maximum of 1600
     * characters. By default, you can only specify up to 50 names. You can optionally
     * increase this limit using the <code>MaxRecords</code> parameter. </p> <p>If you
     * omit this parameter, all Auto Scaling groups are described.</p>
     */
    inline void SetAutoScalingGroupNames(Aws::Vector<Aws::String>&& value) { m_autoScalingGroupNamesHasBeenSet = true; m_autoScalingGroupNames = std::move(value); }

    /**
     * <p>The names of the Auto Scaling groups. Each name can be a maximum of 1600
     * characters. By default, you can only specify up to 50 names. You can optionally
     * increase this limit using the <code>MaxRecords</code> parameter. </p> <p>If you
     * omit this parameter, all Auto Scaling groups are described.</p>
     */
    inline DescribeAutoScalingGroupsRequest& WithAutoScalingGroupNames(const Aws::Vector<Aws::String>& value) { SetAutoScalingGroupNames(value); return *this;}

    /**
     * <p>The names of the Auto Scaling groups. Each name can be a maximum of 1600
     * characters. By default, you can only specify up to 50 names. You can optionally
     * increase this limit using the <code>MaxRecords</code> parameter. </p> <p>If you
     * omit this parameter, all Auto Scaling groups are described.</p>
     */
    inline DescribeAutoScalingGroupsRequest& WithAutoScalingGroupNames(Aws::Vector<Aws::String>&& value) { SetAutoScalingGroupNames(std::move(value)); return *this;}

    /**
     * <p>The names of the Auto Scaling groups. Each name can be a maximum of 1600
     * characters. By default, you can only specify up to 50 names. You can optionally
     * increase this limit using the <code>MaxRecords</code> parameter. </p> <p>If you
     * omit this parameter, all Auto Scaling groups are described.</p>
     */
    inline DescribeAutoScalingGroupsRequest& AddAutoScalingGroupNames(const Aws::String& value) { m_autoScalingGroupNamesHasBeenSet = true; m_autoScalingGroupNames.push_back(value); return *this; }

    /**
     * <p>The names of the Auto Scaling groups. Each name can be a maximum of 1600
     * characters. By default, you can only specify up to 50 names. You can optionally
     * increase this limit using the <code>MaxRecords</code> parameter. </p> <p>If you
     * omit this parameter, all Auto Scaling groups are described.</p>
     */
    inline DescribeAutoScalingGroupsRequest& AddAutoScalingGroupNames(Aws::String&& value) { m_autoScalingGroupNamesHasBeenSet = true; m_autoScalingGroupNames.push_back(std::move(value)); return *this; }

    /**
     * <p>The names of the Auto Scaling groups. Each name can be a maximum of 1600
     * characters. By default, you can only specify up to 50 names. You can optionally
     * increase this limit using the <code>MaxRecords</code> parameter. </p> <p>If you
     * omit this parameter, all Auto Scaling groups are described.</p>
     */
    inline DescribeAutoScalingGroupsRequest& AddAutoScalingGroupNames(const char* value) { m_autoScalingGroupNamesHasBeenSet = true; m_autoScalingGroupNames.push_back(value); return *this; }


    /**
     * <p>The token for the next set of items to return. (You received this token from
     * a previous call.)</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The token for the next set of items to return. (You received this token from
     * a previous call.)</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>The token for the next set of items to return. (You received this token from
     * a previous call.)</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>The token for the next set of items to return. (You received this token from
     * a previous call.)</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>The token for the next set of items to return. (You received this token from
     * a previous call.)</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>The token for the next set of items to return. (You received this token from
     * a previous call.)</p>
     */
    inline DescribeAutoScalingGroupsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token for the next set of items to return. (You received this token from
     * a previous call.)</p>
     */
    inline DescribeAutoScalingGroupsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token for the next set of items to return. (You received this token from
     * a previous call.)</p>
     */
    inline DescribeAutoScalingGroupsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>The maximum number of items to return with this call. The default value is
     * <code>50</code> and the maximum value is <code>100</code>. </p>
     */
    inline int GetMaxRecords() const{ return m_maxRecords; }

    /**
     * <p>The maximum number of items to return with this call. The default value is
     * <code>50</code> and the maximum value is <code>100</code>. </p>
     */
    inline bool MaxRecordsHasBeenSet() const { return m_maxRecordsHasBeenSet; }

    /**
     * <p>The maximum number of items to return with this call. The default value is
     * <code>50</code> and the maximum value is <code>100</code>. </p>
     */
    inline void SetMaxRecords(int value) { m_maxRecordsHasBeenSet = true; m_maxRecords = value; }

    /**
     * <p>The maximum number of items to return with this call. The default value is
     * <code>50</code> and the maximum value is <code>100</code>. </p>
     */
    inline DescribeAutoScalingGroupsRequest& WithMaxRecords(int value) { SetMaxRecords(value); return *this;}

  private:

    Aws::Vector<Aws::String> m_autoScalingGroupNames;
    bool m_autoScalingGroupNamesHasBeenSet;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet;

    int m_maxRecords;
    bool m_maxRecordsHasBeenSet;
  };

} // namespace Model
} // namespace AutoScaling
} // namespace Aws
