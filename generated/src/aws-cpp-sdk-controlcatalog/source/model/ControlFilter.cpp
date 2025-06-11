/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/controlcatalog/model/ControlFilter.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ControlCatalog
{
namespace Model
{

ControlFilter::ControlFilter(JsonView jsonValue)
{
  *this = jsonValue;
}

ControlFilter& ControlFilter::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Implementations"))
  {
    m_implementations = jsonValue.GetObject("Implementations");
    m_implementationsHasBeenSet = true;
  }
  return *this;
}

JsonValue ControlFilter::Jsonize() const
{
  JsonValue payload;

  if(m_implementationsHasBeenSet)
  {
   payload.WithObject("Implementations", m_implementations.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace ControlCatalog
} // namespace Aws
