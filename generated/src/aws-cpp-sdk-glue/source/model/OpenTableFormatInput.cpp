/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/glue/model/OpenTableFormatInput.h>
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

OpenTableFormatInput::OpenTableFormatInput() : 
    m_icebergInputHasBeenSet(false)
{
}

OpenTableFormatInput::OpenTableFormatInput(JsonView jsonValue) : 
    m_icebergInputHasBeenSet(false)
{
  *this = jsonValue;
}

OpenTableFormatInput& OpenTableFormatInput::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("IcebergInput"))
  {
    m_icebergInput = jsonValue.GetObject("IcebergInput");

    m_icebergInputHasBeenSet = true;
  }

  return *this;
}

JsonValue OpenTableFormatInput::Jsonize() const
{
  JsonValue payload;

  if(m_icebergInputHasBeenSet)
  {
   payload.WithObject("IcebergInput", m_icebergInput.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace Glue
} // namespace Aws
