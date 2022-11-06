/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appflow/model/SnowflakeMetadata.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Appflow
{
namespace Model
{

SnowflakeMetadata::SnowflakeMetadata() : 
    m_supportedRegionsHasBeenSet(false)
{
}

SnowflakeMetadata::SnowflakeMetadata(JsonView jsonValue) : 
    m_supportedRegionsHasBeenSet(false)
{
  *this = jsonValue;
}

SnowflakeMetadata& SnowflakeMetadata::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("supportedRegions"))
  {
    Aws::Utils::Array<JsonView> supportedRegionsJsonList = jsonValue.GetArray("supportedRegions");
    for(unsigned supportedRegionsIndex = 0; supportedRegionsIndex < supportedRegionsJsonList.GetLength(); ++supportedRegionsIndex)
    {
      m_supportedRegions.push_back(supportedRegionsJsonList[supportedRegionsIndex].AsString());
    }
    m_supportedRegionsHasBeenSet = true;
  }

  return *this;
}

JsonValue SnowflakeMetadata::Jsonize() const
{
  JsonValue payload;

  if(m_supportedRegionsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> supportedRegionsJsonList(m_supportedRegions.size());
   for(unsigned supportedRegionsIndex = 0; supportedRegionsIndex < supportedRegionsJsonList.GetLength(); ++supportedRegionsIndex)
   {
     supportedRegionsJsonList[supportedRegionsIndex].AsString(m_supportedRegions[supportedRegionsIndex]);
   }
   payload.WithArray("supportedRegions", std::move(supportedRegionsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace Appflow
} // namespace Aws
