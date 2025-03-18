/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/customer-profiles/CustomerProfiles_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/customer-profiles/model/MatchItem.h>
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
namespace CustomerProfiles
{
namespace Model
{
  class GetMatchesResult
  {
  public:
    AWS_CUSTOMERPROFILES_API GetMatchesResult() = default;
    AWS_CUSTOMERPROFILES_API GetMatchesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CUSTOMERPROFILES_API GetMatchesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>If there are additional results, this is the token for the next set of
     * results.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    GetMatchesResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp this version of Match Result generated.</p>
     */
    inline const Aws::Utils::DateTime& GetMatchGenerationDate() const { return m_matchGenerationDate; }
    template<typename MatchGenerationDateT = Aws::Utils::DateTime>
    void SetMatchGenerationDate(MatchGenerationDateT&& value) { m_matchGenerationDateHasBeenSet = true; m_matchGenerationDate = std::forward<MatchGenerationDateT>(value); }
    template<typename MatchGenerationDateT = Aws::Utils::DateTime>
    GetMatchesResult& WithMatchGenerationDate(MatchGenerationDateT&& value) { SetMatchGenerationDate(std::forward<MatchGenerationDateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of potential matches found.</p>
     */
    inline int GetPotentialMatches() const { return m_potentialMatches; }
    inline void SetPotentialMatches(int value) { m_potentialMatchesHasBeenSet = true; m_potentialMatches = value; }
    inline GetMatchesResult& WithPotentialMatches(int value) { SetPotentialMatches(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The list of matched profiles for this instance.</p>
     */
    inline const Aws::Vector<MatchItem>& GetMatches() const { return m_matches; }
    template<typename MatchesT = Aws::Vector<MatchItem>>
    void SetMatches(MatchesT&& value) { m_matchesHasBeenSet = true; m_matches = std::forward<MatchesT>(value); }
    template<typename MatchesT = Aws::Vector<MatchItem>>
    GetMatchesResult& WithMatches(MatchesT&& value) { SetMatches(std::forward<MatchesT>(value)); return *this;}
    template<typename MatchesT = MatchItem>
    GetMatchesResult& AddMatches(MatchesT&& value) { m_matchesHasBeenSet = true; m_matches.emplace_back(std::forward<MatchesT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetMatchesResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::Utils::DateTime m_matchGenerationDate{};
    bool m_matchGenerationDateHasBeenSet = false;

    int m_potentialMatches{0};
    bool m_potentialMatchesHasBeenSet = false;

    Aws::Vector<MatchItem> m_matches;
    bool m_matchesHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace CustomerProfiles
} // namespace Aws
