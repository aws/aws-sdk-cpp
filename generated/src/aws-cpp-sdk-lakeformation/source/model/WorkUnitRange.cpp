/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lakeformation/model/WorkUnitRange.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace LakeFormation
{
namespace Model
{

WorkUnitRange::WorkUnitRange() : 
    m_workUnitIdMax(0),
    m_workUnitIdMaxHasBeenSet(false),
    m_workUnitIdMin(0),
    m_workUnitIdMinHasBeenSet(false),
    m_workUnitTokenHasBeenSet(false)
{
}

WorkUnitRange::WorkUnitRange(JsonView jsonValue) : 
    m_workUnitIdMax(0),
    m_workUnitIdMaxHasBeenSet(false),
    m_workUnitIdMin(0),
    m_workUnitIdMinHasBeenSet(false),
    m_workUnitTokenHasBeenSet(false)
{
  *this = jsonValue;
}

WorkUnitRange& WorkUnitRange::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("WorkUnitIdMax"))
  {
    m_workUnitIdMax = jsonValue.GetInt64("WorkUnitIdMax");

    m_workUnitIdMaxHasBeenSet = true;
  }

  if(jsonValue.ValueExists("WorkUnitIdMin"))
  {
    m_workUnitIdMin = jsonValue.GetInt64("WorkUnitIdMin");

    m_workUnitIdMinHasBeenSet = true;
  }

  if(jsonValue.ValueExists("WorkUnitToken"))
  {
    m_workUnitToken = jsonValue.GetString("WorkUnitToken");

    m_workUnitTokenHasBeenSet = true;
  }

  return *this;
}

JsonValue WorkUnitRange::Jsonize() const
{
  JsonValue payload;

  if(m_workUnitIdMaxHasBeenSet)
  {
   payload.WithInt64("WorkUnitIdMax", m_workUnitIdMax);

  }

  if(m_workUnitIdMinHasBeenSet)
  {
   payload.WithInt64("WorkUnitIdMin", m_workUnitIdMin);

  }

  if(m_workUnitTokenHasBeenSet)
  {
   payload.WithString("WorkUnitToken", m_workUnitToken);

  }

  return payload;
}

} // namespace Model
} // namespace LakeFormation
} // namespace Aws
