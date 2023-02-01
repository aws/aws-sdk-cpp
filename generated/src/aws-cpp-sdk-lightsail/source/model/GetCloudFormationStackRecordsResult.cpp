/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lightsail/model/GetCloudFormationStackRecordsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::Lightsail::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetCloudFormationStackRecordsResult::GetCloudFormationStackRecordsResult()
{
}

GetCloudFormationStackRecordsResult::GetCloudFormationStackRecordsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

GetCloudFormationStackRecordsResult& GetCloudFormationStackRecordsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("cloudFormationStackRecords"))
  {
    Aws::Utils::Array<JsonView> cloudFormationStackRecordsJsonList = jsonValue.GetArray("cloudFormationStackRecords");
    for(unsigned cloudFormationStackRecordsIndex = 0; cloudFormationStackRecordsIndex < cloudFormationStackRecordsJsonList.GetLength(); ++cloudFormationStackRecordsIndex)
    {
      m_cloudFormationStackRecords.push_back(cloudFormationStackRecordsJsonList[cloudFormationStackRecordsIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("nextPageToken"))
  {
    m_nextPageToken = jsonValue.GetString("nextPageToken");

  }



  return *this;
}
