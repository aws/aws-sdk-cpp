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
    AWS_LAUNCHWIZARD_API DeploymentData();
    AWS_LAUNCHWIZARD_API DeploymentData(Aws::Utils::Json::JsonView jsonValue);
    AWS_LAUNCHWIZARD_API DeploymentData& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LAUNCHWIZARD_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The time the deployment was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }

    /**
     * <p>The time the deployment was created.</p>
     */
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }

    /**
     * <p>The time the deployment was created.</p>
     */
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAtHasBeenSet = true; m_createdAt = value; }

    /**
     * <p>The time the deployment was created.</p>
     */
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::move(value); }

    /**
     * <p>The time the deployment was created.</p>
     */
    inline DeploymentData& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}

    /**
     * <p>The time the deployment was created.</p>
     */
    inline DeploymentData& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}


    /**
     * <p>The time the deployment was deleted.</p>
     */
    inline const Aws::Utils::DateTime& GetDeletedAt() const{ return m_deletedAt; }

    /**
     * <p>The time the deployment was deleted.</p>
     */
    inline bool DeletedAtHasBeenSet() const { return m_deletedAtHasBeenSet; }

    /**
     * <p>The time the deployment was deleted.</p>
     */
    inline void SetDeletedAt(const Aws::Utils::DateTime& value) { m_deletedAtHasBeenSet = true; m_deletedAt = value; }

    /**
     * <p>The time the deployment was deleted.</p>
     */
    inline void SetDeletedAt(Aws::Utils::DateTime&& value) { m_deletedAtHasBeenSet = true; m_deletedAt = std::move(value); }

    /**
     * <p>The time the deployment was deleted.</p>
     */
    inline DeploymentData& WithDeletedAt(const Aws::Utils::DateTime& value) { SetDeletedAt(value); return *this;}

    /**
     * <p>The time the deployment was deleted.</p>
     */
    inline DeploymentData& WithDeletedAt(Aws::Utils::DateTime&& value) { SetDeletedAt(std::move(value)); return *this;}


    /**
     * <p>The ID of the deployment.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>The ID of the deployment.</p>
     */
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }

    /**
     * <p>The ID of the deployment.</p>
     */
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * <p>The ID of the deployment.</p>
     */
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }

    /**
     * <p>The ID of the deployment.</p>
     */
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    /**
     * <p>The ID of the deployment.</p>
     */
    inline DeploymentData& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>The ID of the deployment.</p>
     */
    inline DeploymentData& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p>The ID of the deployment.</p>
     */
    inline DeploymentData& WithId(const char* value) { SetId(value); return *this;}


    /**
     * <p>The name of the deployment.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the deployment.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the deployment.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the deployment.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the deployment.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the deployment.</p>
     */
    inline DeploymentData& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the deployment.</p>
     */
    inline DeploymentData& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the deployment.</p>
     */
    inline DeploymentData& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The pattern name of the deployment.</p>
     */
    inline const Aws::String& GetPatternName() const{ return m_patternName; }

    /**
     * <p>The pattern name of the deployment.</p>
     */
    inline bool PatternNameHasBeenSet() const { return m_patternNameHasBeenSet; }

    /**
     * <p>The pattern name of the deployment.</p>
     */
    inline void SetPatternName(const Aws::String& value) { m_patternNameHasBeenSet = true; m_patternName = value; }

    /**
     * <p>The pattern name of the deployment.</p>
     */
    inline void SetPatternName(Aws::String&& value) { m_patternNameHasBeenSet = true; m_patternName = std::move(value); }

    /**
     * <p>The pattern name of the deployment.</p>
     */
    inline void SetPatternName(const char* value) { m_patternNameHasBeenSet = true; m_patternName.assign(value); }

    /**
     * <p>The pattern name of the deployment.</p>
     */
    inline DeploymentData& WithPatternName(const Aws::String& value) { SetPatternName(value); return *this;}

    /**
     * <p>The pattern name of the deployment.</p>
     */
    inline DeploymentData& WithPatternName(Aws::String&& value) { SetPatternName(std::move(value)); return *this;}

    /**
     * <p>The pattern name of the deployment.</p>
     */
    inline DeploymentData& WithPatternName(const char* value) { SetPatternName(value); return *this;}


    /**
     * <p>The resource group of the deployment.</p>
     */
    inline const Aws::String& GetResourceGroup() const{ return m_resourceGroup; }

    /**
     * <p>The resource group of the deployment.</p>
     */
    inline bool ResourceGroupHasBeenSet() const { return m_resourceGroupHasBeenSet; }

    /**
     * <p>The resource group of the deployment.</p>
     */
    inline void SetResourceGroup(const Aws::String& value) { m_resourceGroupHasBeenSet = true; m_resourceGroup = value; }

    /**
     * <p>The resource group of the deployment.</p>
     */
    inline void SetResourceGroup(Aws::String&& value) { m_resourceGroupHasBeenSet = true; m_resourceGroup = std::move(value); }

    /**
     * <p>The resource group of the deployment.</p>
     */
    inline void SetResourceGroup(const char* value) { m_resourceGroupHasBeenSet = true; m_resourceGroup.assign(value); }

    /**
     * <p>The resource group of the deployment.</p>
     */
    inline DeploymentData& WithResourceGroup(const Aws::String& value) { SetResourceGroup(value); return *this;}

    /**
     * <p>The resource group of the deployment.</p>
     */
    inline DeploymentData& WithResourceGroup(Aws::String&& value) { SetResourceGroup(std::move(value)); return *this;}

    /**
     * <p>The resource group of the deployment.</p>
     */
    inline DeploymentData& WithResourceGroup(const char* value) { SetResourceGroup(value); return *this;}


    /**
     * <p>The specifications of the deployment. For more information on specifications
     * for each deployment, see <a
     * href="https://docs.aws.amazon.com/launchwizard/latest/APIReference/launch-wizard-specifications.html">Workload
     * specifications</a>.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetSpecifications() const{ return m_specifications; }

    /**
     * <p>The specifications of the deployment. For more information on specifications
     * for each deployment, see <a
     * href="https://docs.aws.amazon.com/launchwizard/latest/APIReference/launch-wizard-specifications.html">Workload
     * specifications</a>.</p>
     */
    inline bool SpecificationsHasBeenSet() const { return m_specificationsHasBeenSet; }

    /**
     * <p>The specifications of the deployment. For more information on specifications
     * for each deployment, see <a
     * href="https://docs.aws.amazon.com/launchwizard/latest/APIReference/launch-wizard-specifications.html">Workload
     * specifications</a>.</p>
     */
    inline void SetSpecifications(const Aws::Map<Aws::String, Aws::String>& value) { m_specificationsHasBeenSet = true; m_specifications = value; }

    /**
     * <p>The specifications of the deployment. For more information on specifications
     * for each deployment, see <a
     * href="https://docs.aws.amazon.com/launchwizard/latest/APIReference/launch-wizard-specifications.html">Workload
     * specifications</a>.</p>
     */
    inline void SetSpecifications(Aws::Map<Aws::String, Aws::String>&& value) { m_specificationsHasBeenSet = true; m_specifications = std::move(value); }

    /**
     * <p>The specifications of the deployment. For more information on specifications
     * for each deployment, see <a
     * href="https://docs.aws.amazon.com/launchwizard/latest/APIReference/launch-wizard-specifications.html">Workload
     * specifications</a>.</p>
     */
    inline DeploymentData& WithSpecifications(const Aws::Map<Aws::String, Aws::String>& value) { SetSpecifications(value); return *this;}

    /**
     * <p>The specifications of the deployment. For more information on specifications
     * for each deployment, see <a
     * href="https://docs.aws.amazon.com/launchwizard/latest/APIReference/launch-wizard-specifications.html">Workload
     * specifications</a>.</p>
     */
    inline DeploymentData& WithSpecifications(Aws::Map<Aws::String, Aws::String>&& value) { SetSpecifications(std::move(value)); return *this;}

    /**
     * <p>The specifications of the deployment. For more information on specifications
     * for each deployment, see <a
     * href="https://docs.aws.amazon.com/launchwizard/latest/APIReference/launch-wizard-specifications.html">Workload
     * specifications</a>.</p>
     */
    inline DeploymentData& AddSpecifications(const Aws::String& key, const Aws::String& value) { m_specificationsHasBeenSet = true; m_specifications.emplace(key, value); return *this; }

    /**
     * <p>The specifications of the deployment. For more information on specifications
     * for each deployment, see <a
     * href="https://docs.aws.amazon.com/launchwizard/latest/APIReference/launch-wizard-specifications.html">Workload
     * specifications</a>.</p>
     */
    inline DeploymentData& AddSpecifications(Aws::String&& key, const Aws::String& value) { m_specificationsHasBeenSet = true; m_specifications.emplace(std::move(key), value); return *this; }

    /**
     * <p>The specifications of the deployment. For more information on specifications
     * for each deployment, see <a
     * href="https://docs.aws.amazon.com/launchwizard/latest/APIReference/launch-wizard-specifications.html">Workload
     * specifications</a>.</p>
     */
    inline DeploymentData& AddSpecifications(const Aws::String& key, Aws::String&& value) { m_specificationsHasBeenSet = true; m_specifications.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The specifications of the deployment. For more information on specifications
     * for each deployment, see <a
     * href="https://docs.aws.amazon.com/launchwizard/latest/APIReference/launch-wizard-specifications.html">Workload
     * specifications</a>.</p>
     */
    inline DeploymentData& AddSpecifications(Aws::String&& key, Aws::String&& value) { m_specificationsHasBeenSet = true; m_specifications.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>The specifications of the deployment. For more information on specifications
     * for each deployment, see <a
     * href="https://docs.aws.amazon.com/launchwizard/latest/APIReference/launch-wizard-specifications.html">Workload
     * specifications</a>.</p>
     */
    inline DeploymentData& AddSpecifications(const char* key, Aws::String&& value) { m_specificationsHasBeenSet = true; m_specifications.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The specifications of the deployment. For more information on specifications
     * for each deployment, see <a
     * href="https://docs.aws.amazon.com/launchwizard/latest/APIReference/launch-wizard-specifications.html">Workload
     * specifications</a>.</p>
     */
    inline DeploymentData& AddSpecifications(Aws::String&& key, const char* value) { m_specificationsHasBeenSet = true; m_specifications.emplace(std::move(key), value); return *this; }

    /**
     * <p>The specifications of the deployment. For more information on specifications
     * for each deployment, see <a
     * href="https://docs.aws.amazon.com/launchwizard/latest/APIReference/launch-wizard-specifications.html">Workload
     * specifications</a>.</p>
     */
    inline DeploymentData& AddSpecifications(const char* key, const char* value) { m_specificationsHasBeenSet = true; m_specifications.emplace(key, value); return *this; }


    /**
     * <p>The status of the deployment.</p>
     */
    inline const DeploymentStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The status of the deployment.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The status of the deployment.</p>
     */
    inline void SetStatus(const DeploymentStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The status of the deployment.</p>
     */
    inline void SetStatus(DeploymentStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The status of the deployment.</p>
     */
    inline DeploymentData& WithStatus(const DeploymentStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The status of the deployment.</p>
     */
    inline DeploymentData& WithStatus(DeploymentStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>The name of the workload.</p>
     */
    inline const Aws::String& GetWorkloadName() const{ return m_workloadName; }

    /**
     * <p>The name of the workload.</p>
     */
    inline bool WorkloadNameHasBeenSet() const { return m_workloadNameHasBeenSet; }

    /**
     * <p>The name of the workload.</p>
     */
    inline void SetWorkloadName(const Aws::String& value) { m_workloadNameHasBeenSet = true; m_workloadName = value; }

    /**
     * <p>The name of the workload.</p>
     */
    inline void SetWorkloadName(Aws::String&& value) { m_workloadNameHasBeenSet = true; m_workloadName = std::move(value); }

    /**
     * <p>The name of the workload.</p>
     */
    inline void SetWorkloadName(const char* value) { m_workloadNameHasBeenSet = true; m_workloadName.assign(value); }

    /**
     * <p>The name of the workload.</p>
     */
    inline DeploymentData& WithWorkloadName(const Aws::String& value) { SetWorkloadName(value); return *this;}

    /**
     * <p>The name of the workload.</p>
     */
    inline DeploymentData& WithWorkloadName(Aws::String&& value) { SetWorkloadName(std::move(value)); return *this;}

    /**
     * <p>The name of the workload.</p>
     */
    inline DeploymentData& WithWorkloadName(const char* value) { SetWorkloadName(value); return *this;}

  private:

    Aws::Utils::DateTime m_createdAt;
    bool m_createdAtHasBeenSet = false;

    Aws::Utils::DateTime m_deletedAt;
    bool m_deletedAtHasBeenSet = false;

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

    DeploymentStatus m_status;
    bool m_statusHasBeenSet = false;

    Aws::String m_workloadName;
    bool m_workloadNameHasBeenSet = false;
  };

} // namespace Model
} // namespace LaunchWizard
} // namespace Aws
