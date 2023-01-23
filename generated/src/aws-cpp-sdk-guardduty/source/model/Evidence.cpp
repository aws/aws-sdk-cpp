/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/guardduty/model/Evidence.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace GuardDuty
{
namespace Model
{

Evidence::Evidence() : 
    m_threatIntelligenceDetailsHasBeenSet(false)
{
}

Evidence::Evidence(JsonView jsonValue) : 
    m_threatIntelligenceDetailsHasBeenSet(false)
{
  *this = jsonValue;
}

Evidence& Evidence::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("threatIntelligenceDetails"))
  {
    Aws::Utils::Array<JsonView> threatIntelligenceDetailsJsonList = jsonValue.GetArray("threatIntelligenceDetails");
    for(unsigned threatIntelligenceDetailsIndex = 0; threatIntelligenceDetailsIndex < threatIntelligenceDetailsJsonList.GetLength(); ++threatIntelligenceDetailsIndex)
    {
      m_threatIntelligenceDetails.push_back(threatIntelligenceDetailsJsonList[threatIntelligenceDetailsIndex].AsObject());
    }
    m_threatIntelligenceDetailsHasBeenSet = true;
  }

  return *this;
}

JsonValue Evidence::Jsonize() const
{
  JsonValue payload;

  if(m_threatIntelligenceDetailsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> threatIntelligenceDetailsJsonList(m_threatIntelligenceDetails.size());
   for(unsigned threatIntelligenceDetailsIndex = 0; threatIntelligenceDetailsIndex < threatIntelligenceDetailsJsonList.GetLength(); ++threatIntelligenceDetailsIndex)
   {
     threatIntelligenceDetailsJsonList[threatIntelligenceDetailsIndex].AsObject(m_threatIntelligenceDetails[threatIntelligenceDetailsIndex].Jsonize());
   }
   payload.WithArray("threatIntelligenceDetails", std::move(threatIntelligenceDetailsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace GuardDuty
} // namespace Aws
