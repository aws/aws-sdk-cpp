/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codeartifact/CodeArtifact_EXPORTS.h>
#include <aws/codeartifact/model/PackageFormat.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/codeartifact/model/PackageOriginConfiguration.h>
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
   * <p> Details about a package, including its format, namespace, and name. The <a
   * href="https://docs.aws.amazon.com/codeartifact/latest/APIReference/API_ListPackages.html">ListPackages</a>
   * operation returns a list of <code>PackageSummary</code> objects. </p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codeartifact-2018-09-22/PackageSummary">AWS
   * API Reference</a></p>
   */
  class PackageSummary
  {
  public:
    AWS_CODEARTIFACT_API PackageSummary();
    AWS_CODEARTIFACT_API PackageSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEARTIFACT_API PackageSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEARTIFACT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p> The format of the package. </p>
     */
    inline const PackageFormat& GetFormat() const{ return m_format; }

    /**
     * <p> The format of the package. </p>
     */
    inline bool FormatHasBeenSet() const { return m_formatHasBeenSet; }

    /**
     * <p> The format of the package. </p>
     */
    inline void SetFormat(const PackageFormat& value) { m_formatHasBeenSet = true; m_format = value; }

    /**
     * <p> The format of the package. </p>
     */
    inline void SetFormat(PackageFormat&& value) { m_formatHasBeenSet = true; m_format = std::move(value); }

    /**
     * <p> The format of the package. </p>
     */
    inline PackageSummary& WithFormat(const PackageFormat& value) { SetFormat(value); return *this;}

    /**
     * <p> The format of the package. </p>
     */
    inline PackageSummary& WithFormat(PackageFormat&& value) { SetFormat(std::move(value)); return *this;}


    /**
     * <p>The namespace of the package. The package component that specifies its
     * namespace depends on its type. For example:</p> <ul> <li> <p> The namespace of a
     * Maven package is its <code>groupId</code>. </p> </li> <li> <p> The namespace of
     * an npm package is its <code>scope</code>. </p> </li> <li> <p> Python and NuGet
     * packages do not contain a corresponding component, packages of those formats do
     * not have a namespace. </p> </li> </ul>
     */
    inline const Aws::String& GetNamespace() const{ return m_namespace; }

    /**
     * <p>The namespace of the package. The package component that specifies its
     * namespace depends on its type. For example:</p> <ul> <li> <p> The namespace of a
     * Maven package is its <code>groupId</code>. </p> </li> <li> <p> The namespace of
     * an npm package is its <code>scope</code>. </p> </li> <li> <p> Python and NuGet
     * packages do not contain a corresponding component, packages of those formats do
     * not have a namespace. </p> </li> </ul>
     */
    inline bool NamespaceHasBeenSet() const { return m_namespaceHasBeenSet; }

    /**
     * <p>The namespace of the package. The package component that specifies its
     * namespace depends on its type. For example:</p> <ul> <li> <p> The namespace of a
     * Maven package is its <code>groupId</code>. </p> </li> <li> <p> The namespace of
     * an npm package is its <code>scope</code>. </p> </li> <li> <p> Python and NuGet
     * packages do not contain a corresponding component, packages of those formats do
     * not have a namespace. </p> </li> </ul>
     */
    inline void SetNamespace(const Aws::String& value) { m_namespaceHasBeenSet = true; m_namespace = value; }

    /**
     * <p>The namespace of the package. The package component that specifies its
     * namespace depends on its type. For example:</p> <ul> <li> <p> The namespace of a
     * Maven package is its <code>groupId</code>. </p> </li> <li> <p> The namespace of
     * an npm package is its <code>scope</code>. </p> </li> <li> <p> Python and NuGet
     * packages do not contain a corresponding component, packages of those formats do
     * not have a namespace. </p> </li> </ul>
     */
    inline void SetNamespace(Aws::String&& value) { m_namespaceHasBeenSet = true; m_namespace = std::move(value); }

    /**
     * <p>The namespace of the package. The package component that specifies its
     * namespace depends on its type. For example:</p> <ul> <li> <p> The namespace of a
     * Maven package is its <code>groupId</code>. </p> </li> <li> <p> The namespace of
     * an npm package is its <code>scope</code>. </p> </li> <li> <p> Python and NuGet
     * packages do not contain a corresponding component, packages of those formats do
     * not have a namespace. </p> </li> </ul>
     */
    inline void SetNamespace(const char* value) { m_namespaceHasBeenSet = true; m_namespace.assign(value); }

    /**
     * <p>The namespace of the package. The package component that specifies its
     * namespace depends on its type. For example:</p> <ul> <li> <p> The namespace of a
     * Maven package is its <code>groupId</code>. </p> </li> <li> <p> The namespace of
     * an npm package is its <code>scope</code>. </p> </li> <li> <p> Python and NuGet
     * packages do not contain a corresponding component, packages of those formats do
     * not have a namespace. </p> </li> </ul>
     */
    inline PackageSummary& WithNamespace(const Aws::String& value) { SetNamespace(value); return *this;}

    /**
     * <p>The namespace of the package. The package component that specifies its
     * namespace depends on its type. For example:</p> <ul> <li> <p> The namespace of a
     * Maven package is its <code>groupId</code>. </p> </li> <li> <p> The namespace of
     * an npm package is its <code>scope</code>. </p> </li> <li> <p> Python and NuGet
     * packages do not contain a corresponding component, packages of those formats do
     * not have a namespace. </p> </li> </ul>
     */
    inline PackageSummary& WithNamespace(Aws::String&& value) { SetNamespace(std::move(value)); return *this;}

    /**
     * <p>The namespace of the package. The package component that specifies its
     * namespace depends on its type. For example:</p> <ul> <li> <p> The namespace of a
     * Maven package is its <code>groupId</code>. </p> </li> <li> <p> The namespace of
     * an npm package is its <code>scope</code>. </p> </li> <li> <p> Python and NuGet
     * packages do not contain a corresponding component, packages of those formats do
     * not have a namespace. </p> </li> </ul>
     */
    inline PackageSummary& WithNamespace(const char* value) { SetNamespace(value); return *this;}


    /**
     * <p> The name of the package. </p>
     */
    inline const Aws::String& GetPackage() const{ return m_package; }

    /**
     * <p> The name of the package. </p>
     */
    inline bool PackageHasBeenSet() const { return m_packageHasBeenSet; }

    /**
     * <p> The name of the package. </p>
     */
    inline void SetPackage(const Aws::String& value) { m_packageHasBeenSet = true; m_package = value; }

    /**
     * <p> The name of the package. </p>
     */
    inline void SetPackage(Aws::String&& value) { m_packageHasBeenSet = true; m_package = std::move(value); }

    /**
     * <p> The name of the package. </p>
     */
    inline void SetPackage(const char* value) { m_packageHasBeenSet = true; m_package.assign(value); }

    /**
     * <p> The name of the package. </p>
     */
    inline PackageSummary& WithPackage(const Aws::String& value) { SetPackage(value); return *this;}

    /**
     * <p> The name of the package. </p>
     */
    inline PackageSummary& WithPackage(Aws::String&& value) { SetPackage(std::move(value)); return *this;}

    /**
     * <p> The name of the package. </p>
     */
    inline PackageSummary& WithPackage(const char* value) { SetPackage(value); return *this;}


    /**
     * <p>A <a
     * href="https://docs.aws.amazon.com/codeartifact/latest/APIReference/API_PackageOriginConfiguration.html">PackageOriginConfiguration</a>
     * object that contains a <a
     * href="https://docs.aws.amazon.com/codeartifact/latest/APIReference/API_PackageOriginRestrictions.html">PackageOriginRestrictions</a>
     * object that contains information about the upstream and publish package origin
     * restrictions.</p>
     */
    inline const PackageOriginConfiguration& GetOriginConfiguration() const{ return m_originConfiguration; }

    /**
     * <p>A <a
     * href="https://docs.aws.amazon.com/codeartifact/latest/APIReference/API_PackageOriginConfiguration.html">PackageOriginConfiguration</a>
     * object that contains a <a
     * href="https://docs.aws.amazon.com/codeartifact/latest/APIReference/API_PackageOriginRestrictions.html">PackageOriginRestrictions</a>
     * object that contains information about the upstream and publish package origin
     * restrictions.</p>
     */
    inline bool OriginConfigurationHasBeenSet() const { return m_originConfigurationHasBeenSet; }

    /**
     * <p>A <a
     * href="https://docs.aws.amazon.com/codeartifact/latest/APIReference/API_PackageOriginConfiguration.html">PackageOriginConfiguration</a>
     * object that contains a <a
     * href="https://docs.aws.amazon.com/codeartifact/latest/APIReference/API_PackageOriginRestrictions.html">PackageOriginRestrictions</a>
     * object that contains information about the upstream and publish package origin
     * restrictions.</p>
     */
    inline void SetOriginConfiguration(const PackageOriginConfiguration& value) { m_originConfigurationHasBeenSet = true; m_originConfiguration = value; }

    /**
     * <p>A <a
     * href="https://docs.aws.amazon.com/codeartifact/latest/APIReference/API_PackageOriginConfiguration.html">PackageOriginConfiguration</a>
     * object that contains a <a
     * href="https://docs.aws.amazon.com/codeartifact/latest/APIReference/API_PackageOriginRestrictions.html">PackageOriginRestrictions</a>
     * object that contains information about the upstream and publish package origin
     * restrictions.</p>
     */
    inline void SetOriginConfiguration(PackageOriginConfiguration&& value) { m_originConfigurationHasBeenSet = true; m_originConfiguration = std::move(value); }

    /**
     * <p>A <a
     * href="https://docs.aws.amazon.com/codeartifact/latest/APIReference/API_PackageOriginConfiguration.html">PackageOriginConfiguration</a>
     * object that contains a <a
     * href="https://docs.aws.amazon.com/codeartifact/latest/APIReference/API_PackageOriginRestrictions.html">PackageOriginRestrictions</a>
     * object that contains information about the upstream and publish package origin
     * restrictions.</p>
     */
    inline PackageSummary& WithOriginConfiguration(const PackageOriginConfiguration& value) { SetOriginConfiguration(value); return *this;}

    /**
     * <p>A <a
     * href="https://docs.aws.amazon.com/codeartifact/latest/APIReference/API_PackageOriginConfiguration.html">PackageOriginConfiguration</a>
     * object that contains a <a
     * href="https://docs.aws.amazon.com/codeartifact/latest/APIReference/API_PackageOriginRestrictions.html">PackageOriginRestrictions</a>
     * object that contains information about the upstream and publish package origin
     * restrictions.</p>
     */
    inline PackageSummary& WithOriginConfiguration(PackageOriginConfiguration&& value) { SetOriginConfiguration(std::move(value)); return *this;}

  private:

    PackageFormat m_format;
    bool m_formatHasBeenSet = false;

    Aws::String m_namespace;
    bool m_namespaceHasBeenSet = false;

    Aws::String m_package;
    bool m_packageHasBeenSet = false;

    PackageOriginConfiguration m_originConfiguration;
    bool m_originConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeArtifact
} // namespace Aws
