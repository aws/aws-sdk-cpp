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
    AWS_CUSTOMERPROFILES_API GetMatchesResult();
    AWS_CUSTOMERPROFILES_API GetMatchesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CUSTOMERPROFILES_API GetMatchesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>If there are additional results, this is the token for the next set of
     * results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>If there are additional results, this is the token for the next set of
     * results.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>If there are additional results, this is the token for the next set of
     * results.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>If there are additional results, this is the token for the next set of
     * results.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>If there are additional results, this is the token for the next set of
     * results.</p>
     */
    inline GetMatchesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>If there are additional results, this is the token for the next set of
     * results.</p>
     */
    inline GetMatchesResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>If there are additional results, this is the token for the next set of
     * results.</p>
     */
    inline GetMatchesResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>The timestamp this version of Match Result generated.</p>
     */
    inline const Aws::Utils::DateTime& GetMatchGenerationDate() const{ return m_matchGenerationDate; }

    /**
     * <p>The timestamp this version of Match Result generated.</p>
     */
    inline void SetMatchGenerationDate(const Aws::Utils::DateTime& value) { m_matchGenerationDate = value; }

    /**
     * <p>The timestamp this version of Match Result generated.</p>
     */
    inline void SetMatchGenerationDate(Aws::Utils::DateTime&& value) { m_matchGenerationDate = std::move(value); }

    /**
     * <p>The timestamp this version of Match Result generated.</p>
     */
    inline GetMatchesResult& WithMatchGenerationDate(const Aws::Utils::DateTime& value) { SetMatchGenerationDate(value); return *this;}

    /**
     * <p>The timestamp this version of Match Result generated.</p>
     */
    inline GetMatchesResult& WithMatchGenerationDate(Aws::Utils::DateTime&& value) { SetMatchGenerationDate(std::move(value)); return *this;}


    /**
     * <p>The number of potential matches found.</p>
     */
    inline int GetPotentialMatches() const{ return m_potentialMatches; }

    /**
     * <p>The number of potential matches found.</p>
     */
    inline void SetPotentialMatches(int value) { m_potentialMatches = value; }

    /**
     * <p>The number of potential matches found.</p>
     */
    inline GetMatchesResult& WithPotentialMatches(int value) { SetPotentialMatches(value); return *this;}


    /**
     * <p>The list of matched profiles for this instance.</p>
     */
    inline const Aws::Vector<MatchItem>& GetMatches() const{ return m_matches; }

    /**
     * <p>The list of matched profiles for this instance.</p>
     */
    inline void SetMatches(const Aws::Vector<MatchItem>& value) { m_matches = value; }

    /**
     * <p>The list of matched profiles for this instance.</p>
     */
    inline void SetMatches(Aws::Vector<MatchItem>&& value) { m_matches = std::move(value); }

    /**
     * <p>The list of matched profiles for this instance.</p>
     */
    inline GetMatchesResult& WithMatches(const Aws::Vector<MatchItem>& value) { SetMatches(value); return *this;}

    /**
     * <p>The list of matched profiles for this instance.</p>
     */
    inline GetMatchesResult& WithMatches(Aws::Vector<MatchItem>&& value) { SetMatches(std::move(value)); return *this;}

    /**
     * <p>The list of matched profiles for this instance.</p>
     */
    inline GetMatchesResult& AddMatches(const MatchItem& value) { m_matches.push_back(value); return *this; }

    /**
     * <p>The list of matched profiles for this instance.</p>
     */
    inline GetMatchesResult& AddMatches(MatchItem&& value) { m_matches.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_nextToken;

    Aws::Utils::DateTime m_matchGenerationDate;

    int m_potentialMatches;

    Aws::Vector<MatchItem> m_matches;
  };

} // namespace Model
} // namespace CustomerProfiles
} // namespace Aws
