/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/autoscaling/AutoScaling_EXPORTS.h>
#include <aws/autoscaling/AutoScalingRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <utility>

namespace Aws
{
namespace AutoScaling
{
namespace Model
{

  /**
   */
  class BatchDeleteScheduledActionRequest : public AutoScalingRequest
  {
  public:
    AWS_AUTOSCALING_API BatchDeleteScheduledActionRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "BatchDeleteScheduledAction"; }

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
    BatchDeleteScheduledActionRequest& WithAutoScalingGroupName(AutoScalingGroupNameT&& value) { SetAutoScalingGroupName(std::forward<AutoScalingGroupNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The names of the scheduled actions to delete. The maximum number allowed is
     * 50. </p>
     */
    inline const Aws::Vector<Aws::String>& GetScheduledActionNames() const { return m_scheduledActionNames; }
    inline bool ScheduledActionNamesHasBeenSet() const { return m_scheduledActionNamesHasBeenSet; }
    template<typename ScheduledActionNamesT = Aws::Vector<Aws::String>>
    void SetScheduledActionNames(ScheduledActionNamesT&& value) { m_scheduledActionNamesHasBeenSet = true; m_scheduledActionNames = std::forward<ScheduledActionNamesT>(value); }
    template<typename ScheduledActionNamesT = Aws::Vector<Aws::String>>
    BatchDeleteScheduledActionRequest& WithScheduledActionNames(ScheduledActionNamesT&& value) { SetScheduledActionNames(std::forward<ScheduledActionNamesT>(value)); return *this;}
    template<typename ScheduledActionNamesT = Aws::String>
    BatchDeleteScheduledActionRequest& AddScheduledActionNames(ScheduledActionNamesT&& value) { m_scheduledActionNamesHasBeenSet = true; m_scheduledActionNames.emplace_back(std::forward<ScheduledActionNamesT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_autoScalingGroupName;
    bool m_autoScalingGroupNameHasBeenSet = false;

    Aws::Vector<Aws::String> m_scheduledActionNames;
    bool m_scheduledActionNamesHasBeenSet = false;
  };

} // namespace Model
} // namespace AutoScaling
} // namespace Aws
