/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/auditmanager/AuditManager_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/auditmanager/model/ControlSetStatus.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/auditmanager/model/Role.h>
#include <aws/auditmanager/model/AssessmentControl.h>
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
   * <p> Represents a set of controls in an Audit Manager assessment. </p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/auditmanager-2017-07-25/AssessmentControlSet">AWS
   * API Reference</a></p>
   */
  class AssessmentControlSet
  {
  public:
    AWS_AUDITMANAGER_API AssessmentControlSet();
    AWS_AUDITMANAGER_API AssessmentControlSet(Aws::Utils::Json::JsonView jsonValue);
    AWS_AUDITMANAGER_API AssessmentControlSet& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_AUDITMANAGER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p> The identifier of the control set in the assessment. This is the control set
     * name in a plain string format. </p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p> The identifier of the control set in the assessment. This is the control set
     * name in a plain string format. </p>
     */
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }

    /**
     * <p> The identifier of the control set in the assessment. This is the control set
     * name in a plain string format. </p>
     */
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * <p> The identifier of the control set in the assessment. This is the control set
     * name in a plain string format. </p>
     */
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }

    /**
     * <p> The identifier of the control set in the assessment. This is the control set
     * name in a plain string format. </p>
     */
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    /**
     * <p> The identifier of the control set in the assessment. This is the control set
     * name in a plain string format. </p>
     */
    inline AssessmentControlSet& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p> The identifier of the control set in the assessment. This is the control set
     * name in a plain string format. </p>
     */
    inline AssessmentControlSet& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p> The identifier of the control set in the assessment. This is the control set
     * name in a plain string format. </p>
     */
    inline AssessmentControlSet& WithId(const char* value) { SetId(value); return *this;}


    /**
     * <p> The description for the control set. </p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p> The description for the control set. </p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p> The description for the control set. </p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p> The description for the control set. </p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p> The description for the control set. </p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p> The description for the control set. </p>
     */
    inline AssessmentControlSet& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p> The description for the control set. </p>
     */
    inline AssessmentControlSet& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p> The description for the control set. </p>
     */
    inline AssessmentControlSet& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p> Specifies the current status of the control set. </p>
     */
    inline const ControlSetStatus& GetStatus() const{ return m_status; }

    /**
     * <p> Specifies the current status of the control set. </p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p> Specifies the current status of the control set. </p>
     */
    inline void SetStatus(const ControlSetStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p> Specifies the current status of the control set. </p>
     */
    inline void SetStatus(ControlSetStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p> Specifies the current status of the control set. </p>
     */
    inline AssessmentControlSet& WithStatus(const ControlSetStatus& value) { SetStatus(value); return *this;}

    /**
     * <p> Specifies the current status of the control set. </p>
     */
    inline AssessmentControlSet& WithStatus(ControlSetStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p> The roles that are associated with the control set. </p>
     */
    inline const Aws::Vector<Role>& GetRoles() const{ return m_roles; }

    /**
     * <p> The roles that are associated with the control set. </p>
     */
    inline bool RolesHasBeenSet() const { return m_rolesHasBeenSet; }

    /**
     * <p> The roles that are associated with the control set. </p>
     */
    inline void SetRoles(const Aws::Vector<Role>& value) { m_rolesHasBeenSet = true; m_roles = value; }

    /**
     * <p> The roles that are associated with the control set. </p>
     */
    inline void SetRoles(Aws::Vector<Role>&& value) { m_rolesHasBeenSet = true; m_roles = std::move(value); }

    /**
     * <p> The roles that are associated with the control set. </p>
     */
    inline AssessmentControlSet& WithRoles(const Aws::Vector<Role>& value) { SetRoles(value); return *this;}

    /**
     * <p> The roles that are associated with the control set. </p>
     */
    inline AssessmentControlSet& WithRoles(Aws::Vector<Role>&& value) { SetRoles(std::move(value)); return *this;}

    /**
     * <p> The roles that are associated with the control set. </p>
     */
    inline AssessmentControlSet& AddRoles(const Role& value) { m_rolesHasBeenSet = true; m_roles.push_back(value); return *this; }

    /**
     * <p> The roles that are associated with the control set. </p>
     */
    inline AssessmentControlSet& AddRoles(Role&& value) { m_rolesHasBeenSet = true; m_roles.push_back(std::move(value)); return *this; }


    /**
     * <p> The list of controls that's contained with the control set. </p>
     */
    inline const Aws::Vector<AssessmentControl>& GetControls() const{ return m_controls; }

    /**
     * <p> The list of controls that's contained with the control set. </p>
     */
    inline bool ControlsHasBeenSet() const { return m_controlsHasBeenSet; }

    /**
     * <p> The list of controls that's contained with the control set. </p>
     */
    inline void SetControls(const Aws::Vector<AssessmentControl>& value) { m_controlsHasBeenSet = true; m_controls = value; }

    /**
     * <p> The list of controls that's contained with the control set. </p>
     */
    inline void SetControls(Aws::Vector<AssessmentControl>&& value) { m_controlsHasBeenSet = true; m_controls = std::move(value); }

    /**
     * <p> The list of controls that's contained with the control set. </p>
     */
    inline AssessmentControlSet& WithControls(const Aws::Vector<AssessmentControl>& value) { SetControls(value); return *this;}

    /**
     * <p> The list of controls that's contained with the control set. </p>
     */
    inline AssessmentControlSet& WithControls(Aws::Vector<AssessmentControl>&& value) { SetControls(std::move(value)); return *this;}

    /**
     * <p> The list of controls that's contained with the control set. </p>
     */
    inline AssessmentControlSet& AddControls(const AssessmentControl& value) { m_controlsHasBeenSet = true; m_controls.push_back(value); return *this; }

    /**
     * <p> The list of controls that's contained with the control set. </p>
     */
    inline AssessmentControlSet& AddControls(AssessmentControl&& value) { m_controlsHasBeenSet = true; m_controls.push_back(std::move(value)); return *this; }


    /**
     * <p> The delegations that are associated with the control set. </p>
     */
    inline const Aws::Vector<Delegation>& GetDelegations() const{ return m_delegations; }

    /**
     * <p> The delegations that are associated with the control set. </p>
     */
    inline bool DelegationsHasBeenSet() const { return m_delegationsHasBeenSet; }

    /**
     * <p> The delegations that are associated with the control set. </p>
     */
    inline void SetDelegations(const Aws::Vector<Delegation>& value) { m_delegationsHasBeenSet = true; m_delegations = value; }

    /**
     * <p> The delegations that are associated with the control set. </p>
     */
    inline void SetDelegations(Aws::Vector<Delegation>&& value) { m_delegationsHasBeenSet = true; m_delegations = std::move(value); }

    /**
     * <p> The delegations that are associated with the control set. </p>
     */
    inline AssessmentControlSet& WithDelegations(const Aws::Vector<Delegation>& value) { SetDelegations(value); return *this;}

    /**
     * <p> The delegations that are associated with the control set. </p>
     */
    inline AssessmentControlSet& WithDelegations(Aws::Vector<Delegation>&& value) { SetDelegations(std::move(value)); return *this;}

    /**
     * <p> The delegations that are associated with the control set. </p>
     */
    inline AssessmentControlSet& AddDelegations(const Delegation& value) { m_delegationsHasBeenSet = true; m_delegations.push_back(value); return *this; }

    /**
     * <p> The delegations that are associated with the control set. </p>
     */
    inline AssessmentControlSet& AddDelegations(Delegation&& value) { m_delegationsHasBeenSet = true; m_delegations.push_back(std::move(value)); return *this; }


    /**
     * <p> The total number of evidence objects that are retrieved automatically for
     * the control set. </p>
     */
    inline int GetSystemEvidenceCount() const{ return m_systemEvidenceCount; }

    /**
     * <p> The total number of evidence objects that are retrieved automatically for
     * the control set. </p>
     */
    inline bool SystemEvidenceCountHasBeenSet() const { return m_systemEvidenceCountHasBeenSet; }

    /**
     * <p> The total number of evidence objects that are retrieved automatically for
     * the control set. </p>
     */
    inline void SetSystemEvidenceCount(int value) { m_systemEvidenceCountHasBeenSet = true; m_systemEvidenceCount = value; }

    /**
     * <p> The total number of evidence objects that are retrieved automatically for
     * the control set. </p>
     */
    inline AssessmentControlSet& WithSystemEvidenceCount(int value) { SetSystemEvidenceCount(value); return *this;}


    /**
     * <p> The total number of evidence objects that are uploaded manually to the
     * control set. </p>
     */
    inline int GetManualEvidenceCount() const{ return m_manualEvidenceCount; }

    /**
     * <p> The total number of evidence objects that are uploaded manually to the
     * control set. </p>
     */
    inline bool ManualEvidenceCountHasBeenSet() const { return m_manualEvidenceCountHasBeenSet; }

    /**
     * <p> The total number of evidence objects that are uploaded manually to the
     * control set. </p>
     */
    inline void SetManualEvidenceCount(int value) { m_manualEvidenceCountHasBeenSet = true; m_manualEvidenceCount = value; }

    /**
     * <p> The total number of evidence objects that are uploaded manually to the
     * control set. </p>
     */
    inline AssessmentControlSet& WithManualEvidenceCount(int value) { SetManualEvidenceCount(value); return *this;}

  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    ControlSetStatus m_status;
    bool m_statusHasBeenSet = false;

    Aws::Vector<Role> m_roles;
    bool m_rolesHasBeenSet = false;

    Aws::Vector<AssessmentControl> m_controls;
    bool m_controlsHasBeenSet = false;

    Aws::Vector<Delegation> m_delegations;
    bool m_delegationsHasBeenSet = false;

    int m_systemEvidenceCount;
    bool m_systemEvidenceCountHasBeenSet = false;

    int m_manualEvidenceCount;
    bool m_manualEvidenceCountHasBeenSet = false;
  };

} // namespace Model
} // namespace AuditManager
} // namespace Aws
