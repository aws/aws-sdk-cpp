/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/drs/model/LaunchActionsRequestFilters.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace drs
{
namespace Model
{

LaunchActionsRequestFilters::LaunchActionsRequestFilters() : 
    m_actionIdsHasBeenSet(false)
{
}

LaunchActionsRequestFilters::LaunchActionsRequestFilters(JsonView jsonValue) : 
    m_actionIdsHasBeenSet(false)
{
  *this = jsonValue;
}

LaunchActionsRequestFilters& LaunchActionsRequestFilters::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("actionIds"))
  {
    Aws::Utils::Array<JsonView> actionIdsJsonList = jsonValue.GetArray("actionIds");
    for(unsigned actionIdsIndex = 0; actionIdsIndex < actionIdsJsonList.GetLength(); ++actionIdsIndex)
    {
      m_actionIds.push_back(actionIdsJsonList[actionIdsIndex].AsString());
    }
    m_actionIdsHasBeenSet = true;
  }

  return *this;
}

JsonValue LaunchActionsRequestFilters::Jsonize() const
{
  JsonValue payload;

  if(m_actionIdsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> actionIdsJsonList(m_actionIds.size());
   for(unsigned actionIdsIndex = 0; actionIdsIndex < actionIdsJsonList.GetLength(); ++actionIdsIndex)
   {
     actionIdsJsonList[actionIdsIndex].AsString(m_actionIds[actionIdsIndex]);
   }
   payload.WithArray("actionIds", std::move(actionIdsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace drs
} // namespace Aws
