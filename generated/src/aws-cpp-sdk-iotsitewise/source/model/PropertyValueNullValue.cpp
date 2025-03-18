/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotsitewise/model/PropertyValueNullValue.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace IoTSiteWise
{
namespace Model
{

PropertyValueNullValue::PropertyValueNullValue(JsonView jsonValue)
{
  *this = jsonValue;
}

PropertyValueNullValue& PropertyValueNullValue::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("valueType"))
  {
    m_valueType = RawValueTypeMapper::GetRawValueTypeForName(jsonValue.GetString("valueType"));
    m_valueTypeHasBeenSet = true;
  }
  return *this;
}

JsonValue PropertyValueNullValue::Jsonize() const
{
  JsonValue payload;

  if(m_valueTypeHasBeenSet)
  {
   payload.WithString("valueType", RawValueTypeMapper::GetNameForRawValueType(m_valueType));
  }

  return payload;
}

} // namespace Model
} // namespace IoTSiteWise
} // namespace Aws
