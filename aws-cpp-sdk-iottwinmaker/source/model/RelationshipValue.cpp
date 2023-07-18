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

RelationshipValue::RelationshipValue() : 
    m_targetComponentNameHasBeenSet(false),
    m_targetEntityIdHasBeenSet(false)
{
}

RelationshipValue::RelationshipValue(JsonView jsonValue) : 
    m_targetComponentNameHasBeenSet(false),
    m_targetEntityIdHasBeenSet(false)
{
  *this = jsonValue;
}

RelationshipValue& RelationshipValue::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("targetComponentName"))
  {
    m_targetComponentName = jsonValue.GetString("targetComponentName");

    m_targetComponentNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("targetEntityId"))
  {
    m_targetEntityId = jsonValue.GetString("targetEntityId");

    m_targetEntityIdHasBeenSet = true;
  }

  return *this;
}

JsonValue RelationshipValue::Jsonize() const
{
  JsonValue payload;

  if(m_targetComponentNameHasBeenSet)
  {
   payload.WithString("targetComponentName", m_targetComponentName);

  }

  if(m_targetEntityIdHasBeenSet)
  {
   payload.WithString("targetEntityId", m_targetEntityId);

  }

  return payload;
}

} // namespace Model
} // namespace IoTTwinMaker
} // namespace Aws
