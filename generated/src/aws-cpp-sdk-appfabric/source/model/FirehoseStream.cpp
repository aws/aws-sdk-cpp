/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appfabric/model/FirehoseStream.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace AppFabric
{
namespace Model
{

FirehoseStream::FirehoseStream() : 
    m_streamNameHasBeenSet(false)
{
}

FirehoseStream::FirehoseStream(JsonView jsonValue) : 
    m_streamNameHasBeenSet(false)
{
  *this = jsonValue;
}

FirehoseStream& FirehoseStream::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("streamName"))
  {
    m_streamName = jsonValue.GetString("streamName");

    m_streamNameHasBeenSet = true;
  }

  return *this;
}

JsonValue FirehoseStream::Jsonize() const
{
  JsonValue payload;

  if(m_streamNameHasBeenSet)
  {
   payload.WithString("streamName", m_streamName);

  }

  return payload;
}

} // namespace Model
} // namespace AppFabric
} // namespace Aws
