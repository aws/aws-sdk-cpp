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
#include <aws/managedblockchain/ManagedBlockchain_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/managedblockchain/model/VoteSummary.h>
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
namespace ManagedBlockchain
{
namespace Model
{
  class AWS_MANAGEDBLOCKCHAIN_API ListProposalVotesResult
  {
  public:
    ListProposalVotesResult();
    ListProposalVotesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    ListProposalVotesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p> The listing of votes. </p>
     */
    inline const Aws::Vector<VoteSummary>& GetProposalVotes() const{ return m_proposalVotes; }

    /**
     * <p> The listing of votes. </p>
     */
    inline void SetProposalVotes(const Aws::Vector<VoteSummary>& value) { m_proposalVotes = value; }

    /**
     * <p> The listing of votes. </p>
     */
    inline void SetProposalVotes(Aws::Vector<VoteSummary>&& value) { m_proposalVotes = std::move(value); }

    /**
     * <p> The listing of votes. </p>
     */
    inline ListProposalVotesResult& WithProposalVotes(const Aws::Vector<VoteSummary>& value) { SetProposalVotes(value); return *this;}

    /**
     * <p> The listing of votes. </p>
     */
    inline ListProposalVotesResult& WithProposalVotes(Aws::Vector<VoteSummary>&& value) { SetProposalVotes(std::move(value)); return *this;}

    /**
     * <p> The listing of votes. </p>
     */
    inline ListProposalVotesResult& AddProposalVotes(const VoteSummary& value) { m_proposalVotes.push_back(value); return *this; }

    /**
     * <p> The listing of votes. </p>
     */
    inline ListProposalVotesResult& AddProposalVotes(VoteSummary&& value) { m_proposalVotes.push_back(std::move(value)); return *this; }


    /**
     * <p> The pagination token that indicates the next set of results to retrieve.
     * </p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p> The pagination token that indicates the next set of results to retrieve.
     * </p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p> The pagination token that indicates the next set of results to retrieve.
     * </p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p> The pagination token that indicates the next set of results to retrieve.
     * </p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p> The pagination token that indicates the next set of results to retrieve.
     * </p>
     */
    inline ListProposalVotesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p> The pagination token that indicates the next set of results to retrieve.
     * </p>
     */
    inline ListProposalVotesResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p> The pagination token that indicates the next set of results to retrieve.
     * </p>
     */
    inline ListProposalVotesResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<VoteSummary> m_proposalVotes;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace ManagedBlockchain
} // namespace Aws
