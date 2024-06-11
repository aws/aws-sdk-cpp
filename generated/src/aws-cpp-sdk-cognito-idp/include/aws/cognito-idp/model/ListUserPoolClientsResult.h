/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cognito-idp/CognitoIdentityProvider_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/cognito-idp/model/UserPoolClientDescription.h>
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
   * <p>Represents the response from the server that lists user pool
   * clients.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/ListUserPoolClientsResponse">AWS
   * API Reference</a></p>
   */
  class ListUserPoolClientsResult
  {
  public:
    AWS_COGNITOIDENTITYPROVIDER_API ListUserPoolClientsResult();
    AWS_COGNITOIDENTITYPROVIDER_API ListUserPoolClientsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_COGNITOIDENTITYPROVIDER_API ListUserPoolClientsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The user pool clients in the response that lists user pool clients.</p>
     */
    inline const Aws::Vector<UserPoolClientDescription>& GetUserPoolClients() const{ return m_userPoolClients; }
    inline void SetUserPoolClients(const Aws::Vector<UserPoolClientDescription>& value) { m_userPoolClients = value; }
    inline void SetUserPoolClients(Aws::Vector<UserPoolClientDescription>&& value) { m_userPoolClients = std::move(value); }
    inline ListUserPoolClientsResult& WithUserPoolClients(const Aws::Vector<UserPoolClientDescription>& value) { SetUserPoolClients(value); return *this;}
    inline ListUserPoolClientsResult& WithUserPoolClients(Aws::Vector<UserPoolClientDescription>&& value) { SetUserPoolClients(std::move(value)); return *this;}
    inline ListUserPoolClientsResult& AddUserPoolClients(const UserPoolClientDescription& value) { m_userPoolClients.push_back(value); return *this; }
    inline ListUserPoolClientsResult& AddUserPoolClients(UserPoolClientDescription&& value) { m_userPoolClients.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>An identifier that was returned from the previous call to this operation,
     * which can be used to return the next set of items in the list.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListUserPoolClientsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListUserPoolClientsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListUserPoolClientsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListUserPoolClientsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListUserPoolClientsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListUserPoolClientsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<UserPoolClientDescription> m_userPoolClients;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace CognitoIdentityProvider
} // namespace Aws
