/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/dms/model/DataProviderDescriptorDefinition.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace DatabaseMigrationService
{
namespace Model
{

DataProviderDescriptorDefinition::DataProviderDescriptorDefinition() : 
    m_dataProviderIdentifierHasBeenSet(false),
    m_secretsManagerSecretIdHasBeenSet(false),
    m_secretsManagerAccessRoleArnHasBeenSet(false)
{
}

DataProviderDescriptorDefinition::DataProviderDescriptorDefinition(JsonView jsonValue) : 
    m_dataProviderIdentifierHasBeenSet(false),
    m_secretsManagerSecretIdHasBeenSet(false),
    m_secretsManagerAccessRoleArnHasBeenSet(false)
{
  *this = jsonValue;
}

DataProviderDescriptorDefinition& DataProviderDescriptorDefinition::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("DataProviderIdentifier"))
  {
    m_dataProviderIdentifier = jsonValue.GetString("DataProviderIdentifier");

    m_dataProviderIdentifierHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SecretsManagerSecretId"))
  {
    m_secretsManagerSecretId = jsonValue.GetString("SecretsManagerSecretId");

    m_secretsManagerSecretIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SecretsManagerAccessRoleArn"))
  {
    m_secretsManagerAccessRoleArn = jsonValue.GetString("SecretsManagerAccessRoleArn");

    m_secretsManagerAccessRoleArnHasBeenSet = true;
  }

  return *this;
}

JsonValue DataProviderDescriptorDefinition::Jsonize() const
{
  JsonValue payload;

  if(m_dataProviderIdentifierHasBeenSet)
  {
   payload.WithString("DataProviderIdentifier", m_dataProviderIdentifier);

  }

  if(m_secretsManagerSecretIdHasBeenSet)
  {
   payload.WithString("SecretsManagerSecretId", m_secretsManagerSecretId);

  }

  if(m_secretsManagerAccessRoleArnHasBeenSet)
  {
   payload.WithString("SecretsManagerAccessRoleArn", m_secretsManagerAccessRoleArn);

  }

  return payload;
}

} // namespace Model
} // namespace DatabaseMigrationService
} // namespace Aws
