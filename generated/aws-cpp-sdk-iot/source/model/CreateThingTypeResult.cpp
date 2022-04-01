/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iot/model/CreateThingTypeResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::IoT::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

CreateThingTypeResult::CreateThingTypeResult()
{
}

CreateThingTypeResult::CreateThingTypeResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

CreateThingTypeResult& CreateThingTypeResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("thingTypeName"))
  {
    m_thingTypeName = jsonValue.GetString("thingTypeName");

  }

  if(jsonValue.ValueExists("thingTypeArn"))
  {
    m_thingTypeArn = jsonValue.GetString("thingTypeArn");

  }

  if(jsonValue.ValueExists("thingTypeId"))
  {
    m_thingTypeId = jsonValue.GetString("thingTypeId");

  }



  return *this;
}
