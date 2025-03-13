/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/fis/FIS_EXPORTS.h>
#include <aws/fis/FISRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/fis/model/UpdateExperimentTemplateLogConfigurationInput.h>
#include <aws/fis/model/UpdateExperimentTemplateExperimentOptionsInput.h>
#include <aws/fis/model/UpdateExperimentTemplateReportConfigurationInput.h>
#include <aws/fis/model/UpdateExperimentTemplateStopConditionInput.h>
#include <aws/fis/model/UpdateExperimentTemplateTargetInput.h>
#include <aws/fis/model/UpdateExperimentTemplateActionInputItem.h>
#include <utility>

namespace Aws
{
namespace FIS
{
namespace Model
{

  /**
   */
  class UpdateExperimentTemplateRequest : public FISRequest
  {
  public:
    AWS_FIS_API UpdateExperimentTemplateRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateExperimentTemplate"; }

    AWS_FIS_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The ID of the experiment template.</p>
     */
    inline const Aws::String& GetId() const { return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    template<typename IdT = Aws::String>
    void SetId(IdT&& value) { m_idHasBeenSet = true; m_id = std::forward<IdT>(value); }
    template<typename IdT = Aws::String>
    UpdateExperimentTemplateRequest& WithId(IdT&& value) { SetId(std::forward<IdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A description for the template.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    UpdateExperimentTemplateRequest& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The stop conditions for the experiment.</p>
     */
    inline const Aws::Vector<UpdateExperimentTemplateStopConditionInput>& GetStopConditions() const { return m_stopConditions; }
    inline bool StopConditionsHasBeenSet() const { return m_stopConditionsHasBeenSet; }
    template<typename StopConditionsT = Aws::Vector<UpdateExperimentTemplateStopConditionInput>>
    void SetStopConditions(StopConditionsT&& value) { m_stopConditionsHasBeenSet = true; m_stopConditions = std::forward<StopConditionsT>(value); }
    template<typename StopConditionsT = Aws::Vector<UpdateExperimentTemplateStopConditionInput>>
    UpdateExperimentTemplateRequest& WithStopConditions(StopConditionsT&& value) { SetStopConditions(std::forward<StopConditionsT>(value)); return *this;}
    template<typename StopConditionsT = UpdateExperimentTemplateStopConditionInput>
    UpdateExperimentTemplateRequest& AddStopConditions(StopConditionsT&& value) { m_stopConditionsHasBeenSet = true; m_stopConditions.emplace_back(std::forward<StopConditionsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The targets for the experiment.</p>
     */
    inline const Aws::Map<Aws::String, UpdateExperimentTemplateTargetInput>& GetTargets() const { return m_targets; }
    inline bool TargetsHasBeenSet() const { return m_targetsHasBeenSet; }
    template<typename TargetsT = Aws::Map<Aws::String, UpdateExperimentTemplateTargetInput>>
    void SetTargets(TargetsT&& value) { m_targetsHasBeenSet = true; m_targets = std::forward<TargetsT>(value); }
    template<typename TargetsT = Aws::Map<Aws::String, UpdateExperimentTemplateTargetInput>>
    UpdateExperimentTemplateRequest& WithTargets(TargetsT&& value) { SetTargets(std::forward<TargetsT>(value)); return *this;}
    template<typename TargetsKeyT = Aws::String, typename TargetsValueT = UpdateExperimentTemplateTargetInput>
    UpdateExperimentTemplateRequest& AddTargets(TargetsKeyT&& key, TargetsValueT&& value) {
      m_targetsHasBeenSet = true; m_targets.emplace(std::forward<TargetsKeyT>(key), std::forward<TargetsValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>The actions for the experiment.</p>
     */
    inline const Aws::Map<Aws::String, UpdateExperimentTemplateActionInputItem>& GetActions() const { return m_actions; }
    inline bool ActionsHasBeenSet() const { return m_actionsHasBeenSet; }
    template<typename ActionsT = Aws::Map<Aws::String, UpdateExperimentTemplateActionInputItem>>
    void SetActions(ActionsT&& value) { m_actionsHasBeenSet = true; m_actions = std::forward<ActionsT>(value); }
    template<typename ActionsT = Aws::Map<Aws::String, UpdateExperimentTemplateActionInputItem>>
    UpdateExperimentTemplateRequest& WithActions(ActionsT&& value) { SetActions(std::forward<ActionsT>(value)); return *this;}
    template<typename ActionsKeyT = Aws::String, typename ActionsValueT = UpdateExperimentTemplateActionInputItem>
    UpdateExperimentTemplateRequest& AddActions(ActionsKeyT&& key, ActionsValueT&& value) {
      m_actionsHasBeenSet = true; m_actions.emplace(std::forward<ActionsKeyT>(key), std::forward<ActionsValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of an IAM role that grants the FIS service
     * permission to perform service actions on your behalf.</p>
     */
    inline const Aws::String& GetRoleArn() const { return m_roleArn; }
    inline bool RoleArnHasBeenSet() const { return m_roleArnHasBeenSet; }
    template<typename RoleArnT = Aws::String>
    void SetRoleArn(RoleArnT&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::forward<RoleArnT>(value); }
    template<typename RoleArnT = Aws::String>
    UpdateExperimentTemplateRequest& WithRoleArn(RoleArnT&& value) { SetRoleArn(std::forward<RoleArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The configuration for experiment logging.</p>
     */
    inline const UpdateExperimentTemplateLogConfigurationInput& GetLogConfiguration() const { return m_logConfiguration; }
    inline bool LogConfigurationHasBeenSet() const { return m_logConfigurationHasBeenSet; }
    template<typename LogConfigurationT = UpdateExperimentTemplateLogConfigurationInput>
    void SetLogConfiguration(LogConfigurationT&& value) { m_logConfigurationHasBeenSet = true; m_logConfiguration = std::forward<LogConfigurationT>(value); }
    template<typename LogConfigurationT = UpdateExperimentTemplateLogConfigurationInput>
    UpdateExperimentTemplateRequest& WithLogConfiguration(LogConfigurationT&& value) { SetLogConfiguration(std::forward<LogConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The experiment options for the experiment template.</p>
     */
    inline const UpdateExperimentTemplateExperimentOptionsInput& GetExperimentOptions() const { return m_experimentOptions; }
    inline bool ExperimentOptionsHasBeenSet() const { return m_experimentOptionsHasBeenSet; }
    template<typename ExperimentOptionsT = UpdateExperimentTemplateExperimentOptionsInput>
    void SetExperimentOptions(ExperimentOptionsT&& value) { m_experimentOptionsHasBeenSet = true; m_experimentOptions = std::forward<ExperimentOptionsT>(value); }
    template<typename ExperimentOptionsT = UpdateExperimentTemplateExperimentOptionsInput>
    UpdateExperimentTemplateRequest& WithExperimentOptions(ExperimentOptionsT&& value) { SetExperimentOptions(std::forward<ExperimentOptionsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The experiment report configuration for the experiment template.</p>
     */
    inline const UpdateExperimentTemplateReportConfigurationInput& GetExperimentReportConfiguration() const { return m_experimentReportConfiguration; }
    inline bool ExperimentReportConfigurationHasBeenSet() const { return m_experimentReportConfigurationHasBeenSet; }
    template<typename ExperimentReportConfigurationT = UpdateExperimentTemplateReportConfigurationInput>
    void SetExperimentReportConfiguration(ExperimentReportConfigurationT&& value) { m_experimentReportConfigurationHasBeenSet = true; m_experimentReportConfiguration = std::forward<ExperimentReportConfigurationT>(value); }
    template<typename ExperimentReportConfigurationT = UpdateExperimentTemplateReportConfigurationInput>
    UpdateExperimentTemplateRequest& WithExperimentReportConfiguration(ExperimentReportConfigurationT&& value) { SetExperimentReportConfiguration(std::forward<ExperimentReportConfigurationT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::Vector<UpdateExperimentTemplateStopConditionInput> m_stopConditions;
    bool m_stopConditionsHasBeenSet = false;

    Aws::Map<Aws::String, UpdateExperimentTemplateTargetInput> m_targets;
    bool m_targetsHasBeenSet = false;

    Aws::Map<Aws::String, UpdateExperimentTemplateActionInputItem> m_actions;
    bool m_actionsHasBeenSet = false;

    Aws::String m_roleArn;
    bool m_roleArnHasBeenSet = false;

    UpdateExperimentTemplateLogConfigurationInput m_logConfiguration;
    bool m_logConfigurationHasBeenSet = false;

    UpdateExperimentTemplateExperimentOptionsInput m_experimentOptions;
    bool m_experimentOptionsHasBeenSet = false;

    UpdateExperimentTemplateReportConfigurationInput m_experimentReportConfiguration;
    bool m_experimentReportConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace FIS
} // namespace Aws
