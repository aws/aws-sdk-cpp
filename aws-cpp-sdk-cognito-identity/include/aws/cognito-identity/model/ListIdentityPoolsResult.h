/*
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
#include <aws/cognito-identity/CognitoIdentity_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/cognito-identity/model/IdentityPoolShortDescription.h>

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
namespace CognitoIdentity
{
namespace Model
{
  /**
   * The result of a successful ListIdentityPools action.
   */
  class AWS_COGNITOIDENTITY_API ListIdentityPoolsResult
  {
  public:
    ListIdentityPoolsResult();
    ListIdentityPoolsResult(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    ListIdentityPoolsResult& operator=(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

    /**
     * The identity pools returned by the ListIdentityPools action.
     */
    inline const Aws::Vector<IdentityPoolShortDescription>& GetIdentityPools() const{ return m_identityPools; }

    /**
     * The identity pools returned by the ListIdentityPools action.
     */
    inline void SetIdentityPools(const Aws::Vector<IdentityPoolShortDescription>& value) { m_identityPools = value; }

    /**
     * The identity pools returned by the ListIdentityPools action.
     */
    inline void SetIdentityPools(Aws::Vector<IdentityPoolShortDescription>&& value) { m_identityPools = value; }

    /**
     * The identity pools returned by the ListIdentityPools action.
     */
    inline ListIdentityPoolsResult& WithIdentityPools(const Aws::Vector<IdentityPoolShortDescription>& value) { SetIdentityPools(value); return *this;}

    /**
     * The identity pools returned by the ListIdentityPools action.
     */
    inline ListIdentityPoolsResult& WithIdentityPools(Aws::Vector<IdentityPoolShortDescription>&& value) { SetIdentityPools(value); return *this;}

    /**
     * The identity pools returned by the ListIdentityPools action.
     */
    inline ListIdentityPoolsResult& AddIdentityPools(const IdentityPoolShortDescription& value) { m_identityPools.push_back(value); return *this; }

    /**
     * The identity pools returned by the ListIdentityPools action.
     */
    inline ListIdentityPoolsResult& AddIdentityPools(IdentityPoolShortDescription&& value) { m_identityPools.push_back(value); return *this; }

    /**
     * A pagination token.
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * A pagination token.
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * A pagination token.
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = value; }

    /**
     * A pagination token.
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * A pagination token.
     */
    inline ListIdentityPoolsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * A pagination token.
     */
    inline ListIdentityPoolsResult& WithNextToken(Aws::String&& value) { SetNextToken(value); return *this;}

    /**
     * A pagination token.
     */
    inline ListIdentityPoolsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:
    Aws::Vector<IdentityPoolShortDescription> m_identityPools;
    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace CognitoIdentity
} // namespace Aws
