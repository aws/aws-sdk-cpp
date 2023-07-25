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
    AWS_CUSTOMERPROFILES_API GetSimilarProfilesResult();
    AWS_CUSTOMERPROFILES_API GetSimilarProfilesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CUSTOMERPROFILES_API GetSimilarProfilesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Set of <code>profileId</code>s that belong to the same matching group.</p>
     */
    inline const Aws::Vector<Aws::String>& GetProfileIds() const{ return m_profileIds; }

    /**
     * <p>Set of <code>profileId</code>s that belong to the same matching group.</p>
     */
    inline void SetProfileIds(const Aws::Vector<Aws::String>& value) { m_profileIds = value; }

    /**
     * <p>Set of <code>profileId</code>s that belong to the same matching group.</p>
     */
    inline void SetProfileIds(Aws::Vector<Aws::String>&& value) { m_profileIds = std::move(value); }

    /**
     * <p>Set of <code>profileId</code>s that belong to the same matching group.</p>
     */
    inline GetSimilarProfilesResult& WithProfileIds(const Aws::Vector<Aws::String>& value) { SetProfileIds(value); return *this;}

    /**
     * <p>Set of <code>profileId</code>s that belong to the same matching group.</p>
     */
    inline GetSimilarProfilesResult& WithProfileIds(Aws::Vector<Aws::String>&& value) { SetProfileIds(std::move(value)); return *this;}

    /**
     * <p>Set of <code>profileId</code>s that belong to the same matching group.</p>
     */
    inline GetSimilarProfilesResult& AddProfileIds(const Aws::String& value) { m_profileIds.push_back(value); return *this; }

    /**
     * <p>Set of <code>profileId</code>s that belong to the same matching group.</p>
     */
    inline GetSimilarProfilesResult& AddProfileIds(Aws::String&& value) { m_profileIds.push_back(std::move(value)); return *this; }

    /**
     * <p>Set of <code>profileId</code>s that belong to the same matching group.</p>
     */
    inline GetSimilarProfilesResult& AddProfileIds(const char* value) { m_profileIds.push_back(value); return *this; }


    /**
     * <p>The string <code>matchId</code> that the similar profiles belong to.</p>
     */
    inline const Aws::String& GetMatchId() const{ return m_matchId; }

    /**
     * <p>The string <code>matchId</code> that the similar profiles belong to.</p>
     */
    inline void SetMatchId(const Aws::String& value) { m_matchId = value; }

    /**
     * <p>The string <code>matchId</code> that the similar profiles belong to.</p>
     */
    inline void SetMatchId(Aws::String&& value) { m_matchId = std::move(value); }

    /**
     * <p>The string <code>matchId</code> that the similar profiles belong to.</p>
     */
    inline void SetMatchId(const char* value) { m_matchId.assign(value); }

    /**
     * <p>The string <code>matchId</code> that the similar profiles belong to.</p>
     */
    inline GetSimilarProfilesResult& WithMatchId(const Aws::String& value) { SetMatchId(value); return *this;}

    /**
     * <p>The string <code>matchId</code> that the similar profiles belong to.</p>
     */
    inline GetSimilarProfilesResult& WithMatchId(Aws::String&& value) { SetMatchId(std::move(value)); return *this;}

    /**
     * <p>The string <code>matchId</code> that the similar profiles belong to.</p>
     */
    inline GetSimilarProfilesResult& WithMatchId(const char* value) { SetMatchId(value); return *this;}


    /**
     * <p>Specify the type of matching to get similar profiles for.</p>
     */
    inline const MatchType& GetMatchType() const{ return m_matchType; }

    /**
     * <p>Specify the type of matching to get similar profiles for.</p>
     */
    inline void SetMatchType(const MatchType& value) { m_matchType = value; }

    /**
     * <p>Specify the type of matching to get similar profiles for.</p>
     */
    inline void SetMatchType(MatchType&& value) { m_matchType = std::move(value); }

    /**
     * <p>Specify the type of matching to get similar profiles for.</p>
     */
    inline GetSimilarProfilesResult& WithMatchType(const MatchType& value) { SetMatchType(value); return *this;}

    /**
     * <p>Specify the type of matching to get similar profiles for.</p>
     */
    inline GetSimilarProfilesResult& WithMatchType(MatchType&& value) { SetMatchType(std::move(value)); return *this;}


    /**
     * <p>The integer rule level that the profiles matched on.</p>
     */
    inline int GetRuleLevel() const{ return m_ruleLevel; }

    /**
     * <p>The integer rule level that the profiles matched on.</p>
     */
    inline void SetRuleLevel(int value) { m_ruleLevel = value; }

    /**
     * <p>The integer rule level that the profiles matched on.</p>
     */
    inline GetSimilarProfilesResult& WithRuleLevel(int value) { SetRuleLevel(value); return *this;}


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
    inline double GetConfidenceScore() const{ return m_confidenceScore; }

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
    inline void SetConfidenceScore(double value) { m_confidenceScore = value; }

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
    inline GetSimilarProfilesResult& WithConfidenceScore(double value) { SetConfidenceScore(value); return *this;}


    /**
     * <p>The pagination token from the previous <code>GetSimilarProfiles</code> API
     * call.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The pagination token from the previous <code>GetSimilarProfiles</code> API
     * call.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The pagination token from the previous <code>GetSimilarProfiles</code> API
     * call.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>The pagination token from the previous <code>GetSimilarProfiles</code> API
     * call.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The pagination token from the previous <code>GetSimilarProfiles</code> API
     * call.</p>
     */
    inline GetSimilarProfilesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The pagination token from the previous <code>GetSimilarProfiles</code> API
     * call.</p>
     */
    inline GetSimilarProfilesResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The pagination token from the previous <code>GetSimilarProfiles</code> API
     * call.</p>
     */
    inline GetSimilarProfilesResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline GetSimilarProfilesResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline GetSimilarProfilesResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline GetSimilarProfilesResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::Vector<Aws::String> m_profileIds;

    Aws::String m_matchId;

    MatchType m_matchType;

    int m_ruleLevel;

    double m_confidenceScore;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace CustomerProfiles
} // namespace Aws
