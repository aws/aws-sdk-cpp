/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/groundstation/model/DecodeConfig.h>
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

DecodeConfig::DecodeConfig() : 
    m_unvalidatedJSONHasBeenSet(false)
{
}

DecodeConfig::DecodeConfig(JsonView jsonValue) : 
    m_unvalidatedJSONHasBeenSet(false)
{
  *this = jsonValue;
}

DecodeConfig& DecodeConfig::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("unvalidatedJSON"))
  {
    m_unvalidatedJSON = jsonValue.GetString("unvalidatedJSON");

    m_unvalidatedJSONHasBeenSet = true;
  }

  return *this;
}

JsonValue DecodeConfig::Jsonize() const
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
