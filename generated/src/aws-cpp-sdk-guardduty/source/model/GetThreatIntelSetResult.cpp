/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/guardduty/model/GetThreatIntelSetResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::GuardDuty::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetThreatIntelSetResult::GetThreatIntelSetResult() : 
    m_format(ThreatIntelSetFormat::NOT_SET),
    m_status(ThreatIntelSetStatus::NOT_SET)
{
}

GetThreatIntelSetResult::GetThreatIntelSetResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_format(ThreatIntelSetFormat::NOT_SET),
    m_status(ThreatIntelSetStatus::NOT_SET)
{
  *this = result;
}

GetThreatIntelSetResult& GetThreatIntelSetResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");

  }

  if(jsonValue.ValueExists("format"))
  {
    m_format = ThreatIntelSetFormatMapper::GetThreatIntelSetFormatForName(jsonValue.GetString("format"));

  }

  if(jsonValue.ValueExists("location"))
  {
    m_location = jsonValue.GetString("location");

  }

  if(jsonValue.ValueExists("status"))
  {
    m_status = ThreatIntelSetStatusMapper::GetThreatIntelSetStatusForName(jsonValue.GetString("status"));

  }

  if(jsonValue.ValueExists("tags"))
  {
    Aws::Map<Aws::String, JsonView> tagsJsonMap = jsonValue.GetObject("tags").GetAllObjects();
    for(auto& tagsItem : tagsJsonMap)
    {
      m_tags[tagsItem.first] = tagsItem.second.AsString();
    }
  }



  return *this;
}
