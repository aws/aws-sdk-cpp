/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/honeycode/model/InvokeScreenAutomationResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::Honeycode::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

InvokeScreenAutomationResult::InvokeScreenAutomationResult() : 
    m_workbookCursor(0)
{
}

InvokeScreenAutomationResult::InvokeScreenAutomationResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_workbookCursor(0)
{
  *this = result;
}

InvokeScreenAutomationResult& InvokeScreenAutomationResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("workbookCursor"))
  {
    m_workbookCursor = jsonValue.GetInt64("workbookCursor");

  }



  return *this;
}
