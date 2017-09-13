/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
  class AWS_COGNITOIDENTITYPROVIDER_API ListUserPoolClientsResult
  {
  public:
    ListUserPoolClientsResult();
    ListUserPoolClientsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    ListUserPoolClientsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The user pool clients in the response that lists user pool clients.</p>
     */
    inline const Aws::Vector<UserPoolClientDescription>& GetUserPoolClients() const{ return m_userPoolClients; }

    /**
     * <p>The user pool clients in the response that lists user pool clients.</p>
     */
    inline void SetUserPoolClients(const Aws::Vector<UserPoolClientDescription>& value) { m_userPoolClients = value; }

    /**
     * <p>The user pool clients in the response that lists user pool clients.</p>
     */
    inline void SetUserPoolClients(Aws::Vector<UserPoolClientDescription>&& value) { m_userPoolClients = std::move(value); }

    /**
     * <p>The user pool clients in the response that lists user pool clients.</p>
     */
    inline ListUserPoolClientsResult& WithUserPoolClients(const Aws::Vector<UserPoolClientDescription>& value) { SetUserPoolClients(value); return *this;}

    /**
     * <p>The user pool clients in the response that lists user pool clients.</p>
     */
    inline ListUserPoolClientsResult& WithUserPoolClients(Aws::Vector<UserPoolClientDescription>&& value) { SetUserPoolClients(std::move(value)); return *this;}

    /**
     * <p>The user pool clients in the response that lists user pool clients.</p>
     */
    inline ListUserPoolClientsResult& AddUserPoolClients(const UserPoolClientDescription& value) { m_userPoolClients.push_back(value); return *this; }

    /**
     * <p>The user pool clients in the response that lists user pool clients.</p>
     */
    inline ListUserPoolClientsResult& AddUserPoolClients(UserPoolClientDescription&& value) { m_userPoolClients.push_back(std::move(value)); return *this; }


    /**
     * <p>An identifier that was returned from the previous call to this operation,
     * which can be used to return the next set of items in the list.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>An identifier that was returned from the previous call to this operation,
     * which can be used to return the next set of items in the list.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>An identifier that was returned from the previous call to this operation,
     * which can be used to return the next set of items in the list.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>An identifier that was returned from the previous call to this operation,
     * which can be used to return the next set of items in the list.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>An identifier that was returned from the previous call to this operation,
     * which can be used to return the next set of items in the list.</p>
     */
    inline ListUserPoolClientsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>An identifier that was returned from the previous call to this operation,
     * which can be used to return the next set of items in the list.</p>
     */
    inline ListUserPoolClientsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>An identifier that was returned from the previous call to this operation,
     * which can be used to return the next set of items in the list.</p>
     */
    inline ListUserPoolClientsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<UserPoolClientDescription> m_userPoolClients;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace CognitoIdentityProvider
} // namespace Aws
