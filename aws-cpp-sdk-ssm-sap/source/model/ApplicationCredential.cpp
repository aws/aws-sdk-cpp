/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ssm-sap/model/ApplicationCredential.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SsmSap
{
namespace Model
{

ApplicationCredential::ApplicationCredential() : 
    m_databaseNameHasBeenSet(false),
    m_credentialType(CredentialType::NOT_SET),
    m_credentialTypeHasBeenSet(false),
    m_secretIdHasBeenSet(false)
{
}

ApplicationCredential::ApplicationCredential(JsonView jsonValue) : 
    m_databaseNameHasBeenSet(false),
    m_credentialType(CredentialType::NOT_SET),
    m_credentialTypeHasBeenSet(false),
    m_secretIdHasBeenSet(false)
{
  *this = jsonValue;
}

ApplicationCredential& ApplicationCredential::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("DatabaseName"))
  {
    m_databaseName = jsonValue.GetString("DatabaseName");

    m_databaseNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CredentialType"))
  {
    m_credentialType = CredentialTypeMapper::GetCredentialTypeForName(jsonValue.GetString("CredentialType"));

    m_credentialTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SecretId"))
  {
    m_secretId = jsonValue.GetString("SecretId");

    m_secretIdHasBeenSet = true;
  }

  return *this;
}

JsonValue ApplicationCredential::Jsonize() const
{
  JsonValue payload;

  if(m_databaseNameHasBeenSet)
  {
   payload.WithString("DatabaseName", m_databaseName);

  }

  if(m_credentialTypeHasBeenSet)
  {
   payload.WithString("CredentialType", CredentialTypeMapper::GetNameForCredentialType(m_credentialType));
  }

  if(m_secretIdHasBeenSet)
  {
   payload.WithString("SecretId", m_secretId);

  }

  return payload;
}

} // namespace Model
} // namespace SsmSap
} // namespace Aws
