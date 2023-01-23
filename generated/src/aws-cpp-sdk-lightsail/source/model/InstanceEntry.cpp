/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lightsail/model/InstanceEntry.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Lightsail
{
namespace Model
{

InstanceEntry::InstanceEntry() : 
    m_sourceNameHasBeenSet(false),
    m_instanceTypeHasBeenSet(false),
    m_portInfoSource(PortInfoSourceType::NOT_SET),
    m_portInfoSourceHasBeenSet(false),
    m_userDataHasBeenSet(false),
    m_availabilityZoneHasBeenSet(false)
{
}

InstanceEntry::InstanceEntry(JsonView jsonValue) : 
    m_sourceNameHasBeenSet(false),
    m_instanceTypeHasBeenSet(false),
    m_portInfoSource(PortInfoSourceType::NOT_SET),
    m_portInfoSourceHasBeenSet(false),
    m_userDataHasBeenSet(false),
    m_availabilityZoneHasBeenSet(false)
{
  *this = jsonValue;
}

InstanceEntry& InstanceEntry::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("sourceName"))
  {
    m_sourceName = jsonValue.GetString("sourceName");

    m_sourceNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("instanceType"))
  {
    m_instanceType = jsonValue.GetString("instanceType");

    m_instanceTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("portInfoSource"))
  {
    m_portInfoSource = PortInfoSourceTypeMapper::GetPortInfoSourceTypeForName(jsonValue.GetString("portInfoSource"));

    m_portInfoSourceHasBeenSet = true;
  }

  if(jsonValue.ValueExists("userData"))
  {
    m_userData = jsonValue.GetString("userData");

    m_userDataHasBeenSet = true;
  }

  if(jsonValue.ValueExists("availabilityZone"))
  {
    m_availabilityZone = jsonValue.GetString("availabilityZone");

    m_availabilityZoneHasBeenSet = true;
  }

  return *this;
}

JsonValue InstanceEntry::Jsonize() const
{
  JsonValue payload;

  if(m_sourceNameHasBeenSet)
  {
   payload.WithString("sourceName", m_sourceName);

  }

  if(m_instanceTypeHasBeenSet)
  {
   payload.WithString("instanceType", m_instanceType);

  }

  if(m_portInfoSourceHasBeenSet)
  {
   payload.WithString("portInfoSource", PortInfoSourceTypeMapper::GetNameForPortInfoSourceType(m_portInfoSource));
  }

  if(m_userDataHasBeenSet)
  {
   payload.WithString("userData", m_userData);

  }

  if(m_availabilityZoneHasBeenSet)
  {
   payload.WithString("availabilityZone", m_availabilityZone);

  }

  return payload;
}

} // namespace Model
} // namespace Lightsail
} // namespace Aws
