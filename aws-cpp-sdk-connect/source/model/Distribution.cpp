/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/Distribution.h>
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

Distribution::Distribution() : 
    m_regionHasBeenSet(false),
    m_percentage(0),
    m_percentageHasBeenSet(false)
{
}

Distribution::Distribution(JsonView jsonValue) : 
    m_regionHasBeenSet(false),
    m_percentage(0),
    m_percentageHasBeenSet(false)
{
  *this = jsonValue;
}

Distribution& Distribution::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Region"))
  {
    m_region = jsonValue.GetString("Region");

    m_regionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Percentage"))
  {
    m_percentage = jsonValue.GetInteger("Percentage");

    m_percentageHasBeenSet = true;
  }

  return *this;
}

JsonValue Distribution::Jsonize() const
{
  JsonValue payload;

  if(m_regionHasBeenSet)
  {
   payload.WithString("Region", m_region);

  }

  if(m_percentageHasBeenSet)
  {
   payload.WithInteger("Percentage", m_percentage);

  }

  return payload;
}

} // namespace Model
} // namespace Connect
} // namespace Aws
