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
  class GetPackageVersionAssetRequest : public CodeArtifactRequest
  {
  public:
    AWS_CODEARTIFACT_API GetPackageVersionAssetRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetPackageVersionAsset"; }

    AWS_CODEARTIFACT_API Aws::String SerializePayload() const override;

    AWS_CODEARTIFACT_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    ///@{
    /**
     * <p> The name of the domain that contains the repository that contains the
     * package version with the requested asset. </p>
     */
    inline const Aws::String& GetDomain() const{ return m_domain; }
    inline bool DomainHasBeenSet() const { return m_domainHasBeenSet; }
    inline void SetDomain(const Aws::String& value) { m_domainHasBeenSet = true; m_domain = value; }
    inline void SetDomain(Aws::String&& value) { m_domainHasBeenSet = true; m_domain = std::move(value); }
    inline void SetDomain(const char* value) { m_domainHasBeenSet = true; m_domain.assign(value); }
    inline GetPackageVersionAssetRequest& WithDomain(const Aws::String& value) { SetDomain(value); return *this;}
    inline GetPackageVersionAssetRequest& WithDomain(Aws::String&& value) { SetDomain(std::move(value)); return *this;}
    inline GetPackageVersionAssetRequest& WithDomain(const char* value) { SetDomain(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The 12-digit account number of the Amazon Web Services account that owns the
     * domain. It does not include dashes or spaces. </p>
     */
    inline const Aws::String& GetDomainOwner() const{ return m_domainOwner; }
    inline bool DomainOwnerHasBeenSet() const { return m_domainOwnerHasBeenSet; }
    inline void SetDomainOwner(const Aws::String& value) { m_domainOwnerHasBeenSet = true; m_domainOwner = value; }
    inline void SetDomainOwner(Aws::String&& value) { m_domainOwnerHasBeenSet = true; m_domainOwner = std::move(value); }
    inline void SetDomainOwner(const char* value) { m_domainOwnerHasBeenSet = true; m_domainOwner.assign(value); }
    inline GetPackageVersionAssetRequest& WithDomainOwner(const Aws::String& value) { SetDomainOwner(value); return *this;}
    inline GetPackageVersionAssetRequest& WithDomainOwner(Aws::String&& value) { SetDomainOwner(std::move(value)); return *this;}
    inline GetPackageVersionAssetRequest& WithDomainOwner(const char* value) { SetDomainOwner(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The repository that contains the package version with the requested asset.
     * </p>
     */
    inline const Aws::String& GetRepository() const{ return m_repository; }
    inline bool RepositoryHasBeenSet() const { return m_repositoryHasBeenSet; }
    inline void SetRepository(const Aws::String& value) { m_repositoryHasBeenSet = true; m_repository = value; }
    inline void SetRepository(Aws::String&& value) { m_repositoryHasBeenSet = true; m_repository = std::move(value); }
    inline void SetRepository(const char* value) { m_repositoryHasBeenSet = true; m_repository.assign(value); }
    inline GetPackageVersionAssetRequest& WithRepository(const Aws::String& value) { SetRepository(value); return *this;}
    inline GetPackageVersionAssetRequest& WithRepository(Aws::String&& value) { SetRepository(std::move(value)); return *this;}
    inline GetPackageVersionAssetRequest& WithRepository(const char* value) { SetRepository(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> A format that specifies the type of the package version with the requested
     * asset file. </p>
     */
    inline const PackageFormat& GetFormat() const{ return m_format; }
    inline bool FormatHasBeenSet() const { return m_formatHasBeenSet; }
    inline void SetFormat(const PackageFormat& value) { m_formatHasBeenSet = true; m_format = value; }
    inline void SetFormat(PackageFormat&& value) { m_formatHasBeenSet = true; m_format = std::move(value); }
    inline GetPackageVersionAssetRequest& WithFormat(const PackageFormat& value) { SetFormat(value); return *this;}
    inline GetPackageVersionAssetRequest& WithFormat(PackageFormat&& value) { SetFormat(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The namespace of the package version with the requested asset file. The
     * package component that specifies its namespace depends on its type. For
     * example:</p>  <p>The namespace is required when requesting assets from
     * package versions of the following formats:</p> <ul> <li> <p>Maven</p> </li> <li>
     * <p>Swift</p> </li> <li> <p>generic</p> </li> </ul>  <ul> <li> <p> The
     * namespace of a Maven package version is its <code>groupId</code>. </p> </li>
     * <li> <p> The namespace of an npm or Swift package version is its
     * <code>scope</code>. </p> </li> <li> <p>The namespace of a generic package is its
     * <code>namespace</code>.</p> </li> <li> <p> Python, NuGet, Ruby, and Cargo
     * package versions do not contain a corresponding component, package versions of
     * those formats do not have a namespace. </p> </li> </ul>
     */
    inline const Aws::String& GetNamespace() const{ return m_namespace; }
    inline bool NamespaceHasBeenSet() const { return m_namespaceHasBeenSet; }
    inline void SetNamespace(const Aws::String& value) { m_namespaceHasBeenSet = true; m_namespace = value; }
    inline void SetNamespace(Aws::String&& value) { m_namespaceHasBeenSet = true; m_namespace = std::move(value); }
    inline void SetNamespace(const char* value) { m_namespaceHasBeenSet = true; m_namespace.assign(value); }
    inline GetPackageVersionAssetRequest& WithNamespace(const Aws::String& value) { SetNamespace(value); return *this;}
    inline GetPackageVersionAssetRequest& WithNamespace(Aws::String&& value) { SetNamespace(std::move(value)); return *this;}
    inline GetPackageVersionAssetRequest& WithNamespace(const char* value) { SetNamespace(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The name of the package that contains the requested asset. </p>
     */
    inline const Aws::String& GetPackage() const{ return m_package; }
    inline bool PackageHasBeenSet() const { return m_packageHasBeenSet; }
    inline void SetPackage(const Aws::String& value) { m_packageHasBeenSet = true; m_package = value; }
    inline void SetPackage(Aws::String&& value) { m_packageHasBeenSet = true; m_package = std::move(value); }
    inline void SetPackage(const char* value) { m_packageHasBeenSet = true; m_package.assign(value); }
    inline GetPackageVersionAssetRequest& WithPackage(const Aws::String& value) { SetPackage(value); return *this;}
    inline GetPackageVersionAssetRequest& WithPackage(Aws::String&& value) { SetPackage(std::move(value)); return *this;}
    inline GetPackageVersionAssetRequest& WithPackage(const char* value) { SetPackage(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> A string that contains the package version (for example,
     * <code>3.5.2</code>). </p>
     */
    inline const Aws::String& GetPackageVersion() const{ return m_packageVersion; }
    inline bool PackageVersionHasBeenSet() const { return m_packageVersionHasBeenSet; }
    inline void SetPackageVersion(const Aws::String& value) { m_packageVersionHasBeenSet = true; m_packageVersion = value; }
    inline void SetPackageVersion(Aws::String&& value) { m_packageVersionHasBeenSet = true; m_packageVersion = std::move(value); }
    inline void SetPackageVersion(const char* value) { m_packageVersionHasBeenSet = true; m_packageVersion.assign(value); }
    inline GetPackageVersionAssetRequest& WithPackageVersion(const Aws::String& value) { SetPackageVersion(value); return *this;}
    inline GetPackageVersionAssetRequest& WithPackageVersion(Aws::String&& value) { SetPackageVersion(std::move(value)); return *this;}
    inline GetPackageVersionAssetRequest& WithPackageVersion(const char* value) { SetPackageVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The name of the requested asset. </p>
     */
    inline const Aws::String& GetAsset() const{ return m_asset; }
    inline bool AssetHasBeenSet() const { return m_assetHasBeenSet; }
    inline void SetAsset(const Aws::String& value) { m_assetHasBeenSet = true; m_asset = value; }
    inline void SetAsset(Aws::String&& value) { m_assetHasBeenSet = true; m_asset = std::move(value); }
    inline void SetAsset(const char* value) { m_assetHasBeenSet = true; m_asset.assign(value); }
    inline GetPackageVersionAssetRequest& WithAsset(const Aws::String& value) { SetAsset(value); return *this;}
    inline GetPackageVersionAssetRequest& WithAsset(Aws::String&& value) { SetAsset(std::move(value)); return *this;}
    inline GetPackageVersionAssetRequest& WithAsset(const char* value) { SetAsset(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The name of the package version revision that contains the requested asset.
     * </p>
     */
    inline const Aws::String& GetPackageVersionRevision() const{ return m_packageVersionRevision; }
    inline bool PackageVersionRevisionHasBeenSet() const { return m_packageVersionRevisionHasBeenSet; }
    inline void SetPackageVersionRevision(const Aws::String& value) { m_packageVersionRevisionHasBeenSet = true; m_packageVersionRevision = value; }
    inline void SetPackageVersionRevision(Aws::String&& value) { m_packageVersionRevisionHasBeenSet = true; m_packageVersionRevision = std::move(value); }
    inline void SetPackageVersionRevision(const char* value) { m_packageVersionRevisionHasBeenSet = true; m_packageVersionRevision.assign(value); }
    inline GetPackageVersionAssetRequest& WithPackageVersionRevision(const Aws::String& value) { SetPackageVersionRevision(value); return *this;}
    inline GetPackageVersionAssetRequest& WithPackageVersionRevision(Aws::String&& value) { SetPackageVersionRevision(std::move(value)); return *this;}
    inline GetPackageVersionAssetRequest& WithPackageVersionRevision(const char* value) { SetPackageVersionRevision(value); return *this;}
    ///@}
  private:

    Aws::String m_domain;
    bool m_domainHasBeenSet = false;

    Aws::String m_domainOwner;
    bool m_domainOwnerHasBeenSet = false;

    Aws::String m_repository;
    bool m_repositoryHasBeenSet = false;

    PackageFormat m_format;
    bool m_formatHasBeenSet = false;

    Aws::String m_namespace;
    bool m_namespaceHasBeenSet = false;

    Aws::String m_package;
    bool m_packageHasBeenSet = false;

    Aws::String m_packageVersion;
    bool m_packageVersionHasBeenSet = false;

    Aws::String m_asset;
    bool m_assetHasBeenSet = false;

    Aws::String m_packageVersionRevision;
    bool m_packageVersionRevisionHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeArtifact
} // namespace Aws
