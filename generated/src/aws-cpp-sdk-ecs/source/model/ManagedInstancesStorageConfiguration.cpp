/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ecs/model/ManagedInstancesStorageConfiguration.h>
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

ManagedInstancesStorageConfiguration::ManagedInstancesStorageConfiguration(JsonView jsonValue)
{
  *this = jsonValue;
}

ManagedInstancesStorageConfiguration& ManagedInstancesStorageConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("storageSizeGiB"))
  {
    m_storageSizeGiB = jsonValue.GetInteger("storageSizeGiB");
    m_storageSizeGiBHasBeenSet = true;
  }
  return *this;
}

JsonValue ManagedInstancesStorageConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_storageSizeGiBHasBeenSet)
  {
   payload.WithInteger("storageSizeGiB", m_storageSizeGiB);

  }

  return payload;
}

} // namespace Model
} // namespace ECS
} // namespace Aws
