/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class ListIdentityPoolUsageResult
  {
  public:
    AWS_COGNITOSYNC_API ListIdentityPoolUsageResult();
    AWS_COGNITOSYNC_API ListIdentityPoolUsageResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_COGNITOSYNC_API ListIdentityPoolUsageResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * Usage information for the identity pools.
     */
    inline const Aws::Vector<IdentityPoolUsage>& GetIdentityPoolUsages() const{ return m_identityPoolUsages; }
    inline void SetIdentityPoolUsages(const Aws::Vector<IdentityPoolUsage>& value) { m_identityPoolUsages = value; }
    inline void SetIdentityPoolUsages(Aws::Vector<IdentityPoolUsage>&& value) { m_identityPoolUsages = std::move(value); }
    inline ListIdentityPoolUsageResult& WithIdentityPoolUsages(const Aws::Vector<IdentityPoolUsage>& value) { SetIdentityPoolUsages(value); return *this;}
    inline ListIdentityPoolUsageResult& WithIdentityPoolUsages(Aws::Vector<IdentityPoolUsage>&& value) { SetIdentityPoolUsages(std::move(value)); return *this;}
    inline ListIdentityPoolUsageResult& AddIdentityPoolUsages(const IdentityPoolUsage& value) { m_identityPoolUsages.push_back(value); return *this; }
    inline ListIdentityPoolUsageResult& AddIdentityPoolUsages(IdentityPoolUsage&& value) { m_identityPoolUsages.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * The maximum number of results to be returned.
     */
    inline int GetMaxResults() const{ return m_maxResults; }
    inline void SetMaxResults(int value) { m_maxResults = value; }
    inline ListIdentityPoolUsageResult& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}

    ///@{
    /**
     * Total number of identities for the identity pool.
     */
    inline int GetCount() const{ return m_count; }
    inline void SetCount(int value) { m_count = value; }
    inline ListIdentityPoolUsageResult& WithCount(int value) { SetCount(value); return *this;}
    ///@}

    ///@{
    /**
     * A pagination token for obtaining the next page of results.
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListIdentityPoolUsageResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListIdentityPoolUsageResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListIdentityPoolUsageResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListIdentityPoolUsageResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListIdentityPoolUsageResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListIdentityPoolUsageResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<IdentityPoolUsage> m_identityPoolUsages;

    int m_maxResults;

    int m_count;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace CognitoSync
} // namespace Aws
