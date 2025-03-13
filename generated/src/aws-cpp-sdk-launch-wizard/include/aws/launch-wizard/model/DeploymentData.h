/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/launch-wizard/LaunchWizard_EXPORTS.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/launch-wizard/model/DeploymentStatus.h>
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
namespace LaunchWizard
{
namespace Model
{

  /**
   * <p>The data associated with a deployment.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/launch-wizard-2018-05-10/DeploymentData">AWS
   * API Reference</a></p>
   */
  class DeploymentData
  {
  public:
    AWS_LAUNCHWIZARD_API DeploymentData() = default;
    AWS_LAUNCHWIZARD_API DeploymentData(Aws::Utils::Json::JsonView jsonValue);
    AWS_LAUNCHWIZARD_API DeploymentData& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LAUNCHWIZARD_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The time the deployment was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    void SetCreatedAt(CreatedAtT&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::forward<CreatedAtT>(value); }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    DeploymentData& WithCreatedAt(CreatedAtT&& value) { SetCreatedAt(std::forward<CreatedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time the deployment was deleted.</p>
     */
    inline const Aws::Utils::DateTime& GetDeletedAt() const { return m_deletedAt; }
    inline bool DeletedAtHasBeenSet() const { return m_deletedAtHasBeenSet; }
    template<typename DeletedAtT = Aws::Utils::DateTime>
    void SetDeletedAt(DeletedAtT&& value) { m_deletedAtHasBeenSet = true; m_deletedAt = std::forward<DeletedAtT>(value); }
    template<typename DeletedAtT = Aws::Utils::DateTime>
    DeploymentData& WithDeletedAt(DeletedAtT&& value) { SetDeletedAt(std::forward<DeletedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the deployment.</p>
     */
    inline const Aws::String& GetDeploymentArn() const { return m_deploymentArn; }
    inline bool DeploymentArnHasBeenSet() const { return m_deploymentArnHasBeenSet; }
    template<typename DeploymentArnT = Aws::String>
    void SetDeploymentArn(DeploymentArnT&& value) { m_deploymentArnHasBeenSet = true; m_deploymentArn = std::forward<DeploymentArnT>(value); }
    template<typename DeploymentArnT = Aws::String>
    DeploymentData& WithDeploymentArn(DeploymentArnT&& value) { SetDeploymentArn(std::forward<DeploymentArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the deployment.</p>
     */
    inline const Aws::String& GetId() const { return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    template<typename IdT = Aws::String>
    void SetId(IdT&& value) { m_idHasBeenSet = true; m_id = std::forward<IdT>(value); }
    template<typename IdT = Aws::String>
    DeploymentData& WithId(IdT&& value) { SetId(std::forward<IdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the deployment.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    DeploymentData& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The pattern name of the deployment.</p>
     */
    inline const Aws::String& GetPatternName() const { return m_patternName; }
    inline bool PatternNameHasBeenSet() const { return m_patternNameHasBeenSet; }
    template<typename PatternNameT = Aws::String>
    void SetPatternName(PatternNameT&& value) { m_patternNameHasBeenSet = true; m_patternName = std::forward<PatternNameT>(value); }
    template<typename PatternNameT = Aws::String>
    DeploymentData& WithPatternName(PatternNameT&& value) { SetPatternName(std::forward<PatternNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The resource group of the deployment.</p>
     */
    inline const Aws::String& GetResourceGroup() const { return m_resourceGroup; }
    inline bool ResourceGroupHasBeenSet() const { return m_resourceGroupHasBeenSet; }
    template<typename ResourceGroupT = Aws::String>
    void SetResourceGroup(ResourceGroupT&& value) { m_resourceGroupHasBeenSet = true; m_resourceGroup = std::forward<ResourceGroupT>(value); }
    template<typename ResourceGroupT = Aws::String>
    DeploymentData& WithResourceGroup(ResourceGroupT&& value) { SetResourceGroup(std::forward<ResourceGroupT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The settings specified for the deployment. These settings define how to
     * deploy and configure your resources created by the deployment. For more
     * information about the specifications required for creating a deployment for a
     * SAP workload, see <a
     * href="https://docs.aws.amazon.com/launchwizard/latest/APIReference/launch-wizard-specifications-sap.html">SAP
     * deployment specifications</a>. To retrieve the specifications required to create
     * a deployment for other workloads, use the <a
     * href="https://docs.aws.amazon.com/launchwizard/latest/APIReference/API_GetWorkloadDeploymentPattern.html">
     * <code>GetWorkloadDeploymentPattern</code> </a> operation.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetSpecifications() const { return m_specifications; }
    inline bool SpecificationsHasBeenSet() const { return m_specificationsHasBeenSet; }
    template<typename SpecificationsT = Aws::Map<Aws::String, Aws::String>>
    void SetSpecifications(SpecificationsT&& value) { m_specificationsHasBeenSet = true; m_specifications = std::forward<SpecificationsT>(value); }
    template<typename SpecificationsT = Aws::Map<Aws::String, Aws::String>>
    DeploymentData& WithSpecifications(SpecificationsT&& value) { SetSpecifications(std::forward<SpecificationsT>(value)); return *this;}
    template<typename SpecificationsKeyT = Aws::String, typename SpecificationsValueT = Aws::String>
    DeploymentData& AddSpecifications(SpecificationsKeyT&& key, SpecificationsValueT&& value) {
      m_specificationsHasBeenSet = true; m_specifications.emplace(std::forward<SpecificationsKeyT>(key), std::forward<SpecificationsValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>The status of the deployment.</p>
     */
    inline DeploymentStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(DeploymentStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline DeploymentData& WithStatus(DeploymentStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the tags attached to a deployment.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    DeploymentData& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
    DeploymentData& AddTags(TagsKeyT&& key, TagsValueT&& value) {
      m_tagsHasBeenSet = true; m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>The name of the workload.</p>
     */
    inline const Aws::String& GetWorkloadName() const { return m_workloadName; }
    inline bool WorkloadNameHasBeenSet() const { return m_workloadNameHasBeenSet; }
    template<typename WorkloadNameT = Aws::String>
    void SetWorkloadName(WorkloadNameT&& value) { m_workloadNameHasBeenSet = true; m_workloadName = std::forward<WorkloadNameT>(value); }
    template<typename WorkloadNameT = Aws::String>
    DeploymentData& WithWorkloadName(WorkloadNameT&& value) { SetWorkloadName(std::forward<WorkloadNameT>(value)); return *this;}
    ///@}
  private:

    Aws::Utils::DateTime m_createdAt{};
    bool m_createdAtHasBeenSet = false;

    Aws::Utils::DateTime m_deletedAt{};
    bool m_deletedAtHasBeenSet = false;

    Aws::String m_deploymentArn;
    bool m_deploymentArnHasBeenSet = false;

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_patternName;
    bool m_patternNameHasBeenSet = false;

    Aws::String m_resourceGroup;
    bool m_resourceGroupHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_specifications;
    bool m_specificationsHasBeenSet = false;

    DeploymentStatus m_status{DeploymentStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;

    Aws::String m_workloadName;
    bool m_workloadNameHasBeenSet = false;
  };

} // namespace Model
} // namespace LaunchWizard
} // namespace Aws
