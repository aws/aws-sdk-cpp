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
    AWS_CONNECT_API GetFederationTokenResult() = default;
    AWS_CONNECT_API GetFederationTokenResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CONNECT_API GetFederationTokenResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The credentials to use for federation.</p>
     */
    inline const Credentials& GetCredentials() const { return m_credentials; }
    template<typename CredentialsT = Credentials>
    void SetCredentials(CredentialsT&& value) { m_credentialsHasBeenSet = true; m_credentials = std::forward<CredentialsT>(value); }
    template<typename CredentialsT = Credentials>
    GetFederationTokenResult& WithCredentials(CredentialsT&& value) { SetCredentials(std::forward<CredentialsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The URL to sign into the user's instance. </p>
     */
    inline const Aws::String& GetSignInUrl() const { return m_signInUrl; }
    template<typename SignInUrlT = Aws::String>
    void SetSignInUrl(SignInUrlT&& value) { m_signInUrlHasBeenSet = true; m_signInUrl = std::forward<SignInUrlT>(value); }
    template<typename SignInUrlT = Aws::String>
    GetFederationTokenResult& WithSignInUrl(SignInUrlT&& value) { SetSignInUrl(std::forward<SignInUrlT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the user.</p>
     */
    inline const Aws::String& GetUserArn() const { return m_userArn; }
    template<typename UserArnT = Aws::String>
    void SetUserArn(UserArnT&& value) { m_userArnHasBeenSet = true; m_userArn = std::forward<UserArnT>(value); }
    template<typename UserArnT = Aws::String>
    GetFederationTokenResult& WithUserArn(UserArnT&& value) { SetUserArn(std::forward<UserArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier for the user. This can be the ID or the ARN of the user.</p>
     */
    inline const Aws::String& GetUserId() const { return m_userId; }
    template<typename UserIdT = Aws::String>
    void SetUserId(UserIdT&& value) { m_userIdHasBeenSet = true; m_userId = std::forward<UserIdT>(value); }
    template<typename UserIdT = Aws::String>
    GetFederationTokenResult& WithUserId(UserIdT&& value) { SetUserId(std::forward<UserIdT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetFederationTokenResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Credentials m_credentials;
    bool m_credentialsHasBeenSet = false;

    Aws::String m_signInUrl;
    bool m_signInUrlHasBeenSet = false;

    Aws::String m_userArn;
    bool m_userArnHasBeenSet = false;

    Aws::String m_userId;
    bool m_userIdHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
