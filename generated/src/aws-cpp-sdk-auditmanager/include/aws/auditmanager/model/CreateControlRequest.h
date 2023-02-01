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


    /**
     * <p> The name of the control. </p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p> The name of the control. </p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p> The name of the control. </p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p> The name of the control. </p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p> The name of the control. </p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p> The name of the control. </p>
     */
    inline CreateControlRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p> The name of the control. </p>
     */
    inline CreateControlRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p> The name of the control. </p>
     */
    inline CreateControlRequest& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p> The description of the control. </p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p> The description of the control. </p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p> The description of the control. </p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p> The description of the control. </p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p> The description of the control. </p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p> The description of the control. </p>
     */
    inline CreateControlRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p> The description of the control. </p>
     */
    inline CreateControlRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p> The description of the control. </p>
     */
    inline CreateControlRequest& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p> The steps to follow to determine if the control is satisfied. </p>
     */
    inline const Aws::String& GetTestingInformation() const{ return m_testingInformation; }

    /**
     * <p> The steps to follow to determine if the control is satisfied. </p>
     */
    inline bool TestingInformationHasBeenSet() const { return m_testingInformationHasBeenSet; }

    /**
     * <p> The steps to follow to determine if the control is satisfied. </p>
     */
    inline void SetTestingInformation(const Aws::String& value) { m_testingInformationHasBeenSet = true; m_testingInformation = value; }

    /**
     * <p> The steps to follow to determine if the control is satisfied. </p>
     */
    inline void SetTestingInformation(Aws::String&& value) { m_testingInformationHasBeenSet = true; m_testingInformation = std::move(value); }

    /**
     * <p> The steps to follow to determine if the control is satisfied. </p>
     */
    inline void SetTestingInformation(const char* value) { m_testingInformationHasBeenSet = true; m_testingInformation.assign(value); }

    /**
     * <p> The steps to follow to determine if the control is satisfied. </p>
     */
    inline CreateControlRequest& WithTestingInformation(const Aws::String& value) { SetTestingInformation(value); return *this;}

    /**
     * <p> The steps to follow to determine if the control is satisfied. </p>
     */
    inline CreateControlRequest& WithTestingInformation(Aws::String&& value) { SetTestingInformation(std::move(value)); return *this;}

    /**
     * <p> The steps to follow to determine if the control is satisfied. </p>
     */
    inline CreateControlRequest& WithTestingInformation(const char* value) { SetTestingInformation(value); return *this;}


    /**
     * <p> The title of the action plan for remediating the control. </p>
     */
    inline const Aws::String& GetActionPlanTitle() const{ return m_actionPlanTitle; }

    /**
     * <p> The title of the action plan for remediating the control. </p>
     */
    inline bool ActionPlanTitleHasBeenSet() const { return m_actionPlanTitleHasBeenSet; }

    /**
     * <p> The title of the action plan for remediating the control. </p>
     */
    inline void SetActionPlanTitle(const Aws::String& value) { m_actionPlanTitleHasBeenSet = true; m_actionPlanTitle = value; }

    /**
     * <p> The title of the action plan for remediating the control. </p>
     */
    inline void SetActionPlanTitle(Aws::String&& value) { m_actionPlanTitleHasBeenSet = true; m_actionPlanTitle = std::move(value); }

    /**
     * <p> The title of the action plan for remediating the control. </p>
     */
    inline void SetActionPlanTitle(const char* value) { m_actionPlanTitleHasBeenSet = true; m_actionPlanTitle.assign(value); }

    /**
     * <p> The title of the action plan for remediating the control. </p>
     */
    inline CreateControlRequest& WithActionPlanTitle(const Aws::String& value) { SetActionPlanTitle(value); return *this;}

    /**
     * <p> The title of the action plan for remediating the control. </p>
     */
    inline CreateControlRequest& WithActionPlanTitle(Aws::String&& value) { SetActionPlanTitle(std::move(value)); return *this;}

    /**
     * <p> The title of the action plan for remediating the control. </p>
     */
    inline CreateControlRequest& WithActionPlanTitle(const char* value) { SetActionPlanTitle(value); return *this;}


    /**
     * <p> The recommended actions to carry out if the control isn't fulfilled. </p>
     */
    inline const Aws::String& GetActionPlanInstructions() const{ return m_actionPlanInstructions; }

    /**
     * <p> The recommended actions to carry out if the control isn't fulfilled. </p>
     */
    inline bool ActionPlanInstructionsHasBeenSet() const { return m_actionPlanInstructionsHasBeenSet; }

    /**
     * <p> The recommended actions to carry out if the control isn't fulfilled. </p>
     */
    inline void SetActionPlanInstructions(const Aws::String& value) { m_actionPlanInstructionsHasBeenSet = true; m_actionPlanInstructions = value; }

    /**
     * <p> The recommended actions to carry out if the control isn't fulfilled. </p>
     */
    inline void SetActionPlanInstructions(Aws::String&& value) { m_actionPlanInstructionsHasBeenSet = true; m_actionPlanInstructions = std::move(value); }

    /**
     * <p> The recommended actions to carry out if the control isn't fulfilled. </p>
     */
    inline void SetActionPlanInstructions(const char* value) { m_actionPlanInstructionsHasBeenSet = true; m_actionPlanInstructions.assign(value); }

    /**
     * <p> The recommended actions to carry out if the control isn't fulfilled. </p>
     */
    inline CreateControlRequest& WithActionPlanInstructions(const Aws::String& value) { SetActionPlanInstructions(value); return *this;}

    /**
     * <p> The recommended actions to carry out if the control isn't fulfilled. </p>
     */
    inline CreateControlRequest& WithActionPlanInstructions(Aws::String&& value) { SetActionPlanInstructions(std::move(value)); return *this;}

    /**
     * <p> The recommended actions to carry out if the control isn't fulfilled. </p>
     */
    inline CreateControlRequest& WithActionPlanInstructions(const char* value) { SetActionPlanInstructions(value); return *this;}


    /**
     * <p> The data mapping sources for the control. </p>
     */
    inline const Aws::Vector<CreateControlMappingSource>& GetControlMappingSources() const{ return m_controlMappingSources; }

    /**
     * <p> The data mapping sources for the control. </p>
     */
    inline bool ControlMappingSourcesHasBeenSet() const { return m_controlMappingSourcesHasBeenSet; }

    /**
     * <p> The data mapping sources for the control. </p>
     */
    inline void SetControlMappingSources(const Aws::Vector<CreateControlMappingSource>& value) { m_controlMappingSourcesHasBeenSet = true; m_controlMappingSources = value; }

    /**
     * <p> The data mapping sources for the control. </p>
     */
    inline void SetControlMappingSources(Aws::Vector<CreateControlMappingSource>&& value) { m_controlMappingSourcesHasBeenSet = true; m_controlMappingSources = std::move(value); }

    /**
     * <p> The data mapping sources for the control. </p>
     */
    inline CreateControlRequest& WithControlMappingSources(const Aws::Vector<CreateControlMappingSource>& value) { SetControlMappingSources(value); return *this;}

    /**
     * <p> The data mapping sources for the control. </p>
     */
    inline CreateControlRequest& WithControlMappingSources(Aws::Vector<CreateControlMappingSource>&& value) { SetControlMappingSources(std::move(value)); return *this;}

    /**
     * <p> The data mapping sources for the control. </p>
     */
    inline CreateControlRequest& AddControlMappingSources(const CreateControlMappingSource& value) { m_controlMappingSourcesHasBeenSet = true; m_controlMappingSources.push_back(value); return *this; }

    /**
     * <p> The data mapping sources for the control. </p>
     */
    inline CreateControlRequest& AddControlMappingSources(CreateControlMappingSource&& value) { m_controlMappingSourcesHasBeenSet = true; m_controlMappingSources.push_back(std::move(value)); return *this; }


    /**
     * <p> The tags that are associated with the control. </p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }

    /**
     * <p> The tags that are associated with the control. </p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p> The tags that are associated with the control. </p>
     */
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p> The tags that are associated with the control. </p>
     */
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p> The tags that are associated with the control. </p>
     */
    inline CreateControlRequest& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}

    /**
     * <p> The tags that are associated with the control. </p>
     */
    inline CreateControlRequest& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p> The tags that are associated with the control. </p>
     */
    inline CreateControlRequest& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

    /**
     * <p> The tags that are associated with the control. </p>
     */
    inline CreateControlRequest& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p> The tags that are associated with the control. </p>
     */
    inline CreateControlRequest& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p> The tags that are associated with the control. </p>
     */
    inline CreateControlRequest& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p> The tags that are associated with the control. </p>
     */
    inline CreateControlRequest& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p> The tags that are associated with the control. </p>
     */
    inline CreateControlRequest& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p> The tags that are associated with the control. </p>
     */
    inline CreateControlRequest& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

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
