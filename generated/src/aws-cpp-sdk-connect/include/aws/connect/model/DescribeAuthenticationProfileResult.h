/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/connect/model/AuthenticationProfile.h>
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
  class DescribeAuthenticationProfileResult
  {
  public:
    AWS_CONNECT_API DescribeAuthenticationProfileResult() = default;
    AWS_CONNECT_API DescribeAuthenticationProfileResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CONNECT_API DescribeAuthenticationProfileResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The authentication profile object being described.</p>
     */
    inline const AuthenticationProfile& GetAuthenticationProfile() const { return m_authenticationProfile; }
    template<typename AuthenticationProfileT = AuthenticationProfile>
    void SetAuthenticationProfile(AuthenticationProfileT&& value) { m_authenticationProfileHasBeenSet = true; m_authenticationProfile = std::forward<AuthenticationProfileT>(value); }
    template<typename AuthenticationProfileT = AuthenticationProfile>
    DescribeAuthenticationProfileResult& WithAuthenticationProfile(AuthenticationProfileT&& value) { SetAuthenticationProfile(std::forward<AuthenticationProfileT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeAuthenticationProfileResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    AuthenticationProfile m_authenticationProfile;
    bool m_authenticationProfileHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
