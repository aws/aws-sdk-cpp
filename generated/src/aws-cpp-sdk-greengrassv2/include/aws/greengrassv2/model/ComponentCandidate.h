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
    AWS_GREENGRASSV2_API ComponentCandidate();
    AWS_GREENGRASSV2_API ComponentCandidate(Aws::Utils::Json::JsonView jsonValue);
    AWS_GREENGRASSV2_API ComponentCandidate& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GREENGRASSV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the component.</p>
     */
    inline const Aws::String& GetComponentName() const{ return m_componentName; }

    /**
     * <p>The name of the component.</p>
     */
    inline bool ComponentNameHasBeenSet() const { return m_componentNameHasBeenSet; }

    /**
     * <p>The name of the component.</p>
     */
    inline void SetComponentName(const Aws::String& value) { m_componentNameHasBeenSet = true; m_componentName = value; }

    /**
     * <p>The name of the component.</p>
     */
    inline void SetComponentName(Aws::String&& value) { m_componentNameHasBeenSet = true; m_componentName = std::move(value); }

    /**
     * <p>The name of the component.</p>
     */
    inline void SetComponentName(const char* value) { m_componentNameHasBeenSet = true; m_componentName.assign(value); }

    /**
     * <p>The name of the component.</p>
     */
    inline ComponentCandidate& WithComponentName(const Aws::String& value) { SetComponentName(value); return *this;}

    /**
     * <p>The name of the component.</p>
     */
    inline ComponentCandidate& WithComponentName(Aws::String&& value) { SetComponentName(std::move(value)); return *this;}

    /**
     * <p>The name of the component.</p>
     */
    inline ComponentCandidate& WithComponentName(const char* value) { SetComponentName(value); return *this;}


    /**
     * <p>The version of the component.</p>
     */
    inline const Aws::String& GetComponentVersion() const{ return m_componentVersion; }

    /**
     * <p>The version of the component.</p>
     */
    inline bool ComponentVersionHasBeenSet() const { return m_componentVersionHasBeenSet; }

    /**
     * <p>The version of the component.</p>
     */
    inline void SetComponentVersion(const Aws::String& value) { m_componentVersionHasBeenSet = true; m_componentVersion = value; }

    /**
     * <p>The version of the component.</p>
     */
    inline void SetComponentVersion(Aws::String&& value) { m_componentVersionHasBeenSet = true; m_componentVersion = std::move(value); }

    /**
     * <p>The version of the component.</p>
     */
    inline void SetComponentVersion(const char* value) { m_componentVersionHasBeenSet = true; m_componentVersion.assign(value); }

    /**
     * <p>The version of the component.</p>
     */
    inline ComponentCandidate& WithComponentVersion(const Aws::String& value) { SetComponentVersion(value); return *this;}

    /**
     * <p>The version of the component.</p>
     */
    inline ComponentCandidate& WithComponentVersion(Aws::String&& value) { SetComponentVersion(std::move(value)); return *this;}

    /**
     * <p>The version of the component.</p>
     */
    inline ComponentCandidate& WithComponentVersion(const char* value) { SetComponentVersion(value); return *this;}


    /**
     * <p>The version requirements for the component's dependencies. Greengrass core
     * devices get the version requirements from component recipes.</p> <p>IoT
     * Greengrass V2 uses semantic version constraints. For more information, see <a
     * href="https://semver.org/">Semantic Versioning</a>.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetVersionRequirements() const{ return m_versionRequirements; }

    /**
     * <p>The version requirements for the component's dependencies. Greengrass core
     * devices get the version requirements from component recipes.</p> <p>IoT
     * Greengrass V2 uses semantic version constraints. For more information, see <a
     * href="https://semver.org/">Semantic Versioning</a>.</p>
     */
    inline bool VersionRequirementsHasBeenSet() const { return m_versionRequirementsHasBeenSet; }

    /**
     * <p>The version requirements for the component's dependencies. Greengrass core
     * devices get the version requirements from component recipes.</p> <p>IoT
     * Greengrass V2 uses semantic version constraints. For more information, see <a
     * href="https://semver.org/">Semantic Versioning</a>.</p>
     */
    inline void SetVersionRequirements(const Aws::Map<Aws::String, Aws::String>& value) { m_versionRequirementsHasBeenSet = true; m_versionRequirements = value; }

    /**
     * <p>The version requirements for the component's dependencies. Greengrass core
     * devices get the version requirements from component recipes.</p> <p>IoT
     * Greengrass V2 uses semantic version constraints. For more information, see <a
     * href="https://semver.org/">Semantic Versioning</a>.</p>
     */
    inline void SetVersionRequirements(Aws::Map<Aws::String, Aws::String>&& value) { m_versionRequirementsHasBeenSet = true; m_versionRequirements = std::move(value); }

    /**
     * <p>The version requirements for the component's dependencies. Greengrass core
     * devices get the version requirements from component recipes.</p> <p>IoT
     * Greengrass V2 uses semantic version constraints. For more information, see <a
     * href="https://semver.org/">Semantic Versioning</a>.</p>
     */
    inline ComponentCandidate& WithVersionRequirements(const Aws::Map<Aws::String, Aws::String>& value) { SetVersionRequirements(value); return *this;}

    /**
     * <p>The version requirements for the component's dependencies. Greengrass core
     * devices get the version requirements from component recipes.</p> <p>IoT
     * Greengrass V2 uses semantic version constraints. For more information, see <a
     * href="https://semver.org/">Semantic Versioning</a>.</p>
     */
    inline ComponentCandidate& WithVersionRequirements(Aws::Map<Aws::String, Aws::String>&& value) { SetVersionRequirements(std::move(value)); return *this;}

    /**
     * <p>The version requirements for the component's dependencies. Greengrass core
     * devices get the version requirements from component recipes.</p> <p>IoT
     * Greengrass V2 uses semantic version constraints. For more information, see <a
     * href="https://semver.org/">Semantic Versioning</a>.</p>
     */
    inline ComponentCandidate& AddVersionRequirements(const Aws::String& key, const Aws::String& value) { m_versionRequirementsHasBeenSet = true; m_versionRequirements.emplace(key, value); return *this; }

    /**
     * <p>The version requirements for the component's dependencies. Greengrass core
     * devices get the version requirements from component recipes.</p> <p>IoT
     * Greengrass V2 uses semantic version constraints. For more information, see <a
     * href="https://semver.org/">Semantic Versioning</a>.</p>
     */
    inline ComponentCandidate& AddVersionRequirements(Aws::String&& key, const Aws::String& value) { m_versionRequirementsHasBeenSet = true; m_versionRequirements.emplace(std::move(key), value); return *this; }

    /**
     * <p>The version requirements for the component's dependencies. Greengrass core
     * devices get the version requirements from component recipes.</p> <p>IoT
     * Greengrass V2 uses semantic version constraints. For more information, see <a
     * href="https://semver.org/">Semantic Versioning</a>.</p>
     */
    inline ComponentCandidate& AddVersionRequirements(const Aws::String& key, Aws::String&& value) { m_versionRequirementsHasBeenSet = true; m_versionRequirements.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The version requirements for the component's dependencies. Greengrass core
     * devices get the version requirements from component recipes.</p> <p>IoT
     * Greengrass V2 uses semantic version constraints. For more information, see <a
     * href="https://semver.org/">Semantic Versioning</a>.</p>
     */
    inline ComponentCandidate& AddVersionRequirements(Aws::String&& key, Aws::String&& value) { m_versionRequirementsHasBeenSet = true; m_versionRequirements.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>The version requirements for the component's dependencies. Greengrass core
     * devices get the version requirements from component recipes.</p> <p>IoT
     * Greengrass V2 uses semantic version constraints. For more information, see <a
     * href="https://semver.org/">Semantic Versioning</a>.</p>
     */
    inline ComponentCandidate& AddVersionRequirements(const char* key, Aws::String&& value) { m_versionRequirementsHasBeenSet = true; m_versionRequirements.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The version requirements for the component's dependencies. Greengrass core
     * devices get the version requirements from component recipes.</p> <p>IoT
     * Greengrass V2 uses semantic version constraints. For more information, see <a
     * href="https://semver.org/">Semantic Versioning</a>.</p>
     */
    inline ComponentCandidate& AddVersionRequirements(Aws::String&& key, const char* value) { m_versionRequirementsHasBeenSet = true; m_versionRequirements.emplace(std::move(key), value); return *this; }

    /**
     * <p>The version requirements for the component's dependencies. Greengrass core
     * devices get the version requirements from component recipes.</p> <p>IoT
     * Greengrass V2 uses semantic version constraints. For more information, see <a
     * href="https://semver.org/">Semantic Versioning</a>.</p>
     */
    inline ComponentCandidate& AddVersionRequirements(const char* key, const char* value) { m_versionRequirementsHasBeenSet = true; m_versionRequirements.emplace(key, value); return *this; }

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
