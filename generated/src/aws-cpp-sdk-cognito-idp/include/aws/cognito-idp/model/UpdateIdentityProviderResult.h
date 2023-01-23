/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cognito-idp/CognitoIdentityProvider_EXPORTS.h>
#include <aws/cognito-idp/model/IdentityProviderType.h>
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
  class UpdateIdentityProviderResult
  {
  public:
    AWS_COGNITOIDENTITYPROVIDER_API UpdateIdentityProviderResult();
    AWS_COGNITOIDENTITYPROVIDER_API UpdateIdentityProviderResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_COGNITOIDENTITYPROVIDER_API UpdateIdentityProviderResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The identity provider details.</p>
     */
    inline const IdentityProviderType& GetIdentityProvider() const{ return m_identityProvider; }

    /**
     * <p>The identity provider details.</p>
     */
    inline void SetIdentityProvider(const IdentityProviderType& value) { m_identityProvider = value; }

    /**
     * <p>The identity provider details.</p>
     */
    inline void SetIdentityProvider(IdentityProviderType&& value) { m_identityProvider = std::move(value); }

    /**
     * <p>The identity provider details.</p>
     */
    inline UpdateIdentityProviderResult& WithIdentityProvider(const IdentityProviderType& value) { SetIdentityProvider(value); return *this;}

    /**
     * <p>The identity provider details.</p>
     */
    inline UpdateIdentityProviderResult& WithIdentityProvider(IdentityProviderType&& value) { SetIdentityProvider(std::move(value)); return *this;}

  private:

    IdentityProviderType m_identityProvider;
  };

} // namespace Model
} // namespace CognitoIdentityProvider
} // namespace Aws
