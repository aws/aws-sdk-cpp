/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connectcampaigns/model/EncryptionConfig.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ConnectCampaigns
{
namespace Model
{

EncryptionConfig::EncryptionConfig() : 
    m_enabled(false),
    m_enabledHasBeenSet(false),
    m_encryptionType(EncryptionType::NOT_SET),
    m_encryptionTypeHasBeenSet(false),
    m_keyArnHasBeenSet(false)
{
}

EncryptionConfig::EncryptionConfig(JsonView jsonValue) : 
    m_enabled(false),
    m_enabledHasBeenSet(false),
    m_encryptionType(EncryptionType::NOT_SET),
    m_encryptionTypeHasBeenSet(false),
    m_keyArnHasBeenSet(false)
{
  *this = jsonValue;
}

EncryptionConfig& EncryptionConfig::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("enabled"))
  {
    m_enabled = jsonValue.GetBool("enabled");

    m_enabledHasBeenSet = true;
  }

  if(jsonValue.ValueExists("encryptionType"))
  {
    m_encryptionType = EncryptionTypeMapper::GetEncryptionTypeForName(jsonValue.GetString("encryptionType"));

    m_encryptionTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("keyArn"))
  {
    m_keyArn = jsonValue.GetString("keyArn");

    m_keyArnHasBeenSet = true;
  }

  return *this;
}

JsonValue EncryptionConfig::Jsonize() const
{
  JsonValue payload;

  if(m_enabledHasBeenSet)
  {
   payload.WithBool("enabled", m_enabled);

  }

  if(m_encryptionTypeHasBeenSet)
  {
   payload.WithString("encryptionType", EncryptionTypeMapper::GetNameForEncryptionType(m_encryptionType));
  }

  if(m_keyArnHasBeenSet)
  {
   payload.WithString("keyArn", m_keyArn);

  }

  return payload;
}

} // namespace Model
} // namespace ConnectCampaigns
} // namespace Aws
