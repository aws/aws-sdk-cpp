﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/GetFindingsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::SecurityHub::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetFindingsResult::GetFindingsResult()
{
}

GetFindingsResult::GetFindingsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

GetFindingsResult& GetFindingsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("Findings"))
  {
    Array<JsonView> findingsJsonList = jsonValue.GetArray("Findings");
    for(unsigned findingsIndex = 0; findingsIndex < findingsJsonList.GetLength(); ++findingsIndex)
    {
      m_findings.push_back(findingsJsonList[findingsIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }



  return *this;
}
