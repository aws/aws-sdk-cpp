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
#include <aws/health/Health_EXPORTS.h>
#include <aws/health/HealthRequest.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Health
{
namespace Model
{

  /**
   */
  class AWS_HEALTH_API DescribeEntityAggregatesRequest : public HealthRequest
  {
  public:
    DescribeEntityAggregatesRequest();
    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>A list of event ARNs (unique identifiers). For example:
     * <code>"arn:aws:health:us-east-1::event/AWS_EC2_MAINTENANCE_5331",
     * "arn:aws:health:us-west-1::event/AWS_EBS_LOST_VOLUME_xyz"</code> </p>
     */
    inline const Aws::Vector<Aws::String>& GetEventArns() const{ return m_eventArns; }

    /**
     * <p>A list of event ARNs (unique identifiers). For example:
     * <code>"arn:aws:health:us-east-1::event/AWS_EC2_MAINTENANCE_5331",
     * "arn:aws:health:us-west-1::event/AWS_EBS_LOST_VOLUME_xyz"</code> </p>
     */
    inline void SetEventArns(const Aws::Vector<Aws::String>& value) { m_eventArnsHasBeenSet = true; m_eventArns = value; }

    /**
     * <p>A list of event ARNs (unique identifiers). For example:
     * <code>"arn:aws:health:us-east-1::event/AWS_EC2_MAINTENANCE_5331",
     * "arn:aws:health:us-west-1::event/AWS_EBS_LOST_VOLUME_xyz"</code> </p>
     */
    inline void SetEventArns(Aws::Vector<Aws::String>&& value) { m_eventArnsHasBeenSet = true; m_eventArns = value; }

    /**
     * <p>A list of event ARNs (unique identifiers). For example:
     * <code>"arn:aws:health:us-east-1::event/AWS_EC2_MAINTENANCE_5331",
     * "arn:aws:health:us-west-1::event/AWS_EBS_LOST_VOLUME_xyz"</code> </p>
     */
    inline DescribeEntityAggregatesRequest& WithEventArns(const Aws::Vector<Aws::String>& value) { SetEventArns(value); return *this;}

    /**
     * <p>A list of event ARNs (unique identifiers). For example:
     * <code>"arn:aws:health:us-east-1::event/AWS_EC2_MAINTENANCE_5331",
     * "arn:aws:health:us-west-1::event/AWS_EBS_LOST_VOLUME_xyz"</code> </p>
     */
    inline DescribeEntityAggregatesRequest& WithEventArns(Aws::Vector<Aws::String>&& value) { SetEventArns(value); return *this;}

    /**
     * <p>A list of event ARNs (unique identifiers). For example:
     * <code>"arn:aws:health:us-east-1::event/AWS_EC2_MAINTENANCE_5331",
     * "arn:aws:health:us-west-1::event/AWS_EBS_LOST_VOLUME_xyz"</code> </p>
     */
    inline DescribeEntityAggregatesRequest& AddEventArns(const Aws::String& value) { m_eventArnsHasBeenSet = true; m_eventArns.push_back(value); return *this; }

    /**
     * <p>A list of event ARNs (unique identifiers). For example:
     * <code>"arn:aws:health:us-east-1::event/AWS_EC2_MAINTENANCE_5331",
     * "arn:aws:health:us-west-1::event/AWS_EBS_LOST_VOLUME_xyz"</code> </p>
     */
    inline DescribeEntityAggregatesRequest& AddEventArns(Aws::String&& value) { m_eventArnsHasBeenSet = true; m_eventArns.push_back(value); return *this; }

    /**
     * <p>A list of event ARNs (unique identifiers). For example:
     * <code>"arn:aws:health:us-east-1::event/AWS_EC2_MAINTENANCE_5331",
     * "arn:aws:health:us-west-1::event/AWS_EBS_LOST_VOLUME_xyz"</code> </p>
     */
    inline DescribeEntityAggregatesRequest& AddEventArns(const char* value) { m_eventArnsHasBeenSet = true; m_eventArns.push_back(value); return *this; }

  private:
    Aws::Vector<Aws::String> m_eventArns;
    bool m_eventArnsHasBeenSet;
  };

} // namespace Model
} // namespace Health
} // namespace Aws
