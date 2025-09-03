/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cleanrooms/model/ChangeInput.h>
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

ChangeInput::ChangeInput(JsonView jsonValue)
{
  *this = jsonValue;
}

ChangeInput& ChangeInput::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("specificationType"))
  {
    m_specificationType = ChangeSpecificationTypeMapper::GetChangeSpecificationTypeForName(jsonValue.GetString("specificationType"));
    m_specificationTypeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("specification"))
  {
    m_specification = jsonValue.GetObject("specification");
    m_specificationHasBeenSet = true;
  }
  return *this;
}

JsonValue ChangeInput::Jsonize() const
{
  JsonValue payload;

  if(m_specificationTypeHasBeenSet)
  {
   payload.WithString("specificationType", ChangeSpecificationTypeMapper::GetNameForChangeSpecificationType(m_specificationType));
  }

  if(m_specificationHasBeenSet)
  {
   payload.WithObject("specification", m_specification.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace CleanRooms
} // namespace Aws
