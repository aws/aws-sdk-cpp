/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/firehose/model/SecretsManagerConfiguration.h>
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

SecretsManagerConfiguration::SecretsManagerConfiguration(JsonView jsonValue)
{
  *this = jsonValue;
}

SecretsManagerConfiguration& SecretsManagerConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("SecretARN"))
  {
    m_secretARN = jsonValue.GetString("SecretARN");
    m_secretARNHasBeenSet = true;
  }
  if(jsonValue.ValueExists("RoleARN"))
  {
    m_roleARN = jsonValue.GetString("RoleARN");
    m_roleARNHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Enabled"))
  {
    m_enabled = jsonValue.GetBool("Enabled");
    m_enabledHasBeenSet = true;
  }
  return *this;
}

JsonValue SecretsManagerConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_secretARNHasBeenSet)
  {
   payload.WithString("SecretARN", m_secretARN);

  }

  if(m_roleARNHasBeenSet)
  {
   payload.WithString("RoleARN", m_roleARN);

  }

  if(m_enabledHasBeenSet)
  {
   payload.WithBool("Enabled", m_enabled);

  }

  return payload;
}

} // namespace Model
} // namespace Firehose
} // namespace Aws
