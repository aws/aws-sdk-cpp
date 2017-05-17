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
#include <aws/cognito-identity/CognitoIdentity_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/cognito-identity/model/Credentials.h>
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
namespace CognitoIdentity
{
namespace Model
{
  /**
   * <p>Returned in response to a successful <code>GetCredentialsForIdentity</code>
   * operation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-identity-2014-06-30/GetCredentialsForIdentityResponse">AWS
   * API Reference</a></p>
   */
  class AWS_COGNITOIDENTITY_API GetCredentialsForIdentityResult
  {
  public:
    GetCredentialsForIdentityResult();
    GetCredentialsForIdentityResult(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    GetCredentialsForIdentityResult& operator=(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

    /**
     * <p>A unique identifier in the format REGION:GUID.</p>
     */
    inline const Aws::String& GetIdentityId() const{ return m_identityId; }

    /**
     * <p>A unique identifier in the format REGION:GUID.</p>
     */
    inline void SetIdentityId(const Aws::String& value) { m_identityId = value; }

    /**
     * <p>A unique identifier in the format REGION:GUID.</p>
     */
    inline void SetIdentityId(Aws::String&& value) { m_identityId = std::move(value); }

    /**
     * <p>A unique identifier in the format REGION:GUID.</p>
     */
    inline void SetIdentityId(const char* value) { m_identityId.assign(value); }

    /**
     * <p>A unique identifier in the format REGION:GUID.</p>
     */
    inline GetCredentialsForIdentityResult& WithIdentityId(const Aws::String& value) { SetIdentityId(value); return *this;}

    /**
     * <p>A unique identifier in the format REGION:GUID.</p>
     */
    inline GetCredentialsForIdentityResult& WithIdentityId(Aws::String&& value) { SetIdentityId(std::move(value)); return *this;}

    /**
     * <p>A unique identifier in the format REGION:GUID.</p>
     */
    inline GetCredentialsForIdentityResult& WithIdentityId(const char* value) { SetIdentityId(value); return *this;}

    /**
     * <p>Credentials for the provided identity ID.</p>
     */
    inline const Credentials& GetCredentials() const{ return m_credentials; }

    /**
     * <p>Credentials for the provided identity ID.</p>
     */
    inline void SetCredentials(const Credentials& value) { m_credentials = value; }

    /**
     * <p>Credentials for the provided identity ID.</p>
     */
    inline void SetCredentials(Credentials&& value) { m_credentials = std::move(value); }

    /**
     * <p>Credentials for the provided identity ID.</p>
     */
    inline GetCredentialsForIdentityResult& WithCredentials(const Credentials& value) { SetCredentials(value); return *this;}

    /**
     * <p>Credentials for the provided identity ID.</p>
     */
    inline GetCredentialsForIdentityResult& WithCredentials(Credentials&& value) { SetCredentials(std::move(value)); return *this;}

  private:
    Aws::String m_identityId;
    Credentials m_credentials;
  };

} // namespace Model
} // namespace CognitoIdentity
} // namespace Aws
