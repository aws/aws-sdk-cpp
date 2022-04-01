/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/dynamodb/model/ReplicaUpdate.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace DynamoDB
{
namespace Model
{

ReplicaUpdate::ReplicaUpdate() : 
    m_createHasBeenSet(false),
    m_deleteHasBeenSet(false)
{
}

ReplicaUpdate::ReplicaUpdate(JsonView jsonValue) : 
    m_createHasBeenSet(false),
    m_deleteHasBeenSet(false)
{
  *this = jsonValue;
}

ReplicaUpdate& ReplicaUpdate::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Create"))
  {
    m_create = jsonValue.GetObject("Create");

    m_createHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Delete"))
  {
    m_delete = jsonValue.GetObject("Delete");

    m_deleteHasBeenSet = true;
  }

  return *this;
}

JsonValue ReplicaUpdate::Jsonize() const
{
  JsonValue payload;

  if(m_createHasBeenSet)
  {
   payload.WithObject("Create", m_create.Jsonize());

  }

  if(m_deleteHasBeenSet)
  {
   payload.WithObject("Delete", m_delete.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace DynamoDB
} // namespace Aws
