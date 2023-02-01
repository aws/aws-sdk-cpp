/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/greengrass/model/GetConnectivityInfoResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::Greengrass::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetConnectivityInfoResult::GetConnectivityInfoResult()
{
}

GetConnectivityInfoResult::GetConnectivityInfoResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

GetConnectivityInfoResult& GetConnectivityInfoResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("ConnectivityInfo"))
  {
    Aws::Utils::Array<JsonView> connectivityInfoJsonList = jsonValue.GetArray("ConnectivityInfo");
    for(unsigned connectivityInfoIndex = 0; connectivityInfoIndex < connectivityInfoJsonList.GetLength(); ++connectivityInfoIndex)
    {
      m_connectivityInfo.push_back(connectivityInfoJsonList[connectivityInfoIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("message"))
  {
    m_message = jsonValue.GetString("message");

  }



  return *this;
}
