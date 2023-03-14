/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cognito-idp/CognitoIdentityProvider_EXPORTS.h>
#include <aws/cognito-idp/model/UserPoolType.h>
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
  /**
   * <p>Represents the response to describe the user pool.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/DescribeUserPoolResponse">AWS
   * API Reference</a></p>
   */
  class DescribeUserPoolResult
  {
  public:
    AWS_COGNITOIDENTITYPROVIDER_API DescribeUserPoolResult();
    AWS_COGNITOIDENTITYPROVIDER_API DescribeUserPoolResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_COGNITOIDENTITYPROVIDER_API DescribeUserPoolResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


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
    inline void SetUserPool(UserPoolType&& value) { m_userPool = std::move(value); }

    /**
     * <p>The container of metadata returned by the server to describe the pool.</p>
     */
    inline DescribeUserPoolResult& WithUserPool(const UserPoolType& value) { SetUserPool(value); return *this;}

    /**
     * <p>The container of metadata returned by the server to describe the pool.</p>
     */
    inline DescribeUserPoolResult& WithUserPool(UserPoolType&& value) { SetUserPool(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline DescribeUserPoolResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline DescribeUserPoolResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline DescribeUserPoolResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    UserPoolType m_userPool;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace CognitoIdentityProvider
} // namespace Aws
