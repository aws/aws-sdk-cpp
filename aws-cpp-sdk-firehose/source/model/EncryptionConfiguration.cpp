/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/firehose/model/EncryptionConfiguration.h>
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

EncryptionConfiguration::EncryptionConfiguration() : 
    m_noEncryptionConfig(NoEncryptionConfig::NOT_SET),
    m_noEncryptionConfigHasBeenSet(false),
    m_kMSEncryptionConfigHasBeenSet(false)
{
}

EncryptionConfiguration::EncryptionConfiguration(JsonView jsonValue) : 
    m_noEncryptionConfig(NoEncryptionConfig::NOT_SET),
    m_noEncryptionConfigHasBeenSet(false),
    m_kMSEncryptionConfigHasBeenSet(false)
{
  *this = jsonValue;
}

EncryptionConfiguration& EncryptionConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("NoEncryptionConfig"))
  {
    m_noEncryptionConfig = NoEncryptionConfigMapper::GetNoEncryptionConfigForName(jsonValue.GetString("NoEncryptionConfig"));

    m_noEncryptionConfigHasBeenSet = true;
  }

  if(jsonValue.ValueExists("KMSEncryptionConfig"))
  {
    m_kMSEncryptionConfig = jsonValue.GetObject("KMSEncryptionConfig");

    m_kMSEncryptionConfigHasBeenSet = true;
  }

  return *this;
}

JsonValue EncryptionConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_noEncryptionConfigHasBeenSet)
  {
   payload.WithString("NoEncryptionConfig", NoEncryptionConfigMapper::GetNameForNoEncryptionConfig(m_noEncryptionConfig));
  }

  if(m_kMSEncryptionConfigHasBeenSet)
  {
   payload.WithObject("KMSEncryptionConfig", m_kMSEncryptionConfig.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace Firehose
} // namespace Aws
