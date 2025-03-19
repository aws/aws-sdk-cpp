/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/Range.h>
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

Range::Range(JsonView jsonValue)
{
  *this = jsonValue;
}

Range& Range::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("MinProficiencyLevel"))
  {
    m_minProficiencyLevel = jsonValue.GetDouble("MinProficiencyLevel");
    m_minProficiencyLevelHasBeenSet = true;
  }
  if(jsonValue.ValueExists("MaxProficiencyLevel"))
  {
    m_maxProficiencyLevel = jsonValue.GetDouble("MaxProficiencyLevel");
    m_maxProficiencyLevelHasBeenSet = true;
  }
  return *this;
}

JsonValue Range::Jsonize() const
{
  JsonValue payload;

  if(m_minProficiencyLevelHasBeenSet)
  {
   payload.WithDouble("MinProficiencyLevel", m_minProficiencyLevel);

  }

  if(m_maxProficiencyLevelHasBeenSet)
  {
   payload.WithDouble("MaxProficiencyLevel", m_maxProficiencyLevel);

  }

  return payload;
}

} // namespace Model
} // namespace Connect
} // namespace Aws
