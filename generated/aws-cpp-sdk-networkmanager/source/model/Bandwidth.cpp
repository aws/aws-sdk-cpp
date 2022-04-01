/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/networkmanager/model/Bandwidth.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace NetworkManager
{
namespace Model
{

Bandwidth::Bandwidth() : 
    m_uploadSpeed(0),
    m_uploadSpeedHasBeenSet(false),
    m_downloadSpeed(0),
    m_downloadSpeedHasBeenSet(false)
{
}

Bandwidth::Bandwidth(JsonView jsonValue) : 
    m_uploadSpeed(0),
    m_uploadSpeedHasBeenSet(false),
    m_downloadSpeed(0),
    m_downloadSpeedHasBeenSet(false)
{
  *this = jsonValue;
}

Bandwidth& Bandwidth::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("UploadSpeed"))
  {
    m_uploadSpeed = jsonValue.GetInteger("UploadSpeed");

    m_uploadSpeedHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DownloadSpeed"))
  {
    m_downloadSpeed = jsonValue.GetInteger("DownloadSpeed");

    m_downloadSpeedHasBeenSet = true;
  }

  return *this;
}

JsonValue Bandwidth::Jsonize() const
{
  JsonValue payload;

  if(m_uploadSpeedHasBeenSet)
  {
   payload.WithInteger("UploadSpeed", m_uploadSpeed);

  }

  if(m_downloadSpeedHasBeenSet)
  {
   payload.WithInteger("DownloadSpeed", m_downloadSpeed);

  }

  return payload;
}

} // namespace Model
} // namespace NetworkManager
} // namespace Aws
