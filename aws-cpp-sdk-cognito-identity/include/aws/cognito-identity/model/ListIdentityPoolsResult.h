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
namespace CognitoIdentity
{
namespace Model
{
  /**
   * <p>The result of a successful ListIdentityPools action.</p><p><h3>See Also:</h3>
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-identity-2014-06-30/ListIdentityPoolsResponse">AWS
   * API Reference</a></p>
   */
  class AWS_COGNITOIDENTITY_API ListIdentityPoolsResult
  {
  public:
    ListIdentityPoolsResult();
    ListIdentityPoolsResult(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    ListIdentityPoolsResult& operator=(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

    /**
     * <p>The identity pools returned by the ListIdentityPools action.</p>
     */
    inline const Aws::Vector<IdentityPoolShortDescription>& GetIdentityPools() const{ return m_identityPools; }

    /**
     * <p>The identity pools returned by the ListIdentityPools action.</p>
     */
    inline void SetIdentityPools(const Aws::Vector<IdentityPoolShortDescription>& value) { m_identityPools = value; }

    /**
     * <p>The identity pools returned by the ListIdentityPools action.</p>
     */
    inline void SetIdentityPools(Aws::Vector<IdentityPoolShortDescription>&& value) { m_identityPools = std::move(value); }

    /**
     * <p>The identity pools returned by the ListIdentityPools action.</p>
     */
    inline ListIdentityPoolsResult& WithIdentityPools(const Aws::Vector<IdentityPoolShortDescription>& value) { SetIdentityPools(value); return *this;}

    /**
     * <p>The identity pools returned by the ListIdentityPools action.</p>
     */
    inline ListIdentityPoolsResult& WithIdentityPools(Aws::Vector<IdentityPoolShortDescription>&& value) { SetIdentityPools(std::move(value)); return *this;}

    /**
     * <p>The identity pools returned by the ListIdentityPools action.</p>
     */
    inline ListIdentityPoolsResult& AddIdentityPools(const IdentityPoolShortDescription& value) { m_identityPools.push_back(value); return *this; }

    /**
     * <p>The identity pools returned by the ListIdentityPools action.</p>
     */
    inline ListIdentityPoolsResult& AddIdentityPools(IdentityPoolShortDescription&& value) { m_identityPools.push_back(std::move(value)); return *this; }

    /**
     * <p>A pagination token.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>A pagination token.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>A pagination token.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>A pagination token.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>A pagination token.</p>
     */
    inline ListIdentityPoolsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>A pagination token.</p>
     */
    inline ListIdentityPoolsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>A pagination token.</p>
     */
    inline ListIdentityPoolsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:
    Aws::Vector<IdentityPoolShortDescription> m_identityPools;
    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace CognitoIdentity
} // namespace Aws
