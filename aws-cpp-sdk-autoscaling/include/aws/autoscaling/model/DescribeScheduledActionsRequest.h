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
#include <aws/autoscaling/AutoScaling_EXPORTS.h>
#include <aws/autoscaling/AutoScalingRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/DateTime.h>

namespace Aws
{
namespace AutoScaling
{
namespace Model
{

  /**
   * <p>Contains the parameters for DescribeScheduledActions.</p>
   */
  class AWS_AUTOSCALING_API DescribeScheduledActionsRequest : public AutoScalingRequest
  {
  public:
    DescribeScheduledActionsRequest();
    Aws::String SerializePayload() const override;

    /**
     * <p>The name of the group.</p>
     */
    inline const Aws::String& GetAutoScalingGroupName() const{ return m_autoScalingGroupName; }

    /**
     * <p>The name of the group.</p>
     */
    inline void SetAutoScalingGroupName(const Aws::String& value) { m_autoScalingGroupNameHasBeenSet = true; m_autoScalingGroupName = value; }

    /**
     * <p>The name of the group.</p>
     */
    inline void SetAutoScalingGroupName(Aws::String&& value) { m_autoScalingGroupNameHasBeenSet = true; m_autoScalingGroupName = value; }

    /**
     * <p>The name of the group.</p>
     */
    inline void SetAutoScalingGroupName(const char* value) { m_autoScalingGroupNameHasBeenSet = true; m_autoScalingGroupName.assign(value); }

    /**
     * <p>The name of the group.</p>
     */
    inline DescribeScheduledActionsRequest& WithAutoScalingGroupName(const Aws::String& value) { SetAutoScalingGroupName(value); return *this;}

    /**
     * <p>The name of the group.</p>
     */
    inline DescribeScheduledActionsRequest& WithAutoScalingGroupName(Aws::String&& value) { SetAutoScalingGroupName(value); return *this;}

    /**
     * <p>The name of the group.</p>
     */
    inline DescribeScheduledActionsRequest& WithAutoScalingGroupName(const char* value) { SetAutoScalingGroupName(value); return *this;}

    /**
     * <p>Describes one or more scheduled actions. If you omit this parameter, all
     * scheduled actions are described. If you specify an unknown scheduled action, it
     * is ignored with no error.</p> <p>You can describe up to a maximum of 50
     * instances with a single call. If there are more items to return, the call
     * returns a token. To get the next set of items, repeat the call with the returned
     * token.</p>
     */
    inline const Aws::Vector<Aws::String>& GetScheduledActionNames() const{ return m_scheduledActionNames; }

    /**
     * <p>Describes one or more scheduled actions. If you omit this parameter, all
     * scheduled actions are described. If you specify an unknown scheduled action, it
     * is ignored with no error.</p> <p>You can describe up to a maximum of 50
     * instances with a single call. If there are more items to return, the call
     * returns a token. To get the next set of items, repeat the call with the returned
     * token.</p>
     */
    inline void SetScheduledActionNames(const Aws::Vector<Aws::String>& value) { m_scheduledActionNamesHasBeenSet = true; m_scheduledActionNames = value; }

    /**
     * <p>Describes one or more scheduled actions. If you omit this parameter, all
     * scheduled actions are described. If you specify an unknown scheduled action, it
     * is ignored with no error.</p> <p>You can describe up to a maximum of 50
     * instances with a single call. If there are more items to return, the call
     * returns a token. To get the next set of items, repeat the call with the returned
     * token.</p>
     */
    inline void SetScheduledActionNames(Aws::Vector<Aws::String>&& value) { m_scheduledActionNamesHasBeenSet = true; m_scheduledActionNames = value; }

    /**
     * <p>Describes one or more scheduled actions. If you omit this parameter, all
     * scheduled actions are described. If you specify an unknown scheduled action, it
     * is ignored with no error.</p> <p>You can describe up to a maximum of 50
     * instances with a single call. If there are more items to return, the call
     * returns a token. To get the next set of items, repeat the call with the returned
     * token.</p>
     */
    inline DescribeScheduledActionsRequest& WithScheduledActionNames(const Aws::Vector<Aws::String>& value) { SetScheduledActionNames(value); return *this;}

    /**
     * <p>Describes one or more scheduled actions. If you omit this parameter, all
     * scheduled actions are described. If you specify an unknown scheduled action, it
     * is ignored with no error.</p> <p>You can describe up to a maximum of 50
     * instances with a single call. If there are more items to return, the call
     * returns a token. To get the next set of items, repeat the call with the returned
     * token.</p>
     */
    inline DescribeScheduledActionsRequest& WithScheduledActionNames(Aws::Vector<Aws::String>&& value) { SetScheduledActionNames(value); return *this;}

    /**
     * <p>Describes one or more scheduled actions. If you omit this parameter, all
     * scheduled actions are described. If you specify an unknown scheduled action, it
     * is ignored with no error.</p> <p>You can describe up to a maximum of 50
     * instances with a single call. If there are more items to return, the call
     * returns a token. To get the next set of items, repeat the call with the returned
     * token.</p>
     */
    inline DescribeScheduledActionsRequest& AddScheduledActionNames(const Aws::String& value) { m_scheduledActionNamesHasBeenSet = true; m_scheduledActionNames.push_back(value); return *this; }

