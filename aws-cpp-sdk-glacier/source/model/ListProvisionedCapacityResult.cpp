/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/glacier/model/ListProvisionedCapacityResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::Glacier::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListProvisionedCapacityResult::ListProvisionedCapacityResult()
{
}

ListProvisionedCapacityResult::ListProvisionedCapacityResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListProvisionedCapacityResult& ListProvisionedCapacityResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("ProvisionedCapacityList"))
  {
    Aws::Utils::Array<JsonView> provisionedCapacityListJsonList = jsonValue.GetArray("ProvisionedCapacityList");
    for(unsigned provisionedCapacityListIndex = 0; provisionedCapacityListIndex < provisionedCapacityListJsonList.GetLength(); ++provisionedCapacityListIndex)
    {
      m_provisionedCapacityList.push_back(provisionedCapacityListJsonList[provisionedCapacityListIndex].AsObject());
    }
  }



  return *this;
}
