/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iottwinmaker/model/ParentEntityUpdateRequest.h>
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

ParentEntityUpdateRequest::ParentEntityUpdateRequest() : 
    m_parentEntityIdHasBeenSet(false),
    m_updateType(ParentEntityUpdateType::NOT_SET),
    m_updateTypeHasBeenSet(false)
{
}

ParentEntityUpdateRequest::ParentEntityUpdateRequest(JsonView jsonValue) : 
    m_parentEntityIdHasBeenSet(false),
    m_updateType(ParentEntityUpdateType::NOT_SET),
    m_updateTypeHasBeenSet(false)
{
  *this = jsonValue;
}

ParentEntityUpdateRequest& ParentEntityUpdateRequest::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("parentEntityId"))
  {
    m_parentEntityId = jsonValue.GetString("parentEntityId");

    m_parentEntityIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("updateType"))
  {
    m_updateType = ParentEntityUpdateTypeMapper::GetParentEntityUpdateTypeForName(jsonValue.GetString("updateType"));

    m_updateTypeHasBeenSet = true;
  }

  return *this;
}

JsonValue ParentEntityUpdateRequest::Jsonize() const
{
  JsonValue payload;

  if(m_parentEntityIdHasBeenSet)
  {
   payload.WithString("parentEntityId", m_parentEntityId);

  }

  if(m_updateTypeHasBeenSet)
  {
   payload.WithString("updateType", ParentEntityUpdateTypeMapper::GetNameForParentEntityUpdateType(m_updateType));
  }

  return payload;
}

} // namespace Model
} // namespace IoTTwinMaker
} // namespace Aws
