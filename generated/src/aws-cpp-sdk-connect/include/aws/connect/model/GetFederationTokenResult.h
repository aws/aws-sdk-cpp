/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/connect/model/Credentials.h>
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
namespace Connect
{
namespace Model
{
  class GetFederationTokenResult
  {
  public:
    AWS_CONNECT_API GetFederationTokenResult();
    AWS_CONNECT_API GetFederationTokenResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CONNECT_API GetFederationTokenResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The credentials to use for federation.</p>
     */
    inline const Credentials& GetCredentials() const{ return m_credentials; }
    inline void SetCredentials(const Credentials& value) { m_credentials = value; }
    inline void SetCredentials(Credentials&& value) { m_credentials = std::move(value); }
    inline GetFederationTokenResult& WithCredentials(const Credentials& value) { SetCredentials(value); return *this;}
    inline GetFederationTokenResult& WithCredentials(Credentials&& value) { SetCredentials(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The URL to sign into the user's instance. </p>
     */
    inline const Aws::String& GetSignInUrl() const{ return m_signInUrl; }
    inline void SetSignInUrl(const Aws::String& value) { m_signInUrl = value; }
    inline void SetSignInUrl(Aws::String&& value) { m_signInUrl = std::move(value); }
    inline void SetSignInUrl(const char* value) { m_signInUrl.assign(value); }
    inline GetFederationTokenResult& WithSignInUrl(const Aws::String& value) { SetSignInUrl(value); return *this;}
    inline GetFederationTokenResult& WithSignInUrl(Aws::String&& value) { SetSignInUrl(std::move(value)); return *this;}
    inline GetFederationTokenResult& WithSignInUrl(const char* value) { SetSignInUrl(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the user.</p>
     */
    inline const Aws::String& GetUserArn() const{ return m_userArn; }
    inline void SetUserArn(const Aws::String& value) { m_userArn = value; }
    inline void SetUserArn(Aws::String&& value) { m_userArn = std::move(value); }
    inline void SetUserArn(const char* value) { m_userArn.assign(value); }
    inline GetFederationTokenResult& WithUserArn(const Aws::String& value) { SetUserArn(value); return *this;}
    inline GetFederationTokenResult& WithUserArn(Aws::String&& value) { SetUserArn(std::move(value)); return *this;}
    inline GetFederationTokenResult& WithUserArn(const char* value) { SetUserArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier for the user. This can be the ID or the ARN of the user.</p>
     */
    inline const Aws::String& GetUserId() const{ return m_userId; }
    inline void SetUserId(const Aws::String& value) { m_userId = value; }
    inline void SetUserId(Aws::String&& value) { m_userId = std::move(value); }
    inline void SetUserId(const char* value) { m_userId.assign(value); }
    inline GetFederationTokenResult& WithUserId(const Aws::String& value) { SetUserId(value); return *this;}
    inline GetFederationTokenResult& WithUserId(Aws::String&& value) { SetUserId(std::move(value)); return *this;}
    inline GetFederationTokenResult& WithUserId(const char* value) { SetUserId(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetFederationTokenResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetFederationTokenResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetFederationTokenResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Credentials m_credentials;

    Aws::String m_signInUrl;

    Aws::String m_userArn;

    Aws::String m_userId;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
