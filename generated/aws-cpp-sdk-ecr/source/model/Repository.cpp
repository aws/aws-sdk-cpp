/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ecr/model/Repository.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ECR
{
namespace Model
{

Repository::Repository() : 
    m_repositoryArnHasBeenSet(false),
    m_registryIdHasBeenSet(false),
    m_repositoryNameHasBeenSet(false),
    m_repositoryUriHasBeenSet(false),
    m_createdAtHasBeenSet(false),
    m_imageTagMutability(ImageTagMutability::NOT_SET),
    m_imageTagMutabilityHasBeenSet(false),
    m_imageScanningConfigurationHasBeenSet(false),
    m_encryptionConfigurationHasBeenSet(false)
{
}

Repository::Repository(JsonView jsonValue) : 
    m_repositoryArnHasBeenSet(false),
    m_registryIdHasBeenSet(false),
    m_repositoryNameHasBeenSet(false),
    m_repositoryUriHasBeenSet(false),
    m_createdAtHasBeenSet(false),
    m_imageTagMutability(ImageTagMutability::NOT_SET),
    m_imageTagMutabilityHasBeenSet(false),
    m_imageScanningConfigurationHasBeenSet(false),
    m_encryptionConfigurationHasBeenSet(false)
{
  *this = jsonValue;
}

Repository& Repository::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("repositoryArn"))
  {
    m_repositoryArn = jsonValue.GetString("repositoryArn");

    m_repositoryArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("registryId"))
  {
    m_registryId = jsonValue.GetString("registryId");

    m_registryIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("repositoryName"))
  {
    m_repositoryName = jsonValue.GetString("repositoryName");

    m_repositoryNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("repositoryUri"))
  {
    m_repositoryUri = jsonValue.GetString("repositoryUri");

    m_repositoryUriHasBeenSet = true;
  }

  if(jsonValue.ValueExists("createdAt"))
  {
    m_createdAt = jsonValue.GetDouble("createdAt");

    m_createdAtHasBeenSet = true;
  }

  if(jsonValue.ValueExists("imageTagMutability"))
  {
    m_imageTagMutability = ImageTagMutabilityMapper::GetImageTagMutabilityForName(jsonValue.GetString("imageTagMutability"));

    m_imageTagMutabilityHasBeenSet = true;
  }

  if(jsonValue.ValueExists("imageScanningConfiguration"))
  {
    m_imageScanningConfiguration = jsonValue.GetObject("imageScanningConfiguration");

    m_imageScanningConfigurationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("encryptionConfiguration"))
  {
    m_encryptionConfiguration = jsonValue.GetObject("encryptionConfiguration");

    m_encryptionConfigurationHasBeenSet = true;
  }

  return *this;
}

JsonValue Repository::Jsonize() const
{
  JsonValue payload;

  if(m_repositoryArnHasBeenSet)
  {
   payload.WithString("repositoryArn", m_repositoryArn);

  }

  if(m_registryIdHasBeenSet)
  {
   payload.WithString("registryId", m_registryId);

  }

  if(m_repositoryNameHasBeenSet)
  {
   payload.WithString("repositoryName", m_repositoryName);

  }

  if(m_repositoryUriHasBeenSet)
  {
   payload.WithString("repositoryUri", m_repositoryUri);

  }

  if(m_createdAtHasBeenSet)
  {
   payload.WithDouble("createdAt", m_createdAt.SecondsWithMSPrecision());
  }

  if(m_imageTagMutabilityHasBeenSet)
  {
   payload.WithString("imageTagMutability", ImageTagMutabilityMapper::GetNameForImageTagMutability(m_imageTagMutability));
  }

  if(m_imageScanningConfigurationHasBeenSet)
  {
   payload.WithObject("imageScanningConfiguration", m_imageScanningConfiguration.Jsonize());

  }

  if(m_encryptionConfigurationHasBeenSet)
  {
   payload.WithObject("encryptionConfiguration", m_encryptionConfiguration.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace ECR
} // namespace Aws
