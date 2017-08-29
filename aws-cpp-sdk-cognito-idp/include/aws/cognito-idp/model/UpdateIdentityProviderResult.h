/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
  class AWS_COGNITOIDENTITYPROVIDER_API UpdateIdentityProviderResult
  {
  public:
    UpdateIdentityProviderResult();
    UpdateIdentityProviderResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    UpdateIdentityProviderResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The identity provider object.</p>
     */
    inline const IdentityProviderType& GetIdentityProvider() const{ return m_identityProvider; }

    /**
     * <p>The identity provider object.</p>
     */
    inline void SetIdentityProvider(const IdentityProviderType& value) { m_identityProvider = value; }

    /**
     * <p>The identity provider object.</p>
     */
    inline void SetIdentityProvider(IdentityProviderType&& value) { m_identityProvider = std::move(value); }

    /**
     * <p>The identity provider object.</p>
     */
    inline UpdateIdentityProviderResult& WithIdentityProvider(const IdentityProviderType& value) { SetIdentityProvider(value); return *this;}

    /**
     * <p>The identity provider object.</p>
     */
    inline UpdateIdentityProviderResult& WithIdentityProvider(IdentityProviderType&& value) { SetIdentityProvider(std::move(value)); return *this;}

  private:

    IdentityProviderType m_identityProvider;
  };

} // namespace Model
} // namespace CognitoIdentityProvider
} // namespace Aws
