/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotanalytics/model/GetDatasetContentResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::IoTAnalytics::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetDatasetContentResult::GetDatasetContentResult()
{
}

GetDatasetContentResult::GetDatasetContentResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

GetDatasetContentResult& GetDatasetContentResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("entries"))
  {
    Aws::Utils::Array<JsonView> entriesJsonList = jsonValue.GetArray("entries");
    for(unsigned entriesIndex = 0; entriesIndex < entriesJsonList.GetLength(); ++entriesIndex)
    {
      m_entries.push_back(entriesJsonList[entriesIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("timestamp"))
  {
    m_timestamp = jsonValue.GetDouble("timestamp");

  }

  if(jsonValue.ValueExists("status"))
  {
    m_status = jsonValue.GetObject("status");

  }



  return *this;
}
