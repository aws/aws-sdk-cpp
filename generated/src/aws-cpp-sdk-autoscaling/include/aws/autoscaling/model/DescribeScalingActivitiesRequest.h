/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class DescribeScalingActivitiesRequest : public AutoScalingRequest
  {
  public:
    AWS_AUTOSCALING_API DescribeScalingActivitiesRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeScalingActivities"; }

    AWS_AUTOSCALING_API Aws::String SerializePayload() const override;

  protected:
    AWS_AUTOSCALING_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    ///@{
    /**
     * <p>The activity IDs of the desired scaling activities. If you omit this
     * property, all activities for the past six weeks are described. If unknown
     * activities are requested, they are ignored with no error. If you specify an Auto
     * Scaling group, the results are limited to that group.</p> <p>Array Members:
     * Maximum number of 50 IDs.</p>
     */
    inline const Aws::Vector<Aws::String>& GetActivityIds() const { return m_activityIds; }
    inline bool ActivityIdsHasBeenSet() const { return m_activityIdsHasBeenSet; }
    template<typename ActivityIdsT = Aws::Vector<Aws::String>>
    void SetActivityIds(ActivityIdsT&& value) { m_activityIdsHasBeenSet = true; m_activityIds = std::forward<ActivityIdsT>(value); }
    template<typename ActivityIdsT = Aws::Vector<Aws::String>>
    DescribeScalingActivitiesRequest& WithActivityIds(ActivityIdsT&& value) { SetActivityIds(std::forward<ActivityIdsT>(value)); return *this;}
    template<typename ActivityIdsT = Aws::String>
    DescribeScalingActivitiesRequest& AddActivityIds(ActivityIdsT&& value) { m_activityIdsHasBeenSet = true; m_activityIds.emplace_back(std::forward<ActivityIdsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The name of the Auto Scaling group.</p>
     */
    inline const Aws::String& GetAutoScalingGroupName() const { return m_autoScalingGroupName; }
    inline bool AutoScalingGroupNameHasBeenSet() const { return m_autoScalingGroupNameHasBeenSet; }
    template<typename AutoScalingGroupNameT = Aws::String>
    void SetAutoScalingGroupName(AutoScalingGroupNameT&& value) { m_autoScalingGroupNameHasBeenSet = true; m_autoScalingGroupName = std::forward<AutoScalingGroupNameT>(value); }
    template<typename AutoScalingGroupNameT = Aws::String>
    DescribeScalingActivitiesRequest& WithAutoScalingGroupName(AutoScalingGroupNameT&& value) { SetAutoScalingGroupName(std::forward<AutoScalingGroupNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether to include scaling activity from deleted Auto Scaling
     * groups.</p>
     */
    inline bool GetIncludeDeletedGroups() const { return m_includeDeletedGroups; }
    inline bool IncludeDeletedGroupsHasBeenSet() const { return m_includeDeletedGroupsHasBeenSet; }
    inline void SetIncludeDeletedGroups(bool value) { m_includeDeletedGroupsHasBeenSet = true; m_includeDeletedGroups = value; }
    inline DescribeScalingActivitiesRequest& WithIncludeDeletedGroups(bool value) { SetIncludeDeletedGroups(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of items to return with this call. The default value is
     * <code>100</code> and the maximum value is <code>100</code>.</p>
     */
    inline int GetMaxRecords() const { return m_maxRecords; }
    inline bool MaxRecordsHasBeenSet() const { return m_maxRecordsHasBeenSet; }
    inline void SetMaxRecords(int value) { m_maxRecordsHasBeenSet = true; m_maxRecords = value; }
    inline DescribeScalingActivitiesRequest& WithMaxRecords(int value) { SetMaxRecords(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The token for the next set of items to return. (You received this token from
     * a previous call.)</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    DescribeScalingActivitiesRequest& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<Aws::String> m_activityIds;
    bool m_activityIdsHasBeenSet = false;

    Aws::String m_autoScalingGroupName;
    bool m_autoScalingGroupNameHasBeenSet = false;

    bool m_includeDeletedGroups{false};
    bool m_includeDeletedGroupsHasBeenSet = false;

    int m_maxRecords{0};
    bool m_maxRecordsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace AutoScaling
} // namespace Aws
