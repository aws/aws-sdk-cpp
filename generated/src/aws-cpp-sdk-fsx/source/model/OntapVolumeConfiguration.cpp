/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/fsx/model/OntapVolumeConfiguration.h>
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

OntapVolumeConfiguration::OntapVolumeConfiguration() : 
    m_flexCacheEndpointType(FlexCacheEndpointType::NOT_SET),
    m_flexCacheEndpointTypeHasBeenSet(false),
    m_junctionPathHasBeenSet(false),
    m_securityStyle(SecurityStyle::NOT_SET),
    m_securityStyleHasBeenSet(false),
    m_sizeInMegabytes(0),
    m_sizeInMegabytesHasBeenSet(false),
    m_storageEfficiencyEnabled(false),
    m_storageEfficiencyEnabledHasBeenSet(false),
    m_storageVirtualMachineIdHasBeenSet(false),
    m_storageVirtualMachineRoot(false),
    m_storageVirtualMachineRootHasBeenSet(false),
    m_tieringPolicyHasBeenSet(false),
    m_uUIDHasBeenSet(false),
    m_ontapVolumeType(OntapVolumeType::NOT_SET),
    m_ontapVolumeTypeHasBeenSet(false),
    m_snapshotPolicyHasBeenSet(false),
    m_copyTagsToBackups(false),
    m_copyTagsToBackupsHasBeenSet(false)
{
}

OntapVolumeConfiguration::OntapVolumeConfiguration(JsonView jsonValue) : 
    m_flexCacheEndpointType(FlexCacheEndpointType::NOT_SET),
    m_flexCacheEndpointTypeHasBeenSet(false),
    m_junctionPathHasBeenSet(false),
    m_securityStyle(SecurityStyle::NOT_SET),
    m_securityStyleHasBeenSet(false),
    m_sizeInMegabytes(0),
    m_sizeInMegabytesHasBeenSet(false),
    m_storageEfficiencyEnabled(false),
    m_storageEfficiencyEnabledHasBeenSet(false),
    m_storageVirtualMachineIdHasBeenSet(false),
    m_storageVirtualMachineRoot(false),
    m_storageVirtualMachineRootHasBeenSet(false),
    m_tieringPolicyHasBeenSet(false),
    m_uUIDHasBeenSet(false),
    m_ontapVolumeType(OntapVolumeType::NOT_SET),
    m_ontapVolumeTypeHasBeenSet(false),
    m_snapshotPolicyHasBeenSet(false),
    m_copyTagsToBackups(false),
    m_copyTagsToBackupsHasBeenSet(false)
{
  *this = jsonValue;
}

OntapVolumeConfiguration& OntapVolumeConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("FlexCacheEndpointType"))
  {
    m_flexCacheEndpointType = FlexCacheEndpointTypeMapper::GetFlexCacheEndpointTypeForName(jsonValue.GetString("FlexCacheEndpointType"));

    m_flexCacheEndpointTypeHasBeenSet = true;
  }

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

  if(jsonValue.ValueExists("StorageVirtualMachineRoot"))
  {
    m_storageVirtualMachineRoot = jsonValue.GetBool("StorageVirtualMachineRoot");

    m_storageVirtualMachineRootHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TieringPolicy"))
  {
    m_tieringPolicy = jsonValue.GetObject("TieringPolicy");

    m_tieringPolicyHasBeenSet = true;
  }

  if(jsonValue.ValueExists("UUID"))
  {
    m_uUID = jsonValue.GetString("UUID");

    m_uUIDHasBeenSet = true;
  }

  if(jsonValue.ValueExists("OntapVolumeType"))
  {
    m_ontapVolumeType = OntapVolumeTypeMapper::GetOntapVolumeTypeForName(jsonValue.GetString("OntapVolumeType"));

    m_ontapVolumeTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SnapshotPolicy"))
  {
    m_snapshotPolicy = jsonValue.GetString("SnapshotPolicy");

    m_snapshotPolicyHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CopyTagsToBackups"))
  {
    m_copyTagsToBackups = jsonValue.GetBool("CopyTagsToBackups");

    m_copyTagsToBackupsHasBeenSet = true;
  }

  return *this;
}

JsonValue OntapVolumeConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_flexCacheEndpointTypeHasBeenSet)
  {
   payload.WithString("FlexCacheEndpointType", FlexCacheEndpointTypeMapper::GetNameForFlexCacheEndpointType(m_flexCacheEndpointType));
  }

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

  if(m_storageVirtualMachineRootHasBeenSet)
  {
   payload.WithBool("StorageVirtualMachineRoot", m_storageVirtualMachineRoot);

  }

  if(m_tieringPolicyHasBeenSet)
  {
   payload.WithObject("TieringPolicy", m_tieringPolicy.Jsonize());

  }

  if(m_uUIDHasBeenSet)
  {
   payload.WithString("UUID", m_uUID);

  }

  if(m_ontapVolumeTypeHasBeenSet)
  {
   payload.WithString("OntapVolumeType", OntapVolumeTypeMapper::GetNameForOntapVolumeType(m_ontapVolumeType));
  }

  if(m_snapshotPolicyHasBeenSet)
  {
   payload.WithString("SnapshotPolicy", m_snapshotPolicy);

  }

  if(m_copyTagsToBackupsHasBeenSet)
  {
   payload.WithBool("CopyTagsToBackups", m_copyTagsToBackups);

  }

  return payload;
}

} // namespace Model
} // namespace FSx
} // namespace Aws
