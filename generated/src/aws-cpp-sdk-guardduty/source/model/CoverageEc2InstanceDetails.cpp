/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/guardduty/model/CoverageEc2InstanceDetails.h>
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

CoverageEc2InstanceDetails::CoverageEc2InstanceDetails() : 
    m_instanceIdHasBeenSet(false),
    m_instanceTypeHasBeenSet(false),
    m_clusterArnHasBeenSet(false),
    m_agentDetailsHasBeenSet(false),
    m_managementType(ManagementType::NOT_SET),
    m_managementTypeHasBeenSet(false)
{
}

CoverageEc2InstanceDetails::CoverageEc2InstanceDetails(JsonView jsonValue) : 
    m_instanceIdHasBeenSet(false),
    m_instanceTypeHasBeenSet(false),
    m_clusterArnHasBeenSet(false),
    m_agentDetailsHasBeenSet(false),
    m_managementType(ManagementType::NOT_SET),
    m_managementTypeHasBeenSet(false)
{
  *this = jsonValue;
}

CoverageEc2InstanceDetails& CoverageEc2InstanceDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("instanceId"))
  {
    m_instanceId = jsonValue.GetString("instanceId");

    m_instanceIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("instanceType"))
  {
    m_instanceType = jsonValue.GetString("instanceType");

    m_instanceTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("clusterArn"))
  {
    m_clusterArn = jsonValue.GetString("clusterArn");

    m_clusterArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("agentDetails"))
  {
    m_agentDetails = jsonValue.GetObject("agentDetails");

    m_agentDetailsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("managementType"))
  {
    m_managementType = ManagementTypeMapper::GetManagementTypeForName(jsonValue.GetString("managementType"));

    m_managementTypeHasBeenSet = true;
  }

  return *this;
}

JsonValue CoverageEc2InstanceDetails::Jsonize() const
{
  JsonValue payload;

  if(m_instanceIdHasBeenSet)
  {
   payload.WithString("instanceId", m_instanceId);

  }

  if(m_instanceTypeHasBeenSet)
  {
   payload.WithString("instanceType", m_instanceType);

  }

  if(m_clusterArnHasBeenSet)
  {
   payload.WithString("clusterArn", m_clusterArn);

  }

  if(m_agentDetailsHasBeenSet)
  {
   payload.WithObject("agentDetails", m_agentDetails.Jsonize());

  }

  if(m_managementTypeHasBeenSet)
  {
   payload.WithString("managementType", ManagementTypeMapper::GetNameForManagementType(m_managementType));
  }

  return payload;
}

} // namespace Model
} // namespace GuardDuty
} // namespace Aws
