/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connectcases/model/FieldFilter.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ConnectCases
{
namespace Model
{

FieldFilter::FieldFilter() : 
    m_containsHasBeenSet(false),
    m_equalToHasBeenSet(false),
    m_greaterThanHasBeenSet(false),
    m_greaterThanOrEqualToHasBeenSet(false),
    m_lessThanHasBeenSet(false),
    m_lessThanOrEqualToHasBeenSet(false)
{
}

FieldFilter::FieldFilter(JsonView jsonValue) : 
    m_containsHasBeenSet(false),
    m_equalToHasBeenSet(false),
    m_greaterThanHasBeenSet(false),
    m_greaterThanOrEqualToHasBeenSet(false),
    m_lessThanHasBeenSet(false),
    m_lessThanOrEqualToHasBeenSet(false)
{
  *this = jsonValue;
}

FieldFilter& FieldFilter::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("contains"))
  {
    m_contains = jsonValue.GetObject("contains");

    m_containsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("equalTo"))
  {
    m_equalTo = jsonValue.GetObject("equalTo");

    m_equalToHasBeenSet = true;
  }

  if(jsonValue.ValueExists("greaterThan"))
  {
    m_greaterThan = jsonValue.GetObject("greaterThan");

    m_greaterThanHasBeenSet = true;
  }

  if(jsonValue.ValueExists("greaterThanOrEqualTo"))
  {
    m_greaterThanOrEqualTo = jsonValue.GetObject("greaterThanOrEqualTo");

    m_greaterThanOrEqualToHasBeenSet = true;
  }

  if(jsonValue.ValueExists("lessThan"))
  {
    m_lessThan = jsonValue.GetObject("lessThan");

    m_lessThanHasBeenSet = true;
  }

  if(jsonValue.ValueExists("lessThanOrEqualTo"))
  {
    m_lessThanOrEqualTo = jsonValue.GetObject("lessThanOrEqualTo");

    m_lessThanOrEqualToHasBeenSet = true;
  }

  return *this;
}

JsonValue FieldFilter::Jsonize() const
{
  JsonValue payload;

  if(m_containsHasBeenSet)
  {
   payload.WithObject("contains", m_contains.Jsonize());

  }

  if(m_equalToHasBeenSet)
  {
   payload.WithObject("equalTo", m_equalTo.Jsonize());

  }

  if(m_greaterThanHasBeenSet)
  {
   payload.WithObject("greaterThan", m_greaterThan.Jsonize());

  }

  if(m_greaterThanOrEqualToHasBeenSet)
  {
   payload.WithObject("greaterThanOrEqualTo", m_greaterThanOrEqualTo.Jsonize());

  }

  if(m_lessThanHasBeenSet)
  {
   payload.WithObject("lessThan", m_lessThan.Jsonize());

  }

  if(m_lessThanOrEqualToHasBeenSet)
  {
   payload.WithObject("lessThanOrEqualTo", m_lessThanOrEqualTo.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace ConnectCases
} // namespace Aws
