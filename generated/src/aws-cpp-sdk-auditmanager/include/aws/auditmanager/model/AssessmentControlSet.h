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
    AWS_AUDITMANAGER_API AssessmentControlSet() = default;
    AWS_AUDITMANAGER_API AssessmentControlSet(Aws::Utils::Json::JsonView jsonValue);
    AWS_AUDITMANAGER_API AssessmentControlSet& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_AUDITMANAGER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> The identifier of the control set in the assessment. This is the control set
     * name in a plain string format. </p>
     */
    inline const Aws::String& GetId() const { return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    template<typename IdT = Aws::String>
    void SetId(IdT&& value) { m_idHasBeenSet = true; m_id = std::forward<IdT>(value); }
    template<typename IdT = Aws::String>
    AssessmentControlSet& WithId(IdT&& value) { SetId(std::forward<IdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The description for the control set. </p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    AssessmentControlSet& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The current status of the control set. </p>
     */
    inline ControlSetStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(ControlSetStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline AssessmentControlSet& WithStatus(ControlSetStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The roles that are associated with the control set. </p>
     */
    inline const Aws::Vector<Role>& GetRoles() const { return m_roles; }
    inline bool RolesHasBeenSet() const { return m_rolesHasBeenSet; }
    template<typename RolesT = Aws::Vector<Role>>
    void SetRoles(RolesT&& value) { m_rolesHasBeenSet = true; m_roles = std::forward<RolesT>(value); }
    template<typename RolesT = Aws::Vector<Role>>
    AssessmentControlSet& WithRoles(RolesT&& value) { SetRoles(std::forward<RolesT>(value)); return *this;}
    template<typename RolesT = Role>
    AssessmentControlSet& AddRoles(RolesT&& value) { m_rolesHasBeenSet = true; m_roles.emplace_back(std::forward<RolesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> The list of controls that's contained with the control set. </p>
     */
    inline const Aws::Vector<AssessmentControl>& GetControls() const { return m_controls; }
    inline bool ControlsHasBeenSet() const { return m_controlsHasBeenSet; }
    template<typename ControlsT = Aws::Vector<AssessmentControl>>
    void SetControls(ControlsT&& value) { m_controlsHasBeenSet = true; m_controls = std::forward<ControlsT>(value); }
    template<typename ControlsT = Aws::Vector<AssessmentControl>>
    AssessmentControlSet& WithControls(ControlsT&& value) { SetControls(std::forward<ControlsT>(value)); return *this;}
    template<typename ControlsT = AssessmentControl>
    AssessmentControlSet& AddControls(ControlsT&& value) { m_controlsHasBeenSet = true; m_controls.emplace_back(std::forward<ControlsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> The delegations that are associated with the control set. </p>
     */
    inline const Aws::Vector<Delegation>& GetDelegations() const { return m_delegations; }
    inline bool DelegationsHasBeenSet() const { return m_delegationsHasBeenSet; }
    template<typename DelegationsT = Aws::Vector<Delegation>>
    void SetDelegations(DelegationsT&& value) { m_delegationsHasBeenSet = true; m_delegations = std::forward<DelegationsT>(value); }
    template<typename DelegationsT = Aws::Vector<Delegation>>
    AssessmentControlSet& WithDelegations(DelegationsT&& value) { SetDelegations(std::forward<DelegationsT>(value)); return *this;}
    template<typename DelegationsT = Delegation>
    AssessmentControlSet& AddDelegations(DelegationsT&& value) { m_delegationsHasBeenSet = true; m_delegations.emplace_back(std::forward<DelegationsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> The total number of evidence objects that are retrieved automatically for
     * the control set. </p>
     */
    inline int GetSystemEvidenceCount() const { return m_systemEvidenceCount; }
    inline bool SystemEvidenceCountHasBeenSet() const { return m_systemEvidenceCountHasBeenSet; }
    inline void SetSystemEvidenceCount(int value) { m_systemEvidenceCountHasBeenSet = true; m_systemEvidenceCount = value; }
    inline AssessmentControlSet& WithSystemEvidenceCount(int value) { SetSystemEvidenceCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The total number of evidence objects that are uploaded manually to the
     * control set. </p>
     */
    inline int GetManualEvidenceCount() const { return m_manualEvidenceCount; }
    inline bool ManualEvidenceCountHasBeenSet() const { return m_manualEvidenceCountHasBeenSet; }
    inline void SetManualEvidenceCount(int value) { m_manualEvidenceCountHasBeenSet = true; m_manualEvidenceCount = value; }
    inline AssessmentControlSet& WithManualEvidenceCount(int value) { SetManualEvidenceCount(value); return *this;}
    ///@}
  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    ControlSetStatus m_status{ControlSetStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    Aws::Vector<Role> m_roles;
    bool m_rolesHasBeenSet = false;

    Aws::Vector<AssessmentControl> m_controls;
    bool m_controlsHasBeenSet = false;

    Aws::Vector<Delegation> m_delegations;
    bool m_delegationsHasBeenSet = false;

    int m_systemEvidenceCount{0};
    bool m_systemEvidenceCountHasBeenSet = false;

    int m_manualEvidenceCount{0};
    bool m_manualEvidenceCountHasBeenSet = false;
  };

} // namespace Model
} // namespace AuditManager
} // namespace Aws