    /**
     * <p>Describes one or more scheduled actions. If you omit this parameter, all
     * scheduled actions are described. If you specify an unknown scheduled action, it
     * is ignored with no error.</p> <p>You can describe up to a maximum of 50
     * instances with a single call. If there are more items to return, the call
     * returns a token. To get the next set of items, repeat the call with the returned
     * token.</p>
     */
    inline DescribeScheduledActionsRequest& AddScheduledActionNames(Aws::String&& value) { m_scheduledActionNamesHasBeenSet = true; m_scheduledActionNames.push_back(value); return *this; }

    /**
     * <p>Describes one or more scheduled actions. If you omit this parameter, all
     * scheduled actions are described. If you specify an unknown scheduled action, it
     * is ignored with no error.</p> <p>You can describe up to a maximum of 50
     * instances with a single call. If there are more items to return, the call
     * returns a token. To get the next set of items, repeat the call with the returned
     * token.</p>
     */
    inline DescribeScheduledActionsRequest& AddScheduledActionNames(const char* value) { m_scheduledActionNamesHasBeenSet = true; m_scheduledActionNames.push_back(value); return *this; }

    /**
     * <p>The earliest scheduled start time to return. If scheduled action names are
     * provided, this parameter is ignored.</p>
     */
    inline const Aws::Utils::DateTime& GetStartTime() const{ return m_startTime; }

    /**
     * <p>The earliest scheduled start time to return. If scheduled action names are
     * provided, this parameter is ignored.</p>
     */
    inline void SetStartTime(const Aws::Utils::DateTime& value) { m_startTimeHasBeenSet = true; m_startTime = value; }

    /**
     * <p>The earliest scheduled start time to return. If scheduled action names are
     * provided, this parameter is ignored.</p>
     */
    inline void SetStartTime(Aws::Utils::DateTime&& value) { m_startTimeHasBeenSet = true; m_startTime = value; }

    /**
     * <p>The earliest scheduled start time to return. If scheduled action names are
     * provided, this parameter is ignored.</p>
     */
    inline DescribeScheduledActionsRequest& WithStartTime(const Aws::Utils::DateTime& value) { SetStartTime(value); return *this;}

    /**
     * <p>The earliest scheduled start time to return. If scheduled action names are
     * provided, this parameter is ignored.</p>
     */
    inline DescribeScheduledActionsRequest& WithStartTime(Aws::Utils::DateTime&& value) { SetStartTime(value); return *this;}

    /**
     * <p>The latest scheduled start time to return. If scheduled action names are
     * provided, this parameter is ignored.</p>
     */
    inline const Aws::Utils::DateTime& GetEndTime() const{ return m_endTime; }

    /**
     * <p>The latest scheduled start time to return. If scheduled action names are
     * provided, this parameter is ignored.</p>
     */
    inline void SetEndTime(const Aws::Utils::DateTime& value) { m_endTimeHasBeenSet = true; m_endTime = value; }

    /**
     * <p>The latest scheduled start time to return. If scheduled action names are
     * provided, this parameter is ignored.</p>
     */
    inline void SetEndTime(Aws::Utils::DateTime&& value) { m_endTimeHasBeenSet = true; m_endTime = value; }

    /**
     * <p>The latest scheduled start time to return. If scheduled action names are
     * provided, this parameter is ignored.</p>
     */
    inline DescribeScheduledActionsRequest& WithEndTime(const Aws::Utils::DateTime& value) { SetEndTime(value); return *this;}

    /**
     * <p>The latest scheduled start time to return. If scheduled action names are
     * provided, this parameter is ignored.</p>
     */
    inline DescribeScheduledActionsRequest& WithEndTime(Aws::Utils::DateTime&& value) { SetEndTime(value); return *this;}

    /**
     * <p>The token for the next set of items to return. (You received this token from
     * a previous call.)</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The token for the next set of items to return. (You received this token from
     * a previous call.)</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>The token for the next set of items to return. (You received this token from
     * a previous call.)</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>The token for the next set of items to return. (You received this token from
     * a previous call.)</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>The token for the next set of items to return. (You received this token from
     * a previous call.)</p>
     */
    inline DescribeScheduledActionsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token for the next set of items to return. (You received this token from
     * a previous call.)</p>
     */
    inline DescribeScheduledActionsRequest& WithNextToken(Aws::String&& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token for the next set of items to return. (You received this token from
     * a previous call.)</p>
     */
    inline DescribeScheduledActionsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}

    /**
     * <p>The maximum number of items to return with this call.</p>
     */
    inline int GetMaxRecords() const{ return m_maxRecords; }

    /**
     * <p>The maximum number of items to return with this call.</p>
     */
    inline void SetMaxRecords(int value) { m_maxRecordsHasBeenSet = true; m_maxRecords = value; }

    /**
     * <p>The maximum number of items to return with this call.</p>
     */
    inline DescribeScheduledActionsRequest& WithMaxRecords(int value) { SetMaxRecords(value); return *this;}

  private:
    Aws::String m_autoScalingGroupName;
    bool m_autoScalingGroupNameHasBeenSet;
    Aws::Vector<Aws::String> m_scheduledActionNames;
    bool m_scheduledActionNamesHasBeenSet;
    Aws::Utils::DateTime m_startTime;
    bool m_startTimeHasBeenSet;
    Aws::Utils::DateTime m_endTime;
    bool m_endTimeHasBeenSet;
    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet;
    int m_maxRecords;
    bool m_maxRecordsHasBeenSet;
  };

} // namespace Model
} // namespace AutoScaling
} // namespace Aws
