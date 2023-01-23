/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/athena/model/StopCalculationExecutionResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::Athena::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

StopCalculationExecutionResult::StopCalculationExecutionResult() : 
    m_state(CalculationExecutionState::NOT_SET)
{
}

StopCalculationExecutionResult::StopCalculationExecutionResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_state(CalculationExecutionState::NOT_SET)
{
  *this = result;
}

StopCalculationExecutionResult& StopCalculationExecutionResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("State"))
  {
    m_state = CalculationExecutionStateMapper::GetCalculationExecutionStateForName(jsonValue.GetString("State"));

  }



  return *this;
}
