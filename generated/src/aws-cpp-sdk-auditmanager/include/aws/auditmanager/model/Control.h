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
#include <aws/auditmanager/model/ControlState.h>
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


    ///@{
    /**
     * <p> The Amazon Resource Name (ARN) of the control. </p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }
    inline Control& WithArn(const Aws::String& value) { SetArn(value); return *this;}
    inline Control& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}
    inline Control& WithArn(const char* value) { SetArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The unique identifier for the control. </p>
     */
    inline const Aws::String& GetId() const{ return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }
    inline Control& WithId(const Aws::String& value) { SetId(value); return *this;}
    inline Control& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}
    inline Control& WithId(const char* value) { SetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> Specifies whether the control is a standard control or a custom control.</p>
     */
    inline const ControlType& GetType() const{ return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(const ControlType& value) { m_typeHasBeenSet = true; m_type = value; }
    inline void SetType(ControlType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }
    inline Control& WithType(const ControlType& value) { SetType(value); return *this;}
    inline Control& WithType(ControlType&& value) { SetType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The name of the control. </p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline Control& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline Control& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline Control& WithName(const char* value) { SetName(value); return *this;}
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
    inline Control& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline Control& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline Control& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The steps that you should follow to determine if the control has been
     * satisfied. </p>
     */
    inline const Aws::String& GetTestingInformation() const{ return m_testingInformation; }
    inline bool TestingInformationHasBeenSet() const { return m_testingInformationHasBeenSet; }
    inline void SetTestingInformation(const Aws::String& value) { m_testingInformationHasBeenSet = true; m_testingInformation = value; }
    inline void SetTestingInformation(Aws::String&& value) { m_testingInformationHasBeenSet = true; m_testingInformation = std::move(value); }
    inline void SetTestingInformation(const char* value) { m_testingInformationHasBeenSet = true; m_testingInformation.assign(value); }
    inline Control& WithTestingInformation(const Aws::String& value) { SetTestingInformation(value); return *this;}
    inline Control& WithTestingInformation(Aws::String&& value) { SetTestingInformation(std::move(value)); return *this;}
    inline Control& WithTestingInformation(const char* value) { SetTestingInformation(value); return *this;}
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
    inline Control& WithActionPlanTitle(const Aws::String& value) { SetActionPlanTitle(value); return *this;}
    inline Control& WithActionPlanTitle(Aws::String&& value) { SetActionPlanTitle(std::move(value)); return *this;}
    inline Control& WithActionPlanTitle(const char* value) { SetActionPlanTitle(value); return *this;}
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
    inline Control& WithActionPlanInstructions(const Aws::String& value) { SetActionPlanInstructions(value); return *this;}
    inline Control& WithActionPlanInstructions(Aws::String&& value) { SetActionPlanInstructions(std::move(value)); return *this;}
    inline Control& WithActionPlanInstructions(const char* value) { SetActionPlanInstructions(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The data source types that determine where Audit Manager collects evidence
     * from for the control. </p>
     */
    inline const Aws::String& GetControlSources() const{ return m_controlSources; }
    inline bool ControlSourcesHasBeenSet() const { return m_controlSourcesHasBeenSet; }
    inline void SetControlSources(const Aws::String& value) { m_controlSourcesHasBeenSet = true; m_controlSources = value; }
    inline void SetControlSources(Aws::String&& value) { m_controlSourcesHasBeenSet = true; m_controlSources = std::move(value); }
    inline void SetControlSources(const char* value) { m_controlSourcesHasBeenSet = true; m_controlSources.assign(value); }
    inline Control& WithControlSources(const Aws::String& value) { SetControlSources(value); return *this;}
    inline Control& WithControlSources(Aws::String&& value) { SetControlSources(std::move(value)); return *this;}
    inline Control& WithControlSources(const char* value) { SetControlSources(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The data mapping sources for the control. </p>
     */
    inline const Aws::Vector<ControlMappingSource>& GetControlMappingSources() const{ return m_controlMappingSources; }
    inline bool ControlMappingSourcesHasBeenSet() const { return m_controlMappingSourcesHasBeenSet; }
    inline void SetControlMappingSources(const Aws::Vector<ControlMappingSource>& value) { m_controlMappingSourcesHasBeenSet = true; m_controlMappingSources = value; }
    inline void SetControlMappingSources(Aws::Vector<ControlMappingSource>&& value) { m_controlMappingSourcesHasBeenSet = true; m_controlMappingSources = std::move(value); }
    inline Control& WithControlMappingSources(const Aws::Vector<ControlMappingSource>& value) { SetControlMappingSources(value); return *this;}
    inline Control& WithControlMappingSources(Aws::Vector<ControlMappingSource>&& value) { SetControlMappingSources(std::move(value)); return *this;}
    inline Control& AddControlMappingSources(const ControlMappingSource& value) { m_controlMappingSourcesHasBeenSet = true; m_controlMappingSources.push_back(value); return *this; }
    inline Control& AddControlMappingSources(ControlMappingSource&& value) { m_controlMappingSourcesHasBeenSet = true; m_controlMappingSources.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> The time when the control was created. </p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAtHasBeenSet = true; m_createdAt = value; }
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::move(value); }
    inline Control& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}
    inline Control& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The time when the control was most recently updated. </p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedAt() const{ return m_lastUpdatedAt; }
    inline bool LastUpdatedAtHasBeenSet() const { return m_lastUpdatedAtHasBeenSet; }
    inline void SetLastUpdatedAt(const Aws::Utils::DateTime& value) { m_lastUpdatedAtHasBeenSet = true; m_lastUpdatedAt = value; }
    inline void SetLastUpdatedAt(Aws::Utils::DateTime&& value) { m_lastUpdatedAtHasBeenSet = true; m_lastUpdatedAt = std::move(value); }
    inline Control& WithLastUpdatedAt(const Aws::Utils::DateTime& value) { SetLastUpdatedAt(value); return *this;}
    inline Control& WithLastUpdatedAt(Aws::Utils::DateTime&& value) { SetLastUpdatedAt(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The user or role that created the control. </p>
     */
    inline const Aws::String& GetCreatedBy() const{ return m_createdBy; }
    inline bool CreatedByHasBeenSet() const { return m_createdByHasBeenSet; }
    inline void SetCreatedBy(const Aws::String& value) { m_createdByHasBeenSet = true; m_createdBy = value; }
    inline void SetCreatedBy(Aws::String&& value) { m_createdByHasBeenSet = true; m_createdBy = std::move(value); }
    inline void SetCreatedBy(const char* value) { m_createdByHasBeenSet = true; m_createdBy.assign(value); }
    inline Control& WithCreatedBy(const Aws::String& value) { SetCreatedBy(value); return *this;}
    inline Control& WithCreatedBy(Aws::String&& value) { SetCreatedBy(std::move(value)); return *this;}
    inline Control& WithCreatedBy(const char* value) { SetCreatedBy(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The user or role that most recently updated the control. </p>
     */
    inline const Aws::String& GetLastUpdatedBy() const{ return m_lastUpdatedBy; }
    inline bool LastUpdatedByHasBeenSet() const { return m_lastUpdatedByHasBeenSet; }
    inline void SetLastUpdatedBy(const Aws::String& value) { m_lastUpdatedByHasBeenSet = true; m_lastUpdatedBy = value; }
    inline void SetLastUpdatedBy(Aws::String&& value) { m_lastUpdatedByHasBeenSet = true; m_lastUpdatedBy = std::move(value); }
    inline void SetLastUpdatedBy(const char* value) { m_lastUpdatedByHasBeenSet = true; m_lastUpdatedBy.assign(value); }
    inline Control& WithLastUpdatedBy(const Aws::String& value) { SetLastUpdatedBy(value); return *this;}
    inline Control& WithLastUpdatedBy(Aws::String&& value) { SetLastUpdatedBy(std::move(value)); return *this;}
    inline Control& WithLastUpdatedBy(const char* value) { SetLastUpdatedBy(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The tags associated with the control. </p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }
    inline Control& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}
    inline Control& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}
    inline Control& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }
    inline Control& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }
    inline Control& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }
    inline Control& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }
    inline Control& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }
    inline Control& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }
    inline Control& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The state of the control. The <code>END_OF_SUPPORT</code> state is applicable
     * to standard controls only. This state indicates that the standard control can
     * still be used to collect evidence, but Audit Manager is no longer updating or
     * maintaining that control.</p>
     */
    inline const ControlState& GetState() const{ return m_state; }
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }
    inline void SetState(const ControlState& value) { m_stateHasBeenSet = true; m_state = value; }
    inline void SetState(ControlState&& value) { m_stateHasBeenSet = true; m_state = std::move(value); }
    inline Control& WithState(const ControlState& value) { SetState(value); return *this;}
    inline Control& WithState(ControlState&& value) { SetState(std::move(value)); return *this;}
    ///@}
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

    ControlState m_state;
    bool m_stateHasBeenSet = false;
  };

} // namespace Model
} // namespace AuditManager
} // namespace Aws
