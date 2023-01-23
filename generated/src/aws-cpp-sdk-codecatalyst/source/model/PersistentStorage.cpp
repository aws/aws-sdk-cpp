/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codecatalyst/model/PersistentStorage.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CodeCatalyst
{
namespace Model
{

PersistentStorage::PersistentStorage() : 
    m_sizeInGiB(0),
    m_sizeInGiBHasBeenSet(false)
{
}

PersistentStorage::PersistentStorage(JsonView jsonValue) : 
    m_sizeInGiB(0),
    m_sizeInGiBHasBeenSet(false)
{
  *this = jsonValue;
}

PersistentStorage& PersistentStorage::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("sizeInGiB"))
  {
    m_sizeInGiB = jsonValue.GetInteger("sizeInGiB");

    m_sizeInGiBHasBeenSet = true;
  }

  return *this;
}

JsonValue PersistentStorage::Jsonize() const
{
  JsonValue payload;

  if(m_sizeInGiBHasBeenSet)
  {
   payload.WithInteger("sizeInGiB", m_sizeInGiB);

  }

  return payload;
}

} // namespace Model
} // namespace CodeCatalyst
} // namespace Aws
