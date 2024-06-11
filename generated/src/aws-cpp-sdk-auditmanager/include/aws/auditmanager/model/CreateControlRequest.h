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
    AWS_AUDITMANAGER_API CreateControlRequest();

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
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline CreateControlRequest& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline CreateControlRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline CreateControlRequest& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The description of the control. </p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline CreateControlRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline CreateControlRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline CreateControlRequest& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The steps to follow to determine if the control is satisfied. </p>
     */
    inline const Aws::String& GetTestingInformation() const{ return m_testingInformation; }
    inline bool TestingInformationHasBeenSet() const { return m_testingInformationHasBeenSet; }
    inline void SetTestingInformation(const Aws::String& value) { m_testingInformationHasBeenSet = true; m_testingInformation = value; }
    inline void SetTestingInformation(Aws::String&& value) { m_testingInformationHasBeenSet = true; m_testingInformation = std::move(value); }
    inline void SetTestingInformation(const char* value) { m_testingInformationHasBeenSet = true; m_testingInformation.assign(value); }
    inline CreateControlRequest& WithTestingInformation(const Aws::String& value) { SetTestingInformation(value); return *this;}
    inline CreateControlRequest& WithTestingInformation(Aws::String&& value) { SetTestingInformation(std::move(value)); return *this;}
    inline CreateControlRequest& WithTestingInformation(const char* value) { SetTestingInformation(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The title of the action plan for remediating the control. </p>
     */
    inline const Aws::String& GetActionPlanTitle() const{ return m_actionPlanTitle; }
    inline bool ActionPlanTitleHasBeenSet() const { return m_actionPlanTitleHasBeenSet; }
    inline void SetActionPlanTitle(const Aws::String& value) { m_actionPlanTitleHasBeenSet = true; m_actionPlanTitle = value; }
    inline void SetActionPlanTitle(Aws::String&& value) { m_actionPlanTitleHasBeenSet = true; m_actionPlanTitle = std::move(value); }
    inline void SetActionPlanTitle(const char* value) { m_actionPlanTitleHasBeenSet = true; m_actionPlanTitle.assign(value); }
    inline CreateControlRequest& WithActionPlanTitle(const Aws::String& value) { SetActionPlanTitle(value); return *this;}
    inline CreateControlRequest& WithActionPlanTitle(Aws::String&& value) { SetActionPlanTitle(std::move(value)); return *this;}
    inline CreateControlRequest& WithActionPlanTitle(const char* value) { SetActionPlanTitle(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The recommended actions to carry out if the control isn't fulfilled. </p>
     */
    inline const Aws::String& GetActionPlanInstructions() const{ return m_actionPlanInstructions; }
    inline bool ActionPlanInstructionsHasBeenSet() const { return m_actionPlanInstructionsHasBeenSet; }
    inline void SetActionPlanInstructions(const Aws::String& value) { m_actionPlanInstructionsHasBeenSet = true; m_actionPlanInstructions = value; }
    inline void SetActionPlanInstructions(Aws::String&& value) { m_actionPlanInstructionsHasBeenSet = true; m_actionPlanInstructions = std::move(value); }
    inline void SetActionPlanInstructions(const char* value) { m_actionPlanInstructionsHasBeenSet = true; m_actionPlanInstructions.assign(value); }
    inline CreateControlRequest& WithActionPlanInstructions(const Aws::String& value) { SetActionPlanInstructions(value); return *this;}
    inline CreateControlRequest& WithActionPlanInstructions(Aws::String&& value) { SetActionPlanInstructions(std::move(value)); return *this;}
    inline CreateControlRequest& WithActionPlanInstructions(const char* value) { SetActionPlanInstructions(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The data mapping sources for the control. </p>
     */
    inline const Aws::Vector<CreateControlMappingSource>& GetControlMappingSources() const{ return m_controlMappingSources; }
    inline bool ControlMappingSourcesHasBeenSet() const { return m_controlMappingSourcesHasBeenSet; }
    inline void SetControlMappingSources(const Aws::Vector<CreateControlMappingSource>& value) { m_controlMappingSourcesHasBeenSet = true; m_controlMappingSources = value; }
    inline void SetControlMappingSources(Aws::Vector<CreateControlMappingSource>&& value) { m_controlMappingSourcesHasBeenSet = true; m_controlMappingSources = std::move(value); }
    inline CreateControlRequest& WithControlMappingSources(const Aws::Vector<CreateControlMappingSource>& value) { SetControlMappingSources(value); return *this;}
    inline CreateControlRequest& WithControlMappingSources(Aws::Vector<CreateControlMappingSource>&& value) { SetControlMappingSources(std::move(value)); return *this;}
    inline CreateControlRequest& AddControlMappingSources(const CreateControlMappingSource& value) { m_controlMappingSourcesHasBeenSet = true; m_controlMappingSources.push_back(value); return *this; }
    inline CreateControlRequest& AddControlMappingSources(CreateControlMappingSource&& value) { m_controlMappingSourcesHasBeenSet = true; m_controlMappingSources.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> The tags that are associated with the control. </p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }
    inline CreateControlRequest& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}
    inline CreateControlRequest& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}
    inline CreateControlRequest& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }
    inline CreateControlRequest& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }
    inline CreateControlRequest& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }
    inline CreateControlRequest& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }
    inline CreateControlRequest& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }
    inline CreateControlRequest& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }
    inline CreateControlRequest& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }
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
