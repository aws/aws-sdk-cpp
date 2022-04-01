﻿/**
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
  class AWS_AUTOSCALINGPLANS_API UpdateScalingPlanRequest : public AutoScalingPlansRequest
  {
  public:
    UpdateScalingPlanRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateScalingPlan"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


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
    inline UpdateScalingPlanRequest& WithScalingPlanName(const Aws::String& value) { SetScalingPlanName(value); return *this;}

    /**
     * <p>The name of the scaling plan.</p>
     */
    inline UpdateScalingPlanRequest& WithScalingPlanName(Aws::String&& value) { SetScalingPlanName(std::move(value)); return *this;}

    /**
     * <p>The name of the scaling plan.</p>
     */
    inline UpdateScalingPlanRequest& WithScalingPlanName(const char* value) { SetScalingPlanName(value); return *this;}


    /**
     * <p>The version number of the scaling plan. The only valid value is
     * <code>1</code>. Currently, you cannot have multiple scaling plan versions.</p>
     */
    inline long long GetScalingPlanVersion() const{ return m_scalingPlanVersion; }

    /**
     * <p>The version number of the scaling plan. The only valid value is
     * <code>1</code>. Currently, you cannot have multiple scaling plan versions.</p>
     */
    inline bool ScalingPlanVersionHasBeenSet() const { return m_scalingPlanVersionHasBeenSet; }

    /**
     * <p>The version number of the scaling plan. The only valid value is
     * <code>1</code>. Currently, you cannot have multiple scaling plan versions.</p>
     */
    inline void SetScalingPlanVersion(long long value) { m_scalingPlanVersionHasBeenSet = true; m_scalingPlanVersion = value; }

    /**
     * <p>The version number of the scaling plan. The only valid value is
     * <code>1</code>. Currently, you cannot have multiple scaling plan versions.</p>
     */
    inline UpdateScalingPlanRequest& WithScalingPlanVersion(long long value) { SetScalingPlanVersion(value); return *this;}


    /**
     * <p>A CloudFormation stack or set of tags.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/autoscaling/plans/APIReference/API_ApplicationSource.html">ApplicationSource</a>
     * in the <i>AWS Auto Scaling API Reference</i>.</p>
     */
    inline const ApplicationSource& GetApplicationSource() const{ return m_applicationSource; }

    /**
     * <p>A CloudFormation stack or set of tags.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/autoscaling/plans/APIReference/API_ApplicationSource.html">ApplicationSource</a>
     * in the <i>AWS Auto Scaling API Reference</i>.</p>
     */
    inline bool ApplicationSourceHasBeenSet() const { return m_applicationSourceHasBeenSet; }

    /**
     * <p>A CloudFormation stack or set of tags.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/autoscaling/plans/APIReference/API_ApplicationSource.html">ApplicationSource</a>
     * in the <i>AWS Auto Scaling API Reference</i>.</p>
     */
    inline void SetApplicationSource(const ApplicationSource& value) { m_applicationSourceHasBeenSet = true; m_applicationSource = value; }

    /**
     * <p>A CloudFormation stack or set of tags.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/autoscaling/plans/APIReference/API_ApplicationSource.html">ApplicationSource</a>
     * in the <i>AWS Auto Scaling API Reference</i>.</p>
     */
    inline void SetApplicationSource(ApplicationSource&& value) { m_applicationSourceHasBeenSet = true; m_applicationSource = std::move(value); }

    /**
     * <p>A CloudFormation stack or set of tags.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/autoscaling/plans/APIReference/API_ApplicationSource.html">ApplicationSource</a>
     * in the <i>AWS Auto Scaling API Reference</i>.</p>
     */
    inline UpdateScalingPlanRequest& WithApplicationSource(const ApplicationSource& value) { SetApplicationSource(value); return *this;}

    /**
     * <p>A CloudFormation stack or set of tags.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/autoscaling/plans/APIReference/API_ApplicationSource.html">ApplicationSource</a>
     * in the <i>AWS Auto Scaling API Reference</i>.</p>
     */
    inline UpdateScalingPlanRequest& WithApplicationSource(ApplicationSource&& value) { SetApplicationSource(std::move(value)); return *this;}


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
    inline UpdateScalingPlanRequest& WithScalingInstructions(const Aws::Vector<ScalingInstruction>& value) { SetScalingInstructions(value); return *this;}

    /**
     * <p>The scaling instructions.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/autoscaling/plans/APIReference/API_ScalingInstruction.html">ScalingInstruction</a>
     * in the <i>AWS Auto Scaling API Reference</i>.</p>
     */
    inline UpdateScalingPlanRequest& WithScalingInstructions(Aws::Vector<ScalingInstruction>&& value) { SetScalingInstructions(std::move(value)); return *this;}

    /**
     * <p>The scaling instructions.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/autoscaling/plans/APIReference/API_ScalingInstruction.html">ScalingInstruction</a>
     * in the <i>AWS Auto Scaling API Reference</i>.</p>
     */
    inline UpdateScalingPlanRequest& AddScalingInstructions(const ScalingInstruction& value) { m_scalingInstructionsHasBeenSet = true; m_scalingInstructions.push_back(value); return *this; }

    /**
     * <p>The scaling instructions.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/autoscaling/plans/APIReference/API_ScalingInstruction.html">ScalingInstruction</a>
     * in the <i>AWS Auto Scaling API Reference</i>.</p>
     */
    inline UpdateScalingPlanRequest& AddScalingInstructions(ScalingInstruction&& value) { m_scalingInstructionsHasBeenSet = true; m_scalingInstructions.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_scalingPlanName;
    bool m_scalingPlanNameHasBeenSet;

    long long m_scalingPlanVersion;
    bool m_scalingPlanVersionHasBeenSet;

    ApplicationSource m_applicationSource;
    bool m_applicationSourceHasBeenSet;

    Aws::Vector<ScalingInstruction> m_scalingInstructions;
    bool m_scalingInstructionsHasBeenSet;
  };

} // namespace Model
} // namespace AutoScalingPlans
} // namespace Aws
