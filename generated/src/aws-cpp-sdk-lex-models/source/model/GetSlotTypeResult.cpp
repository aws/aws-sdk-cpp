/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lex-models/model/GetSlotTypeResult.h>
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

GetSlotTypeResult::GetSlotTypeResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

GetSlotTypeResult& GetSlotTypeResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");
    m_nameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("description"))
  {
    m_description = jsonValue.GetString("description");
    m_descriptionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("enumerationValues"))
  {
    Aws::Utils::Array<JsonView> enumerationValuesJsonList = jsonValue.GetArray("enumerationValues");
    for(unsigned enumerationValuesIndex = 0; enumerationValuesIndex < enumerationValuesJsonList.GetLength(); ++enumerationValuesIndex)
    {
      m_enumerationValues.push_back(enumerationValuesJsonList[enumerationValuesIndex].AsObject());
    }
    m_enumerationValuesHasBeenSet = true;
  }
  if(jsonValue.ValueExists("lastUpdatedDate"))
  {
    m_lastUpdatedDate = jsonValue.GetDouble("lastUpdatedDate");
    m_lastUpdatedDateHasBeenSet = true;
  }
  if(jsonValue.ValueExists("createdDate"))
  {
    m_createdDate = jsonValue.GetDouble("createdDate");
    m_createdDateHasBeenSet = true;
  }
  if(jsonValue.ValueExists("version"))
  {
    m_version = jsonValue.GetString("version");
    m_versionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("checksum"))
  {
    m_checksum = jsonValue.GetString("checksum");
    m_checksumHasBeenSet = true;
  }
  if(jsonValue.ValueExists("valueSelectionStrategy"))
  {
    m_valueSelectionStrategy = SlotValueSelectionStrategyMapper::GetSlotValueSelectionStrategyForName(jsonValue.GetString("valueSelectionStrategy"));
    m_valueSelectionStrategyHasBeenSet = true;
  }
  if(jsonValue.ValueExists("parentSlotTypeSignature"))
  {
    m_parentSlotTypeSignature = jsonValue.GetString("parentSlotTypeSignature");
    m_parentSlotTypeSignatureHasBeenSet = true;
  }
  if(jsonValue.ValueExists("slotTypeConfigurations"))
  {
    Aws::Utils::Array<JsonView> slotTypeConfigurationsJsonList = jsonValue.GetArray("slotTypeConfigurations");
    for(unsigned slotTypeConfigurationsIndex = 0; slotTypeConfigurationsIndex < slotTypeConfigurationsJsonList.GetLength(); ++slotTypeConfigurationsIndex)
    {
      m_slotTypeConfigurations.push_back(slotTypeConfigurationsJsonList[slotTypeConfigurationsIndex].AsObject());
    }
    m_slotTypeConfigurationsHasBeenSet = true;
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
