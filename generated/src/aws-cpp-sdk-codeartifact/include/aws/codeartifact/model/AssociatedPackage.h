/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codeartifact/CodeArtifact_EXPORTS.h>
#include <aws/codeartifact/model/PackageFormat.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/codeartifact/model/PackageGroupAssociationType.h>
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
   * <p> A package associated with a package group. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codeartifact-2018-09-22/AssociatedPackage">AWS
   * API Reference</a></p>
   */
  class AssociatedPackage
  {
  public:
    AWS_CODEARTIFACT_API AssociatedPackage() = default;
    AWS_CODEARTIFACT_API AssociatedPackage(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEARTIFACT_API AssociatedPackage& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEARTIFACT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A format that specifies the type of the associated package.</p>
     */
    inline PackageFormat GetFormat() const { return m_format; }
    inline bool FormatHasBeenSet() const { return m_formatHasBeenSet; }
    inline void SetFormat(PackageFormat value) { m_formatHasBeenSet = true; m_format = value; }
    inline AssociatedPackage& WithFormat(PackageFormat value) { SetFormat(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The namespace of the associated package. The package component that specifies
     * its namespace depends on its type. For example:</p> <ul> <li> <p> The namespace
     * of a Maven package version is its <code>groupId</code>. </p> </li> <li> <p> The
     * namespace of an npm or Swift package version is its <code>scope</code>. </p>
     * </li> <li> <p>The namespace of a generic package is its
     * <code>namespace</code>.</p> </li> <li> <p> Python, NuGet, Ruby, and Cargo
     * package versions do not contain a corresponding component, package versions of
     * those formats do not have a namespace. </p> </li> </ul>
     */
    inline const Aws::String& GetNamespace() const { return m_namespace; }
    inline bool NamespaceHasBeenSet() const { return m_namespaceHasBeenSet; }
    template<typename NamespaceT = Aws::String>
    void SetNamespace(NamespaceT&& value) { m_namespaceHasBeenSet = true; m_namespace = std::forward<NamespaceT>(value); }
    template<typename NamespaceT = Aws::String>
    AssociatedPackage& WithNamespace(NamespaceT&& value) { SetNamespace(std::forward<NamespaceT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The name of the associated package. </p>
     */
    inline const Aws::String& GetPackage() const { return m_package; }
    inline bool PackageHasBeenSet() const { return m_packageHasBeenSet; }
    template<typename PackageT = Aws::String>
    void SetPackage(PackageT&& value) { m_packageHasBeenSet = true; m_package = std::forward<PackageT>(value); }
    template<typename PackageT = Aws::String>
    AssociatedPackage& WithPackage(PackageT&& value) { SetPackage(std::forward<PackageT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Describes the strength of the association between the package and package
     * group. A strong match can be thought of as an exact match, and a weak match can
     * be thought of as a variation match, for example, the package name matches a
     * variation of the package group pattern. For more information about package group
     * pattern matching, including strong and weak matches, see <a
     * href="https://docs.aws.amazon.com/codeartifact/latest/ug/package-group-definition-syntax-matching-behavior.html">Package
     * group definition syntax and matching behavior</a> in the <i>CodeArtifact User
     * Guide</i>.</p>
     */
    inline PackageGroupAssociationType GetAssociationType() const { return m_associationType; }
    inline bool AssociationTypeHasBeenSet() const { return m_associationTypeHasBeenSet; }
    inline void SetAssociationType(PackageGroupAssociationType value) { m_associationTypeHasBeenSet = true; m_associationType = value; }
    inline AssociatedPackage& WithAssociationType(PackageGroupAssociationType value) { SetAssociationType(value); return *this;}
    ///@}
  private:

    PackageFormat m_format{PackageFormat::NOT_SET};
    bool m_formatHasBeenSet = false;

    Aws::String m_namespace;
    bool m_namespaceHasBeenSet = false;

    Aws::String m_package;
    bool m_packageHasBeenSet = false;

    PackageGroupAssociationType m_associationType{PackageGroupAssociationType::NOT_SET};
    bool m_associationTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeArtifact
} // namespace Aws
