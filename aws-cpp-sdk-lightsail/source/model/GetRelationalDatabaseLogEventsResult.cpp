/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#include <aws/lightsail/model/GetRelationalDatabaseLogEventsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::Lightsail::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetRelationalDatabaseLogEventsResult::GetRelationalDatabaseLogEventsResult()
{
}

GetRelationalDatabaseLogEventsResult::GetRelationalDatabaseLogEventsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

GetRelationalDatabaseLogEventsResult& GetRelationalDatabaseLogEventsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("resourceLogEvents"))
  {
    Array<JsonView> resourceLogEventsJsonList = jsonValue.GetArray("resourceLogEvents");
    for(unsigned resourceLogEventsIndex = 0; resourceLogEventsIndex < resourceLogEventsJsonList.GetLength(); ++resourceLogEventsIndex)
    {
      m_resourceLogEvents.push_back(resourceLogEventsJsonList[resourceLogEventsIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("nextBackwardToken"))
  {
    m_nextBackwardToken = jsonValue.GetString("nextBackwardToken");

  }

  if(jsonValue.ValueExists("nextForwardToken"))
  {
    m_nextForwardToken = jsonValue.GetString("nextForwardToken");

  }



  return *this;
}
