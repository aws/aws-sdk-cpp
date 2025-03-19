/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cleanrooms/model/Hash.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CleanRooms
{
namespace Model
{

Hash::Hash(JsonView jsonValue)
{
  *this = jsonValue;
}

Hash& Hash::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("sha256"))
  {
    m_sha256 = jsonValue.GetString("sha256");
    m_sha256HasBeenSet = true;
  }
  return *this;
}

JsonValue Hash::Jsonize() const
{
  JsonValue payload;

  if(m_sha256HasBeenSet)
  {
   payload.WithString("sha256", m_sha256);

  }

  return payload;
}

} // namespace Model
} // namespace CleanRooms
} // namespace Aws
