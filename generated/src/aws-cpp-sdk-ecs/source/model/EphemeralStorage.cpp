/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ecs/model/EphemeralStorage.h>
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

EphemeralStorage::EphemeralStorage() : 
    m_sizeInGiB(0),
    m_sizeInGiBHasBeenSet(false)
{
}

EphemeralStorage::EphemeralStorage(JsonView jsonValue) : 
    m_sizeInGiB(0),
    m_sizeInGiBHasBeenSet(false)
{
  *this = jsonValue;
}

EphemeralStorage& EphemeralStorage::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("sizeInGiB"))
  {
    m_sizeInGiB = jsonValue.GetInteger("sizeInGiB");

    m_sizeInGiBHasBeenSet = true;
  }

  return *this;
}

JsonValue EphemeralStorage::Jsonize() const
{
  JsonValue payload;

  if(m_sizeInGiBHasBeenSet)
  {
   payload.WithInteger("sizeInGiB", m_sizeInGiB);

  }

  return payload;
}

} // namespace Model
} // namespace ECS
} // namespace Aws
