/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iot/model/DescribeThingTypeResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::IoT::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribeThingTypeResult::DescribeThingTypeResult()
{
}

DescribeThingTypeResult::DescribeThingTypeResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

DescribeThingTypeResult& DescribeThingTypeResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("thingTypeName"))
  {
    m_thingTypeName = jsonValue.GetString("thingTypeName");

  }

  if(jsonValue.ValueExists("thingTypeId"))
  {
    m_thingTypeId = jsonValue.GetString("thingTypeId");

  }

  if(jsonValue.ValueExists("thingTypeArn"))
  {
    m_thingTypeArn = jsonValue.GetString("thingTypeArn");

  }

  if(jsonValue.ValueExists("thingTypeProperties"))
  {
    m_thingTypeProperties = jsonValue.GetObject("thingTypeProperties");

  }

  if(jsonValue.ValueExists("thingTypeMetadata"))
  {
    m_thingTypeMetadata = jsonValue.GetObject("thingTypeMetadata");

  }



  return *this;
}
