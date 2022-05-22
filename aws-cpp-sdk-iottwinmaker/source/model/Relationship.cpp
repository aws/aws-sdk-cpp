/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iottwinmaker/model/Relationship.h>
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

Relationship::Relationship() : 
    m_relationshipTypeHasBeenSet(false),
    m_targetComponentTypeIdHasBeenSet(false)
{
}

Relationship::Relationship(JsonView jsonValue) : 
    m_relationshipTypeHasBeenSet(false),
    m_targetComponentTypeIdHasBeenSet(false)
{
  *this = jsonValue;
}

Relationship& Relationship::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("relationshipType"))
  {
    m_relationshipType = jsonValue.GetString("relationshipType");

    m_relationshipTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("targetComponentTypeId"))
  {
    m_targetComponentTypeId = jsonValue.GetString("targetComponentTypeId");

    m_targetComponentTypeIdHasBeenSet = true;
  }

  return *this;
}

JsonValue Relationship::Jsonize() const
{
  JsonValue payload;

  if(m_relationshipTypeHasBeenSet)
  {
   payload.WithString("relationshipType", m_relationshipType);

  }

  if(m_targetComponentTypeIdHasBeenSet)
  {
   payload.WithString("targetComponentTypeId", m_targetComponentTypeId);

  }

  return payload;
}

} // namespace Model
} // namespace IoTTwinMaker
} // namespace Aws
