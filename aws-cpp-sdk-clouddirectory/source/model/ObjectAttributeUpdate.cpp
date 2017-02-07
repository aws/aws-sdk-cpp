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
#include <aws/clouddirectory/model/ObjectAttributeUpdate.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CloudDirectory
{
namespace Model
{

ObjectAttributeUpdate::ObjectAttributeUpdate() : 
    m_objectAttributeKeyHasBeenSet(false),
    m_objectAttributeActionHasBeenSet(false)
{
}

ObjectAttributeUpdate::ObjectAttributeUpdate(const JsonValue& jsonValue) : 
    m_objectAttributeKeyHasBeenSet(false),
    m_objectAttributeActionHasBeenSet(false)
{
  *this = jsonValue;
}

ObjectAttributeUpdate& ObjectAttributeUpdate::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("ObjectAttributeKey"))
  {
    m_objectAttributeKey = jsonValue.GetObject("ObjectAttributeKey");

    m_objectAttributeKeyHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ObjectAttributeAction"))
  {
    m_objectAttributeAction = jsonValue.GetObject("ObjectAttributeAction");

    m_objectAttributeActionHasBeenSet = true;
  }

  return *this;
}

JsonValue ObjectAttributeUpdate::Jsonize() const
{
  JsonValue payload;

  if(m_objectAttributeKeyHasBeenSet)
  {
   payload.WithObject("ObjectAttributeKey", m_objectAttributeKey.Jsonize());

  }

  if(m_objectAttributeActionHasBeenSet)
  {
   payload.WithObject("ObjectAttributeAction", m_objectAttributeAction.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace CloudDirectory
} // namespace Aws