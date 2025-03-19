/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codeartifact/CodeArtifact_EXPORTS.h>
#include <aws/codeartifact/CodeArtifactRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/codeartifact/model/PackageFormat.h>
#include <aws/core/utils/Array.h>
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
  class PublishPackageVersionRequest : public StreamingCodeArtifactRequest
  {
  public:
    AWS_CODEARTIFACT_API PublishPackageVersionRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "PublishPackageVersion"; }

    AWS_CODEARTIFACT_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;

    AWS_CODEARTIFACT_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The name of the domain that contains the repository that contains the package
     * version to publish.</p>
     */
    inline const Aws::String& GetDomain() const { return m_domain; }
    inline bool DomainHasBeenSet() const { return m_domainHasBeenSet; }
    template<typename DomainT = Aws::String>
    void SetDomain(DomainT&& value) { m_domainHasBeenSet = true; m_domain = std::forward<DomainT>(value); }
    template<typename DomainT = Aws::String>
    PublishPackageVersionRequest& WithDomain(DomainT&& value) { SetDomain(std::forward<DomainT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The 12-digit account number of the AWS account that owns the domain. It does
     * not include dashes or spaces.</p>
     */
    inline const Aws::String& GetDomainOwner() const { return m_domainOwner; }
    inline bool DomainOwnerHasBeenSet() const { return m_domainOwnerHasBeenSet; }
    template<typename DomainOwnerT = Aws::String>
    void SetDomainOwner(DomainOwnerT&& value) { m_domainOwnerHasBeenSet = true; m_domainOwner = std::forward<DomainOwnerT>(value); }
    template<typename DomainOwnerT = Aws::String>
    PublishPackageVersionRequest& WithDomainOwner(DomainOwnerT&& value) { SetDomainOwner(std::forward<DomainOwnerT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the repository that the package version will be published to.</p>
     */
    inline const Aws::String& GetRepository() const { return m_repository; }
    inline bool RepositoryHasBeenSet() const { return m_repositoryHasBeenSet; }
    template<typename RepositoryT = Aws::String>
    void SetRepository(RepositoryT&& value) { m_repositoryHasBeenSet = true; m_repository = std::forward<RepositoryT>(value); }
    template<typename RepositoryT = Aws::String>
    PublishPackageVersionRequest& WithRepository(RepositoryT&& value) { SetRepository(std::forward<RepositoryT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A format that specifies the type of the package version with the requested
     * asset file.</p> <p>The only supported value is <code>generic</code>.</p>
     */
    inline PackageFormat GetFormat() const { return m_format; }
    inline bool FormatHasBeenSet() const { return m_formatHasBeenSet; }
    inline void SetFormat(PackageFormat value) { m_formatHasBeenSet = true; m_format = value; }
    inline PublishPackageVersionRequest& WithFormat(PackageFormat value) { SetFormat(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The namespace of the package version to publish.</p>
     */
    inline const Aws::String& GetNamespace() const { return m_namespace; }
    inline bool NamespaceHasBeenSet() const { return m_namespaceHasBeenSet; }
    template<typename NamespaceT = Aws::String>
    void SetNamespace(NamespaceT&& value) { m_namespaceHasBeenSet = true; m_namespace = std::forward<NamespaceT>(value); }
    template<typename NamespaceT = Aws::String>
    PublishPackageVersionRequest& WithNamespace(NamespaceT&& value) { SetNamespace(std::forward<NamespaceT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the package version to publish.</p>
     */
    inline const Aws::String& GetPackage() const { return m_package; }
    inline bool PackageHasBeenSet() const { return m_packageHasBeenSet; }
    template<typename PackageT = Aws::String>
    void SetPackage(PackageT&& value) { m_packageHasBeenSet = true; m_package = std::forward<PackageT>(value); }
    template<typename PackageT = Aws::String>
    PublishPackageVersionRequest& WithPackage(PackageT&& value) { SetPackage(std::forward<PackageT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The package version to publish (for example, <code>3.5.2</code>).</p>
     */
    inline const Aws::String& GetPackageVersion() const { return m_packageVersion; }
    inline bool PackageVersionHasBeenSet() const { return m_packageVersionHasBeenSet; }
    template<typename PackageVersionT = Aws::String>
    void SetPackageVersion(PackageVersionT&& value) { m_packageVersionHasBeenSet = true; m_packageVersion = std::forward<PackageVersionT>(value); }
    template<typename PackageVersionT = Aws::String>
    PublishPackageVersionRequest& WithPackageVersion(PackageVersionT&& value) { SetPackageVersion(std::forward<PackageVersionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the asset to publish. Asset names can include Unicode letters and
     * numbers, and the following special characters: <code>~ ! @ ^ &amp; ( ) - ` _ + [
     * ] { } ; , . `</code> </p>
     */
    inline const Aws::String& GetAssetName() const { return m_assetName; }
    inline bool AssetNameHasBeenSet() const { return m_assetNameHasBeenSet; }
    template<typename AssetNameT = Aws::String>
    void SetAssetName(AssetNameT&& value) { m_assetNameHasBeenSet = true; m_assetName = std::forward<AssetNameT>(value); }
    template<typename AssetNameT = Aws::String>
    PublishPackageVersionRequest& WithAssetName(AssetNameT&& value) { SetAssetName(std::forward<AssetNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The SHA256 hash of the <code>assetContent</code> to publish. This value must
     * be calculated by the caller and provided with the request (see <a
     * href="https://docs.aws.amazon.com/codeartifact/latest/ug/using-generic.html#publishing-generic-packages">Publishing
     * a generic package</a> in the <i>CodeArtifact User Guide</i>).</p> <p>This value
     * is used as an integrity check to verify that the <code>assetContent</code> has
     * not changed after it was originally sent.</p>
     */
    inline const Aws::String& GetAssetSHA256() const { return m_assetSHA256; }
    inline bool AssetSHA256HasBeenSet() const { return m_assetSHA256HasBeenSet; }
    template<typename AssetSHA256T = Aws::String>
    void SetAssetSHA256(AssetSHA256T&& value) { m_assetSHA256HasBeenSet = true; m_assetSHA256 = std::forward<AssetSHA256T>(value); }
    template<typename AssetSHA256T = Aws::String>
    PublishPackageVersionRequest& WithAssetSHA256(AssetSHA256T&& value) { SetAssetSHA256(std::forward<AssetSHA256T>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether the package version should remain in the
     * <code>unfinished</code> state. If omitted, the package version status will be
     * set to <code>Published</code> (see <a
     * href="https://docs.aws.amazon.com/codeartifact/latest/ug/packages-overview.html#package-version-status">Package
     * version status</a> in the <i>CodeArtifact User Guide</i>).</p> <p>Valid values:
     * <code>unfinished</code> </p>
     */
    inline bool GetUnfinished() const { return m_unfinished; }
    inline bool UnfinishedHasBeenSet() const { return m_unfinishedHasBeenSet; }
    inline void SetUnfinished(bool value) { m_unfinishedHasBeenSet = true; m_unfinished = value; }
    inline PublishPackageVersionRequest& WithUnfinished(bool value) { SetUnfinished(value); return *this;}
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


    Aws::String m_assetName;
    bool m_assetNameHasBeenSet = false;

    Aws::String m_assetSHA256;
    bool m_assetSHA256HasBeenSet = false;

    bool m_unfinished{false};
    bool m_unfinishedHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeArtifact
} // namespace Aws
