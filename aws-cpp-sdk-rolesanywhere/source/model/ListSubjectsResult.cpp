/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/rolesanywhere/model/ListSubjectsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::RolesAnywhere::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListSubjectsResult::ListSubjectsResult()
{
}

ListSubjectsResult::ListSubjectsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListSubjectsResult& ListSubjectsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("nextToken"))
  {
    m_nextToken = jsonValue.GetString("nextToken");

  }

  if(jsonValue.ValueExists("subjects"))
  {
    Aws::Utils::Array<JsonView> subjectsJsonList = jsonValue.GetArray("subjects");
    for(unsigned subjectsIndex = 0; subjectsIndex < subjectsJsonList.GetLength(); ++subjectsIndex)
    {
      m_subjects.push_back(subjectsJsonList[subjectsIndex].AsObject());
    }
  }



  return *this;
}
