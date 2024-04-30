/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codeartifact/CodeArtifact_EXPORTS.h>
#include <aws/codeartifact/CodeArtifactRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/codeartifact/model/PackageFormat.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace CodeArtifact
{
namespace Model
{

  /**
   */
  class GetAssociatedPackageGroupRequest : public CodeArtifactRequest
  {
  public:
    AWS_CODEARTIFACT_API GetAssociatedPackageGroupRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetAssociatedPackageGroup"; }

    AWS_CODEARTIFACT_API Aws::String SerializePayload() const override;

    AWS_CODEARTIFACT_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    /**
     * <p> The name of the domain that contains the package from which to get the
     * associated package group. </p>
     */
    inline const Aws::String& GetDomain() const{ return m_domain; }

    /**
     * <p> The name of the domain that contains the package from which to get the
     * associated package group. </p>
     */
    inline bool DomainHasBeenSet() const { return m_domainHasBeenSet; }

    /**
     * <p> The name of the domain that contains the package from which to get the
     * associated package group. </p>
     */
    inline void SetDomain(const Aws::String& value) { m_domainHasBeenSet = true; m_domain = value; }

    /**
     * <p> The name of the domain that contains the package from which to get the
     * associated package group. </p>
     */
    inline void SetDomain(Aws::String&& value) { m_domainHasBeenSet = true; m_domain = std::move(value); }

    /**
     * <p> The name of the domain that contains the package from which to get the
     * associated package group. </p>
     */
    inline void SetDomain(const char* value) { m_domainHasBeenSet = true; m_domain.assign(value); }

    /**
     * <p> The name of the domain that contains the package from which to get the
     * associated package group. </p>
     */
    inline GetAssociatedPackageGroupRequest& WithDomain(const Aws::String& value) { SetDomain(value); return *this;}

    /**
     * <p> The name of the domain that contains the package from which to get the
     * associated package group. </p>
     */
    inline GetAssociatedPackageGroupRequest& WithDomain(Aws::String&& value) { SetDomain(std::move(value)); return *this;}

    /**
     * <p> The name of the domain that contains the package from which to get the
     * associated package group. </p>
     */
    inline GetAssociatedPackageGroupRequest& WithDomain(const char* value) { SetDomain(value); return *this;}


    /**
     * <p> The 12-digit account number of the Amazon Web Services account that owns the
     * domain. It does not include dashes or spaces. </p>
     */
    inline const Aws::String& GetDomainOwner() const{ return m_domainOwner; }

    /**
     * <p> The 12-digit account number of the Amazon Web Services account that owns the
     * domain. It does not include dashes or spaces. </p>
     */
    inline bool DomainOwnerHasBeenSet() const { return m_domainOwnerHasBeenSet; }

    /**
     * <p> The 12-digit account number of the Amazon Web Services account that owns the
     * domain. It does not include dashes or spaces. </p>
     */
    inline void SetDomainOwner(const Aws::String& value) { m_domainOwnerHasBeenSet = true; m_domainOwner = value; }

    /**
     * <p> The 12-digit account number of the Amazon Web Services account that owns the
     * domain. It does not include dashes or spaces. </p>
     */
    inline void SetDomainOwner(Aws::String&& value) { m_domainOwnerHasBeenSet = true; m_domainOwner = std::move(value); }

    /**
     * <p> The 12-digit account number of the Amazon Web Services account that owns the
     * domain. It does not include dashes or spaces. </p>
     */
    inline void SetDomainOwner(const char* value) { m_domainOwnerHasBeenSet = true; m_domainOwner.assign(value); }

    /**
     * <p> The 12-digit account number of the Amazon Web Services account that owns the
     * domain. It does not include dashes or spaces. </p>
     */
    inline GetAssociatedPackageGroupRequest& WithDomainOwner(const Aws::String& value) { SetDomainOwner(value); return *this;}

    /**
     * <p> The 12-digit account number of the Amazon Web Services account that owns the
     * domain. It does not include dashes or spaces. </p>
     */
    inline GetAssociatedPackageGroupRequest& WithDomainOwner(Aws::String&& value) { SetDomainOwner(std::move(value)); return *this;}

    /**
     * <p> The 12-digit account number of the Amazon Web Services account that owns the
     * domain. It does not include dashes or spaces. </p>
     */
    inline GetAssociatedPackageGroupRequest& WithDomainOwner(const char* value) { SetDomainOwner(value); return *this;}


    /**
     * <p> The format of the package from which to get the associated package group.
     * </p>
     */
    inline const PackageFormat& GetFormat() const{ return m_format; }

    /**
     * <p> The format of the package from which to get the associated package group.
     * </p>
     */
    inline bool FormatHasBeenSet() const { return m_formatHasBeenSet; }

    /**
     * <p> The format of the package from which to get the associated package group.
     * </p>
     */
    inline void SetFormat(const PackageFormat& value) { m_formatHasBeenSet = true; m_format = value; }

    /**
     * <p> The format of the package from which to get the associated package group.
     * </p>
     */
    inline void SetFormat(PackageFormat&& value) { m_formatHasBeenSet = true; m_format = std::move(value); }

    /**
     * <p> The format of the package from which to get the associated package group.
     * </p>
     */
    inline GetAssociatedPackageGroupRequest& WithFormat(const PackageFormat& value) { SetFormat(value); return *this;}

    /**
     * <p> The format of the package from which to get the associated package group.
     * </p>
     */
    inline GetAssociatedPackageGroupRequest& WithFormat(PackageFormat&& value) { SetFormat(std::move(value)); return *this;}


    /**
     * <p>The namespace of the package from which to get the associated package group.
     * The package component that specifies its namespace depends on its type. For
     * example:</p>  <p>The namespace is required when getting associated package
     * groups from packages of the following formats:</p> <ul> <li> <p>Maven</p> </li>
     * <li> <p>Swift</p> </li> <li> <p>generic</p> </li> </ul>  <ul> <li> <p>
     * The namespace of a Maven package version is its <code>groupId</code>. </p> </li>
     * <li> <p> The namespace of an npm or Swift package version is its
     * <code>scope</code>. </p> </li> <li> <p>The namespace of a generic package is its
     * <code>namespace</code>.</p> </li> <li> <p> Python, NuGet, and Ruby package
     * versions do not contain a corresponding component, package versions of those
     * formats do not have a namespace. </p> </li> </ul>
     */
    inline const Aws::String& GetNamespace() const{ return m_namespace; }

    /**
     * <p>The namespace of the package from which to get the associated package group.
     * The package component that specifies its namespace depends on its type. For
     * example:</p>  <p>The namespace is required when getting associated package
     * groups from packages of the following formats:</p> <ul> <li> <p>Maven</p> </li>
     * <li> <p>Swift</p> </li> <li> <p>generic</p> </li> </ul>  <ul> <li> <p>
     * The namespace of a Maven package version is its <code>groupId</code>. </p> </li>
     * <li> <p> The namespace of an npm or Swift package version is its
     * <code>scope</code>. </p> </li> <li> <p>The namespace of a generic package is its
     * <code>namespace</code>.</p> </li> <li> <p> Python, NuGet, and Ruby package
     * versions do not contain a corresponding component, package versions of those
     * formats do not have a namespace. </p> </li> </ul>
     */
    inline bool NamespaceHasBeenSet() const { return m_namespaceHasBeenSet; }

    /**
     * <p>The namespace of the package from which to get the associated package group.
     * The package component that specifies its namespace depends on its type. For
     * example:</p>  <p>The namespace is required when getting associated package
     * groups from packages of the following formats:</p> <ul> <li> <p>Maven</p> </li>
     * <li> <p>Swift</p> </li> <li> <p>generic</p> </li> </ul>  <ul> <li> <p>
     * The namespace of a Maven package version is its <code>groupId</code>. </p> </li>
     * <li> <p> The namespace of an npm or Swift package version is its
     * <code>scope</code>. </p> </li> <li> <p>The namespace of a generic package is its
     * <code>namespace</code>.</p> </li> <li> <p> Python, NuGet, and Ruby package
     * versions do not contain a corresponding component, package versions of those
     * formats do not have a namespace. </p> </li> </ul>
     */
    inline void SetNamespace(const Aws::String& value) { m_namespaceHasBeenSet = true; m_namespace = value; }

    /**
     * <p>The namespace of the package from which to get the associated package group.
     * The package component that specifies its namespace depends on its type. For
     * example:</p>  <p>The namespace is required when getting associated package
     * groups from packages of the following formats:</p> <ul> <li> <p>Maven</p> </li>
     * <li> <p>Swift</p> </li> <li> <p>generic</p> </li> </ul>  <ul> <li> <p>
     * The namespace of a Maven package version is its <code>groupId</code>. </p> </li>
     * <li> <p> The namespace of an npm or Swift package version is its
     * <code>scope</code>. </p> </li> <li> <p>The namespace of a generic package is its
     * <code>namespace</code>.</p> </li> <li> <p> Python, NuGet, and Ruby package
     * versions do not contain a corresponding component, package versions of those
     * formats do not have a namespace. </p> </li> </ul>
     */
    inline void SetNamespace(Aws::String&& value) { m_namespaceHasBeenSet = true; m_namespace = std::move(value); }

    /**
     * <p>The namespace of the package from which to get the associated package group.
     * The package component that specifies its namespace depends on its type. For
     * example:</p>  <p>The namespace is required when getting associated package
     * groups from packages of the following formats:</p> <ul> <li> <p>Maven</p> </li>
     * <li> <p>Swift</p> </li> <li> <p>generic</p> </li> </ul>  <ul> <li> <p>
     * The namespace of a Maven package version is its <code>groupId</code>. </p> </li>
     * <li> <p> The namespace of an npm or Swift package version is its
     * <code>scope</code>. </p> </li> <li> <p>The namespace of a generic package is its
     * <code>namespace</code>.</p> </li> <li> <p> Python, NuGet, and Ruby package
     * versions do not contain a corresponding component, package versions of those
     * formats do not have a namespace. </p> </li> </ul>
     */
    inline void SetNamespace(const char* value) { m_namespaceHasBeenSet = true; m_namespace.assign(value); }

    /**
     * <p>The namespace of the package from which to get the associated package group.
     * The package component that specifies its namespace depends on its type. For
     * example:</p>  <p>The namespace is required when getting associated package
     * groups from packages of the following formats:</p> <ul> <li> <p>Maven</p> </li>
     * <li> <p>Swift</p> </li> <li> <p>generic</p> </li> </ul>  <ul> <li> <p>
     * The namespace of a Maven package version is its <code>groupId</code>. </p> </li>
     * <li> <p> The namespace of an npm or Swift package version is its
     * <code>scope</code>. </p> </li> <li> <p>The namespace of a generic package is its
     * <code>namespace</code>.</p> </li> <li> <p> Python, NuGet, and Ruby package
     * versions do not contain a corresponding component, package versions of those
     * formats do not have a namespace. </p> </li> </ul>
     */
    inline GetAssociatedPackageGroupRequest& WithNamespace(const Aws::String& value) { SetNamespace(value); return *this;}

    /**
     * <p>The namespace of the package from which to get the associated package group.
     * The package component that specifies its namespace depends on its type. For
     * example:</p>  <p>The namespace is required when getting associated package
     * groups from packages of the following formats:</p> <ul> <li> <p>Maven</p> </li>
     * <li> <p>Swift</p> </li> <li> <p>generic</p> </li> </ul>  <ul> <li> <p>
     * The namespace of a Maven package version is its <code>groupId</code>. </p> </li>
     * <li> <p> The namespace of an npm or Swift package version is its
     * <code>scope</code>. </p> </li> <li> <p>The namespace of a generic package is its
     * <code>namespace</code>.</p> </li> <li> <p> Python, NuGet, and Ruby package
     * versions do not contain a corresponding component, package versions of those
     * formats do not have a namespace. </p> </li> </ul>
     */
    inline GetAssociatedPackageGroupRequest& WithNamespace(Aws::String&& value) { SetNamespace(std::move(value)); return *this;}

    /**
     * <p>The namespace of the package from which to get the associated package group.
     * The package component that specifies its namespace depends on its type. For
     * example:</p>  <p>The namespace is required when getting associated package
     * groups from packages of the following formats:</p> <ul> <li> <p>Maven</p> </li>
     * <li> <p>Swift</p> </li> <li> <p>generic</p> </li> </ul>  <ul> <li> <p>
     * The namespace of a Maven package version is its <code>groupId</code>. </p> </li>
     * <li> <p> The namespace of an npm or Swift package version is its
     * <code>scope</code>. </p> </li> <li> <p>The namespace of a generic package is its
     * <code>namespace</code>.</p> </li> <li> <p> Python, NuGet, and Ruby package
     * versions do not contain a corresponding component, package versions of those
     * formats do not have a namespace. </p> </li> </ul>
     */
    inline GetAssociatedPackageGroupRequest& WithNamespace(const char* value) { SetNamespace(value); return *this;}


    /**
     * <p> The package from which to get the associated package group. </p>
     */
    inline const Aws::String& GetPackage() const{ return m_package; }

    /**
     * <p> The package from which to get the associated package group. </p>
     */
    inline bool PackageHasBeenSet() const { return m_packageHasBeenSet; }

    /**
     * <p> The package from which to get the associated package group. </p>
     */
    inline void SetPackage(const Aws::String& value) { m_packageHasBeenSet = true; m_package = value; }

    /**
     * <p> The package from which to get the associated package group. </p>
     */
    inline void SetPackage(Aws::String&& value) { m_packageHasBeenSet = true; m_package = std::move(value); }

    /**
     * <p> The package from which to get the associated package group. </p>
     */
    inline void SetPackage(const char* value) { m_packageHasBeenSet = true; m_package.assign(value); }

    /**
     * <p> The package from which to get the associated package group. </p>
     */
    inline GetAssociatedPackageGroupRequest& WithPackage(const Aws::String& value) { SetPackage(value); return *this;}

    /**
     * <p> The package from which to get the associated package group. </p>
     */
    inline GetAssociatedPackageGroupRequest& WithPackage(Aws::String&& value) { SetPackage(std::move(value)); return *this;}

    /**
     * <p> The package from which to get the associated package group. </p>
     */
    inline GetAssociatedPackageGroupRequest& WithPackage(const char* value) { SetPackage(value); return *this;}

  private:

    Aws::String m_domain;
    bool m_domainHasBeenSet = false;

    Aws::String m_domainOwner;
    bool m_domainOwnerHasBeenSet = false;

    PackageFormat m_format;
    bool m_formatHasBeenSet = false;

    Aws::String m_namespace;
    bool m_namespaceHasBeenSet = false;

    Aws::String m_package;
    bool m_packageHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeArtifact
} // namespace Aws
