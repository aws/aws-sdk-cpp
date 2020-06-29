/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ecr/model/DeleteLifecyclePolicyResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::ECR::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DeleteLifecyclePolicyResult::DeleteLifecyclePolicyResult()
{
}

DeleteLifecyclePolicyResult::DeleteLifecyclePolicyResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

DeleteLifecyclePolicyResult& DeleteLifecyclePolicyResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("registryId"))
  {
    m_registryId = jsonValue.GetString("registryId");

  }

  if(jsonValue.ValueExists("repositoryName"))
  {
    m_repositoryName = jsonValue.GetString("repositoryName");

  }

  if(jsonValue.ValueExists("lifecyclePolicyText"))
  {
    m_lifecyclePolicyText = jsonValue.GetString("lifecyclePolicyText");

  }

  if(jsonValue.ValueExists("lastEvaluatedAt"))
  {
    m_lastEvaluatedAt = jsonValue.GetDouble("lastEvaluatedAt");

  }



  return *this;
}
