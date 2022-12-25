/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/SectionPageBreakConfiguration.h>
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

SectionPageBreakConfiguration::SectionPageBreakConfiguration() : 
    m_afterHasBeenSet(false)
{
}

SectionPageBreakConfiguration::SectionPageBreakConfiguration(JsonView jsonValue) : 
    m_afterHasBeenSet(false)
{
  *this = jsonValue;
}

SectionPageBreakConfiguration& SectionPageBreakConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("After"))
  {
    m_after = jsonValue.GetObject("After");

    m_afterHasBeenSet = true;
  }

  return *this;
}

JsonValue SectionPageBreakConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_afterHasBeenSet)
  {
   payload.WithObject("After", m_after.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws
