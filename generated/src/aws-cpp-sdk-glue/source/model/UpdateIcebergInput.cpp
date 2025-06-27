/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/glue/model/UpdateIcebergInput.h>
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

UpdateIcebergInput::UpdateIcebergInput(JsonView jsonValue)
{
  *this = jsonValue;
}

UpdateIcebergInput& UpdateIcebergInput::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("UpdateIcebergTableInput"))
  {
    m_updateIcebergTableInput = jsonValue.GetObject("UpdateIcebergTableInput");
    m_updateIcebergTableInputHasBeenSet = true;
  }
  return *this;
}

JsonValue UpdateIcebergInput::Jsonize() const
{
  JsonValue payload;

  if(m_updateIcebergTableInputHasBeenSet)
  {
   payload.WithObject("UpdateIcebergTableInput", m_updateIcebergTableInput.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace Glue
} // namespace Aws
