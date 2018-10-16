/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
