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
  class DeletePackageVersionsResult
  {
  public:
    AWS_CODEARTIFACT_API DeletePackageVersionsResult() = default;
    AWS_CODEARTIFACT_API DeletePackageVersionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CODEARTIFACT_API DeletePackageVersionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p> A list of the package versions that were successfully deleted. The status of
     * every successful version will be <code>Deleted</code>. </p>
     */
    inline const Aws::Map<Aws::String, SuccessfulPackageVersionInfo>& GetSuccessfulVersions() const { return m_successfulVersions; }
    template<typename SuccessfulVersionsT = Aws::Map<Aws::String, SuccessfulPackageVersionInfo>>
    void SetSuccessfulVersions(SuccessfulVersionsT&& value) { m_successfulVersionsHasBeenSet = true; m_successfulVersions = std::forward<SuccessfulVersionsT>(value); }
    template<typename SuccessfulVersionsT = Aws::Map<Aws::String, SuccessfulPackageVersionInfo>>
    DeletePackageVersionsResult& WithSuccessfulVersions(SuccessfulVersionsT&& value) { SetSuccessfulVersions(std::forward<SuccessfulVersionsT>(value)); return *this;}
    template<typename SuccessfulVersionsKeyT = Aws::String, typename SuccessfulVersionsValueT = SuccessfulPackageVersionInfo>
    DeletePackageVersionsResult& AddSuccessfulVersions(SuccessfulVersionsKeyT&& key, SuccessfulVersionsValueT&& value) {
      m_successfulVersionsHasBeenSet = true; m_successfulVersions.emplace(std::forward<SuccessfulVersionsKeyT>(key), std::forward<SuccessfulVersionsValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p> A <code>PackageVersionError</code> object that contains a map of errors
     * codes for the deleted package that failed. The possible error codes are: </p>
     * <ul> <li> <p> <code>ALREADY_EXISTS</code> </p> </li> <li> <p>
     * <code>MISMATCHED_REVISION</code> </p> </li> <li> <p>
     * <code>MISMATCHED_STATUS</code> </p> </li> <li> <p> <code>NOT_ALLOWED</code> </p>
     * </li> <li> <p> <code>NOT_FOUND</code> </p> </li> <li> <p> <code>SKIPPED</code>
     * </p> </li> </ul>
     */
    inline const Aws::Map<Aws::String, PackageVersionError>& GetFailedVersions() const { return m_failedVersions; }
    template<typename FailedVersionsT = Aws::Map<Aws::String, PackageVersionError>>
    void SetFailedVersions(FailedVersionsT&& value) { m_failedVersionsHasBeenSet = true; m_failedVersions = std::forward<FailedVersionsT>(value); }
    template<typename FailedVersionsT = Aws::Map<Aws::String, PackageVersionError>>
    DeletePackageVersionsResult& WithFailedVersions(FailedVersionsT&& value) { SetFailedVersions(std::forward<FailedVersionsT>(value)); return *this;}
    template<typename FailedVersionsKeyT = Aws::String, typename FailedVersionsValueT = PackageVersionError>
    DeletePackageVersionsResult& AddFailedVersions(FailedVersionsKeyT&& key, FailedVersionsValueT&& value) {
      m_failedVersionsHasBeenSet = true; m_failedVersions.emplace(std::forward<FailedVersionsKeyT>(key), std::forward<FailedVersionsValueT>(value)); return *this;
    }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DeletePackageVersionsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Map<Aws::String, SuccessfulPackageVersionInfo> m_successfulVersions;
    bool m_successfulVersionsHasBeenSet = false;

    Aws::Map<Aws::String, PackageVersionError> m_failedVersions;
    bool m_failedVersionsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeArtifact
} // namespace Aws
