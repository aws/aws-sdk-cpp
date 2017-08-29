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
#include <aws/cognito-sync/CognitoSync_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/cognito-sync/model/IdentityPoolUsage.h>
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
namespace CognitoSync
{
namespace Model
{
  /**
   * Returned for a successful ListIdentityPoolUsage request.<p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-sync-2014-06-30/ListIdentityPoolUsageResponse">AWS
   * API Reference</a></p>
   */
  class AWS_COGNITOSYNC_API ListIdentityPoolUsageResult
  {
  public:
    ListIdentityPoolUsageResult();
    ListIdentityPoolUsageResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    ListIdentityPoolUsageResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * Usage information for the identity pools.
     */
    inline const Aws::Vector<IdentityPoolUsage>& GetIdentityPoolUsages() const{ return m_identityPoolUsages; }

    /**
     * Usage information for the identity pools.
     */
    inline void SetIdentityPoolUsages(const Aws::Vector<IdentityPoolUsage>& value) { m_identityPoolUsages = value; }

    /**
     * Usage information for the identity pools.
     */
    inline void SetIdentityPoolUsages(Aws::Vector<IdentityPoolUsage>&& value) { m_identityPoolUsages = std::move(value); }

    /**
     * Usage information for the identity pools.
     */
    inline ListIdentityPoolUsageResult& WithIdentityPoolUsages(const Aws::Vector<IdentityPoolUsage>& value) { SetIdentityPoolUsages(value); return *this;}

    /**
     * Usage information for the identity pools.
     */
    inline ListIdentityPoolUsageResult& WithIdentityPoolUsages(Aws::Vector<IdentityPoolUsage>&& value) { SetIdentityPoolUsages(std::move(value)); return *this;}

    /**
     * Usage information for the identity pools.
     */
    inline ListIdentityPoolUsageResult& AddIdentityPoolUsages(const IdentityPoolUsage& value) { m_identityPoolUsages.push_back(value); return *this; }

    /**
     * Usage information for the identity pools.
     */
    inline ListIdentityPoolUsageResult& AddIdentityPoolUsages(IdentityPoolUsage&& value) { m_identityPoolUsages.push_back(std::move(value)); return *this; }


    /**
     * The maximum number of results to be returned.
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * The maximum number of results to be returned.
     */
    inline void SetMaxResults(int value) { m_maxResults = value; }

    /**
     * The maximum number of results to be returned.
     */
    inline ListIdentityPoolUsageResult& WithMaxResults(int value) { SetMaxResults(value); return *this;}


    /**
     * Total number of identities for the identity pool.
     */
    inline int GetCount() const{ return m_count; }

    /**
     * Total number of identities for the identity pool.
     */
    inline void SetCount(int value) { m_count = value; }

    /**
     * Total number of identities for the identity pool.
     */
    inline ListIdentityPoolUsageResult& WithCount(int value) { SetCount(value); return *this;}


    /**
     * A pagination token for obtaining the next page of results.
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * A pagination token for obtaining the next page of results.
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * A pagination token for obtaining the next page of results.
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * A pagination token for obtaining the next page of results.
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * A pagination token for obtaining the next page of results.
     */
    inline ListIdentityPoolUsageResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * A pagination token for obtaining the next page of results.
     */
    inline ListIdentityPoolUsageResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * A pagination token for obtaining the next page of results.
     */
    inline ListIdentityPoolUsageResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<IdentityPoolUsage> m_identityPoolUsages;

    int m_maxResults;

    int m_count;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace CognitoSync
} // namespace Aws
