/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/autoscaling-plans/AutoScalingPlans_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/autoscaling-plans/model/ApplicationSource.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/autoscaling-plans/model/ScalingPlanStatusCode.h>
#include <aws/core/utils/DateTime.h>
#include <aws/autoscaling-plans/model/ScalingInstruction.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace AutoScalingPlans
{
namespace Model
{

  /**
   * <p>Represents a scaling plan.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/autoscaling-plans-2018-01-06/ScalingPlan">AWS
   * API Reference</a></p>
   */
  class ScalingPlan
  {
  public:
    AWS_AUTOSCALINGPLANS_API ScalingPlan() = default;
    AWS_AUTOSCALINGPLANS_API ScalingPlan(Aws::Utils::Json::JsonView jsonValue);
    AWS_AUTOSCALINGPLANS_API ScalingPlan& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_AUTOSCALINGPLANS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the scaling plan.</p>
     */
    inline const Aws::String& GetScalingPlanName() const { return m_scalingPlanName; }
    inline bool ScalingPlanNameHasBeenSet() const { return m_scalingPlanNameHasBeenSet; }
    template<typename ScalingPlanNameT = Aws::String>
    void SetScalingPlanName(ScalingPlanNameT&& value) { m_scalingPlanNameHasBeenSet = true; m_scalingPlanName = std::forward<ScalingPlanNameT>(value); }
    template<typename ScalingPlanNameT = Aws::String>
    ScalingPlan& WithScalingPlanName(ScalingPlanNameT&& value) { SetScalingPlanName(std::forward<ScalingPlanNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version number of the scaling plan.</p>
     */
    inline long long GetScalingPlanVersion() const { return m_scalingPlanVersion; }
    inline bool ScalingPlanVersionHasBeenSet() const { return m_scalingPlanVersionHasBeenSet; }
    inline void SetScalingPlanVersion(long long value) { m_scalingPlanVersionHasBeenSet = true; m_scalingPlanVersion = value; }
    inline ScalingPlan& WithScalingPlanVersion(long long value) { SetScalingPlanVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A CloudFormation stack or a set of tags. You can create one scaling plan per
     * application source.</p>
     */
    inline const ApplicationSource& GetApplicationSource() const { return m_applicationSource; }
    inline bool ApplicationSourceHasBeenSet() const { return m_applicationSourceHasBeenSet; }
    template<typename ApplicationSourceT = ApplicationSource>
    void SetApplicationSource(ApplicationSourceT&& value) { m_applicationSourceHasBeenSet = true; m_applicationSource = std::forward<ApplicationSourceT>(value); }
    template<typename ApplicationSourceT = ApplicationSource>
    ScalingPlan& WithApplicationSource(ApplicationSourceT&& value) { SetApplicationSource(std::forward<ApplicationSourceT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The scaling instructions.</p>
     */
    inline const Aws::Vector<ScalingInstruction>& GetScalingInstructions() const { return m_scalingInstructions; }
    inline bool ScalingInstructionsHasBeenSet() const { return m_scalingInstructionsHasBeenSet; }
    template<typename ScalingInstructionsT = Aws::Vector<ScalingInstruction>>
    void SetScalingInstructions(ScalingInstructionsT&& value) { m_scalingInstructionsHasBeenSet = true; m_scalingInstructions = std::forward<ScalingInstructionsT>(value); }
    template<typename ScalingInstructionsT = Aws::Vector<ScalingInstruction>>
    ScalingPlan& WithScalingInstructions(ScalingInstructionsT&& value) { SetScalingInstructions(std::forward<ScalingInstructionsT>(value)); return *this;}
    template<typename ScalingInstructionsT = ScalingInstruction>
    ScalingPlan& AddScalingInstructions(ScalingInstructionsT&& value) { m_scalingInstructionsHasBeenSet = true; m_scalingInstructions.emplace_back(std::forward<ScalingInstructionsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The status of the scaling plan.</p> <ul> <li> <p> <code>Active</code> - The
     * scaling plan is active.</p> </li> <li> <p> <code>ActiveWithProblems</code> - The
     * scaling plan is active, but the scaling configuration for one or more resources
     * could not be applied.</p> </li> <li> <p> <code>CreationInProgress</code> - The
     * scaling plan is being created.</p> </li> <li> <p> <code>CreationFailed</code> -
     * The scaling plan could not be created.</p> </li> <li> <p>
     * <code>DeletionInProgress</code> - The scaling plan is being deleted.</p> </li>
     * <li> <p> <code>DeletionFailed</code> - The scaling plan could not be
     * deleted.</p> </li> <li> <p> <code>UpdateInProgress</code> - The scaling plan is
     * being updated.</p> </li> <li> <p> <code>UpdateFailed</code> - The scaling plan
     * could not be updated.</p> </li> </ul>
     */
    inline ScalingPlanStatusCode GetStatusCode() const { return m_statusCode; }
    inline bool StatusCodeHasBeenSet() const { return m_statusCodeHasBeenSet; }
    inline void SetStatusCode(ScalingPlanStatusCode value) { m_statusCodeHasBeenSet = true; m_statusCode = value; }
    inline ScalingPlan& WithStatusCode(ScalingPlanStatusCode value) { SetStatusCode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A simple message about the current status of the scaling plan.</p>
     */
    inline const Aws::String& GetStatusMessage() const { return m_statusMessage; }
    inline bool StatusMessageHasBeenSet() const { return m_statusMessageHasBeenSet; }
    template<typename StatusMessageT = Aws::String>
    void SetStatusMessage(StatusMessageT&& value) { m_statusMessageHasBeenSet = true; m_statusMessage = std::forward<StatusMessageT>(value); }
    template<typename StatusMessageT = Aws::String>
    ScalingPlan& WithStatusMessage(StatusMessageT&& value) { SetStatusMessage(std::forward<StatusMessageT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Unix time stamp when the scaling plan entered the current status.</p>
     */
    inline const Aws::Utils::DateTime& GetStatusStartTime() const { return m_statusStartTime; }
    inline bool StatusStartTimeHasBeenSet() const { return m_statusStartTimeHasBeenSet; }
    template<typename StatusStartTimeT = Aws::Utils::DateTime>
    void SetStatusStartTime(StatusStartTimeT&& value) { m_statusStartTimeHasBeenSet = true; m_statusStartTime = std::forward<StatusStartTimeT>(value); }
    template<typename StatusStartTimeT = Aws::Utils::DateTime>
    ScalingPlan& WithStatusStartTime(StatusStartTimeT&& value) { SetStatusStartTime(std::forward<StatusStartTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Unix time stamp when the scaling plan was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const { return m_creationTime; }
    inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    void SetCreationTime(CreationTimeT&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::forward<CreationTimeT>(value); }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    ScalingPlan& WithCreationTime(CreationTimeT&& value) { SetCreationTime(std::forward<CreationTimeT>(value)); return *this;}
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

    ScalingPlanStatusCode m_statusCode{ScalingPlanStatusCode::NOT_SET};
    bool m_statusCodeHasBeenSet = false;

    Aws::String m_statusMessage;
    bool m_statusMessageHasBeenSet = false;

    Aws::Utils::DateTime m_statusStartTime{};
    bool m_statusStartTimeHasBeenSet = false;

    Aws::Utils::DateTime m_creationTime{};
    bool m_creationTimeHasBeenSet = false;
  };

} // namespace Model
} // namespace AutoScalingPlans
} // namespace Aws
