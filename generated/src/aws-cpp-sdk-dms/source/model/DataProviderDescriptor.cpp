/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/dms/model/DataProviderDescriptor.h>
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

DataProviderDescriptor::DataProviderDescriptor() : 
    m_secretsManagerSecretIdHasBeenSet(false),
    m_secretsManagerAccessRoleArnHasBeenSet(false),
    m_dataProviderNameHasBeenSet(false),
    m_dataProviderArnHasBeenSet(false)
{
}

DataProviderDescriptor::DataProviderDescriptor(JsonView jsonValue) : 
    m_secretsManagerSecretIdHasBeenSet(false),
    m_secretsManagerAccessRoleArnHasBeenSet(false),
    m_dataProviderNameHasBeenSet(false),
    m_dataProviderArnHasBeenSet(false)
{
  *this = jsonValue;
}

DataProviderDescriptor& DataProviderDescriptor::operator =(JsonView jsonValue)
{
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

  if(jsonValue.ValueExists("DataProviderName"))
  {
    m_dataProviderName = jsonValue.GetString("DataProviderName");

    m_dataProviderNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DataProviderArn"))
  {
    m_dataProviderArn = jsonValue.GetString("DataProviderArn");

    m_dataProviderArnHasBeenSet = true;
  }

  return *this;
}

JsonValue DataProviderDescriptor::Jsonize() const
{
  JsonValue payload;

  if(m_secretsManagerSecretIdHasBeenSet)
  {
   payload.WithString("SecretsManagerSecretId", m_secretsManagerSecretId);

  }

  if(m_secretsManagerAccessRoleArnHasBeenSet)
  {
   payload.WithString("SecretsManagerAccessRoleArn", m_secretsManagerAccessRoleArn);

  }

  if(m_dataProviderNameHasBeenSet)
  {
   payload.WithString("DataProviderName", m_dataProviderName);

  }

  if(m_dataProviderArnHasBeenSet)
  {
   payload.WithString("DataProviderArn", m_dataProviderArn);

  }

  return payload;
}

} // namespace Model
} // namespace DatabaseMigrationService
} // namespace Aws
