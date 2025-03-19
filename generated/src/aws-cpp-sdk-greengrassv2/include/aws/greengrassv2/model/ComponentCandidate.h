/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/greengrassv2/GreengrassV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
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
namespace GreengrassV2
{
namespace Model
{

  /**
   * <p>Contains information about a component that is a candidate to deploy to a
   * Greengrass core device.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/greengrassv2-2020-11-30/ComponentCandidate">AWS
   * API Reference</a></p>
   */
  class ComponentCandidate
  {
  public:
    AWS_GREENGRASSV2_API ComponentCandidate() = default;
    AWS_GREENGRASSV2_API ComponentCandidate(Aws::Utils::Json::JsonView jsonValue);
    AWS_GREENGRASSV2_API ComponentCandidate& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GREENGRASSV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the component.</p>
     */
    inline const Aws::String& GetComponentName() const { return m_componentName; }
    inline bool ComponentNameHasBeenSet() const { return m_componentNameHasBeenSet; }
    template<typename ComponentNameT = Aws::String>
    void SetComponentName(ComponentNameT&& value) { m_componentNameHasBeenSet = true; m_componentName = std::forward<ComponentNameT>(value); }
    template<typename ComponentNameT = Aws::String>
    ComponentCandidate& WithComponentName(ComponentNameT&& value) { SetComponentName(std::forward<ComponentNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version of the component.</p>
     */
    inline const Aws::String& GetComponentVersion() const { return m_componentVersion; }
    inline bool ComponentVersionHasBeenSet() const { return m_componentVersionHasBeenSet; }
    template<typename ComponentVersionT = Aws::String>
    void SetComponentVersion(ComponentVersionT&& value) { m_componentVersionHasBeenSet = true; m_componentVersion = std::forward<ComponentVersionT>(value); }
    template<typename ComponentVersionT = Aws::String>
    ComponentCandidate& WithComponentVersion(ComponentVersionT&& value) { SetComponentVersion(std::forward<ComponentVersionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version requirements for the component's dependencies. Greengrass core
     * devices get the version requirements from component recipes.</p> <p>IoT
     * Greengrass V2 uses semantic version constraints. For more information, see <a
     * href="https://semver.org/">Semantic Versioning</a>.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetVersionRequirements() const { return m_versionRequirements; }
    inline bool VersionRequirementsHasBeenSet() const { return m_versionRequirementsHasBeenSet; }
    template<typename VersionRequirementsT = Aws::Map<Aws::String, Aws::String>>
    void SetVersionRequirements(VersionRequirementsT&& value) { m_versionRequirementsHasBeenSet = true; m_versionRequirements = std::forward<VersionRequirementsT>(value); }
    template<typename VersionRequirementsT = Aws::Map<Aws::String, Aws::String>>
    ComponentCandidate& WithVersionRequirements(VersionRequirementsT&& value) { SetVersionRequirements(std::forward<VersionRequirementsT>(value)); return *this;}
    template<typename VersionRequirementsKeyT = Aws::String, typename VersionRequirementsValueT = Aws::String>
    ComponentCandidate& AddVersionRequirements(VersionRequirementsKeyT&& key, VersionRequirementsValueT&& value) {
      m_versionRequirementsHasBeenSet = true; m_versionRequirements.emplace(std::forward<VersionRequirementsKeyT>(key), std::forward<VersionRequirementsValueT>(value)); return *this;
    }
    ///@}
  private:

    Aws::String m_componentName;
    bool m_componentNameHasBeenSet = false;

    Aws::String m_componentVersion;
    bool m_componentVersionHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_versionRequirements;
    bool m_versionRequirementsHasBeenSet = false;
  };

} // namespace Model
} // namespace GreengrassV2
} // namespace Aws
