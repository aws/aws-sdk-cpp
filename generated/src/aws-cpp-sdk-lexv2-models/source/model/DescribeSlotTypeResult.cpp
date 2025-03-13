/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lexv2-models/model/DescribeSlotTypeResult.h>
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

DescribeSlotTypeResult::DescribeSlotTypeResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

DescribeSlotTypeResult& DescribeSlotTypeResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("slotTypeId"))
  {
    m_slotTypeId = jsonValue.GetString("slotTypeId");
    m_slotTypeIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("slotTypeName"))
  {
    m_slotTypeName = jsonValue.GetString("slotTypeName");
    m_slotTypeNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("description"))
  {
    m_description = jsonValue.GetString("description");
    m_descriptionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("slotTypeValues"))
  {
    Aws::Utils::Array<JsonView> slotTypeValuesJsonList = jsonValue.GetArray("slotTypeValues");
    for(unsigned slotTypeValuesIndex = 0; slotTypeValuesIndex < slotTypeValuesJsonList.GetLength(); ++slotTypeValuesIndex)
    {
      m_slotTypeValues.push_back(slotTypeValuesJsonList[slotTypeValuesIndex].AsObject());
    }
    m_slotTypeValuesHasBeenSet = true;
  }
  if(jsonValue.ValueExists("valueSelectionSetting"))
  {
    m_valueSelectionSetting = jsonValue.GetObject("valueSelectionSetting");
    m_valueSelectionSettingHasBeenSet = true;
  }
  if(jsonValue.ValueExists("parentSlotTypeSignature"))
  {
    m_parentSlotTypeSignature = jsonValue.GetString("parentSlotTypeSignature");
    m_parentSlotTypeSignatureHasBeenSet = true;
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
  if(jsonValue.ValueExists("creationDateTime"))
  {
    m_creationDateTime = jsonValue.GetDouble("creationDateTime");
    m_creationDateTimeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("lastUpdatedDateTime"))
  {
    m_lastUpdatedDateTime = jsonValue.GetDouble("lastUpdatedDateTime");
    m_lastUpdatedDateTimeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("externalSourceSetting"))
  {
    m_externalSourceSetting = jsonValue.GetObject("externalSourceSetting");
    m_externalSourceSettingHasBeenSet = true;
  }
  if(jsonValue.ValueExists("compositeSlotTypeSetting"))
  {
    m_compositeSlotTypeSetting = jsonValue.GetObject("compositeSlotTypeSetting");
    m_compositeSlotTypeSettingHasBeenSet = true;
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
