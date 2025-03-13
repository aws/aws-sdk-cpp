/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/ContactSearchSummarySegmentAttributeValue.h>
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

ContactSearchSummarySegmentAttributeValue::ContactSearchSummarySegmentAttributeValue(JsonView jsonValue)
{
  *this = jsonValue;
}

ContactSearchSummarySegmentAttributeValue& ContactSearchSummarySegmentAttributeValue::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ValueString"))
  {
    m_valueString = jsonValue.GetString("ValueString");
    m_valueStringHasBeenSet = true;
  }
  return *this;
}

JsonValue ContactSearchSummarySegmentAttributeValue::Jsonize() const
{
  JsonValue payload;

  if(m_valueStringHasBeenSet)
  {
   payload.WithString("ValueString", m_valueString);

  }

  return payload;
}

} // namespace Model
} // namespace Connect
} // namespace Aws
