/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/datazone/model/RowFilterExpression.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace DataZone
{
namespace Model
{

RowFilterExpression::RowFilterExpression(JsonView jsonValue)
{
  *this = jsonValue;
}

RowFilterExpression& RowFilterExpression::operator =(JsonView jsonValue)
{
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
  if(jsonValue.ValueExists("in"))
  {
    m_in = jsonValue.GetObject("in");
    m_inHasBeenSet = true;
  }
  if(jsonValue.ValueExists("isNotNull"))
  {
    m_isNotNull = jsonValue.GetObject("isNotNull");
    m_isNotNullHasBeenSet = true;
  }
  if(jsonValue.ValueExists("isNull"))
  {
    m_isNull = jsonValue.GetObject("isNull");
    m_isNullHasBeenSet = true;
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
  if(jsonValue.ValueExists("like"))
  {
    m_like = jsonValue.GetObject("like");
    m_likeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("notEqualTo"))
  {
    m_notEqualTo = jsonValue.GetObject("notEqualTo");
    m_notEqualToHasBeenSet = true;
  }
  if(jsonValue.ValueExists("notIn"))
  {
    m_notIn = jsonValue.GetObject("notIn");
    m_notInHasBeenSet = true;
  }
  if(jsonValue.ValueExists("notLike"))
  {
    m_notLike = jsonValue.GetObject("notLike");
    m_notLikeHasBeenSet = true;
  }
  return *this;
}

JsonValue RowFilterExpression::Jsonize() const
{
  JsonValue payload;

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

  if(m_inHasBeenSet)
  {
   payload.WithObject("in", m_in.Jsonize());

  }

  if(m_isNotNullHasBeenSet)
  {
   payload.WithObject("isNotNull", m_isNotNull.Jsonize());

  }

  if(m_isNullHasBeenSet)
  {
   payload.WithObject("isNull", m_isNull.Jsonize());

  }

  if(m_lessThanHasBeenSet)
  {
   payload.WithObject("lessThan", m_lessThan.Jsonize());

  }

  if(m_lessThanOrEqualToHasBeenSet)
  {
   payload.WithObject("lessThanOrEqualTo", m_lessThanOrEqualTo.Jsonize());

  }

  if(m_likeHasBeenSet)
  {
   payload.WithObject("like", m_like.Jsonize());

  }

  if(m_notEqualToHasBeenSet)
  {
   payload.WithObject("notEqualTo", m_notEqualTo.Jsonize());

  }

  if(m_notInHasBeenSet)
  {
   payload.WithObject("notIn", m_notIn.Jsonize());

  }

  if(m_notLikeHasBeenSet)
  {
   payload.WithObject("notLike", m_notLike.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace DataZone
} // namespace Aws
