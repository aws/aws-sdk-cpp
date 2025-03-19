/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iot/model/PropagatingAttribute.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace IoT
{
namespace Model
{

PropagatingAttribute::PropagatingAttribute(JsonView jsonValue)
{
  *this = jsonValue;
}

PropagatingAttribute& PropagatingAttribute::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("userPropertyKey"))
  {
    m_userPropertyKey = jsonValue.GetString("userPropertyKey");
    m_userPropertyKeyHasBeenSet = true;
  }
  if(jsonValue.ValueExists("thingAttribute"))
  {
    m_thingAttribute = jsonValue.GetString("thingAttribute");
    m_thingAttributeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("connectionAttribute"))
  {
    m_connectionAttribute = jsonValue.GetString("connectionAttribute");
    m_connectionAttributeHasBeenSet = true;
  }
  return *this;
}

JsonValue PropagatingAttribute::Jsonize() const
{
  JsonValue payload;

  if(m_userPropertyKeyHasBeenSet)
  {
   payload.WithString("userPropertyKey", m_userPropertyKey);

  }

  if(m_thingAttributeHasBeenSet)
  {
   payload.WithString("thingAttribute", m_thingAttribute);

  }

  if(m_connectionAttributeHasBeenSet)
  {
   payload.WithString("connectionAttribute", m_connectionAttribute);

  }

  return payload;
}

} // namespace Model
} // namespace IoT
} // namespace Aws
