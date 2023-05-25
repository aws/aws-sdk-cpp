/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ecs/model/EFSVolumeConfiguration.h>
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

EFSVolumeConfiguration::EFSVolumeConfiguration() : 
    m_fileSystemIdHasBeenSet(false),
    m_rootDirectoryHasBeenSet(false),
    m_transitEncryption(EFSTransitEncryption::NOT_SET),
    m_transitEncryptionHasBeenSet(false),
    m_transitEncryptionPort(0),
    m_transitEncryptionPortHasBeenSet(false),
    m_authorizationConfigHasBeenSet(false)
{
}

EFSVolumeConfiguration::EFSVolumeConfiguration(JsonView jsonValue) : 
    m_fileSystemIdHasBeenSet(false),
    m_rootDirectoryHasBeenSet(false),
    m_transitEncryption(EFSTransitEncryption::NOT_SET),
    m_transitEncryptionHasBeenSet(false),
    m_transitEncryptionPort(0),
    m_transitEncryptionPortHasBeenSet(false),
    m_authorizationConfigHasBeenSet(false)
{
  *this = jsonValue;
}

EFSVolumeConfiguration& EFSVolumeConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("fileSystemId"))
  {
    m_fileSystemId = jsonValue.GetString("fileSystemId");

    m_fileSystemIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("rootDirectory"))
  {
    m_rootDirectory = jsonValue.GetString("rootDirectory");

    m_rootDirectoryHasBeenSet = true;
  }

  if(jsonValue.ValueExists("transitEncryption"))
  {
    m_transitEncryption = EFSTransitEncryptionMapper::GetEFSTransitEncryptionForName(jsonValue.GetString("transitEncryption"));

    m_transitEncryptionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("transitEncryptionPort"))
  {
    m_transitEncryptionPort = jsonValue.GetInteger("transitEncryptionPort");

    m_transitEncryptionPortHasBeenSet = true;
  }

  if(jsonValue.ValueExists("authorizationConfig"))
  {
    m_authorizationConfig = jsonValue.GetObject("authorizationConfig");

    m_authorizationConfigHasBeenSet = true;
  }

  return *this;
}

JsonValue EFSVolumeConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_fileSystemIdHasBeenSet)
  {
   payload.WithString("fileSystemId", m_fileSystemId);

  }

  if(m_rootDirectoryHasBeenSet)
  {
   payload.WithString("rootDirectory", m_rootDirectory);

  }

  if(m_transitEncryptionHasBeenSet)
  {
   payload.WithString("transitEncryption", EFSTransitEncryptionMapper::GetNameForEFSTransitEncryption(m_transitEncryption));
  }

  if(m_transitEncryptionPortHasBeenSet)
  {
   payload.WithInteger("transitEncryptionPort", m_transitEncryptionPort);

  }

  if(m_authorizationConfigHasBeenSet)
  {
   payload.WithObject("authorizationConfig", m_authorizationConfig.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace ECS
} // namespace Aws
