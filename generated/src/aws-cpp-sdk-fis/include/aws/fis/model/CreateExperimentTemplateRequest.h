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
#include <aws/fis/model/CreateExperimentTemplateLogConfigurationInput.h>
#include <aws/fis/model/CreateExperimentTemplateExperimentOptionsInput.h>
#include <aws/fis/model/CreateExperimentTemplateReportConfigurationInput.h>
#include <aws/fis/model/CreateExperimentTemplateStopConditionInput.h>
#include <aws/fis/model/CreateExperimentTemplateTargetInput.h>
#include <aws/fis/model/CreateExperimentTemplateActionInput.h>
#include <utility>
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace FIS
{
namespace Model
{

  /**
   */
  class CreateExperimentTemplateRequest : public FISRequest
  {
  public:
    AWS_FIS_API CreateExperimentTemplateRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateExperimentTemplate"; }

    AWS_FIS_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>Unique, case-sensitive identifier that you provide to ensure the idempotency
     * of the request.</p>
     */
    inline const Aws::String& GetClientToken() const{ return m_clientToken; }
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
    inline void SetClientToken(const Aws::String& value) { m_clientTokenHasBeenSet = true; m_clientToken = value; }
    inline void SetClientToken(Aws::String&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::move(value); }
    inline void SetClientToken(const char* value) { m_clientTokenHasBeenSet = true; m_clientToken.assign(value); }
    inline CreateExperimentTemplateRequest& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}
    inline CreateExperimentTemplateRequest& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}
    inline CreateExperimentTemplateRequest& WithClientToken(const char* value) { SetClientToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A description for the experiment template.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline CreateExperimentTemplateRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline CreateExperimentTemplateRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline CreateExperimentTemplateRequest& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The stop conditions.</p>
     */
    inline const Aws::Vector<CreateExperimentTemplateStopConditionInput>& GetStopConditions() const{ return m_stopConditions; }
    inline bool StopConditionsHasBeenSet() const { return m_stopConditionsHasBeenSet; }
    inline void SetStopConditions(const Aws::Vector<CreateExperimentTemplateStopConditionInput>& value) { m_stopConditionsHasBeenSet = true; m_stopConditions = value; }
    inline void SetStopConditions(Aws::Vector<CreateExperimentTemplateStopConditionInput>&& value) { m_stopConditionsHasBeenSet = true; m_stopConditions = std::move(value); }
    inline CreateExperimentTemplateRequest& WithStopConditions(const Aws::Vector<CreateExperimentTemplateStopConditionInput>& value) { SetStopConditions(value); return *this;}
    inline CreateExperimentTemplateRequest& WithStopConditions(Aws::Vector<CreateExperimentTemplateStopConditionInput>&& value) { SetStopConditions(std::move(value)); return *this;}
    inline CreateExperimentTemplateRequest& AddStopConditions(const CreateExperimentTemplateStopConditionInput& value) { m_stopConditionsHasBeenSet = true; m_stopConditions.push_back(value); return *this; }
    inline CreateExperimentTemplateRequest& AddStopConditions(CreateExperimentTemplateStopConditionInput&& value) { m_stopConditionsHasBeenSet = true; m_stopConditions.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The targets for the experiment.</p>
     */
    inline const Aws::Map<Aws::String, CreateExperimentTemplateTargetInput>& GetTargets() const{ return m_targets; }
    inline bool TargetsHasBeenSet() const { return m_targetsHasBeenSet; }
    inline void SetTargets(const Aws::Map<Aws::String, CreateExperimentTemplateTargetInput>& value) { m_targetsHasBeenSet = true; m_targets = value; }
    inline void SetTargets(Aws::Map<Aws::String, CreateExperimentTemplateTargetInput>&& value) { m_targetsHasBeenSet = true; m_targets = std::move(value); }
    inline CreateExperimentTemplateRequest& WithTargets(const Aws::Map<Aws::String, CreateExperimentTemplateTargetInput>& value) { SetTargets(value); return *this;}
    inline CreateExperimentTemplateRequest& WithTargets(Aws::Map<Aws::String, CreateExperimentTemplateTargetInput>&& value) { SetTargets(std::move(value)); return *this;}
    inline CreateExperimentTemplateRequest& AddTargets(const Aws::String& key, const CreateExperimentTemplateTargetInput& value) { m_targetsHasBeenSet = true; m_targets.emplace(key, value); return *this; }
    inline CreateExperimentTemplateRequest& AddTargets(Aws::String&& key, const CreateExperimentTemplateTargetInput& value) { m_targetsHasBeenSet = true; m_targets.emplace(std::move(key), value); return *this; }
    inline CreateExperimentTemplateRequest& AddTargets(const Aws::String& key, CreateExperimentTemplateTargetInput&& value) { m_targetsHasBeenSet = true; m_targets.emplace(key, std::move(value)); return *this; }
    inline CreateExperimentTemplateRequest& AddTargets(Aws::String&& key, CreateExperimentTemplateTargetInput&& value) { m_targetsHasBeenSet = true; m_targets.emplace(std::move(key), std::move(value)); return *this; }
    inline CreateExperimentTemplateRequest& AddTargets(const char* key, CreateExperimentTemplateTargetInput&& value) { m_targetsHasBeenSet = true; m_targets.emplace(key, std::move(value)); return *this; }
    inline CreateExperimentTemplateRequest& AddTargets(const char* key, const CreateExperimentTemplateTargetInput& value) { m_targetsHasBeenSet = true; m_targets.emplace(key, value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The actions for the experiment.</p>
     */
    inline const Aws::Map<Aws::String, CreateExperimentTemplateActionInput>& GetActions() const{ return m_actions; }
    inline bool ActionsHasBeenSet() const { return m_actionsHasBeenSet; }
    inline void SetActions(const Aws::Map<Aws::String, CreateExperimentTemplateActionInput>& value) { m_actionsHasBeenSet = true; m_actions = value; }
    inline void SetActions(Aws::Map<Aws::String, CreateExperimentTemplateActionInput>&& value) { m_actionsHasBeenSet = true; m_actions = std::move(value); }
    inline CreateExperimentTemplateRequest& WithActions(const Aws::Map<Aws::String, CreateExperimentTemplateActionInput>& value) { SetActions(value); return *this;}
    inline CreateExperimentTemplateRequest& WithActions(Aws::Map<Aws::String, CreateExperimentTemplateActionInput>&& value) { SetActions(std::move(value)); return *this;}
    inline CreateExperimentTemplateRequest& AddActions(const Aws::String& key, const CreateExperimentTemplateActionInput& value) { m_actionsHasBeenSet = true; m_actions.emplace(key, value); return *this; }
    inline CreateExperimentTemplateRequest& AddActions(Aws::String&& key, const CreateExperimentTemplateActionInput& value) { m_actionsHasBeenSet = true; m_actions.emplace(std::move(key), value); return *this; }
    inline CreateExperimentTemplateRequest& AddActions(const Aws::String& key, CreateExperimentTemplateActionInput&& value) { m_actionsHasBeenSet = true; m_actions.emplace(key, std::move(value)); return *this; }
    inline CreateExperimentTemplateRequest& AddActions(Aws::String&& key, CreateExperimentTemplateActionInput&& value) { m_actionsHasBeenSet = true; m_actions.emplace(std::move(key), std::move(value)); return *this; }
    inline CreateExperimentTemplateRequest& AddActions(const char* key, CreateExperimentTemplateActionInput&& value) { m_actionsHasBeenSet = true; m_actions.emplace(key, std::move(value)); return *this; }
    inline CreateExperimentTemplateRequest& AddActions(const char* key, const CreateExperimentTemplateActionInput& value) { m_actionsHasBeenSet = true; m_actions.emplace(key, value); return *this; }
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
    inline CreateExperimentTemplateRequest& WithRoleArn(const Aws::String& value) { SetRoleArn(value); return *this;}
    inline CreateExperimentTemplateRequest& WithRoleArn(Aws::String&& value) { SetRoleArn(std::move(value)); return *this;}
    inline CreateExperimentTemplateRequest& WithRoleArn(const char* value) { SetRoleArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The tags to apply to the experiment template.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }
    inline CreateExperimentTemplateRequest& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}
    inline CreateExperimentTemplateRequest& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}
    inline CreateExperimentTemplateRequest& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }
    inline CreateExperimentTemplateRequest& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }
    inline CreateExperimentTemplateRequest& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }
    inline CreateExperimentTemplateRequest& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }
    inline CreateExperimentTemplateRequest& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }
    inline CreateExperimentTemplateRequest& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }
    inline CreateExperimentTemplateRequest& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The configuration for experiment logging.</p>
     */
    inline const CreateExperimentTemplateLogConfigurationInput& GetLogConfiguration() const{ return m_logConfiguration; }
    inline bool LogConfigurationHasBeenSet() const { return m_logConfigurationHasBeenSet; }
    inline void SetLogConfiguration(const CreateExperimentTemplateLogConfigurationInput& value) { m_logConfigurationHasBeenSet = true; m_logConfiguration = value; }
    inline void SetLogConfiguration(CreateExperimentTemplateLogConfigurationInput&& value) { m_logConfigurationHasBeenSet = true; m_logConfiguration = std::move(value); }
    inline CreateExperimentTemplateRequest& WithLogConfiguration(const CreateExperimentTemplateLogConfigurationInput& value) { SetLogConfiguration(value); return *this;}
    inline CreateExperimentTemplateRequest& WithLogConfiguration(CreateExperimentTemplateLogConfigurationInput&& value) { SetLogConfiguration(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The experiment options for the experiment template.</p>
     */
    inline const CreateExperimentTemplateExperimentOptionsInput& GetExperimentOptions() const{ return m_experimentOptions; }
    inline bool ExperimentOptionsHasBeenSet() const { return m_experimentOptionsHasBeenSet; }
    inline void SetExperimentOptions(const CreateExperimentTemplateExperimentOptionsInput& value) { m_experimentOptionsHasBeenSet = true; m_experimentOptions = value; }
    inline void SetExperimentOptions(CreateExperimentTemplateExperimentOptionsInput&& value) { m_experimentOptionsHasBeenSet = true; m_experimentOptions = std::move(value); }
    inline CreateExperimentTemplateRequest& WithExperimentOptions(const CreateExperimentTemplateExperimentOptionsInput& value) { SetExperimentOptions(value); return *this;}
    inline CreateExperimentTemplateRequest& WithExperimentOptions(CreateExperimentTemplateExperimentOptionsInput&& value) { SetExperimentOptions(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The experiment report configuration for the experiment template.</p>
     */
    inline const CreateExperimentTemplateReportConfigurationInput& GetExperimentReportConfiguration() const{ return m_experimentReportConfiguration; }
    inline bool ExperimentReportConfigurationHasBeenSet() const { return m_experimentReportConfigurationHasBeenSet; }
    inline void SetExperimentReportConfiguration(const CreateExperimentTemplateReportConfigurationInput& value) { m_experimentReportConfigurationHasBeenSet = true; m_experimentReportConfiguration = value; }
    inline void SetExperimentReportConfiguration(CreateExperimentTemplateReportConfigurationInput&& value) { m_experimentReportConfigurationHasBeenSet = true; m_experimentReportConfiguration = std::move(value); }
    inline CreateExperimentTemplateRequest& WithExperimentReportConfiguration(const CreateExperimentTemplateReportConfigurationInput& value) { SetExperimentReportConfiguration(value); return *this;}
    inline CreateExperimentTemplateRequest& WithExperimentReportConfiguration(CreateExperimentTemplateReportConfigurationInput&& value) { SetExperimentReportConfiguration(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::Vector<CreateExperimentTemplateStopConditionInput> m_stopConditions;
    bool m_stopConditionsHasBeenSet = false;

    Aws::Map<Aws::String, CreateExperimentTemplateTargetInput> m_targets;
    bool m_targetsHasBeenSet = false;

    Aws::Map<Aws::String, CreateExperimentTemplateActionInput> m_actions;
    bool m_actionsHasBeenSet = false;

    Aws::String m_roleArn;
    bool m_roleArnHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;

    CreateExperimentTemplateLogConfigurationInput m_logConfiguration;
    bool m_logConfigurationHasBeenSet = false;

    CreateExperimentTemplateExperimentOptionsInput m_experimentOptions;
    bool m_experimentOptionsHasBeenSet = false;

    CreateExperimentTemplateReportConfigurationInput m_experimentReportConfiguration;
    bool m_experimentReportConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace FIS
} // namespace Aws
