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
  class DisposePackageVersionsResult
  {
  public:
    AWS_CODEARTIFACT_API DisposePackageVersionsResult();
    AWS_CODEARTIFACT_API DisposePackageVersionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CODEARTIFACT_API DisposePackageVersionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p> A list of the package versions that were successfully disposed. </p>
     */
    inline const Aws::Map<Aws::String, SuccessfulPackageVersionInfo>& GetSuccessfulVersions() const{ return m_successfulVersions; }

    /**
     * <p> A list of the package versions that were successfully disposed. </p>
     */
    inline void SetSuccessfulVersions(const Aws::Map<Aws::String, SuccessfulPackageVersionInfo>& value) { m_successfulVersions = value; }

    /**
     * <p> A list of the package versions that were successfully disposed. </p>
     */
    inline void SetSuccessfulVersions(Aws::Map<Aws::String, SuccessfulPackageVersionInfo>&& value) { m_successfulVersions = std::move(value); }

    /**
     * <p> A list of the package versions that were successfully disposed. </p>
     */
    inline DisposePackageVersionsResult& WithSuccessfulVersions(const Aws::Map<Aws::String, SuccessfulPackageVersionInfo>& value) { SetSuccessfulVersions(value); return *this;}

    /**
     * <p> A list of the package versions that were successfully disposed. </p>
     */
    inline DisposePackageVersionsResult& WithSuccessfulVersions(Aws::Map<Aws::String, SuccessfulPackageVersionInfo>&& value) { SetSuccessfulVersions(std::move(value)); return *this;}

    /**
     * <p> A list of the package versions that were successfully disposed. </p>
     */
    inline DisposePackageVersionsResult& AddSuccessfulVersions(const Aws::String& key, const SuccessfulPackageVersionInfo& value) { m_successfulVersions.emplace(key, value); return *this; }

    /**
     * <p> A list of the package versions that were successfully disposed. </p>
     */
    inline DisposePackageVersionsResult& AddSuccessfulVersions(Aws::String&& key, const SuccessfulPackageVersionInfo& value) { m_successfulVersions.emplace(std::move(key), value); return *this; }

    /**
     * <p> A list of the package versions that were successfully disposed. </p>
     */
    inline DisposePackageVersionsResult& AddSuccessfulVersions(const Aws::String& key, SuccessfulPackageVersionInfo&& value) { m_successfulVersions.emplace(key, std::move(value)); return *this; }

    /**
     * <p> A list of the package versions that were successfully disposed. </p>
     */
    inline DisposePackageVersionsResult& AddSuccessfulVersions(Aws::String&& key, SuccessfulPackageVersionInfo&& value) { m_successfulVersions.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p> A list of the package versions that were successfully disposed. </p>
     */
    inline DisposePackageVersionsResult& AddSuccessfulVersions(const char* key, SuccessfulPackageVersionInfo&& value) { m_successfulVersions.emplace(key, std::move(value)); return *this; }

    /**
     * <p> A list of the package versions that were successfully disposed. </p>
     */
    inline DisposePackageVersionsResult& AddSuccessfulVersions(const char* key, const SuccessfulPackageVersionInfo& value) { m_successfulVersions.emplace(key, value); return *this; }


    /**
     * <p> A <code>PackageVersionError</code> object that contains a map of errors
     * codes for the disposed package versions that failed. The possible error codes
     * are: </p> <ul> <li> <p> <code>ALREADY_EXISTS</code> </p> </li> <li> <p>
     * <code>MISMATCHED_REVISION</code> </p> </li> <li> <p>
     * <code>MISMATCHED_STATUS</code> </p> </li> <li> <p> <code>NOT_ALLOWED</code> </p>
     * </li> <li> <p> <code>NOT_FOUND</code> </p> </li> <li> <p> <code>SKIPPED</code>
     * </p> </li> </ul>
     */
    inline const Aws::Map<Aws::String, PackageVersionError>& GetFailedVersions() const{ return m_failedVersions; }

    /**
     * <p> A <code>PackageVersionError</code> object that contains a map of errors
     * codes for the disposed package versions that failed. The possible error codes
     * are: </p> <ul> <li> <p> <code>ALREADY_EXISTS</code> </p> </li> <li> <p>
     * <code>MISMATCHED_REVISION</code> </p> </li> <li> <p>
     * <code>MISMATCHED_STATUS</code> </p> </li> <li> <p> <code>NOT_ALLOWED</code> </p>
     * </li> <li> <p> <code>NOT_FOUND</code> </p> </li> <li> <p> <code>SKIPPED</code>
     * </p> </li> </ul>
     */
    inline void SetFailedVersions(const Aws::Map<Aws::String, PackageVersionError>& value) { m_failedVersions = value; }

    /**
     * <p> A <code>PackageVersionError</code> object that contains a map of errors
     * codes for the disposed package versions that failed. The possible error codes
     * are: </p> <ul> <li> <p> <code>ALREADY_EXISTS</code> </p> </li> <li> <p>
     * <code>MISMATCHED_REVISION</code> </p> </li> <li> <p>
     * <code>MISMATCHED_STATUS</code> </p> </li> <li> <p> <code>NOT_ALLOWED</code> </p>
     * </li> <li> <p> <code>NOT_FOUND</code> </p> </li> <li> <p> <code>SKIPPED</code>
     * </p> </li> </ul>
     */
    inline void SetFailedVersions(Aws::Map<Aws::String, PackageVersionError>&& value) { m_failedVersions = std::move(value); }

    /**
     * <p> A <code>PackageVersionError</code> object that contains a map of errors
     * codes for the disposed package versions that failed. The possible error codes
     * are: </p> <ul> <li> <p> <code>ALREADY_EXISTS</code> </p> </li> <li> <p>
     * <code>MISMATCHED_REVISION</code> </p> </li> <li> <p>
     * <code>MISMATCHED_STATUS</code> </p> </li> <li> <p> <code>NOT_ALLOWED</code> </p>
     * </li> <li> <p> <code>NOT_FOUND</code> </p> </li> <li> <p> <code>SKIPPED</code>
     * </p> </li> </ul>
     */
    inline DisposePackageVersionsResult& WithFailedVersions(const Aws::Map<Aws::String, PackageVersionError>& value) { SetFailedVersions(value); return *this;}

    /**
     * <p> A <code>PackageVersionError</code> object that contains a map of errors
     * codes for the disposed package versions that failed. The possible error codes
     * are: </p> <ul> <li> <p> <code>ALREADY_EXISTS</code> </p> </li> <li> <p>
     * <code>MISMATCHED_REVISION</code> </p> </li> <li> <p>
     * <code>MISMATCHED_STATUS</code> </p> </li> <li> <p> <code>NOT_ALLOWED</code> </p>
     * </li> <li> <p> <code>NOT_FOUND</code> </p> </li> <li> <p> <code>SKIPPED</code>
     * </p> </li> </ul>
     */
    inline DisposePackageVersionsResult& WithFailedVersions(Aws::Map<Aws::String, PackageVersionError>&& value) { SetFailedVersions(std::move(value)); return *this;}

    /**
     * <p> A <code>PackageVersionError</code> object that contains a map of errors
     * codes for the disposed package versions that failed. The possible error codes
     * are: </p> <ul> <li> <p> <code>ALREADY_EXISTS</code> </p> </li> <li> <p>
     * <code>MISMATCHED_REVISION</code> </p> </li> <li> <p>
     * <code>MISMATCHED_STATUS</code> </p> </li> <li> <p> <code>NOT_ALLOWED</code> </p>
     * </li> <li> <p> <code>NOT_FOUND</code> </p> </li> <li> <p> <code>SKIPPED</code>
     * </p> </li> </ul>
     */
    inline DisposePackageVersionsResult& AddFailedVersions(const Aws::String& key, const PackageVersionError& value) { m_failedVersions.emplace(key, value); return *this; }

    /**
     * <p> A <code>PackageVersionError</code> object that contains a map of errors
     * codes for the disposed package versions that failed. The possible error codes
     * are: </p> <ul> <li> <p> <code>ALREADY_EXISTS</code> </p> </li> <li> <p>
     * <code>MISMATCHED_REVISION</code> </p> </li> <li> <p>
     * <code>MISMATCHED_STATUS</code> </p> </li> <li> <p> <code>NOT_ALLOWED</code> </p>
     * </li> <li> <p> <code>NOT_FOUND</code> </p> </li> <li> <p> <code>SKIPPED</code>
     * </p> </li> </ul>
     */
    inline DisposePackageVersionsResult& AddFailedVersions(Aws::String&& key, const PackageVersionError& value) { m_failedVersions.emplace(std::move(key), value); return *this; }

    /**
     * <p> A <code>PackageVersionError</code> object that contains a map of errors
     * codes for the disposed package versions that failed. The possible error codes
     * are: </p> <ul> <li> <p> <code>ALREADY_EXISTS</code> </p> </li> <li> <p>
     * <code>MISMATCHED_REVISION</code> </p> </li> <li> <p>
     * <code>MISMATCHED_STATUS</code> </p> </li> <li> <p> <code>NOT_ALLOWED</code> </p>
     * </li> <li> <p> <code>NOT_FOUND</code> </p> </li> <li> <p> <code>SKIPPED</code>
     * </p> </li> </ul>
     */
    inline DisposePackageVersionsResult& AddFailedVersions(const Aws::String& key, PackageVersionError&& value) { m_failedVersions.emplace(key, std::move(value)); return *this; }

    /**
     * <p> A <code>PackageVersionError</code> object that contains a map of errors
     * codes for the disposed package versions that failed. The possible error codes
     * are: </p> <ul> <li> <p> <code>ALREADY_EXISTS</code> </p> </li> <li> <p>
     * <code>MISMATCHED_REVISION</code> </p> </li> <li> <p>
     * <code>MISMATCHED_STATUS</code> </p> </li> <li> <p> <code>NOT_ALLOWED</code> </p>
     * </li> <li> <p> <code>NOT_FOUND</code> </p> </li> <li> <p> <code>SKIPPED</code>
     * </p> </li> </ul>
     */
    inline DisposePackageVersionsResult& AddFailedVersions(Aws::String&& key, PackageVersionError&& value) { m_failedVersions.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p> A <code>PackageVersionError</code> object that contains a map of errors
     * codes for the disposed package versions that failed. The possible error codes
     * are: </p> <ul> <li> <p> <code>ALREADY_EXISTS</code> </p> </li> <li> <p>
     * <code>MISMATCHED_REVISION</code> </p> </li> <li> <p>
     * <code>MISMATCHED_STATUS</code> </p> </li> <li> <p> <code>NOT_ALLOWED</code> </p>
     * </li> <li> <p> <code>NOT_FOUND</code> </p> </li> <li> <p> <code>SKIPPED</code>
     * </p> </li> </ul>
     */
    inline DisposePackageVersionsResult& AddFailedVersions(const char* key, PackageVersionError&& value) { m_failedVersions.emplace(key, std::move(value)); return *this; }

    /**
     * <p> A <code>PackageVersionError</code> object that contains a map of errors
     * codes for the disposed package versions that failed. The possible error codes
     * are: </p> <ul> <li> <p> <code>ALREADY_EXISTS</code> </p> </li> <li> <p>
     * <code>MISMATCHED_REVISION</code> </p> </li> <li> <p>
     * <code>MISMATCHED_STATUS</code> </p> </li> <li> <p> <code>NOT_ALLOWED</code> </p>
     * </li> <li> <p> <code>NOT_FOUND</code> </p> </li> <li> <p> <code>SKIPPED</code>
     * </p> </li> </ul>
     */
    inline DisposePackageVersionsResult& AddFailedVersions(const char* key, const PackageVersionError& value) { m_failedVersions.emplace(key, value); return *this; }

  private:

    Aws::Map<Aws::String, SuccessfulPackageVersionInfo> m_successfulVersions;

    Aws::Map<Aws::String, PackageVersionError> m_failedVersions;
  };

} // namespace Model
} // namespace CodeArtifact
} // namespace Aws
