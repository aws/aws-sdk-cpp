﻿/*
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
#include <aws/cognito-idp/CognitoIdentityProvider_EXPORTS.h>
#include <aws/cognito-idp/model/UserPoolType.h>

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
  /**
   * <p>Represents the response to describe the user pool.</p>
   */
  class AWS_COGNITOIDENTITYPROVIDER_API DescribeUserPoolResult
  {
  public:
    DescribeUserPoolResult();
    DescribeUserPoolResult(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    DescribeUserPoolResult& operator=(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

    /**
     * <p>The container of metadata returned by the server to describe the pool.</p>
     */
    inline const UserPoolType& GetUserPool() const{ return m_userPool; }

    /**
     * <p>The container of metadata returned by the server to describe the pool.</p>
     */
    inline void SetUserPool(const UserPoolType& value) { m_userPool = value; }

    /**
     * <p>The container of metadata returned by the server to describe the pool.</p>
     */
    inline void SetUserPool(UserPoolType&& value) { m_userPool = value; }

    /**
     * <p>The container of metadata returned by the server to describe the pool.</p>
     */
    inline DescribeUserPoolResult& WithUserPool(const UserPoolType& value) { SetUserPool(value); return *this;}

    /**
     * <p>The container of metadata returned by the server to describe the pool.</p>
     */
    inline DescribeUserPoolResult& WithUserPool(UserPoolType&& value) { SetUserPool(value); return *this;}

  private:
    UserPoolType m_userPool;
  };

} // namespace Model
} // namespace CognitoIdentityProvider
} // namespace Aws
