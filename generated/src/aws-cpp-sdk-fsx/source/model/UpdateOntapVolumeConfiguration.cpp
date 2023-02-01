/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/fsx/model/UpdateOntapVolumeConfiguration.h>
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

UpdateOntapVolumeConfiguration::UpdateOntapVolumeConfiguration() : 
    m_junctionPathHasBeenSet(false),
    m_securityStyle(SecurityStyle::NOT_SET),
    m_securityStyleHasBeenSet(false),
    m_sizeInMegabytes(0),
    m_sizeInMegabytesHasBeenSet(false),
    m_storageEfficiencyEnabled(false),
    m_storageEfficiencyEnabledHasBeenSet(false),
    m_tieringPolicyHasBeenSet(false),
    m_snapshotPolicyHasBeenSet(false),
    m_copyTagsToBackups(false),
    m_copyTagsToBackupsHasBeenSet(false)
{
}

UpdateOntapVolumeConfiguration::UpdateOntapVolumeConfiguration(JsonView jsonValue) : 
    m_junctionPathHasBeenSet(false),
    m_securityStyle(SecurityStyle::NOT_SET),
    m_securityStyleHasBeenSet(false),
    m_sizeInMegabytes(0),
    m_sizeInMegabytesHasBeenSet(false),
    m_storageEfficiencyEnabled(false),
    m_storageEfficiencyEnabledHasBeenSet(false),
    m_tieringPolicyHasBeenSet(false),
    m_snapshotPolicyHasBeenSet(false),
    m_copyTagsToBackups(false),
    m_copyTagsToBackupsHasBeenSet(false)
{
  *this = jsonValue;
}

UpdateOntapVolumeConfiguration& UpdateOntapVolumeConfiguration::operator =(JsonView jsonValue)
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

  if(jsonValue.ValueExists("TieringPolicy"))
  {
    m_tieringPolicy = jsonValue.GetObject("TieringPolicy");

    m_tieringPolicyHasBeenSet = true;
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

JsonValue UpdateOntapVolumeConfiguration::Jsonize() const
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

  if(m_tieringPolicyHasBeenSet)
  {
   payload.WithObject("TieringPolicy", m_tieringPolicy.Jsonize());

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
