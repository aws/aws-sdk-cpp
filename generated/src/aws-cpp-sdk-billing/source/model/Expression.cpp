/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/billing/model/Expression.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Billing
{
namespace Model
{

Expression::Expression(JsonView jsonValue)
{
  *this = jsonValue;
}

Expression& Expression::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("dimensions"))
  {
    m_dimensions = jsonValue.GetObject("dimensions");
    m_dimensionsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("tags"))
  {
    m_tags = jsonValue.GetObject("tags");
    m_tagsHasBeenSet = true;
  }
  return *this;
}

JsonValue Expression::Jsonize() const
{
  JsonValue payload;

  if(m_dimensionsHasBeenSet)
  {
   payload.WithObject("dimensions", m_dimensions.Jsonize());

  }

  if(m_tagsHasBeenSet)
  {
   payload.WithObject("tags", m_tags.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace Billing
} // namespace Aws
