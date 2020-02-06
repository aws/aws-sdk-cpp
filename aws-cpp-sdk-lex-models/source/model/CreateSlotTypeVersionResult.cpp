/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#include <aws/lex-models/model/CreateSlotTypeVersionResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

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
    Array<JsonView> enumerationValuesJsonList = jsonValue.GetArray("enumerationValues");
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
    Array<JsonView> slotTypeConfigurationsJsonList = jsonValue.GetArray("slotTypeConfigurations");
    for(unsigned slotTypeConfigurationsIndex = 0; slotTypeConfigurationsIndex < slotTypeConfigurationsJsonList.GetLength(); ++slotTypeConfigurationsIndex)
    {
      m_slotTypeConfigurations.push_back(slotTypeConfigurationsJsonList[slotTypeConfigurationsIndex].AsObject());
    }
  }



  return *this;
}
