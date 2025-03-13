/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/auditmanager/AuditManager_EXPORTS.h>
#include <aws/auditmanager/AuditManagerRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/auditmanager/model/CreateControlMappingSource.h>
#include <utility>

namespace Aws
{
namespace AuditManager
{
namespace Model
{

  /**
   */
  class CreateControlRequest : public AuditManagerRequest
  {
  public:
    AWS_AUDITMANAGER_API CreateControlRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateControl"; }

    AWS_AUDITMANAGER_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p> The name of the control. </p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    CreateControlRequest& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The description of the control. </p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    CreateControlRequest& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The steps to follow to determine if the control is satisfied. </p>
     */
    inline const Aws::String& GetTestingInformation() const { return m_testingInformation; }
    inline bool TestingInformationHasBeenSet() const { return m_testingInformationHasBeenSet; }
    template<typename TestingInformationT = Aws::String>
    void SetTestingInformation(TestingInformationT&& value) { m_testingInformationHasBeenSet = true; m_testingInformation = std::forward<TestingInformationT>(value); }
    template<typename TestingInformationT = Aws::String>
    CreateControlRequest& WithTestingInformation(TestingInformationT&& value) { SetTestingInformation(std::forward<TestingInformationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The title of the action plan for remediating the control. </p>
     */
    inline const Aws::String& GetActionPlanTitle() const { return m_actionPlanTitle; }
    inline bool ActionPlanTitleHasBeenSet() const { return m_actionPlanTitleHasBeenSet; }
    template<typename ActionPlanTitleT = Aws::String>
    void SetActionPlanTitle(ActionPlanTitleT&& value) { m_actionPlanTitleHasBeenSet = true; m_actionPlanTitle = std::forward<ActionPlanTitleT>(value); }
    template<typename ActionPlanTitleT = Aws::String>
    CreateControlRequest& WithActionPlanTitle(ActionPlanTitleT&& value) { SetActionPlanTitle(std::forward<ActionPlanTitleT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The recommended actions to carry out if the control isn't fulfilled. </p>
     */
    inline const Aws::String& GetActionPlanInstructions() const { return m_actionPlanInstructions; }
    inline bool ActionPlanInstructionsHasBeenSet() const { return m_actionPlanInstructionsHasBeenSet; }
    template<typename ActionPlanInstructionsT = Aws::String>
    void SetActionPlanInstructions(ActionPlanInstructionsT&& value) { m_actionPlanInstructionsHasBeenSet = true; m_actionPlanInstructions = std::forward<ActionPlanInstructionsT>(value); }
    template<typename ActionPlanInstructionsT = Aws::String>
    CreateControlRequest& WithActionPlanInstructions(ActionPlanInstructionsT&& value) { SetActionPlanInstructions(std::forward<ActionPlanInstructionsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The data mapping sources for the control. </p>
     */
    inline const Aws::Vector<CreateControlMappingSource>& GetControlMappingSources() const { return m_controlMappingSources; }
    inline bool ControlMappingSourcesHasBeenSet() const { return m_controlMappingSourcesHasBeenSet; }
    template<typename ControlMappingSourcesT = Aws::Vector<CreateControlMappingSource>>
    void SetControlMappingSources(ControlMappingSourcesT&& value) { m_controlMappingSourcesHasBeenSet = true; m_controlMappingSources = std::forward<ControlMappingSourcesT>(value); }
    template<typename ControlMappingSourcesT = Aws::Vector<CreateControlMappingSource>>
    CreateControlRequest& WithControlMappingSources(ControlMappingSourcesT&& value) { SetControlMappingSources(std::forward<ControlMappingSourcesT>(value)); return *this;}
    template<typename ControlMappingSourcesT = CreateControlMappingSource>
    CreateControlRequest& AddControlMappingSources(ControlMappingSourcesT&& value) { m_controlMappingSourcesHasBeenSet = true; m_controlMappingSources.emplace_back(std::forward<ControlMappingSourcesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> The tags that are associated with the control. </p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    CreateControlRequest& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
    CreateControlRequest& AddTags(TagsKeyT&& key, TagsValueT&& value) {
      m_tagsHasBeenSet = true; m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value)); return *this;
    }
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_testingInformation;
    bool m_testingInformationHasBeenSet = false;

    Aws::String m_actionPlanTitle;
    bool m_actionPlanTitleHasBeenSet = false;

    Aws::String m_actionPlanInstructions;
    bool m_actionPlanInstructionsHasBeenSet = false;

    Aws::Vector<CreateControlMappingSource> m_controlMappingSources;
    bool m_controlMappingSourcesHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace AuditManager
} // namespace Aws
