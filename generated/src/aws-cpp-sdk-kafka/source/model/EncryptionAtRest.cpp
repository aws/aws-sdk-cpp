/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kafka/model/EncryptionAtRest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Kafka
{
namespace Model
{

EncryptionAtRest::EncryptionAtRest() : 
    m_dataVolumeKMSKeyIdHasBeenSet(false)
{
}

EncryptionAtRest::EncryptionAtRest(JsonView jsonValue) : 
    m_dataVolumeKMSKeyIdHasBeenSet(false)
{
  *this = jsonValue;
}

EncryptionAtRest& EncryptionAtRest::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("dataVolumeKMSKeyId"))
  {
    m_dataVolumeKMSKeyId = jsonValue.GetString("dataVolumeKMSKeyId");

    m_dataVolumeKMSKeyIdHasBeenSet = true;
  }

  return *this;
}

JsonValue EncryptionAtRest::Jsonize() const
{
  JsonValue payload;

  if(m_dataVolumeKMSKeyIdHasBeenSet)
  {
   payload.WithString("dataVolumeKMSKeyId", m_dataVolumeKMSKeyId);

  }

  return payload;
}

} // namespace Model
} // namespace Kafka
} // namespace Aws
