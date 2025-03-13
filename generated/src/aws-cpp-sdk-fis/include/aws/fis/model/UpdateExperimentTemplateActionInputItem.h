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
   * <p>Specifies an action for an experiment template.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/fis-2020-12-01/UpdateExperimentTemplateActionInputItem">AWS
   * API Reference</a></p>
   */
  class UpdateExperimentTemplateActionInputItem
  {
  public:
    AWS_FIS_API UpdateExperimentTemplateActionInputItem() = default;
    AWS_FIS_API UpdateExperimentTemplateActionInputItem(Aws::Utils::Json::JsonView jsonValue);
    AWS_FIS_API UpdateExperimentTemplateActionInputItem& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_FIS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ID of the action.</p>
     */
    inline const Aws::String& GetActionId() const { return m_actionId; }
    inline bool ActionIdHasBeenSet() const { return m_actionIdHasBeenSet; }
    template<typename ActionIdT = Aws::String>
    void SetActionId(ActionIdT&& value) { m_actionIdHasBeenSet = true; m_actionId = std::forward<ActionIdT>(value); }
    template<typename ActionIdT = Aws::String>
    UpdateExperimentTemplateActionInputItem& WithActionId(ActionIdT&& value) { SetActionId(std::forward<ActionIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A description for the action.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    UpdateExperimentTemplateActionInputItem& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The parameters for the action, if applicable.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetParameters() const { return m_parameters; }
    inline bool ParametersHasBeenSet() const { return m_parametersHasBeenSet; }
    template<typename ParametersT = Aws::Map<Aws::String, Aws::String>>
    void SetParameters(ParametersT&& value) { m_parametersHasBeenSet = true; m_parameters = std::forward<ParametersT>(value); }
    template<typename ParametersT = Aws::Map<Aws::String, Aws::String>>
    UpdateExperimentTemplateActionInputItem& WithParameters(ParametersT&& value) { SetParameters(std::forward<ParametersT>(value)); return *this;}
    template<typename ParametersKeyT = Aws::String, typename ParametersValueT = Aws::String>
    UpdateExperimentTemplateActionInputItem& AddParameters(ParametersKeyT&& key, ParametersValueT&& value) {
      m_parametersHasBeenSet = true; m_parameters.emplace(std::forward<ParametersKeyT>(key), std::forward<ParametersValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>The targets for the action.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTargets() const { return m_targets; }
    inline bool TargetsHasBeenSet() const { return m_targetsHasBeenSet; }
    template<typename TargetsT = Aws::Map<Aws::String, Aws::String>>
    void SetTargets(TargetsT&& value) { m_targetsHasBeenSet = true; m_targets = std::forward<TargetsT>(value); }
    template<typename TargetsT = Aws::Map<Aws::String, Aws::String>>
    UpdateExperimentTemplateActionInputItem& WithTargets(TargetsT&& value) { SetTargets(std::forward<TargetsT>(value)); return *this;}
    template<typename TargetsKeyT = Aws::String, typename TargetsValueT = Aws::String>
    UpdateExperimentTemplateActionInputItem& AddTargets(TargetsKeyT&& key, TargetsValueT&& value) {
      m_targetsHasBeenSet = true; m_targets.emplace(std::forward<TargetsKeyT>(key), std::forward<TargetsValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>The name of the action that must be completed before the current action
     * starts. Omit this parameter to run the action at the start of the
     * experiment.</p>
     */
    inline const Aws::Vector<Aws::String>& GetStartAfter() const { return m_startAfter; }
    inline bool StartAfterHasBeenSet() const { return m_startAfterHasBeenSet; }
    template<typename StartAfterT = Aws::Vector<Aws::String>>
    void SetStartAfter(StartAfterT&& value) { m_startAfterHasBeenSet = true; m_startAfter = std::forward<StartAfterT>(value); }
    template<typename StartAfterT = Aws::Vector<Aws::String>>
    UpdateExperimentTemplateActionInputItem& WithStartAfter(StartAfterT&& value) { SetStartAfter(std::forward<StartAfterT>(value)); return *this;}
    template<typename StartAfterT = Aws::String>
    UpdateExperimentTemplateActionInputItem& AddStartAfter(StartAfterT&& value) { m_startAfterHasBeenSet = true; m_startAfter.emplace_back(std::forward<StartAfterT>(value)); return *this; }
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
  };

} // namespace Model
} // namespace FIS
} // namespace Aws
