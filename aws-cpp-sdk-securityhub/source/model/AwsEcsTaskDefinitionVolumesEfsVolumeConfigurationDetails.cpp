/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/AwsEcsTaskDefinitionVolumesEfsVolumeConfigurationDetails.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SecurityHub
{
namespace Model
{

AwsEcsTaskDefinitionVolumesEfsVolumeConfigurationDetails::AwsEcsTaskDefinitionVolumesEfsVolumeConfigurationDetails() : 
    m_authorizationConfigHasBeenSet(false),
    m_filesystemIdHasBeenSet(false),
    m_rootDirectoryHasBeenSet(false),
    m_transitEncryptionHasBeenSet(false),
    m_transitEncryptionPort(0),
    m_transitEncryptionPortHasBeenSet(false)
{
}

AwsEcsTaskDefinitionVolumesEfsVolumeConfigurationDetails::AwsEcsTaskDefinitionVolumesEfsVolumeConfigurationDetails(JsonView jsonValue) : 
    m_authorizationConfigHasBeenSet(false),
    m_filesystemIdHasBeenSet(false),
    m_rootDirectoryHasBeenSet(false),
    m_transitEncryptionHasBeenSet(false),
    m_transitEncryptionPort(0),
    m_transitEncryptionPortHasBeenSet(false)
{
  *this = jsonValue;
}

AwsEcsTaskDefinitionVolumesEfsVolumeConfigurationDetails& AwsEcsTaskDefinitionVolumesEfsVolumeConfigurationDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("AuthorizationConfig"))
  {
    m_authorizationConfig = jsonValue.GetObject("AuthorizationConfig");

    m_authorizationConfigHasBeenSet = true;
  }

  if(jsonValue.ValueExists("FilesystemId"))
  {
    m_filesystemId = jsonValue.GetString("FilesystemId");

    m_filesystemIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RootDirectory"))
  {
    m_rootDirectory = jsonValue.GetString("RootDirectory");

    m_rootDirectoryHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TransitEncryption"))
  {
    m_transitEncryption = jsonValue.GetString("TransitEncryption");

    m_transitEncryptionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TransitEncryptionPort"))
  {
    m_transitEncryptionPort = jsonValue.GetInteger("TransitEncryptionPort");

    m_transitEncryptionPortHasBeenSet = true;
  }

  return *this;
}

JsonValue AwsEcsTaskDefinitionVolumesEfsVolumeConfigurationDetails::Jsonize() const
{
  JsonValue payload;

  if(m_authorizationConfigHasBeenSet)
  {
   payload.WithObject("AuthorizationConfig", m_authorizationConfig.Jsonize());

  }

  if(m_filesystemIdHasBeenSet)
  {
   payload.WithString("FilesystemId", m_filesystemId);

  }

  if(m_rootDirectoryHasBeenSet)
  {
   payload.WithString("RootDirectory", m_rootDirectory);

  }

  if(m_transitEncryptionHasBeenSet)
  {
   payload.WithString("TransitEncryption", m_transitEncryption);

  }

  if(m_transitEncryptionPortHasBeenSet)
  {
   payload.WithInteger("TransitEncryptionPort", m_transitEncryptionPort);

  }

  return payload;
}

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
