/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/athena/model/EngineVersion.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Athena
{
namespace Model
{

EngineVersion::EngineVersion() : 
    m_selectedEngineVersionHasBeenSet(false),
    m_effectiveEngineVersionHasBeenSet(false)
{
}

EngineVersion::EngineVersion(JsonView jsonValue) : 
    m_selectedEngineVersionHasBeenSet(false),
    m_effectiveEngineVersionHasBeenSet(false)
{
  *this = jsonValue;
}

EngineVersion& EngineVersion::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("SelectedEngineVersion"))
  {
    m_selectedEngineVersion = jsonValue.GetString("SelectedEngineVersion");

    m_selectedEngineVersionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("EffectiveEngineVersion"))
  {
    m_effectiveEngineVersion = jsonValue.GetString("EffectiveEngineVersion");

    m_effectiveEngineVersionHasBeenSet = true;
  }

  return *this;
}

JsonValue EngineVersion::Jsonize() const
{
  JsonValue payload;

  if(m_selectedEngineVersionHasBeenSet)
  {
   payload.WithString("SelectedEngineVersion", m_selectedEngineVersion);

  }

  if(m_effectiveEngineVersionHasBeenSet)
  {
   payload.WithString("EffectiveEngineVersion", m_effectiveEngineVersion);

  }

  return payload;
}

} // namespace Model
} // namespace Athena
} // namespace Aws
