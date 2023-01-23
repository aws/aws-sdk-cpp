/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/glue/model/ListBlueprintsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::Glue::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListBlueprintsResult::ListBlueprintsResult()
{
}

ListBlueprintsResult::ListBlueprintsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListBlueprintsResult& ListBlueprintsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("Blueprints"))
  {
    Aws::Utils::Array<JsonView> blueprintsJsonList = jsonValue.GetArray("Blueprints");
    for(unsigned blueprintsIndex = 0; blueprintsIndex < blueprintsJsonList.GetLength(); ++blueprintsIndex)
    {
      m_blueprints.push_back(blueprintsJsonList[blueprintsIndex].AsString());
    }
  }

  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }



  return *this;
}
