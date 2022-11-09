/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/glue/model/GetBlueprintRunsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::Glue::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetBlueprintRunsResult::GetBlueprintRunsResult()
{
}

GetBlueprintRunsResult::GetBlueprintRunsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

GetBlueprintRunsResult& GetBlueprintRunsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("BlueprintRuns"))
  {
    Aws::Utils::Array<JsonView> blueprintRunsJsonList = jsonValue.GetArray("BlueprintRuns");
    for(unsigned blueprintRunsIndex = 0; blueprintRunsIndex < blueprintRunsJsonList.GetLength(); ++blueprintRunsIndex)
    {
      m_blueprintRuns.push_back(blueprintRunsJsonList[blueprintRunsIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }



  return *this;
}
