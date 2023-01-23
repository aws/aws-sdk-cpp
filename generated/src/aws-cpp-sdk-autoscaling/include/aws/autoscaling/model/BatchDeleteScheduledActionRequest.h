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
    AWS_AUTOSCALING_API BatchDeleteScheduledActionRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "BatchDeleteScheduledAction"; }

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
    inline BatchDeleteScheduledActionRequest& WithAutoScalingGroupName(const Aws::String& value) { SetAutoScalingGroupName(value); return *this;}

    /**
     * <p>The name of the Auto Scaling group.</p>
     */
    inline BatchDeleteScheduledActionRequest& WithAutoScalingGroupName(Aws::String&& value) { SetAutoScalingGroupName(std::move(value)); return *this;}

    /**
     * <p>The name of the Auto Scaling group.</p>
     */
    inline BatchDeleteScheduledActionRequest& WithAutoScalingGroupName(const char* value) { SetAutoScalingGroupName(value); return *this;}


    /**
     * <p>The names of the scheduled actions to delete. The maximum number allowed is
     * 50. </p>
     */
    inline const Aws::Vector<Aws::String>& GetScheduledActionNames() const{ return m_scheduledActionNames; }

    /**
     * <p>The names of the scheduled actions to delete. The maximum number allowed is
     * 50. </p>
     */
    inline bool ScheduledActionNamesHasBeenSet() const { return m_scheduledActionNamesHasBeenSet; }

    /**
     * <p>The names of the scheduled actions to delete. The maximum number allowed is
     * 50. </p>
     */
    inline void SetScheduledActionNames(const Aws::Vector<Aws::String>& value) { m_scheduledActionNamesHasBeenSet = true; m_scheduledActionNames = value; }

    /**
     * <p>The names of the scheduled actions to delete. The maximum number allowed is
     * 50. </p>
     */
    inline void SetScheduledActionNames(Aws::Vector<Aws::String>&& value) { m_scheduledActionNamesHasBeenSet = true; m_scheduledActionNames = std::move(value); }

    /**
     * <p>The names of the scheduled actions to delete. The maximum number allowed is
     * 50. </p>
     */
    inline BatchDeleteScheduledActionRequest& WithScheduledActionNames(const Aws::Vector<Aws::String>& value) { SetScheduledActionNames(value); return *this;}

    /**
     * <p>The names of the scheduled actions to delete. The maximum number allowed is
     * 50. </p>
     */
    inline BatchDeleteScheduledActionRequest& WithScheduledActionNames(Aws::Vector<Aws::String>&& value) { SetScheduledActionNames(std::move(value)); return *this;}

    /**
     * <p>The names of the scheduled actions to delete. The maximum number allowed is
     * 50. </p>
     */
    inline BatchDeleteScheduledActionRequest& AddScheduledActionNames(const Aws::String& value) { m_scheduledActionNamesHasBeenSet = true; m_scheduledActionNames.push_back(value); return *this; }

    /**
     * <p>The names of the scheduled actions to delete. The maximum number allowed is
     * 50. </p>
     */
    inline BatchDeleteScheduledActionRequest& AddScheduledActionNames(Aws::String&& value) { m_scheduledActionNamesHasBeenSet = true; m_scheduledActionNames.push_back(std::move(value)); return *this; }

    /**
     * <p>The names of the scheduled actions to delete. The maximum number allowed is
     * 50. </p>
     */
    inline BatchDeleteScheduledActionRequest& AddScheduledActionNames(const char* value) { m_scheduledActionNamesHasBeenSet = true; m_scheduledActionNames.push_back(value); return *this; }

  private:

    Aws::String m_autoScalingGroupName;
    bool m_autoScalingGroupNameHasBeenSet = false;

    Aws::Vector<Aws::String> m_scheduledActionNames;
    bool m_scheduledActionNamesHasBeenSet = false;
  };

} // namespace Model
} // namespace AutoScaling
} // namespace Aws
