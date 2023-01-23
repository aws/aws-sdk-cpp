/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/elasticmapreduce/model/ListInstanceFleetsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::EMR::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListInstanceFleetsResult::ListInstanceFleetsResult()
{
}

ListInstanceFleetsResult::ListInstanceFleetsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListInstanceFleetsResult& ListInstanceFleetsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("InstanceFleets"))
  {
    Aws::Utils::Array<JsonView> instanceFleetsJsonList = jsonValue.GetArray("InstanceFleets");
    for(unsigned instanceFleetsIndex = 0; instanceFleetsIndex < instanceFleetsJsonList.GetLength(); ++instanceFleetsIndex)
    {
      m_instanceFleets.push_back(instanceFleetsJsonList[instanceFleetsIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("Marker"))
  {
    m_marker = jsonValue.GetString("Marker");

  }



  return *this;
}
