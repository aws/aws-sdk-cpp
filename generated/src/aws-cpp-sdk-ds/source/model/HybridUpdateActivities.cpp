/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ds/model/HybridUpdateActivities.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace DirectoryService
{
namespace Model
{

HybridUpdateActivities::HybridUpdateActivities(JsonView jsonValue)
{
  *this = jsonValue;
}

HybridUpdateActivities& HybridUpdateActivities::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("SelfManagedInstances"))
  {
    Aws::Utils::Array<JsonView> selfManagedInstancesJsonList = jsonValue.GetArray("SelfManagedInstances");
    for(unsigned selfManagedInstancesIndex = 0; selfManagedInstancesIndex < selfManagedInstancesJsonList.GetLength(); ++selfManagedInstancesIndex)
    {
      m_selfManagedInstances.push_back(selfManagedInstancesJsonList[selfManagedInstancesIndex].AsObject());
    }
    m_selfManagedInstancesHasBeenSet = true;
  }
  if(jsonValue.ValueExists("HybridAdministratorAccount"))
  {
    Aws::Utils::Array<JsonView> hybridAdministratorAccountJsonList = jsonValue.GetArray("HybridAdministratorAccount");
    for(unsigned hybridAdministratorAccountIndex = 0; hybridAdministratorAccountIndex < hybridAdministratorAccountJsonList.GetLength(); ++hybridAdministratorAccountIndex)
    {
      m_hybridAdministratorAccount.push_back(hybridAdministratorAccountJsonList[hybridAdministratorAccountIndex].AsObject());
    }
    m_hybridAdministratorAccountHasBeenSet = true;
  }
  return *this;
}

JsonValue HybridUpdateActivities::Jsonize() const
{
  JsonValue payload;

  if(m_selfManagedInstancesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> selfManagedInstancesJsonList(m_selfManagedInstances.size());
   for(unsigned selfManagedInstancesIndex = 0; selfManagedInstancesIndex < selfManagedInstancesJsonList.GetLength(); ++selfManagedInstancesIndex)
   {
     selfManagedInstancesJsonList[selfManagedInstancesIndex].AsObject(m_selfManagedInstances[selfManagedInstancesIndex].Jsonize());
   }
   payload.WithArray("SelfManagedInstances", std::move(selfManagedInstancesJsonList));

  }

  if(m_hybridAdministratorAccountHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> hybridAdministratorAccountJsonList(m_hybridAdministratorAccount.size());
   for(unsigned hybridAdministratorAccountIndex = 0; hybridAdministratorAccountIndex < hybridAdministratorAccountJsonList.GetLength(); ++hybridAdministratorAccountIndex)
   {
     hybridAdministratorAccountJsonList[hybridAdministratorAccountIndex].AsObject(m_hybridAdministratorAccount[hybridAdministratorAccountIndex].Jsonize());
   }
   payload.WithArray("HybridAdministratorAccount", std::move(hybridAdministratorAccountJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace DirectoryService
} // namespace Aws
