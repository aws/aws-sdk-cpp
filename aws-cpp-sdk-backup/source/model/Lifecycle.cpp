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

#include <aws/backup/model/Lifecycle.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Backup
{
namespace Model
{

Lifecycle::Lifecycle() : 
    m_moveToColdStorageAfterDays(0),
    m_moveToColdStorageAfterDaysHasBeenSet(false),
    m_deleteAfterDays(0),
    m_deleteAfterDaysHasBeenSet(false)
{
}

Lifecycle::Lifecycle(JsonView jsonValue) : 
    m_moveToColdStorageAfterDays(0),
    m_moveToColdStorageAfterDaysHasBeenSet(false),
    m_deleteAfterDays(0),
    m_deleteAfterDaysHasBeenSet(false)
{
  *this = jsonValue;
}

Lifecycle& Lifecycle::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("MoveToColdStorageAfterDays"))
  {
    m_moveToColdStorageAfterDays = jsonValue.GetInt64("MoveToColdStorageAfterDays");

    m_moveToColdStorageAfterDaysHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DeleteAfterDays"))
  {
    m_deleteAfterDays = jsonValue.GetInt64("DeleteAfterDays");

    m_deleteAfterDaysHasBeenSet = true;
  }

  return *this;
}

JsonValue Lifecycle::Jsonize() const
{
  JsonValue payload;

  if(m_moveToColdStorageAfterDaysHasBeenSet)
  {
   payload.WithInt64("MoveToColdStorageAfterDays", m_moveToColdStorageAfterDays);

  }

  if(m_deleteAfterDaysHasBeenSet)
  {
   payload.WithInt64("DeleteAfterDays", m_deleteAfterDays);

  }

  return payload;
}

} // namespace Model
} // namespace Backup
} // namespace Aws
