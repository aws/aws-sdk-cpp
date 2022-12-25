/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudtrail/model/SourceConfig.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CloudTrail
{
namespace Model
{

SourceConfig::SourceConfig() : 
    m_applyToAllRegions(false),
    m_applyToAllRegionsHasBeenSet(false),
    m_advancedEventSelectorsHasBeenSet(false)
{
}

SourceConfig::SourceConfig(JsonView jsonValue) : 
    m_applyToAllRegions(false),
    m_applyToAllRegionsHasBeenSet(false),
    m_advancedEventSelectorsHasBeenSet(false)
{
  *this = jsonValue;
}

SourceConfig& SourceConfig::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ApplyToAllRegions"))
  {
    m_applyToAllRegions = jsonValue.GetBool("ApplyToAllRegions");

    m_applyToAllRegionsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AdvancedEventSelectors"))
  {
    Aws::Utils::Array<JsonView> advancedEventSelectorsJsonList = jsonValue.GetArray("AdvancedEventSelectors");
    for(unsigned advancedEventSelectorsIndex = 0; advancedEventSelectorsIndex < advancedEventSelectorsJsonList.GetLength(); ++advancedEventSelectorsIndex)
    {
      m_advancedEventSelectors.push_back(advancedEventSelectorsJsonList[advancedEventSelectorsIndex].AsObject());
    }
    m_advancedEventSelectorsHasBeenSet = true;
  }

  return *this;
}

JsonValue SourceConfig::Jsonize() const
{
  JsonValue payload;

  if(m_applyToAllRegionsHasBeenSet)
  {
   payload.WithBool("ApplyToAllRegions", m_applyToAllRegions);

  }

  if(m_advancedEventSelectorsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> advancedEventSelectorsJsonList(m_advancedEventSelectors.size());
   for(unsigned advancedEventSelectorsIndex = 0; advancedEventSelectorsIndex < advancedEventSelectorsJsonList.GetLength(); ++advancedEventSelectorsIndex)
   {
     advancedEventSelectorsJsonList[advancedEventSelectorsIndex].AsObject(m_advancedEventSelectors[advancedEventSelectorsIndex].Jsonize());
   }
   payload.WithArray("AdvancedEventSelectors", std::move(advancedEventSelectorsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace CloudTrail
} // namespace Aws
