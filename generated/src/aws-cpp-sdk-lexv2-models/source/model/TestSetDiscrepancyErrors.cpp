/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lexv2-models/model/TestSetDiscrepancyErrors.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace LexModelsV2
{
namespace Model
{

TestSetDiscrepancyErrors::TestSetDiscrepancyErrors() : 
    m_intentDiscrepanciesHasBeenSet(false),
    m_slotDiscrepanciesHasBeenSet(false)
{
}

TestSetDiscrepancyErrors::TestSetDiscrepancyErrors(JsonView jsonValue) : 
    m_intentDiscrepanciesHasBeenSet(false),
    m_slotDiscrepanciesHasBeenSet(false)
{
  *this = jsonValue;
}

TestSetDiscrepancyErrors& TestSetDiscrepancyErrors::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("intentDiscrepancies"))
  {
    Aws::Utils::Array<JsonView> intentDiscrepanciesJsonList = jsonValue.GetArray("intentDiscrepancies");
    for(unsigned intentDiscrepanciesIndex = 0; intentDiscrepanciesIndex < intentDiscrepanciesJsonList.GetLength(); ++intentDiscrepanciesIndex)
    {
      m_intentDiscrepancies.push_back(intentDiscrepanciesJsonList[intentDiscrepanciesIndex].AsObject());
    }
    m_intentDiscrepanciesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("slotDiscrepancies"))
  {
    Aws::Utils::Array<JsonView> slotDiscrepanciesJsonList = jsonValue.GetArray("slotDiscrepancies");
    for(unsigned slotDiscrepanciesIndex = 0; slotDiscrepanciesIndex < slotDiscrepanciesJsonList.GetLength(); ++slotDiscrepanciesIndex)
    {
      m_slotDiscrepancies.push_back(slotDiscrepanciesJsonList[slotDiscrepanciesIndex].AsObject());
    }
    m_slotDiscrepanciesHasBeenSet = true;
  }

  return *this;
}

JsonValue TestSetDiscrepancyErrors::Jsonize() const
{
  JsonValue payload;

  if(m_intentDiscrepanciesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> intentDiscrepanciesJsonList(m_intentDiscrepancies.size());
   for(unsigned intentDiscrepanciesIndex = 0; intentDiscrepanciesIndex < intentDiscrepanciesJsonList.GetLength(); ++intentDiscrepanciesIndex)
   {
     intentDiscrepanciesJsonList[intentDiscrepanciesIndex].AsObject(m_intentDiscrepancies[intentDiscrepanciesIndex].Jsonize());
   }
   payload.WithArray("intentDiscrepancies", std::move(intentDiscrepanciesJsonList));

  }

  if(m_slotDiscrepanciesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> slotDiscrepanciesJsonList(m_slotDiscrepancies.size());
   for(unsigned slotDiscrepanciesIndex = 0; slotDiscrepanciesIndex < slotDiscrepanciesJsonList.GetLength(); ++slotDiscrepanciesIndex)
   {
     slotDiscrepanciesJsonList[slotDiscrepanciesIndex].AsObject(m_slotDiscrepancies[slotDiscrepanciesIndex].Jsonize());
   }
   payload.WithArray("slotDiscrepancies", std::move(slotDiscrepanciesJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
