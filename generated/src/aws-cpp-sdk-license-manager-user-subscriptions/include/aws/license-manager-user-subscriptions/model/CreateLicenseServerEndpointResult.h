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
    AWS_LICENSEMANAGERUSERSUBSCRIPTIONS_API CreateLicenseServerEndpointResult();
    AWS_LICENSEMANAGERUSERSUBSCRIPTIONS_API CreateLicenseServerEndpointResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_LICENSEMANAGERUSERSUBSCRIPTIONS_API CreateLicenseServerEndpointResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the identity provider specified in the
     * request.</p>
     */
    inline const Aws::String& GetIdentityProviderArn() const{ return m_identityProviderArn; }
    inline void SetIdentityProviderArn(const Aws::String& value) { m_identityProviderArn = value; }
    inline void SetIdentityProviderArn(Aws::String&& value) { m_identityProviderArn = std::move(value); }
    inline void SetIdentityProviderArn(const char* value) { m_identityProviderArn.assign(value); }
    inline CreateLicenseServerEndpointResult& WithIdentityProviderArn(const Aws::String& value) { SetIdentityProviderArn(value); return *this;}
    inline CreateLicenseServerEndpointResult& WithIdentityProviderArn(Aws::String&& value) { SetIdentityProviderArn(std::move(value)); return *this;}
    inline CreateLicenseServerEndpointResult& WithIdentityProviderArn(const char* value) { SetIdentityProviderArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the <code>LicenseServerEndpoint</code> resource.</p>
     */
    inline const Aws::String& GetLicenseServerEndpointArn() const{ return m_licenseServerEndpointArn; }
    inline void SetLicenseServerEndpointArn(const Aws::String& value) { m_licenseServerEndpointArn = value; }
    inline void SetLicenseServerEndpointArn(Aws::String&& value) { m_licenseServerEndpointArn = std::move(value); }
    inline void SetLicenseServerEndpointArn(const char* value) { m_licenseServerEndpointArn.assign(value); }
    inline CreateLicenseServerEndpointResult& WithLicenseServerEndpointArn(const Aws::String& value) { SetLicenseServerEndpointArn(value); return *this;}
    inline CreateLicenseServerEndpointResult& WithLicenseServerEndpointArn(Aws::String&& value) { SetLicenseServerEndpointArn(std::move(value)); return *this;}
    inline CreateLicenseServerEndpointResult& WithLicenseServerEndpointArn(const char* value) { SetLicenseServerEndpointArn(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline CreateLicenseServerEndpointResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline CreateLicenseServerEndpointResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline CreateLicenseServerEndpointResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_identityProviderArn;

    Aws::String m_licenseServerEndpointArn;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace LicenseManagerUserSubscriptions
} // namespace Aws
