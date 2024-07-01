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
    AWS_CONNECT_API DescribeAuthenticationProfileResult();
    AWS_CONNECT_API DescribeAuthenticationProfileResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CONNECT_API DescribeAuthenticationProfileResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The authentication profile object being described.</p>
     */
    inline const AuthenticationProfile& GetAuthenticationProfile() const{ return m_authenticationProfile; }
    inline void SetAuthenticationProfile(const AuthenticationProfile& value) { m_authenticationProfile = value; }
    inline void SetAuthenticationProfile(AuthenticationProfile&& value) { m_authenticationProfile = std::move(value); }
    inline DescribeAuthenticationProfileResult& WithAuthenticationProfile(const AuthenticationProfile& value) { SetAuthenticationProfile(value); return *this;}
    inline DescribeAuthenticationProfileResult& WithAuthenticationProfile(AuthenticationProfile&& value) { SetAuthenticationProfile(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline DescribeAuthenticationProfileResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline DescribeAuthenticationProfileResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline DescribeAuthenticationProfileResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    AuthenticationProfile m_authenticationProfile;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
