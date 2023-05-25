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
    AWS_CODEARTIFACT_API PublishPackageVersionResult();
    AWS_CODEARTIFACT_API PublishPackageVersionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CODEARTIFACT_API PublishPackageVersionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The format of the package version.</p>
     */
    inline const PackageFormat& GetFormat() const{ return m_format; }

    /**
     * <p>The format of the package version.</p>
     */
    inline void SetFormat(const PackageFormat& value) { m_format = value; }

    /**
     * <p>The format of the package version.</p>
     */
    inline void SetFormat(PackageFormat&& value) { m_format = std::move(value); }

    /**
     * <p>The format of the package version.</p>
     */
    inline PublishPackageVersionResult& WithFormat(const PackageFormat& value) { SetFormat(value); return *this;}

    /**
     * <p>The format of the package version.</p>
     */
    inline PublishPackageVersionResult& WithFormat(PackageFormat&& value) { SetFormat(std::move(value)); return *this;}


    /**
     * <p>The namespace of the package version.</p>
     */
    inline const Aws::String& GetNamespace() const{ return m_namespace; }

    /**
     * <p>The namespace of the package version.</p>
     */
    inline void SetNamespace(const Aws::String& value) { m_namespace = value; }

    /**
     * <p>The namespace of the package version.</p>
     */
    inline void SetNamespace(Aws::String&& value) { m_namespace = std::move(value); }

    /**
     * <p>The namespace of the package version.</p>
     */
    inline void SetNamespace(const char* value) { m_namespace.assign(value); }

    /**
     * <p>The namespace of the package version.</p>
     */
    inline PublishPackageVersionResult& WithNamespace(const Aws::String& value) { SetNamespace(value); return *this;}

    /**
     * <p>The namespace of the package version.</p>
     */
    inline PublishPackageVersionResult& WithNamespace(Aws::String&& value) { SetNamespace(std::move(value)); return *this;}

    /**
     * <p>The namespace of the package version.</p>
     */
    inline PublishPackageVersionResult& WithNamespace(const char* value) { SetNamespace(value); return *this;}


    /**
     * <p>The name of the package.</p>
     */
    inline const Aws::String& GetPackage() const{ return m_package; }

    /**
     * <p>The name of the package.</p>
     */
    inline void SetPackage(const Aws::String& value) { m_package = value; }

    /**
     * <p>The name of the package.</p>
     */
    inline void SetPackage(Aws::String&& value) { m_package = std::move(value); }

    /**
     * <p>The name of the package.</p>
     */
    inline void SetPackage(const char* value) { m_package.assign(value); }

    /**
     * <p>The name of the package.</p>
     */
    inline PublishPackageVersionResult& WithPackage(const Aws::String& value) { SetPackage(value); return *this;}

    /**
     * <p>The name of the package.</p>
     */
    inline PublishPackageVersionResult& WithPackage(Aws::String&& value) { SetPackage(std::move(value)); return *this;}

    /**
     * <p>The name of the package.</p>
     */
    inline PublishPackageVersionResult& WithPackage(const char* value) { SetPackage(value); return *this;}


    /**
     * <p>The version of the package.</p>
     */
    inline const Aws::String& GetVersion() const{ return m_version; }

    /**
     * <p>The version of the package.</p>
     */
    inline void SetVersion(const Aws::String& value) { m_version = value; }

    /**
     * <p>The version of the package.</p>
     */
    inline void SetVersion(Aws::String&& value) { m_version = std::move(value); }

    /**
     * <p>The version of the package.</p>
     */
    inline void SetVersion(const char* value) { m_version.assign(value); }

    /**
     * <p>The version of the package.</p>
     */
    inline PublishPackageVersionResult& WithVersion(const Aws::String& value) { SetVersion(value); return *this;}

    /**
     * <p>The version of the package.</p>
     */
    inline PublishPackageVersionResult& WithVersion(Aws::String&& value) { SetVersion(std::move(value)); return *this;}

    /**
     * <p>The version of the package.</p>
     */
    inline PublishPackageVersionResult& WithVersion(const char* value) { SetVersion(value); return *this;}


    /**
     * <p>The revision of the package version.</p>
     */
    inline const Aws::String& GetVersionRevision() const{ return m_versionRevision; }

    /**
     * <p>The revision of the package version.</p>
     */
    inline void SetVersionRevision(const Aws::String& value) { m_versionRevision = value; }

    /**
     * <p>The revision of the package version.</p>
     */
    inline void SetVersionRevision(Aws::String&& value) { m_versionRevision = std::move(value); }

    /**
     * <p>The revision of the package version.</p>
     */
    inline void SetVersionRevision(const char* value) { m_versionRevision.assign(value); }

    /**
     * <p>The revision of the package version.</p>
     */
    inline PublishPackageVersionResult& WithVersionRevision(const Aws::String& value) { SetVersionRevision(value); return *this;}

    /**
     * <p>The revision of the package version.</p>
     */
    inline PublishPackageVersionResult& WithVersionRevision(Aws::String&& value) { SetVersionRevision(std::move(value)); return *this;}

    /**
     * <p>The revision of the package version.</p>
     */
    inline PublishPackageVersionResult& WithVersionRevision(const char* value) { SetVersionRevision(value); return *this;}


    /**
     * <p>A string that contains the status of the package version. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/codeartifact/latest/ug/packages-overview.html#package-version-status.html#package-version-status">Package
     * version status</a> in the <i>CodeArtifact User Guide</i>.</p>
     */
    inline const PackageVersionStatus& GetStatus() const{ return m_status; }

    /**
     * <p>A string that contains the status of the package version. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/codeartifact/latest/ug/packages-overview.html#package-version-status.html#package-version-status">Package
     * version status</a> in the <i>CodeArtifact User Guide</i>.</p>
     */
    inline void SetStatus(const PackageVersionStatus& value) { m_status = value; }

    /**
     * <p>A string that contains the status of the package version. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/codeartifact/latest/ug/packages-overview.html#package-version-status.html#package-version-status">Package
     * version status</a> in the <i>CodeArtifact User Guide</i>.</p>
     */
    inline void SetStatus(PackageVersionStatus&& value) { m_status = std::move(value); }

    /**
     * <p>A string that contains the status of the package version. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/codeartifact/latest/ug/packages-overview.html#package-version-status.html#package-version-status">Package
     * version status</a> in the <i>CodeArtifact User Guide</i>.</p>
     */
    inline PublishPackageVersionResult& WithStatus(const PackageVersionStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>A string that contains the status of the package version. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/codeartifact/latest/ug/packages-overview.html#package-version-status.html#package-version-status">Package
     * version status</a> in the <i>CodeArtifact User Guide</i>.</p>
     */
    inline PublishPackageVersionResult& WithStatus(PackageVersionStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>An <a
     * href="https://docs.aws.amazon.com/codeartifact/latest/APIReference/API_AssetSummary.html">AssetSummary</a>
     * for the published asset.</p>
     */
    inline const AssetSummary& GetAsset() const{ return m_asset; }

    /**
     * <p>An <a
     * href="https://docs.aws.amazon.com/codeartifact/latest/APIReference/API_AssetSummary.html">AssetSummary</a>
     * for the published asset.</p>
     */
    inline void SetAsset(const AssetSummary& value) { m_asset = value; }

    /**
     * <p>An <a
     * href="https://docs.aws.amazon.com/codeartifact/latest/APIReference/API_AssetSummary.html">AssetSummary</a>
     * for the published asset.</p>
     */
    inline void SetAsset(AssetSummary&& value) { m_asset = std::move(value); }

    /**
     * <p>An <a
     * href="https://docs.aws.amazon.com/codeartifact/latest/APIReference/API_AssetSummary.html">AssetSummary</a>
     * for the published asset.</p>
     */
    inline PublishPackageVersionResult& WithAsset(const AssetSummary& value) { SetAsset(value); return *this;}

    /**
     * <p>An <a
     * href="https://docs.aws.amazon.com/codeartifact/latest/APIReference/API_AssetSummary.html">AssetSummary</a>
     * for the published asset.</p>
     */
    inline PublishPackageVersionResult& WithAsset(AssetSummary&& value) { SetAsset(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline PublishPackageVersionResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline PublishPackageVersionResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline PublishPackageVersionResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    PackageFormat m_format;

    Aws::String m_namespace;

    Aws::String m_package;

    Aws::String m_version;

    Aws::String m_versionRevision;

    PackageVersionStatus m_status;

    AssetSummary m_asset;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace CodeArtifact
} // namespace Aws
