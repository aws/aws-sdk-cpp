﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lexv2-models/model/CreateSlotTypeResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::LexModelsV2::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

CreateSlotTypeResult::CreateSlotTypeResult()
{
}

CreateSlotTypeResult::CreateSlotTypeResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

CreateSlotTypeResult& CreateSlotTypeResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("slotTypeId"))
  {
    m_slotTypeId = jsonValue.GetString("slotTypeId");

  }

  if(jsonValue.ValueExists("slotTypeName"))
  {
    m_slotTypeName = jsonValue.GetString("slotTypeName");

  }

  if(jsonValue.ValueExists("description"))
  {
    m_description = jsonValue.GetString("description");

  }

  if(jsonValue.ValueExists("slotTypeValues"))
  {
    Array<JsonView> slotTypeValuesJsonList = jsonValue.GetArray("slotTypeValues");
    for(unsigned slotTypeValuesIndex = 0; slotTypeValuesIndex < slotTypeValuesJsonList.GetLength(); ++slotTypeValuesIndex)
    {
      m_slotTypeValues.push_back(slotTypeValuesJsonList[slotTypeValuesIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("valueSelectionSetting"))
  {
    m_valueSelectionSetting = jsonValue.GetObject("valueSelectionSetting");

  }

  if(jsonValue.ValueExists("parentSlotTypeSignature"))
  {
    m_parentSlotTypeSignature = jsonValue.GetString("parentSlotTypeSignature");

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

  if(jsonValue.ValueExists("creationDateTime"))
  {
    m_creationDateTime = jsonValue.GetDouble("creationDateTime");

  }



  return *this;
}
