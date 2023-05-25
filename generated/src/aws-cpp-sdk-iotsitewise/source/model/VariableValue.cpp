/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotsitewise/model/VariableValue.h>
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

VariableValue::VariableValue() : 
    m_propertyIdHasBeenSet(false),
    m_hierarchyIdHasBeenSet(false)
{
}

VariableValue::VariableValue(JsonView jsonValue) : 
    m_propertyIdHasBeenSet(false),
    m_hierarchyIdHasBeenSet(false)
{
  *this = jsonValue;
}

VariableValue& VariableValue::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("propertyId"))
  {
    m_propertyId = jsonValue.GetString("propertyId");

    m_propertyIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("hierarchyId"))
  {
    m_hierarchyId = jsonValue.GetString("hierarchyId");

    m_hierarchyIdHasBeenSet = true;
  }

  return *this;
}

JsonValue VariableValue::Jsonize() const
{
  JsonValue payload;

  if(m_propertyIdHasBeenSet)
  {
   payload.WithString("propertyId", m_propertyId);

  }

  if(m_hierarchyIdHasBeenSet)
  {
   payload.WithString("hierarchyId", m_hierarchyId);

  }

  return payload;
}

} // namespace Model
} // namespace IoTSiteWise
} // namespace Aws
