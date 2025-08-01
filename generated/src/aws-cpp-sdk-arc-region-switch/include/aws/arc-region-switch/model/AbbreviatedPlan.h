/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/arc-region-switch/ARCRegionswitch_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/arc-region-switch/model/RecoveryApproach.h>
#include <aws/core/utils/DateTime.h>
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
namespace ARCRegionswitch
{
namespace Model
{

  /**
   * <p>A summarized representation of a Region switch plan. This structure contains
   * key information about a plan without all the detailed workflow and step
   * data.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/arc-region-switch-2022-07-26/AbbreviatedPlan">AWS
   * API Reference</a></p>
   */
  class AbbreviatedPlan
  {
  public:
    AWS_ARCREGIONSWITCH_API AbbreviatedPlan() = default;
    AWS_ARCREGIONSWITCH_API AbbreviatedPlan(Aws::Utils::Json::JsonView jsonValue);
    AWS_ARCREGIONSWITCH_API AbbreviatedPlan& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ARCREGIONSWITCH_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the Region switch plan.</p>
     */
    inline const Aws::String& GetArn() const { return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    template<typename ArnT = Aws::String>
    void SetArn(ArnT&& value) { m_arnHasBeenSet = true; m_arn = std::forward<ArnT>(value); }
    template<typename ArnT = Aws::String>
    AbbreviatedPlan& WithArn(ArnT&& value) { SetArn(std::forward<ArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The owner of a Region switch plan.</p>
     */
    inline const Aws::String& GetOwner() const { return m_owner; }
    inline bool OwnerHasBeenSet() const { return m_ownerHasBeenSet; }
    template<typename OwnerT = Aws::String>
    void SetOwner(OwnerT&& value) { m_ownerHasBeenSet = true; m_owner = std::forward<OwnerT>(value); }
    template<typename OwnerT = Aws::String>
    AbbreviatedPlan& WithOwner(OwnerT&& value) { SetOwner(std::forward<OwnerT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of a Region switch plan.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    AbbreviatedPlan& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Web Services Region specified for a Region switch plan.</p>
     */
    inline const Aws::Vector<Aws::String>& GetRegions() const { return m_regions; }
    inline bool RegionsHasBeenSet() const { return m_regionsHasBeenSet; }
    template<typename RegionsT = Aws::Vector<Aws::String>>
    void SetRegions(RegionsT&& value) { m_regionsHasBeenSet = true; m_regions = std::forward<RegionsT>(value); }
    template<typename RegionsT = Aws::Vector<Aws::String>>
    AbbreviatedPlan& WithRegions(RegionsT&& value) { SetRegions(std::forward<RegionsT>(value)); return *this;}
    template<typename RegionsT = Aws::String>
    AbbreviatedPlan& AddRegions(RegionsT&& value) { m_regionsHasBeenSet = true; m_regions.emplace_back(std::forward<RegionsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The recovery approach for a Region switch plan, which can be active/active
     * (activeActive) or active/passive (activePassive).</p>
     */
    inline RecoveryApproach GetRecoveryApproach() const { return m_recoveryApproach; }
    inline bool RecoveryApproachHasBeenSet() const { return m_recoveryApproachHasBeenSet; }
    inline void SetRecoveryApproach(RecoveryApproach value) { m_recoveryApproachHasBeenSet = true; m_recoveryApproach = value; }
    inline AbbreviatedPlan& WithRecoveryApproach(RecoveryApproach value) { SetRecoveryApproach(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The primary Region for a plan.</p>
     */
    inline const Aws::String& GetPrimaryRegion() const { return m_primaryRegion; }
    inline bool PrimaryRegionHasBeenSet() const { return m_primaryRegionHasBeenSet; }
    template<typename PrimaryRegionT = Aws::String>
    void SetPrimaryRegion(PrimaryRegionT&& value) { m_primaryRegionHasBeenSet = true; m_primaryRegion = std::forward<PrimaryRegionT>(value); }
    template<typename PrimaryRegionT = Aws::String>
    AbbreviatedPlan& WithPrimaryRegion(PrimaryRegionT&& value) { SetPrimaryRegion(std::forward<PrimaryRegionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version for the plan.</p>
     */
    inline const Aws::String& GetVersion() const { return m_version; }
    inline bool VersionHasBeenSet() const { return m_versionHasBeenSet; }
    template<typename VersionT = Aws::String>
    void SetVersion(VersionT&& value) { m_versionHasBeenSet = true; m_version = std::forward<VersionT>(value); }
    template<typename VersionT = Aws::String>
    AbbreviatedPlan& WithVersion(VersionT&& value) { SetVersion(std::forward<VersionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp when the plan execution was last updated.</p>
     */
    inline const Aws::Utils::DateTime& GetUpdatedAt() const { return m_updatedAt; }
    inline bool UpdatedAtHasBeenSet() const { return m_updatedAtHasBeenSet; }
    template<typename UpdatedAtT = Aws::Utils::DateTime>
    void SetUpdatedAt(UpdatedAtT&& value) { m_updatedAtHasBeenSet = true; m_updatedAt = std::forward<UpdatedAtT>(value); }
    template<typename UpdatedAtT = Aws::Utils::DateTime>
    AbbreviatedPlan& WithUpdatedAt(UpdatedAtT&& value) { SetUpdatedAt(std::forward<UpdatedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of a Region switch plan.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    AbbreviatedPlan& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The execution role is a way to categorize a Region switch plan. </p>
     */
    inline const Aws::String& GetExecutionRole() const { return m_executionRole; }
    inline bool ExecutionRoleHasBeenSet() const { return m_executionRoleHasBeenSet; }
    template<typename ExecutionRoleT = Aws::String>
    void SetExecutionRole(ExecutionRoleT&& value) { m_executionRoleHasBeenSet = true; m_executionRole = std::forward<ExecutionRoleT>(value); }
    template<typename ExecutionRoleT = Aws::String>
    AbbreviatedPlan& WithExecutionRole(ExecutionRoleT&& value) { SetExecutionRole(std::forward<ExecutionRoleT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies if this is the active plan execution at this time.</p>
     */
    inline const Aws::String& GetActivePlanExecution() const { return m_activePlanExecution; }
    inline bool ActivePlanExecutionHasBeenSet() const { return m_activePlanExecutionHasBeenSet; }
    template<typename ActivePlanExecutionT = Aws::String>
    void SetActivePlanExecution(ActivePlanExecutionT&& value) { m_activePlanExecutionHasBeenSet = true; m_activePlanExecution = std::forward<ActivePlanExecutionT>(value); }
    template<typename ActivePlanExecutionT = Aws::String>
    AbbreviatedPlan& WithActivePlanExecution(ActivePlanExecutionT&& value) { SetActivePlanExecution(std::forward<ActivePlanExecutionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The recovery time objective that you've specified.</p>
     */
    inline int GetRecoveryTimeObjectiveMinutes() const { return m_recoveryTimeObjectiveMinutes; }
    inline bool RecoveryTimeObjectiveMinutesHasBeenSet() const { return m_recoveryTimeObjectiveMinutesHasBeenSet; }
    inline void SetRecoveryTimeObjectiveMinutes(int value) { m_recoveryTimeObjectiveMinutesHasBeenSet = true; m_recoveryTimeObjectiveMinutes = value; }
    inline AbbreviatedPlan& WithRecoveryTimeObjectiveMinutes(int value) { SetRecoveryTimeObjectiveMinutes(value); return *this;}
    ///@}
  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::String m_owner;
    bool m_ownerHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::Vector<Aws::String> m_regions;
    bool m_regionsHasBeenSet = false;

    RecoveryApproach m_recoveryApproach{RecoveryApproach::NOT_SET};
    bool m_recoveryApproachHasBeenSet = false;

    Aws::String m_primaryRegion;
    bool m_primaryRegionHasBeenSet = false;

    Aws::String m_version;
    bool m_versionHasBeenSet = false;

    Aws::Utils::DateTime m_updatedAt{};
    bool m_updatedAtHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_executionRole;
    bool m_executionRoleHasBeenSet = false;

    Aws::String m_activePlanExecution;
    bool m_activePlanExecutionHasBeenSet = false;

    int m_recoveryTimeObjectiveMinutes{0};
    bool m_recoveryTimeObjectiveMinutesHasBeenSet = false;
  };

} // namespace Model
} // namespace ARCRegionswitch
} // namespace Aws
