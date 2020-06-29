/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iot/model/Stream.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace IoT
{
namespace Model
{

Stream::Stream() : 
    m_streamIdHasBeenSet(false),
    m_fileId(0),
    m_fileIdHasBeenSet(false)
{
}

Stream::Stream(JsonView jsonValue) : 
    m_streamIdHasBeenSet(false),
    m_fileId(0),
    m_fileIdHasBeenSet(false)
{
  *this = jsonValue;
}

Stream& Stream::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("streamId"))
  {
    m_streamId = jsonValue.GetString("streamId");

    m_streamIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("fileId"))
  {
    m_fileId = jsonValue.GetInteger("fileId");

    m_fileIdHasBeenSet = true;
  }

  return *this;
}

JsonValue Stream::Jsonize() const
{
  JsonValue payload;

  if(m_streamIdHasBeenSet)
  {
   payload.WithString("streamId", m_streamId);

  }

  if(m_fileIdHasBeenSet)
  {
   payload.WithInteger("fileId", m_fileId);

  }

  return payload;
}

} // namespace Model
} // namespace IoT
} // namespace Aws
