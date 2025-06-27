/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/guardduty/model/KubernetesWorkload.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace GuardDuty
{
namespace Model
{

KubernetesWorkload::KubernetesWorkload(JsonView jsonValue)
{
  *this = jsonValue;
}

KubernetesWorkload& KubernetesWorkload::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("containerUids"))
  {
    Aws::Utils::Array<JsonView> containerUidsJsonList = jsonValue.GetArray("containerUids");
    for(unsigned containerUidsIndex = 0; containerUidsIndex < containerUidsJsonList.GetLength(); ++containerUidsIndex)
    {
      m_containerUids.push_back(containerUidsJsonList[containerUidsIndex].AsString());
    }
    m_containerUidsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("namespace"))
  {
    m_namespace = jsonValue.GetString("namespace");
    m_namespaceHasBeenSet = true;
  }
  if(jsonValue.ValueExists("type"))
  {
    m_kubernetesResourcesTypes = KubernetesResourcesTypesMapper::GetKubernetesResourcesTypesForName(jsonValue.GetString("type"));
    m_kubernetesResourcesTypesHasBeenSet = true;
  }
  return *this;
}

JsonValue KubernetesWorkload::Jsonize() const
{
  JsonValue payload;

  if(m_containerUidsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> containerUidsJsonList(m_containerUids.size());
   for(unsigned containerUidsIndex = 0; containerUidsIndex < containerUidsJsonList.GetLength(); ++containerUidsIndex)
   {
     containerUidsJsonList[containerUidsIndex].AsString(m_containerUids[containerUidsIndex]);
   }
   payload.WithArray("containerUids", std::move(containerUidsJsonList));

  }

  if(m_namespaceHasBeenSet)
  {
   payload.WithString("namespace", m_namespace);

  }

  if(m_kubernetesResourcesTypesHasBeenSet)
  {
   payload.WithString("type", KubernetesResourcesTypesMapper::GetNameForKubernetesResourcesTypes(m_kubernetesResourcesTypes));
  }

  return payload;
}

} // namespace Model
} // namespace GuardDuty
} // namespace Aws
