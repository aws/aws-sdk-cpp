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
#include <aws/workspaces/model/UserStorage.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace WorkSpaces
{
namespace Model
{

UserStorage::UserStorage() : 
    m_capacityHasBeenSet(false)
{
}

UserStorage::UserStorage(const JsonValue& jsonValue) : 
    m_capacityHasBeenSet(false)
{
  *this = jsonValue;
}

UserStorage& UserStorage::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("Capacity"))
  {
    m_capacity = jsonValue.GetString("Capacity");

    m_capacityHasBeenSet = true;
  }

  return *this;
}

JsonValue UserStorage::Jsonize() const
{
  JsonValue payload;

  if(m_capacityHasBeenSet)
  {
   payload.WithString("Capacity", m_capacity);

  }

  return payload;
}

} // namespace Model
} // namespace WorkSpaces
} // namespace Aws