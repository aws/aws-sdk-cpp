/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/license-manager-user-subscriptions/LicenseManagerUserSubscriptions_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/license-manager-user-subscriptions/model/LicenseServerEndpoint.h>
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
namespace LicenseManagerUserSubscriptions
{
namespace Model
{
  class ListLicenseServerEndpointsResult
  {
  public:
    AWS_LICENSEMANAGERUSERSUBSCRIPTIONS_API ListLicenseServerEndpointsResult() = default;
    AWS_LICENSEMANAGERUSERSUBSCRIPTIONS_API ListLicenseServerEndpointsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_LICENSEMANAGERUSERSUBSCRIPTIONS_API ListLicenseServerEndpointsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>An array of <code>LicenseServerEndpoint</code> resources that contain
     * detailed information about the RDS License Servers that meet the request
     * criteria.</p>
     */
    inline const Aws::Vector<LicenseServerEndpoint>& GetLicenseServerEndpoints() const { return m_licenseServerEndpoints; }
    template<typename LicenseServerEndpointsT = Aws::Vector<LicenseServerEndpoint>>
    void SetLicenseServerEndpoints(LicenseServerEndpointsT&& value) { m_licenseServerEndpointsHasBeenSet = true; m_licenseServerEndpoints = std::forward<LicenseServerEndpointsT>(value); }
    template<typename LicenseServerEndpointsT = Aws::Vector<LicenseServerEndpoint>>
    ListLicenseServerEndpointsResult& WithLicenseServerEndpoints(LicenseServerEndpointsT&& value) { SetLicenseServerEndpoints(std::forward<LicenseServerEndpointsT>(value)); return *this;}
    template<typename LicenseServerEndpointsT = LicenseServerEndpoint>
    ListLicenseServerEndpointsResult& AddLicenseServerEndpoints(LicenseServerEndpointsT&& value) { m_licenseServerEndpointsHasBeenSet = true; m_licenseServerEndpoints.emplace_back(std::forward<LicenseServerEndpointsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The next token used for paginated responses. When this field isn't empty,
     * there are additional elements that the service hasn't included in this request.
     * Use this token with the next request to retrieve additional objects.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListLicenseServerEndpointsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListLicenseServerEndpointsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<LicenseServerEndpoint> m_licenseServerEndpoints;
    bool m_licenseServerEndpointsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace LicenseManagerUserSubscriptions
} // namespace Aws
