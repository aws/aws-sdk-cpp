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

#include <aws/backup/model/CalculatedLifecycle.h>
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

CalculatedLifecycle::CalculatedLifecycle() : 
    m_moveToColdStorageAtHasBeenSet(false),
    m_deleteAtHasBeenSet(false)
{
}

CalculatedLifecycle::CalculatedLifecycle(JsonView jsonValue) : 
    m_moveToColdStorageAtHasBeenSet(false),
    m_deleteAtHasBeenSet(false)
{
  *this = jsonValue;
}

CalculatedLifecycle& CalculatedLifecycle::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("MoveToColdStorageAt"))
  {
    m_moveToColdStorageAt = jsonValue.GetDouble("MoveToColdStorageAt");

    m_moveToColdStorageAtHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DeleteAt"))
  {
    m_deleteAt = jsonValue.GetDouble("DeleteAt");

    m_deleteAtHasBeenSet = true;
  }

  return *this;
}

JsonValue CalculatedLifecycle::Jsonize() const
{
  JsonValue payload;

  if(m_moveToColdStorageAtHasBeenSet)
  {
   payload.WithDouble("MoveToColdStorageAt", m_moveToColdStorageAt.SecondsWithMSPrecision());
  }

  if(m_deleteAtHasBeenSet)
  {
   payload.WithDouble("DeleteAt", m_deleteAt.SecondsWithMSPrecision());
  }

  return payload;
}

} // namespace Model
} // namespace Backup
} // namespace Aws
