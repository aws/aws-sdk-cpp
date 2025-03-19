/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/license-manager-user-subscriptions/LicenseManagerUserSubscriptions_EXPORTS.h>
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
  class CreateLicenseServerEndpointResult
  {
  public:
    AWS_LICENSEMANAGERUSERSUBSCRIPTIONS_API CreateLicenseServerEndpointResult() = default;
    AWS_LICENSEMANAGERUSERSUBSCRIPTIONS_API CreateLicenseServerEndpointResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_LICENSEMANAGERUSERSUBSCRIPTIONS_API CreateLicenseServerEndpointResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the identity provider specified in the
     * request.</p>
     */
    inline const Aws::String& GetIdentityProviderArn() const { return m_identityProviderArn; }
    template<typename IdentityProviderArnT = Aws::String>
    void SetIdentityProviderArn(IdentityProviderArnT&& value) { m_identityProviderArnHasBeenSet = true; m_identityProviderArn = std::forward<IdentityProviderArnT>(value); }
    template<typename IdentityProviderArnT = Aws::String>
    CreateLicenseServerEndpointResult& WithIdentityProviderArn(IdentityProviderArnT&& value) { SetIdentityProviderArn(std::forward<IdentityProviderArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the <code>LicenseServerEndpoint</code> resource.</p>
     */
    inline const Aws::String& GetLicenseServerEndpointArn() const { return m_licenseServerEndpointArn; }
    template<typename LicenseServerEndpointArnT = Aws::String>
    void SetLicenseServerEndpointArn(LicenseServerEndpointArnT&& value) { m_licenseServerEndpointArnHasBeenSet = true; m_licenseServerEndpointArn = std::forward<LicenseServerEndpointArnT>(value); }
    template<typename LicenseServerEndpointArnT = Aws::String>
    CreateLicenseServerEndpointResult& WithLicenseServerEndpointArn(LicenseServerEndpointArnT&& value) { SetLicenseServerEndpointArn(std::forward<LicenseServerEndpointArnT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    CreateLicenseServerEndpointResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_identityProviderArn;
    bool m_identityProviderArnHasBeenSet = false;

    Aws::String m_licenseServerEndpointArn;
    bool m_licenseServerEndpointArnHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace LicenseManagerUserSubscriptions
} // namespace Aws
