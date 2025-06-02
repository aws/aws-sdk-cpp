/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/athena/model/ManagedQueryResultsConfiguration.h>
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

ManagedQueryResultsConfiguration::ManagedQueryResultsConfiguration(JsonView jsonValue)
{
  *this = jsonValue;
}

ManagedQueryResultsConfiguration& ManagedQueryResultsConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Enabled"))
  {
    m_enabled = jsonValue.GetBool("Enabled");
    m_enabledHasBeenSet = true;
  }
  if(jsonValue.ValueExists("EncryptionConfiguration"))
  {
    m_encryptionConfiguration = jsonValue.GetObject("EncryptionConfiguration");
    m_encryptionConfigurationHasBeenSet = true;
  }
  return *this;
}

JsonValue ManagedQueryResultsConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_enabledHasBeenSet)
  {
   payload.WithBool("Enabled", m_enabled);

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
