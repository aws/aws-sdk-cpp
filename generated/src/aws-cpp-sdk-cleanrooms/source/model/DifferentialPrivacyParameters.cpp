/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cleanrooms/model/DifferentialPrivacyParameters.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CleanRooms
{
namespace Model
{

DifferentialPrivacyParameters::DifferentialPrivacyParameters() : 
    m_sensitivityParametersHasBeenSet(false)
{
}

DifferentialPrivacyParameters::DifferentialPrivacyParameters(JsonView jsonValue) : 
    m_sensitivityParametersHasBeenSet(false)
{
  *this = jsonValue;
}

DifferentialPrivacyParameters& DifferentialPrivacyParameters::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("sensitivityParameters"))
  {
    Aws::Utils::Array<JsonView> sensitivityParametersJsonList = jsonValue.GetArray("sensitivityParameters");
    for(unsigned sensitivityParametersIndex = 0; sensitivityParametersIndex < sensitivityParametersJsonList.GetLength(); ++sensitivityParametersIndex)
    {
      m_sensitivityParameters.push_back(sensitivityParametersJsonList[sensitivityParametersIndex].AsObject());
    }
    m_sensitivityParametersHasBeenSet = true;
  }

  return *this;
}

JsonValue DifferentialPrivacyParameters::Jsonize() const
{
  JsonValue payload;

  if(m_sensitivityParametersHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> sensitivityParametersJsonList(m_sensitivityParameters.size());
   for(unsigned sensitivityParametersIndex = 0; sensitivityParametersIndex < sensitivityParametersJsonList.GetLength(); ++sensitivityParametersIndex)
   {
     sensitivityParametersJsonList[sensitivityParametersIndex].AsObject(m_sensitivityParameters[sensitivityParametersIndex].Jsonize());
   }
   payload.WithArray("sensitivityParameters", std::move(sensitivityParametersJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace CleanRooms
} // namespace Aws
