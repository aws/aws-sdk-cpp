﻿/**
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
  class AWS_COGNITOIDENTITYPROVIDER_API CreateResourceServerResult
  {
  public:
    CreateResourceServerResult();
    CreateResourceServerResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    CreateResourceServerResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The newly created resource server.</p>
     */
    inline const ResourceServerType& GetResourceServer() const{ return m_resourceServer; }

    /**
     * <p>The newly created resource server.</p>
     */
    inline void SetResourceServer(const ResourceServerType& value) { m_resourceServer = value; }

    /**
     * <p>The newly created resource server.</p>
     */
    inline void SetResourceServer(ResourceServerType&& value) { m_resourceServer = std::move(value); }

    /**
     * <p>The newly created resource server.</p>
     */
    inline CreateResourceServerResult& WithResourceServer(const ResourceServerType& value) { SetResourceServer(value); return *this;}

    /**
     * <p>The newly created resource server.</p>
     */
    inline CreateResourceServerResult& WithResourceServer(ResourceServerType&& value) { SetResourceServer(std::move(value)); return *this;}

  private:

    ResourceServerType m_resourceServer;
  };

} // namespace Model
} // namespace CognitoIdentityProvider
} // namespace Aws
