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
  class UpdateScalingPlanRequest : public AutoScalingPlansRequest
  {
  public:
    AWS_AUTOSCALINGPLANS_API UpdateScalingPlanRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateScalingPlan"; }

    AWS_AUTOSCALINGPLANS_API Aws::String SerializePayload() const override;

    AWS_AUTOSCALINGPLANS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The name of the scaling plan.</p>
     */
    inline const Aws::String& GetScalingPlanName() const { return m_scalingPlanName; }
    inline bool ScalingPlanNameHasBeenSet() const { return m_scalingPlanNameHasBeenSet; }
    template<typename ScalingPlanNameT = Aws::String>
    void SetScalingPlanName(ScalingPlanNameT&& value) { m_scalingPlanNameHasBeenSet = true; m_scalingPlanName = std::forward<ScalingPlanNameT>(value); }
    template<typename ScalingPlanNameT = Aws::String>
    UpdateScalingPlanRequest& WithScalingPlanName(ScalingPlanNameT&& value) { SetScalingPlanName(std::forward<ScalingPlanNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version number of the scaling plan. The only valid value is
     * <code>1</code>. Currently, you cannot have multiple scaling plan versions.</p>
     */
    inline long long GetScalingPlanVersion() const { return m_scalingPlanVersion; }
    inline bool ScalingPlanVersionHasBeenSet() const { return m_scalingPlanVersionHasBeenSet; }
    inline void SetScalingPlanVersion(long long value) { m_scalingPlanVersionHasBeenSet = true; m_scalingPlanVersion = value; }
    inline UpdateScalingPlanRequest& WithScalingPlanVersion(long long value) { SetScalingPlanVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A CloudFormation stack or set of tags.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/autoscaling/plans/APIReference/API_ApplicationSource.html">ApplicationSource</a>
     * in the <i>AWS Auto Scaling API Reference</i>.</p>
     */
    inline const ApplicationSource& GetApplicationSource() const { return m_applicationSource; }
    inline bool ApplicationSourceHasBeenSet() const { return m_applicationSourceHasBeenSet; }
    template<typename ApplicationSourceT = ApplicationSource>
    void SetApplicationSource(ApplicationSourceT&& value) { m_applicationSourceHasBeenSet = true; m_applicationSource = std::forward<ApplicationSourceT>(value); }
    template<typename ApplicationSourceT = ApplicationSource>
    UpdateScalingPlanRequest& WithApplicationSource(ApplicationSourceT&& value) { SetApplicationSource(std::forward<ApplicationSourceT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The scaling instructions.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/autoscaling/plans/APIReference/API_ScalingInstruction.html">ScalingInstruction</a>
     * in the <i>AWS Auto Scaling API Reference</i>.</p>
     */
    inline const Aws::Vector<ScalingInstruction>& GetScalingInstructions() const { return m_scalingInstructions; }
    inline bool ScalingInstructionsHasBeenSet() const { return m_scalingInstructionsHasBeenSet; }
    template<typename ScalingInstructionsT = Aws::Vector<ScalingInstruction>>
    void SetScalingInstructions(ScalingInstructionsT&& value) { m_scalingInstructionsHasBeenSet = true; m_scalingInstructions = std::forward<ScalingInstructionsT>(value); }
    template<typename ScalingInstructionsT = Aws::Vector<ScalingInstruction>>
    UpdateScalingPlanRequest& WithScalingInstructions(ScalingInstructionsT&& value) { SetScalingInstructions(std::forward<ScalingInstructionsT>(value)); return *this;}
    template<typename ScalingInstructionsT = ScalingInstruction>
    UpdateScalingPlanRequest& AddScalingInstructions(ScalingInstructionsT&& value) { m_scalingInstructionsHasBeenSet = true; m_scalingInstructions.emplace_back(std::forward<ScalingInstructionsT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_scalingPlanName;
    bool m_scalingPlanNameHasBeenSet = false;

    long long m_scalingPlanVersion{0};
    bool m_scalingPlanVersionHasBeenSet = false;

    ApplicationSource m_applicationSource;
    bool m_applicationSourceHasBeenSet = false;

    Aws::Vector<ScalingInstruction> m_scalingInstructions;
    bool m_scalingInstructionsHasBeenSet = false;
  };

} // namespace Model
} // namespace AutoScalingPlans
} // namespace Aws
