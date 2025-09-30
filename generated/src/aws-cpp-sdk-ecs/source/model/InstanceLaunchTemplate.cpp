/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ecs/model/InstanceLaunchTemplate.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ECS
{
namespace Model
{

InstanceLaunchTemplate::InstanceLaunchTemplate(JsonView jsonValue)
{
  *this = jsonValue;
}

InstanceLaunchTemplate& InstanceLaunchTemplate::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ec2InstanceProfileArn"))
  {
    m_ec2InstanceProfileArn = jsonValue.GetString("ec2InstanceProfileArn");
    m_ec2InstanceProfileArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("networkConfiguration"))
  {
    m_networkConfiguration = jsonValue.GetObject("networkConfiguration");
    m_networkConfigurationHasBeenSet = true;
  }
  if(jsonValue.ValueExists("storageConfiguration"))
  {
    m_storageConfiguration = jsonValue.GetObject("storageConfiguration");
    m_storageConfigurationHasBeenSet = true;
  }
  if(jsonValue.ValueExists("monitoring"))
  {
    m_monitoring = ManagedInstancesMonitoringOptionsMapper::GetManagedInstancesMonitoringOptionsForName(jsonValue.GetString("monitoring"));
    m_monitoringHasBeenSet = true;
  }
  if(jsonValue.ValueExists("instanceRequirements"))
  {
    m_instanceRequirements = jsonValue.GetObject("instanceRequirements");
    m_instanceRequirementsHasBeenSet = true;
  }
  return *this;
}

JsonValue InstanceLaunchTemplate::Jsonize() const
{
  JsonValue payload;

  if(m_ec2InstanceProfileArnHasBeenSet)
  {
   payload.WithString("ec2InstanceProfileArn", m_ec2InstanceProfileArn);

  }

  if(m_networkConfigurationHasBeenSet)
  {
   payload.WithObject("networkConfiguration", m_networkConfiguration.Jsonize());

  }

  if(m_storageConfigurationHasBeenSet)
  {
   payload.WithObject("storageConfiguration", m_storageConfiguration.Jsonize());

  }

  if(m_monitoringHasBeenSet)
  {
   payload.WithString("monitoring", ManagedInstancesMonitoringOptionsMapper::GetNameForManagedInstancesMonitoringOptions(m_monitoring));
  }

  if(m_instanceRequirementsHasBeenSet)
  {
   payload.WithObject("instanceRequirements", m_instanceRequirements.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace ECS
} // namespace Aws
