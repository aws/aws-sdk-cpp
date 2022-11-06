/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iot/model/GetPercentilesResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::IoT::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetPercentilesResult::GetPercentilesResult()
{
}

GetPercentilesResult::GetPercentilesResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

GetPercentilesResult& GetPercentilesResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("percentiles"))
  {
    Aws::Utils::Array<JsonView> percentilesJsonList = jsonValue.GetArray("percentiles");
    for(unsigned percentilesIndex = 0; percentilesIndex < percentilesJsonList.GetLength(); ++percentilesIndex)
    {
      m_percentiles.push_back(percentilesJsonList[percentilesIndex].AsObject());
    }
  }



  return *this;
}
