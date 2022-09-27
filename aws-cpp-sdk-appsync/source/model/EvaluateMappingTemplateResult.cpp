﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appsync/model/EvaluateMappingTemplateResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::AppSync::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

EvaluateMappingTemplateResult::EvaluateMappingTemplateResult()
{
}

EvaluateMappingTemplateResult::EvaluateMappingTemplateResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

EvaluateMappingTemplateResult& EvaluateMappingTemplateResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("evaluationResult"))
  {
    m_evaluationResult = jsonValue.GetString("evaluationResult");

  }

  if(jsonValue.ValueExists("error"))
  {
    m_error = jsonValue.GetObject("error");

  }



  return *this;
}
