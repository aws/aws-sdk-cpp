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
    AWS_CODEARTIFACT_API PackageDependency();
    AWS_CODEARTIFACT_API PackageDependency(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEARTIFACT_API PackageDependency& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEARTIFACT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The namespace of the package that this package depends on. The package
     * component that specifies its namespace depends on its type. For example:</p>
     * <ul> <li> <p> The namespace of a Maven package is its <code>groupId</code>. </p>
     * </li> <li> <p> The namespace of an npm package is its <code>scope</code>. </p>
     * </li> <li> <p> Python and NuGet packages do not contain a corresponding
     * component, packages of those formats do not have a namespace. </p> </li> </ul>
     */
    inline const Aws::String& GetNamespace() const{ return m_namespace; }

    /**
     * <p>The namespace of the package that this package depends on. The package
     * component that specifies its namespace depends on its type. For example:</p>
     * <ul> <li> <p> The namespace of a Maven package is its <code>groupId</code>. </p>
     * </li> <li> <p> The namespace of an npm package is its <code>scope</code>. </p>
     * </li> <li> <p> Python and NuGet packages do not contain a corresponding
     * component, packages of those formats do not have a namespace. </p> </li> </ul>
     */
    inline bool NamespaceHasBeenSet() const { return m_namespaceHasBeenSet; }

    /**
     * <p>The namespace of the package that this package depends on. The package
     * component that specifies its namespace depends on its type. For example:</p>
     * <ul> <li> <p> The namespace of a Maven package is its <code>groupId</code>. </p>
     * </li> <li> <p> The namespace of an npm package is its <code>scope</code>. </p>
     * </li> <li> <p> Python and NuGet packages do not contain a corresponding
     * component, packages of those formats do not have a namespace. </p> </li> </ul>
     */
    inline void SetNamespace(const Aws::String& value) { m_namespaceHasBeenSet = true; m_namespace = value; }

    /**
     * <p>The namespace of the package that this package depends on. The package
     * component that specifies its namespace depends on its type. For example:</p>
     * <ul> <li> <p> The namespace of a Maven package is its <code>groupId</code>. </p>
     * </li> <li> <p> The namespace of an npm package is its <code>scope</code>. </p>
     * </li> <li> <p> Python and NuGet packages do not contain a corresponding
     * component, packages of those formats do not have a namespace. </p> </li> </ul>
     */
    inline void SetNamespace(Aws::String&& value) { m_namespaceHasBeenSet = true; m_namespace = std::move(value); }

    /**
     * <p>The namespace of the package that this package depends on. The package
     * component that specifies its namespace depends on its type. For example:</p>
     * <ul> <li> <p> The namespace of a Maven package is its <code>groupId</code>. </p>
     * </li> <li> <p> The namespace of an npm package is its <code>scope</code>. </p>
     * </li> <li> <p> Python and NuGet packages do not contain a corresponding
     * component, packages of those formats do not have a namespace. </p> </li> </ul>
     */
    inline void SetNamespace(const char* value) { m_namespaceHasBeenSet = true; m_namespace.assign(value); }

    /**
     * <p>The namespace of the package that this package depends on. The package
     * component that specifies its namespace depends on its type. For example:</p>
     * <ul> <li> <p> The namespace of a Maven package is its <code>groupId</code>. </p>
     * </li> <li> <p> The namespace of an npm package is its <code>scope</code>. </p>
     * </li> <li> <p> Python and NuGet packages do not contain a corresponding
     * component, packages of those formats do not have a namespace. </p> </li> </ul>
     */
    inline PackageDependency& WithNamespace(const Aws::String& value) { SetNamespace(value); return *this;}

    /**
     * <p>The namespace of the package that this package depends on. The package
     * component that specifies its namespace depends on its type. For example:</p>
     * <ul> <li> <p> The namespace of a Maven package is its <code>groupId</code>. </p>
     * </li> <li> <p> The namespace of an npm package is its <code>scope</code>. </p>
     * </li> <li> <p> Python and NuGet packages do not contain a corresponding
     * component, packages of those formats do not have a namespace. </p> </li> </ul>
     */
    inline PackageDependency& WithNamespace(Aws::String&& value) { SetNamespace(std::move(value)); return *this;}

    /**
     * <p>The namespace of the package that this package depends on. The package
     * component that specifies its namespace depends on its type. For example:</p>
     * <ul> <li> <p> The namespace of a Maven package is its <code>groupId</code>. </p>
     * </li> <li> <p> The namespace of an npm package is its <code>scope</code>. </p>
     * </li> <li> <p> Python and NuGet packages do not contain a corresponding
     * component, packages of those formats do not have a namespace. </p> </li> </ul>
     */
    inline PackageDependency& WithNamespace(const char* value) { SetNamespace(value); return *this;}


    /**
     * <p> The name of the package that this package depends on. </p>
     */
    inline const Aws::String& GetPackage() const{ return m_package; }

    /**
     * <p> The name of the package that this package depends on. </p>
     */
    inline bool PackageHasBeenSet() const { return m_packageHasBeenSet; }

    /**
     * <p> The name of the package that this package depends on. </p>
     */
    inline void SetPackage(const Aws::String& value) { m_packageHasBeenSet = true; m_package = value; }

    /**
     * <p> The name of the package that this package depends on. </p>
     */
    inline void SetPackage(Aws::String&& value) { m_packageHasBeenSet = true; m_package = std::move(value); }

    /**
     * <p> The name of the package that this package depends on. </p>
     */
    inline void SetPackage(const char* value) { m_packageHasBeenSet = true; m_package.assign(value); }

    /**
     * <p> The name of the package that this package depends on. </p>
     */
    inline PackageDependency& WithPackage(const Aws::String& value) { SetPackage(value); return *this;}

    /**
     * <p> The name of the package that this package depends on. </p>
     */
    inline PackageDependency& WithPackage(Aws::String&& value) { SetPackage(std::move(value)); return *this;}

    /**
     * <p> The name of the package that this package depends on. </p>
     */
    inline PackageDependency& WithPackage(const char* value) { SetPackage(value); return *this;}


    /**
     * <p> The type of a package dependency. The possible values depend on the package
     * type. Example types are <code>compile</code>, <code>runtime</code>, and
     * <code>test</code> for Maven packages, and <code>dev</code>, <code>prod</code>,
     * and <code>optional</code> for npm packages. </p>
     */
    inline const Aws::String& GetDependencyType() const{ return m_dependencyType; }

    /**
     * <p> The type of a package dependency. The possible values depend on the package
     * type. Example types are <code>compile</code>, <code>runtime</code>, and
     * <code>test</code> for Maven packages, and <code>dev</code>, <code>prod</code>,
     * and <code>optional</code> for npm packages. </p>
     */
    inline bool DependencyTypeHasBeenSet() const { return m_dependencyTypeHasBeenSet; }

    /**
     * <p> The type of a package dependency. The possible values depend on the package
     * type. Example types are <code>compile</code>, <code>runtime</code>, and
     * <code>test</code> for Maven packages, and <code>dev</code>, <code>prod</code>,
     * and <code>optional</code> for npm packages. </p>
     */
    inline void SetDependencyType(const Aws::String& value) { m_dependencyTypeHasBeenSet = true; m_dependencyType = value; }

    /**
     * <p> The type of a package dependency. The possible values depend on the package
     * type. Example types are <code>compile</code>, <code>runtime</code>, and
     * <code>test</code> for Maven packages, and <code>dev</code>, <code>prod</code>,
     * and <code>optional</code> for npm packages. </p>
     */
    inline void SetDependencyType(Aws::String&& value) { m_dependencyTypeHasBeenSet = true; m_dependencyType = std::move(value); }

    /**
     * <p> The type of a package dependency. The possible values depend on the package
     * type. Example types are <code>compile</code>, <code>runtime</code>, and
     * <code>test</code> for Maven packages, and <code>dev</code>, <code>prod</code>,
     * and <code>optional</code> for npm packages. </p>
     */
    inline void SetDependencyType(const char* value) { m_dependencyTypeHasBeenSet = true; m_dependencyType.assign(value); }

    /**
     * <p> The type of a package dependency. The possible values depend on the package
     * type. Example types are <code>compile</code>, <code>runtime</code>, and
     * <code>test</code> for Maven packages, and <code>dev</code>, <code>prod</code>,
     * and <code>optional</code> for npm packages. </p>
     */
    inline PackageDependency& WithDependencyType(const Aws::String& value) { SetDependencyType(value); return *this;}

    /**
     * <p> The type of a package dependency. The possible values depend on the package
     * type. Example types are <code>compile</code>, <code>runtime</code>, and
     * <code>test</code> for Maven packages, and <code>dev</code>, <code>prod</code>,
     * and <code>optional</code> for npm packages. </p>
     */
    inline PackageDependency& WithDependencyType(Aws::String&& value) { SetDependencyType(std::move(value)); return *this;}

    /**
     * <p> The type of a package dependency. The possible values depend on the package
     * type. Example types are <code>compile</code>, <code>runtime</code>, and
     * <code>test</code> for Maven packages, and <code>dev</code>, <code>prod</code>,
     * and <code>optional</code> for npm packages. </p>
     */
    inline PackageDependency& WithDependencyType(const char* value) { SetDependencyType(value); return *this;}


    /**
     * <p> The required version, or version range, of the package that this package
     * depends on. The version format is specific to the package type. For example, the
     * following are possible valid required versions: <code>1.2.3</code>,
     * <code>^2.3.4</code>, or <code>4.x</code>. </p>
     */
    inline const Aws::String& GetVersionRequirement() const{ return m_versionRequirement; }

    /**
     * <p> The required version, or version range, of the package that this package
     * depends on. The version format is specific to the package type. For example, the
     * following are possible valid required versions: <code>1.2.3</code>,
     * <code>^2.3.4</code>, or <code>4.x</code>. </p>
     */
    inline bool VersionRequirementHasBeenSet() const { return m_versionRequirementHasBeenSet; }

    /**
     * <p> The required version, or version range, of the package that this package
     * depends on. The version format is specific to the package type. For example, the
     * following are possible valid required versions: <code>1.2.3</code>,
     * <code>^2.3.4</code>, or <code>4.x</code>. </p>
     */
    inline void SetVersionRequirement(const Aws::String& value) { m_versionRequirementHasBeenSet = true; m_versionRequirement = value; }

    /**
     * <p> The required version, or version range, of the package that this package
     * depends on. The version format is specific to the package type. For example, the
     * following are possible valid required versions: <code>1.2.3</code>,
     * <code>^2.3.4</code>, or <code>4.x</code>. </p>
     */
    inline void SetVersionRequirement(Aws::String&& value) { m_versionRequirementHasBeenSet = true; m_versionRequirement = std::move(value); }

    /**
     * <p> The required version, or version range, of the package that this package
     * depends on. The version format is specific to the package type. For example, the
     * following are possible valid required versions: <code>1.2.3</code>,
     * <code>^2.3.4</code>, or <code>4.x</code>. </p>
     */
    inline void SetVersionRequirement(const char* value) { m_versionRequirementHasBeenSet = true; m_versionRequirement.assign(value); }

    /**
     * <p> The required version, or version range, of the package that this package
     * depends on. The version format is specific to the package type. For example, the
     * following are possible valid required versions: <code>1.2.3</code>,
     * <code>^2.3.4</code>, or <code>4.x</code>. </p>
     */
    inline PackageDependency& WithVersionRequirement(const Aws::String& value) { SetVersionRequirement(value); return *this;}

    /**
     * <p> The required version, or version range, of the package that this package
     * depends on. The version format is specific to the package type. For example, the
     * following are possible valid required versions: <code>1.2.3</code>,
     * <code>^2.3.4</code>, or <code>4.x</code>. </p>
     */
    inline PackageDependency& WithVersionRequirement(Aws::String&& value) { SetVersionRequirement(std::move(value)); return *this;}

    /**
     * <p> The required version, or version range, of the package that this package
     * depends on. The version format is specific to the package type. For example, the
     * following are possible valid required versions: <code>1.2.3</code>,
     * <code>^2.3.4</code>, or <code>4.x</code>. </p>
     */
    inline PackageDependency& WithVersionRequirement(const char* value) { SetVersionRequirement(value); return *this;}

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
