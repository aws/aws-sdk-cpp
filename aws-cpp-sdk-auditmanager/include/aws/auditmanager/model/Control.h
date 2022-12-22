/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/auditmanager/AuditManager_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/auditmanager/model/ControlType.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/auditmanager/model/ControlMappingSource.h>
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
namespace AuditManager
{
namespace Model
{

  /**
   * <p> A control in Audit Manager. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/auditmanager-2017-07-25/Control">AWS
   * API Reference</a></p>
   */
  class Control
  {
  public:
    AWS_AUDITMANAGER_API Control();
    AWS_AUDITMANAGER_API Control(Aws::Utils::Json::JsonView jsonValue);
    AWS_AUDITMANAGER_API Control& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_AUDITMANAGER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p> The Amazon Resource Name (ARN) of the control. </p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p> The Amazon Resource Name (ARN) of the control. </p>
     */
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }

    /**
     * <p> The Amazon Resource Name (ARN) of the control. </p>
     */
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }

    /**
     * <p> The Amazon Resource Name (ARN) of the control. </p>
     */
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }

    /**
     * <p> The Amazon Resource Name (ARN) of the control. </p>
     */
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }

    /**
     * <p> The Amazon Resource Name (ARN) of the control. </p>
     */
    inline Control& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p> The Amazon Resource Name (ARN) of the control. </p>
     */
    inline Control& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p> The Amazon Resource Name (ARN) of the control. </p>
     */
    inline Control& WithArn(const char* value) { SetArn(value); return *this;}


    /**
     * <p> The unique identifier for the control. </p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p> The unique identifier for the control. </p>
     */
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }

    /**
     * <p> The unique identifier for the control. </p>
     */
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * <p> The unique identifier for the control. </p>
     */
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }

    /**
     * <p> The unique identifier for the control. </p>
     */
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    /**
     * <p> The unique identifier for the control. </p>
     */
    inline Control& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p> The unique identifier for the control. </p>
     */
    inline Control& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p> The unique identifier for the control. </p>
     */
    inline Control& WithId(const char* value) { SetId(value); return *this;}


    /**
     * <p> The type of control, such as a custom control or a standard control. </p>
     */
    inline const ControlType& GetType() const{ return m_type; }

    /**
     * <p> The type of control, such as a custom control or a standard control. </p>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p> The type of control, such as a custom control or a standard control. </p>
     */
    inline void SetType(const ControlType& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p> The type of control, such as a custom control or a standard control. </p>
     */
    inline void SetType(ControlType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p> The type of control, such as a custom control or a standard control. </p>
     */
    inline Control& WithType(const ControlType& value) { SetType(value); return *this;}

    /**
     * <p> The type of control, such as a custom control or a standard control. </p>
     */
    inline Control& WithType(ControlType&& value) { SetType(std::move(value)); return *this;}


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
    inline Control& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p> The name of the control. </p>
     */
    inline Control& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p> The name of the control. </p>
     */
    inline Control& WithName(const char* value) { SetName(value); return *this;}


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
    inline Control& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p> The description of the control. </p>
     */
    inline Control& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p> The description of the control. </p>
     */
    inline Control& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p> The steps that you should follow to determine if the control has been
     * satisfied. </p>
     */
    inline const Aws::String& GetTestingInformation() const{ return m_testingInformation; }

    /**
     * <p> The steps that you should follow to determine if the control has been
     * satisfied. </p>
     */
    inline bool TestingInformationHasBeenSet() const { return m_testingInformationHasBeenSet; }

    /**
     * <p> The steps that you should follow to determine if the control has been
     * satisfied. </p>
     */
    inline void SetTestingInformation(const Aws::String& value) { m_testingInformationHasBeenSet = true; m_testingInformation = value; }

    /**
     * <p> The steps that you should follow to determine if the control has been
     * satisfied. </p>
     */
    inline void SetTestingInformation(Aws::String&& value) { m_testingInformationHasBeenSet = true; m_testingInformation = std::move(value); }

    /**
     * <p> The steps that you should follow to determine if the control has been
     * satisfied. </p>
     */
    inline void SetTestingInformation(const char* value) { m_testingInformationHasBeenSet = true; m_testingInformation.assign(value); }

    /**
     * <p> The steps that you should follow to determine if the control has been
     * satisfied. </p>
     */
    inline Control& WithTestingInformation(const Aws::String& value) { SetTestingInformation(value); return *this;}

    /**
     * <p> The steps that you should follow to determine if the control has been
     * satisfied. </p>
     */
    inline Control& WithTestingInformation(Aws::String&& value) { SetTestingInformation(std::move(value)); return *this;}

    /**
     * <p> The steps that you should follow to determine if the control has been
     * satisfied. </p>
     */
    inline Control& WithTestingInformation(const char* value) { SetTestingInformation(value); return *this;}


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
    inline Control& WithActionPlanTitle(const Aws::String& value) { SetActionPlanTitle(value); return *this;}

    /**
     * <p> The title of the action plan for remediating the control. </p>
     */
    inline Control& WithActionPlanTitle(Aws::String&& value) { SetActionPlanTitle(std::move(value)); return *this;}

    /**
     * <p> The title of the action plan for remediating the control. </p>
     */
    inline Control& WithActionPlanTitle(const char* value) { SetActionPlanTitle(value); return *this;}


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
    inline Control& WithActionPlanInstructions(const Aws::String& value) { SetActionPlanInstructions(value); return *this;}

    /**
     * <p> The recommended actions to carry out if the control isn't fulfilled. </p>
     */
    inline Control& WithActionPlanInstructions(Aws::String&& value) { SetActionPlanInstructions(std::move(value)); return *this;}

    /**
     * <p> The recommended actions to carry out if the control isn't fulfilled. </p>
     */
    inline Control& WithActionPlanInstructions(const char* value) { SetActionPlanInstructions(value); return *this;}


    /**
     * <p> The data source types that determine where Audit Manager collects evidence
     * from for the control. </p>
     */
    inline const Aws::String& GetControlSources() const{ return m_controlSources; }

    /**
     * <p> The data source types that determine where Audit Manager collects evidence
     * from for the control. </p>
     */
    inline bool ControlSourcesHasBeenSet() const { return m_controlSourcesHasBeenSet; }

    /**
     * <p> The data source types that determine where Audit Manager collects evidence
     * from for the control. </p>
     */
    inline void SetControlSources(const Aws::String& value) { m_controlSourcesHasBeenSet = true; m_controlSources = value; }

    /**
     * <p> The data source types that determine where Audit Manager collects evidence
     * from for the control. </p>
     */
    inline void SetControlSources(Aws::String&& value) { m_controlSourcesHasBeenSet = true; m_controlSources = std::move(value); }

    /**
     * <p> The data source types that determine where Audit Manager collects evidence
     * from for the control. </p>
     */
    inline void SetControlSources(const char* value) { m_controlSourcesHasBeenSet = true; m_controlSources.assign(value); }

    /**
     * <p> The data source types that determine where Audit Manager collects evidence
     * from for the control. </p>
     */
    inline Control& WithControlSources(const Aws::String& value) { SetControlSources(value); return *this;}

    /**
     * <p> The data source types that determine where Audit Manager collects evidence
     * from for the control. </p>
     */
    inline Control& WithControlSources(Aws::String&& value) { SetControlSources(std::move(value)); return *this;}

    /**
     * <p> The data source types that determine where Audit Manager collects evidence
     * from for the control. </p>
     */
    inline Control& WithControlSources(const char* value) { SetControlSources(value); return *this;}


    /**
     * <p> The data mapping sources for the control. </p>
     */
    inline const Aws::Vector<ControlMappingSource>& GetControlMappingSources() const{ return m_controlMappingSources; }

    /**
     * <p> The data mapping sources for the control. </p>
     */
    inline bool ControlMappingSourcesHasBeenSet() const { return m_controlMappingSourcesHasBeenSet; }

    /**
     * <p> The data mapping sources for the control. </p>
     */
    inline void SetControlMappingSources(const Aws::Vector<ControlMappingSource>& value) { m_controlMappingSourcesHasBeenSet = true; m_controlMappingSources = value; }

    /**
     * <p> The data mapping sources for the control. </p>
     */
    inline void SetControlMappingSources(Aws::Vector<ControlMappingSource>&& value) { m_controlMappingSourcesHasBeenSet = true; m_controlMappingSources = std::move(value); }

    /**
     * <p> The data mapping sources for the control. </p>
     */
    inline Control& WithControlMappingSources(const Aws::Vector<ControlMappingSource>& value) { SetControlMappingSources(value); return *this;}

    /**
     * <p> The data mapping sources for the control. </p>
     */
    inline Control& WithControlMappingSources(Aws::Vector<ControlMappingSource>&& value) { SetControlMappingSources(std::move(value)); return *this;}

    /**
     * <p> The data mapping sources for the control. </p>
     */
    inline Control& AddControlMappingSources(const ControlMappingSource& value) { m_controlMappingSourcesHasBeenSet = true; m_controlMappingSources.push_back(value); return *this; }

    /**
     * <p> The data mapping sources for the control. </p>
     */
    inline Control& AddControlMappingSources(ControlMappingSource&& value) { m_controlMappingSourcesHasBeenSet = true; m_controlMappingSources.push_back(std::move(value)); return *this; }


    /**
     * <p> Specifies when the control was created. </p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }

    /**
     * <p> Specifies when the control was created. </p>
     */
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }

    /**
     * <p> Specifies when the control was created. </p>
     */
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAtHasBeenSet = true; m_createdAt = value; }

    /**
     * <p> Specifies when the control was created. </p>
     */
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::move(value); }

    /**
     * <p> Specifies when the control was created. </p>
     */
    inline Control& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}

    /**
     * <p> Specifies when the control was created. </p>
     */
    inline Control& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}


    /**
     * <p> Specifies when the control was most recently updated. </p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedAt() const{ return m_lastUpdatedAt; }

    /**
     * <p> Specifies when the control was most recently updated. </p>
     */
    inline bool LastUpdatedAtHasBeenSet() const { return m_lastUpdatedAtHasBeenSet; }

    /**
     * <p> Specifies when the control was most recently updated. </p>
     */
    inline void SetLastUpdatedAt(const Aws::Utils::DateTime& value) { m_lastUpdatedAtHasBeenSet = true; m_lastUpdatedAt = value; }

    /**
     * <p> Specifies when the control was most recently updated. </p>
     */
    inline void SetLastUpdatedAt(Aws::Utils::DateTime&& value) { m_lastUpdatedAtHasBeenSet = true; m_lastUpdatedAt = std::move(value); }

    /**
     * <p> Specifies when the control was most recently updated. </p>
     */
    inline Control& WithLastUpdatedAt(const Aws::Utils::DateTime& value) { SetLastUpdatedAt(value); return *this;}

    /**
     * <p> Specifies when the control was most recently updated. </p>
     */
    inline Control& WithLastUpdatedAt(Aws::Utils::DateTime&& value) { SetLastUpdatedAt(std::move(value)); return *this;}


    /**
     * <p> The IAM user or role that created the control. </p>
     */
    inline const Aws::String& GetCreatedBy() const{ return m_createdBy; }

    /**
     * <p> The IAM user or role that created the control. </p>
     */
    inline bool CreatedByHasBeenSet() const { return m_createdByHasBeenSet; }

    /**
     * <p> The IAM user or role that created the control. </p>
     */
    inline void SetCreatedBy(const Aws::String& value) { m_createdByHasBeenSet = true; m_createdBy = value; }

    /**
     * <p> The IAM user or role that created the control. </p>
     */
    inline void SetCreatedBy(Aws::String&& value) { m_createdByHasBeenSet = true; m_createdBy = std::move(value); }

    /**
     * <p> The IAM user or role that created the control. </p>
     */
    inline void SetCreatedBy(const char* value) { m_createdByHasBeenSet = true; m_createdBy.assign(value); }

    /**
     * <p> The IAM user or role that created the control. </p>
     */
    inline Control& WithCreatedBy(const Aws::String& value) { SetCreatedBy(value); return *this;}

    /**
     * <p> The IAM user or role that created the control. </p>
     */
    inline Control& WithCreatedBy(Aws::String&& value) { SetCreatedBy(std::move(value)); return *this;}

    /**
     * <p> The IAM user or role that created the control. </p>
     */
    inline Control& WithCreatedBy(const char* value) { SetCreatedBy(value); return *this;}


    /**
     * <p> The IAM user or role that most recently updated the control. </p>
     */
    inline const Aws::String& GetLastUpdatedBy() const{ return m_lastUpdatedBy; }

    /**
     * <p> The IAM user or role that most recently updated the control. </p>
     */
    inline bool LastUpdatedByHasBeenSet() const { return m_lastUpdatedByHasBeenSet; }

    /**
     * <p> The IAM user or role that most recently updated the control. </p>
     */
    inline void SetLastUpdatedBy(const Aws::String& value) { m_lastUpdatedByHasBeenSet = true; m_lastUpdatedBy = value; }

    /**
     * <p> The IAM user or role that most recently updated the control. </p>
     */
    inline void SetLastUpdatedBy(Aws::String&& value) { m_lastUpdatedByHasBeenSet = true; m_lastUpdatedBy = std::move(value); }

    /**
     * <p> The IAM user or role that most recently updated the control. </p>
     */
    inline void SetLastUpdatedBy(const char* value) { m_lastUpdatedByHasBeenSet = true; m_lastUpdatedBy.assign(value); }

    /**
     * <p> The IAM user or role that most recently updated the control. </p>
     */
    inline Control& WithLastUpdatedBy(const Aws::String& value) { SetLastUpdatedBy(value); return *this;}

    /**
     * <p> The IAM user or role that most recently updated the control. </p>
     */
    inline Control& WithLastUpdatedBy(Aws::String&& value) { SetLastUpdatedBy(std::move(value)); return *this;}

    /**
     * <p> The IAM user or role that most recently updated the control. </p>
     */
    inline Control& WithLastUpdatedBy(const char* value) { SetLastUpdatedBy(value); return *this;}


    /**
     * <p> The tags associated with the control. </p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }

    /**
     * <p> The tags associated with the control. </p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p> The tags associated with the control. </p>
     */
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p> The tags associated with the control. </p>
     */
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p> The tags associated with the control. </p>
     */
    inline Control& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}

    /**
     * <p> The tags associated with the control. </p>
     */
    inline Control& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p> The tags associated with the control. </p>
     */
    inline Control& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

    /**
     * <p> The tags associated with the control. </p>
     */
    inline Control& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p> The tags associated with the control. </p>
     */
    inline Control& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p> The tags associated with the control. </p>
     */
    inline Control& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p> The tags associated with the control. </p>
     */
    inline Control& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p> The tags associated with the control. </p>
     */
    inline Control& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p> The tags associated with the control. </p>
     */
    inline Control& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    ControlType m_type;
    bool m_typeHasBeenSet = false;

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

    Aws::String m_controlSources;
    bool m_controlSourcesHasBeenSet = false;

    Aws::Vector<ControlMappingSource> m_controlMappingSources;
    bool m_controlMappingSourcesHasBeenSet = false;

    Aws::Utils::DateTime m_createdAt;
    bool m_createdAtHasBeenSet = false;

    Aws::Utils::DateTime m_lastUpdatedAt;
    bool m_lastUpdatedAtHasBeenSet = false;

    Aws::String m_createdBy;
    bool m_createdByHasBeenSet = false;

    Aws::String m_lastUpdatedBy;
    bool m_lastUpdatedByHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace AuditManager
} // namespace Aws
