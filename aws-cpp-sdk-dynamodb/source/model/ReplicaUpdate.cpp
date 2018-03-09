/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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

ReplicaUpdate::ReplicaUpdate(const JsonValue& jsonValue) : 
    m_createHasBeenSet(false),
    m_deleteHasBeenSet(false)
{
  *this = jsonValue;
}

ReplicaUpdate& ReplicaUpdate::operator =(const JsonValue& jsonValue)
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
