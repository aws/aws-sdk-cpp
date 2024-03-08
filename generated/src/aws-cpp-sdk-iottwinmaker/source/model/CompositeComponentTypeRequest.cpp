/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iottwinmaker/model/CompositeComponentTypeRequest.h>
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

CompositeComponentTypeRequest::CompositeComponentTypeRequest() : 
    m_componentTypeIdHasBeenSet(false)
{
}

CompositeComponentTypeRequest::CompositeComponentTypeRequest(JsonView jsonValue) : 
    m_componentTypeIdHasBeenSet(false)
{
  *this = jsonValue;
}

CompositeComponentTypeRequest& CompositeComponentTypeRequest::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("componentTypeId"))
  {
    m_componentTypeId = jsonValue.GetString("componentTypeId");

    m_componentTypeIdHasBeenSet = true;
  }

  return *this;
}

JsonValue CompositeComponentTypeRequest::Jsonize() const
{
  JsonValue payload;

  if(m_componentTypeIdHasBeenSet)
  {
   payload.WithString("componentTypeId", m_componentTypeId);

  }

  return payload;
}

} // namespace Model
} // namespace IoTTwinMaker
} // namespace Aws
