/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/evs/model/HostInfoForCreate.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace EVS
{
namespace Model
{

HostInfoForCreate::HostInfoForCreate(JsonView jsonValue)
{
  *this = jsonValue;
}

HostInfoForCreate& HostInfoForCreate::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("hostName"))
  {
    m_hostName = jsonValue.GetString("hostName");
    m_hostNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("keyName"))
  {
    m_keyName = jsonValue.GetString("keyName");
    m_keyNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("instanceType"))
  {
    m_instanceType = InstanceTypeMapper::GetInstanceTypeForName(jsonValue.GetString("instanceType"));
    m_instanceTypeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("placementGroupId"))
  {
    m_placementGroupId = jsonValue.GetString("placementGroupId");
    m_placementGroupIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("dedicatedHostId"))
  {
    m_dedicatedHostId = jsonValue.GetString("dedicatedHostId");
    m_dedicatedHostIdHasBeenSet = true;
  }
  return *this;
}

JsonValue HostInfoForCreate::Jsonize() const
{
  JsonValue payload;

  if(m_hostNameHasBeenSet)
  {
   payload.WithString("hostName", m_hostName);

  }

  if(m_keyNameHasBeenSet)
  {
   payload.WithString("keyName", m_keyName);

  }

  if(m_instanceTypeHasBeenSet)
  {
   payload.WithString("instanceType", InstanceTypeMapper::GetNameForInstanceType(m_instanceType));
  }

  if(m_placementGroupIdHasBeenSet)
  {
   payload.WithString("placementGroupId", m_placementGroupId);

  }

  if(m_dedicatedHostIdHasBeenSet)
  {
   payload.WithString("dedicatedHostId", m_dedicatedHostId);

  }

  return payload;
}

} // namespace Model
} // namespace EVS
} // namespace Aws
