/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/groundstation/model/DemodulationConfig.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace GroundStation
{
namespace Model
{

DemodulationConfig::DemodulationConfig() : 
    m_unvalidatedJSONHasBeenSet(false)
{
}

DemodulationConfig::DemodulationConfig(JsonView jsonValue) : 
    m_unvalidatedJSONHasBeenSet(false)
{
  *this = jsonValue;
}

DemodulationConfig& DemodulationConfig::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("unvalidatedJSON"))
  {
    m_unvalidatedJSON = jsonValue.GetString("unvalidatedJSON");

    m_unvalidatedJSONHasBeenSet = true;
  }

  return *this;
}

JsonValue DemodulationConfig::Jsonize() const
{
  JsonValue payload;

  if(m_unvalidatedJSONHasBeenSet)
  {
   payload.WithString("unvalidatedJSON", m_unvalidatedJSON);

  }

  return payload;
}

} // namespace Model
} // namespace GroundStation
} // namespace Aws
