/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/inspector/model/GetTelemetryMetadataResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::Inspector::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetTelemetryMetadataResult::GetTelemetryMetadataResult()
{
}

GetTelemetryMetadataResult::GetTelemetryMetadataResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

GetTelemetryMetadataResult& GetTelemetryMetadataResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("telemetryMetadata"))
  {
    Aws::Utils::Array<JsonView> telemetryMetadataJsonList = jsonValue.GetArray("telemetryMetadata");
    for(unsigned telemetryMetadataIndex = 0; telemetryMetadataIndex < telemetryMetadataJsonList.GetLength(); ++telemetryMetadataIndex)
    {
      m_telemetryMetadata.push_back(telemetryMetadataJsonList[telemetryMetadataIndex].AsObject());
    }
  }



  return *this;
}
