/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appfabric/model/Destination.h>
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

Destination::Destination() : 
    m_s3BucketHasBeenSet(false),
    m_firehoseStreamHasBeenSet(false)
{
}

Destination::Destination(JsonView jsonValue) : 
    m_s3BucketHasBeenSet(false),
    m_firehoseStreamHasBeenSet(false)
{
  *this = jsonValue;
}

Destination& Destination::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("s3Bucket"))
  {
    m_s3Bucket = jsonValue.GetObject("s3Bucket");

    m_s3BucketHasBeenSet = true;
  }

  if(jsonValue.ValueExists("firehoseStream"))
  {
    m_firehoseStream = jsonValue.GetObject("firehoseStream");

    m_firehoseStreamHasBeenSet = true;
  }

  return *this;
}

JsonValue Destination::Jsonize() const
{
  JsonValue payload;

  if(m_s3BucketHasBeenSet)
  {
   payload.WithObject("s3Bucket", m_s3Bucket.Jsonize());

  }

  if(m_firehoseStreamHasBeenSet)
  {
   payload.WithObject("firehoseStream", m_firehoseStream.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace AppFabric
} // namespace Aws
