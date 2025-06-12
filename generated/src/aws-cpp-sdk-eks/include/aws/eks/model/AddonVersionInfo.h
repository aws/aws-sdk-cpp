/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/eks/EKS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/eks/model/Compatibility.h>
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
namespace EKS
{
namespace Model
{

  /**
   * <p>Information about an add-on version.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/eks-2017-11-01/AddonVersionInfo">AWS
   * API Reference</a></p>
   */
  class AddonVersionInfo
  {
  public:
    AWS_EKS_API AddonVersionInfo() = default;
    AWS_EKS_API AddonVersionInfo(Aws::Utils::Json::JsonView jsonValue);
    AWS_EKS_API AddonVersionInfo& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_EKS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The version of the add-on.</p>
     */
    inline const Aws::String& GetAddonVersion() const { return m_addonVersion; }
    inline bool AddonVersionHasBeenSet() const { return m_addonVersionHasBeenSet; }
    template<typename AddonVersionT = Aws::String>
    void SetAddonVersion(AddonVersionT&& value) { m_addonVersionHasBeenSet = true; m_addonVersion = std::forward<AddonVersionT>(value); }
    template<typename AddonVersionT = Aws::String>
    AddonVersionInfo& WithAddonVersion(AddonVersionT&& value) { SetAddonVersion(std::forward<AddonVersionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The architectures that the version supports.</p>
     */
    inline const Aws::Vector<Aws::String>& GetArchitecture() const { return m_architecture; }
    inline bool ArchitectureHasBeenSet() const { return m_architectureHasBeenSet; }
    template<typename ArchitectureT = Aws::Vector<Aws::String>>
    void SetArchitecture(ArchitectureT&& value) { m_architectureHasBeenSet = true; m_architecture = std::forward<ArchitectureT>(value); }
    template<typename ArchitectureT = Aws::Vector<Aws::String>>
    AddonVersionInfo& WithArchitecture(ArchitectureT&& value) { SetArchitecture(std::forward<ArchitectureT>(value)); return *this;}
    template<typename ArchitectureT = Aws::String>
    AddonVersionInfo& AddArchitecture(ArchitectureT&& value) { m_architectureHasBeenSet = true; m_architecture.emplace_back(std::forward<ArchitectureT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Indicates the compute type of the add-on version.</p>
     */
    inline const Aws::Vector<Aws::String>& GetComputeTypes() const { return m_computeTypes; }
    inline bool ComputeTypesHasBeenSet() const { return m_computeTypesHasBeenSet; }
    template<typename ComputeTypesT = Aws::Vector<Aws::String>>
    void SetComputeTypes(ComputeTypesT&& value) { m_computeTypesHasBeenSet = true; m_computeTypes = std::forward<ComputeTypesT>(value); }
    template<typename ComputeTypesT = Aws::Vector<Aws::String>>
    AddonVersionInfo& WithComputeTypes(ComputeTypesT&& value) { SetComputeTypes(std::forward<ComputeTypesT>(value)); return *this;}
    template<typename ComputeTypesT = Aws::String>
    AddonVersionInfo& AddComputeTypes(ComputeTypesT&& value) { m_computeTypesHasBeenSet = true; m_computeTypes.emplace_back(std::forward<ComputeTypesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>An object representing the compatibilities of a version.</p>
     */
    inline const Aws::Vector<Compatibility>& GetCompatibilities() const { return m_compatibilities; }
    inline bool CompatibilitiesHasBeenSet() const { return m_compatibilitiesHasBeenSet; }
    template<typename CompatibilitiesT = Aws::Vector<Compatibility>>
    void SetCompatibilities(CompatibilitiesT&& value) { m_compatibilitiesHasBeenSet = true; m_compatibilities = std::forward<CompatibilitiesT>(value); }
    template<typename CompatibilitiesT = Aws::Vector<Compatibility>>
    AddonVersionInfo& WithCompatibilities(CompatibilitiesT&& value) { SetCompatibilities(std::forward<CompatibilitiesT>(value)); return *this;}
    template<typename CompatibilitiesT = Compatibility>
    AddonVersionInfo& AddCompatibilities(CompatibilitiesT&& value) { m_compatibilitiesHasBeenSet = true; m_compatibilities.emplace_back(std::forward<CompatibilitiesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Whether the add-on requires configuration.</p>
     */
    inline bool GetRequiresConfiguration() const { return m_requiresConfiguration; }
    inline bool RequiresConfigurationHasBeenSet() const { return m_requiresConfigurationHasBeenSet; }
    inline void SetRequiresConfiguration(bool value) { m_requiresConfigurationHasBeenSet = true; m_requiresConfiguration = value; }
    inline AddonVersionInfo& WithRequiresConfiguration(bool value) { SetRequiresConfiguration(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates if the add-on requires IAM Permissions to operate, such as
     * networking permissions.</p>
     */
    inline bool GetRequiresIamPermissions() const { return m_requiresIamPermissions; }
    inline bool RequiresIamPermissionsHasBeenSet() const { return m_requiresIamPermissionsHasBeenSet; }
    inline void SetRequiresIamPermissions(bool value) { m_requiresIamPermissionsHasBeenSet = true; m_requiresIamPermissions = value; }
    inline AddonVersionInfo& WithRequiresIamPermissions(bool value) { SetRequiresIamPermissions(value); return *this;}
    ///@}
  private:

    Aws::String m_addonVersion;
    bool m_addonVersionHasBeenSet = false;

    Aws::Vector<Aws::String> m_architecture;
    bool m_architectureHasBeenSet = false;

    Aws::Vector<Aws::String> m_computeTypes;
    bool m_computeTypesHasBeenSet = false;

    Aws::Vector<Compatibility> m_compatibilities;
    bool m_compatibilitiesHasBeenSet = false;

    bool m_requiresConfiguration{false};
    bool m_requiresConfigurationHasBeenSet = false;

    bool m_requiresIamPermissions{false};
    bool m_requiresIamPermissionsHasBeenSet = false;
  };

} // namespace Model
} // namespace EKS
} // namespace Aws
