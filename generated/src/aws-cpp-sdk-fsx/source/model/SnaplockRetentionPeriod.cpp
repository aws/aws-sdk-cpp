/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/fsx/model/SnaplockRetentionPeriod.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace FSx
{
namespace Model
{

SnaplockRetentionPeriod::SnaplockRetentionPeriod() : 
    m_defaultRetentionHasBeenSet(false),
    m_minimumRetentionHasBeenSet(false),
    m_maximumRetentionHasBeenSet(false)
{
}

SnaplockRetentionPeriod::SnaplockRetentionPeriod(JsonView jsonValue) : 
    m_defaultRetentionHasBeenSet(false),
    m_minimumRetentionHasBeenSet(false),
    m_maximumRetentionHasBeenSet(false)
{
  *this = jsonValue;
}

SnaplockRetentionPeriod& SnaplockRetentionPeriod::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("DefaultRetention"))
  {
    m_defaultRetention = jsonValue.GetObject("DefaultRetention");

    m_defaultRetentionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("MinimumRetention"))
  {
    m_minimumRetention = jsonValue.GetObject("MinimumRetention");

    m_minimumRetentionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("MaximumRetention"))
  {
    m_maximumRetention = jsonValue.GetObject("MaximumRetention");

    m_maximumRetentionHasBeenSet = true;
  }

  return *this;
}

JsonValue SnaplockRetentionPeriod::Jsonize() const
{
  JsonValue payload;

  if(m_defaultRetentionHasBeenSet)
  {
   payload.WithObject("DefaultRetention", m_defaultRetention.Jsonize());

  }

  if(m_minimumRetentionHasBeenSet)
  {
   payload.WithObject("MinimumRetention", m_minimumRetention.Jsonize());

  }

  if(m_maximumRetentionHasBeenSet)
  {
   payload.WithObject("MaximumRetention", m_maximumRetention.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace FSx
} // namespace Aws
