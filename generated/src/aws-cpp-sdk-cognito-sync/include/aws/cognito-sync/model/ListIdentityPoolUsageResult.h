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
    AWS_COGNITOSYNC_API ListIdentityPoolUsageResult() = default;
    AWS_COGNITOSYNC_API ListIdentityPoolUsageResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_COGNITOSYNC_API ListIdentityPoolUsageResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * Usage information for the identity pools.
     */
    inline const Aws::Vector<IdentityPoolUsage>& GetIdentityPoolUsages() const { return m_identityPoolUsages; }
    template<typename IdentityPoolUsagesT = Aws::Vector<IdentityPoolUsage>>
    void SetIdentityPoolUsages(IdentityPoolUsagesT&& value) { m_identityPoolUsagesHasBeenSet = true; m_identityPoolUsages = std::forward<IdentityPoolUsagesT>(value); }
    template<typename IdentityPoolUsagesT = Aws::Vector<IdentityPoolUsage>>
    ListIdentityPoolUsageResult& WithIdentityPoolUsages(IdentityPoolUsagesT&& value) { SetIdentityPoolUsages(std::forward<IdentityPoolUsagesT>(value)); return *this;}
    template<typename IdentityPoolUsagesT = IdentityPoolUsage>
    ListIdentityPoolUsageResult& AddIdentityPoolUsages(IdentityPoolUsagesT&& value) { m_identityPoolUsagesHasBeenSet = true; m_identityPoolUsages.emplace_back(std::forward<IdentityPoolUsagesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * The maximum number of results to be returned.
     */
    inline int GetMaxResults() const { return m_maxResults; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline ListIdentityPoolUsageResult& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}

    ///@{
    /**
     * Total number of identities for the identity pool.
     */
    inline int GetCount() const { return m_count; }
    inline void SetCount(int value) { m_countHasBeenSet = true; m_count = value; }
    inline ListIdentityPoolUsageResult& WithCount(int value) { SetCount(value); return *this;}
    ///@}

    ///@{
    /**
     * A pagination token for obtaining the next page of results.
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListIdentityPoolUsageResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListIdentityPoolUsageResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<IdentityPoolUsage> m_identityPoolUsages;
    bool m_identityPoolUsagesHasBeenSet = false;

    int m_maxResults{0};
    bool m_maxResultsHasBeenSet = false;

    int m_count{0};
    bool m_countHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace CognitoSync
} // namespace Aws
