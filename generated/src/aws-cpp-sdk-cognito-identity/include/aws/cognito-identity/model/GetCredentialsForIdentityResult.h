/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class GetCredentialsForIdentityResult
  {
  public:
    AWS_COGNITOIDENTITY_API GetCredentialsForIdentityResult();
    AWS_COGNITOIDENTITY_API GetCredentialsForIdentityResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_COGNITOIDENTITY_API GetCredentialsForIdentityResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


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
