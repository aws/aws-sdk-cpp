/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/PercentVisibleRange.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace QuickSight
{
namespace Model
{

PercentVisibleRange::PercentVisibleRange() : 
    m_from(0.0),
    m_fromHasBeenSet(false),
    m_to(0.0),
    m_toHasBeenSet(false)
{
}

PercentVisibleRange::PercentVisibleRange(JsonView jsonValue) : 
    m_from(0.0),
    m_fromHasBeenSet(false),
    m_to(0.0),
    m_toHasBeenSet(false)
{
  *this = jsonValue;
}

PercentVisibleRange& PercentVisibleRange::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("From"))
  {
    m_from = jsonValue.GetDouble("From");

    m_fromHasBeenSet = true;
  }

  if(jsonValue.ValueExists("To"))
  {
    m_to = jsonValue.GetDouble("To");

    m_toHasBeenSet = true;
  }

  return *this;
}

JsonValue PercentVisibleRange::Jsonize() const
{
  JsonValue payload;

  if(m_fromHasBeenSet)
  {
   payload.WithDouble("From", m_from);

  }

  if(m_toHasBeenSet)
  {
   payload.WithDouble("To", m_to);

  }

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws
