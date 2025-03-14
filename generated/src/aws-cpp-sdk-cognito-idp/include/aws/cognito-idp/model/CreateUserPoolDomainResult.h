﻿/**
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
    AWS_COGNITOIDENTITYPROVIDER_API CreateUserPoolDomainResult();
    AWS_COGNITOIDENTITYPROVIDER_API CreateUserPoolDomainResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_COGNITOIDENTITYPROVIDER_API CreateUserPoolDomainResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The version of managed login branding applied your domain. A value of
     * <code>1</code> indicates hosted UI (classic) and a version of <code>2</code>
     * indicates managed login.</p>
     */
    inline int GetManagedLoginVersion() const{ return m_managedLoginVersion; }
    inline void SetManagedLoginVersion(int value) { m_managedLoginVersion = value; }
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
    inline const Aws::String& GetCloudFrontDomain() const{ return m_cloudFrontDomain; }
    inline void SetCloudFrontDomain(const Aws::String& value) { m_cloudFrontDomain = value; }
    inline void SetCloudFrontDomain(Aws::String&& value) { m_cloudFrontDomain = std::move(value); }
    inline void SetCloudFrontDomain(const char* value) { m_cloudFrontDomain.assign(value); }
    inline CreateUserPoolDomainResult& WithCloudFrontDomain(const Aws::String& value) { SetCloudFrontDomain(value); return *this;}
    inline CreateUserPoolDomainResult& WithCloudFrontDomain(Aws::String&& value) { SetCloudFrontDomain(std::move(value)); return *this;}
    inline CreateUserPoolDomainResult& WithCloudFrontDomain(const char* value) { SetCloudFrontDomain(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline CreateUserPoolDomainResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline CreateUserPoolDomainResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline CreateUserPoolDomainResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    int m_managedLoginVersion;

    Aws::String m_cloudFrontDomain;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace CognitoIdentityProvider
} // namespace Aws
