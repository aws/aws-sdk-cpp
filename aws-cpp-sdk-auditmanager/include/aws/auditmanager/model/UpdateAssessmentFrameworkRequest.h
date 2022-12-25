/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/auditmanager/AuditManager_EXPORTS.h>
#include <aws/auditmanager/AuditManagerRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/auditmanager/model/UpdateAssessmentFrameworkControlSet.h>
#include <utility>

namespace Aws
{
namespace AuditManager
{
namespace Model
{

  /**
   */
  class UpdateAssessmentFrameworkRequest : public AuditManagerRequest
  {
  public:
    AWS_AUDITMANAGER_API UpdateAssessmentFrameworkRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateAssessmentFramework"; }

    AWS_AUDITMANAGER_API Aws::String SerializePayload() const override;


    /**
     * <p> The unique identifier for the framework. </p>
     */
    inline const Aws::String& GetFrameworkId() const{ return m_frameworkId; }

    /**
     * <p> The unique identifier for the framework. </p>
     */
    inline bool FrameworkIdHasBeenSet() const { return m_frameworkIdHasBeenSet; }

    /**
     * <p> The unique identifier for the framework. </p>
     */
    inline void SetFrameworkId(const Aws::String& value) { m_frameworkIdHasBeenSet = true; m_frameworkId = value; }

    /**
     * <p> The unique identifier for the framework. </p>
     */
    inline void SetFrameworkId(Aws::String&& value) { m_frameworkIdHasBeenSet = true; m_frameworkId = std::move(value); }

    /**
     * <p> The unique identifier for the framework. </p>
     */
    inline void SetFrameworkId(const char* value) { m_frameworkIdHasBeenSet = true; m_frameworkId.assign(value); }

    /**
     * <p> The unique identifier for the framework. </p>
     */
    inline UpdateAssessmentFrameworkRequest& WithFrameworkId(const Aws::String& value) { SetFrameworkId(value); return *this;}

    /**
     * <p> The unique identifier for the framework. </p>
     */
    inline UpdateAssessmentFrameworkRequest& WithFrameworkId(Aws::String&& value) { SetFrameworkId(std::move(value)); return *this;}

    /**
     * <p> The unique identifier for the framework. </p>
     */
    inline UpdateAssessmentFrameworkRequest& WithFrameworkId(const char* value) { SetFrameworkId(value); return *this;}


    /**
     * <p> The name of the framework to be updated. </p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p> The name of the framework to be updated. </p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p> The name of the framework to be updated. </p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p> The name of the framework to be updated. </p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p> The name of the framework to be updated. </p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p> The name of the framework to be updated. </p>
     */
    inline UpdateAssessmentFrameworkRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p> The name of the framework to be updated. </p>
     */
    inline UpdateAssessmentFrameworkRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p> The name of the framework to be updated. </p>
     */
    inline UpdateAssessmentFrameworkRequest& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p> The description of the updated framework. </p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p> The description of the updated framework. </p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p> The description of the updated framework. </p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p> The description of the updated framework. </p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p> The description of the updated framework. </p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p> The description of the updated framework. </p>
     */
    inline UpdateAssessmentFrameworkRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p> The description of the updated framework. </p>
     */
    inline UpdateAssessmentFrameworkRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p> The description of the updated framework. </p>
     */
    inline UpdateAssessmentFrameworkRequest& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p> The compliance type that the new custom framework supports, such as CIS or
     * HIPAA. </p>
     */
    inline const Aws::String& GetComplianceType() const{ return m_complianceType; }

    /**
     * <p> The compliance type that the new custom framework supports, such as CIS or
     * HIPAA. </p>
     */
    inline bool ComplianceTypeHasBeenSet() const { return m_complianceTypeHasBeenSet; }

    /**
     * <p> The compliance type that the new custom framework supports, such as CIS or
     * HIPAA. </p>
     */
    inline void SetComplianceType(const Aws::String& value) { m_complianceTypeHasBeenSet = true; m_complianceType = value; }

    /**
     * <p> The compliance type that the new custom framework supports, such as CIS or
     * HIPAA. </p>
     */
    inline void SetComplianceType(Aws::String&& value) { m_complianceTypeHasBeenSet = true; m_complianceType = std::move(value); }

    /**
     * <p> The compliance type that the new custom framework supports, such as CIS or
     * HIPAA. </p>
     */
    inline void SetComplianceType(const char* value) { m_complianceTypeHasBeenSet = true; m_complianceType.assign(value); }

    /**
     * <p> The compliance type that the new custom framework supports, such as CIS or
     * HIPAA. </p>
     */
    inline UpdateAssessmentFrameworkRequest& WithComplianceType(const Aws::String& value) { SetComplianceType(value); return *this;}

    /**
     * <p> The compliance type that the new custom framework supports, such as CIS or
     * HIPAA. </p>
     */
    inline UpdateAssessmentFrameworkRequest& WithComplianceType(Aws::String&& value) { SetComplianceType(std::move(value)); return *this;}

    /**
     * <p> The compliance type that the new custom framework supports, such as CIS or
     * HIPAA. </p>
     */
    inline UpdateAssessmentFrameworkRequest& WithComplianceType(const char* value) { SetComplianceType(value); return *this;}


    /**
     * <p> The control sets that are associated with the framework. </p>
     */
    inline const Aws::Vector<UpdateAssessmentFrameworkControlSet>& GetControlSets() const{ return m_controlSets; }

    /**
     * <p> The control sets that are associated with the framework. </p>
     */
    inline bool ControlSetsHasBeenSet() const { return m_controlSetsHasBeenSet; }

    /**
     * <p> The control sets that are associated with the framework. </p>
     */
    inline void SetControlSets(const Aws::Vector<UpdateAssessmentFrameworkControlSet>& value) { m_controlSetsHasBeenSet = true; m_controlSets = value; }

    /**
     * <p> The control sets that are associated with the framework. </p>
     */
    inline void SetControlSets(Aws::Vector<UpdateAssessmentFrameworkControlSet>&& value) { m_controlSetsHasBeenSet = true; m_controlSets = std::move(value); }

    /**
     * <p> The control sets that are associated with the framework. </p>
     */
    inline UpdateAssessmentFrameworkRequest& WithControlSets(const Aws::Vector<UpdateAssessmentFrameworkControlSet>& value) { SetControlSets(value); return *this;}

    /**
     * <p> The control sets that are associated with the framework. </p>
     */
    inline UpdateAssessmentFrameworkRequest& WithControlSets(Aws::Vector<UpdateAssessmentFrameworkControlSet>&& value) { SetControlSets(std::move(value)); return *this;}

    /**
     * <p> The control sets that are associated with the framework. </p>
     */
    inline UpdateAssessmentFrameworkRequest& AddControlSets(const UpdateAssessmentFrameworkControlSet& value) { m_controlSetsHasBeenSet = true; m_controlSets.push_back(value); return *this; }

    /**
     * <p> The control sets that are associated with the framework. </p>
     */
    inline UpdateAssessmentFrameworkRequest& AddControlSets(UpdateAssessmentFrameworkControlSet&& value) { m_controlSetsHasBeenSet = true; m_controlSets.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_frameworkId;
    bool m_frameworkIdHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_complianceType;
    bool m_complianceTypeHasBeenSet = false;

    Aws::Vector<UpdateAssessmentFrameworkControlSet> m_controlSets;
    bool m_controlSetsHasBeenSet = false;
  };

} // namespace Model
} // namespace AuditManager
} // namespace Aws
