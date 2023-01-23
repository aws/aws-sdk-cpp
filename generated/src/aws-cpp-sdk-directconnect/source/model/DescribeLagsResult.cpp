/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/directconnect/model/DescribeLagsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::DirectConnect::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribeLagsResult::DescribeLagsResult()
{
}

DescribeLagsResult::DescribeLagsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

DescribeLagsResult& DescribeLagsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("lags"))
  {
    Aws::Utils::Array<JsonView> lagsJsonList = jsonValue.GetArray("lags");
    for(unsigned lagsIndex = 0; lagsIndex < lagsJsonList.GetLength(); ++lagsIndex)
    {
      m_lags.push_back(lagsJsonList[lagsIndex].AsObject());
    }
  }



  return *this;
}
