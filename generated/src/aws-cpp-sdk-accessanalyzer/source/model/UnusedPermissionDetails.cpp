/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/accessanalyzer/model/UnusedPermissionDetails.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace AccessAnalyzer
{
namespace Model
{

UnusedPermissionDetails::UnusedPermissionDetails() : 
    m_actionsHasBeenSet(false),
    m_serviceNamespaceHasBeenSet(false),
    m_lastAccessedHasBeenSet(false)
{
}

UnusedPermissionDetails::UnusedPermissionDetails(JsonView jsonValue) : 
    m_actionsHasBeenSet(false),
    m_serviceNamespaceHasBeenSet(false),
    m_lastAccessedHasBeenSet(false)
{
  *this = jsonValue;
}

UnusedPermissionDetails& UnusedPermissionDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("actions"))
  {
    Aws::Utils::Array<JsonView> actionsJsonList = jsonValue.GetArray("actions");
    for(unsigned actionsIndex = 0; actionsIndex < actionsJsonList.GetLength(); ++actionsIndex)
    {
      m_actions.push_back(actionsJsonList[actionsIndex].AsObject());
    }
    m_actionsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("serviceNamespace"))
  {
    m_serviceNamespace = jsonValue.GetString("serviceNamespace");

    m_serviceNamespaceHasBeenSet = true;
  }

  if(jsonValue.ValueExists("lastAccessed"))
  {
    m_lastAccessed = jsonValue.GetString("lastAccessed");

    m_lastAccessedHasBeenSet = true;
  }

  return *this;
}

JsonValue UnusedPermissionDetails::Jsonize() const
{
  JsonValue payload;

  if(m_actionsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> actionsJsonList(m_actions.size());
   for(unsigned actionsIndex = 0; actionsIndex < actionsJsonList.GetLength(); ++actionsIndex)
   {
     actionsJsonList[actionsIndex].AsObject(m_actions[actionsIndex].Jsonize());
   }
   payload.WithArray("actions", std::move(actionsJsonList));

  }

  if(m_serviceNamespaceHasBeenSet)
  {
   payload.WithString("serviceNamespace", m_serviceNamespace);

  }

  if(m_lastAccessedHasBeenSet)
  {
   payload.WithString("lastAccessed", m_lastAccessed.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  return payload;
}

} // namespace Model
} // namespace AccessAnalyzer
} // namespace Aws
