﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/athena/model/StartCalculationExecutionResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Athena::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

StartCalculationExecutionResult::StartCalculationExecutionResult() : 
    m_state(CalculationExecutionState::NOT_SET)
{
}

StartCalculationExecutionResult::StartCalculationExecutionResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_state(CalculationExecutionState::NOT_SET)
{
  *this = result;
}

StartCalculationExecutionResult& StartCalculationExecutionResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("CalculationExecutionId"))
  {
    m_calculationExecutionId = jsonValue.GetString("CalculationExecutionId");

  }

  if(jsonValue.ValueExists("State"))
  {
    m_state = CalculationExecutionStateMapper::GetCalculationExecutionStateForName(jsonValue.GetString("State"));

  }


  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
  }


  return *this;
}
