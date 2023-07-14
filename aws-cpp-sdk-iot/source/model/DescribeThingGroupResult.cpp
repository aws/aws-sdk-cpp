/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
    m_version(0),
    m_status(DynamicGroupStatus::NOT_SET)
{
}

DescribeThingGroupResult::DescribeThingGroupResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_version(0),
    m_status(DynamicGroupStatus::NOT_SET)
{
  *this = result;
}

DescribeThingGroupResult& DescribeThingGroupResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
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

  if(jsonValue.ValueExists("status"))
  {
    m_status = DynamicGroupStatusMapper::GetDynamicGroupStatusForName(jsonValue.GetString("status"));

  }



  return *this;
}
