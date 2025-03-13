/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codeartifact/CodeArtifact_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace CodeArtifact
{
namespace Model
{

  /**
   * <p> Details about a package dependency. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codeartifact-2018-09-22/PackageDependency">AWS
   * API Reference</a></p>
   */
  class PackageDependency
  {
  public:
    AWS_CODEARTIFACT_API PackageDependency() = default;
    AWS_CODEARTIFACT_API PackageDependency(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEARTIFACT_API PackageDependency& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEARTIFACT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The namespace of the package that this package depends on. The package
     * component that specifies its namespace depends on its type. For example:</p>
     * <ul> <li> <p> The namespace of a Maven package version is its
     * <code>groupId</code>. </p> </li> <li> <p> The namespace of an npm or Swift
     * package version is its <code>scope</code>. </p> </li> <li> <p>The namespace of a
     * generic package is its <code>namespace</code>.</p> </li> <li> <p> Python, NuGet,
     * Ruby, and Cargo package versions do not contain a corresponding component,
     * package versions of those formats do not have a namespace. </p> </li> </ul>
     */
    inline const Aws::String& GetNamespace() const { return m_namespace; }
    inline bool NamespaceHasBeenSet() const { return m_namespaceHasBeenSet; }
    template<typename NamespaceT = Aws::String>
    void SetNamespace(NamespaceT&& value) { m_namespaceHasBeenSet = true; m_namespace = std::forward<NamespaceT>(value); }
    template<typename NamespaceT = Aws::String>
    PackageDependency& WithNamespace(NamespaceT&& value) { SetNamespace(std::forward<NamespaceT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The name of the package that this package depends on. </p>
     */
    inline const Aws::String& GetPackage() const { return m_package; }
    inline bool PackageHasBeenSet() const { return m_packageHasBeenSet; }
    template<typename PackageT = Aws::String>
    void SetPackage(PackageT&& value) { m_packageHasBeenSet = true; m_package = std::forward<PackageT>(value); }
    template<typename PackageT = Aws::String>
    PackageDependency& WithPackage(PackageT&& value) { SetPackage(std::forward<PackageT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The type of a package dependency. The possible values depend on the package
     * type.</p> <ul> <li> <p>npm: <code>regular</code>, <code>dev</code>,
     * <code>peer</code>, <code>optional</code> </p> </li> <li> <p>maven:
     * <code>optional</code>, <code>parent</code>, <code>compile</code>,
     * <code>runtime</code>, <code>test</code>, <code>system</code>,
     * <code>provided</code>.</p>  <p>Note that <code>parent</code> is not a
     * regular Maven dependency type; instead this is extracted from the
     * <code>&lt;parent&gt;</code> element if one is defined in the package version's
     * POM file.</p>  </li> <li> <p>nuget: The <code>dependencyType</code> field
     * is never set for NuGet packages.</p> </li> <li> <p>pypi:
     * <code>Requires-Dist</code> </p> </li> </ul>
     */
    inline const Aws::String& GetDependencyType() const { return m_dependencyType; }
    inline bool DependencyTypeHasBeenSet() const { return m_dependencyTypeHasBeenSet; }
    template<typename DependencyTypeT = Aws::String>
    void SetDependencyType(DependencyTypeT&& value) { m_dependencyTypeHasBeenSet = true; m_dependencyType = std::forward<DependencyTypeT>(value); }
    template<typename DependencyTypeT = Aws::String>
    PackageDependency& WithDependencyType(DependencyTypeT&& value) { SetDependencyType(std::forward<DependencyTypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The required version, or version range, of the package that this package
     * depends on. The version format is specific to the package type. For example, the
     * following are possible valid required versions: <code>1.2.3</code>,
     * <code>^2.3.4</code>, or <code>4.x</code>. </p>
     */
    inline const Aws::String& GetVersionRequirement() const { return m_versionRequirement; }
    inline bool VersionRequirementHasBeenSet() const { return m_versionRequirementHasBeenSet; }
    template<typename VersionRequirementT = Aws::String>
    void SetVersionRequirement(VersionRequirementT&& value) { m_versionRequirementHasBeenSet = true; m_versionRequirement = std::forward<VersionRequirementT>(value); }
    template<typename VersionRequirementT = Aws::String>
    PackageDependency& WithVersionRequirement(VersionRequirementT&& value) { SetVersionRequirement(std::forward<VersionRequirementT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_namespace;
    bool m_namespaceHasBeenSet = false;

    Aws::String m_package;
    bool m_packageHasBeenSet = false;

    Aws::String m_dependencyType;
    bool m_dependencyTypeHasBeenSet = false;

    Aws::String m_versionRequirement;
    bool m_versionRequirementHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeArtifact
} // namespace Aws
