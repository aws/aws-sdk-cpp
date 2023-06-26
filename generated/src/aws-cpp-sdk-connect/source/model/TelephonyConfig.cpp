/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/TelephonyConfig.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Connect
{
namespace Model
{

TelephonyConfig::TelephonyConfig() : 
    m_distributionsHasBeenSet(false)
{
}

TelephonyConfig::TelephonyConfig(JsonView jsonValue) : 
    m_distributionsHasBeenSet(false)
{
  *this = jsonValue;
}

TelephonyConfig& TelephonyConfig::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Distributions"))
  {
    Aws::Utils::Array<JsonView> distributionsJsonList = jsonValue.GetArray("Distributions");
    for(unsigned distributionsIndex = 0; distributionsIndex < distributionsJsonList.GetLength(); ++distributionsIndex)
    {
      m_distributions.push_back(distributionsJsonList[distributionsIndex].AsObject());
    }
    m_distributionsHasBeenSet = true;
  }

  return *this;
}

JsonValue TelephonyConfig::Jsonize() const
{
  JsonValue payload;

  if(m_distributionsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> distributionsJsonList(m_distributions.size());
   for(unsigned distributionsIndex = 0; distributionsIndex < distributionsJsonList.GetLength(); ++distributionsIndex)
   {
     distributionsJsonList[distributionsIndex].AsObject(m_distributions[distributionsIndex].Jsonize());
   }
   payload.WithArray("Distributions", std::move(distributionsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace Connect
} // namespace Aws
