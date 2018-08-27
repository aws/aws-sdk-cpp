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

#include <aws/iot/model/FileLocation.h>
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

FileLocation::FileLocation() : 
    m_streamHasBeenSet(false),
    m_s3LocationHasBeenSet(false)
{
}

FileLocation::FileLocation(JsonView jsonValue) : 
    m_streamHasBeenSet(false),
    m_s3LocationHasBeenSet(false)
{
  *this = jsonValue;
}

FileLocation& FileLocation::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("stream"))
  {
    m_stream = jsonValue.GetObject("stream");

    m_streamHasBeenSet = true;
  }

  if(jsonValue.ValueExists("s3Location"))
  {
    m_s3Location = jsonValue.GetObject("s3Location");

    m_s3LocationHasBeenSet = true;
  }

  return *this;
}

JsonValue FileLocation::Jsonize() const
{
  JsonValue payload;

  if(m_streamHasBeenSet)
  {
   payload.WithObject("stream", m_stream.Jsonize());

  }

  if(m_s3LocationHasBeenSet)
  {
   payload.WithObject("s3Location", m_s3Location.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace IoT
} // namespace Aws
