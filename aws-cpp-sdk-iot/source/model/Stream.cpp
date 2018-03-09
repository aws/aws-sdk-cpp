/*
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

Stream::Stream(const JsonValue& jsonValue) : 
    m_streamIdHasBeenSet(false),
    m_fileId(0),
    m_fileIdHasBeenSet(false)
{
  *this = jsonValue;
}

Stream& Stream::operator =(const JsonValue& jsonValue)
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
