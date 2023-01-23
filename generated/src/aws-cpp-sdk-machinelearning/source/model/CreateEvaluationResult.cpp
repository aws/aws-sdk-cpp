/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/machinelearning/model/CreateEvaluationResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::MachineLearning::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

CreateEvaluationResult::CreateEvaluationResult()
{
}

CreateEvaluationResult::CreateEvaluationResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

CreateEvaluationResult& CreateEvaluationResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("EvaluationId"))
  {
    m_evaluationId = jsonValue.GetString("EvaluationId");

  }



  return *this;
}
