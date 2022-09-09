/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lexv2-models/model/UpdateSlotResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::LexModelsV2::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

UpdateSlotResult::UpdateSlotResult()
{
}

UpdateSlotResult::UpdateSlotResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

UpdateSlotResult& UpdateSlotResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("slotId"))
  {
    m_slotId = jsonValue.GetString("slotId");

  }

  if(jsonValue.ValueExists("slotName"))
  {
    m_slotName = jsonValue.GetString("slotName");

  }

  if(jsonValue.ValueExists("description"))
  {
    m_description = jsonValue.GetString("description");

  }

  if(jsonValue.ValueExists("slotTypeId"))
  {
    m_slotTypeId = jsonValue.GetString("slotTypeId");

  }

  if(jsonValue.ValueExists("valueElicitationSetting"))
  {
    m_valueElicitationSetting = jsonValue.GetObject("valueElicitationSetting");

  }

  if(jsonValue.ValueExists("obfuscationSetting"))
  {
    m_obfuscationSetting = jsonValue.GetObject("obfuscationSetting");

  }

  if(jsonValue.ValueExists("botId"))
  {
    m_botId = jsonValue.GetString("botId");

  }

  if(jsonValue.ValueExists("botVersion"))
  {
    m_botVersion = jsonValue.GetString("botVersion");

  }

  if(jsonValue.ValueExists("localeId"))
  {
    m_localeId = jsonValue.GetString("localeId");

  }

  if(jsonValue.ValueExists("intentId"))
  {
    m_intentId = jsonValue.GetString("intentId");

  }

  if(jsonValue.ValueExists("creationDateTime"))
  {
    m_creationDateTime = jsonValue.GetDouble("creationDateTime");

  }

  if(jsonValue.ValueExists("lastUpdatedDateTime"))
  {
    m_lastUpdatedDateTime = jsonValue.GetDouble("lastUpdatedDateTime");

  }

  if(jsonValue.ValueExists("multipleValuesSetting"))
  {
    m_multipleValuesSetting = jsonValue.GetObject("multipleValuesSetting");

  }

  if(jsonValue.ValueExists("subSlotSetting"))
  {
    m_subSlotSetting = jsonValue.GetObject("subSlotSetting");

  }



  return *this;
}
