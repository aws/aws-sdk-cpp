/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/emr-serverless/model/ManagedPersistenceMonitoringConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace EMRServerless
{
namespace Model
{

ManagedPersistenceMonitoringConfiguration::ManagedPersistenceMonitoringConfiguration() : 
    m_enabled(false),
    m_enabledHasBeenSet(false),
    m_encryptionKeyArnHasBeenSet(false)
{
}

ManagedPersistenceMonitoringConfiguration::ManagedPersistenceMonitoringConfiguration(JsonView jsonValue) : 
    m_enabled(false),
    m_enabledHasBeenSet(false),
    m_encryptionKeyArnHasBeenSet(false)
{
  *this = jsonValue;
}

ManagedPersistenceMonitoringConfiguration& ManagedPersistenceMonitoringConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("enabled"))
  {
    m_enabled = jsonValue.GetBool("enabled");

    m_enabledHasBeenSet = true;
  }

  if(jsonValue.ValueExists("encryptionKeyArn"))
  {
    m_encryptionKeyArn = jsonValue.GetString("encryptionKeyArn");

    m_encryptionKeyArnHasBeenSet = true;
  }

  return *this;
}

JsonValue ManagedPersistenceMonitoringConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_enabledHasBeenSet)
  {
   payload.WithBool("enabled", m_enabled);

  }

  if(m_encryptionKeyArnHasBeenSet)
  {
   payload.WithString("encryptionKeyArn", m_encryptionKeyArn);

  }

  return payload;
}

} // namespace Model
} // namespace EMRServerless
} // namespace Aws
