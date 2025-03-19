/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/license-manager-user-subscriptions/LicenseManagerUserSubscriptions_EXPORTS.h>
#include <aws/license-manager-user-subscriptions/model/LicenseServerEndpoint.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
  class DeleteLicenseServerEndpointResult
  {
  public:
    AWS_LICENSEMANAGERUSERSUBSCRIPTIONS_API DeleteLicenseServerEndpointResult() = default;
    AWS_LICENSEMANAGERUSERSUBSCRIPTIONS_API DeleteLicenseServerEndpointResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_LICENSEMANAGERUSERSUBSCRIPTIONS_API DeleteLicenseServerEndpointResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Shows details from the <code>LicenseServerEndpoint</code> resource that was
     * deleted.</p>
     */
    inline const LicenseServerEndpoint& GetLicenseServerEndpoint() const { return m_licenseServerEndpoint; }
    template<typename LicenseServerEndpointT = LicenseServerEndpoint>
    void SetLicenseServerEndpoint(LicenseServerEndpointT&& value) { m_licenseServerEndpointHasBeenSet = true; m_licenseServerEndpoint = std::forward<LicenseServerEndpointT>(value); }
    template<typename LicenseServerEndpointT = LicenseServerEndpoint>
    DeleteLicenseServerEndpointResult& WithLicenseServerEndpoint(LicenseServerEndpointT&& value) { SetLicenseServerEndpoint(std::forward<LicenseServerEndpointT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DeleteLicenseServerEndpointResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    LicenseServerEndpoint m_licenseServerEndpoint;
    bool m_licenseServerEndpointHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace LicenseManagerUserSubscriptions
} // namespace Aws
