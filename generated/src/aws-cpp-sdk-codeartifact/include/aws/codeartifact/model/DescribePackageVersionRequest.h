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
  class DescribePackageVersionRequest : public CodeArtifactRequest
  {
  public:
    AWS_CODEARTIFACT_API DescribePackageVersionRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribePackageVersion"; }

    AWS_CODEARTIFACT_API Aws::String SerializePayload() const override;

    AWS_CODEARTIFACT_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    ///@{
    /**
     * <p> The name of the domain that contains the repository that contains the
     * package version. </p>
     */
    inline const Aws::String& GetDomain() const { return m_domain; }
    inline bool DomainHasBeenSet() const { return m_domainHasBeenSet; }
    template<typename DomainT = Aws::String>
    void SetDomain(DomainT&& value) { m_domainHasBeenSet = true; m_domain = std::forward<DomainT>(value); }
    template<typename DomainT = Aws::String>
    DescribePackageVersionRequest& WithDomain(DomainT&& value) { SetDomain(std::forward<DomainT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The 12-digit account number of the Amazon Web Services account that owns the
     * domain. It does not include dashes or spaces. </p>
     */
    inline const Aws::String& GetDomainOwner() const { return m_domainOwner; }
    inline bool DomainOwnerHasBeenSet() const { return m_domainOwnerHasBeenSet; }
    template<typename DomainOwnerT = Aws::String>
    void SetDomainOwner(DomainOwnerT&& value) { m_domainOwnerHasBeenSet = true; m_domainOwner = std::forward<DomainOwnerT>(value); }
    template<typename DomainOwnerT = Aws::String>
    DescribePackageVersionRequest& WithDomainOwner(DomainOwnerT&& value) { SetDomainOwner(std::forward<DomainOwnerT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The name of the repository that contains the package version. </p>
     */
    inline const Aws::String& GetRepository() const { return m_repository; }
    inline bool RepositoryHasBeenSet() const { return m_repositoryHasBeenSet; }
    template<typename RepositoryT = Aws::String>
    void SetRepository(RepositoryT&& value) { m_repositoryHasBeenSet = true; m_repository = std::forward<RepositoryT>(value); }
    template<typename RepositoryT = Aws::String>
    DescribePackageVersionRequest& WithRepository(RepositoryT&& value) { SetRepository(std::forward<RepositoryT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> A format that specifies the type of the requested package version. </p>
     */
    inline PackageFormat GetFormat() const { return m_format; }
    inline bool FormatHasBeenSet() const { return m_formatHasBeenSet; }
    inline void SetFormat(PackageFormat value) { m_formatHasBeenSet = true; m_format = value; }
    inline DescribePackageVersionRequest& WithFormat(PackageFormat value) { SetFormat(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The namespace of the requested package version. The package component that
     * specifies its namespace depends on its type. For example:</p>  <p>The
     * namespace is required when requesting package versions of the following
     * formats:</p> <ul> <li> <p>Maven</p> </li> <li> <p>Swift</p> </li> <li>
     * <p>generic</p> </li> </ul>  <ul> <li> <p> The namespace of a Maven
     * package version is its <code>groupId</code>. </p> </li> <li> <p> The namespace
     * of an npm or Swift package version is its <code>scope</code>. </p> </li> <li>
     * <p>The namespace of a generic package is its <code>namespace</code>.</p> </li>
     * <li> <p> Python, NuGet, Ruby, and Cargo package versions do not contain a
     * corresponding component, package versions of those formats do not have a
     * namespace. </p> </li> </ul>
     */
    inline const Aws::String& GetNamespace() const { return m_namespace; }
    inline bool NamespaceHasBeenSet() const { return m_namespaceHasBeenSet; }
    template<typename NamespaceT = Aws::String>
    void SetNamespace(NamespaceT&& value) { m_namespaceHasBeenSet = true; m_namespace = std::forward<NamespaceT>(value); }
    template<typename NamespaceT = Aws::String>
    DescribePackageVersionRequest& WithNamespace(NamespaceT&& value) { SetNamespace(std::forward<NamespaceT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The name of the requested package version. </p>
     */
    inline const Aws::String& GetPackage() const { return m_package; }
    inline bool PackageHasBeenSet() const { return m_packageHasBeenSet; }
    template<typename PackageT = Aws::String>
    void SetPackage(PackageT&& value) { m_packageHasBeenSet = true; m_package = std::forward<PackageT>(value); }
    template<typename PackageT = Aws::String>
    DescribePackageVersionRequest& WithPackage(PackageT&& value) { SetPackage(std::forward<PackageT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> A string that contains the package version (for example,
     * <code>3.5.2</code>). </p>
     */
    inline const Aws::String& GetPackageVersion() const { return m_packageVersion; }
    inline bool PackageVersionHasBeenSet() const { return m_packageVersionHasBeenSet; }
    template<typename PackageVersionT = Aws::String>
    void SetPackageVersion(PackageVersionT&& value) { m_packageVersionHasBeenSet = true; m_packageVersion = std::forward<PackageVersionT>(value); }
    template<typename PackageVersionT = Aws::String>
    DescribePackageVersionRequest& WithPackageVersion(PackageVersionT&& value) { SetPackageVersion(std::forward<PackageVersionT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_domain;
    bool m_domainHasBeenSet = false;

    Aws::String m_domainOwner;
    bool m_domainOwnerHasBeenSet = false;

    Aws::String m_repository;
    bool m_repositoryHasBeenSet = false;

    PackageFormat m_format{PackageFormat::NOT_SET};
    bool m_formatHasBeenSet = false;

    Aws::String m_namespace;
    bool m_namespaceHasBeenSet = false;

    Aws::String m_package;
    bool m_packageHasBeenSet = false;

    Aws::String m_packageVersion;
    bool m_packageVersionHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeArtifact
} // namespace Aws
