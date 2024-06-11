/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/auditmanager/AuditManager_EXPORTS.h>
#include <aws/auditmanager/AuditManagerRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/auditmanager/model/ControlMappingSource.h>
#include <utility>

namespace Aws
{
namespace AuditManager
{
namespace Model
{

  /**
   */
  class UpdateControlRequest : public AuditManagerRequest
  {
  public:
    AWS_AUDITMANAGER_API UpdateControlRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateControl"; }

    AWS_AUDITMANAGER_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p> The identifier for the control. </p>
     */
    inline const Aws::String& GetControlId() const{ return m_controlId; }
    inline bool ControlIdHasBeenSet() const { return m_controlIdHasBeenSet; }
    inline void SetControlId(const Aws::String& value) { m_controlIdHasBeenSet = true; m_controlId = value; }
    inline void SetControlId(Aws::String&& value) { m_controlIdHasBeenSet = true; m_controlId = std::move(value); }
    inline void SetControlId(const char* value) { m_controlIdHasBeenSet = true; m_controlId.assign(value); }
    inline UpdateControlRequest& WithControlId(const Aws::String& value) { SetControlId(value); return *this;}
    inline UpdateControlRequest& WithControlId(Aws::String&& value) { SetControlId(std::move(value)); return *this;}
    inline UpdateControlRequest& WithControlId(const char* value) { SetControlId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The name of the updated control. </p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline UpdateControlRequest& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline UpdateControlRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline UpdateControlRequest& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The optional description of the control. </p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline UpdateControlRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline UpdateControlRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline UpdateControlRequest& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The steps that you should follow to determine if the control is met. </p>
     */
    inline const Aws::String& GetTestingInformation() const{ return m_testingInformation; }
    inline bool TestingInformationHasBeenSet() const { return m_testingInformationHasBeenSet; }
    inline void SetTestingInformation(const Aws::String& value) { m_testingInformationHasBeenSet = true; m_testingInformation = value; }
    inline void SetTestingInformation(Aws::String&& value) { m_testingInformationHasBeenSet = true; m_testingInformation = std::move(value); }
    inline void SetTestingInformation(const char* value) { m_testingInformationHasBeenSet = true; m_testingInformation.assign(value); }
    inline UpdateControlRequest& WithTestingInformation(const Aws::String& value) { SetTestingInformation(value); return *this;}
    inline UpdateControlRequest& WithTestingInformation(Aws::String&& value) { SetTestingInformation(std::move(value)); return *this;}
    inline UpdateControlRequest& WithTestingInformation(const char* value) { SetTestingInformation(value); return *this;}
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
    inline UpdateControlRequest& WithActionPlanTitle(const Aws::String& value) { SetActionPlanTitle(value); return *this;}
    inline UpdateControlRequest& WithActionPlanTitle(Aws::String&& value) { SetActionPlanTitle(std::move(value)); return *this;}
    inline UpdateControlRequest& WithActionPlanTitle(const char* value) { SetActionPlanTitle(value); return *this;}
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
    inline UpdateControlRequest& WithActionPlanInstructions(const Aws::String& value) { SetActionPlanInstructions(value); return *this;}
    inline UpdateControlRequest& WithActionPlanInstructions(Aws::String&& value) { SetActionPlanInstructions(std::move(value)); return *this;}
    inline UpdateControlRequest& WithActionPlanInstructions(const char* value) { SetActionPlanInstructions(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The data mapping sources for the control. </p>
     */
    inline const Aws::Vector<ControlMappingSource>& GetControlMappingSources() const{ return m_controlMappingSources; }
    inline bool ControlMappingSourcesHasBeenSet() const { return m_controlMappingSourcesHasBeenSet; }
    inline void SetControlMappingSources(const Aws::Vector<ControlMappingSource>& value) { m_controlMappingSourcesHasBeenSet = true; m_controlMappingSources = value; }
    inline void SetControlMappingSources(Aws::Vector<ControlMappingSource>&& value) { m_controlMappingSourcesHasBeenSet = true; m_controlMappingSources = std::move(value); }
    inline UpdateControlRequest& WithControlMappingSources(const Aws::Vector<ControlMappingSource>& value) { SetControlMappingSources(value); return *this;}
    inline UpdateControlRequest& WithControlMappingSources(Aws::Vector<ControlMappingSource>&& value) { SetControlMappingSources(std::move(value)); return *this;}
    inline UpdateControlRequest& AddControlMappingSources(const ControlMappingSource& value) { m_controlMappingSourcesHasBeenSet = true; m_controlMappingSources.push_back(value); return *this; }
    inline UpdateControlRequest& AddControlMappingSources(ControlMappingSource&& value) { m_controlMappingSourcesHasBeenSet = true; m_controlMappingSources.push_back(std::move(value)); return *this; }
    ///@}
  private:

    Aws::String m_controlId;
    bool m_controlIdHasBeenSet = false;

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

    Aws::Vector<ControlMappingSource> m_controlMappingSources;
    bool m_controlMappingSourcesHasBeenSet = false;
  };

} // namespace Model
} // namespace AuditManager
} // namespace Aws
