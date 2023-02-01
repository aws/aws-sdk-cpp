/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/autoscaling/AutoScaling_EXPORTS.h>
#include <aws/autoscaling/AutoScalingRequest.h>
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
  class DeleteWarmPoolRequest : public AutoScalingRequest
  {
  public:
    AWS_AUTOSCALING_API DeleteWarmPoolRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteWarmPool"; }

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
    inline DeleteWarmPoolRequest& WithAutoScalingGroupName(const Aws::String& value) { SetAutoScalingGroupName(value); return *this;}

    /**
     * <p>The name of the Auto Scaling group.</p>
     */
    inline DeleteWarmPoolRequest& WithAutoScalingGroupName(Aws::String&& value) { SetAutoScalingGroupName(std::move(value)); return *this;}

    /**
     * <p>The name of the Auto Scaling group.</p>
     */
    inline DeleteWarmPoolRequest& WithAutoScalingGroupName(const char* value) { SetAutoScalingGroupName(value); return *this;}


    /**
     * <p>Specifies that the warm pool is to be deleted along with all of its
     * associated instances, without waiting for all instances to be terminated. This
     * parameter also deletes any outstanding lifecycle actions associated with the
     * warm pool instances.</p>
     */
    inline bool GetForceDelete() const{ return m_forceDelete; }

    /**
     * <p>Specifies that the warm pool is to be deleted along with all of its
     * associated instances, without waiting for all instances to be terminated. This
     * parameter also deletes any outstanding lifecycle actions associated with the
     * warm pool instances.</p>
     */
    inline bool ForceDeleteHasBeenSet() const { return m_forceDeleteHasBeenSet; }

    /**
     * <p>Specifies that the warm pool is to be deleted along with all of its
     * associated instances, without waiting for all instances to be terminated. This
     * parameter also deletes any outstanding lifecycle actions associated with the
     * warm pool instances.</p>
     */
    inline void SetForceDelete(bool value) { m_forceDeleteHasBeenSet = true; m_forceDelete = value; }

    /**
     * <p>Specifies that the warm pool is to be deleted along with all of its
     * associated instances, without waiting for all instances to be terminated. This
     * parameter also deletes any outstanding lifecycle actions associated with the
     * warm pool instances.</p>
     */
    inline DeleteWarmPoolRequest& WithForceDelete(bool value) { SetForceDelete(value); return *this;}

  private:

    Aws::String m_autoScalingGroupName;
    bool m_autoScalingGroupNameHasBeenSet = false;

    bool m_forceDelete;
    bool m_forceDeleteHasBeenSet = false;
  };

} // namespace Model
} // namespace AutoScaling
} // namespace Aws
