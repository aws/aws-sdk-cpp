﻿/*
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

#include <aws/lex-models/model/PutSlotTypeRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::LexModelBuildingService::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

PutSlotTypeRequest::PutSlotTypeRequest() : 
    m_nameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_enumerationValuesHasBeenSet(false),
    m_checksumHasBeenSet(false),
    m_valueSelectionStrategy(SlotValueSelectionStrategy::NOT_SET),
    m_valueSelectionStrategyHasBeenSet(false),
    m_createVersion(false),
    m_createVersionHasBeenSet(false)
{
}

Aws::String PutSlotTypeRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("description", m_description);

  }

  if(m_enumerationValuesHasBeenSet)
  {
   Array<JsonValue> enumerationValuesJsonList(m_enumerationValues.size());
   for(unsigned enumerationValuesIndex = 0; enumerationValuesIndex < enumerationValuesJsonList.GetLength(); ++enumerationValuesIndex)
   {
     enumerationValuesJsonList[enumerationValuesIndex].AsObject(m_enumerationValues[enumerationValuesIndex].Jsonize());
   }
   payload.WithArray("enumerationValues", std::move(enumerationValuesJsonList));

  }

  if(m_checksumHasBeenSet)
  {
   payload.WithString("checksum", m_checksum);

  }

  if(m_valueSelectionStrategyHasBeenSet)
  {
   payload.WithString("valueSelectionStrategy", SlotValueSelectionStrategyMapper::GetNameForSlotValueSelectionStrategy(m_valueSelectionStrategy));
  }

  if(m_createVersionHasBeenSet)
  {
   payload.WithBool("createVersion", m_createVersion);

  }

  return payload.View().WriteReadable();
}




