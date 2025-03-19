/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/license-manager/LicenseManager_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/license-manager/model/GrantedLicense.h>
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
  class ListReceivedLicensesResult
  {
  public:
    AWS_LICENSEMANAGER_API ListReceivedLicensesResult() = default;
    AWS_LICENSEMANAGER_API ListReceivedLicensesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_LICENSEMANAGER_API ListReceivedLicensesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Received license details.</p>
     */
    inline const Aws::Vector<GrantedLicense>& GetLicenses() const { return m_licenses; }
    template<typename LicensesT = Aws::Vector<GrantedLicense>>
    void SetLicenses(LicensesT&& value) { m_licensesHasBeenSet = true; m_licenses = std::forward<LicensesT>(value); }
    template<typename LicensesT = Aws::Vector<GrantedLicense>>
    ListReceivedLicensesResult& WithLicenses(LicensesT&& value) { SetLicenses(std::forward<LicensesT>(value)); return *this;}
    template<typename LicensesT = GrantedLicense>
    ListReceivedLicensesResult& AddLicenses(LicensesT&& value) { m_licensesHasBeenSet = true; m_licenses.emplace_back(std::forward<LicensesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Token for the next set of results.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListReceivedLicensesResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListReceivedLicensesResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<GrantedLicense> m_licenses;
    bool m_licensesHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace LicenseManager
} // namespace Aws
