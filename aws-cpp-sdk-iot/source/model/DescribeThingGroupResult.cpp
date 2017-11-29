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

#include <aws/iot/model/DescribeThingGroupResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::IoT::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribeThingGroupResult::DescribeThingGroupResult() : 
    m_version(0)
{
}

DescribeThingGroupResult::DescribeThingGroupResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_version(0)
{
  *this = result;
}

DescribeThingGroupResult& DescribeThingGroupResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  const JsonValue& jsonValue = result.GetPayload();
  if(jsonValue.ValueExists("thingGroupName"))
  {
    m_thingGroupName = jsonValue.GetString("thingGroupName");

  }

  if(jsonValue.ValueExists("thingGroupId"))
  {
    m_thingGroupId = jsonValue.GetString("thingGroupId");

  }

  if(jsonValue.ValueExists("thingGroupArn"))
  {
    m_thingGroupArn = jsonValue.GetString("thingGroupArn");

  }

  if(jsonValue.ValueExists("version"))
  {
    m_version = jsonValue.GetInt64("version");

  }

  if(jsonValue.ValueExists("thingGroupProperties"))
  {
    m_thingGroupProperties = jsonValue.GetObject("thingGroupProperties");

  }

  if(jsonValue.ValueExists("thingGroupMetadata"))
  {
    m_thingGroupMetadata = jsonValue.GetObject("thingGroupMetadata");

  }



  return *this;
}
