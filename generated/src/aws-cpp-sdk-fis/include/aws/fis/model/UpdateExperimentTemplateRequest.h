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
    AWS_FIS_API UpdateExperimentTemplateRequest();

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
    inline const Aws::String& GetId() const{ return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }
    inline UpdateExperimentTemplateRequest& WithId(const Aws::String& value) { SetId(value); return *this;}
    inline UpdateExperimentTemplateRequest& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}
    inline UpdateExperimentTemplateRequest& WithId(const char* value) { SetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A description for the template.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline UpdateExperimentTemplateRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline UpdateExperimentTemplateRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline UpdateExperimentTemplateRequest& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The stop conditions for the experiment.</p>
     */
    inline const Aws::Vector<UpdateExperimentTemplateStopConditionInput>& GetStopConditions() const{ return m_stopConditions; }
    inline bool StopConditionsHasBeenSet() const { return m_stopConditionsHasBeenSet; }
    inline void SetStopConditions(const Aws::Vector<UpdateExperimentTemplateStopConditionInput>& value) { m_stopConditionsHasBeenSet = true; m_stopConditions = value; }
    inline void SetStopConditions(Aws::Vector<UpdateExperimentTemplateStopConditionInput>&& value) { m_stopConditionsHasBeenSet = true; m_stopConditions = std::move(value); }
    inline UpdateExperimentTemplateRequest& WithStopConditions(const Aws::Vector<UpdateExperimentTemplateStopConditionInput>& value) { SetStopConditions(value); return *this;}
    inline UpdateExperimentTemplateRequest& WithStopConditions(Aws::Vector<UpdateExperimentTemplateStopConditionInput>&& value) { SetStopConditions(std::move(value)); return *this;}
    inline UpdateExperimentTemplateRequest& AddStopConditions(const UpdateExperimentTemplateStopConditionInput& value) { m_stopConditionsHasBeenSet = true; m_stopConditions.push_back(value); return *this; }
    inline UpdateExperimentTemplateRequest& AddStopConditions(UpdateExperimentTemplateStopConditionInput&& value) { m_stopConditionsHasBeenSet = true; m_stopConditions.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The targets for the experiment.</p>
     */
    inline const Aws::Map<Aws::String, UpdateExperimentTemplateTargetInput>& GetTargets() const{ return m_targets; }
    inline bool TargetsHasBeenSet() const { return m_targetsHasBeenSet; }
    inline void SetTargets(const Aws::Map<Aws::String, UpdateExperimentTemplateTargetInput>& value) { m_targetsHasBeenSet = true; m_targets = value; }
    inline void SetTargets(Aws::Map<Aws::String, UpdateExperimentTemplateTargetInput>&& value) { m_targetsHasBeenSet = true; m_targets = std::move(value); }
    inline UpdateExperimentTemplateRequest& WithTargets(const Aws::Map<Aws::String, UpdateExperimentTemplateTargetInput>& value) { SetTargets(value); return *this;}
    inline UpdateExperimentTemplateRequest& WithTargets(Aws::Map<Aws::String, UpdateExperimentTemplateTargetInput>&& value) { SetTargets(std::move(value)); return *this;}
    inline UpdateExperimentTemplateRequest& AddTargets(const Aws::String& key, const UpdateExperimentTemplateTargetInput& value) { m_targetsHasBeenSet = true; m_targets.emplace(key, value); return *this; }
    inline UpdateExperimentTemplateRequest& AddTargets(Aws::String&& key, const UpdateExperimentTemplateTargetInput& value) { m_targetsHasBeenSet = true; m_targets.emplace(std::move(key), value); return *this; }
    inline UpdateExperimentTemplateRequest& AddTargets(const Aws::String& key, UpdateExperimentTemplateTargetInput&& value) { m_targetsHasBeenSet = true; m_targets.emplace(key, std::move(value)); return *this; }
    inline UpdateExperimentTemplateRequest& AddTargets(Aws::String&& key, UpdateExperimentTemplateTargetInput&& value) { m_targetsHasBeenSet = true; m_targets.emplace(std::move(key), std::move(value)); return *this; }
    inline UpdateExperimentTemplateRequest& AddTargets(const char* key, UpdateExperimentTemplateTargetInput&& value) { m_targetsHasBeenSet = true; m_targets.emplace(key, std::move(value)); return *this; }
    inline UpdateExperimentTemplateRequest& AddTargets(const char* key, const UpdateExperimentTemplateTargetInput& value) { m_targetsHasBeenSet = true; m_targets.emplace(key, value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The actions for the experiment.</p>
     */
    inline const Aws::Map<Aws::String, UpdateExperimentTemplateActionInputItem>& GetActions() const{ return m_actions; }
    inline bool ActionsHasBeenSet() const { return m_actionsHasBeenSet; }
    inline void SetActions(const Aws::Map<Aws::String, UpdateExperimentTemplateActionInputItem>& value) { m_actionsHasBeenSet = true; m_actions = value; }
    inline void SetActions(Aws::Map<Aws::String, UpdateExperimentTemplateActionInputItem>&& value) { m_actionsHasBeenSet = true; m_actions = std::move(value); }
    inline UpdateExperimentTemplateRequest& WithActions(const Aws::Map<Aws::String, UpdateExperimentTemplateActionInputItem>& value) { SetActions(value); return *this;}
    inline UpdateExperimentTemplateRequest& WithActions(Aws::Map<Aws::String, UpdateExperimentTemplateActionInputItem>&& value) { SetActions(std::move(value)); return *this;}
    inline UpdateExperimentTemplateRequest& AddActions(const Aws::String& key, const UpdateExperimentTemplateActionInputItem& value) { m_actionsHasBeenSet = true; m_actions.emplace(key, value); return *this; }
    inline UpdateExperimentTemplateRequest& AddActions(Aws::String&& key, const UpdateExperimentTemplateActionInputItem& value) { m_actionsHasBeenSet = true; m_actions.emplace(std::move(key), value); return *this; }
    inline UpdateExperimentTemplateRequest& AddActions(const Aws::String& key, UpdateExperimentTemplateActionInputItem&& value) { m_actionsHasBeenSet = true; m_actions.emplace(key, std::move(value)); return *this; }
    inline UpdateExperimentTemplateRequest& AddActions(Aws::String&& key, UpdateExperimentTemplateActionInputItem&& value) { m_actionsHasBeenSet = true; m_actions.emplace(std::move(key), std::move(value)); return *this; }
    inline UpdateExperimentTemplateRequest& AddActions(const char* key, UpdateExperimentTemplateActionInputItem&& value) { m_actionsHasBeenSet = true; m_actions.emplace(key, std::move(value)); return *this; }
    inline UpdateExperimentTemplateRequest& AddActions(const char* key, const UpdateExperimentTemplateActionInputItem& value) { m_actionsHasBeenSet = true; m_actions.emplace(key, value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of an IAM role that grants the FIS service
     * permission to perform service actions on your behalf.</p>
     */
    inline const Aws::String& GetRoleArn() const{ return m_roleArn; }
    inline bool RoleArnHasBeenSet() const { return m_roleArnHasBeenSet; }
    inline void SetRoleArn(const Aws::String& value) { m_roleArnHasBeenSet = true; m_roleArn = value; }
    inline void SetRoleArn(Aws::String&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::move(value); }
    inline void SetRoleArn(const char* value) { m_roleArnHasBeenSet = true; m_roleArn.assign(value); }
    inline UpdateExperimentTemplateRequest& WithRoleArn(const Aws::String& value) { SetRoleArn(value); return *this;}
    inline UpdateExperimentTemplateRequest& WithRoleArn(Aws::String&& value) { SetRoleArn(std::move(value)); return *this;}
    inline UpdateExperimentTemplateRequest& WithRoleArn(const char* value) { SetRoleArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The configuration for experiment logging.</p>
     */
    inline const UpdateExperimentTemplateLogConfigurationInput& GetLogConfiguration() const{ return m_logConfiguration; }
    inline bool LogConfigurationHasBeenSet() const { return m_logConfigurationHasBeenSet; }
    inline void SetLogConfiguration(const UpdateExperimentTemplateLogConfigurationInput& value) { m_logConfigurationHasBeenSet = true; m_logConfiguration = value; }
    inline void SetLogConfiguration(UpdateExperimentTemplateLogConfigurationInput&& value) { m_logConfigurationHasBeenSet = true; m_logConfiguration = std::move(value); }
    inline UpdateExperimentTemplateRequest& WithLogConfiguration(const UpdateExperimentTemplateLogConfigurationInput& value) { SetLogConfiguration(value); return *this;}
    inline UpdateExperimentTemplateRequest& WithLogConfiguration(UpdateExperimentTemplateLogConfigurationInput&& value) { SetLogConfiguration(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The experiment options for the experiment template.</p>
     */
    inline const UpdateExperimentTemplateExperimentOptionsInput& GetExperimentOptions() const{ return m_experimentOptions; }
    inline bool ExperimentOptionsHasBeenSet() const { return m_experimentOptionsHasBeenSet; }
    inline void SetExperimentOptions(const UpdateExperimentTemplateExperimentOptionsInput& value) { m_experimentOptionsHasBeenSet = true; m_experimentOptions = value; }
    inline void SetExperimentOptions(UpdateExperimentTemplateExperimentOptionsInput&& value) { m_experimentOptionsHasBeenSet = true; m_experimentOptions = std::move(value); }
    inline UpdateExperimentTemplateRequest& WithExperimentOptions(const UpdateExperimentTemplateExperimentOptionsInput& value) { SetExperimentOptions(value); return *this;}
    inline UpdateExperimentTemplateRequest& WithExperimentOptions(UpdateExperimentTemplateExperimentOptionsInput&& value) { SetExperimentOptions(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The experiment report configuration for the experiment template.</p>
     */
    inline const UpdateExperimentTemplateReportConfigurationInput& GetExperimentReportConfiguration() const{ return m_experimentReportConfiguration; }
    inline bool ExperimentReportConfigurationHasBeenSet() const { return m_experimentReportConfigurationHasBeenSet; }
    inline void SetExperimentReportConfiguration(const UpdateExperimentTemplateReportConfigurationInput& value) { m_experimentReportConfigurationHasBeenSet = true; m_experimentReportConfiguration = value; }
    inline void SetExperimentReportConfiguration(UpdateExperimentTemplateReportConfigurationInput&& value) { m_experimentReportConfigurationHasBeenSet = true; m_experimentReportConfiguration = std::move(value); }
    inline UpdateExperimentTemplateRequest& WithExperimentReportConfiguration(const UpdateExperimentTemplateReportConfigurationInput& value) { SetExperimentReportConfiguration(value); return *this;}
    inline UpdateExperimentTemplateRequest& WithExperimentReportConfiguration(UpdateExperimentTemplateReportConfigurationInput&& value) { SetExperimentReportConfiguration(std::move(value)); return *this;}
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
