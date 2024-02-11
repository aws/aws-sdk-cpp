/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iottwinmaker/model/CompositeComponentTypeResponse.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace IoTTwinMaker
{
namespace Model
{

CompositeComponentTypeResponse::CompositeComponentTypeResponse() : 
    m_componentTypeIdHasBeenSet(false),
    m_isInherited(false),
    m_isInheritedHasBeenSet(false)
{
}

CompositeComponentTypeResponse::CompositeComponentTypeResponse(JsonView jsonValue) : 
    m_componentTypeIdHasBeenSet(false),
    m_isInherited(false),
    m_isInheritedHasBeenSet(false)
{
  *this = jsonValue;
}

CompositeComponentTypeResponse& CompositeComponentTypeResponse::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("componentTypeId"))
  {
    m_componentTypeId = jsonValue.GetString("componentTypeId");

    m_componentTypeIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("isInherited"))
  {
    m_isInherited = jsonValue.GetBool("isInherited");

    m_isInheritedHasBeenSet = true;
  }

  return *this;
}

JsonValue CompositeComponentTypeResponse::Jsonize() const
{
  JsonValue payload;

  if(m_componentTypeIdHasBeenSet)
  {
   payload.WithString("componentTypeId", m_componentTypeId);

  }

  if(m_isInheritedHasBeenSet)
  {
   payload.WithBool("isInherited", m_isInherited);

  }

  return payload;
}

} // namespace Model
} // namespace IoTTwinMaker
} // namespace Aws
