﻿/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
