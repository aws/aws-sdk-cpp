/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/athena/model/GetCalculationExecutionResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::Athena::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetCalculationExecutionResult::GetCalculationExecutionResult()
{
}

GetCalculationExecutionResult::GetCalculationExecutionResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

GetCalculationExecutionResult& GetCalculationExecutionResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("CalculationExecutionId"))
  {
    m_calculationExecutionId = jsonValue.GetString("CalculationExecutionId");

  }

  if(jsonValue.ValueExists("SessionId"))
  {
    m_sessionId = jsonValue.GetString("SessionId");

  }

  if(jsonValue.ValueExists("Description"))
  {
    m_description = jsonValue.GetString("Description");

  }

  if(jsonValue.ValueExists("WorkingDirectory"))
  {
    m_workingDirectory = jsonValue.GetString("WorkingDirectory");

  }

  if(jsonValue.ValueExists("Status"))
  {
    m_status = jsonValue.GetObject("Status");

  }

  if(jsonValue.ValueExists("Statistics"))
  {
    m_statistics = jsonValue.GetObject("Statistics");

  }

  if(jsonValue.ValueExists("Result"))
  {
    m_result = jsonValue.GetObject("Result");

  }



  return *this;
}
