/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/pinpoint/model/WriteEventStream.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Pinpoint
{
namespace Model
{

WriteEventStream::WriteEventStream() : 
    m_destinationStreamArnHasBeenSet(false),
    m_roleArnHasBeenSet(false)
{
}

WriteEventStream::WriteEventStream(JsonView jsonValue) : 
    m_destinationStreamArnHasBeenSet(false),
    m_roleArnHasBeenSet(false)
{
  *this = jsonValue;
}

WriteEventStream& WriteEventStream::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("DestinationStreamArn"))
  {
    m_destinationStreamArn = jsonValue.GetString("DestinationStreamArn");

    m_destinationStreamArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RoleArn"))
  {
    m_roleArn = jsonValue.GetString("RoleArn");

    m_roleArnHasBeenSet = true;
  }

  return *this;
}

JsonValue WriteEventStream::Jsonize() const
{
  JsonValue payload;

  if(m_destinationStreamArnHasBeenSet)
  {
   payload.WithString("DestinationStreamArn", m_destinationStreamArn);

  }

  if(m_roleArnHasBeenSet)
  {
   payload.WithString("RoleArn", m_roleArn);

  }

  return payload;
}

} // namespace Model
} // namespace Pinpoint
} // namespace Aws
