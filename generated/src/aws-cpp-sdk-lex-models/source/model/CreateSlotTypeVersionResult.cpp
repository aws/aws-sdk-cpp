﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lex-models/model/CreateSlotTypeVersionResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::LexModelBuildingService::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

CreateSlotTypeVersionResult::CreateSlotTypeVersionResult() : 
    m_valueSelectionStrategy(SlotValueSelectionStrategy::NOT_SET)
{
}

CreateSlotTypeVersionResult::CreateSlotTypeVersionResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_valueSelectionStrategy(SlotValueSelectionStrategy::NOT_SET)
{
  *this = result;
}

CreateSlotTypeVersionResult& CreateSlotTypeVersionResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");

  }

  if(jsonValue.ValueExists("description"))
  {
    m_description = jsonValue.GetString("description");

  }

  if(jsonValue.ValueExists("enumerationValues"))
  {
    Aws::Utils::Array<JsonView> enumerationValuesJsonList = jsonValue.GetArray("enumerationValues");
    for(unsigned enumerationValuesIndex = 0; enumerationValuesIndex < enumerationValuesJsonList.GetLength(); ++enumerationValuesIndex)
    {
      m_enumerationValues.push_back(enumerationValuesJsonList[enumerationValuesIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("lastUpdatedDate"))
  {
    m_lastUpdatedDate = jsonValue.GetDouble("lastUpdatedDate");

  }

  if(jsonValue.ValueExists("createdDate"))
  {
    m_createdDate = jsonValue.GetDouble("createdDate");

  }

  if(jsonValue.ValueExists("version"))
  {
    m_version = jsonValue.GetString("version");

  }

  if(jsonValue.ValueExists("checksum"))
  {
    m_checksum = jsonValue.GetString("checksum");

  }

  if(jsonValue.ValueExists("valueSelectionStrategy"))
  {
    m_valueSelectionStrategy = SlotValueSelectionStrategyMapper::GetSlotValueSelectionStrategyForName(jsonValue.GetString("valueSelectionStrategy"));

  }

  if(jsonValue.ValueExists("parentSlotTypeSignature"))
  {
    m_parentSlotTypeSignature = jsonValue.GetString("parentSlotTypeSignature");

  }

  if(jsonValue.ValueExists("slotTypeConfigurations"))
  {
    Aws::Utils::Array<JsonView> slotTypeConfigurationsJsonList = jsonValue.GetArray("slotTypeConfigurations");
    for(unsigned slotTypeConfigurationsIndex = 0; slotTypeConfigurationsIndex < slotTypeConfigurationsJsonList.GetLength(); ++slotTypeConfigurationsIndex)
    {
      m_slotTypeConfigurations.push_back(slotTypeConfigurationsJsonList[slotTypeConfigurationsIndex].AsObject());
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
