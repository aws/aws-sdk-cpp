/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/forecast/model/EncryptionConfig.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ForecastService
{
namespace Model
{

EncryptionConfig::EncryptionConfig() : 
    m_roleArnHasBeenSet(false),
    m_kMSKeyArnHasBeenSet(false)
{
}

EncryptionConfig::EncryptionConfig(JsonView jsonValue) : 
    m_roleArnHasBeenSet(false),
    m_kMSKeyArnHasBeenSet(false)
{
  *this = jsonValue;
}

EncryptionConfig& EncryptionConfig::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("RoleArn"))
  {
    m_roleArn = jsonValue.GetString("RoleArn");

    m_roleArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("KMSKeyArn"))
  {
    m_kMSKeyArn = jsonValue.GetString("KMSKeyArn");

    m_kMSKeyArnHasBeenSet = true;
  }

  return *this;
}

JsonValue EncryptionConfig::Jsonize() const
{
  JsonValue payload;

  if(m_roleArnHasBeenSet)
  {
   payload.WithString("RoleArn", m_roleArn);

  }

  if(m_kMSKeyArnHasBeenSet)
  {
   payload.WithString("KMSKeyArn", m_kMSKeyArn);

  }

  return payload;
}

} // namespace Model
} // namespace ForecastService
} // namespace Aws
