/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/autoscaling-plans/AutoScalingPlans_EXPORTS.h>
#include <aws/autoscaling-plans/AutoScalingPlansRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace AutoScalingPlans
{
namespace Model
{

  /**
   */
  class DeleteScalingPlanRequest : public AutoScalingPlansRequest
  {
  public:
    AWS_AUTOSCALINGPLANS_API DeleteScalingPlanRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteScalingPlan"; }

    AWS_AUTOSCALINGPLANS_API Aws::String SerializePayload() const override;

    AWS_AUTOSCALINGPLANS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The name of the scaling plan.</p>
     */
    inline const Aws::String& GetScalingPlanName() const{ return m_scalingPlanName; }

    /**
     * <p>The name of the scaling plan.</p>
     */
    inline bool ScalingPlanNameHasBeenSet() const { return m_scalingPlanNameHasBeenSet; }

    /**
     * <p>The name of the scaling plan.</p>
     */
    inline void SetScalingPlanName(const Aws::String& value) { m_scalingPlanNameHasBeenSet = true; m_scalingPlanName = value; }

    /**
     * <p>The name of the scaling plan.</p>
     */
    inline void SetScalingPlanName(Aws::String&& value) { m_scalingPlanNameHasBeenSet = true; m_scalingPlanName = std::move(value); }

    /**
     * <p>The name of the scaling plan.</p>
     */
    inline void SetScalingPlanName(const char* value) { m_scalingPlanNameHasBeenSet = true; m_scalingPlanName.assign(value); }

    /**
     * <p>The name of the scaling plan.</p>
     */
    inline DeleteScalingPlanRequest& WithScalingPlanName(const Aws::String& value) { SetScalingPlanName(value); return *this;}

    /**
     * <p>The name of the scaling plan.</p>
     */
    inline DeleteScalingPlanRequest& WithScalingPlanName(Aws::String&& value) { SetScalingPlanName(std::move(value)); return *this;}

    /**
     * <p>The name of the scaling plan.</p>
     */
    inline DeleteScalingPlanRequest& WithScalingPlanName(const char* value) { SetScalingPlanName(value); return *this;}


    /**
     * <p>The version number of the scaling plan. Currently, the only valid value is
     * <code>1</code>.</p>
     */
    inline long long GetScalingPlanVersion() const{ return m_scalingPlanVersion; }

    /**
     * <p>The version number of the scaling plan. Currently, the only valid value is
     * <code>1</code>.</p>
     */
    inline bool ScalingPlanVersionHasBeenSet() const { return m_scalingPlanVersionHasBeenSet; }

    /**
     * <p>The version number of the scaling plan. Currently, the only valid value is
     * <code>1</code>.</p>
     */
    inline void SetScalingPlanVersion(long long value) { m_scalingPlanVersionHasBeenSet = true; m_scalingPlanVersion = value; }

    /**
     * <p>The version number of the scaling plan. Currently, the only valid value is
     * <code>1</code>.</p>
     */
    inline DeleteScalingPlanRequest& WithScalingPlanVersion(long long value) { SetScalingPlanVersion(value); return *this;}

  private:

    Aws::String m_scalingPlanName;
    bool m_scalingPlanNameHasBeenSet = false;

    long long m_scalingPlanVersion;
    bool m_scalingPlanVersionHasBeenSet = false;
  };

} // namespace Model
} // namespace AutoScalingPlans
} // namespace Aws
