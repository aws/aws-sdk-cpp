/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/batch/model/EksPodProperties.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Batch
{
namespace Model
{

EksPodProperties::EksPodProperties() : 
    m_serviceAccountNameHasBeenSet(false),
    m_hostNetwork(false),
    m_hostNetworkHasBeenSet(false),
    m_dnsPolicyHasBeenSet(false),
    m_containersHasBeenSet(false),
    m_volumesHasBeenSet(false)
{
}

EksPodProperties::EksPodProperties(JsonView jsonValue) : 
    m_serviceAccountNameHasBeenSet(false),
    m_hostNetwork(false),
    m_hostNetworkHasBeenSet(false),
    m_dnsPolicyHasBeenSet(false),
    m_containersHasBeenSet(false),
    m_volumesHasBeenSet(false)
{
  *this = jsonValue;
}

EksPodProperties& EksPodProperties::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("serviceAccountName"))
  {
    m_serviceAccountName = jsonValue.GetString("serviceAccountName");

    m_serviceAccountNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("hostNetwork"))
  {
    m_hostNetwork = jsonValue.GetBool("hostNetwork");

    m_hostNetworkHasBeenSet = true;
  }

  if(jsonValue.ValueExists("dnsPolicy"))
  {
    m_dnsPolicy = jsonValue.GetString("dnsPolicy");

    m_dnsPolicyHasBeenSet = true;
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

JsonValue EksPodProperties::Jsonize() const
{
  JsonValue payload;

  if(m_serviceAccountNameHasBeenSet)
  {
   payload.WithString("serviceAccountName", m_serviceAccountName);

  }

  if(m_hostNetworkHasBeenSet)
  {
   payload.WithBool("hostNetwork", m_hostNetwork);

  }

  if(m_dnsPolicyHasBeenSet)
  {
   payload.WithString("dnsPolicy", m_dnsPolicy);

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
} // namespace Batch
} // namespace Aws
