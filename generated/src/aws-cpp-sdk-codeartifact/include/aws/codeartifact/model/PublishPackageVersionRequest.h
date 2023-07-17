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
    AWS_CODEARTIFACT_API PublishPackageVersionRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "PublishPackageVersion"; }

    AWS_CODEARTIFACT_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;

    AWS_CODEARTIFACT_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The name of the domain that contains the repository that contains the package
     * version to publish.</p>
     */
    inline const Aws::String& GetDomain() const{ return m_domain; }

    /**
     * <p>The name of the domain that contains the repository that contains the package
     * version to publish.</p>
     */
    inline bool DomainHasBeenSet() const { return m_domainHasBeenSet; }

    /**
     * <p>The name of the domain that contains the repository that contains the package
     * version to publish.</p>
     */
    inline void SetDomain(const Aws::String& value) { m_domainHasBeenSet = true; m_domain = value; }

    /**
     * <p>The name of the domain that contains the repository that contains the package
     * version to publish.</p>
     */
    inline void SetDomain(Aws::String&& value) { m_domainHasBeenSet = true; m_domain = std::move(value); }

    /**
     * <p>The name of the domain that contains the repository that contains the package
     * version to publish.</p>
     */
    inline void SetDomain(const char* value) { m_domainHasBeenSet = true; m_domain.assign(value); }

    /**
     * <p>The name of the domain that contains the repository that contains the package
     * version to publish.</p>
     */
    inline PublishPackageVersionRequest& WithDomain(const Aws::String& value) { SetDomain(value); return *this;}

    /**
     * <p>The name of the domain that contains the repository that contains the package
     * version to publish.</p>
     */
    inline PublishPackageVersionRequest& WithDomain(Aws::String&& value) { SetDomain(std::move(value)); return *this;}

    /**
     * <p>The name of the domain that contains the repository that contains the package
     * version to publish.</p>
     */
    inline PublishPackageVersionRequest& WithDomain(const char* value) { SetDomain(value); return *this;}


    /**
     * <p>The 12-digit account number of the AWS account that owns the domain. It does
     * not include dashes or spaces.</p>
     */
    inline const Aws::String& GetDomainOwner() const{ return m_domainOwner; }

    /**
     * <p>The 12-digit account number of the AWS account that owns the domain. It does
     * not include dashes or spaces.</p>
     */
    inline bool DomainOwnerHasBeenSet() const { return m_domainOwnerHasBeenSet; }

    /**
     * <p>The 12-digit account number of the AWS account that owns the domain. It does
     * not include dashes or spaces.</p>
     */
    inline void SetDomainOwner(const Aws::String& value) { m_domainOwnerHasBeenSet = true; m_domainOwner = value; }

    /**
     * <p>The 12-digit account number of the AWS account that owns the domain. It does
     * not include dashes or spaces.</p>
     */
    inline void SetDomainOwner(Aws::String&& value) { m_domainOwnerHasBeenSet = true; m_domainOwner = std::move(value); }

    /**
     * <p>The 12-digit account number of the AWS account that owns the domain. It does
     * not include dashes or spaces.</p>
     */
    inline void SetDomainOwner(const char* value) { m_domainOwnerHasBeenSet = true; m_domainOwner.assign(value); }

    /**
     * <p>The 12-digit account number of the AWS account that owns the domain. It does
     * not include dashes or spaces.</p>
     */
    inline PublishPackageVersionRequest& WithDomainOwner(const Aws::String& value) { SetDomainOwner(value); return *this;}

    /**
     * <p>The 12-digit account number of the AWS account that owns the domain. It does
     * not include dashes or spaces.</p>
     */
    inline PublishPackageVersionRequest& WithDomainOwner(Aws::String&& value) { SetDomainOwner(std::move(value)); return *this;}

    /**
     * <p>The 12-digit account number of the AWS account that owns the domain. It does
     * not include dashes or spaces.</p>
     */
    inline PublishPackageVersionRequest& WithDomainOwner(const char* value) { SetDomainOwner(value); return *this;}


    /**
     * <p>The name of the repository that the package version will be published to.</p>
     */
    inline const Aws::String& GetRepository() const{ return m_repository; }

    /**
     * <p>The name of the repository that the package version will be published to.</p>
     */
    inline bool RepositoryHasBeenSet() const { return m_repositoryHasBeenSet; }

    /**
     * <p>The name of the repository that the package version will be published to.</p>
     */
    inline void SetRepository(const Aws::String& value) { m_repositoryHasBeenSet = true; m_repository = value; }

    /**
     * <p>The name of the repository that the package version will be published to.</p>
     */
    inline void SetRepository(Aws::String&& value) { m_repositoryHasBeenSet = true; m_repository = std::move(value); }

    /**
     * <p>The name of the repository that the package version will be published to.</p>
     */
    inline void SetRepository(const char* value) { m_repositoryHasBeenSet = true; m_repository.assign(value); }

    /**
     * <p>The name of the repository that the package version will be published to.</p>
     */
    inline PublishPackageVersionRequest& WithRepository(const Aws::String& value) { SetRepository(value); return *this;}

    /**
     * <p>The name of the repository that the package version will be published to.</p>
     */
    inline PublishPackageVersionRequest& WithRepository(Aws::String&& value) { SetRepository(std::move(value)); return *this;}

    /**
     * <p>The name of the repository that the package version will be published to.</p>
     */
    inline PublishPackageVersionRequest& WithRepository(const char* value) { SetRepository(value); return *this;}


    /**
     * <p>A format that specifies the type of the package version with the requested
     * asset file.</p> <p>The only supported value is <code>generic</code>.</p>
     */
    inline const PackageFormat& GetFormat() const{ return m_format; }

    /**
     * <p>A format that specifies the type of the package version with the requested
     * asset file.</p> <p>The only supported value is <code>generic</code>.</p>
     */
    inline bool FormatHasBeenSet() const { return m_formatHasBeenSet; }

    /**
     * <p>A format that specifies the type of the package version with the requested
     * asset file.</p> <p>The only supported value is <code>generic</code>.</p>
     */
    inline void SetFormat(const PackageFormat& value) { m_formatHasBeenSet = true; m_format = value; }

    /**
     * <p>A format that specifies the type of the package version with the requested
     * asset file.</p> <p>The only supported value is <code>generic</code>.</p>
     */
    inline void SetFormat(PackageFormat&& value) { m_formatHasBeenSet = true; m_format = std::move(value); }

    /**
     * <p>A format that specifies the type of the package version with the requested
     * asset file.</p> <p>The only supported value is <code>generic</code>.</p>
     */
    inline PublishPackageVersionRequest& WithFormat(const PackageFormat& value) { SetFormat(value); return *this;}

    /**
     * <p>A format that specifies the type of the package version with the requested
     * asset file.</p> <p>The only supported value is <code>generic</code>.</p>
     */
    inline PublishPackageVersionRequest& WithFormat(PackageFormat&& value) { SetFormat(std::move(value)); return *this;}


    /**
     * <p>The namespace of the package version to publish.</p>
     */
    inline const Aws::String& GetNamespace() const{ return m_namespace; }

    /**
     * <p>The namespace of the package version to publish.</p>
     */
    inline bool NamespaceHasBeenSet() const { return m_namespaceHasBeenSet; }

    /**
     * <p>The namespace of the package version to publish.</p>
     */
    inline void SetNamespace(const Aws::String& value) { m_namespaceHasBeenSet = true; m_namespace = value; }

    /**
     * <p>The namespace of the package version to publish.</p>
     */
    inline void SetNamespace(Aws::String&& value) { m_namespaceHasBeenSet = true; m_namespace = std::move(value); }

    /**
     * <p>The namespace of the package version to publish.</p>
     */
    inline void SetNamespace(const char* value) { m_namespaceHasBeenSet = true; m_namespace.assign(value); }

    /**
     * <p>The namespace of the package version to publish.</p>
     */
    inline PublishPackageVersionRequest& WithNamespace(const Aws::String& value) { SetNamespace(value); return *this;}

    /**
     * <p>The namespace of the package version to publish.</p>
     */
    inline PublishPackageVersionRequest& WithNamespace(Aws::String&& value) { SetNamespace(std::move(value)); return *this;}

    /**
     * <p>The namespace of the package version to publish.</p>
     */
    inline PublishPackageVersionRequest& WithNamespace(const char* value) { SetNamespace(value); return *this;}


    /**
     * <p>The name of the package version to publish.</p>
     */
    inline const Aws::String& GetPackage() const{ return m_package; }

    /**
     * <p>The name of the package version to publish.</p>
     */
    inline bool PackageHasBeenSet() const { return m_packageHasBeenSet; }

    /**
     * <p>The name of the package version to publish.</p>
     */
    inline void SetPackage(const Aws::String& value) { m_packageHasBeenSet = true; m_package = value; }

    /**
     * <p>The name of the package version to publish.</p>
     */
    inline void SetPackage(Aws::String&& value) { m_packageHasBeenSet = true; m_package = std::move(value); }

    /**
     * <p>The name of the package version to publish.</p>
     */
    inline void SetPackage(const char* value) { m_packageHasBeenSet = true; m_package.assign(value); }

    /**
     * <p>The name of the package version to publish.</p>
     */
    inline PublishPackageVersionRequest& WithPackage(const Aws::String& value) { SetPackage(value); return *this;}

    /**
     * <p>The name of the package version to publish.</p>
     */
    inline PublishPackageVersionRequest& WithPackage(Aws::String&& value) { SetPackage(std::move(value)); return *this;}

    /**
     * <p>The name of the package version to publish.</p>
     */
    inline PublishPackageVersionRequest& WithPackage(const char* value) { SetPackage(value); return *this;}


    /**
     * <p>The package version to publish (for example, <code>3.5.2</code>).</p>
     */
    inline const Aws::String& GetPackageVersion() const{ return m_packageVersion; }

    /**
     * <p>The package version to publish (for example, <code>3.5.2</code>).</p>
     */
    inline bool PackageVersionHasBeenSet() const { return m_packageVersionHasBeenSet; }

    /**
     * <p>The package version to publish (for example, <code>3.5.2</code>).</p>
     */
    inline void SetPackageVersion(const Aws::String& value) { m_packageVersionHasBeenSet = true; m_packageVersion = value; }

    /**
     * <p>The package version to publish (for example, <code>3.5.2</code>).</p>
     */
    inline void SetPackageVersion(Aws::String&& value) { m_packageVersionHasBeenSet = true; m_packageVersion = std::move(value); }

    /**
     * <p>The package version to publish (for example, <code>3.5.2</code>).</p>
     */
    inline void SetPackageVersion(const char* value) { m_packageVersionHasBeenSet = true; m_packageVersion.assign(value); }

    /**
     * <p>The package version to publish (for example, <code>3.5.2</code>).</p>
     */
    inline PublishPackageVersionRequest& WithPackageVersion(const Aws::String& value) { SetPackageVersion(value); return *this;}

    /**
     * <p>The package version to publish (for example, <code>3.5.2</code>).</p>
     */
    inline PublishPackageVersionRequest& WithPackageVersion(Aws::String&& value) { SetPackageVersion(std::move(value)); return *this;}

    /**
     * <p>The package version to publish (for example, <code>3.5.2</code>).</p>
     */
    inline PublishPackageVersionRequest& WithPackageVersion(const char* value) { SetPackageVersion(value); return *this;}


    /**
     * <p>The name of the asset to publish. Asset names can include Unicode letters and
     * numbers, and the following special characters: <code>~ ! @ ^ &amp; ( ) - ` _ + [
     * ] { } ; , . `</code> </p>
     */
    inline const Aws::String& GetAssetName() const{ return m_assetName; }

    /**
     * <p>The name of the asset to publish. Asset names can include Unicode letters and
     * numbers, and the following special characters: <code>~ ! @ ^ &amp; ( ) - ` _ + [
     * ] { } ; , . `</code> </p>
     */
    inline bool AssetNameHasBeenSet() const { return m_assetNameHasBeenSet; }

    /**
     * <p>The name of the asset to publish. Asset names can include Unicode letters and
     * numbers, and the following special characters: <code>~ ! @ ^ &amp; ( ) - ` _ + [
     * ] { } ; , . `</code> </p>
     */
    inline void SetAssetName(const Aws::String& value) { m_assetNameHasBeenSet = true; m_assetName = value; }

    /**
     * <p>The name of the asset to publish. Asset names can include Unicode letters and
     * numbers, and the following special characters: <code>~ ! @ ^ &amp; ( ) - ` _ + [
     * ] { } ; , . `</code> </p>
     */
    inline void SetAssetName(Aws::String&& value) { m_assetNameHasBeenSet = true; m_assetName = std::move(value); }

    /**
     * <p>The name of the asset to publish. Asset names can include Unicode letters and
     * numbers, and the following special characters: <code>~ ! @ ^ &amp; ( ) - ` _ + [
     * ] { } ; , . `</code> </p>
     */
    inline void SetAssetName(const char* value) { m_assetNameHasBeenSet = true; m_assetName.assign(value); }

    /**
     * <p>The name of the asset to publish. Asset names can include Unicode letters and
     * numbers, and the following special characters: <code>~ ! @ ^ &amp; ( ) - ` _ + [
     * ] { } ; , . `</code> </p>
     */
    inline PublishPackageVersionRequest& WithAssetName(const Aws::String& value) { SetAssetName(value); return *this;}

    /**
     * <p>The name of the asset to publish. Asset names can include Unicode letters and
     * numbers, and the following special characters: <code>~ ! @ ^ &amp; ( ) - ` _ + [
     * ] { } ; , . `</code> </p>
     */
    inline PublishPackageVersionRequest& WithAssetName(Aws::String&& value) { SetAssetName(std::move(value)); return *this;}

    /**
     * <p>The name of the asset to publish. Asset names can include Unicode letters and
     * numbers, and the following special characters: <code>~ ! @ ^ &amp; ( ) - ` _ + [
     * ] { } ; , . `</code> </p>
     */
    inline PublishPackageVersionRequest& WithAssetName(const char* value) { SetAssetName(value); return *this;}


    /**
     * <p>The SHA256 hash of the <code>assetContent</code> to publish. This value must
     * be calculated by the caller and provided with the request (see <a
     * href="https://docs.aws.amazon.com/codeartifact/latest/ug/using-generic.html#publishing-generic-packages">Publishing
     * a generic package</a> in the <i>CodeArtifact User Guide</i>).</p> <p>This value
     * is used as an integrity check to verify that the <code>assetContent</code> has
     * not changed after it was originally sent.</p>
     */
    inline const Aws::String& GetAssetSHA256() const{ return m_assetSHA256; }

    /**
     * <p>The SHA256 hash of the <code>assetContent</code> to publish. This value must
     * be calculated by the caller and provided with the request (see <a
     * href="https://docs.aws.amazon.com/codeartifact/latest/ug/using-generic.html#publishing-generic-packages">Publishing
     * a generic package</a> in the <i>CodeArtifact User Guide</i>).</p> <p>This value
     * is used as an integrity check to verify that the <code>assetContent</code> has
     * not changed after it was originally sent.</p>
     */
    inline bool AssetSHA256HasBeenSet() const { return m_assetSHA256HasBeenSet; }

    /**
     * <p>The SHA256 hash of the <code>assetContent</code> to publish. This value must
     * be calculated by the caller and provided with the request (see <a
     * href="https://docs.aws.amazon.com/codeartifact/latest/ug/using-generic.html#publishing-generic-packages">Publishing
     * a generic package</a> in the <i>CodeArtifact User Guide</i>).</p> <p>This value
     * is used as an integrity check to verify that the <code>assetContent</code> has
     * not changed after it was originally sent.</p>
     */
    inline void SetAssetSHA256(const Aws::String& value) { m_assetSHA256HasBeenSet = true; m_assetSHA256 = value; }

    /**
     * <p>The SHA256 hash of the <code>assetContent</code> to publish. This value must
     * be calculated by the caller and provided with the request (see <a
     * href="https://docs.aws.amazon.com/codeartifact/latest/ug/using-generic.html#publishing-generic-packages">Publishing
     * a generic package</a> in the <i>CodeArtifact User Guide</i>).</p> <p>This value
     * is used as an integrity check to verify that the <code>assetContent</code> has
     * not changed after it was originally sent.</p>
     */
    inline void SetAssetSHA256(Aws::String&& value) { m_assetSHA256HasBeenSet = true; m_assetSHA256 = std::move(value); }

    /**
     * <p>The SHA256 hash of the <code>assetContent</code> to publish. This value must
     * be calculated by the caller and provided with the request (see <a
     * href="https://docs.aws.amazon.com/codeartifact/latest/ug/using-generic.html#publishing-generic-packages">Publishing
     * a generic package</a> in the <i>CodeArtifact User Guide</i>).</p> <p>This value
     * is used as an integrity check to verify that the <code>assetContent</code> has
     * not changed after it was originally sent.</p>
     */
    inline void SetAssetSHA256(const char* value) { m_assetSHA256HasBeenSet = true; m_assetSHA256.assign(value); }

    /**
     * <p>The SHA256 hash of the <code>assetContent</code> to publish. This value must
     * be calculated by the caller and provided with the request (see <a
     * href="https://docs.aws.amazon.com/codeartifact/latest/ug/using-generic.html#publishing-generic-packages">Publishing
     * a generic package</a> in the <i>CodeArtifact User Guide</i>).</p> <p>This value
     * is used as an integrity check to verify that the <code>assetContent</code> has
     * not changed after it was originally sent.</p>
     */
    inline PublishPackageVersionRequest& WithAssetSHA256(const Aws::String& value) { SetAssetSHA256(value); return *this;}

    /**
     * <p>The SHA256 hash of the <code>assetContent</code> to publish. This value must
     * be calculated by the caller and provided with the request (see <a
     * href="https://docs.aws.amazon.com/codeartifact/latest/ug/using-generic.html#publishing-generic-packages">Publishing
     * a generic package</a> in the <i>CodeArtifact User Guide</i>).</p> <p>This value
     * is used as an integrity check to verify that the <code>assetContent</code> has
     * not changed after it was originally sent.</p>
     */
    inline PublishPackageVersionRequest& WithAssetSHA256(Aws::String&& value) { SetAssetSHA256(std::move(value)); return *this;}

    /**
     * <p>The SHA256 hash of the <code>assetContent</code> to publish. This value must
     * be calculated by the caller and provided with the request (see <a
     * href="https://docs.aws.amazon.com/codeartifact/latest/ug/using-generic.html#publishing-generic-packages">Publishing
     * a generic package</a> in the <i>CodeArtifact User Guide</i>).</p> <p>This value
     * is used as an integrity check to verify that the <code>assetContent</code> has
     * not changed after it was originally sent.</p>
     */
    inline PublishPackageVersionRequest& WithAssetSHA256(const char* value) { SetAssetSHA256(value); return *this;}


    /**
     * <p>Specifies whether the package version should remain in the
     * <code>unfinished</code> state. If omitted, the package version status will be
     * set to <code>Published</code> (see <a
     * href="https://docs.aws.amazon.com/codeartifact/latest/ug/packages-overview.html#package-version-status">Package
     * version status</a> in the <i>CodeArtifact User Guide</i>).</p> <p>Valid values:
     * <code>unfinished</code> </p>
     */
    inline bool GetUnfinished() const{ return m_unfinished; }

    /**
     * <p>Specifies whether the package version should remain in the
     * <code>unfinished</code> state. If omitted, the package version status will be
     * set to <code>Published</code> (see <a
     * href="https://docs.aws.amazon.com/codeartifact/latest/ug/packages-overview.html#package-version-status">Package
     * version status</a> in the <i>CodeArtifact User Guide</i>).</p> <p>Valid values:
     * <code>unfinished</code> </p>
     */
    inline bool UnfinishedHasBeenSet() const { return m_unfinishedHasBeenSet; }

    /**
     * <p>Specifies whether the package version should remain in the
     * <code>unfinished</code> state. If omitted, the package version status will be
     * set to <code>Published</code> (see <a
     * href="https://docs.aws.amazon.com/codeartifact/latest/ug/packages-overview.html#package-version-status">Package
     * version status</a> in the <i>CodeArtifact User Guide</i>).</p> <p>Valid values:
     * <code>unfinished</code> </p>
     */
    inline void SetUnfinished(bool value) { m_unfinishedHasBeenSet = true; m_unfinished = value; }

    /**
     * <p>Specifies whether the package version should remain in the
     * <code>unfinished</code> state. If omitted, the package version status will be
     * set to <code>Published</code> (see <a
     * href="https://docs.aws.amazon.com/codeartifact/latest/ug/packages-overview.html#package-version-status">Package
     * version status</a> in the <i>CodeArtifact User Guide</i>).</p> <p>Valid values:
     * <code>unfinished</code> </p>
     */
    inline PublishPackageVersionRequest& WithUnfinished(bool value) { SetUnfinished(value); return *this;}

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


    Aws::String m_assetName;
    bool m_assetNameHasBeenSet = false;

    Aws::String m_assetSHA256;
    bool m_assetSHA256HasBeenSet = false;

    bool m_unfinished;
    bool m_unfinishedHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeArtifact
} // namespace Aws
