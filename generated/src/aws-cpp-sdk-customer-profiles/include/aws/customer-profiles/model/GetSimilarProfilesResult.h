/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/customer-profiles/CustomerProfiles_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/customer-profiles/model/MatchType.h>
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
  class GetSimilarProfilesResult
  {
  public:
    AWS_CUSTOMERPROFILES_API GetSimilarProfilesResult() = default;
    AWS_CUSTOMERPROFILES_API GetSimilarProfilesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CUSTOMERPROFILES_API GetSimilarProfilesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Set of <code>profileId</code>s that belong to the same matching group.</p>
     */
    inline const Aws::Vector<Aws::String>& GetProfileIds() const { return m_profileIds; }
    template<typename ProfileIdsT = Aws::Vector<Aws::String>>
    void SetProfileIds(ProfileIdsT&& value) { m_profileIdsHasBeenSet = true; m_profileIds = std::forward<ProfileIdsT>(value); }
    template<typename ProfileIdsT = Aws::Vector<Aws::String>>
    GetSimilarProfilesResult& WithProfileIds(ProfileIdsT&& value) { SetProfileIds(std::forward<ProfileIdsT>(value)); return *this;}
    template<typename ProfileIdsT = Aws::String>
    GetSimilarProfilesResult& AddProfileIds(ProfileIdsT&& value) { m_profileIdsHasBeenSet = true; m_profileIds.emplace_back(std::forward<ProfileIdsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The string <code>matchId</code> that the similar profiles belong to.</p>
     */
    inline const Aws::String& GetMatchId() const { return m_matchId; }
    template<typename MatchIdT = Aws::String>
    void SetMatchId(MatchIdT&& value) { m_matchIdHasBeenSet = true; m_matchId = std::forward<MatchIdT>(value); }
    template<typename MatchIdT = Aws::String>
    GetSimilarProfilesResult& WithMatchId(MatchIdT&& value) { SetMatchId(std::forward<MatchIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specify the type of matching to get similar profiles for.</p>
     */
    inline MatchType GetMatchType() const { return m_matchType; }
    inline void SetMatchType(MatchType value) { m_matchTypeHasBeenSet = true; m_matchType = value; }
    inline GetSimilarProfilesResult& WithMatchType(MatchType value) { SetMatchType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The integer rule level that the profiles matched on.</p>
     */
    inline int GetRuleLevel() const { return m_ruleLevel; }
    inline void SetRuleLevel(int value) { m_ruleLevelHasBeenSet = true; m_ruleLevel = value; }
    inline GetSimilarProfilesResult& WithRuleLevel(int value) { SetRuleLevel(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>It only has value when the <code>MatchType</code> is
     * <code>ML_BASED_MATCHING</code>.A number between 0 and 1, where a higher score
     * means higher similarity. Examining match confidence scores lets you distinguish
     * between groups of similar records in which the system is highly confident (which
     * you may decide to merge), groups of similar records about which the system is
     * uncertain (which you may decide to have reviewed by a human), and groups of
     * similar records that the system deems to be unlikely (which you may decide to
     * reject). Given confidence scores vary as per the data input, it should not be
     * used as an absolute measure of matching quality.</p>
     */
    inline double GetConfidenceScore() const { return m_confidenceScore; }
    inline void SetConfidenceScore(double value) { m_confidenceScoreHasBeenSet = true; m_confidenceScore = value; }
    inline GetSimilarProfilesResult& WithConfidenceScore(double value) { SetConfidenceScore(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The pagination token from the previous <code>GetSimilarProfiles</code> API
     * call.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    GetSimilarProfilesResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetSimilarProfilesResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<Aws::String> m_profileIds;
    bool m_profileIdsHasBeenSet = false;

    Aws::String m_matchId;
    bool m_matchIdHasBeenSet = false;

    MatchType m_matchType{MatchType::NOT_SET};
    bool m_matchTypeHasBeenSet = false;

    int m_ruleLevel{0};
    bool m_ruleLevelHasBeenSet = false;

    double m_confidenceScore{0.0};
    bool m_confidenceScoreHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace CustomerProfiles
} // namespace Aws
