/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cognito-idp/CognitoIdentityProvider_EXPORTS.h>
#include <aws/cognito-idp/model/ResourceServerType.h>
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


    /**
     * <p>The resource server.</p>
     */
    inline const ResourceServerType& GetResourceServer() const{ return m_resourceServer; }

    /**
     * <p>The resource server.</p>
     */
    inline void SetResourceServer(const ResourceServerType& value) { m_resourceServer = value; }

    /**
     * <p>The resource server.</p>
     */
    inline void SetResourceServer(ResourceServerType&& value) { m_resourceServer = std::move(value); }

    /**
     * <p>The resource server.</p>
     */
    inline DescribeResourceServerResult& WithResourceServer(const ResourceServerType& value) { SetResourceServer(value); return *this;}

    /**
     * <p>The resource server.</p>
     */
    inline DescribeResourceServerResult& WithResourceServer(ResourceServerType&& value) { SetResourceServer(std::move(value)); return *this;}

  private:

    ResourceServerType m_resourceServer;
  };

} // namespace Model
} // namespace CognitoIdentityProvider
} // namespace Aws
