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
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace AutoScaling
{
namespace Model
{

  /**
   * <p>Contains the parameters for DescribeNotificationConfigurations.</p>
   */
  class AWS_AUTOSCALING_API DescribeNotificationConfigurationsRequest : public AutoScalingRequest
  {
  public:
    DescribeNotificationConfigurationsRequest();
    Aws::String SerializePayload() const override;

    /**
     * <p>The name of the group.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAutoScalingGroupNames() const{ return m_autoScalingGroupNames; }

    /**
     * <p>The name of the group.</p>
     */
    inline void SetAutoScalingGroupNames(const Aws::Vector<Aws::String>& value) { m_autoScalingGroupNamesHasBeenSet = true; m_autoScalingGroupNames = value; }

    /**
     * <p>The name of the group.</p>
     */
    inline void SetAutoScalingGroupNames(Aws::Vector<Aws::String>&& value) { m_autoScalingGroupNamesHasBeenSet = true; m_autoScalingGroupNames = value; }

    /**
     * <p>The name of the group.</p>
     */
    inline DescribeNotificationConfigurationsRequest& WithAutoScalingGroupNames(const Aws::Vector<Aws::String>& value) { SetAutoScalingGroupNames(value); return *this;}

    /**
     * <p>The name of the group.</p>
     */
    inline DescribeNotificationConfigurationsRequest& WithAutoScalingGroupNames(Aws::Vector<Aws::String>&& value) { SetAutoScalingGroupNames(value); return *this;}

    /**
     * <p>The name of the group.</p>
     */
    inline DescribeNotificationConfigurationsRequest& AddAutoScalingGroupNames(const Aws::String& value) { m_autoScalingGroupNamesHasBeenSet = true; m_autoScalingGroupNames.push_back(value); return *this; }

    /**
     * <p>The name of the group.</p>
     */
    inline DescribeNotificationConfigurationsRequest& AddAutoScalingGroupNames(Aws::String&& value) { m_autoScalingGroupNamesHasBeenSet = true; m_autoScalingGroupNames.push_back(value); return *this; }

    /**
     * <p>The name of the group.</p>
     */
    inline DescribeNotificationConfigurationsRequest& AddAutoScalingGroupNames(const char* value) { m_autoScalingGroupNamesHasBeenSet = true; m_autoScalingGroupNames.push_back(value); return *this; }

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
    inline DescribeNotificationConfigurationsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token for the next set of items to return. (You received this token from
     * a previous call.)</p>
     */
    inline DescribeNotificationConfigurationsRequest& WithNextToken(Aws::String&& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token for the next set of items to return. (You received this token from
     * a previous call.)</p>
     */
    inline DescribeNotificationConfigurationsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}

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
    inline DescribeNotificationConfigurationsRequest& WithMaxRecords(int value) { SetMaxRecords(value); return *this;}

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
