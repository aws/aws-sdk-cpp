/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cognito-idp/CognitoIdentityProvider_EXPORTS.h>
#include <aws/cognito-idp/model/ResourceServerType.h>
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
namespace CognitoIdentityProvider
{
namespace Model
{
  class DescribeResourceServerResult
  {
  public:
    AWS_COGNITOIDENTITYPROVIDER_API DescribeResourceServerResult();
    AWS_COGNITOIDENTITYPROVIDER_API DescribeResourceServerResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_COGNITOIDENTITYPROVIDER_API DescribeResourceServerResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The resource server.</p>
     */
    inline const ResourceServerType& GetResourceServer() const{ return m_resourceServer; }
    inline void SetResourceServer(const ResourceServerType& value) { m_resourceServer = value; }
    inline void SetResourceServer(ResourceServerType&& value) { m_resourceServer = std::move(value); }
    inline DescribeResourceServerResult& WithResourceServer(const ResourceServerType& value) { SetResourceServer(value); return *this;}
    inline DescribeResourceServerResult& WithResourceServer(ResourceServerType&& value) { SetResourceServer(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline DescribeResourceServerResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline DescribeResourceServerResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline DescribeResourceServerResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    ResourceServerType m_resourceServer;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace CognitoIdentityProvider
} // namespace Aws
