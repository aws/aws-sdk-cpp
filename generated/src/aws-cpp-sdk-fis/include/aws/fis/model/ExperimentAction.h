/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/fis/FIS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/fis/model/ExperimentActionState.h>
#include <aws/core/utils/DateTime.h>
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
namespace FIS
{
namespace Model
{

  /**
   * <p>Describes the action for an experiment.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/fis-2020-12-01/ExperimentAction">AWS
   * API Reference</a></p>
   */
  class ExperimentAction
  {
  public:
    AWS_FIS_API ExperimentAction();
    AWS_FIS_API ExperimentAction(Aws::Utils::Json::JsonView jsonValue);
    AWS_FIS_API ExperimentAction& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_FIS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ID of the action.</p>
     */
    inline const Aws::String& GetActionId() const{ return m_actionId; }
    inline bool ActionIdHasBeenSet() const { return m_actionIdHasBeenSet; }
    inline void SetActionId(const Aws::String& value) { m_actionIdHasBeenSet = true; m_actionId = value; }
    inline void SetActionId(Aws::String&& value) { m_actionIdHasBeenSet = true; m_actionId = std::move(value); }
    inline void SetActionId(const char* value) { m_actionIdHasBeenSet = true; m_actionId.assign(value); }
    inline ExperimentAction& WithActionId(const Aws::String& value) { SetActionId(value); return *this;}
    inline ExperimentAction& WithActionId(Aws::String&& value) { SetActionId(std::move(value)); return *this;}
    inline ExperimentAction& WithActionId(const char* value) { SetActionId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description for the action.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline ExperimentAction& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline ExperimentAction& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline ExperimentAction& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The parameters for the action.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetParameters() const{ return m_parameters; }
    inline bool ParametersHasBeenSet() const { return m_parametersHasBeenSet; }
    inline void SetParameters(const Aws::Map<Aws::String, Aws::String>& value) { m_parametersHasBeenSet = true; m_parameters = value; }
    inline void SetParameters(Aws::Map<Aws::String, Aws::String>&& value) { m_parametersHasBeenSet = true; m_parameters = std::move(value); }
    inline ExperimentAction& WithParameters(const Aws::Map<Aws::String, Aws::String>& value) { SetParameters(value); return *this;}
    inline ExperimentAction& WithParameters(Aws::Map<Aws::String, Aws::String>&& value) { SetParameters(std::move(value)); return *this;}
    inline ExperimentAction& AddParameters(const Aws::String& key, const Aws::String& value) { m_parametersHasBeenSet = true; m_parameters.emplace(key, value); return *this; }
    inline ExperimentAction& AddParameters(Aws::String&& key, const Aws::String& value) { m_parametersHasBeenSet = true; m_parameters.emplace(std::move(key), value); return *this; }
    inline ExperimentAction& AddParameters(const Aws::String& key, Aws::String&& value) { m_parametersHasBeenSet = true; m_parameters.emplace(key, std::move(value)); return *this; }
    inline ExperimentAction& AddParameters(Aws::String&& key, Aws::String&& value) { m_parametersHasBeenSet = true; m_parameters.emplace(std::move(key), std::move(value)); return *this; }
    inline ExperimentAction& AddParameters(const char* key, Aws::String&& value) { m_parametersHasBeenSet = true; m_parameters.emplace(key, std::move(value)); return *this; }
    inline ExperimentAction& AddParameters(Aws::String&& key, const char* value) { m_parametersHasBeenSet = true; m_parameters.emplace(std::move(key), value); return *this; }
    inline ExperimentAction& AddParameters(const char* key, const char* value) { m_parametersHasBeenSet = true; m_parameters.emplace(key, value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The targets for the action.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTargets() const{ return m_targets; }
    inline bool TargetsHasBeenSet() const { return m_targetsHasBeenSet; }
    inline void SetTargets(const Aws::Map<Aws::String, Aws::String>& value) { m_targetsHasBeenSet = true; m_targets = value; }
    inline void SetTargets(Aws::Map<Aws::String, Aws::String>&& value) { m_targetsHasBeenSet = true; m_targets = std::move(value); }
    inline ExperimentAction& WithTargets(const Aws::Map<Aws::String, Aws::String>& value) { SetTargets(value); return *this;}
    inline ExperimentAction& WithTargets(Aws::Map<Aws::String, Aws::String>&& value) { SetTargets(std::move(value)); return *this;}
    inline ExperimentAction& AddTargets(const Aws::String& key, const Aws::String& value) { m_targetsHasBeenSet = true; m_targets.emplace(key, value); return *this; }
    inline ExperimentAction& AddTargets(Aws::String&& key, const Aws::String& value) { m_targetsHasBeenSet = true; m_targets.emplace(std::move(key), value); return *this; }
    inline ExperimentAction& AddTargets(const Aws::String& key, Aws::String&& value) { m_targetsHasBeenSet = true; m_targets.emplace(key, std::move(value)); return *this; }
    inline ExperimentAction& AddTargets(Aws::String&& key, Aws::String&& value) { m_targetsHasBeenSet = true; m_targets.emplace(std::move(key), std::move(value)); return *this; }
    inline ExperimentAction& AddTargets(const char* key, Aws::String&& value) { m_targetsHasBeenSet = true; m_targets.emplace(key, std::move(value)); return *this; }
    inline ExperimentAction& AddTargets(Aws::String&& key, const char* value) { m_targetsHasBeenSet = true; m_targets.emplace(std::move(key), value); return *this; }
    inline ExperimentAction& AddTargets(const char* key, const char* value) { m_targetsHasBeenSet = true; m_targets.emplace(key, value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The name of the action that must be completed before this action starts.</p>
     */
    inline const Aws::Vector<Aws::String>& GetStartAfter() const{ return m_startAfter; }
    inline bool StartAfterHasBeenSet() const { return m_startAfterHasBeenSet; }
    inline void SetStartAfter(const Aws::Vector<Aws::String>& value) { m_startAfterHasBeenSet = true; m_startAfter = value; }
    inline void SetStartAfter(Aws::Vector<Aws::String>&& value) { m_startAfterHasBeenSet = true; m_startAfter = std::move(value); }
    inline ExperimentAction& WithStartAfter(const Aws::Vector<Aws::String>& value) { SetStartAfter(value); return *this;}
    inline ExperimentAction& WithStartAfter(Aws::Vector<Aws::String>&& value) { SetStartAfter(std::move(value)); return *this;}
    inline ExperimentAction& AddStartAfter(const Aws::String& value) { m_startAfterHasBeenSet = true; m_startAfter.push_back(value); return *this; }
    inline ExperimentAction& AddStartAfter(Aws::String&& value) { m_startAfterHasBeenSet = true; m_startAfter.push_back(std::move(value)); return *this; }
    inline ExperimentAction& AddStartAfter(const char* value) { m_startAfterHasBeenSet = true; m_startAfter.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The state of the action.</p>
     */
    inline const ExperimentActionState& GetState() const{ return m_state; }
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }
    inline void SetState(const ExperimentActionState& value) { m_stateHasBeenSet = true; m_state = value; }
    inline void SetState(ExperimentActionState&& value) { m_stateHasBeenSet = true; m_state = std::move(value); }
    inline ExperimentAction& WithState(const ExperimentActionState& value) { SetState(value); return *this;}
    inline ExperimentAction& WithState(ExperimentActionState&& value) { SetState(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time that the action started.</p>
     */
    inline const Aws::Utils::DateTime& GetStartTime() const{ return m_startTime; }
    inline bool StartTimeHasBeenSet() const { return m_startTimeHasBeenSet; }
    inline void SetStartTime(const Aws::Utils::DateTime& value) { m_startTimeHasBeenSet = true; m_startTime = value; }
    inline void SetStartTime(Aws::Utils::DateTime&& value) { m_startTimeHasBeenSet = true; m_startTime = std::move(value); }
    inline ExperimentAction& WithStartTime(const Aws::Utils::DateTime& value) { SetStartTime(value); return *this;}
    inline ExperimentAction& WithStartTime(Aws::Utils::DateTime&& value) { SetStartTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time that the action ended.</p>
     */
    inline const Aws::Utils::DateTime& GetEndTime() const{ return m_endTime; }
    inline bool EndTimeHasBeenSet() const { return m_endTimeHasBeenSet; }
    inline void SetEndTime(const Aws::Utils::DateTime& value) { m_endTimeHasBeenSet = true; m_endTime = value; }
    inline void SetEndTime(Aws::Utils::DateTime&& value) { m_endTimeHasBeenSet = true; m_endTime = std::move(value); }
    inline ExperimentAction& WithEndTime(const Aws::Utils::DateTime& value) { SetEndTime(value); return *this;}
    inline ExperimentAction& WithEndTime(Aws::Utils::DateTime&& value) { SetEndTime(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_actionId;
    bool m_actionIdHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_parameters;
    bool m_parametersHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_targets;
    bool m_targetsHasBeenSet = false;

    Aws::Vector<Aws::String> m_startAfter;
    bool m_startAfterHasBeenSet = false;

    ExperimentActionState m_state;
    bool m_stateHasBeenSet = false;

    Aws::Utils::DateTime m_startTime;
    bool m_startTimeHasBeenSet = false;

    Aws::Utils::DateTime m_endTime;
    bool m_endTimeHasBeenSet = false;
  };

} // namespace Model
} // namespace FIS
} // namespace Aws
