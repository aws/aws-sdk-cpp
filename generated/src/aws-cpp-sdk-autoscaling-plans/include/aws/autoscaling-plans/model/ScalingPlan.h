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
    AWS_AUTOSCALINGPLANS_API ScalingPlan();
    AWS_AUTOSCALINGPLANS_API ScalingPlan(Aws::Utils::Json::JsonView jsonValue);
    AWS_AUTOSCALINGPLANS_API ScalingPlan& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_AUTOSCALINGPLANS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the scaling plan.</p>
     */
    inline const Aws::String& GetScalingPlanName() const{ return m_scalingPlanName; }
    inline bool ScalingPlanNameHasBeenSet() const { return m_scalingPlanNameHasBeenSet; }
    inline void SetScalingPlanName(const Aws::String& value) { m_scalingPlanNameHasBeenSet = true; m_scalingPlanName = value; }
    inline void SetScalingPlanName(Aws::String&& value) { m_scalingPlanNameHasBeenSet = true; m_scalingPlanName = std::move(value); }
    inline void SetScalingPlanName(const char* value) { m_scalingPlanNameHasBeenSet = true; m_scalingPlanName.assign(value); }
    inline ScalingPlan& WithScalingPlanName(const Aws::String& value) { SetScalingPlanName(value); return *this;}
    inline ScalingPlan& WithScalingPlanName(Aws::String&& value) { SetScalingPlanName(std::move(value)); return *this;}
    inline ScalingPlan& WithScalingPlanName(const char* value) { SetScalingPlanName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version number of the scaling plan.</p>
     */
    inline long long GetScalingPlanVersion() const{ return m_scalingPlanVersion; }
    inline bool ScalingPlanVersionHasBeenSet() const { return m_scalingPlanVersionHasBeenSet; }
    inline void SetScalingPlanVersion(long long value) { m_scalingPlanVersionHasBeenSet = true; m_scalingPlanVersion = value; }
    inline ScalingPlan& WithScalingPlanVersion(long long value) { SetScalingPlanVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A CloudFormation stack or a set of tags. You can create one scaling plan per
     * application source.</p>
     */
    inline const ApplicationSource& GetApplicationSource() const{ return m_applicationSource; }
    inline bool ApplicationSourceHasBeenSet() const { return m_applicationSourceHasBeenSet; }
    inline void SetApplicationSource(const ApplicationSource& value) { m_applicationSourceHasBeenSet = true; m_applicationSource = value; }
    inline void SetApplicationSource(ApplicationSource&& value) { m_applicationSourceHasBeenSet = true; m_applicationSource = std::move(value); }
    inline ScalingPlan& WithApplicationSource(const ApplicationSource& value) { SetApplicationSource(value); return *this;}
    inline ScalingPlan& WithApplicationSource(ApplicationSource&& value) { SetApplicationSource(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The scaling instructions.</p>
     */
    inline const Aws::Vector<ScalingInstruction>& GetScalingInstructions() const{ return m_scalingInstructions; }
    inline bool ScalingInstructionsHasBeenSet() const { return m_scalingInstructionsHasBeenSet; }
    inline void SetScalingInstructions(const Aws::Vector<ScalingInstruction>& value) { m_scalingInstructionsHasBeenSet = true; m_scalingInstructions = value; }
    inline void SetScalingInstructions(Aws::Vector<ScalingInstruction>&& value) { m_scalingInstructionsHasBeenSet = true; m_scalingInstructions = std::move(value); }
    inline ScalingPlan& WithScalingInstructions(const Aws::Vector<ScalingInstruction>& value) { SetScalingInstructions(value); return *this;}
    inline ScalingPlan& WithScalingInstructions(Aws::Vector<ScalingInstruction>&& value) { SetScalingInstructions(std::move(value)); return *this;}
    inline ScalingPlan& AddScalingInstructions(const ScalingInstruction& value) { m_scalingInstructionsHasBeenSet = true; m_scalingInstructions.push_back(value); return *this; }
    inline ScalingPlan& AddScalingInstructions(ScalingInstruction&& value) { m_scalingInstructionsHasBeenSet = true; m_scalingInstructions.push_back(std::move(value)); return *this; }
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
    inline const ScalingPlanStatusCode& GetStatusCode() const{ return m_statusCode; }
    inline bool StatusCodeHasBeenSet() const { return m_statusCodeHasBeenSet; }
    inline void SetStatusCode(const ScalingPlanStatusCode& value) { m_statusCodeHasBeenSet = true; m_statusCode = value; }
    inline void SetStatusCode(ScalingPlanStatusCode&& value) { m_statusCodeHasBeenSet = true; m_statusCode = std::move(value); }
    inline ScalingPlan& WithStatusCode(const ScalingPlanStatusCode& value) { SetStatusCode(value); return *this;}
    inline ScalingPlan& WithStatusCode(ScalingPlanStatusCode&& value) { SetStatusCode(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A simple message about the current status of the scaling plan.</p>
     */
    inline const Aws::String& GetStatusMessage() const{ return m_statusMessage; }
    inline bool StatusMessageHasBeenSet() const { return m_statusMessageHasBeenSet; }
    inline void SetStatusMessage(const Aws::String& value) { m_statusMessageHasBeenSet = true; m_statusMessage = value; }
    inline void SetStatusMessage(Aws::String&& value) { m_statusMessageHasBeenSet = true; m_statusMessage = std::move(value); }
    inline void SetStatusMessage(const char* value) { m_statusMessageHasBeenSet = true; m_statusMessage.assign(value); }
    inline ScalingPlan& WithStatusMessage(const Aws::String& value) { SetStatusMessage(value); return *this;}
    inline ScalingPlan& WithStatusMessage(Aws::String&& value) { SetStatusMessage(std::move(value)); return *this;}
    inline ScalingPlan& WithStatusMessage(const char* value) { SetStatusMessage(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Unix time stamp when the scaling plan entered the current status.</p>
     */
    inline const Aws::Utils::DateTime& GetStatusStartTime() const{ return m_statusStartTime; }
    inline bool StatusStartTimeHasBeenSet() const { return m_statusStartTimeHasBeenSet; }
    inline void SetStatusStartTime(const Aws::Utils::DateTime& value) { m_statusStartTimeHasBeenSet = true; m_statusStartTime = value; }
    inline void SetStatusStartTime(Aws::Utils::DateTime&& value) { m_statusStartTimeHasBeenSet = true; m_statusStartTime = std::move(value); }
    inline ScalingPlan& WithStatusStartTime(const Aws::Utils::DateTime& value) { SetStatusStartTime(value); return *this;}
    inline ScalingPlan& WithStatusStartTime(Aws::Utils::DateTime&& value) { SetStatusStartTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Unix time stamp when the scaling plan was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }
    inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTimeHasBeenSet = true; m_creationTime = value; }
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::move(value); }
    inline ScalingPlan& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}
    inline ScalingPlan& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_scalingPlanName;
    bool m_scalingPlanNameHasBeenSet = false;

    long long m_scalingPlanVersion;
    bool m_scalingPlanVersionHasBeenSet = false;

    ApplicationSource m_applicationSource;
    bool m_applicationSourceHasBeenSet = false;

    Aws::Vector<ScalingInstruction> m_scalingInstructions;
    bool m_scalingInstructionsHasBeenSet = false;

    ScalingPlanStatusCode m_statusCode;
    bool m_statusCodeHasBeenSet = false;

    Aws::String m_statusMessage;
    bool m_statusMessageHasBeenSet = false;

    Aws::Utils::DateTime m_statusStartTime;
    bool m_statusStartTimeHasBeenSet = false;

    Aws::Utils::DateTime m_creationTime;
    bool m_creationTimeHasBeenSet = false;
  };

} // namespace Model
} // namespace AutoScalingPlans
} // namespace Aws
