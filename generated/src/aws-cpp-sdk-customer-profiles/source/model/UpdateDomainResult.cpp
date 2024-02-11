/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/customer-profiles/model/UpdateDomainResult.h>
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

UpdateDomainResult::UpdateDomainResult() : 
    m_defaultExpirationDays(0)
{
}

UpdateDomainResult::UpdateDomainResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_defaultExpirationDays(0)
{
  *this = result;
}

UpdateDomainResult& UpdateDomainResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("DomainName"))
  {
    m_domainName = jsonValue.GetString("DomainName");

  }

  if(jsonValue.ValueExists("DefaultExpirationDays"))
  {
    m_defaultExpirationDays = jsonValue.GetInteger("DefaultExpirationDays");

  }

  if(jsonValue.ValueExists("DefaultEncryptionKey"))
  {
    m_defaultEncryptionKey = jsonValue.GetString("DefaultEncryptionKey");

  }

  if(jsonValue.ValueExists("DeadLetterQueueUrl"))
  {
    m_deadLetterQueueUrl = jsonValue.GetString("DeadLetterQueueUrl");

  }

  if(jsonValue.ValueExists("Matching"))
  {
    m_matching = jsonValue.GetObject("Matching");

  }

  if(jsonValue.ValueExists("RuleBasedMatching"))
  {
    m_ruleBasedMatching = jsonValue.GetObject("RuleBasedMatching");

  }

  if(jsonValue.ValueExists("CreatedAt"))
  {
    m_createdAt = jsonValue.GetDouble("CreatedAt");

  }

  if(jsonValue.ValueExists("LastUpdatedAt"))
  {
    m_lastUpdatedAt = jsonValue.GetDouble("LastUpdatedAt");

  }

  if(jsonValue.ValueExists("Tags"))
  {
    Aws::Map<Aws::String, JsonView> tagsJsonMap = jsonValue.GetObject("Tags").GetAllObjects();
    for(auto& tagsItem : tagsJsonMap)
    {
      m_tags[tagsItem.first] = tagsItem.second.AsString();
    }
  }


  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
  }


  return *this;
}
