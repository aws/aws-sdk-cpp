/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/eks/EKS_EXPORTS.h>
#include <aws/eks/model/IdentityProviderConfigResponse.h>
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
namespace EKS
{
namespace Model
{
  class DescribeIdentityProviderConfigResult
  {
  public:
    AWS_EKS_API DescribeIdentityProviderConfigResult();
    AWS_EKS_API DescribeIdentityProviderConfigResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_EKS_API DescribeIdentityProviderConfigResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The object that represents an OpenID Connect (OIDC) identity provider
     * configuration.</p>
     */
    inline const IdentityProviderConfigResponse& GetIdentityProviderConfig() const{ return m_identityProviderConfig; }

    /**
     * <p>The object that represents an OpenID Connect (OIDC) identity provider
     * configuration.</p>
     */
    inline void SetIdentityProviderConfig(const IdentityProviderConfigResponse& value) { m_identityProviderConfig = value; }

    /**
     * <p>The object that represents an OpenID Connect (OIDC) identity provider
     * configuration.</p>
     */
    inline void SetIdentityProviderConfig(IdentityProviderConfigResponse&& value) { m_identityProviderConfig = std::move(value); }

    /**
     * <p>The object that represents an OpenID Connect (OIDC) identity provider
     * configuration.</p>
     */
    inline DescribeIdentityProviderConfigResult& WithIdentityProviderConfig(const IdentityProviderConfigResponse& value) { SetIdentityProviderConfig(value); return *this;}

    /**
     * <p>The object that represents an OpenID Connect (OIDC) identity provider
     * configuration.</p>
     */
    inline DescribeIdentityProviderConfigResult& WithIdentityProviderConfig(IdentityProviderConfigResponse&& value) { SetIdentityProviderConfig(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline DescribeIdentityProviderConfigResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline DescribeIdentityProviderConfigResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline DescribeIdentityProviderConfigResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    IdentityProviderConfigResponse m_identityProviderConfig;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace EKS
} // namespace Aws
