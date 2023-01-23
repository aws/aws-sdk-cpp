/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/drs/model/RecoveryInstanceProperties.h>
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

RecoveryInstanceProperties::RecoveryInstanceProperties() : 
    m_cpusHasBeenSet(false),
    m_disksHasBeenSet(false),
    m_identificationHintsHasBeenSet(false),
    m_lastUpdatedDateTimeHasBeenSet(false),
    m_networkInterfacesHasBeenSet(false),
    m_osHasBeenSet(false),
    m_ramBytes(0),
    m_ramBytesHasBeenSet(false)
{
}

RecoveryInstanceProperties::RecoveryInstanceProperties(JsonView jsonValue) : 
    m_cpusHasBeenSet(false),
    m_disksHasBeenSet(false),
    m_identificationHintsHasBeenSet(false),
    m_lastUpdatedDateTimeHasBeenSet(false),
    m_networkInterfacesHasBeenSet(false),
    m_osHasBeenSet(false),
    m_ramBytes(0),
    m_ramBytesHasBeenSet(false)
{
  *this = jsonValue;
}

RecoveryInstanceProperties& RecoveryInstanceProperties::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("cpus"))
  {
    Aws::Utils::Array<JsonView> cpusJsonList = jsonValue.GetArray("cpus");
    for(unsigned cpusIndex = 0; cpusIndex < cpusJsonList.GetLength(); ++cpusIndex)
    {
      m_cpus.push_back(cpusJsonList[cpusIndex].AsObject());
    }
    m_cpusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("disks"))
  {
    Aws::Utils::Array<JsonView> disksJsonList = jsonValue.GetArray("disks");
    for(unsigned disksIndex = 0; disksIndex < disksJsonList.GetLength(); ++disksIndex)
    {
      m_disks.push_back(disksJsonList[disksIndex].AsObject());
    }
    m_disksHasBeenSet = true;
  }

  if(jsonValue.ValueExists("identificationHints"))
  {
    m_identificationHints = jsonValue.GetObject("identificationHints");

    m_identificationHintsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("lastUpdatedDateTime"))
  {
    m_lastUpdatedDateTime = jsonValue.GetString("lastUpdatedDateTime");

    m_lastUpdatedDateTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("networkInterfaces"))
  {
    Aws::Utils::Array<JsonView> networkInterfacesJsonList = jsonValue.GetArray("networkInterfaces");
    for(unsigned networkInterfacesIndex = 0; networkInterfacesIndex < networkInterfacesJsonList.GetLength(); ++networkInterfacesIndex)
    {
      m_networkInterfaces.push_back(networkInterfacesJsonList[networkInterfacesIndex].AsObject());
    }
    m_networkInterfacesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("os"))
  {
    m_os = jsonValue.GetObject("os");

    m_osHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ramBytes"))
  {
    m_ramBytes = jsonValue.GetInt64("ramBytes");

    m_ramBytesHasBeenSet = true;
  }

  return *this;
}

JsonValue RecoveryInstanceProperties::Jsonize() const
{
  JsonValue payload;

  if(m_cpusHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> cpusJsonList(m_cpus.size());
   for(unsigned cpusIndex = 0; cpusIndex < cpusJsonList.GetLength(); ++cpusIndex)
   {
     cpusJsonList[cpusIndex].AsObject(m_cpus[cpusIndex].Jsonize());
   }
   payload.WithArray("cpus", std::move(cpusJsonList));

  }

  if(m_disksHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> disksJsonList(m_disks.size());
   for(unsigned disksIndex = 0; disksIndex < disksJsonList.GetLength(); ++disksIndex)
   {
     disksJsonList[disksIndex].AsObject(m_disks[disksIndex].Jsonize());
   }
   payload.WithArray("disks", std::move(disksJsonList));

  }

  if(m_identificationHintsHasBeenSet)
  {
   payload.WithObject("identificationHints", m_identificationHints.Jsonize());

  }

  if(m_lastUpdatedDateTimeHasBeenSet)
  {
   payload.WithString("lastUpdatedDateTime", m_lastUpdatedDateTime);

  }

  if(m_networkInterfacesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> networkInterfacesJsonList(m_networkInterfaces.size());
   for(unsigned networkInterfacesIndex = 0; networkInterfacesIndex < networkInterfacesJsonList.GetLength(); ++networkInterfacesIndex)
   {
     networkInterfacesJsonList[networkInterfacesIndex].AsObject(m_networkInterfaces[networkInterfacesIndex].Jsonize());
   }
   payload.WithArray("networkInterfaces", std::move(networkInterfacesJsonList));

  }

  if(m_osHasBeenSet)
  {
   payload.WithObject("os", m_os.Jsonize());

  }

  if(m_ramBytesHasBeenSet)
  {
   payload.WithInt64("ramBytes", m_ramBytes);

  }

  return payload;
}

} // namespace Model
} // namespace drs
} // namespace Aws
