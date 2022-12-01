/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/pipes/model/EcsEphemeralStorage.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Pipes
{
namespace Model
{

EcsEphemeralStorage::EcsEphemeralStorage() : 
    m_sizeInGiB(0),
    m_sizeInGiBHasBeenSet(false)
{
}

EcsEphemeralStorage::EcsEphemeralStorage(JsonView jsonValue) : 
    m_sizeInGiB(0),
    m_sizeInGiBHasBeenSet(false)
{
  *this = jsonValue;
}

EcsEphemeralStorage& EcsEphemeralStorage::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("sizeInGiB"))
  {
    m_sizeInGiB = jsonValue.GetInteger("sizeInGiB");

    m_sizeInGiBHasBeenSet = true;
  }

  return *this;
}

JsonValue EcsEphemeralStorage::Jsonize() const
{
  JsonValue payload;

  if(m_sizeInGiBHasBeenSet)
  {
   payload.WithInteger("sizeInGiB", m_sizeInGiB);

  }

  return payload;
}

} // namespace Model
} // namespace Pipes
} // namespace Aws
