/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/location/model/CreatePlaceIndexResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::LocationService::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

CreatePlaceIndexResult::CreatePlaceIndexResult()
{
}

CreatePlaceIndexResult::CreatePlaceIndexResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

CreatePlaceIndexResult& CreatePlaceIndexResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("CreateTime"))
  {
    m_createTime = jsonValue.GetString("CreateTime");

  }

  if(jsonValue.ValueExists("IndexArn"))
  {
    m_indexArn = jsonValue.GetString("IndexArn");

  }

  if(jsonValue.ValueExists("IndexName"))
  {
    m_indexName = jsonValue.GetString("IndexName");

  }



  return *this;
}
