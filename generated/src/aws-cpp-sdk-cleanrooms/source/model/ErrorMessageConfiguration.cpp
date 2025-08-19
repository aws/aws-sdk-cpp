/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cleanrooms/model/ErrorMessageConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CleanRooms
{
namespace Model
{

ErrorMessageConfiguration::ErrorMessageConfiguration(JsonView jsonValue)
{
  *this = jsonValue;
}

ErrorMessageConfiguration& ErrorMessageConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("type"))
  {
    m_type = ErrorMessageTypeMapper::GetErrorMessageTypeForName(jsonValue.GetString("type"));
    m_typeHasBeenSet = true;
  }
  return *this;
}

JsonValue ErrorMessageConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_typeHasBeenSet)
  {
   payload.WithString("type", ErrorMessageTypeMapper::GetNameForErrorMessageType(m_type));
  }

  return payload;
}

} // namespace Model
} // namespace CleanRooms
} // namespace Aws
