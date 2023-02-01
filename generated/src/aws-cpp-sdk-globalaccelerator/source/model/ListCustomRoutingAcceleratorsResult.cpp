/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/globalaccelerator/model/ListCustomRoutingAcceleratorsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::GlobalAccelerator::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListCustomRoutingAcceleratorsResult::ListCustomRoutingAcceleratorsResult()
{
}

ListCustomRoutingAcceleratorsResult::ListCustomRoutingAcceleratorsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListCustomRoutingAcceleratorsResult& ListCustomRoutingAcceleratorsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("Accelerators"))
  {
    Aws::Utils::Array<JsonView> acceleratorsJsonList = jsonValue.GetArray("Accelerators");
    for(unsigned acceleratorsIndex = 0; acceleratorsIndex < acceleratorsJsonList.GetLength(); ++acceleratorsIndex)
    {
      m_accelerators.push_back(acceleratorsJsonList[acceleratorsIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }



  return *this;
}
