/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codeartifact/CodeArtifact_EXPORTS.h>
#include <aws/codeartifact/model/PackageFormat.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/codeartifact/model/PackageVersionStatus.h>
#include <aws/codeartifact/model/AssetSummary.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace CodeArtifact
{
namespace Model
{
  class PublishPackageVersionResult
  {
  public:
    AWS_CODEARTIFACT_API PublishPackageVersionResult() = default;
    AWS_CODEARTIFACT_API PublishPackageVersionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CODEARTIFACT_API PublishPackageVersionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The format of the package version.</p>
     */
    inline PackageFormat GetFormat() const { return m_format; }
    inline void SetFormat(PackageFormat value) { m_formatHasBeenSet = true; m_format = value; }
    inline PublishPackageVersionResult& WithFormat(PackageFormat value) { SetFormat(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The namespace of the package version.</p>
     */
    inline const Aws::String& GetNamespace() const { return m_namespace; }
    template<typename NamespaceT = Aws::String>
    void SetNamespace(NamespaceT&& value) { m_namespaceHasBeenSet = true; m_namespace = std::forward<NamespaceT>(value); }
    template<typename NamespaceT = Aws::String>
    PublishPackageVersionResult& WithNamespace(NamespaceT&& value) { SetNamespace(std::forward<NamespaceT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the package.</p>
     */
    inline const Aws::String& GetPackage() const { return m_package; }
    template<typename PackageT = Aws::String>
    void SetPackage(PackageT&& value) { m_packageHasBeenSet = true; m_package = std::forward<PackageT>(value); }
    template<typename PackageT = Aws::String>
    PublishPackageVersionResult& WithPackage(PackageT&& value) { SetPackage(std::forward<PackageT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version of the package.</p>
     */
    inline const Aws::String& GetVersion() const { return m_version; }
    template<typename VersionT = Aws::String>
    void SetVersion(VersionT&& value) { m_versionHasBeenSet = true; m_version = std::forward<VersionT>(value); }
    template<typename VersionT = Aws::String>
    PublishPackageVersionResult& WithVersion(VersionT&& value) { SetVersion(std::forward<VersionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The revision of the package version.</p>
     */
    inline const Aws::String& GetVersionRevision() const { return m_versionRevision; }
    template<typename VersionRevisionT = Aws::String>
    void SetVersionRevision(VersionRevisionT&& value) { m_versionRevisionHasBeenSet = true; m_versionRevision = std::forward<VersionRevisionT>(value); }
    template<typename VersionRevisionT = Aws::String>
    PublishPackageVersionResult& WithVersionRevision(VersionRevisionT&& value) { SetVersionRevision(std::forward<VersionRevisionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A string that contains the status of the package version. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/codeartifact/latest/ug/packages-overview.html#package-version-status.html#package-version-status">Package
     * version status</a> in the <i>CodeArtifact User Guide</i>.</p>
     */
    inline PackageVersionStatus GetStatus() const { return m_status; }
    inline void SetStatus(PackageVersionStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline PublishPackageVersionResult& WithStatus(PackageVersionStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An <a
     * href="https://docs.aws.amazon.com/codeartifact/latest/APIReference/API_AssetSummary.html">AssetSummary</a>
     * for the published asset.</p>
     */
    inline const AssetSummary& GetAsset() const { return m_asset; }
    template<typename AssetT = AssetSummary>
    void SetAsset(AssetT&& value) { m_assetHasBeenSet = true; m_asset = std::forward<AssetT>(value); }
    template<typename AssetT = AssetSummary>
    PublishPackageVersionResult& WithAsset(AssetT&& value) { SetAsset(std::forward<AssetT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    PublishPackageVersionResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    PackageFormat m_format{PackageFormat::NOT_SET};
    bool m_formatHasBeenSet = false;

    Aws::String m_namespace;
    bool m_namespaceHasBeenSet = false;

    Aws::String m_package;
    bool m_packageHasBeenSet = false;

    Aws::String m_version;
    bool m_versionHasBeenSet = false;

    Aws::String m_versionRevision;
    bool m_versionRevisionHasBeenSet = false;

    PackageVersionStatus m_status{PackageVersionStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    AssetSummary m_asset;
    bool m_assetHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeArtifact
} // namespace Aws
