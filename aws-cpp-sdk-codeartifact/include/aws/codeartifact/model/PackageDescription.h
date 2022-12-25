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
   * <p>Details about a package.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codeartifact-2018-09-22/PackageDescription">AWS
   * API Reference</a></p>
   */
  class PackageDescription
  {
  public:
    AWS_CODEARTIFACT_API PackageDescription();
    AWS_CODEARTIFACT_API PackageDescription(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEARTIFACT_API PackageDescription& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEARTIFACT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A format that specifies the type of the package.</p>
     */
    inline const PackageFormat& GetFormat() const{ return m_format; }

    /**
     * <p>A format that specifies the type of the package.</p>
     */
    inline bool FormatHasBeenSet() const { return m_formatHasBeenSet; }

    /**
     * <p>A format that specifies the type of the package.</p>
     */
    inline void SetFormat(const PackageFormat& value) { m_formatHasBeenSet = true; m_format = value; }

    /**
     * <p>A format that specifies the type of the package.</p>
     */
    inline void SetFormat(PackageFormat&& value) { m_formatHasBeenSet = true; m_format = std::move(value); }

    /**
     * <p>A format that specifies the type of the package.</p>
     */
    inline PackageDescription& WithFormat(const PackageFormat& value) { SetFormat(value); return *this;}

    /**
     * <p>A format that specifies the type of the package.</p>
     */
    inline PackageDescription& WithFormat(PackageFormat&& value) { SetFormat(std::move(value)); return *this;}


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
    inline PackageDescription& WithNamespace(const Aws::String& value) { SetNamespace(value); return *this;}

    /**
     * <p>The namespace of the package. The package component that specifies its
     * namespace depends on its type. For example:</p> <ul> <li> <p> The namespace of a
     * Maven package is its <code>groupId</code>. </p> </li> <li> <p> The namespace of
     * an npm package is its <code>scope</code>. </p> </li> <li> <p> Python and NuGet
     * packages do not contain a corresponding component, packages of those formats do
     * not have a namespace. </p> </li> </ul>
     */
    inline PackageDescription& WithNamespace(Aws::String&& value) { SetNamespace(std::move(value)); return *this;}

    /**
     * <p>The namespace of the package. The package component that specifies its
     * namespace depends on its type. For example:</p> <ul> <li> <p> The namespace of a
     * Maven package is its <code>groupId</code>. </p> </li> <li> <p> The namespace of
     * an npm package is its <code>scope</code>. </p> </li> <li> <p> Python and NuGet
     * packages do not contain a corresponding component, packages of those formats do
     * not have a namespace. </p> </li> </ul>
     */
    inline PackageDescription& WithNamespace(const char* value) { SetNamespace(value); return *this;}


    /**
     * <p>The name of the package.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the package.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the package.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the package.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the package.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the package.</p>
     */
    inline PackageDescription& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the package.</p>
     */
    inline PackageDescription& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the package.</p>
     */
    inline PackageDescription& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The package origin configuration for the package.</p>
     */
    inline const PackageOriginConfiguration& GetOriginConfiguration() const{ return m_originConfiguration; }

    /**
     * <p>The package origin configuration for the package.</p>
     */
    inline bool OriginConfigurationHasBeenSet() const { return m_originConfigurationHasBeenSet; }

    /**
     * <p>The package origin configuration for the package.</p>
     */
    inline void SetOriginConfiguration(const PackageOriginConfiguration& value) { m_originConfigurationHasBeenSet = true; m_originConfiguration = value; }

    /**
     * <p>The package origin configuration for the package.</p>
     */
    inline void SetOriginConfiguration(PackageOriginConfiguration&& value) { m_originConfigurationHasBeenSet = true; m_originConfiguration = std::move(value); }

    /**
     * <p>The package origin configuration for the package.</p>
     */
    inline PackageDescription& WithOriginConfiguration(const PackageOriginConfiguration& value) { SetOriginConfiguration(value); return *this;}

    /**
     * <p>The package origin configuration for the package.</p>
     */
    inline PackageDescription& WithOriginConfiguration(PackageOriginConfiguration&& value) { SetOriginConfiguration(std::move(value)); return *this;}

  private:

    PackageFormat m_format;
    bool m_formatHasBeenSet = false;

    Aws::String m_namespace;
    bool m_namespaceHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    PackageOriginConfiguration m_originConfiguration;
    bool m_originConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeArtifact
} // namespace Aws
