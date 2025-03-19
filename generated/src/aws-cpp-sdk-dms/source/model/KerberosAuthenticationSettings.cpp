/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/dms/model/KerberosAuthenticationSettings.h>
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

KerberosAuthenticationSettings::KerberosAuthenticationSettings(JsonView jsonValue)
{
  *this = jsonValue;
}

KerberosAuthenticationSettings& KerberosAuthenticationSettings::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("KeyCacheSecretId"))
  {
    m_keyCacheSecretId = jsonValue.GetString("KeyCacheSecretId");
    m_keyCacheSecretIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("KeyCacheSecretIamArn"))
  {
    m_keyCacheSecretIamArn = jsonValue.GetString("KeyCacheSecretIamArn");
    m_keyCacheSecretIamArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Krb5FileContents"))
  {
    m_krb5FileContents = jsonValue.GetString("Krb5FileContents");
    m_krb5FileContentsHasBeenSet = true;
  }
  return *this;
}

JsonValue KerberosAuthenticationSettings::Jsonize() const
{
  JsonValue payload;

  if(m_keyCacheSecretIdHasBeenSet)
  {
   payload.WithString("KeyCacheSecretId", m_keyCacheSecretId);

  }

  if(m_keyCacheSecretIamArnHasBeenSet)
  {
   payload.WithString("KeyCacheSecretIamArn", m_keyCacheSecretIamArn);

  }

  if(m_krb5FileContentsHasBeenSet)
  {
   payload.WithString("Krb5FileContents", m_krb5FileContents);

  }

  return payload;
}

} // namespace Model
} // namespace DatabaseMigrationService
} // namespace Aws
