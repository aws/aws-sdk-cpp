/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/nimble/model/StreamingSessionStorageRoot.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace NimbleStudio
{
namespace Model
{

StreamingSessionStorageRoot::StreamingSessionStorageRoot() : 
    m_linuxHasBeenSet(false),
    m_windowsHasBeenSet(false)
{
}

StreamingSessionStorageRoot::StreamingSessionStorageRoot(JsonView jsonValue) : 
    m_linuxHasBeenSet(false),
    m_windowsHasBeenSet(false)
{
  *this = jsonValue;
}

StreamingSessionStorageRoot& StreamingSessionStorageRoot::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("linux"))
  {
    m_linux = jsonValue.GetString("linux");

    m_linuxHasBeenSet = true;
  }

  if(jsonValue.ValueExists("windows"))
  {
    m_windows = jsonValue.GetString("windows");

    m_windowsHasBeenSet = true;
  }

  return *this;
}

JsonValue StreamingSessionStorageRoot::Jsonize() const
{
  JsonValue payload;

  if(m_linuxHasBeenSet)
  {
   payload.WithString("linux", m_linux);

  }

  if(m_windowsHasBeenSet)
  {
   payload.WithString("windows", m_windows);

  }

  return payload;
}

} // namespace Model
} // namespace NimbleStudio
} // namespace Aws
