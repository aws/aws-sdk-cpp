/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/athena/model/GetCalculationExecutionStatusResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::Athena::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetCalculationExecutionStatusResult::GetCalculationExecutionStatusResult()
{
}

GetCalculationExecutionStatusResult::GetCalculationExecutionStatusResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

GetCalculationExecutionStatusResult& GetCalculationExecutionStatusResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("Status"))
  {
    m_status = jsonValue.GetObject("Status");

  }

  if(jsonValue.ValueExists("Statistics"))
  {
    m_statistics = jsonValue.GetObject("Statistics");

  }



  return *this;
}
