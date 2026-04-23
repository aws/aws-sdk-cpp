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

#include <aws/iot/model/CreateDynamicThingGroupResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::IoT::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

CreateDynamicThingGroupResult::CreateDynamicThingGroupResult()
{
}

CreateDynamicThingGroupResult::CreateDynamicThingGroupResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

CreateDynamicThingGroupResult& CreateDynamicThingGroupResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("thingGroupName"))
  {
    m_thingGroupName = jsonValue.GetString("thingGroupName");

  }

  if(jsonValue.ValueExists("thingGroupArn"))
  {
    m_thingGroupArn = jsonValue.GetString("thingGroupArn");

  }

  if(jsonValue.ValueExists("thingGroupId"))
  {
    m_thingGroupId = jsonValue.GetString("thingGroupId");

  }

  if(jsonValue.ValueExists("indexName"))
  {
    m_indexName = jsonValue.GetString("indexName");

  }

  if(jsonValue.ValueExists("queryString"))
  {
    m_queryString = jsonValue.GetString("queryString");

  }

  if(jsonValue.ValueExists("queryVersion"))
  {
    m_queryVersion = jsonValue.GetString("queryVersion");

  }



  return *this;
}
