/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/voice-id/model/ListDomainsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::VoiceID::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListDomainsResult::ListDomainsResult()
{
}

ListDomainsResult::ListDomainsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListDomainsResult& ListDomainsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("DomainSummaries"))
  {
    Aws::Utils::Array<JsonView> domainSummariesJsonList = jsonValue.GetArray("DomainSummaries");
    for(unsigned domainSummariesIndex = 0; domainSummariesIndex < domainSummariesJsonList.GetLength(); ++domainSummariesIndex)
    {
      m_domainSummaries.push_back(domainSummariesJsonList[domainSummariesIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }



  return *this;
}
