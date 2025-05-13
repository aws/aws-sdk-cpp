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
    AWS_FIS_API CreateExperimentTemplateRequest() = default;

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
    inline const Aws::String& GetClientToken() const { return m_clientToken; }
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
    template<typename ClientTokenT = Aws::String>
    void SetClientToken(ClientTokenT&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::forward<ClientTokenT>(value); }
    template<typename ClientTokenT = Aws::String>
    CreateExperimentTemplateRequest& WithClientToken(ClientTokenT&& value) { SetClientToken(std::forward<ClientTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A description for the experiment template.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    CreateExperimentTemplateRequest& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The stop conditions.</p>
     */
    inline const Aws::Vector<CreateExperimentTemplateStopConditionInput>& GetStopConditions() const { return m_stopConditions; }
    inline bool StopConditionsHasBeenSet() const { return m_stopConditionsHasBeenSet; }
    template<typename StopConditionsT = Aws::Vector<CreateExperimentTemplateStopConditionInput>>
    void SetStopConditions(StopConditionsT&& value) { m_stopConditionsHasBeenSet = true; m_stopConditions = std::forward<StopConditionsT>(value); }
    template<typename StopConditionsT = Aws::Vector<CreateExperimentTemplateStopConditionInput>>
    CreateExperimentTemplateRequest& WithStopConditions(StopConditionsT&& value) { SetStopConditions(std::forward<StopConditionsT>(value)); return *this;}
    template<typename StopConditionsT = CreateExperimentTemplateStopConditionInput>
    CreateExperimentTemplateRequest& AddStopConditions(StopConditionsT&& value) { m_stopConditionsHasBeenSet = true; m_stopConditions.emplace_back(std::forward<StopConditionsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The targets for the experiment.</p>
     */
    inline const Aws::Map<Aws::String, CreateExperimentTemplateTargetInput>& GetTargets() const { return m_targets; }
    inline bool TargetsHasBeenSet() const { return m_targetsHasBeenSet; }
    template<typename TargetsT = Aws::Map<Aws::String, CreateExperimentTemplateTargetInput>>
    void SetTargets(TargetsT&& value) { m_targetsHasBeenSet = true; m_targets = std::forward<TargetsT>(value); }
    template<typename TargetsT = Aws::Map<Aws::String, CreateExperimentTemplateTargetInput>>
    CreateExperimentTemplateRequest& WithTargets(TargetsT&& value) { SetTargets(std::forward<TargetsT>(value)); return *this;}
    template<typename TargetsKeyT = Aws::String, typename TargetsValueT = CreateExperimentTemplateTargetInput>
    CreateExperimentTemplateRequest& AddTargets(TargetsKeyT&& key, TargetsValueT&& value) {
      m_targetsHasBeenSet = true; m_targets.emplace(std::forward<TargetsKeyT>(key), std::forward<TargetsValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>The actions for the experiment.</p>
     */
    inline const Aws::Map<Aws::String, CreateExperimentTemplateActionInput>& GetActions() const { return m_actions; }
    inline bool ActionsHasBeenSet() const { return m_actionsHasBeenSet; }
    template<typename ActionsT = Aws::Map<Aws::String, CreateExperimentTemplateActionInput>>
    void SetActions(ActionsT&& value) { m_actionsHasBeenSet = true; m_actions = std::forward<ActionsT>(value); }
    template<typename ActionsT = Aws::Map<Aws::String, CreateExperimentTemplateActionInput>>
    CreateExperimentTemplateRequest& WithActions(ActionsT&& value) { SetActions(std::forward<ActionsT>(value)); return *this;}
    template<typename ActionsKeyT = Aws::String, typename ActionsValueT = CreateExperimentTemplateActionInput>
    CreateExperimentTemplateRequest& AddActions(ActionsKeyT&& key, ActionsValueT&& value) {
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
    CreateExperimentTemplateRequest& WithRoleArn(RoleArnT&& value) { SetRoleArn(std::forward<RoleArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The tags to apply to the experiment template.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    CreateExperimentTemplateRequest& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
    CreateExperimentTemplateRequest& AddTags(TagsKeyT&& key, TagsValueT&& value) {
      m_tagsHasBeenSet = true; m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>The configuration for experiment logging.</p>
     */
    inline const CreateExperimentTemplateLogConfigurationInput& GetLogConfiguration() const { return m_logConfiguration; }
    inline bool LogConfigurationHasBeenSet() const { return m_logConfigurationHasBeenSet; }
    template<typename LogConfigurationT = CreateExperimentTemplateLogConfigurationInput>
    void SetLogConfiguration(LogConfigurationT&& value) { m_logConfigurationHasBeenSet = true; m_logConfiguration = std::forward<LogConfigurationT>(value); }
    template<typename LogConfigurationT = CreateExperimentTemplateLogConfigurationInput>
    CreateExperimentTemplateRequest& WithLogConfiguration(LogConfigurationT&& value) { SetLogConfiguration(std::forward<LogConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The experiment options for the experiment template.</p>
     */
    inline const CreateExperimentTemplateExperimentOptionsInput& GetExperimentOptions() const { return m_experimentOptions; }
    inline bool ExperimentOptionsHasBeenSet() const { return m_experimentOptionsHasBeenSet; }
    template<typename ExperimentOptionsT = CreateExperimentTemplateExperimentOptionsInput>
    void SetExperimentOptions(ExperimentOptionsT&& value) { m_experimentOptionsHasBeenSet = true; m_experimentOptions = std::forward<ExperimentOptionsT>(value); }
    template<typename ExperimentOptionsT = CreateExperimentTemplateExperimentOptionsInput>
    CreateExperimentTemplateRequest& WithExperimentOptions(ExperimentOptionsT&& value) { SetExperimentOptions(std::forward<ExperimentOptionsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The experiment report configuration for the experiment template.</p>
     */
    inline const CreateExperimentTemplateReportConfigurationInput& GetExperimentReportConfiguration() const { return m_experimentReportConfiguration; }
    inline bool ExperimentReportConfigurationHasBeenSet() const { return m_experimentReportConfigurationHasBeenSet; }
    template<typename ExperimentReportConfigurationT = CreateExperimentTemplateReportConfigurationInput>
    void SetExperimentReportConfiguration(ExperimentReportConfigurationT&& value) { m_experimentReportConfigurationHasBeenSet = true; m_experimentReportConfiguration = std::forward<ExperimentReportConfigurationT>(value); }
    template<typename ExperimentReportConfigurationT = CreateExperimentTemplateReportConfigurationInput>
    CreateExperimentTemplateRequest& WithExperimentReportConfiguration(ExperimentReportConfigurationT&& value) { SetExperimentReportConfiguration(std::forward<ExperimentReportConfigurationT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_clientToken{Aws::Utils::UUID::PseudoRandomUUID()};
    bool m_clientTokenHasBeenSet = true;

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
