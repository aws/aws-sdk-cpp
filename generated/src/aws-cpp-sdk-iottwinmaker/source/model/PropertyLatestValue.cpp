/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iottwinmaker/model/PropertyLatestValue.h>
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

PropertyLatestValue::PropertyLatestValue() : 
    m_propertyReferenceHasBeenSet(false),
    m_propertyValueHasBeenSet(false)
{
}

PropertyLatestValue::PropertyLatestValue(JsonView jsonValue) : 
    m_propertyReferenceHasBeenSet(false),
    m_propertyValueHasBeenSet(false)
{
  *this = jsonValue;
}

PropertyLatestValue& PropertyLatestValue::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("propertyReference"))
  {
    m_propertyReference = jsonValue.GetObject("propertyReference");

    m_propertyReferenceHasBeenSet = true;
  }

  if(jsonValue.ValueExists("propertyValue"))
  {
    m_propertyValue = jsonValue.GetObject("propertyValue");

    m_propertyValueHasBeenSet = true;
  }

  return *this;
}

JsonValue PropertyLatestValue::Jsonize() const
{
  JsonValue payload;

  if(m_propertyReferenceHasBeenSet)
  {
   payload.WithObject("propertyReference", m_propertyReference.Jsonize());

  }

  if(m_propertyValueHasBeenSet)
  {
   payload.WithObject("propertyValue", m_propertyValue.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace IoTTwinMaker
} // namespace Aws
