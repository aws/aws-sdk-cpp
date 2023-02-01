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
  class CopyPackageVersionsResult
  {
  public:
    AWS_CODEARTIFACT_API CopyPackageVersionsResult();
    AWS_CODEARTIFACT_API CopyPackageVersionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CODEARTIFACT_API CopyPackageVersionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p> A list of the package versions that were successfully copied to your
     * repository. </p>
     */
    inline const Aws::Map<Aws::String, SuccessfulPackageVersionInfo>& GetSuccessfulVersions() const{ return m_successfulVersions; }

    /**
     * <p> A list of the package versions that were successfully copied to your
     * repository. </p>
     */
    inline void SetSuccessfulVersions(const Aws::Map<Aws::String, SuccessfulPackageVersionInfo>& value) { m_successfulVersions = value; }

    /**
     * <p> A list of the package versions that were successfully copied to your
     * repository. </p>
     */
    inline void SetSuccessfulVersions(Aws::Map<Aws::String, SuccessfulPackageVersionInfo>&& value) { m_successfulVersions = std::move(value); }

    /**
     * <p> A list of the package versions that were successfully copied to your
     * repository. </p>
     */
    inline CopyPackageVersionsResult& WithSuccessfulVersions(const Aws::Map<Aws::String, SuccessfulPackageVersionInfo>& value) { SetSuccessfulVersions(value); return *this;}

    /**
     * <p> A list of the package versions that were successfully copied to your
     * repository. </p>
     */
    inline CopyPackageVersionsResult& WithSuccessfulVersions(Aws::Map<Aws::String, SuccessfulPackageVersionInfo>&& value) { SetSuccessfulVersions(std::move(value)); return *this;}

    /**
     * <p> A list of the package versions that were successfully copied to your
     * repository. </p>
     */
    inline CopyPackageVersionsResult& AddSuccessfulVersions(const Aws::String& key, const SuccessfulPackageVersionInfo& value) { m_successfulVersions.emplace(key, value); return *this; }

    /**
     * <p> A list of the package versions that were successfully copied to your
     * repository. </p>
     */
    inline CopyPackageVersionsResult& AddSuccessfulVersions(Aws::String&& key, const SuccessfulPackageVersionInfo& value) { m_successfulVersions.emplace(std::move(key), value); return *this; }

    /**
     * <p> A list of the package versions that were successfully copied to your
     * repository. </p>
     */
    inline CopyPackageVersionsResult& AddSuccessfulVersions(const Aws::String& key, SuccessfulPackageVersionInfo&& value) { m_successfulVersions.emplace(key, std::move(value)); return *this; }

    /**
     * <p> A list of the package versions that were successfully copied to your
     * repository. </p>
     */
    inline CopyPackageVersionsResult& AddSuccessfulVersions(Aws::String&& key, SuccessfulPackageVersionInfo&& value) { m_successfulVersions.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p> A list of the package versions that were successfully copied to your
     * repository. </p>
     */
    inline CopyPackageVersionsResult& AddSuccessfulVersions(const char* key, SuccessfulPackageVersionInfo&& value) { m_successfulVersions.emplace(key, std::move(value)); return *this; }

    /**
     * <p> A list of the package versions that were successfully copied to your
     * repository. </p>
     */
    inline CopyPackageVersionsResult& AddSuccessfulVersions(const char* key, const SuccessfulPackageVersionInfo& value) { m_successfulVersions.emplace(key, value); return *this; }


    /**
     * <p> A map of package versions that failed to copy and their error codes. The
     * possible error codes are in the <code>PackageVersionError</code> data type. They
     * are: </p> <ul> <li> <p> <code>ALREADY_EXISTS</code> </p> </li> <li> <p>
     * <code>MISMATCHED_REVISION</code> </p> </li> <li> <p>
     * <code>MISMATCHED_STATUS</code> </p> </li> <li> <p> <code>NOT_ALLOWED</code> </p>
     * </li> <li> <p> <code>NOT_FOUND</code> </p> </li> <li> <p> <code>SKIPPED</code>
     * </p> </li> </ul>
     */
    inline const Aws::Map<Aws::String, PackageVersionError>& GetFailedVersions() const{ return m_failedVersions; }

    /**
     * <p> A map of package versions that failed to copy and their error codes. The
     * possible error codes are in the <code>PackageVersionError</code> data type. They
     * are: </p> <ul> <li> <p> <code>ALREADY_EXISTS</code> </p> </li> <li> <p>
     * <code>MISMATCHED_REVISION</code> </p> </li> <li> <p>
     * <code>MISMATCHED_STATUS</code> </p> </li> <li> <p> <code>NOT_ALLOWED</code> </p>
     * </li> <li> <p> <code>NOT_FOUND</code> </p> </li> <li> <p> <code>SKIPPED</code>
     * </p> </li> </ul>
     */
    inline void SetFailedVersions(const Aws::Map<Aws::String, PackageVersionError>& value) { m_failedVersions = value; }

    /**
     * <p> A map of package versions that failed to copy and their error codes. The
     * possible error codes are in the <code>PackageVersionError</code> data type. They
     * are: </p> <ul> <li> <p> <code>ALREADY_EXISTS</code> </p> </li> <li> <p>
     * <code>MISMATCHED_REVISION</code> </p> </li> <li> <p>
     * <code>MISMATCHED_STATUS</code> </p> </li> <li> <p> <code>NOT_ALLOWED</code> </p>
     * </li> <li> <p> <code>NOT_FOUND</code> </p> </li> <li> <p> <code>SKIPPED</code>
     * </p> </li> </ul>
     */
    inline void SetFailedVersions(Aws::Map<Aws::String, PackageVersionError>&& value) { m_failedVersions = std::move(value); }

    /**
     * <p> A map of package versions that failed to copy and their error codes. The
     * possible error codes are in the <code>PackageVersionError</code> data type. They
     * are: </p> <ul> <li> <p> <code>ALREADY_EXISTS</code> </p> </li> <li> <p>
     * <code>MISMATCHED_REVISION</code> </p> </li> <li> <p>
     * <code>MISMATCHED_STATUS</code> </p> </li> <li> <p> <code>NOT_ALLOWED</code> </p>
     * </li> <li> <p> <code>NOT_FOUND</code> </p> </li> <li> <p> <code>SKIPPED</code>
     * </p> </li> </ul>
     */
    inline CopyPackageVersionsResult& WithFailedVersions(const Aws::Map<Aws::String, PackageVersionError>& value) { SetFailedVersions(value); return *this;}

    /**
     * <p> A map of package versions that failed to copy and their error codes. The
     * possible error codes are in the <code>PackageVersionError</code> data type. They
     * are: </p> <ul> <li> <p> <code>ALREADY_EXISTS</code> </p> </li> <li> <p>
     * <code>MISMATCHED_REVISION</code> </p> </li> <li> <p>
     * <code>MISMATCHED_STATUS</code> </p> </li> <li> <p> <code>NOT_ALLOWED</code> </p>
     * </li> <li> <p> <code>NOT_FOUND</code> </p> </li> <li> <p> <code>SKIPPED</code>
     * </p> </li> </ul>
     */
    inline CopyPackageVersionsResult& WithFailedVersions(Aws::Map<Aws::String, PackageVersionError>&& value) { SetFailedVersions(std::move(value)); return *this;}

    /**
     * <p> A map of package versions that failed to copy and their error codes. The
     * possible error codes are in the <code>PackageVersionError</code> data type. They
     * are: </p> <ul> <li> <p> <code>ALREADY_EXISTS</code> </p> </li> <li> <p>
     * <code>MISMATCHED_REVISION</code> </p> </li> <li> <p>
     * <code>MISMATCHED_STATUS</code> </p> </li> <li> <p> <code>NOT_ALLOWED</code> </p>
     * </li> <li> <p> <code>NOT_FOUND</code> </p> </li> <li> <p> <code>SKIPPED</code>
     * </p> </li> </ul>
     */
    inline CopyPackageVersionsResult& AddFailedVersions(const Aws::String& key, const PackageVersionError& value) { m_failedVersions.emplace(key, value); return *this; }

    /**
     * <p> A map of package versions that failed to copy and their error codes. The
     * possible error codes are in the <code>PackageVersionError</code> data type. They
     * are: </p> <ul> <li> <p> <code>ALREADY_EXISTS</code> </p> </li> <li> <p>
     * <code>MISMATCHED_REVISION</code> </p> </li> <li> <p>
     * <code>MISMATCHED_STATUS</code> </p> </li> <li> <p> <code>NOT_ALLOWED</code> </p>
     * </li> <li> <p> <code>NOT_FOUND</code> </p> </li> <li> <p> <code>SKIPPED</code>
     * </p> </li> </ul>
     */
    inline CopyPackageVersionsResult& AddFailedVersions(Aws::String&& key, const PackageVersionError& value) { m_failedVersions.emplace(std::move(key), value); return *this; }

    /**
     * <p> A map of package versions that failed to copy and their error codes. The
     * possible error codes are in the <code>PackageVersionError</code> data type. They
     * are: </p> <ul> <li> <p> <code>ALREADY_EXISTS</code> </p> </li> <li> <p>
     * <code>MISMATCHED_REVISION</code> </p> </li> <li> <p>
     * <code>MISMATCHED_STATUS</code> </p> </li> <li> <p> <code>NOT_ALLOWED</code> </p>
     * </li> <li> <p> <code>NOT_FOUND</code> </p> </li> <li> <p> <code>SKIPPED</code>
     * </p> </li> </ul>
     */
    inline CopyPackageVersionsResult& AddFailedVersions(const Aws::String& key, PackageVersionError&& value) { m_failedVersions.emplace(key, std::move(value)); return *this; }

    /**
     * <p> A map of package versions that failed to copy and their error codes. The
     * possible error codes are in the <code>PackageVersionError</code> data type. They
     * are: </p> <ul> <li> <p> <code>ALREADY_EXISTS</code> </p> </li> <li> <p>
     * <code>MISMATCHED_REVISION</code> </p> </li> <li> <p>
     * <code>MISMATCHED_STATUS</code> </p> </li> <li> <p> <code>NOT_ALLOWED</code> </p>
     * </li> <li> <p> <code>NOT_FOUND</code> </p> </li> <li> <p> <code>SKIPPED</code>
     * </p> </li> </ul>
     */
    inline CopyPackageVersionsResult& AddFailedVersions(Aws::String&& key, PackageVersionError&& value) { m_failedVersions.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p> A map of package versions that failed to copy and their error codes. The
     * possible error codes are in the <code>PackageVersionError</code> data type. They
     * are: </p> <ul> <li> <p> <code>ALREADY_EXISTS</code> </p> </li> <li> <p>
     * <code>MISMATCHED_REVISION</code> </p> </li> <li> <p>
     * <code>MISMATCHED_STATUS</code> </p> </li> <li> <p> <code>NOT_ALLOWED</code> </p>
     * </li> <li> <p> <code>NOT_FOUND</code> </p> </li> <li> <p> <code>SKIPPED</code>
     * </p> </li> </ul>
     */
    inline CopyPackageVersionsResult& AddFailedVersions(const char* key, PackageVersionError&& value) { m_failedVersions.emplace(key, std::move(value)); return *this; }

    /**
     * <p> A map of package versions that failed to copy and their error codes. The
     * possible error codes are in the <code>PackageVersionError</code> data type. They
     * are: </p> <ul> <li> <p> <code>ALREADY_EXISTS</code> </p> </li> <li> <p>
     * <code>MISMATCHED_REVISION</code> </p> </li> <li> <p>
     * <code>MISMATCHED_STATUS</code> </p> </li> <li> <p> <code>NOT_ALLOWED</code> </p>
     * </li> <li> <p> <code>NOT_FOUND</code> </p> </li> <li> <p> <code>SKIPPED</code>
     * </p> </li> </ul>
     */
    inline CopyPackageVersionsResult& AddFailedVersions(const char* key, const PackageVersionError& value) { m_failedVersions.emplace(key, value); return *this; }

  private:

    Aws::Map<Aws::String, SuccessfulPackageVersionInfo> m_successfulVersions;

    Aws::Map<Aws::String, PackageVersionError> m_failedVersions;
  };

} // namespace Model
} // namespace CodeArtifact
} // namespace Aws
