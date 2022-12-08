/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/autoscaling-plans/AutoScalingPlans_EXPORTS.h>
#include <aws/autoscaling-plans/AutoScalingPlansRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/autoscaling-plans/model/ApplicationSource.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/autoscaling-plans/model/ScalingInstruction.h>
#include <utility>

namespace Aws
{
namespace AutoScalingPlans
{
namespace Model
{

  /**
   */
  class CreateScalingPlanRequest : public AutoScalingPlansRequest
  {
  public:
    AWS_AUTOSCALINGPLANS_API CreateScalingPlanRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateScalingPlan"; }

    AWS_AUTOSCALINGPLANS_API Aws::String SerializePayload() const override;

    AWS_AUTOSCALINGPLANS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The name of the scaling plan. Names cannot contain vertical bars, colons, or
     * forward slashes.</p>
     */
    inline const Aws::String& GetScalingPlanName() const{ return m_scalingPlanName; }

    /**
     * <p>The name of the scaling plan. Names cannot contain vertical bars, colons, or
     * forward slashes.</p>
     */
    inline bool ScalingPlanNameHasBeenSet() const { return m_scalingPlanNameHasBeenSet; }

    /**
     * <p>The name of the scaling plan. Names cannot contain vertical bars, colons, or
     * forward slashes.</p>
     */
    inline void SetScalingPlanName(const Aws::String& value) { m_scalingPlanNameHasBeenSet = true; m_scalingPlanName = value; }

    /**
     * <p>The name of the scaling plan. Names cannot contain vertical bars, colons, or
     * forward slashes.</p>
     */
    inline void SetScalingPlanName(Aws::String&& value) { m_scalingPlanNameHasBeenSet = true; m_scalingPlanName = std::move(value); }

    /**
     * <p>The name of the scaling plan. Names cannot contain vertical bars, colons, or
     * forward slashes.</p>
     */
    inline void SetScalingPlanName(const char* value) { m_scalingPlanNameHasBeenSet = true; m_scalingPlanName.assign(value); }

    /**
     * <p>The name of the scaling plan. Names cannot contain vertical bars, colons, or
     * forward slashes.</p>
     */
    inline CreateScalingPlanRequest& WithScalingPlanName(const Aws::String& value) { SetScalingPlanName(value); return *this;}

    /**
     * <p>The name of the scaling plan. Names cannot contain vertical bars, colons, or
     * forward slashes.</p>
     */
    inline CreateScalingPlanRequest& WithScalingPlanName(Aws::String&& value) { SetScalingPlanName(std::move(value)); return *this;}

    /**
     * <p>The name of the scaling plan. Names cannot contain vertical bars, colons, or
     * forward slashes.</p>
     */
    inline CreateScalingPlanRequest& WithScalingPlanName(const char* value) { SetScalingPlanName(value); return *this;}


    /**
     * <p>A CloudFormation stack or set of tags. You can create one scaling plan per
     * application source.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/autoscaling/plans/APIReference/API_ApplicationSource.html">ApplicationSource</a>
     * in the <i>AWS Auto Scaling API Reference</i>.</p>
     */
    inline const ApplicationSource& GetApplicationSource() const{ return m_applicationSource; }

    /**
     * <p>A CloudFormation stack or set of tags. You can create one scaling plan per
     * application source.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/autoscaling/plans/APIReference/API_ApplicationSource.html">ApplicationSource</a>
     * in the <i>AWS Auto Scaling API Reference</i>.</p>
     */
    inline bool ApplicationSourceHasBeenSet() const { return m_applicationSourceHasBeenSet; }

    /**
     * <p>A CloudFormation stack or set of tags. You can create one scaling plan per
     * application source.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/autoscaling/plans/APIReference/API_ApplicationSource.html">ApplicationSource</a>
     * in the <i>AWS Auto Scaling API Reference</i>.</p>
     */
    inline void SetApplicationSource(const ApplicationSource& value) { m_applicationSourceHasBeenSet = true; m_applicationSource = value; }

    /**
     * <p>A CloudFormation stack or set of tags. You can create one scaling plan per
     * application source.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/autoscaling/plans/APIReference/API_ApplicationSource.html">ApplicationSource</a>
     * in the <i>AWS Auto Scaling API Reference</i>.</p>
     */
    inline void SetApplicationSource(ApplicationSource&& value) { m_applicationSourceHasBeenSet = true; m_applicationSource = std::move(value); }

