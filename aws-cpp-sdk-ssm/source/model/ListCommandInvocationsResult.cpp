﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ssm/model/ListCommandInvocationsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::SSM::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListCommandInvocationsResult::ListCommandInvocationsResult()
{
}

ListCommandInvocationsResult::ListCommandInvocationsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListCommandInvocationsResult& ListCommandInvocationsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("CommandInvocations"))
  {
    Array<JsonView> commandInvocationsJsonList = jsonValue.GetArray("CommandInvocations");
    for(unsigned commandInvocationsIndex = 0; commandInvocationsIndex < commandInvocationsJsonList.GetLength(); ++commandInvocationsIndex)
    {
      m_commandInvocations.push_back(commandInvocationsJsonList[commandInvocationsIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }



  return *this;
}
