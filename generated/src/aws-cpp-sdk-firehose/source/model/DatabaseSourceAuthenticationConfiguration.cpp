/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/firehose/model/DatabaseSourceAuthenticationConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Firehose
{
namespace Model
{

DatabaseSourceAuthenticationConfiguration::DatabaseSourceAuthenticationConfiguration(JsonView jsonValue)
{
  *this = jsonValue;
}

DatabaseSourceAuthenticationConfiguration& DatabaseSourceAuthenticationConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("SecretsManagerConfiguration"))
  {
    m_secretsManagerConfiguration = jsonValue.GetObject("SecretsManagerConfiguration");
    m_secretsManagerConfigurationHasBeenSet = true;
  }
  return *this;
}

JsonValue DatabaseSourceAuthenticationConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_secretsManagerConfigurationHasBeenSet)
  {
   payload.WithObject("SecretsManagerConfiguration", m_secretsManagerConfiguration.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace Firehose
} // namespace Aws
