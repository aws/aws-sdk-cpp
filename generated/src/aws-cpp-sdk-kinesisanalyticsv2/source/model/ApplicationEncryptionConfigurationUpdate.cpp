/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kinesisanalyticsv2/model/ApplicationEncryptionConfigurationUpdate.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace KinesisAnalyticsV2
{
namespace Model
{

ApplicationEncryptionConfigurationUpdate::ApplicationEncryptionConfigurationUpdate(JsonView jsonValue)
{
  *this = jsonValue;
}

ApplicationEncryptionConfigurationUpdate& ApplicationEncryptionConfigurationUpdate::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("KeyIdUpdate"))
  {
    m_keyIdUpdate = jsonValue.GetString("KeyIdUpdate");
    m_keyIdUpdateHasBeenSet = true;
  }
  if(jsonValue.ValueExists("KeyTypeUpdate"))
  {
    m_keyTypeUpdate = KeyTypeMapper::GetKeyTypeForName(jsonValue.GetString("KeyTypeUpdate"));
    m_keyTypeUpdateHasBeenSet = true;
  }
  return *this;
}

JsonValue ApplicationEncryptionConfigurationUpdate::Jsonize() const
{
  JsonValue payload;

  if(m_keyIdUpdateHasBeenSet)
  {
   payload.WithString("KeyIdUpdate", m_keyIdUpdate);

  }

  if(m_keyTypeUpdateHasBeenSet)
  {
   payload.WithString("KeyTypeUpdate", KeyTypeMapper::GetNameForKeyType(m_keyTypeUpdate));
  }

  return payload;
}

} // namespace Model
} // namespace KinesisAnalyticsV2
} // namespace Aws
