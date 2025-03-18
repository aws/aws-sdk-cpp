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

ValidatePullThroughCacheRuleResult::ValidatePullThroughCacheRuleResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ValidatePullThroughCacheRuleResult& ValidatePullThroughCacheRuleResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("ecrRepositoryPrefix"))
  {
    m_ecrRepositoryPrefix = jsonValue.GetString("ecrRepositoryPrefix");
    m_ecrRepositoryPrefixHasBeenSet = true;
  }
  if(jsonValue.ValueExists("registryId"))
  {
    m_registryId = jsonValue.GetString("registryId");
    m_registryIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("upstreamRegistryUrl"))
  {
    m_upstreamRegistryUrl = jsonValue.GetString("upstreamRegistryUrl");
    m_upstreamRegistryUrlHasBeenSet = true;
  }
  if(jsonValue.ValueExists("credentialArn"))
  {
    m_credentialArn = jsonValue.GetString("credentialArn");
    m_credentialArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("customRoleArn"))
  {
    m_customRoleArn = jsonValue.GetString("customRoleArn");
    m_customRoleArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("upstreamRepositoryPrefix"))
  {
    m_upstreamRepositoryPrefix = jsonValue.GetString("upstreamRepositoryPrefix");
    m_upstreamRepositoryPrefixHasBeenSet = true;
  }
  if(jsonValue.ValueExists("isValid"))
  {
    m_isValid = jsonValue.GetBool("isValid");
    m_isValidHasBeenSet = true;
  }
  if(jsonValue.ValueExists("failure"))
  {
    m_failure = jsonValue.GetString("failure");
    m_failureHasBeenSet = true;
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
