/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/license-manager/LicenseManager_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/license-manager/model/LicenseOperationFailure.h>
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
namespace LicenseManager
{
namespace Model
{
  class ListFailuresForLicenseConfigurationOperationsResult
  {
  public:
    AWS_LICENSEMANAGER_API ListFailuresForLicenseConfigurationOperationsResult() = default;
    AWS_LICENSEMANAGER_API ListFailuresForLicenseConfigurationOperationsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_LICENSEMANAGER_API ListFailuresForLicenseConfigurationOperationsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>License configuration operations that failed.</p>
     */
    inline const Aws::Vector<LicenseOperationFailure>& GetLicenseOperationFailureList() const { return m_licenseOperationFailureList; }
    template<typename LicenseOperationFailureListT = Aws::Vector<LicenseOperationFailure>>
    void SetLicenseOperationFailureList(LicenseOperationFailureListT&& value) { m_licenseOperationFailureListHasBeenSet = true; m_licenseOperationFailureList = std::forward<LicenseOperationFailureListT>(value); }
    template<typename LicenseOperationFailureListT = Aws::Vector<LicenseOperationFailure>>
    ListFailuresForLicenseConfigurationOperationsResult& WithLicenseOperationFailureList(LicenseOperationFailureListT&& value) { SetLicenseOperationFailureList(std::forward<LicenseOperationFailureListT>(value)); return *this;}
    template<typename LicenseOperationFailureListT = LicenseOperationFailure>
    ListFailuresForLicenseConfigurationOperationsResult& AddLicenseOperationFailureList(LicenseOperationFailureListT&& value) { m_licenseOperationFailureListHasBeenSet = true; m_licenseOperationFailureList.emplace_back(std::forward<LicenseOperationFailureListT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Token for the next set of results.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListFailuresForLicenseConfigurationOperationsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListFailuresForLicenseConfigurationOperationsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<LicenseOperationFailure> m_licenseOperationFailureList;
    bool m_licenseOperationFailureListHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace LicenseManager
} // namespace Aws
