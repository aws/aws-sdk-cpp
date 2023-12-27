/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ecr/model/ValidatePullThroughCacheRuleResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::ECR::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ValidatePullThroughCacheRuleResult::ValidatePullThroughCacheRuleResult() : 
    m_isValid(false)
{
}

ValidatePullThroughCacheRuleResult::ValidatePullThroughCacheRuleResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_isValid(false)
{
  *this = result;
}

ValidatePullThroughCacheRuleResult& ValidatePullThroughCacheRuleResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("ecrRepositoryPrefix"))
  {
    m_ecrRepositoryPrefix = jsonValue.GetString("ecrRepositoryPrefix");

  }

  if(jsonValue.ValueExists("registryId"))
  {
    m_registryId = jsonValue.GetString("registryId");

  }

  if(jsonValue.ValueExists("upstreamRegistryUrl"))
  {
    m_upstreamRegistryUrl = jsonValue.GetString("upstreamRegistryUrl");

  }

  if(jsonValue.ValueExists("credentialArn"))
  {
    m_credentialArn = jsonValue.GetString("credentialArn");

  }

  if(jsonValue.ValueExists("isValid"))
  {
    m_isValid = jsonValue.GetBool("isValid");

  }

  if(jsonValue.ValueExists("failure"))
  {
    m_failure = jsonValue.GetString("failure");

  }


  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
  }


  return *this;
}
