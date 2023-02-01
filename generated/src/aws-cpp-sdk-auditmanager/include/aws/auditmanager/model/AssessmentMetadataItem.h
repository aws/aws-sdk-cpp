/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/auditmanager/AuditManager_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/auditmanager/model/AssessmentStatus.h>
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
   * <p> A metadata object that's associated with an assessment in Audit Manager.
   * </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/auditmanager-2017-07-25/AssessmentMetadataItem">AWS
   * API Reference</a></p>
   */
  class AssessmentMetadataItem
  {
  public:
    AWS_AUDITMANAGER_API AssessmentMetadataItem();
    AWS_AUDITMANAGER_API AssessmentMetadataItem(Aws::Utils::Json::JsonView jsonValue);
    AWS_AUDITMANAGER_API AssessmentMetadataItem& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_AUDITMANAGER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p> The name of the assessment. </p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p> The name of the assessment. </p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p> The name of the assessment. </p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p> The name of the assessment. </p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p> The name of the assessment. </p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p> The name of the assessment. </p>
     */
    inline AssessmentMetadataItem& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p> The name of the assessment. </p>
     */
    inline AssessmentMetadataItem& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p> The name of the assessment. </p>
     */
    inline AssessmentMetadataItem& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p> The unique identifier for the assessment. </p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p> The unique identifier for the assessment. </p>
     */
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }

    /**
     * <p> The unique identifier for the assessment. </p>
     */
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * <p> The unique identifier for the assessment. </p>
     */
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }

    /**
     * <p> The unique identifier for the assessment. </p>
     */
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    /**
     * <p> The unique identifier for the assessment. </p>
     */
    inline AssessmentMetadataItem& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p> The unique identifier for the assessment. </p>
     */
    inline AssessmentMetadataItem& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p> The unique identifier for the assessment. </p>
     */
    inline AssessmentMetadataItem& WithId(const char* value) { SetId(value); return *this;}


    /**
     * <p> The name of the compliance standard that's related to the assessment, such
     * as PCI-DSS. </p>
     */
    inline const Aws::String& GetComplianceType() const{ return m_complianceType; }

    /**
     * <p> The name of the compliance standard that's related to the assessment, such
     * as PCI-DSS. </p>
     */
    inline bool ComplianceTypeHasBeenSet() const { return m_complianceTypeHasBeenSet; }

    /**
     * <p> The name of the compliance standard that's related to the assessment, such
     * as PCI-DSS. </p>
     */
    inline void SetComplianceType(const Aws::String& value) { m_complianceTypeHasBeenSet = true; m_complianceType = value; }

    /**
     * <p> The name of the compliance standard that's related to the assessment, such
     * as PCI-DSS. </p>
     */
    inline void SetComplianceType(Aws::String&& value) { m_complianceTypeHasBeenSet = true; m_complianceType = std::move(value); }

    /**
     * <p> The name of the compliance standard that's related to the assessment, such
     * as PCI-DSS. </p>
     */
    inline void SetComplianceType(const char* value) { m_complianceTypeHasBeenSet = true; m_complianceType.assign(value); }

    /**
     * <p> The name of the compliance standard that's related to the assessment, such
     * as PCI-DSS. </p>
     */
    inline AssessmentMetadataItem& WithComplianceType(const Aws::String& value) { SetComplianceType(value); return *this;}

    /**
     * <p> The name of the compliance standard that's related to the assessment, such
     * as PCI-DSS. </p>
     */
    inline AssessmentMetadataItem& WithComplianceType(Aws::String&& value) { SetComplianceType(std::move(value)); return *this;}

    /**
     * <p> The name of the compliance standard that's related to the assessment, such
     * as PCI-DSS. </p>
     */
    inline AssessmentMetadataItem& WithComplianceType(const char* value) { SetComplianceType(value); return *this;}


    /**
     * <p> The current status of the assessment. </p>
     */
    inline const AssessmentStatus& GetStatus() const{ return m_status; }

    /**
     * <p> The current status of the assessment. </p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p> The current status of the assessment. </p>
     */
    inline void SetStatus(const AssessmentStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p> The current status of the assessment. </p>
     */
    inline void SetStatus(AssessmentStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p> The current status of the assessment. </p>
     */
    inline AssessmentMetadataItem& WithStatus(const AssessmentStatus& value) { SetStatus(value); return *this;}

    /**
     * <p> The current status of the assessment. </p>
     */
    inline AssessmentMetadataItem& WithStatus(AssessmentStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p> The roles that are associated with the assessment. </p>
     */
    inline const Aws::Vector<Role>& GetRoles() const{ return m_roles; }

    /**
     * <p> The roles that are associated with the assessment. </p>
     */
    inline bool RolesHasBeenSet() const { return m_rolesHasBeenSet; }

    /**
     * <p> The roles that are associated with the assessment. </p>
     */
    inline void SetRoles(const Aws::Vector<Role>& value) { m_rolesHasBeenSet = true; m_roles = value; }

    /**
     * <p> The roles that are associated with the assessment. </p>
     */
    inline void SetRoles(Aws::Vector<Role>&& value) { m_rolesHasBeenSet = true; m_roles = std::move(value); }

    /**
     * <p> The roles that are associated with the assessment. </p>
     */
    inline AssessmentMetadataItem& WithRoles(const Aws::Vector<Role>& value) { SetRoles(value); return *this;}

    /**
     * <p> The roles that are associated with the assessment. </p>
     */
    inline AssessmentMetadataItem& WithRoles(Aws::Vector<Role>&& value) { SetRoles(std::move(value)); return *this;}

    /**
     * <p> The roles that are associated with the assessment. </p>
     */
    inline AssessmentMetadataItem& AddRoles(const Role& value) { m_rolesHasBeenSet = true; m_roles.push_back(value); return *this; }

    /**
     * <p> The roles that are associated with the assessment. </p>
     */
    inline AssessmentMetadataItem& AddRoles(Role&& value) { m_rolesHasBeenSet = true; m_roles.push_back(std::move(value)); return *this; }


    /**
     * <p> The delegations that are associated with the assessment. </p>
     */
    inline const Aws::Vector<Delegation>& GetDelegations() const{ return m_delegations; }

    /**
     * <p> The delegations that are associated with the assessment. </p>
     */
    inline bool DelegationsHasBeenSet() const { return m_delegationsHasBeenSet; }

    /**
     * <p> The delegations that are associated with the assessment. </p>
     */
    inline void SetDelegations(const Aws::Vector<Delegation>& value) { m_delegationsHasBeenSet = true; m_delegations = value; }

    /**
     * <p> The delegations that are associated with the assessment. </p>
     */
    inline void SetDelegations(Aws::Vector<Delegation>&& value) { m_delegationsHasBeenSet = true; m_delegations = std::move(value); }

    /**
     * <p> The delegations that are associated with the assessment. </p>
     */
    inline AssessmentMetadataItem& WithDelegations(const Aws::Vector<Delegation>& value) { SetDelegations(value); return *this;}

    /**
     * <p> The delegations that are associated with the assessment. </p>
     */
    inline AssessmentMetadataItem& WithDelegations(Aws::Vector<Delegation>&& value) { SetDelegations(std::move(value)); return *this;}

    /**
     * <p> The delegations that are associated with the assessment. </p>
     */
    inline AssessmentMetadataItem& AddDelegations(const Delegation& value) { m_delegationsHasBeenSet = true; m_delegations.push_back(value); return *this; }

    /**
     * <p> The delegations that are associated with the assessment. </p>
     */
    inline AssessmentMetadataItem& AddDelegations(Delegation&& value) { m_delegationsHasBeenSet = true; m_delegations.push_back(std::move(value)); return *this; }


    /**
     * <p> Specifies when the assessment was created. </p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }

    /**
     * <p> Specifies when the assessment was created. </p>
     */
    inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }

    /**
     * <p> Specifies when the assessment was created. </p>
     */
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTimeHasBeenSet = true; m_creationTime = value; }

    /**
     * <p> Specifies when the assessment was created. </p>
     */
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::move(value); }

    /**
     * <p> Specifies when the assessment was created. </p>
     */
    inline AssessmentMetadataItem& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}

    /**
     * <p> Specifies when the assessment was created. </p>
     */
    inline AssessmentMetadataItem& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}


    /**
     * <p> The time of the most recent update. </p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdated() const{ return m_lastUpdated; }

    /**
     * <p> The time of the most recent update. </p>
     */
    inline bool LastUpdatedHasBeenSet() const { return m_lastUpdatedHasBeenSet; }

    /**
     * <p> The time of the most recent update. </p>
     */
    inline void SetLastUpdated(const Aws::Utils::DateTime& value) { m_lastUpdatedHasBeenSet = true; m_lastUpdated = value; }

    /**
     * <p> The time of the most recent update. </p>
     */
    inline void SetLastUpdated(Aws::Utils::DateTime&& value) { m_lastUpdatedHasBeenSet = true; m_lastUpdated = std::move(value); }

    /**
     * <p> The time of the most recent update. </p>
     */
    inline AssessmentMetadataItem& WithLastUpdated(const Aws::Utils::DateTime& value) { SetLastUpdated(value); return *this;}

    /**
     * <p> The time of the most recent update. </p>
     */
    inline AssessmentMetadataItem& WithLastUpdated(Aws::Utils::DateTime&& value) { SetLastUpdated(std::move(value)); return *this;}

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_complianceType;
    bool m_complianceTypeHasBeenSet = false;

    AssessmentStatus m_status;
    bool m_statusHasBeenSet = false;

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
