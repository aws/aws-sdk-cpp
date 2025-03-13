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
    AWS_AUTOSCALING_API BatchPutScheduledUpdateGroupActionRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "BatchPutScheduledUpdateGroupAction"; }

    AWS_AUTOSCALING_API Aws::String SerializePayload() const override;

  protected:
    AWS_AUTOSCALING_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    ///@{
    /**
     * <p>The name of the Auto Scaling group.</p>
     */
    inline const Aws::String& GetAutoScalingGroupName() const { return m_autoScalingGroupName; }
    inline bool AutoScalingGroupNameHasBeenSet() const { return m_autoScalingGroupNameHasBeenSet; }
    template<typename AutoScalingGroupNameT = Aws::String>
    void SetAutoScalingGroupName(AutoScalingGroupNameT&& value) { m_autoScalingGroupNameHasBeenSet = true; m_autoScalingGroupName = std::forward<AutoScalingGroupNameT>(value); }
    template<typename AutoScalingGroupNameT = Aws::String>
    BatchPutScheduledUpdateGroupActionRequest& WithAutoScalingGroupName(AutoScalingGroupNameT&& value) { SetAutoScalingGroupName(std::forward<AutoScalingGroupNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>One or more scheduled actions. The maximum number allowed is 50.</p>
     */
    inline const Aws::Vector<ScheduledUpdateGroupActionRequest>& GetScheduledUpdateGroupActions() const { return m_scheduledUpdateGroupActions; }
    inline bool ScheduledUpdateGroupActionsHasBeenSet() const { return m_scheduledUpdateGroupActionsHasBeenSet; }
    template<typename ScheduledUpdateGroupActionsT = Aws::Vector<ScheduledUpdateGroupActionRequest>>
    void SetScheduledUpdateGroupActions(ScheduledUpdateGroupActionsT&& value) { m_scheduledUpdateGroupActionsHasBeenSet = true; m_scheduledUpdateGroupActions = std::forward<ScheduledUpdateGroupActionsT>(value); }
    template<typename ScheduledUpdateGroupActionsT = Aws::Vector<ScheduledUpdateGroupActionRequest>>
    BatchPutScheduledUpdateGroupActionRequest& WithScheduledUpdateGroupActions(ScheduledUpdateGroupActionsT&& value) { SetScheduledUpdateGroupActions(std::forward<ScheduledUpdateGroupActionsT>(value)); return *this;}
    template<typename ScheduledUpdateGroupActionsT = ScheduledUpdateGroupActionRequest>
    BatchPutScheduledUpdateGroupActionRequest& AddScheduledUpdateGroupActions(ScheduledUpdateGroupActionsT&& value) { m_scheduledUpdateGroupActionsHasBeenSet = true; m_scheduledUpdateGroupActions.emplace_back(std::forward<ScheduledUpdateGroupActionsT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_autoScalingGroupName;
    bool m_autoScalingGroupNameHasBeenSet = false;

    Aws::Vector<ScheduledUpdateGroupActionRequest> m_scheduledUpdateGroupActions;
    bool m_scheduledUpdateGroupActionsHasBeenSet = false;
  };

} // namespace Model
} // namespace AutoScaling
} // namespace Aws
