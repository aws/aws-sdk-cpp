/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/m2/model/EngineVersionsSummary.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace MainframeModernization
{
namespace Model
{

EngineVersionsSummary::EngineVersionsSummary() : 
    m_engineTypeHasBeenSet(false),
    m_engineVersionHasBeenSet(false)
{
}

EngineVersionsSummary::EngineVersionsSummary(JsonView jsonValue) : 
    m_engineTypeHasBeenSet(false),
    m_engineVersionHasBeenSet(false)
{
  *this = jsonValue;
}

EngineVersionsSummary& EngineVersionsSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("engineType"))
  {
    m_engineType = jsonValue.GetString("engineType");

    m_engineTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("engineVersion"))
  {
    m_engineVersion = jsonValue.GetString("engineVersion");

    m_engineVersionHasBeenSet = true;
  }

  return *this;
}

JsonValue EngineVersionsSummary::Jsonize() const
{
  JsonValue payload;

  if(m_engineTypeHasBeenSet)
  {
   payload.WithString("engineType", m_engineType);

  }

  if(m_engineVersionHasBeenSet)
  {
   payload.WithString("engineVersion", m_engineVersion);

  }

  return payload;
}

} // namespace Model
} // namespace MainframeModernization
} // namespace Aws
