/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/managedblockchain/model/ListProposalVotesResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::ManagedBlockchain::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListProposalVotesResult::ListProposalVotesResult()
{
}

ListProposalVotesResult::ListProposalVotesResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListProposalVotesResult& ListProposalVotesResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("ProposalVotes"))
  {
    Aws::Utils::Array<JsonView> proposalVotesJsonList = jsonValue.GetArray("ProposalVotes");
    for(unsigned proposalVotesIndex = 0; proposalVotesIndex < proposalVotesJsonList.GetLength(); ++proposalVotesIndex)
    {
      m_proposalVotes.push_back(proposalVotesJsonList[proposalVotesIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }



  return *this;
}
