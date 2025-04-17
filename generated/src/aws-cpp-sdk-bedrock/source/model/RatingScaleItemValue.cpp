/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock/model/RatingScaleItemValue.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Bedrock
{
namespace Model
{

RatingScaleItemValue::RatingScaleItemValue(JsonView jsonValue)
{
  *this = jsonValue;
}

RatingScaleItemValue& RatingScaleItemValue::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("stringValue"))
  {
    m_stringValue = jsonValue.GetString("stringValue");
    m_stringValueHasBeenSet = true;
  }
  if(jsonValue.ValueExists("floatValue"))
  {
    m_floatValue = jsonValue.GetDouble("floatValue");
    m_floatValueHasBeenSet = true;
  }
  return *this;
}

JsonValue RatingScaleItemValue::Jsonize() const
{
  JsonValue payload;

  if(m_stringValueHasBeenSet)
  {
   payload.WithString("stringValue", m_stringValue);

  }

  if(m_floatValueHasBeenSet)
  {
   payload.WithDouble("floatValue", m_floatValue);

  }

  return payload;
}

} // namespace Model
} // namespace Bedrock
} // namespace Aws
