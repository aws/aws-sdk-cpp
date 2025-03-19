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
    AWS_CODEARTIFACT_API CopyPackageVersionsResult() = default;
    AWS_CODEARTIFACT_API CopyPackageVersionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CODEARTIFACT_API CopyPackageVersionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p> A list of the package versions that were successfully copied to your
     * repository. </p>
     */
    inline const Aws::Map<Aws::String, SuccessfulPackageVersionInfo>& GetSuccessfulVersions() const { return m_successfulVersions; }
    template<typename SuccessfulVersionsT = Aws::Map<Aws::String, SuccessfulPackageVersionInfo>>
    void SetSuccessfulVersions(SuccessfulVersionsT&& value) { m_successfulVersionsHasBeenSet = true; m_successfulVersions = std::forward<SuccessfulVersionsT>(value); }
    template<typename SuccessfulVersionsT = Aws::Map<Aws::String, SuccessfulPackageVersionInfo>>
    CopyPackageVersionsResult& WithSuccessfulVersions(SuccessfulVersionsT&& value) { SetSuccessfulVersions(std::forward<SuccessfulVersionsT>(value)); return *this;}
    template<typename SuccessfulVersionsKeyT = Aws::String, typename SuccessfulVersionsValueT = SuccessfulPackageVersionInfo>
    CopyPackageVersionsResult& AddSuccessfulVersions(SuccessfulVersionsKeyT&& key, SuccessfulVersionsValueT&& value) {
      m_successfulVersionsHasBeenSet = true; m_successfulVersions.emplace(std::forward<SuccessfulVersionsKeyT>(key), std::forward<SuccessfulVersionsValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p> A map of package versions that failed to copy and their error codes. The
     * possible error codes are in the <code>PackageVersionError</code> data type. They
     * are: </p> <ul> <li> <p> <code>ALREADY_EXISTS</code> </p> </li> <li> <p>
     * <code>MISMATCHED_REVISION</code> </p> </li> <li> <p>
     * <code>MISMATCHED_STATUS</code> </p> </li> <li> <p> <code>NOT_ALLOWED</code> </p>
     * </li> <li> <p> <code>NOT_FOUND</code> </p> </li> <li> <p> <code>SKIPPED</code>
     * </p> </li> </ul>
     */
    inline const Aws::Map<Aws::String, PackageVersionError>& GetFailedVersions() const { return m_failedVersions; }
    template<typename FailedVersionsT = Aws::Map<Aws::String, PackageVersionError>>
    void SetFailedVersions(FailedVersionsT&& value) { m_failedVersionsHasBeenSet = true; m_failedVersions = std::forward<FailedVersionsT>(value); }
    template<typename FailedVersionsT = Aws::Map<Aws::String, PackageVersionError>>
    CopyPackageVersionsResult& WithFailedVersions(FailedVersionsT&& value) { SetFailedVersions(std::forward<FailedVersionsT>(value)); return *this;}
    template<typename FailedVersionsKeyT = Aws::String, typename FailedVersionsValueT = PackageVersionError>
    CopyPackageVersionsResult& AddFailedVersions(FailedVersionsKeyT&& key, FailedVersionsValueT&& value) {
      m_failedVersionsHasBeenSet = true; m_failedVersions.emplace(std::forward<FailedVersionsKeyT>(key), std::forward<FailedVersionsValueT>(value)); return *this;
    }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    CopyPackageVersionsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
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
