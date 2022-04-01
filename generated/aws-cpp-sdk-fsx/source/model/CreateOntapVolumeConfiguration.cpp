/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/fsx/model/CreateOntapVolumeConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace FSx
{
namespace Model
{

CreateOntapVolumeConfiguration::CreateOntapVolumeConfiguration() : 
    m_junctionPathHasBeenSet(false),
    m_securityStyle(SecurityStyle::NOT_SET),
    m_securityStyleHasBeenSet(false),
    m_sizeInMegabytes(0),
    m_sizeInMegabytesHasBeenSet(false),
    m_storageEfficiencyEnabled(false),
    m_storageEfficiencyEnabledHasBeenSet(false),
    m_storageVirtualMachineIdHasBeenSet(false),
    m_tieringPolicyHasBeenSet(false)
{
}

CreateOntapVolumeConfiguration::CreateOntapVolumeConfiguration(JsonView jsonValue) : 
    m_junctionPathHasBeenSet(false),
    m_securityStyle(SecurityStyle::NOT_SET),
    m_securityStyleHasBeenSet(false),
    m_sizeInMegabytes(0),
    m_sizeInMegabytesHasBeenSet(false),
    m_storageEfficiencyEnabled(false),
    m_storageEfficiencyEnabledHasBeenSet(false),
    m_storageVirtualMachineIdHasBeenSet(false),
    m_tieringPolicyHasBeenSet(false)
{
  *this = jsonValue;
}

CreateOntapVolumeConfiguration& CreateOntapVolumeConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("JunctionPath"))
  {
    m_junctionPath = jsonValue.GetString("JunctionPath");

    m_junctionPathHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SecurityStyle"))
  {
    m_securityStyle = SecurityStyleMapper::GetSecurityStyleForName(jsonValue.GetString("SecurityStyle"));

    m_securityStyleHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SizeInMegabytes"))
  {
    m_sizeInMegabytes = jsonValue.GetInteger("SizeInMegabytes");

    m_sizeInMegabytesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("StorageEfficiencyEnabled"))
  {
    m_storageEfficiencyEnabled = jsonValue.GetBool("StorageEfficiencyEnabled");

    m_storageEfficiencyEnabledHasBeenSet = true;
  }

  if(jsonValue.ValueExists("StorageVirtualMachineId"))
  {
    m_storageVirtualMachineId = jsonValue.GetString("StorageVirtualMachineId");

    m_storageVirtualMachineIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TieringPolicy"))
  {
    m_tieringPolicy = jsonValue.GetObject("TieringPolicy");

    m_tieringPolicyHasBeenSet = true;
  }

  return *this;
}

JsonValue CreateOntapVolumeConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_junctionPathHasBeenSet)
  {
   payload.WithString("JunctionPath", m_junctionPath);

  }

  if(m_securityStyleHasBeenSet)
  {
   payload.WithString("SecurityStyle", SecurityStyleMapper::GetNameForSecurityStyle(m_securityStyle));
  }

  if(m_sizeInMegabytesHasBeenSet)
  {
   payload.WithInteger("SizeInMegabytes", m_sizeInMegabytes);

  }

  if(m_storageEfficiencyEnabledHasBeenSet)
  {
   payload.WithBool("StorageEfficiencyEnabled", m_storageEfficiencyEnabled);

  }

  if(m_storageVirtualMachineIdHasBeenSet)
  {
   payload.WithString("StorageVirtualMachineId", m_storageVirtualMachineId);

  }

  if(m_tieringPolicyHasBeenSet)
  {
   payload.WithObject("TieringPolicy", m_tieringPolicy.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace FSx
} // namespace Aws
