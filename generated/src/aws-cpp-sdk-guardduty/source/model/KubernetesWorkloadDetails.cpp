/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/guardduty/model/KubernetesWorkloadDetails.h>
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

KubernetesWorkloadDetails::KubernetesWorkloadDetails() : 
    m_nameHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_uidHasBeenSet(false),
    m_namespaceHasBeenSet(false),
    m_hostNetwork(false),
    m_hostNetworkHasBeenSet(false),
    m_containersHasBeenSet(false),
    m_volumesHasBeenSet(false)
{
}

KubernetesWorkloadDetails::KubernetesWorkloadDetails(JsonView jsonValue) : 
    m_nameHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_uidHasBeenSet(false),
    m_namespaceHasBeenSet(false),
    m_hostNetwork(false),
    m_hostNetworkHasBeenSet(false),
    m_containersHasBeenSet(false),
    m_volumesHasBeenSet(false)
{
  *this = jsonValue;
}

KubernetesWorkloadDetails& KubernetesWorkloadDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("type"))
  {
    m_type = jsonValue.GetString("type");

    m_typeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("uid"))
  {
    m_uid = jsonValue.GetString("uid");

    m_uidHasBeenSet = true;
  }

  if(jsonValue.ValueExists("namespace"))
  {
    m_namespace = jsonValue.GetString("namespace");

    m_namespaceHasBeenSet = true;
  }

  if(jsonValue.ValueExists("hostNetwork"))
  {
    m_hostNetwork = jsonValue.GetBool("hostNetwork");

    m_hostNetworkHasBeenSet = true;
  }

  if(jsonValue.ValueExists("containers"))
  {
    Aws::Utils::Array<JsonView> containersJsonList = jsonValue.GetArray("containers");
    for(unsigned containersIndex = 0; containersIndex < containersJsonList.GetLength(); ++containersIndex)
    {
      m_containers.push_back(containersJsonList[containersIndex].AsObject());
    }
    m_containersHasBeenSet = true;
  }

  if(jsonValue.ValueExists("volumes"))
  {
    Aws::Utils::Array<JsonView> volumesJsonList = jsonValue.GetArray("volumes");
    for(unsigned volumesIndex = 0; volumesIndex < volumesJsonList.GetLength(); ++volumesIndex)
    {
      m_volumes.push_back(volumesJsonList[volumesIndex].AsObject());
    }
    m_volumesHasBeenSet = true;
  }

  return *this;
}

JsonValue KubernetesWorkloadDetails::Jsonize() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_typeHasBeenSet)
  {
   payload.WithString("type", m_type);

  }

  if(m_uidHasBeenSet)
  {
   payload.WithString("uid", m_uid);

  }

  if(m_namespaceHasBeenSet)
  {
   payload.WithString("namespace", m_namespace);

  }

  if(m_hostNetworkHasBeenSet)
  {
   payload.WithBool("hostNetwork", m_hostNetwork);

  }

  if(m_containersHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> containersJsonList(m_containers.size());
   for(unsigned containersIndex = 0; containersIndex < containersJsonList.GetLength(); ++containersIndex)
   {
     containersJsonList[containersIndex].AsObject(m_containers[containersIndex].Jsonize());
   }
   payload.WithArray("containers", std::move(containersJsonList));

  }

  if(m_volumesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> volumesJsonList(m_volumes.size());
   for(unsigned volumesIndex = 0; volumesIndex < volumesJsonList.GetLength(); ++volumesIndex)
   {
     volumesJsonList[volumesIndex].AsObject(m_volumes[volumesIndex].Jsonize());
   }
   payload.WithArray("volumes", std::move(volumesJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace GuardDuty
} // namespace Aws
