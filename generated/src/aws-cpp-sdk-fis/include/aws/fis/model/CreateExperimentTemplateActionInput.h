/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/fis/FIS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
   * <p>Specifies an action for an experiment template.</p> <p>For more information,
   * see <a
   * href="https://docs.aws.amazon.com/fis/latest/userguide/actions.html">Actions</a>
   * in the <i>Fault Injection Simulator User Guide</i>.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/fis-2020-12-01/CreateExperimentTemplateActionInput">AWS
   * API Reference</a></p>
   */
  class CreateExperimentTemplateActionInput
  {
  public:
    AWS_FIS_API CreateExperimentTemplateActionInput();
    AWS_FIS_API CreateExperimentTemplateActionInput(Aws::Utils::Json::JsonView jsonValue);
    AWS_FIS_API CreateExperimentTemplateActionInput& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_FIS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The ID of the action. The format of the action ID is:
     * aws:<i>service-name</i>:<i>action-type</i>.</p>
     */
    inline const Aws::String& GetActionId() const{ return m_actionId; }

    /**
     * <p>The ID of the action. The format of the action ID is:
     * aws:<i>service-name</i>:<i>action-type</i>.</p>
     */
    inline bool ActionIdHasBeenSet() const { return m_actionIdHasBeenSet; }

    /**
     * <p>The ID of the action. The format of the action ID is:
     * aws:<i>service-name</i>:<i>action-type</i>.</p>
     */
    inline void SetActionId(const Aws::String& value) { m_actionIdHasBeenSet = true; m_actionId = value; }

    /**
     * <p>The ID of the action. The format of the action ID is:
     * aws:<i>service-name</i>:<i>action-type</i>.</p>
     */
    inline void SetActionId(Aws::String&& value) { m_actionIdHasBeenSet = true; m_actionId = std::move(value); }

    /**
     * <p>The ID of the action. The format of the action ID is:
     * aws:<i>service-name</i>:<i>action-type</i>.</p>
     */
    inline void SetActionId(const char* value) { m_actionIdHasBeenSet = true; m_actionId.assign(value); }

    /**
     * <p>The ID of the action. The format of the action ID is:
     * aws:<i>service-name</i>:<i>action-type</i>.</p>
     */
    inline CreateExperimentTemplateActionInput& WithActionId(const Aws::String& value) { SetActionId(value); return *this;}

    /**
     * <p>The ID of the action. The format of the action ID is:
     * aws:<i>service-name</i>:<i>action-type</i>.</p>
     */
    inline CreateExperimentTemplateActionInput& WithActionId(Aws::String&& value) { SetActionId(std::move(value)); return *this;}

    /**
     * <p>The ID of the action. The format of the action ID is:
     * aws:<i>service-name</i>:<i>action-type</i>.</p>
     */
    inline CreateExperimentTemplateActionInput& WithActionId(const char* value) { SetActionId(value); return *this;}


    /**
     * <p>A description for the action.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>A description for the action.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>A description for the action.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>A description for the action.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>A description for the action.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>A description for the action.</p>
     */
    inline CreateExperimentTemplateActionInput& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>A description for the action.</p>
     */
    inline CreateExperimentTemplateActionInput& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>A description for the action.</p>
     */
    inline CreateExperimentTemplateActionInput& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The parameters for the action, if applicable.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetParameters() const{ return m_parameters; }

    /**
     * <p>The parameters for the action, if applicable.</p>
     */
    inline bool ParametersHasBeenSet() const { return m_parametersHasBeenSet; }

    /**
     * <p>The parameters for the action, if applicable.</p>
     */
    inline void SetParameters(const Aws::Map<Aws::String, Aws::String>& value) { m_parametersHasBeenSet = true; m_parameters = value; }

    /**
     * <p>The parameters for the action, if applicable.</p>
     */
    inline void SetParameters(Aws::Map<Aws::String, Aws::String>&& value) { m_parametersHasBeenSet = true; m_parameters = std::move(value); }

    /**
     * <p>The parameters for the action, if applicable.</p>
     */
    inline CreateExperimentTemplateActionInput& WithParameters(const Aws::Map<Aws::String, Aws::String>& value) { SetParameters(value); return *this;}

    /**
     * <p>The parameters for the action, if applicable.</p>
     */
    inline CreateExperimentTemplateActionInput& WithParameters(Aws::Map<Aws::String, Aws::String>&& value) { SetParameters(std::move(value)); return *this;}

    /**
     * <p>The parameters for the action, if applicable.</p>
     */
    inline CreateExperimentTemplateActionInput& AddParameters(const Aws::String& key, const Aws::String& value) { m_parametersHasBeenSet = true; m_parameters.emplace(key, value); return *this; }

    /**
     * <p>The parameters for the action, if applicable.</p>
     */
    inline CreateExperimentTemplateActionInput& AddParameters(Aws::String&& key, const Aws::String& value) { m_parametersHasBeenSet = true; m_parameters.emplace(std::move(key), value); return *this; }

    /**
     * <p>The parameters for the action, if applicable.</p>
     */
    inline CreateExperimentTemplateActionInput& AddParameters(const Aws::String& key, Aws::String&& value) { m_parametersHasBeenSet = true; m_parameters.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The parameters for the action, if applicable.</p>
     */
    inline CreateExperimentTemplateActionInput& AddParameters(Aws::String&& key, Aws::String&& value) { m_parametersHasBeenSet = true; m_parameters.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>The parameters for the action, if applicable.</p>
     */
    inline CreateExperimentTemplateActionInput& AddParameters(const char* key, Aws::String&& value) { m_parametersHasBeenSet = true; m_parameters.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The parameters for the action, if applicable.</p>
     */
    inline CreateExperimentTemplateActionInput& AddParameters(Aws::String&& key, const char* value) { m_parametersHasBeenSet = true; m_parameters.emplace(std::move(key), value); return *this; }

    /**
     * <p>The parameters for the action, if applicable.</p>
     */
    inline CreateExperimentTemplateActionInput& AddParameters(const char* key, const char* value) { m_parametersHasBeenSet = true; m_parameters.emplace(key, value); return *this; }


    /**
     * <p>The targets for the action.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTargets() const{ return m_targets; }

    /**
     * <p>The targets for the action.</p>
     */
    inline bool TargetsHasBeenSet() const { return m_targetsHasBeenSet; }

    /**
     * <p>The targets for the action.</p>
     */
    inline void SetTargets(const Aws::Map<Aws::String, Aws::String>& value) { m_targetsHasBeenSet = true; m_targets = value; }

    /**
     * <p>The targets for the action.</p>
     */
    inline void SetTargets(Aws::Map<Aws::String, Aws::String>&& value) { m_targetsHasBeenSet = true; m_targets = std::move(value); }

    /**
     * <p>The targets for the action.</p>
     */
    inline CreateExperimentTemplateActionInput& WithTargets(const Aws::Map<Aws::String, Aws::String>& value) { SetTargets(value); return *this;}

    /**
     * <p>The targets for the action.</p>
     */
    inline CreateExperimentTemplateActionInput& WithTargets(Aws::Map<Aws::String, Aws::String>&& value) { SetTargets(std::move(value)); return *this;}

    /**
     * <p>The targets for the action.</p>
     */
    inline CreateExperimentTemplateActionInput& AddTargets(const Aws::String& key, const Aws::String& value) { m_targetsHasBeenSet = true; m_targets.emplace(key, value); return *this; }

    /**
     * <p>The targets for the action.</p>
     */
    inline CreateExperimentTemplateActionInput& AddTargets(Aws::String&& key, const Aws::String& value) { m_targetsHasBeenSet = true; m_targets.emplace(std::move(key), value); return *this; }

    /**
     * <p>The targets for the action.</p>
     */
    inline CreateExperimentTemplateActionInput& AddTargets(const Aws::String& key, Aws::String&& value) { m_targetsHasBeenSet = true; m_targets.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The targets for the action.</p>
     */
    inline CreateExperimentTemplateActionInput& AddTargets(Aws::String&& key, Aws::String&& value) { m_targetsHasBeenSet = true; m_targets.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>The targets for the action.</p>
     */
    inline CreateExperimentTemplateActionInput& AddTargets(const char* key, Aws::String&& value) { m_targetsHasBeenSet = true; m_targets.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The targets for the action.</p>
     */
    inline CreateExperimentTemplateActionInput& AddTargets(Aws::String&& key, const char* value) { m_targetsHasBeenSet = true; m_targets.emplace(std::move(key), value); return *this; }

    /**
     * <p>The targets for the action.</p>
     */
    inline CreateExperimentTemplateActionInput& AddTargets(const char* key, const char* value) { m_targetsHasBeenSet = true; m_targets.emplace(key, value); return *this; }


    /**
     * <p>The name of the action that must be completed before the current action
     * starts. Omit this parameter to run the action at the start of the
     * experiment.</p>
     */
    inline const Aws::Vector<Aws::String>& GetStartAfter() const{ return m_startAfter; }

    /**
     * <p>The name of the action that must be completed before the current action
     * starts. Omit this parameter to run the action at the start of the
     * experiment.</p>
     */
    inline bool StartAfterHasBeenSet() const { return m_startAfterHasBeenSet; }

    /**
     * <p>The name of the action that must be completed before the current action
     * starts. Omit this parameter to run the action at the start of the
     * experiment.</p>
     */
    inline void SetStartAfter(const Aws::Vector<Aws::String>& value) { m_startAfterHasBeenSet = true; m_startAfter = value; }

    /**
     * <p>The name of the action that must be completed before the current action
     * starts. Omit this parameter to run the action at the start of the
     * experiment.</p>
     */
    inline void SetStartAfter(Aws::Vector<Aws::String>&& value) { m_startAfterHasBeenSet = true; m_startAfter = std::move(value); }

    /**
     * <p>The name of the action that must be completed before the current action
     * starts. Omit this parameter to run the action at the start of the
     * experiment.</p>
     */
    inline CreateExperimentTemplateActionInput& WithStartAfter(const Aws::Vector<Aws::String>& value) { SetStartAfter(value); return *this;}

    /**
     * <p>The name of the action that must be completed before the current action
     * starts. Omit this parameter to run the action at the start of the
     * experiment.</p>
     */
    inline CreateExperimentTemplateActionInput& WithStartAfter(Aws::Vector<Aws::String>&& value) { SetStartAfter(std::move(value)); return *this;}

    /**
     * <p>The name of the action that must be completed before the current action
     * starts. Omit this parameter to run the action at the start of the
     * experiment.</p>
     */
    inline CreateExperimentTemplateActionInput& AddStartAfter(const Aws::String& value) { m_startAfterHasBeenSet = true; m_startAfter.push_back(value); return *this; }

    /**
     * <p>The name of the action that must be completed before the current action
     * starts. Omit this parameter to run the action at the start of the
     * experiment.</p>
     */
    inline CreateExperimentTemplateActionInput& AddStartAfter(Aws::String&& value) { m_startAfterHasBeenSet = true; m_startAfter.push_back(std::move(value)); return *this; }

    /**
     * <p>The name of the action that must be completed before the current action
     * starts. Omit this parameter to run the action at the start of the
     * experiment.</p>
     */
    inline CreateExperimentTemplateActionInput& AddStartAfter(const char* value) { m_startAfterHasBeenSet = true; m_startAfter.push_back(value); return *this; }

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
  };

} // namespace Model
} // namespace FIS
} // namespace Aws
