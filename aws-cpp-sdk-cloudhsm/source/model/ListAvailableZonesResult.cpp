/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudhsm/model/ListAvailableZonesResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::CloudHSM::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListAvailableZonesResult::ListAvailableZonesResult()
{
}

ListAvailableZonesResult::ListAvailableZonesResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListAvailableZonesResult& ListAvailableZonesResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("AZList"))
  {
    Aws::Utils::Array<JsonView> aZListJsonList = jsonValue.GetArray("AZList");
    for(unsigned aZListIndex = 0; aZListIndex < aZListJsonList.GetLength(); ++aZListIndex)
    {
      m_aZList.push_back(aZListJsonList[aZListIndex].AsString());
    }
  }



  return *this;
}
