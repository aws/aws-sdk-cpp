/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iottwinmaker/model/RelationshipValue.h>
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

RelationshipValue::RelationshipValue(JsonView jsonValue)
{
  *this = jsonValue;
}

RelationshipValue& RelationshipValue::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("targetEntityId"))
  {
    m_targetEntityId = jsonValue.GetString("targetEntityId");
    m_targetEntityIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("targetComponentName"))
  {
    m_targetComponentName = jsonValue.GetString("targetComponentName");
    m_targetComponentNameHasBeenSet = true;
  }
  return *this;
}

JsonValue RelationshipValue::Jsonize() const
{
  JsonValue payload;

  if(m_targetEntityIdHasBeenSet)
  {
   payload.WithString("targetEntityId", m_targetEntityId);

  }

  if(m_targetComponentNameHasBeenSet)
  {
   payload.WithString("targetComponentName", m_targetComponentName);

  }

  return payload;
}

} // namespace Model
} // namespace IoTTwinMaker
} // namespace Aws
