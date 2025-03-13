/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iot/model/DescribeThingTypeResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::IoT::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

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
    m_thingTypeNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("thingTypeId"))
  {
    m_thingTypeId = jsonValue.GetString("thingTypeId");
    m_thingTypeIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("thingTypeArn"))
  {
    m_thingTypeArn = jsonValue.GetString("thingTypeArn");
    m_thingTypeArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("thingTypeProperties"))
  {
    m_thingTypeProperties = jsonValue.GetObject("thingTypeProperties");
    m_thingTypePropertiesHasBeenSet = true;
  }
  if(jsonValue.ValueExists("thingTypeMetadata"))
  {
    m_thingTypeMetadata = jsonValue.GetObject("thingTypeMetadata");
    m_thingTypeMetadataHasBeenSet = true;
  }

  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
    m_requestIdHasBeenSet = true;
  }


  return *this;
}
