/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/cognito-identity/CognitoIdentity_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

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
namespace CognitoIdentity
{
namespace Model
{
  /**
   * Returned in response to a successful GetOpenIdToken request.
   */
  class AWS_COGNITOIDENTITY_API GetOpenIdTokenResult
  {
  public:
    GetOpenIdTokenResult();
    GetOpenIdTokenResult(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    GetOpenIdTokenResult& operator=(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

    /**
     * A unique identifier in the format REGION:GUID. Note that the IdentityId returned
     * may not match the one passed on input.
     */
    inline const Aws::String& GetIdentityId() const{ return m_identityId; }

    /**
     * A unique identifier in the format REGION:GUID. Note that the IdentityId returned
     * may not match the one passed on input.
     */
    inline void SetIdentityId(const Aws::String& value) { m_identityId = value; }

    /**
     * A unique identifier in the format REGION:GUID. Note that the IdentityId returned
     * may not match the one passed on input.
     */
    inline void SetIdentityId(Aws::String&& value) { m_identityId = value; }

    /**
     * A unique identifier in the format REGION:GUID. Note that the IdentityId returned
     * may not match the one passed on input.
     */
    inline void SetIdentityId(const char* value) { m_identityId.assign(value); }

    /**
     * A unique identifier in the format REGION:GUID. Note that the IdentityId returned
     * may not match the one passed on input.
     */
    inline GetOpenIdTokenResult& WithIdentityId(const Aws::String& value) { SetIdentityId(value); return *this;}

    /**
     * A unique identifier in the format REGION:GUID. Note that the IdentityId returned
     * may not match the one passed on input.
     */
    inline GetOpenIdTokenResult& WithIdentityId(Aws::String&& value) { SetIdentityId(value); return *this;}

    /**
     * A unique identifier in the format REGION:GUID. Note that the IdentityId returned
     * may not match the one passed on input.
     */
    inline GetOpenIdTokenResult& WithIdentityId(const char* value) { SetIdentityId(value); return *this;}

    /**
     * An OpenID token, valid for 15 minutes.
     */
    inline const Aws::String& GetToken() const{ return m_token; }

    /**
     * An OpenID token, valid for 15 minutes.
     */
    inline void SetToken(const Aws::String& value) { m_token = value; }

    /**
     * An OpenID token, valid for 15 minutes.
     */
    inline void SetToken(Aws::String&& value) { m_token = value; }

    /**
     * An OpenID token, valid for 15 minutes.
     */
    inline void SetToken(const char* value) { m_token.assign(value); }

    /**
     * An OpenID token, valid for 15 minutes.
     */
    inline GetOpenIdTokenResult& WithToken(const Aws::String& value) { SetToken(value); return *this;}

    /**
     * An OpenID token, valid for 15 minutes.
     */
    inline GetOpenIdTokenResult& WithToken(Aws::String&& value) { SetToken(value); return *this;}

    /**
     * An OpenID token, valid for 15 minutes.
     */
    inline GetOpenIdTokenResult& WithToken(const char* value) { SetToken(value); return *this;}

  private:
    Aws::String m_identityId;
    Aws::String m_token;
  };

} // namespace Model
} // namespace CognitoIdentity
} // namespace Aws
