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

GetCoreDeviceResult::GetCoreDeviceResult() : 
    m_status(CoreDeviceStatus::NOT_SET)
{
}

GetCoreDeviceResult::GetCoreDeviceResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_status(CoreDeviceStatus::NOT_SET)
{
  *this = result;
}

GetCoreDeviceResult& GetCoreDeviceResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("coreDeviceThingName"))
  {
    m_coreDeviceThingName = jsonValue.GetString("coreDeviceThingName");

  }

  if(jsonValue.ValueExists("coreVersion"))
  {
    m_coreVersion = jsonValue.GetString("coreVersion");

  }

  if(jsonValue.ValueExists("platform"))
  {
    m_platform = jsonValue.GetString("platform");

  }

  if(jsonValue.ValueExists("architecture"))
  {
    m_architecture = jsonValue.GetString("architecture");

  }

  if(jsonValue.ValueExists("status"))
  {
    m_status = CoreDeviceStatusMapper::GetCoreDeviceStatusForName(jsonValue.GetString("status"));

  }

  if(jsonValue.ValueExists("lastStatusUpdateTimestamp"))
  {
    m_lastStatusUpdateTimestamp = jsonValue.GetDouble("lastStatusUpdateTimestamp");

  }

  if(jsonValue.ValueExists("tags"))
  {
    Aws::Map<Aws::String, JsonView> tagsJsonMap = jsonValue.GetObject("tags").GetAllObjects();
    for(auto& tagsItem : tagsJsonMap)
    {
      m_tags[tagsItem.first] = tagsItem.second.AsString();
    }
  }


  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
  }


  return *this;
}
