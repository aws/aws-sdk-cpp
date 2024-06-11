/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/auditmanager/AuditManager_EXPORTS.h>
#include <aws/auditmanager/AuditManagerRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/auditmanager/model/Scope.h>
#include <aws/auditmanager/model/AssessmentReportsDestination.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/auditmanager/model/Role.h>
#include <utility>

namespace Aws
{
namespace AuditManager
{
namespace Model
{

  /**
   */
  class UpdateAssessmentRequest : public AuditManagerRequest
  {
  public:
    AWS_AUDITMANAGER_API UpdateAssessmentRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateAssessment"; }

    AWS_AUDITMANAGER_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p> The unique identifier for the assessment. </p>
     */
    inline const Aws::String& GetAssessmentId() const{ return m_assessmentId; }
    inline bool AssessmentIdHasBeenSet() const { return m_assessmentIdHasBeenSet; }
    inline void SetAssessmentId(const Aws::String& value) { m_assessmentIdHasBeenSet = true; m_assessmentId = value; }
    inline void SetAssessmentId(Aws::String&& value) { m_assessmentIdHasBeenSet = true; m_assessmentId = std::move(value); }
    inline void SetAssessmentId(const char* value) { m_assessmentIdHasBeenSet = true; m_assessmentId.assign(value); }
    inline UpdateAssessmentRequest& WithAssessmentId(const Aws::String& value) { SetAssessmentId(value); return *this;}
    inline UpdateAssessmentRequest& WithAssessmentId(Aws::String&& value) { SetAssessmentId(std::move(value)); return *this;}
    inline UpdateAssessmentRequest& WithAssessmentId(const char* value) { SetAssessmentId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The name of the assessment to be updated. </p>
     */
    inline const Aws::String& GetAssessmentName() const{ return m_assessmentName; }
    inline bool AssessmentNameHasBeenSet() const { return m_assessmentNameHasBeenSet; }
    inline void SetAssessmentName(const Aws::String& value) { m_assessmentNameHasBeenSet = true; m_assessmentName = value; }
    inline void SetAssessmentName(Aws::String&& value) { m_assessmentNameHasBeenSet = true; m_assessmentName = std::move(value); }
    inline void SetAssessmentName(const char* value) { m_assessmentNameHasBeenSet = true; m_assessmentName.assign(value); }
    inline UpdateAssessmentRequest& WithAssessmentName(const Aws::String& value) { SetAssessmentName(value); return *this;}
    inline UpdateAssessmentRequest& WithAssessmentName(Aws::String&& value) { SetAssessmentName(std::move(value)); return *this;}
    inline UpdateAssessmentRequest& WithAssessmentName(const char* value) { SetAssessmentName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The description of the assessment. </p>
     */
    inline const Aws::String& GetAssessmentDescription() const{ return m_assessmentDescription; }
    inline bool AssessmentDescriptionHasBeenSet() const { return m_assessmentDescriptionHasBeenSet; }
    inline void SetAssessmentDescription(const Aws::String& value) { m_assessmentDescriptionHasBeenSet = true; m_assessmentDescription = value; }
    inline void SetAssessmentDescription(Aws::String&& value) { m_assessmentDescriptionHasBeenSet = true; m_assessmentDescription = std::move(value); }
    inline void SetAssessmentDescription(const char* value) { m_assessmentDescriptionHasBeenSet = true; m_assessmentDescription.assign(value); }
    inline UpdateAssessmentRequest& WithAssessmentDescription(const Aws::String& value) { SetAssessmentDescription(value); return *this;}
    inline UpdateAssessmentRequest& WithAssessmentDescription(Aws::String&& value) { SetAssessmentDescription(std::move(value)); return *this;}
    inline UpdateAssessmentRequest& WithAssessmentDescription(const char* value) { SetAssessmentDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The scope of the assessment. </p>
     */
    inline const Scope& GetScope() const{ return m_scope; }
    inline bool ScopeHasBeenSet() const { return m_scopeHasBeenSet; }
    inline void SetScope(const Scope& value) { m_scopeHasBeenSet = true; m_scope = value; }
    inline void SetScope(Scope&& value) { m_scopeHasBeenSet = true; m_scope = std::move(value); }
    inline UpdateAssessmentRequest& WithScope(const Scope& value) { SetScope(value); return *this;}
    inline UpdateAssessmentRequest& WithScope(Scope&& value) { SetScope(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The assessment report storage destination for the assessment that's being
     * updated. </p>
     */
    inline const AssessmentReportsDestination& GetAssessmentReportsDestination() const{ return m_assessmentReportsDestination; }
    inline bool AssessmentReportsDestinationHasBeenSet() const { return m_assessmentReportsDestinationHasBeenSet; }
    inline void SetAssessmentReportsDestination(const AssessmentReportsDestination& value) { m_assessmentReportsDestinationHasBeenSet = true; m_assessmentReportsDestination = value; }
    inline void SetAssessmentReportsDestination(AssessmentReportsDestination&& value) { m_assessmentReportsDestinationHasBeenSet = true; m_assessmentReportsDestination = std::move(value); }
    inline UpdateAssessmentRequest& WithAssessmentReportsDestination(const AssessmentReportsDestination& value) { SetAssessmentReportsDestination(value); return *this;}
    inline UpdateAssessmentRequest& WithAssessmentReportsDestination(AssessmentReportsDestination&& value) { SetAssessmentReportsDestination(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The list of roles for the assessment. </p>
     */
    inline const Aws::Vector<Role>& GetRoles() const{ return m_roles; }
    inline bool RolesHasBeenSet() const { return m_rolesHasBeenSet; }
    inline void SetRoles(const Aws::Vector<Role>& value) { m_rolesHasBeenSet = true; m_roles = value; }
    inline void SetRoles(Aws::Vector<Role>&& value) { m_rolesHasBeenSet = true; m_roles = std::move(value); }
    inline UpdateAssessmentRequest& WithRoles(const Aws::Vector<Role>& value) { SetRoles(value); return *this;}
    inline UpdateAssessmentRequest& WithRoles(Aws::Vector<Role>&& value) { SetRoles(std::move(value)); return *this;}
    inline UpdateAssessmentRequest& AddRoles(const Role& value) { m_rolesHasBeenSet = true; m_roles.push_back(value); return *this; }
    inline UpdateAssessmentRequest& AddRoles(Role&& value) { m_rolesHasBeenSet = true; m_roles.push_back(std::move(value)); return *this; }
    ///@}
  private:

    Aws::String m_assessmentId;
    bool m_assessmentIdHasBeenSet = false;

    Aws::String m_assessmentName;
    bool m_assessmentNameHasBeenSet = false;

    Aws::String m_assessmentDescription;
    bool m_assessmentDescriptionHasBeenSet = false;

    Scope m_scope;
    bool m_scopeHasBeenSet = false;

    AssessmentReportsDestination m_assessmentReportsDestination;
    bool m_assessmentReportsDestinationHasBeenSet = false;

    Aws::Vector<Role> m_roles;
    bool m_rolesHasBeenSet = false;
  };

} // namespace Model
} // namespace AuditManager
} // namespace Aws
