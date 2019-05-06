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
  class AWS_AUTOSCALING_API DescribeScalingActivitiesRequest : public AutoScalingRequest
  {
  public:
    DescribeScalingActivitiesRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeScalingActivities"; }

    Aws::String SerializePayload() const override;

  protected:
    void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>The activity IDs of the desired scaling activities. You can specify up to 50
     * IDs. If you omit this parameter, all activities for the past six weeks are
     * described. If unknown activities are requested, they are ignored with no error.
     * If you specify an Auto Scaling group, the results are limited to that group.</p>
     */
    inline const Aws::Vector<Aws::String>& GetActivityIds() const{ return m_activityIds; }

    /**
     * <p>The activity IDs of the desired scaling activities. You can specify up to 50
     * IDs. If you omit this parameter, all activities for the past six weeks are
     * described. If unknown activities are requested, they are ignored with no error.
     * If you specify an Auto Scaling group, the results are limited to that group.</p>
     */
    inline bool ActivityIdsHasBeenSet() const { return m_activityIdsHasBeenSet; }

    /**
     * <p>The activity IDs of the desired scaling activities. You can specify up to 50
     * IDs. If you omit this parameter, all activities for the past six weeks are
     * described. If unknown activities are requested, they are ignored with no error.
     * If you specify an Auto Scaling group, the results are limited to that group.</p>
     */
    inline void SetActivityIds(const Aws::Vector<Aws::String>& value) { m_activityIdsHasBeenSet = true; m_activityIds = value; }

    /**
     * <p>The activity IDs of the desired scaling activities. You can specify up to 50
     * IDs. If you omit this parameter, all activities for the past six weeks are
     * described. If unknown activities are requested, they are ignored with no error.
     * If you specify an Auto Scaling group, the results are limited to that group.</p>
     */
    inline void SetActivityIds(Aws::Vector<Aws::String>&& value) { m_activityIdsHasBeenSet = true; m_activityIds = std::move(value); }

    /**
     * <p>The activity IDs of the desired scaling activities. You can specify up to 50
     * IDs. If you omit this parameter, all activities for the past six weeks are
     * described. If unknown activities are requested, they are ignored with no error.
     * If you specify an Auto Scaling group, the results are limited to that group.</p>
     */
    inline DescribeScalingActivitiesRequest& WithActivityIds(const Aws::Vector<Aws::String>& value) { SetActivityIds(value); return *this;}

    /**
     * <p>The activity IDs of the desired scaling activities. You can specify up to 50
     * IDs. If you omit this parameter, all activities for the past six weeks are
     * described. If unknown activities are requested, they are ignored with no error.
     * If you specify an Auto Scaling group, the results are limited to that group.</p>
     */
    inline DescribeScalingActivitiesRequest& WithActivityIds(Aws::Vector<Aws::String>&& value) { SetActivityIds(std::move(value)); return *this;}

    /**
     * <p>The activity IDs of the desired scaling activities. You can specify up to 50
     * IDs. If you omit this parameter, all activities for the past six weeks are
     * described. If unknown activities are requested, they are ignored with no error.
     * If you specify an Auto Scaling group, the results are limited to that group.</p>
     */
    inline DescribeScalingActivitiesRequest& AddActivityIds(const Aws::String& value) { m_activityIdsHasBeenSet = true; m_activityIds.push_back(value); return *this; }

    /**
     * <p>The activity IDs of the desired scaling activities. You can specify up to 50
     * IDs. If you omit this parameter, all activities for the past six weeks are
     * described. If unknown activities are requested, they are ignored with no error.
     * If you specify an Auto Scaling group, the results are limited to that group.</p>
     */
    inline DescribeScalingActivitiesRequest& AddActivityIds(Aws::String&& value) { m_activityIdsHasBeenSet = true; m_activityIds.push_back(std::move(value)); return *this; }

    /**
     * <p>The activity IDs of the desired scaling activities. You can specify up to 50
     * IDs. If you omit this parameter, all activities for the past six weeks are
     * described. If unknown activities are requested, they are ignored with no error.
     * If you specify an Auto Scaling group, the results are limited to that group.</p>
     */
    inline DescribeScalingActivitiesRequest& AddActivityIds(const char* value) { m_activityIdsHasBeenSet = true; m_activityIds.push_back(value); return *this; }


    /**
     * <p>The name of the Auto Scaling group.</p>
     */
    inline const Aws::String& GetAutoScalingGroupName() const{ return m_autoScalingGroupName; }

    /**
     * <p>The name of the Auto Scaling group.</p>
     */
    inline bool AutoScalingGroupNameHasBeenSet() const { return m_autoScalingGroupNameHasBeenSet; }

    /**
     * <p>The name of the Auto Scaling group.</p>
     */
    inline void SetAutoScalingGroupName(const Aws::String& value) { m_autoScalingGroupNameHasBeenSet = true; m_autoScalingGroupName = value; }

    /**
     * <p>The name of the Auto Scaling group.</p>
     */
    inline void SetAutoScalingGroupName(Aws::String&& value) { m_autoScalingGroupNameHasBeenSet = true; m_autoScalingGroupName = std::move(value); }

    /**
     * <p>The name of the Auto Scaling group.</p>
     */
    inline void SetAutoScalingGroupName(const char* value) { m_autoScalingGroupNameHasBeenSet = true; m_autoScalingGroupName.assign(value); }

    /**
     * <p>The name of the Auto Scaling group.</p>
     */
    inline DescribeScalingActivitiesRequest& WithAutoScalingGroupName(const Aws::String& value) { SetAutoScalingGroupName(value); return *this;}

    /**
     * <p>The name of the Auto Scaling group.</p>
     */
    inline DescribeScalingActivitiesRequest& WithAutoScalingGroupName(Aws::String&& value) { SetAutoScalingGroupName(std::move(value)); return *this;}

    /**
     * <p>The name of the Auto Scaling group.</p>
     */
    inline DescribeScalingActivitiesRequest& WithAutoScalingGroupName(const char* value) { SetAutoScalingGroupName(value); return *this;}


    /**
     * <p>The maximum number of items to return with this call. The default value is
     * <code>100</code> and the maximum value is <code>100</code>.</p>
     */
    inline int GetMaxRecords() const{ return m_maxRecords; }

    /**
     * <p>The maximum number of items to return with this call. The default value is
     * <code>100</code> and the maximum value is <code>100</code>.</p>
     */
    inline bool MaxRecordsHasBeenSet() const { return m_maxRecordsHasBeenSet; }

    /**
     * <p>The maximum number of items to return with this call. The default value is
     * <code>100</code> and the maximum value is <code>100</code>.</p>
     */
    inline void SetMaxRecords(int value) { m_maxRecordsHasBeenSet = true; m_maxRecords = value; }

    /**
     * <p>The maximum number of items to return with this call. The default value is
     * <code>100</code> and the maximum value is <code>100</code>.</p>
     */
    inline DescribeScalingActivitiesRequest& WithMaxRecords(int value) { SetMaxRecords(value); return *this;}


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
    inline DescribeScalingActivitiesRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token for the next set of items to return. (You received this token from
     * a previous call.)</p>
     */
    inline DescribeScalingActivitiesRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token for the next set of items to return. (You received this token from
     * a previous call.)</p>
     */
    inline DescribeScalingActivitiesRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<Aws::String> m_activityIds;
    bool m_activityIdsHasBeenSet;

    Aws::String m_autoScalingGroupName;
    bool m_autoScalingGroupNameHasBeenSet;

    int m_maxRecords;
    bool m_maxRecordsHasBeenSet;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet;
  };

} // namespace Model
} // namespace AutoScaling
} // namespace Aws
