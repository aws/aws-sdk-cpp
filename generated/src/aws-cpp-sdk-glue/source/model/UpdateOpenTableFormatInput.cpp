/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/glue/model/UpdateOpenTableFormatInput.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Glue
{
namespace Model
{

UpdateOpenTableFormatInput::UpdateOpenTableFormatInput(JsonView jsonValue)
{
  *this = jsonValue;
}

UpdateOpenTableFormatInput& UpdateOpenTableFormatInput::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("UpdateIcebergInput"))
  {
    m_updateIcebergInput = jsonValue.GetObject("UpdateIcebergInput");
    m_updateIcebergInputHasBeenSet = true;
  }
  return *this;
}

JsonValue UpdateOpenTableFormatInput::Jsonize() const
{
  JsonValue payload;

  if(m_updateIcebergInputHasBeenSet)
  {
   payload.WithObject("UpdateIcebergInput", m_updateIcebergInput.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace Glue
} // namespace Aws
