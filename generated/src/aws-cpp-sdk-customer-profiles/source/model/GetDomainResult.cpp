/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/customer-profiles/model/GetDomainResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::CustomerProfiles::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetDomainResult::GetDomainResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

GetDomainResult& GetDomainResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("DomainName"))
  {
    m_domainName = jsonValue.GetString("DomainName");
    m_domainNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("DefaultExpirationDays"))
  {
    m_defaultExpirationDays = jsonValue.GetInteger("DefaultExpirationDays");
    m_defaultExpirationDaysHasBeenSet = true;
  }
  if(jsonValue.ValueExists("DefaultEncryptionKey"))
  {
    m_defaultEncryptionKey = jsonValue.GetString("DefaultEncryptionKey");
    m_defaultEncryptionKeyHasBeenSet = true;
  }
  if(jsonValue.ValueExists("DeadLetterQueueUrl"))
  {
    m_deadLetterQueueUrl = jsonValue.GetString("DeadLetterQueueUrl");
    m_deadLetterQueueUrlHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Stats"))
  {
    m_stats = jsonValue.GetObject("Stats");
    m_statsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Matching"))
  {
    m_matching = jsonValue.GetObject("Matching");
    m_matchingHasBeenSet = true;
  }
  if(jsonValue.ValueExists("RuleBasedMatching"))
  {
    m_ruleBasedMatching = jsonValue.GetObject("RuleBasedMatching");
    m_ruleBasedMatchingHasBeenSet = true;
  }
  if(jsonValue.ValueExists("CreatedAt"))
  {
    m_createdAt = jsonValue.GetDouble("CreatedAt");
    m_createdAtHasBeenSet = true;
  }
  if(jsonValue.ValueExists("LastUpdatedAt"))
  {
    m_lastUpdatedAt = jsonValue.GetDouble("LastUpdatedAt");
    m_lastUpdatedAtHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Tags"))
  {
    Aws::Map<Aws::String, JsonView> tagsJsonMap = jsonValue.GetObject("Tags").GetAllObjects();
    for(auto& tagsItem : tagsJsonMap)
    {
      m_tags[tagsItem.first] = tagsItem.second.AsString();
    }
    m_tagsHasBeenSet = true;
  }

  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
    m_requestIdHasBeenSet = true;
  }


  return *this;
}
