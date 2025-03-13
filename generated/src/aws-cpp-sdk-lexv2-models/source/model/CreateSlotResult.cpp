/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lexv2-models/model/CreateSlotResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::LexModelsV2::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

CreateSlotResult::CreateSlotResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

CreateSlotResult& CreateSlotResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("slotId"))
  {
    m_slotId = jsonValue.GetString("slotId");
    m_slotIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("slotName"))
  {
    m_slotName = jsonValue.GetString("slotName");
    m_slotNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("description"))
  {
    m_description = jsonValue.GetString("description");
    m_descriptionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("slotTypeId"))
  {
    m_slotTypeId = jsonValue.GetString("slotTypeId");
    m_slotTypeIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("valueElicitationSetting"))
  {
    m_valueElicitationSetting = jsonValue.GetObject("valueElicitationSetting");
    m_valueElicitationSettingHasBeenSet = true;
  }
  if(jsonValue.ValueExists("obfuscationSetting"))
  {
    m_obfuscationSetting = jsonValue.GetObject("obfuscationSetting");
    m_obfuscationSettingHasBeenSet = true;
  }
  if(jsonValue.ValueExists("botId"))
  {
    m_botId = jsonValue.GetString("botId");
    m_botIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("botVersion"))
  {
    m_botVersion = jsonValue.GetString("botVersion");
    m_botVersionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("localeId"))
  {
    m_localeId = jsonValue.GetString("localeId");
    m_localeIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("intentId"))
  {
    m_intentId = jsonValue.GetString("intentId");
    m_intentIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("creationDateTime"))
  {
    m_creationDateTime = jsonValue.GetDouble("creationDateTime");
    m_creationDateTimeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("multipleValuesSetting"))
  {
    m_multipleValuesSetting = jsonValue.GetObject("multipleValuesSetting");
    m_multipleValuesSettingHasBeenSet = true;
  }
  if(jsonValue.ValueExists("subSlotSetting"))
  {
    m_subSlotSetting = jsonValue.GetObject("subSlotSetting");
    m_subSlotSettingHasBeenSet = true;
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
