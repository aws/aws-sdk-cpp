/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/auditmanager/AuditManager_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/auditmanager/model/AssessmentStatus.h>
#include <aws/auditmanager/model/AssessmentReportsDestination.h>
#include <aws/auditmanager/model/Scope.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/DateTime.h>
#include <aws/auditmanager/model/Role.h>
#include <aws/auditmanager/model/Delegation.h>
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
   * <p> The metadata that's associated with the specified assessment. </p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/auditmanager-2017-07-25/AssessmentMetadata">AWS
   * API Reference</a></p>
   */
  class AssessmentMetadata
  {
  public:
    AWS_AUDITMANAGER_API AssessmentMetadata();
    AWS_AUDITMANAGER_API AssessmentMetadata(Aws::Utils::Json::JsonView jsonValue);
    AWS_AUDITMANAGER_API AssessmentMetadata& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_AUDITMANAGER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> The name of the assessment. </p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline AssessmentMetadata& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline AssessmentMetadata& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline AssessmentMetadata& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The unique identifier for the assessment. </p>
     */
    inline const Aws::String& GetId() const{ return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }
    inline AssessmentMetadata& WithId(const Aws::String& value) { SetId(value); return *this;}
    inline AssessmentMetadata& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}
    inline AssessmentMetadata& WithId(const char* value) { SetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The description of the assessment. </p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline AssessmentMetadata& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline AssessmentMetadata& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline AssessmentMetadata& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The name of the compliance standard that's related to the assessment, such
     * as PCI-DSS. </p>
     */
    inline const Aws::String& GetComplianceType() const{ return m_complianceType; }
    inline bool ComplianceTypeHasBeenSet() const { return m_complianceTypeHasBeenSet; }
    inline void SetComplianceType(const Aws::String& value) { m_complianceTypeHasBeenSet = true; m_complianceType = value; }
    inline void SetComplianceType(Aws::String&& value) { m_complianceTypeHasBeenSet = true; m_complianceType = std::move(value); }
    inline void SetComplianceType(const char* value) { m_complianceTypeHasBeenSet = true; m_complianceType.assign(value); }
    inline AssessmentMetadata& WithComplianceType(const Aws::String& value) { SetComplianceType(value); return *this;}
    inline AssessmentMetadata& WithComplianceType(Aws::String&& value) { SetComplianceType(std::move(value)); return *this;}
    inline AssessmentMetadata& WithComplianceType(const char* value) { SetComplianceType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The overall status of the assessment. </p>
     */
    inline const AssessmentStatus& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const AssessmentStatus& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(AssessmentStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline AssessmentMetadata& WithStatus(const AssessmentStatus& value) { SetStatus(value); return *this;}
    inline AssessmentMetadata& WithStatus(AssessmentStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The destination that evidence reports are stored in for the assessment. </p>
     */
    inline const AssessmentReportsDestination& GetAssessmentReportsDestination() const{ return m_assessmentReportsDestination; }
    inline bool AssessmentReportsDestinationHasBeenSet() const { return m_assessmentReportsDestinationHasBeenSet; }
    inline void SetAssessmentReportsDestination(const AssessmentReportsDestination& value) { m_assessmentReportsDestinationHasBeenSet = true; m_assessmentReportsDestination = value; }
    inline void SetAssessmentReportsDestination(AssessmentReportsDestination&& value) { m_assessmentReportsDestinationHasBeenSet = true; m_assessmentReportsDestination = std::move(value); }
    inline AssessmentMetadata& WithAssessmentReportsDestination(const AssessmentReportsDestination& value) { SetAssessmentReportsDestination(value); return *this;}
    inline AssessmentMetadata& WithAssessmentReportsDestination(AssessmentReportsDestination&& value) { SetAssessmentReportsDestination(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The wrapper of Amazon Web Services accounts and services that are in scope
     * for the assessment. </p>
     */
    inline const Scope& GetScope() const{ return m_scope; }
    inline bool ScopeHasBeenSet() const { return m_scopeHasBeenSet; }
    inline void SetScope(const Scope& value) { m_scopeHasBeenSet = true; m_scope = value; }
    inline void SetScope(Scope&& value) { m_scopeHasBeenSet = true; m_scope = std::move(value); }
    inline AssessmentMetadata& WithScope(const Scope& value) { SetScope(value); return *this;}
    inline AssessmentMetadata& WithScope(Scope&& value) { SetScope(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The roles that are associated with the assessment. </p>
     */
    inline const Aws::Vector<Role>& GetRoles() const{ return m_roles; }
    inline bool RolesHasBeenSet() const { return m_rolesHasBeenSet; }
    inline void SetRoles(const Aws::Vector<Role>& value) { m_rolesHasBeenSet = true; m_roles = value; }
    inline void SetRoles(Aws::Vector<Role>&& value) { m_rolesHasBeenSet = true; m_roles = std::move(value); }
    inline AssessmentMetadata& WithRoles(const Aws::Vector<Role>& value) { SetRoles(value); return *this;}
    inline AssessmentMetadata& WithRoles(Aws::Vector<Role>&& value) { SetRoles(std::move(value)); return *this;}
    inline AssessmentMetadata& AddRoles(const Role& value) { m_rolesHasBeenSet = true; m_roles.push_back(value); return *this; }
    inline AssessmentMetadata& AddRoles(Role&& value) { m_rolesHasBeenSet = true; m_roles.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> The delegations that are associated with the assessment. </p>
     */
    inline const Aws::Vector<Delegation>& GetDelegations() const{ return m_delegations; }
    inline bool DelegationsHasBeenSet() const { return m_delegationsHasBeenSet; }
    inline void SetDelegations(const Aws::Vector<Delegation>& value) { m_delegationsHasBeenSet = true; m_delegations = value; }
    inline void SetDelegations(Aws::Vector<Delegation>&& value) { m_delegationsHasBeenSet = true; m_delegations = std::move(value); }
    inline AssessmentMetadata& WithDelegations(const Aws::Vector<Delegation>& value) { SetDelegations(value); return *this;}
    inline AssessmentMetadata& WithDelegations(Aws::Vector<Delegation>&& value) { SetDelegations(std::move(value)); return *this;}
    inline AssessmentMetadata& AddDelegations(const Delegation& value) { m_delegationsHasBeenSet = true; m_delegations.push_back(value); return *this; }
    inline AssessmentMetadata& AddDelegations(Delegation&& value) { m_delegationsHasBeenSet = true; m_delegations.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> Specifies when the assessment was created. </p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }
    inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTimeHasBeenSet = true; m_creationTime = value; }
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::move(value); }
    inline AssessmentMetadata& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}
    inline AssessmentMetadata& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The time of the most recent update. </p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdated() const{ return m_lastUpdated; }
    inline bool LastUpdatedHasBeenSet() const { return m_lastUpdatedHasBeenSet; }
    inline void SetLastUpdated(const Aws::Utils::DateTime& value) { m_lastUpdatedHasBeenSet = true; m_lastUpdated = value; }
    inline void SetLastUpdated(Aws::Utils::DateTime&& value) { m_lastUpdatedHasBeenSet = true; m_lastUpdated = std::move(value); }
    inline AssessmentMetadata& WithLastUpdated(const Aws::Utils::DateTime& value) { SetLastUpdated(value); return *this;}
    inline AssessmentMetadata& WithLastUpdated(Aws::Utils::DateTime&& value) { SetLastUpdated(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_complianceType;
    bool m_complianceTypeHasBeenSet = false;

    AssessmentStatus m_status;
    bool m_statusHasBeenSet = false;

    AssessmentReportsDestination m_assessmentReportsDestination;
    bool m_assessmentReportsDestinationHasBeenSet = false;

    Scope m_scope;
    bool m_scopeHasBeenSet = false;

    Aws::Vector<Role> m_roles;
    bool m_rolesHasBeenSet = false;

    Aws::Vector<Delegation> m_delegations;
    bool m_delegationsHasBeenSet = false;

    Aws::Utils::DateTime m_creationTime;
    bool m_creationTimeHasBeenSet = false;

    Aws::Utils::DateTime m_lastUpdated;
    bool m_lastUpdatedHasBeenSet = false;
  };

} // namespace Model
} // namespace AuditManager
} // namespace Aws
