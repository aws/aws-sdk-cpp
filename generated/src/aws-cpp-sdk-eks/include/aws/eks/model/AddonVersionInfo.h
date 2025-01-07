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
    AWS_EKS_API AddonVersionInfo();
    AWS_EKS_API AddonVersionInfo(Aws::Utils::Json::JsonView jsonValue);
    AWS_EKS_API AddonVersionInfo& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_EKS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The version of the add-on.</p>
     */
    inline const Aws::String& GetAddonVersion() const{ return m_addonVersion; }
    inline bool AddonVersionHasBeenSet() const { return m_addonVersionHasBeenSet; }
    inline void SetAddonVersion(const Aws::String& value) { m_addonVersionHasBeenSet = true; m_addonVersion = value; }
    inline void SetAddonVersion(Aws::String&& value) { m_addonVersionHasBeenSet = true; m_addonVersion = std::move(value); }
    inline void SetAddonVersion(const char* value) { m_addonVersionHasBeenSet = true; m_addonVersion.assign(value); }
    inline AddonVersionInfo& WithAddonVersion(const Aws::String& value) { SetAddonVersion(value); return *this;}
    inline AddonVersionInfo& WithAddonVersion(Aws::String&& value) { SetAddonVersion(std::move(value)); return *this;}
    inline AddonVersionInfo& WithAddonVersion(const char* value) { SetAddonVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The architectures that the version supports.</p>
     */
    inline const Aws::Vector<Aws::String>& GetArchitecture() const{ return m_architecture; }
    inline bool ArchitectureHasBeenSet() const { return m_architectureHasBeenSet; }
    inline void SetArchitecture(const Aws::Vector<Aws::String>& value) { m_architectureHasBeenSet = true; m_architecture = value; }
    inline void SetArchitecture(Aws::Vector<Aws::String>&& value) { m_architectureHasBeenSet = true; m_architecture = std::move(value); }
    inline AddonVersionInfo& WithArchitecture(const Aws::Vector<Aws::String>& value) { SetArchitecture(value); return *this;}
    inline AddonVersionInfo& WithArchitecture(Aws::Vector<Aws::String>&& value) { SetArchitecture(std::move(value)); return *this;}
    inline AddonVersionInfo& AddArchitecture(const Aws::String& value) { m_architectureHasBeenSet = true; m_architecture.push_back(value); return *this; }
    inline AddonVersionInfo& AddArchitecture(Aws::String&& value) { m_architectureHasBeenSet = true; m_architecture.push_back(std::move(value)); return *this; }
    inline AddonVersionInfo& AddArchitecture(const char* value) { m_architectureHasBeenSet = true; m_architecture.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>Indicates the compute type of the addon version.</p>
     */
    inline const Aws::Vector<Aws::String>& GetComputeTypes() const{ return m_computeTypes; }
    inline bool ComputeTypesHasBeenSet() const { return m_computeTypesHasBeenSet; }
    inline void SetComputeTypes(const Aws::Vector<Aws::String>& value) { m_computeTypesHasBeenSet = true; m_computeTypes = value; }
    inline void SetComputeTypes(Aws::Vector<Aws::String>&& value) { m_computeTypesHasBeenSet = true; m_computeTypes = std::move(value); }
    inline AddonVersionInfo& WithComputeTypes(const Aws::Vector<Aws::String>& value) { SetComputeTypes(value); return *this;}
    inline AddonVersionInfo& WithComputeTypes(Aws::Vector<Aws::String>&& value) { SetComputeTypes(std::move(value)); return *this;}
    inline AddonVersionInfo& AddComputeTypes(const Aws::String& value) { m_computeTypesHasBeenSet = true; m_computeTypes.push_back(value); return *this; }
    inline AddonVersionInfo& AddComputeTypes(Aws::String&& value) { m_computeTypesHasBeenSet = true; m_computeTypes.push_back(std::move(value)); return *this; }
    inline AddonVersionInfo& AddComputeTypes(const char* value) { m_computeTypesHasBeenSet = true; m_computeTypes.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>An object representing the compatibilities of a version.</p>
     */
    inline const Aws::Vector<Compatibility>& GetCompatibilities() const{ return m_compatibilities; }
    inline bool CompatibilitiesHasBeenSet() const { return m_compatibilitiesHasBeenSet; }
    inline void SetCompatibilities(const Aws::Vector<Compatibility>& value) { m_compatibilitiesHasBeenSet = true; m_compatibilities = value; }
    inline void SetCompatibilities(Aws::Vector<Compatibility>&& value) { m_compatibilitiesHasBeenSet = true; m_compatibilities = std::move(value); }
    inline AddonVersionInfo& WithCompatibilities(const Aws::Vector<Compatibility>& value) { SetCompatibilities(value); return *this;}
    inline AddonVersionInfo& WithCompatibilities(Aws::Vector<Compatibility>&& value) { SetCompatibilities(std::move(value)); return *this;}
    inline AddonVersionInfo& AddCompatibilities(const Compatibility& value) { m_compatibilitiesHasBeenSet = true; m_compatibilities.push_back(value); return *this; }
    inline AddonVersionInfo& AddCompatibilities(Compatibility&& value) { m_compatibilitiesHasBeenSet = true; m_compatibilities.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Whether the add-on requires configuration.</p>
     */
    inline bool GetRequiresConfiguration() const{ return m_requiresConfiguration; }
    inline bool RequiresConfigurationHasBeenSet() const { return m_requiresConfigurationHasBeenSet; }
    inline void SetRequiresConfiguration(bool value) { m_requiresConfigurationHasBeenSet = true; m_requiresConfiguration = value; }
    inline AddonVersionInfo& WithRequiresConfiguration(bool value) { SetRequiresConfiguration(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates if the Addon requires IAM Permissions to operate, such as
     * networking permissions.</p>
     */
    inline bool GetRequiresIamPermissions() const{ return m_requiresIamPermissions; }
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

    bool m_requiresConfiguration;
    bool m_requiresConfigurationHasBeenSet = false;

    bool m_requiresIamPermissions;
    bool m_requiresIamPermissionsHasBeenSet = false;
  };

} // namespace Model
} // namespace EKS
} // namespace Aws
