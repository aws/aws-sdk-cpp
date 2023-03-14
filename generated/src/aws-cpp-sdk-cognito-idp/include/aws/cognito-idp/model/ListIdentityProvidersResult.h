/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cognito-idp/CognitoIdentityProvider_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/cognito-idp/model/ProviderDescription.h>
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
  class ListIdentityProvidersResult
  {
  public:
    AWS_COGNITOIDENTITYPROVIDER_API ListIdentityProvidersResult();
    AWS_COGNITOIDENTITYPROVIDER_API ListIdentityProvidersResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_COGNITOIDENTITYPROVIDER_API ListIdentityProvidersResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A list of IdP objects.</p>
     */
    inline const Aws::Vector<ProviderDescription>& GetProviders() const{ return m_providers; }

    /**
     * <p>A list of IdP objects.</p>
     */
    inline void SetProviders(const Aws::Vector<ProviderDescription>& value) { m_providers = value; }

    /**
     * <p>A list of IdP objects.</p>
     */
    inline void SetProviders(Aws::Vector<ProviderDescription>&& value) { m_providers = std::move(value); }

    /**
     * <p>A list of IdP objects.</p>
     */
    inline ListIdentityProvidersResult& WithProviders(const Aws::Vector<ProviderDescription>& value) { SetProviders(value); return *this;}

    /**
     * <p>A list of IdP objects.</p>
     */
    inline ListIdentityProvidersResult& WithProviders(Aws::Vector<ProviderDescription>&& value) { SetProviders(std::move(value)); return *this;}

    /**
     * <p>A list of IdP objects.</p>
     */
    inline ListIdentityProvidersResult& AddProviders(const ProviderDescription& value) { m_providers.push_back(value); return *this; }

    /**
     * <p>A list of IdP objects.</p>
     */
    inline ListIdentityProvidersResult& AddProviders(ProviderDescription&& value) { m_providers.push_back(std::move(value)); return *this; }


    /**
     * <p>A pagination token.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>A pagination token.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>A pagination token.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>A pagination token.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>A pagination token.</p>
     */
    inline ListIdentityProvidersResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>A pagination token.</p>
     */
    inline ListIdentityProvidersResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>A pagination token.</p>
     */
    inline ListIdentityProvidersResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline ListIdentityProvidersResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline ListIdentityProvidersResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline ListIdentityProvidersResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::Vector<ProviderDescription> m_providers;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace CognitoIdentityProvider
} // namespace Aws
