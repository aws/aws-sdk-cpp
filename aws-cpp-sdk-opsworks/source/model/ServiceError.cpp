/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/opsworks/model/ServiceError.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace OpsWorks
{
namespace Model
{

ServiceError::ServiceError() : 
    m_serviceErrorIdHasBeenSet(false),
    m_stackIdHasBeenSet(false),
    m_instanceIdHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_messageHasBeenSet(false),
    m_createdAtHasBeenSet(false)
{
}

ServiceError::ServiceError(const JsonValue& jsonValue) : 
    m_serviceErrorIdHasBeenSet(false),
    m_stackIdHasBeenSet(false),
    m_instanceIdHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_messageHasBeenSet(false),
    m_createdAtHasBeenSet(false)
{
  *this = jsonValue;
}

ServiceError& ServiceError::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("ServiceErrorId"))
  {
    m_serviceErrorId = jsonValue.GetString("ServiceErrorId");

    m_serviceErrorIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("StackId"))
  {
    m_stackId = jsonValue.GetString("StackId");

    m_stackIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("InstanceId"))
  {
    m_instanceId = jsonValue.GetString("InstanceId");

    m_instanceIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Type"))
  {
    m_type = jsonValue.GetString("Type");

    m_typeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Message"))
  {
    m_message = jsonValue.GetString("Message");

    m_messageHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CreatedAt"))
  {
    m_createdAt = jsonValue.GetString("CreatedAt");

    m_createdAtHasBeenSet = true;
  }

  return *this;
}

JsonValue ServiceError::Jsonize() const
{
  JsonValue payload;

  if(m_serviceErrorIdHasBeenSet)
  {
   payload.WithString("ServiceErrorId", m_serviceErrorId);

  }

  if(m_stackIdHasBeenSet)
  {
   payload.WithString("StackId", m_stackId);

  }

  if(m_instanceIdHasBeenSet)
  {
   payload.WithString("InstanceId", m_instanceId);

  }

  if(m_typeHasBeenSet)
  {
   payload.WithString("Type", m_type);

  }

  if(m_messageHasBeenSet)
  {
   payload.WithString("Message", m_message);

  }

  if(m_createdAtHasBeenSet)
  {
   payload.WithString("CreatedAt", m_createdAt);

  }

  return payload;
}

} // namespace Model
} // namespace OpsWorks
} // namespace Aws