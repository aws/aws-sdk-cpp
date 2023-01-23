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
    m_targetComponentTypeIdHasBeenSet(false),
    m_relationshipTypeHasBeenSet(false)
{
}

Relationship::Relationship(JsonView jsonValue) : 
    m_targetComponentTypeIdHasBeenSet(false),
    m_relationshipTypeHasBeenSet(false)
{
  *this = jsonValue;
}

Relationship& Relationship::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("targetComponentTypeId"))
  {
    m_targetComponentTypeId = jsonValue.GetString("targetComponentTypeId");

    m_targetComponentTypeIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("relationshipType"))
  {
    m_relationshipType = jsonValue.GetString("relationshipType");

    m_relationshipTypeHasBeenSet = true;
  }

  return *this;
}

JsonValue Relationship::Jsonize() const
{
  JsonValue payload;

  if(m_targetComponentTypeIdHasBeenSet)
  {
   payload.WithString("targetComponentTypeId", m_targetComponentTypeId);

  }

  if(m_relationshipTypeHasBeenSet)
  {
   payload.WithString("relationshipType", m_relationshipType);

  }

  return payload;
}

} // namespace Model
} // namespace IoTTwinMaker
} // namespace Aws
