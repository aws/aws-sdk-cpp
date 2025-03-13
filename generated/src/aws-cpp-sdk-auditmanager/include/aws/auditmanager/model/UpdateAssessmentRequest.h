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
    AWS_AUDITMANAGER_API UpdateAssessmentRequest() = default;

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
    inline const Aws::String& GetAssessmentId() const { return m_assessmentId; }
    inline bool AssessmentIdHasBeenSet() const { return m_assessmentIdHasBeenSet; }
    template<typename AssessmentIdT = Aws::String>
    void SetAssessmentId(AssessmentIdT&& value) { m_assessmentIdHasBeenSet = true; m_assessmentId = std::forward<AssessmentIdT>(value); }
    template<typename AssessmentIdT = Aws::String>
    UpdateAssessmentRequest& WithAssessmentId(AssessmentIdT&& value) { SetAssessmentId(std::forward<AssessmentIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The name of the assessment to be updated. </p>
     */
    inline const Aws::String& GetAssessmentName() const { return m_assessmentName; }
    inline bool AssessmentNameHasBeenSet() const { return m_assessmentNameHasBeenSet; }
    template<typename AssessmentNameT = Aws::String>
    void SetAssessmentName(AssessmentNameT&& value) { m_assessmentNameHasBeenSet = true; m_assessmentName = std::forward<AssessmentNameT>(value); }
    template<typename AssessmentNameT = Aws::String>
    UpdateAssessmentRequest& WithAssessmentName(AssessmentNameT&& value) { SetAssessmentName(std::forward<AssessmentNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The description of the assessment. </p>
     */
    inline const Aws::String& GetAssessmentDescription() const { return m_assessmentDescription; }
    inline bool AssessmentDescriptionHasBeenSet() const { return m_assessmentDescriptionHasBeenSet; }
    template<typename AssessmentDescriptionT = Aws::String>
    void SetAssessmentDescription(AssessmentDescriptionT&& value) { m_assessmentDescriptionHasBeenSet = true; m_assessmentDescription = std::forward<AssessmentDescriptionT>(value); }
    template<typename AssessmentDescriptionT = Aws::String>
    UpdateAssessmentRequest& WithAssessmentDescription(AssessmentDescriptionT&& value) { SetAssessmentDescription(std::forward<AssessmentDescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The scope of the assessment. </p>
     */
    inline const Scope& GetScope() const { return m_scope; }
    inline bool ScopeHasBeenSet() const { return m_scopeHasBeenSet; }
    template<typename ScopeT = Scope>
    void SetScope(ScopeT&& value) { m_scopeHasBeenSet = true; m_scope = std::forward<ScopeT>(value); }
    template<typename ScopeT = Scope>
    UpdateAssessmentRequest& WithScope(ScopeT&& value) { SetScope(std::forward<ScopeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The assessment report storage destination for the assessment that's being
     * updated. </p>
     */
    inline const AssessmentReportsDestination& GetAssessmentReportsDestination() const { return m_assessmentReportsDestination; }
    inline bool AssessmentReportsDestinationHasBeenSet() const { return m_assessmentReportsDestinationHasBeenSet; }
    template<typename AssessmentReportsDestinationT = AssessmentReportsDestination>
    void SetAssessmentReportsDestination(AssessmentReportsDestinationT&& value) { m_assessmentReportsDestinationHasBeenSet = true; m_assessmentReportsDestination = std::forward<AssessmentReportsDestinationT>(value); }
    template<typename AssessmentReportsDestinationT = AssessmentReportsDestination>
    UpdateAssessmentRequest& WithAssessmentReportsDestination(AssessmentReportsDestinationT&& value) { SetAssessmentReportsDestination(std::forward<AssessmentReportsDestinationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The list of roles for the assessment. </p>
     */
    inline const Aws::Vector<Role>& GetRoles() const { return m_roles; }
    inline bool RolesHasBeenSet() const { return m_rolesHasBeenSet; }
    template<typename RolesT = Aws::Vector<Role>>
    void SetRoles(RolesT&& value) { m_rolesHasBeenSet = true; m_roles = std::forward<RolesT>(value); }
    template<typename RolesT = Aws::Vector<Role>>
    UpdateAssessmentRequest& WithRoles(RolesT&& value) { SetRoles(std::forward<RolesT>(value)); return *this;}
    template<typename RolesT = Role>
    UpdateAssessmentRequest& AddRoles(RolesT&& value) { m_rolesHasBeenSet = true; m_roles.emplace_back(std::forward<RolesT>(value)); return *this; }
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
