/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/greengrassv2/GreengrassV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/greengrassv2/model/ComponentDependencyType.h>
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
   * <p>Contains information about a component dependency for a Lambda function
   * component.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/greengrassv2-2020-11-30/ComponentDependencyRequirement">AWS
   * API Reference</a></p>
   */
  class ComponentDependencyRequirement
  {
  public:
    AWS_GREENGRASSV2_API ComponentDependencyRequirement();
    AWS_GREENGRASSV2_API ComponentDependencyRequirement(Aws::Utils::Json::JsonView jsonValue);
    AWS_GREENGRASSV2_API ComponentDependencyRequirement& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GREENGRASSV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The component version requirement for the component dependency.</p> <p>IoT
     * Greengrass V2 uses semantic version constraints. For more information, see <a
     * href="https://semver.org/">Semantic Versioning</a>.</p>
     */
    inline const Aws::String& GetVersionRequirement() const{ return m_versionRequirement; }

    /**
     * <p>The component version requirement for the component dependency.</p> <p>IoT
     * Greengrass V2 uses semantic version constraints. For more information, see <a
     * href="https://semver.org/">Semantic Versioning</a>.</p>
     */
    inline bool VersionRequirementHasBeenSet() const { return m_versionRequirementHasBeenSet; }

    /**
     * <p>The component version requirement for the component dependency.</p> <p>IoT
     * Greengrass V2 uses semantic version constraints. For more information, see <a
     * href="https://semver.org/">Semantic Versioning</a>.</p>
     */
    inline void SetVersionRequirement(const Aws::String& value) { m_versionRequirementHasBeenSet = true; m_versionRequirement = value; }

    /**
     * <p>The component version requirement for the component dependency.</p> <p>IoT
     * Greengrass V2 uses semantic version constraints. For more information, see <a
     * href="https://semver.org/">Semantic Versioning</a>.</p>
     */
    inline void SetVersionRequirement(Aws::String&& value) { m_versionRequirementHasBeenSet = true; m_versionRequirement = std::move(value); }

    /**
     * <p>The component version requirement for the component dependency.</p> <p>IoT
     * Greengrass V2 uses semantic version constraints. For more information, see <a
     * href="https://semver.org/">Semantic Versioning</a>.</p>
     */
    inline void SetVersionRequirement(const char* value) { m_versionRequirementHasBeenSet = true; m_versionRequirement.assign(value); }

    /**
     * <p>The component version requirement for the component dependency.</p> <p>IoT
     * Greengrass V2 uses semantic version constraints. For more information, see <a
     * href="https://semver.org/">Semantic Versioning</a>.</p>
     */
    inline ComponentDependencyRequirement& WithVersionRequirement(const Aws::String& value) { SetVersionRequirement(value); return *this;}

    /**
     * <p>The component version requirement for the component dependency.</p> <p>IoT
     * Greengrass V2 uses semantic version constraints. For more information, see <a
     * href="https://semver.org/">Semantic Versioning</a>.</p>
     */
    inline ComponentDependencyRequirement& WithVersionRequirement(Aws::String&& value) { SetVersionRequirement(std::move(value)); return *this;}

    /**
     * <p>The component version requirement for the component dependency.</p> <p>IoT
     * Greengrass V2 uses semantic version constraints. For more information, see <a
     * href="https://semver.org/">Semantic Versioning</a>.</p>
     */
    inline ComponentDependencyRequirement& WithVersionRequirement(const char* value) { SetVersionRequirement(value); return *this;}


    /**
     * <p>The type of this dependency. Choose from the following options:</p> <ul> <li>
     * <p> <code>SOFT</code> – The component doesn't restart if the dependency changes
     * state.</p> </li> <li> <p> <code>HARD</code> – The component restarts if the
     * dependency changes state.</p> </li> </ul> <p>Default: <code>HARD</code> </p>
     */
    inline const ComponentDependencyType& GetDependencyType() const{ return m_dependencyType; }

    /**
     * <p>The type of this dependency. Choose from the following options:</p> <ul> <li>
     * <p> <code>SOFT</code> – The component doesn't restart if the dependency changes
     * state.</p> </li> <li> <p> <code>HARD</code> – The component restarts if the
     * dependency changes state.</p> </li> </ul> <p>Default: <code>HARD</code> </p>
     */
    inline bool DependencyTypeHasBeenSet() const { return m_dependencyTypeHasBeenSet; }

    /**
     * <p>The type of this dependency. Choose from the following options:</p> <ul> <li>
     * <p> <code>SOFT</code> – The component doesn't restart if the dependency changes
     * state.</p> </li> <li> <p> <code>HARD</code> – The component restarts if the
     * dependency changes state.</p> </li> </ul> <p>Default: <code>HARD</code> </p>
     */
    inline void SetDependencyType(const ComponentDependencyType& value) { m_dependencyTypeHasBeenSet = true; m_dependencyType = value; }

    /**
     * <p>The type of this dependency. Choose from the following options:</p> <ul> <li>
     * <p> <code>SOFT</code> – The component doesn't restart if the dependency changes
     * state.</p> </li> <li> <p> <code>HARD</code> – The component restarts if the
     * dependency changes state.</p> </li> </ul> <p>Default: <code>HARD</code> </p>
     */
    inline void SetDependencyType(ComponentDependencyType&& value) { m_dependencyTypeHasBeenSet = true; m_dependencyType = std::move(value); }

    /**
     * <p>The type of this dependency. Choose from the following options:</p> <ul> <li>
     * <p> <code>SOFT</code> – The component doesn't restart if the dependency changes
     * state.</p> </li> <li> <p> <code>HARD</code> – The component restarts if the
     * dependency changes state.</p> </li> </ul> <p>Default: <code>HARD</code> </p>
     */
    inline ComponentDependencyRequirement& WithDependencyType(const ComponentDependencyType& value) { SetDependencyType(value); return *this;}

    /**
     * <p>The type of this dependency. Choose from the following options:</p> <ul> <li>
     * <p> <code>SOFT</code> – The component doesn't restart if the dependency changes
     * state.</p> </li> <li> <p> <code>HARD</code> – The component restarts if the
     * dependency changes state.</p> </li> </ul> <p>Default: <code>HARD</code> </p>
     */
    inline ComponentDependencyRequirement& WithDependencyType(ComponentDependencyType&& value) { SetDependencyType(std::move(value)); return *this;}

  private:

    Aws::String m_versionRequirement;
    bool m_versionRequirementHasBeenSet = false;

    ComponentDependencyType m_dependencyType;
    bool m_dependencyTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace GreengrassV2
} // namespace Aws
