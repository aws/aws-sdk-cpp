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

#include <aws/ssm/model/InstanceAssociation.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SSM
{
namespace Model
{

InstanceAssociation::InstanceAssociation() : 
    m_associationIdHasBeenSet(false),
    m_instanceIdHasBeenSet(false),
    m_contentHasBeenSet(false)
{
}

InstanceAssociation::InstanceAssociation(const JsonValue& jsonValue) : 
    m_associationIdHasBeenSet(false),
    m_instanceIdHasBeenSet(false),
    m_contentHasBeenSet(false)
{
  *this = jsonValue;
}

InstanceAssociation& InstanceAssociation::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("AssociationId"))
  {
    m_associationId = jsonValue.GetString("AssociationId");

    m_associationIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("InstanceId"))
  {
    m_instanceId = jsonValue.GetString("InstanceId");

    m_instanceIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Content"))
  {
    m_content = jsonValue.GetString("Content");

    m_contentHasBeenSet = true;
  }

  return *this;
}

JsonValue InstanceAssociation::Jsonize() const
{
  JsonValue payload;

  if(m_associationIdHasBeenSet)
  {
   payload.WithString("AssociationId", m_associationId);

  }

  if(m_instanceIdHasBeenSet)
  {
   payload.WithString("InstanceId", m_instanceId);

  }

  if(m_contentHasBeenSet)
  {
   payload.WithString("Content", m_content);

  }

  return payload;
}

} // namespace Model
} // namespace SSM
} // namespace Aws