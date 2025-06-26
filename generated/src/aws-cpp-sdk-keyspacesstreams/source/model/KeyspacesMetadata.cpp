/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/keyspacesstreams/model/KeyspacesMetadata.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace KeyspacesStreams
{
namespace Model
{

KeyspacesMetadata::KeyspacesMetadata(JsonView jsonValue)
{
  *this = jsonValue;
}

KeyspacesMetadata& KeyspacesMetadata::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("expirationTime"))
  {
    m_expirationTime = jsonValue.GetString("expirationTime");
    m_expirationTimeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("writeTime"))
  {
    m_writeTime = jsonValue.GetString("writeTime");
    m_writeTimeHasBeenSet = true;
  }
  return *this;
}

JsonValue KeyspacesMetadata::Jsonize() const
{
  JsonValue payload;

  if(m_expirationTimeHasBeenSet)
  {
   payload.WithString("expirationTime", m_expirationTime);

  }

  if(m_writeTimeHasBeenSet)
  {
   payload.WithString("writeTime", m_writeTime);

  }

  return payload;
}

} // namespace Model
} // namespace KeyspacesStreams
} // namespace Aws
