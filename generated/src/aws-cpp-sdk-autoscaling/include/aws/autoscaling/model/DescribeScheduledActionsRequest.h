/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/autoscaling/AutoScaling_EXPORTS.h>
#include <aws/autoscaling/AutoScalingRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/DateTime.h>
#include <utility>

namespace Aws
{
namespace AutoScaling
{
namespace Model
{

  /**
   */
  class DescribeScheduledActionsRequest : public AutoScalingRequest
  {
  public:
    AWS_AUTOSCALING_API DescribeScheduledActionsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeScheduledActions"; }

    AWS_AUTOSCALING_API Aws::String SerializePayload() const override;

  protected:
    AWS_AUTOSCALING_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    ///@{
    /**
     * <p>The name of the Auto Scaling group.</p>
     */
    inline const Aws::String& GetAutoScalingGroupName() const{ return m_autoScalingGroupName; }
    inline bool AutoScalingGroupNameHasBeenSet() const { return m_autoScalingGroupNameHasBeenSet; }
    inline void SetAutoScalingGroupName(const Aws::String& value) { m_autoScalingGroupNameHasBeenSet = true; m_autoScalingGroupName = value; }
    inline void SetAutoScalingGroupName(Aws::String&& value) { m_autoScalingGroupNameHasBeenSet = true; m_autoScalingGroupName = std::move(value); }
    inline void SetAutoScalingGroupName(const char* value) { m_autoScalingGroupNameHasBeenSet = true; m_autoScalingGroupName.assign(value); }
    inline DescribeScheduledActionsRequest& WithAutoScalingGroupName(const Aws::String& value) { SetAutoScalingGroupName(value); return *this;}
    inline DescribeScheduledActionsRequest& WithAutoScalingGroupName(Aws::String&& value) { SetAutoScalingGroupName(std::move(value)); return *this;}
    inline DescribeScheduledActionsRequest& WithAutoScalingGroupName(const char* value) { SetAutoScalingGroupName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The names of one or more scheduled actions. If you omit this property, all
     * scheduled actions are described. If you specify an unknown scheduled action, it
     * is ignored with no error.</p> <p>Array Members: Maximum number of 50
     * actions.</p>
     */
    inline const Aws::Vector<Aws::String>& GetScheduledActionNames() const{ return m_scheduledActionNames; }
    inline bool ScheduledActionNamesHasBeenSet() const { return m_scheduledActionNamesHasBeenSet; }
    inline void SetScheduledActionNames(const Aws::Vector<Aws::String>& value) { m_scheduledActionNamesHasBeenSet = true; m_scheduledActionNames = value; }
    inline void SetScheduledActionNames(Aws::Vector<Aws::String>&& value) { m_scheduledActionNamesHasBeenSet = true; m_scheduledActionNames = std::move(value); }
    inline DescribeScheduledActionsRequest& WithScheduledActionNames(const Aws::Vector<Aws::String>& value) { SetScheduledActionNames(value); return *this;}
    inline DescribeScheduledActionsRequest& WithScheduledActionNames(Aws::Vector<Aws::String>&& value) { SetScheduledActionNames(std::move(value)); return *this;}
    inline DescribeScheduledActionsRequest& AddScheduledActionNames(const Aws::String& value) { m_scheduledActionNamesHasBeenSet = true; m_scheduledActionNames.push_back(value); return *this; }
    inline DescribeScheduledActionsRequest& AddScheduledActionNames(Aws::String&& value) { m_scheduledActionNamesHasBeenSet = true; m_scheduledActionNames.push_back(std::move(value)); return *this; }
    inline DescribeScheduledActionsRequest& AddScheduledActionNames(const char* value) { m_scheduledActionNamesHasBeenSet = true; m_scheduledActionNames.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The earliest scheduled start time to return. If scheduled action names are
     * provided, this property is ignored.</p>
     */
    inline const Aws::Utils::DateTime& GetStartTime() const{ return m_startTime; }
    inline bool StartTimeHasBeenSet() const { return m_startTimeHasBeenSet; }
    inline void SetStartTime(const Aws::Utils::DateTime& value) { m_startTimeHasBeenSet = true; m_startTime = value; }
    inline void SetStartTime(Aws::Utils::DateTime&& value) { m_startTimeHasBeenSet = true; m_startTime = std::move(value); }
    inline DescribeScheduledActionsRequest& WithStartTime(const Aws::Utils::DateTime& value) { SetStartTime(value); return *this;}
    inline DescribeScheduledActionsRequest& WithStartTime(Aws::Utils::DateTime&& value) { SetStartTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The latest scheduled start time to return. If scheduled action names are
     * provided, this property is ignored.</p>
     */
    inline const Aws::Utils::DateTime& GetEndTime() const{ return m_endTime; }
    inline bool EndTimeHasBeenSet() const { return m_endTimeHasBeenSet; }
    inline void SetEndTime(const Aws::Utils::DateTime& value) { m_endTimeHasBeenSet = true; m_endTime = value; }
    inline void SetEndTime(Aws::Utils::DateTime&& value) { m_endTimeHasBeenSet = true; m_endTime = std::move(value); }
    inline DescribeScheduledActionsRequest& WithEndTime(const Aws::Utils::DateTime& value) { SetEndTime(value); return *this;}
    inline DescribeScheduledActionsRequest& WithEndTime(Aws::Utils::DateTime&& value) { SetEndTime(std::move(value)); return *this;}
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
    inline DescribeScheduledActionsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline DescribeScheduledActionsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline DescribeScheduledActionsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of items to return with this call. The default value is
     * <code>50</code> and the maximum value is <code>100</code>.</p>
     */
    inline int GetMaxRecords() const{ return m_maxRecords; }
    inline bool MaxRecordsHasBeenSet() const { return m_maxRecordsHasBeenSet; }
    inline void SetMaxRecords(int value) { m_maxRecordsHasBeenSet = true; m_maxRecords = value; }
    inline DescribeScheduledActionsRequest& WithMaxRecords(int value) { SetMaxRecords(value); return *this;}
    ///@}
  private:

    Aws::String m_autoScalingGroupName;
    bool m_autoScalingGroupNameHasBeenSet = false;

    Aws::Vector<Aws::String> m_scheduledActionNames;
    bool m_scheduledActionNamesHasBeenSet = false;

    Aws::Utils::DateTime m_startTime;
    bool m_startTimeHasBeenSet = false;

    Aws::Utils::DateTime m_endTime;
    bool m_endTimeHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    int m_maxRecords;
    bool m_maxRecordsHasBeenSet = false;
  };

} // namespace Model
} // namespace AutoScaling
} // namespace Aws
