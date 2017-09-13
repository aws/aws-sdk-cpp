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
#include <aws/cognito-idp/model/UserPoolDescriptionType.h>
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
   * <p>Represents the response to list user pools.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/ListUserPoolsResponse">AWS
   * API Reference</a></p>
   */
  class AWS_COGNITOIDENTITYPROVIDER_API ListUserPoolsResult
  {
  public:
    ListUserPoolsResult();
    ListUserPoolsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    ListUserPoolsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The user pools from the response to list users.</p>
     */
    inline const Aws::Vector<UserPoolDescriptionType>& GetUserPools() const{ return m_userPools; }

    /**
     * <p>The user pools from the response to list users.</p>
     */
    inline void SetUserPools(const Aws::Vector<UserPoolDescriptionType>& value) { m_userPools = value; }

    /**
     * <p>The user pools from the response to list users.</p>
     */
    inline void SetUserPools(Aws::Vector<UserPoolDescriptionType>&& value) { m_userPools = std::move(value); }

    /**
     * <p>The user pools from the response to list users.</p>
     */
    inline ListUserPoolsResult& WithUserPools(const Aws::Vector<UserPoolDescriptionType>& value) { SetUserPools(value); return *this;}

    /**
     * <p>The user pools from the response to list users.</p>
     */
    inline ListUserPoolsResult& WithUserPools(Aws::Vector<UserPoolDescriptionType>&& value) { SetUserPools(std::move(value)); return *this;}

    /**
     * <p>The user pools from the response to list users.</p>
     */
    inline ListUserPoolsResult& AddUserPools(const UserPoolDescriptionType& value) { m_userPools.push_back(value); return *this; }

    /**
     * <p>The user pools from the response to list users.</p>
     */
    inline ListUserPoolsResult& AddUserPools(UserPoolDescriptionType&& value) { m_userPools.push_back(std::move(value)); return *this; }


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
    inline ListUserPoolsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>An identifier that was returned from the previous call to this operation,
     * which can be used to return the next set of items in the list.</p>
     */
    inline ListUserPoolsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>An identifier that was returned from the previous call to this operation,
     * which can be used to return the next set of items in the list.</p>
     */
    inline ListUserPoolsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<UserPoolDescriptionType> m_userPools;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace CognitoIdentityProvider
} // namespace Aws
