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
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/autoscaling/model/ScheduledUpdateGroupActionRequest.h>
#include <utility>

namespace Aws
{
namespace AutoScaling
{
namespace Model
{

  /**
   */
  class AWS_AUTOSCALING_API BatchPutScheduledUpdateGroupActionRequest : public AutoScalingRequest
  {
  public:
    BatchPutScheduledUpdateGroupActionRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "BatchPutScheduledUpdateGroupAction"; }

    Aws::String SerializePayload() const override;

  protected:
    void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

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
    inline BatchPutScheduledUpdateGroupActionRequest& WithAutoScalingGroupName(const Aws::String& value) { SetAutoScalingGroupName(value); return *this;}

    /**
     * <p>The name of the Auto Scaling group.</p>
     */
    inline BatchPutScheduledUpdateGroupActionRequest& WithAutoScalingGroupName(Aws::String&& value) { SetAutoScalingGroupName(std::move(value)); return *this;}

    /**
     * <p>The name of the Auto Scaling group.</p>
     */
    inline BatchPutScheduledUpdateGroupActionRequest& WithAutoScalingGroupName(const char* value) { SetAutoScalingGroupName(value); return *this;}


    /**
     * <p>One or more scheduled actions. The maximum number allowed is 50. </p>
     */
    inline const Aws::Vector<ScheduledUpdateGroupActionRequest>& GetScheduledUpdateGroupActions() const{ return m_scheduledUpdateGroupActions; }

    /**
     * <p>One or more scheduled actions. The maximum number allowed is 50. </p>
     */
    inline bool ScheduledUpdateGroupActionsHasBeenSet() const { return m_scheduledUpdateGroupActionsHasBeenSet; }

    /**
     * <p>One or more scheduled actions. The maximum number allowed is 50. </p>
     */
    inline void SetScheduledUpdateGroupActions(const Aws::Vector<ScheduledUpdateGroupActionRequest>& value) { m_scheduledUpdateGroupActionsHasBeenSet = true; m_scheduledUpdateGroupActions = value; }

    /**
     * <p>One or more scheduled actions. The maximum number allowed is 50. </p>
     */
    inline void SetScheduledUpdateGroupActions(Aws::Vector<ScheduledUpdateGroupActionRequest>&& value) { m_scheduledUpdateGroupActionsHasBeenSet = true; m_scheduledUpdateGroupActions = std::move(value); }

    /**
     * <p>One or more scheduled actions. The maximum number allowed is 50. </p>
     */
    inline BatchPutScheduledUpdateGroupActionRequest& WithScheduledUpdateGroupActions(const Aws::Vector<ScheduledUpdateGroupActionRequest>& value) { SetScheduledUpdateGroupActions(value); return *this;}

    /**
     * <p>One or more scheduled actions. The maximum number allowed is 50. </p>
     */
    inline BatchPutScheduledUpdateGroupActionRequest& WithScheduledUpdateGroupActions(Aws::Vector<ScheduledUpdateGroupActionRequest>&& value) { SetScheduledUpdateGroupActions(std::move(value)); return *this;}

    /**
     * <p>One or more scheduled actions. The maximum number allowed is 50. </p>
     */
    inline BatchPutScheduledUpdateGroupActionRequest& AddScheduledUpdateGroupActions(const ScheduledUpdateGroupActionRequest& value) { m_scheduledUpdateGroupActionsHasBeenSet = true; m_scheduledUpdateGroupActions.push_back(value); return *this; }

    /**
     * <p>One or more scheduled actions. The maximum number allowed is 50. </p>
     */
    inline BatchPutScheduledUpdateGroupActionRequest& AddScheduledUpdateGroupActions(ScheduledUpdateGroupActionRequest&& value) { m_scheduledUpdateGroupActionsHasBeenSet = true; m_scheduledUpdateGroupActions.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_autoScalingGroupName;
    bool m_autoScalingGroupNameHasBeenSet;

    Aws::Vector<ScheduledUpdateGroupActionRequest> m_scheduledUpdateGroupActions;
    bool m_scheduledUpdateGroupActionsHasBeenSet;
  };

} // namespace Model
} // namespace AutoScaling
} // namespace Aws
