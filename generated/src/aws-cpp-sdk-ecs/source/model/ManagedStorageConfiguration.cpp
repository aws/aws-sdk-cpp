/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ecs/model/ManagedStorageConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ECS
{
namespace Model
{

ManagedStorageConfiguration::ManagedStorageConfiguration(JsonView jsonValue)
{
  *this = jsonValue;
}

ManagedStorageConfiguration& ManagedStorageConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("kmsKeyId"))
  {
    m_kmsKeyId = jsonValue.GetString("kmsKeyId");
    m_kmsKeyIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("fargateEphemeralStorageKmsKeyId"))
  {
    m_fargateEphemeralStorageKmsKeyId = jsonValue.GetString("fargateEphemeralStorageKmsKeyId");
    m_fargateEphemeralStorageKmsKeyIdHasBeenSet = true;
  }
  return *this;
}

JsonValue ManagedStorageConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_kmsKeyIdHasBeenSet)
  {
   payload.WithString("kmsKeyId", m_kmsKeyId);

  }

  if(m_fargateEphemeralStorageKmsKeyIdHasBeenSet)
  {
   payload.WithString("fargateEphemeralStorageKmsKeyId", m_fargateEphemeralStorageKmsKeyId);

  }

  return payload;
}

} // namespace Model
} // namespace ECS
} // namespace Aws
