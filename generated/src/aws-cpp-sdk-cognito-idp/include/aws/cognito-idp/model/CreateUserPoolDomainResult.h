/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cognito-idp/CognitoIdentityProvider_EXPORTS.h>
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
namespace CognitoIdentityProvider
{
namespace Model
{
  class CreateUserPoolDomainResult
  {
  public:
    AWS_COGNITOIDENTITYPROVIDER_API CreateUserPoolDomainResult() = default;
    AWS_COGNITOIDENTITYPROVIDER_API CreateUserPoolDomainResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_COGNITOIDENTITYPROVIDER_API CreateUserPoolDomainResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The version of managed login branding applied your domain. A value of
     * <code>1</code> indicates hosted UI (classic) and a version of <code>2</code>
     * indicates managed login.</p>
     */
    inline int GetManagedLoginVersion() const { return m_managedLoginVersion; }
    inline void SetManagedLoginVersion(int value) { m_managedLoginVersionHasBeenSet = true; m_managedLoginVersion = value; }
    inline CreateUserPoolDomainResult& WithManagedLoginVersion(int value) { SetManagedLoginVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The fully-qualified domain name (FQDN) of the Amazon CloudFront distribution
     * that hosts your managed login or classic hosted UI pages. Your domain-name
     * authority must have an alias record that points requests for your custom domain
     * to this FQDN. Amazon Cognito returns this value if you set a custom domain with
     * <code>CustomDomainConfig</code>. If you set an Amazon Cognito prefix domain,
     * this parameter returns null.</p>
     */
    inline const Aws::String& GetCloudFrontDomain() const { return m_cloudFrontDomain; }
    template<typename CloudFrontDomainT = Aws::String>
    void SetCloudFrontDomain(CloudFrontDomainT&& value) { m_cloudFrontDomainHasBeenSet = true; m_cloudFrontDomain = std::forward<CloudFrontDomainT>(value); }
    template<typename CloudFrontDomainT = Aws::String>
    CreateUserPoolDomainResult& WithCloudFrontDomain(CloudFrontDomainT&& value) { SetCloudFrontDomain(std::forward<CloudFrontDomainT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    CreateUserPoolDomainResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    int m_managedLoginVersion{0};
    bool m_managedLoginVersionHasBeenSet = false;

    Aws::String m_cloudFrontDomain;
    bool m_cloudFrontDomainHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace CognitoIdentityProvider
} // namespace Aws
