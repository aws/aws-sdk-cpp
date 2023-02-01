/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/config/model/StartResourceEvaluationResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::ConfigService::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

StartResourceEvaluationResult::StartResourceEvaluationResult()
{
}

StartResourceEvaluationResult::StartResourceEvaluationResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

StartResourceEvaluationResult& StartResourceEvaluationResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("ResourceEvaluationId"))
  {
    m_resourceEvaluationId = jsonValue.GetString("ResourceEvaluationId");

  }



  return *this;
}
