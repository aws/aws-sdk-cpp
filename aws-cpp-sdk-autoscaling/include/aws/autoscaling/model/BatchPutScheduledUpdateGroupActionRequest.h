/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class BatchPutScheduledUpdateGroupActionRequest : public AutoScalingRequest
  {
  public:
    AWS_AUTOSCALING_API BatchPutScheduledUpdateGroupActionRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "BatchPutScheduledUpdateGroupAction"; }

    AWS_AUTOSCALING_API Aws::String SerializePayload() const override;

  protected:
    AWS_AUTOSCALING_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

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
     * <p>One or more scheduled actions. The maximum number allowed is 50.</p>
     */
    inline const Aws::Vector<ScheduledUpdateGroupActionRequest>& GetScheduledUpdateGroupActions() const{ return m_scheduledUpdateGroupActions; }

    /**
     * <p>One or more scheduled actions. The maximum number allowed is 50.</p>
     */
    inline bool ScheduledUpdateGroupActionsHasBeenSet() const { return m_scheduledUpdateGroupActionsHasBeenSet; }

    /**
     * <p>One or more scheduled actions. The maximum number allowed is 50.</p>
     */
    inline void SetScheduledUpdateGroupActions(const Aws::Vector<ScheduledUpdateGroupActionRequest>& value) { m_scheduledUpdateGroupActionsHasBeenSet = true; m_scheduledUpdateGroupActions = value; }

    /**
     * <p>One or more scheduled actions. The maximum number allowed is 50.</p>
     */
    inline void SetScheduledUpdateGroupActions(Aws::Vector<ScheduledUpdateGroupActionRequest>&& value) { m_scheduledUpdateGroupActionsHasBeenSet = true; m_scheduledUpdateGroupActions = std::move(value); }

    /**
     * <p>One or more scheduled actions. The maximum number allowed is 50.</p>
     */
    inline BatchPutScheduledUpdateGroupActionRequest& WithScheduledUpdateGroupActions(const Aws::Vector<ScheduledUpdateGroupActionRequest>& value) { SetScheduledUpdateGroupActions(value); return *this;}

    /**
     * <p>One or more scheduled actions. The maximum number allowed is 50.</p>
     */
    inline BatchPutScheduledUpdateGroupActionRequest& WithScheduledUpdateGroupActions(Aws::Vector<ScheduledUpdateGroupActionRequest>&& value) { SetScheduledUpdateGroupActions(std::move(value)); return *this;}

    /**
     * <p>One or more scheduled actions. The maximum number allowed is 50.</p>
     */
    inline BatchPutScheduledUpdateGroupActionRequest& AddScheduledUpdateGroupActions(const ScheduledUpdateGroupActionRequest& value) { m_scheduledUpdateGroupActionsHasBeenSet = true; m_scheduledUpdateGroupActions.push_back(value); return *this; }

    /**
     * <p>One or more scheduled actions. The maximum number allowed is 50.</p>
     */
    inline BatchPutScheduledUpdateGroupActionRequest& AddScheduledUpdateGroupActions(ScheduledUpdateGroupActionRequest&& value) { m_scheduledUpdateGroupActionsHasBeenSet = true; m_scheduledUpdateGroupActions.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_autoScalingGroupName;
    bool m_autoScalingGroupNameHasBeenSet = false;

    Aws::Vector<ScheduledUpdateGroupActionRequest> m_scheduledUpdateGroupActions;
    bool m_scheduledUpdateGroupActionsHasBeenSet = false;
  };

} // namespace Model
} // namespace AutoScaling
} // namespace Aws
