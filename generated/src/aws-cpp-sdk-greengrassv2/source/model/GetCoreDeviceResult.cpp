/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/greengrassv2/model/GetCoreDeviceResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::GreengrassV2::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetCoreDeviceResult::GetCoreDeviceResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

GetCoreDeviceResult& GetCoreDeviceResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("coreDeviceThingName"))
  {
    m_coreDeviceThingName = jsonValue.GetString("coreDeviceThingName");
    m_coreDeviceThingNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("coreVersion"))
  {
    m_coreVersion = jsonValue.GetString("coreVersion");
    m_coreVersionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("platform"))
  {
    m_platform = jsonValue.GetString("platform");
    m_platformHasBeenSet = true;
  }
  if(jsonValue.ValueExists("architecture"))
  {
    m_architecture = jsonValue.GetString("architecture");
    m_architectureHasBeenSet = true;
  }
  if(jsonValue.ValueExists("runtime"))
  {
    m_runtime = jsonValue.GetString("runtime");
    m_runtimeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("status"))
  {
    m_status = CoreDeviceStatusMapper::GetCoreDeviceStatusForName(jsonValue.GetString("status"));
    m_statusHasBeenSet = true;
  }
  if(jsonValue.ValueExists("lastStatusUpdateTimestamp"))
  {
    m_lastStatusUpdateTimestamp = jsonValue.GetDouble("lastStatusUpdateTimestamp");
    m_lastStatusUpdateTimestampHasBeenSet = true;
  }
  if(jsonValue.ValueExists("tags"))
  {
    Aws::Map<Aws::String, JsonView> tagsJsonMap = jsonValue.GetObject("tags").GetAllObjects();
    for(auto& tagsItem : tagsJsonMap)
    {
      m_tags[tagsItem.first] = tagsItem.second.AsString();
    }
    m_tagsHasBeenSet = true;
  }

  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
    m_requestIdHasBeenSet = true;
  }


  return *this;
}
