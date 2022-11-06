/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/wellarchitected/model/ListShareInvitationsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::WellArchitected::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListShareInvitationsResult::ListShareInvitationsResult()
{
}

ListShareInvitationsResult::ListShareInvitationsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListShareInvitationsResult& ListShareInvitationsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("ShareInvitationSummaries"))
  {
    Aws::Utils::Array<JsonView> shareInvitationSummariesJsonList = jsonValue.GetArray("ShareInvitationSummaries");
    for(unsigned shareInvitationSummariesIndex = 0; shareInvitationSummariesIndex < shareInvitationSummariesJsonList.GetLength(); ++shareInvitationSummariesIndex)
    {
      m_shareInvitationSummaries.push_back(shareInvitationSummariesJsonList[shareInvitationSummariesIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }



  return *this;
}