    /**
     * <p>A CloudFormation stack or set of tags. You can create one scaling plan per
     * application source.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/autoscaling/plans/APIReference/API_ApplicationSource.html">ApplicationSource</a>
     * in the <i>AWS Auto Scaling API Reference</i>.</p>
     */
    inline CreateScalingPlanRequest& WithApplicationSource(const ApplicationSource& value) { SetApplicationSource(value); return *this;}

    /**
     * <p>A CloudFormation stack or set of tags. You can create one scaling plan per
     * application source.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/autoscaling/plans/APIReference/API_ApplicationSource.html">ApplicationSource</a>
     * in the <i>AWS Auto Scaling API Reference</i>.</p>
     */
    inline CreateScalingPlanRequest& WithApplicationSource(ApplicationSource&& value) { SetApplicationSource(std::move(value)); return *this;}


    /**
     * <p>The scaling instructions.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/autoscaling/plans/APIReference/API_ScalingInstruction.html">ScalingInstruction</a>
     * in the <i>AWS Auto Scaling API Reference</i>.</p>
     */
    inline const Aws::Vector<ScalingInstruction>& GetScalingInstructions() const{ return m_scalingInstructions; }

    /**
     * <p>The scaling instructions.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/autoscaling/plans/APIReference/API_ScalingInstruction.html">ScalingInstruction</a>
     * in the <i>AWS Auto Scaling API Reference</i>.</p>
     */
    inline bool ScalingInstructionsHasBeenSet() const { return m_scalingInstructionsHasBeenSet; }

    /**
     * <p>The scaling instructions.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/autoscaling/plans/APIReference/API_ScalingInstruction.html">ScalingInstruction</a>
     * in the <i>AWS Auto Scaling API Reference</i>.</p>
     */
    inline void SetScalingInstructions(const Aws::Vector<ScalingInstruction>& value) { m_scalingInstructionsHasBeenSet = true; m_scalingInstructions = value; }

    /**
     * <p>The scaling instructions.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/autoscaling/plans/APIReference/API_ScalingInstruction.html">ScalingInstruction</a>
     * in the <i>AWS Auto Scaling API Reference</i>.</p>
     */
    inline void SetScalingInstructions(Aws::Vector<ScalingInstruction>&& value) { m_scalingInstructionsHasBeenSet = true; m_scalingInstructions = std::move(value); }

    /**
     * <p>The scaling instructions.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/autoscaling/plans/APIReference/API_ScalingInstruction.html">ScalingInstruction</a>
     * in the <i>AWS Auto Scaling API Reference</i>.</p>
     */
    inline CreateScalingPlanRequest& WithScalingInstructions(const Aws::Vector<ScalingInstruction>& value) { SetScalingInstructions(value); return *this;}

    /**
     * <p>The scaling instructions.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/autoscaling/plans/APIReference/API_ScalingInstruction.html">ScalingInstruction</a>
     * in the <i>AWS Auto Scaling API Reference</i>.</p>
     */
    inline CreateScalingPlanRequest& WithScalingInstructions(Aws::Vector<ScalingInstruction>&& value) { SetScalingInstructions(std::move(value)); return *this;}

    /**
     * <p>The scaling instructions.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/autoscaling/plans/APIReference/API_ScalingInstruction.html">ScalingInstruction</a>
     * in the <i>AWS Auto Scaling API Reference</i>.</p>
     */
    inline CreateScalingPlanRequest& AddScalingInstructions(const ScalingInstruction& value) { m_scalingInstructionsHasBeenSet = true; m_scalingInstructions.push_back(value); return *this; }

    /**
     * <p>The scaling instructions.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/autoscaling/plans/APIReference/API_ScalingInstruction.html">ScalingInstruction</a>
     * in the <i>AWS Auto Scaling API Reference</i>.</p>
     */
    inline CreateScalingPlanRequest& AddScalingInstructions(ScalingInstruction&& value) { m_scalingInstructionsHasBeenSet = true; m_scalingInstructions.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_scalingPlanName;
    bool m_scalingPlanNameHasBeenSet = false;

    ApplicationSource m_applicationSource;
    bool m_applicationSourceHasBeenSet = false;

    Aws::Vector<ScalingInstruction> m_scalingInstructions;
    bool m_scalingInstructionsHasBeenSet = false;
  };

} // namespace Model
} // namespace AutoScalingPlans
} // namespace Aws
