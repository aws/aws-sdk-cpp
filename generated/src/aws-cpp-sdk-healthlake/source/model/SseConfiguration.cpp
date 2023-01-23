/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/healthlake/model/SseConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace HealthLake
{
namespace Model
{

SseConfiguration::SseConfiguration() : 
    m_kmsEncryptionConfigHasBeenSet(false)
{
}

SseConfiguration::SseConfiguration(JsonView jsonValue) : 
    m_kmsEncryptionConfigHasBeenSet(false)
{
  *this = jsonValue;
}

SseConfiguration& SseConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("KmsEncryptionConfig"))
  {
    m_kmsEncryptionConfig = jsonValue.GetObject("KmsEncryptionConfig");

    m_kmsEncryptionConfigHasBeenSet = true;
  }

  return *this;
}

JsonValue SseConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_kmsEncryptionConfigHasBeenSet)
  {
   payload.WithObject("KmsEncryptionConfig", m_kmsEncryptionConfig.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace HealthLake
} // namespace Aws
