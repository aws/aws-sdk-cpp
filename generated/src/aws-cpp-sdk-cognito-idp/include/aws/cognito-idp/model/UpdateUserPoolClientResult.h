/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cognito-idp/CognitoIdentityProvider_EXPORTS.h>
#include <aws/cognito-idp/model/UserPoolClientType.h>
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
   * <p>Represents the response from the server to the request to update the user
   * pool client.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/UpdateUserPoolClientResponse">AWS
   * API Reference</a></p>
   */
  class UpdateUserPoolClientResult
  {
  public:
    AWS_COGNITOIDENTITYPROVIDER_API UpdateUserPoolClientResult();
    AWS_COGNITOIDENTITYPROVIDER_API UpdateUserPoolClientResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_COGNITOIDENTITYPROVIDER_API UpdateUserPoolClientResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The user pool client value from the response from the server when you request
     * to update the user pool client.</p>
     */
    inline const UserPoolClientType& GetUserPoolClient() const{ return m_userPoolClient; }
    inline void SetUserPoolClient(const UserPoolClientType& value) { m_userPoolClient = value; }
    inline void SetUserPoolClient(UserPoolClientType&& value) { m_userPoolClient = std::move(value); }
    inline UpdateUserPoolClientResult& WithUserPoolClient(const UserPoolClientType& value) { SetUserPoolClient(value); return *this;}
    inline UpdateUserPoolClientResult& WithUserPoolClient(UserPoolClientType&& value) { SetUserPoolClient(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline UpdateUserPoolClientResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline UpdateUserPoolClientResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline UpdateUserPoolClientResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    UserPoolClientType m_userPoolClient;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace CognitoIdentityProvider
} // namespace Aws
