/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/license-manager/LicenseManager_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/license-manager/model/LicenseConfigurationUsage.h>
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
  class ListUsageForLicenseConfigurationResult
  {
  public:
    AWS_LICENSEMANAGER_API ListUsageForLicenseConfigurationResult() = default;
    AWS_LICENSEMANAGER_API ListUsageForLicenseConfigurationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_LICENSEMANAGER_API ListUsageForLicenseConfigurationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Information about the license configurations.</p>
     */
    inline const Aws::Vector<LicenseConfigurationUsage>& GetLicenseConfigurationUsageList() const { return m_licenseConfigurationUsageList; }
    template<typename LicenseConfigurationUsageListT = Aws::Vector<LicenseConfigurationUsage>>
    void SetLicenseConfigurationUsageList(LicenseConfigurationUsageListT&& value) { m_licenseConfigurationUsageListHasBeenSet = true; m_licenseConfigurationUsageList = std::forward<LicenseConfigurationUsageListT>(value); }
    template<typename LicenseConfigurationUsageListT = Aws::Vector<LicenseConfigurationUsage>>
    ListUsageForLicenseConfigurationResult& WithLicenseConfigurationUsageList(LicenseConfigurationUsageListT&& value) { SetLicenseConfigurationUsageList(std::forward<LicenseConfigurationUsageListT>(value)); return *this;}
    template<typename LicenseConfigurationUsageListT = LicenseConfigurationUsage>
    ListUsageForLicenseConfigurationResult& AddLicenseConfigurationUsageList(LicenseConfigurationUsageListT&& value) { m_licenseConfigurationUsageListHasBeenSet = true; m_licenseConfigurationUsageList.emplace_back(std::forward<LicenseConfigurationUsageListT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Token for the next set of results.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListUsageForLicenseConfigurationResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListUsageForLicenseConfigurationResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<LicenseConfigurationUsage> m_licenseConfigurationUsageList;
    bool m_licenseConfigurationUsageListHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace LicenseManager
} // namespace Aws
