/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/datapipeline/model/EvaluateExpressionResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::DataPipeline::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

EvaluateExpressionResult::EvaluateExpressionResult()
{
}

EvaluateExpressionResult::EvaluateExpressionResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

EvaluateExpressionResult& EvaluateExpressionResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("evaluatedExpression"))
  {
    m_evaluatedExpression = jsonValue.GetString("evaluatedExpression");

  }



  return *this;
}
