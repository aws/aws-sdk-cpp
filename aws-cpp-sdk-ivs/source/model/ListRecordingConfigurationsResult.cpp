/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ivs/model/ListRecordingConfigurationsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::IVS::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListRecordingConfigurationsResult::ListRecordingConfigurationsResult()
{
}

ListRecordingConfigurationsResult::ListRecordingConfigurationsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListRecordingConfigurationsResult& ListRecordingConfigurationsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("nextToken"))
  {
    m_nextToken = jsonValue.GetString("nextToken");

  }

  if(jsonValue.ValueExists("recordingConfigurations"))
  {
    Aws::Utils::Array<JsonView> recordingConfigurationsJsonList = jsonValue.GetArray("recordingConfigurations");
    for(unsigned recordingConfigurationsIndex = 0; recordingConfigurationsIndex < recordingConfigurationsJsonList.GetLength(); ++recordingConfigurationsIndex)
    {
      m_recordingConfigurations.push_back(recordingConfigurationsJsonList[recordingConfigurationsIndex].AsObject());
    }
  }



  return *this;
}
