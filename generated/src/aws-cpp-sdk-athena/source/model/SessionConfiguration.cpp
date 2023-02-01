/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/athena/model/SessionConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Athena
{
namespace Model
{

SessionConfiguration::SessionConfiguration() : 
    m_executionRoleHasBeenSet(false),
    m_workingDirectoryHasBeenSet(false),
    m_idleTimeoutSeconds(0),
    m_idleTimeoutSecondsHasBeenSet(false),
    m_encryptionConfigurationHasBeenSet(false)
{
}

SessionConfiguration::SessionConfiguration(JsonView jsonValue) : 
    m_executionRoleHasBeenSet(false),
    m_workingDirectoryHasBeenSet(false),
    m_idleTimeoutSeconds(0),
    m_idleTimeoutSecondsHasBeenSet(false),
    m_encryptionConfigurationHasBeenSet(false)
{
  *this = jsonValue;
}

SessionConfiguration& SessionConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ExecutionRole"))
  {
    m_executionRole = jsonValue.GetString("ExecutionRole");

    m_executionRoleHasBeenSet = true;
  }

  if(jsonValue.ValueExists("WorkingDirectory"))
  {
    m_workingDirectory = jsonValue.GetString("WorkingDirectory");

    m_workingDirectoryHasBeenSet = true;
  }

  if(jsonValue.ValueExists("IdleTimeoutSeconds"))
  {
    m_idleTimeoutSeconds = jsonValue.GetInt64("IdleTimeoutSeconds");

    m_idleTimeoutSecondsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("EncryptionConfiguration"))
  {
    m_encryptionConfiguration = jsonValue.GetObject("EncryptionConfiguration");

    m_encryptionConfigurationHasBeenSet = true;
  }

  return *this;
}

JsonValue SessionConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_executionRoleHasBeenSet)
  {
   payload.WithString("ExecutionRole", m_executionRole);

  }

  if(m_workingDirectoryHasBeenSet)
  {
   payload.WithString("WorkingDirectory", m_workingDirectory);

  }

  if(m_idleTimeoutSecondsHasBeenSet)
  {
   payload.WithInt64("IdleTimeoutSeconds", m_idleTimeoutSeconds);

  }

  if(m_encryptionConfigurationHasBeenSet)
  {
   payload.WithObject("EncryptionConfiguration", m_encryptionConfiguration.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace Athena
} // namespace Aws
