/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
  class AWS_AUTOSCALINGPLANS_API ScalingPlan
  {
  public:
    ScalingPlan();
    ScalingPlan(Aws::Utils::Json::JsonView jsonValue);
    ScalingPlan& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


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
    inline ScalingPlan& WithScalingPlanName(const Aws::String& value) { SetScalingPlanName(value); return *this;}

    /**
     * <p>The name of the scaling plan.</p>
     */
    inline ScalingPlan& WithScalingPlanName(Aws::String&& value) { SetScalingPlanName(std::move(value)); return *this;}

    /**
     * <p>The name of the scaling plan.</p>
     */
    inline ScalingPlan& WithScalingPlanName(const char* value) { SetScalingPlanName(value); return *this;}


    /**
     * <p>The version number of the scaling plan.</p>
     */
    inline long long GetScalingPlanVersion() const{ return m_scalingPlanVersion; }

    /**
     * <p>The version number of the scaling plan.</p>
     */
    inline bool ScalingPlanVersionHasBeenSet() const { return m_scalingPlanVersionHasBeenSet; }

    /**
     * <p>The version number of the scaling plan.</p>
     */
    inline void SetScalingPlanVersion(long long value) { m_scalingPlanVersionHasBeenSet = true; m_scalingPlanVersion = value; }

    /**
     * <p>The version number of the scaling plan.</p>
     */
    inline ScalingPlan& WithScalingPlanVersion(long long value) { SetScalingPlanVersion(value); return *this;}


    /**
     * <p>The application source.</p>
     */
    inline const ApplicationSource& GetApplicationSource() const{ return m_applicationSource; }

    /**
     * <p>The application source.</p>
     */
    inline bool ApplicationSourceHasBeenSet() const { return m_applicationSourceHasBeenSet; }

    /**
     * <p>The application source.</p>
     */
    inline void SetApplicationSource(const ApplicationSource& value) { m_applicationSourceHasBeenSet = true; m_applicationSource = value; }

    /**
     * <p>The application source.</p>
     */
    inline void SetApplicationSource(ApplicationSource&& value) { m_applicationSourceHasBeenSet = true; m_applicationSource = std::move(value); }

    /**
     * <p>The application source.</p>
     */
    inline ScalingPlan& WithApplicationSource(const ApplicationSource& value) { SetApplicationSource(value); return *this;}

    /**
     * <p>The application source.</p>
     */
    inline ScalingPlan& WithApplicationSource(ApplicationSource&& value) { SetApplicationSource(std::move(value)); return *this;}


    /**
     * <p>The scaling instructions.</p>
     */
    inline const Aws::Vector<ScalingInstruction>& GetScalingInstructions() const{ return m_scalingInstructions; }

    /**
     * <p>The scaling instructions.</p>
     */
    inline bool ScalingInstructionsHasBeenSet() const { return m_scalingInstructionsHasBeenSet; }

    /**
     * <p>The scaling instructions.</p>
     */
    inline void SetScalingInstructions(const Aws::Vector<ScalingInstruction>& value) { m_scalingInstructionsHasBeenSet = true; m_scalingInstructions = value; }

    /**
     * <p>The scaling instructions.</p>
     */
    inline void SetScalingInstructions(Aws::Vector<ScalingInstruction>&& value) { m_scalingInstructionsHasBeenSet = true; m_scalingInstructions = std::move(value); }

    /**
     * <p>The scaling instructions.</p>
     */
    inline ScalingPlan& WithScalingInstructions(const Aws::Vector<ScalingInstruction>& value) { SetScalingInstructions(value); return *this;}

    /**
     * <p>The scaling instructions.</p>
     */
    inline ScalingPlan& WithScalingInstructions(Aws::Vector<ScalingInstruction>&& value) { SetScalingInstructions(std::move(value)); return *this;}

    /**
     * <p>The scaling instructions.</p>
     */
    inline ScalingPlan& AddScalingInstructions(const ScalingInstruction& value) { m_scalingInstructionsHasBeenSet = true; m_scalingInstructions.push_back(value); return *this; }

    /**
     * <p>The scaling instructions.</p>
     */
    inline ScalingPlan& AddScalingInstructions(ScalingInstruction&& value) { m_scalingInstructionsHasBeenSet = true; m_scalingInstructions.push_back(std::move(value)); return *this; }


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
    inline bool StatusCodeHasBeenSet() const { return m_statusCodeHasBeenSet; }

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
    inline void SetStatusCode(const ScalingPlanStatusCode& value) { m_statusCodeHasBeenSet = true; m_statusCode = value; }

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
    inline void SetStatusCode(ScalingPlanStatusCode&& value) { m_statusCodeHasBeenSet = true; m_statusCode = std::move(value); }

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
    inline ScalingPlan& WithStatusCode(const ScalingPlanStatusCode& value) { SetStatusCode(value); return *this;}

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
    inline ScalingPlan& WithStatusCode(ScalingPlanStatusCode&& value) { SetStatusCode(std::move(value)); return *this;}


    /**
     * <p>A simple message about the current status of the scaling plan.</p>
     */
    inline const Aws::String& GetStatusMessage() const{ return m_statusMessage; }

    /**
     * <p>A simple message about the current status of the scaling plan.</p>
     */
    inline bool StatusMessageHasBeenSet() const { return m_statusMessageHasBeenSet; }

    /**
     * <p>A simple message about the current status of the scaling plan.</p>
     */
    inline void SetStatusMessage(const Aws::String& value) { m_statusMessageHasBeenSet = true; m_statusMessage = value; }

    /**
     * <p>A simple message about the current status of the scaling plan.</p>
     */
    inline void SetStatusMessage(Aws::String&& value) { m_statusMessageHasBeenSet = true; m_statusMessage = std::move(value); }

    /**
     * <p>A simple message about the current status of the scaling plan.</p>
     */
    inline void SetStatusMessage(const char* value) { m_statusMessageHasBeenSet = true; m_statusMessage.assign(value); }

    /**
     * <p>A simple message about the current status of the scaling plan.</p>
     */
    inline ScalingPlan& WithStatusMessage(const Aws::String& value) { SetStatusMessage(value); return *this;}

    /**
     * <p>A simple message about the current status of the scaling plan.</p>
     */
    inline ScalingPlan& WithStatusMessage(Aws::String&& value) { SetStatusMessage(std::move(value)); return *this;}

    /**
     * <p>A simple message about the current status of the scaling plan.</p>
     */
    inline ScalingPlan& WithStatusMessage(const char* value) { SetStatusMessage(value); return *this;}


    /**
     * <p>The Unix time stamp when the scaling plan entered the current status.</p>
     */
    inline const Aws::Utils::DateTime& GetStatusStartTime() const{ return m_statusStartTime; }

    /**
     * <p>The Unix time stamp when the scaling plan entered the current status.</p>
     */
    inline bool StatusStartTimeHasBeenSet() const { return m_statusStartTimeHasBeenSet; }

    /**
     * <p>The Unix time stamp when the scaling plan entered the current status.</p>
     */
    inline void SetStatusStartTime(const Aws::Utils::DateTime& value) { m_statusStartTimeHasBeenSet = true; m_statusStartTime = value; }

    /**
     * <p>The Unix time stamp when the scaling plan entered the current status.</p>
     */
    inline void SetStatusStartTime(Aws::Utils::DateTime&& value) { m_statusStartTimeHasBeenSet = true; m_statusStartTime = std::move(value); }

    /**
     * <p>The Unix time stamp when the scaling plan entered the current status.</p>
     */
    inline ScalingPlan& WithStatusStartTime(const Aws::Utils::DateTime& value) { SetStatusStartTime(value); return *this;}

    /**
     * <p>The Unix time stamp when the scaling plan entered the current status.</p>
     */
    inline ScalingPlan& WithStatusStartTime(Aws::Utils::DateTime&& value) { SetStatusStartTime(std::move(value)); return *this;}


    /**
     * <p>The Unix time stamp when the scaling plan was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }

    /**
     * <p>The Unix time stamp when the scaling plan was created.</p>
     */
    inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }

    /**
     * <p>The Unix time stamp when the scaling plan was created.</p>
     */
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTimeHasBeenSet = true; m_creationTime = value; }

    /**
     * <p>The Unix time stamp when the scaling plan was created.</p>
     */
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::move(value); }

    /**
     * <p>The Unix time stamp when the scaling plan was created.</p>
     */
    inline ScalingPlan& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}

    /**
     * <p>The Unix time stamp when the scaling plan was created.</p>
     */
    inline ScalingPlan& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}

  private:

    Aws::String m_scalingPlanName;
    bool m_scalingPlanNameHasBeenSet;

    long long m_scalingPlanVersion;
    bool m_scalingPlanVersionHasBeenSet;

    ApplicationSource m_applicationSource;
    bool m_applicationSourceHasBeenSet;

    Aws::Vector<ScalingInstruction> m_scalingInstructions;
    bool m_scalingInstructionsHasBeenSet;

    ScalingPlanStatusCode m_statusCode;
    bool m_statusCodeHasBeenSet;

    Aws::String m_statusMessage;
    bool m_statusMessageHasBeenSet;

    Aws::Utils::DateTime m_statusStartTime;
    bool m_statusStartTimeHasBeenSet;

    Aws::Utils::DateTime m_creationTime;
    bool m_creationTimeHasBeenSet;
  };

} // namespace Model
} // namespace AutoScalingPlans
} // namespace Aws
