/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lightsail/model/PendingModifiedRelationalDatabaseValues.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Lightsail
{
namespace Model
{

PendingModifiedRelationalDatabaseValues::PendingModifiedRelationalDatabaseValues() : 
    m_masterUserPasswordHasBeenSet(false),
    m_engineVersionHasBeenSet(false),
    m_backupRetentionEnabled(false),
    m_backupRetentionEnabledHasBeenSet(false)
{
}

PendingModifiedRelationalDatabaseValues::PendingModifiedRelationalDatabaseValues(JsonView jsonValue) : 
    m_masterUserPasswordHasBeenSet(false),
    m_engineVersionHasBeenSet(false),
    m_backupRetentionEnabled(false),
    m_backupRetentionEnabledHasBeenSet(false)
{
  *this = jsonValue;
}

PendingModifiedRelationalDatabaseValues& PendingModifiedRelationalDatabaseValues::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("masterUserPassword"))
  {
    m_masterUserPassword = jsonValue.GetString("masterUserPassword");

    m_masterUserPasswordHasBeenSet = true;
  }

  if(jsonValue.ValueExists("engineVersion"))
  {
    m_engineVersion = jsonValue.GetString("engineVersion");

    m_engineVersionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("backupRetentionEnabled"))
  {
    m_backupRetentionEnabled = jsonValue.GetBool("backupRetentionEnabled");

    m_backupRetentionEnabledHasBeenSet = true;
  }

  return *this;
}

JsonValue PendingModifiedRelationalDatabaseValues::Jsonize() const
{
  JsonValue payload;

  if(m_masterUserPasswordHasBeenSet)
  {
   payload.WithString("masterUserPassword", m_masterUserPassword);

  }

  if(m_engineVersionHasBeenSet)
  {
   payload.WithString("engineVersion", m_engineVersion);

  }

  if(m_backupRetentionEnabledHasBeenSet)
  {
   payload.WithBool("backupRetentionEnabled", m_backupRetentionEnabled);

  }

  return payload;
}

} // namespace Model
} // namespace Lightsail
} // namespace Aws
