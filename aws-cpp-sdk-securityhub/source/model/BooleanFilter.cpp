/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/BooleanFilter.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SecurityHub
{
namespace Model
{

BooleanFilter::BooleanFilter() : 
    m_value(false),
    m_valueHasBeenSet(false)
{
}

BooleanFilter::BooleanFilter(JsonView jsonValue) : 
    m_value(false),
    m_valueHasBeenSet(false)
{
  *this = jsonValue;
}

BooleanFilter& BooleanFilter::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Value"))
  {
    m_value = jsonValue.GetBool("Value");

    m_valueHasBeenSet = true;
  }

  return *this;
}

JsonValue BooleanFilter::Jsonize() const
{
  JsonValue payload;

  if(m_valueHasBeenSet)
  {
   payload.WithBool("Value", m_value);

  }

  return payload;
}

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
