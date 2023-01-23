/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
