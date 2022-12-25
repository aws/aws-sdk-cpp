/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codeartifact/CodeArtifact_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/codeartifact/model/SuccessfulPackageVersionInfo.h>
#include <aws/codeartifact/model/PackageVersionError.h>
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
  class UpdatePackageVersionsStatusResult
  {
  public:
    AWS_CODEARTIFACT_API UpdatePackageVersionsStatusResult();
    AWS_CODEARTIFACT_API UpdatePackageVersionsStatusResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CODEARTIFACT_API UpdatePackageVersionsStatusResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p> A list of <code>PackageVersionError</code> objects, one for each package
     * version with a status that failed to update. </p>
     */
    inline const Aws::Map<Aws::String, SuccessfulPackageVersionInfo>& GetSuccessfulVersions() const{ return m_successfulVersions; }

    /**
     * <p> A list of <code>PackageVersionError</code> objects, one for each package
     * version with a status that failed to update. </p>
     */
    inline void SetSuccessfulVersions(const Aws::Map<Aws::String, SuccessfulPackageVersionInfo>& value) { m_successfulVersions = value; }

    /**
     * <p> A list of <code>PackageVersionError</code> objects, one for each package
     * version with a status that failed to update. </p>
     */
    inline void SetSuccessfulVersions(Aws::Map<Aws::String, SuccessfulPackageVersionInfo>&& value) { m_successfulVersions = std::move(value); }

    /**
     * <p> A list of <code>PackageVersionError</code> objects, one for each package
     * version with a status that failed to update. </p>
     */
    inline UpdatePackageVersionsStatusResult& WithSuccessfulVersions(const Aws::Map<Aws::String, SuccessfulPackageVersionInfo>& value) { SetSuccessfulVersions(value); return *this;}

    /**
     * <p> A list of <code>PackageVersionError</code> objects, one for each package
     * version with a status that failed to update. </p>
     */
    inline UpdatePackageVersionsStatusResult& WithSuccessfulVersions(Aws::Map<Aws::String, SuccessfulPackageVersionInfo>&& value) { SetSuccessfulVersions(std::move(value)); return *this;}

    /**
     * <p> A list of <code>PackageVersionError</code> objects, one for each package
     * version with a status that failed to update. </p>
     */
    inline UpdatePackageVersionsStatusResult& AddSuccessfulVersions(const Aws::String& key, const SuccessfulPackageVersionInfo& value) { m_successfulVersions.emplace(key, value); return *this; }

    /**
     * <p> A list of <code>PackageVersionError</code> objects, one for each package
     * version with a status that failed to update. </p>
     */
    inline UpdatePackageVersionsStatusResult& AddSuccessfulVersions(Aws::String&& key, const SuccessfulPackageVersionInfo& value) { m_successfulVersions.emplace(std::move(key), value); return *this; }

    /**
     * <p> A list of <code>PackageVersionError</code> objects, one for each package
     * version with a status that failed to update. </p>
     */
    inline UpdatePackageVersionsStatusResult& AddSuccessfulVersions(const Aws::String& key, SuccessfulPackageVersionInfo&& value) { m_successfulVersions.emplace(key, std::move(value)); return *this; }

    /**
     * <p> A list of <code>PackageVersionError</code> objects, one for each package
     * version with a status that failed to update. </p>
     */
    inline UpdatePackageVersionsStatusResult& AddSuccessfulVersions(Aws::String&& key, SuccessfulPackageVersionInfo&& value) { m_successfulVersions.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p> A list of <code>PackageVersionError</code> objects, one for each package
     * version with a status that failed to update. </p>
     */
    inline UpdatePackageVersionsStatusResult& AddSuccessfulVersions(const char* key, SuccessfulPackageVersionInfo&& value) { m_successfulVersions.emplace(key, std::move(value)); return *this; }

    /**
     * <p> A list of <code>PackageVersionError</code> objects, one for each package
     * version with a status that failed to update. </p>
     */
    inline UpdatePackageVersionsStatusResult& AddSuccessfulVersions(const char* key, const SuccessfulPackageVersionInfo& value) { m_successfulVersions.emplace(key, value); return *this; }


    /**
     * <p> A list of <code>SuccessfulPackageVersionInfo</code> objects, one for each
     * package version with a status that successfully updated. </p>
     */
    inline const Aws::Map<Aws::String, PackageVersionError>& GetFailedVersions() const{ return m_failedVersions; }

    /**
     * <p> A list of <code>SuccessfulPackageVersionInfo</code> objects, one for each
     * package version with a status that successfully updated. </p>
     */
    inline void SetFailedVersions(const Aws::Map<Aws::String, PackageVersionError>& value) { m_failedVersions = value; }

    /**
     * <p> A list of <code>SuccessfulPackageVersionInfo</code> objects, one for each
     * package version with a status that successfully updated. </p>
     */
    inline void SetFailedVersions(Aws::Map<Aws::String, PackageVersionError>&& value) { m_failedVersions = std::move(value); }

    /**
     * <p> A list of <code>SuccessfulPackageVersionInfo</code> objects, one for each
     * package version with a status that successfully updated. </p>
     */
    inline UpdatePackageVersionsStatusResult& WithFailedVersions(const Aws::Map<Aws::String, PackageVersionError>& value) { SetFailedVersions(value); return *this;}

    /**
     * <p> A list of <code>SuccessfulPackageVersionInfo</code> objects, one for each
     * package version with a status that successfully updated. </p>
     */
    inline UpdatePackageVersionsStatusResult& WithFailedVersions(Aws::Map<Aws::String, PackageVersionError>&& value) { SetFailedVersions(std::move(value)); return *this;}

    /**
     * <p> A list of <code>SuccessfulPackageVersionInfo</code> objects, one for each
     * package version with a status that successfully updated. </p>
     */
    inline UpdatePackageVersionsStatusResult& AddFailedVersions(const Aws::String& key, const PackageVersionError& value) { m_failedVersions.emplace(key, value); return *this; }

    /**
     * <p> A list of <code>SuccessfulPackageVersionInfo</code> objects, one for each
     * package version with a status that successfully updated. </p>
     */
    inline UpdatePackageVersionsStatusResult& AddFailedVersions(Aws::String&& key, const PackageVersionError& value) { m_failedVersions.emplace(std::move(key), value); return *this; }

    /**
     * <p> A list of <code>SuccessfulPackageVersionInfo</code> objects, one for each
     * package version with a status that successfully updated. </p>
     */
    inline UpdatePackageVersionsStatusResult& AddFailedVersions(const Aws::String& key, PackageVersionError&& value) { m_failedVersions.emplace(key, std::move(value)); return *this; }

    /**
     * <p> A list of <code>SuccessfulPackageVersionInfo</code> objects, one for each
     * package version with a status that successfully updated. </p>
     */
    inline UpdatePackageVersionsStatusResult& AddFailedVersions(Aws::String&& key, PackageVersionError&& value) { m_failedVersions.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p> A list of <code>SuccessfulPackageVersionInfo</code> objects, one for each
     * package version with a status that successfully updated. </p>
     */
    inline UpdatePackageVersionsStatusResult& AddFailedVersions(const char* key, PackageVersionError&& value) { m_failedVersions.emplace(key, std::move(value)); return *this; }

    /**
     * <p> A list of <code>SuccessfulPackageVersionInfo</code> objects, one for each
     * package version with a status that successfully updated. </p>
     */
    inline UpdatePackageVersionsStatusResult& AddFailedVersions(const char* key, const PackageVersionError& value) { m_failedVersions.emplace(key, value); return *this; }

  private:

    Aws::Map<Aws::String, SuccessfulPackageVersionInfo> m_successfulVersions;

    Aws::Map<Aws::String, PackageVersionError> m_failedVersions;
  };

} // namespace Model
} // namespace CodeArtifact
} // namespace Aws
