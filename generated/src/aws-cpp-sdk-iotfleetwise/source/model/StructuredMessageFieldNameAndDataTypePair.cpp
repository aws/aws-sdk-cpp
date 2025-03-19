/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotfleetwise/model/StructuredMessageFieldNameAndDataTypePair.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/iotfleetwise/model/StructuredMessage.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace IoTFleetWise
{
namespace Model
{

StructuredMessageFieldNameAndDataTypePair::StructuredMessageFieldNameAndDataTypePair(JsonView jsonValue)
{
  *this = jsonValue;
}

StructuredMessageFieldNameAndDataTypePair& StructuredMessageFieldNameAndDataTypePair::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("fieldName"))
  {
    m_fieldName = jsonValue.GetString("fieldName");
    m_fieldNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("dataType"))
  {
    m_dataType = Aws::MakeShared<StructuredMessage>("StructuredMessageFieldNameAndDataTypePair", jsonValue.GetObject("dataType"));
    m_dataTypeHasBeenSet = true;
  }
  return *this;
}

JsonValue StructuredMessageFieldNameAndDataTypePair::Jsonize() const
{
  JsonValue payload;

  if(m_fieldNameHasBeenSet)
  {
   payload.WithString("fieldName", m_fieldName);

  }

  if(m_dataTypeHasBeenSet)
  {
   payload.WithObject("dataType", m_dataType->Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace IoTFleetWise
} // namespace Aws
