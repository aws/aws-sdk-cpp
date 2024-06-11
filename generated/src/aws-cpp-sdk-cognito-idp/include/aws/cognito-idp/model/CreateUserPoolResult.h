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
   * <p>Represents the response from the server for the request to create a user
   * pool.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/CreateUserPoolResponse">AWS
   * API Reference</a></p>
   */
  class CreateUserPoolResult
  {
  public:
    AWS_COGNITOIDENTITYPROVIDER_API CreateUserPoolResult();
    AWS_COGNITOIDENTITYPROVIDER_API CreateUserPoolResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_COGNITOIDENTITYPROVIDER_API CreateUserPoolResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A container for the user pool details.</p>
     */
    inline const UserPoolType& GetUserPool() const{ return m_userPool; }
    inline void SetUserPool(const UserPoolType& value) { m_userPool = value; }
    inline void SetUserPool(UserPoolType&& value) { m_userPool = std::move(value); }
    inline CreateUserPoolResult& WithUserPool(const UserPoolType& value) { SetUserPool(value); return *this;}
    inline CreateUserPoolResult& WithUserPool(UserPoolType&& value) { SetUserPool(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline CreateUserPoolResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline CreateUserPoolResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline CreateUserPoolResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    UserPoolType m_userPool;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace CognitoIdentityProvider
} // namespace Aws
