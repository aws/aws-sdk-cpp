/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kinesis-video-archived-media/model/Fragment.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace KinesisVideoArchivedMedia
{
namespace Model
{

Fragment::Fragment() : 
    m_fragmentNumberHasBeenSet(false),
    m_fragmentSizeInBytes(0),
    m_fragmentSizeInBytesHasBeenSet(false),
    m_producerTimestampHasBeenSet(false),
    m_serverTimestampHasBeenSet(false),
    m_fragmentLengthInMilliseconds(0),
    m_fragmentLengthInMillisecondsHasBeenSet(false)
{
}

Fragment::Fragment(JsonView jsonValue) : 
    m_fragmentNumberHasBeenSet(false),
    m_fragmentSizeInBytes(0),
    m_fragmentSizeInBytesHasBeenSet(false),
    m_producerTimestampHasBeenSet(false),
    m_serverTimestampHasBeenSet(false),
    m_fragmentLengthInMilliseconds(0),
    m_fragmentLengthInMillisecondsHasBeenSet(false)
{
  *this = jsonValue;
}

Fragment& Fragment::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("FragmentNumber"))
  {
    m_fragmentNumber = jsonValue.GetString("FragmentNumber");

    m_fragmentNumberHasBeenSet = true;
  }

  if(jsonValue.ValueExists("FragmentSizeInBytes"))
  {
    m_fragmentSizeInBytes = jsonValue.GetInt64("FragmentSizeInBytes");

    m_fragmentSizeInBytesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ProducerTimestamp"))
  {
    m_producerTimestamp = jsonValue.GetDouble("ProducerTimestamp");

    m_producerTimestampHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ServerTimestamp"))
  {
    m_serverTimestamp = jsonValue.GetDouble("ServerTimestamp");

    m_serverTimestampHasBeenSet = true;
  }

  if(jsonValue.ValueExists("FragmentLengthInMilliseconds"))
  {
    m_fragmentLengthInMilliseconds = jsonValue.GetInt64("FragmentLengthInMilliseconds");

    m_fragmentLengthInMillisecondsHasBeenSet = true;
  }

  return *this;
}

JsonValue Fragment::Jsonize() const
{
  JsonValue payload;

  if(m_fragmentNumberHasBeenSet)
  {
   payload.WithString("FragmentNumber", m_fragmentNumber);

  }

  if(m_fragmentSizeInBytesHasBeenSet)
  {
   payload.WithInt64("FragmentSizeInBytes", m_fragmentSizeInBytes);

  }

  if(m_producerTimestampHasBeenSet)
  {
   payload.WithDouble("ProducerTimestamp", m_producerTimestamp.SecondsWithMSPrecision());
  }

  if(m_serverTimestampHasBeenSet)
  {
   payload.WithDouble("ServerTimestamp", m_serverTimestamp.SecondsWithMSPrecision());
  }

  if(m_fragmentLengthInMillisecondsHasBeenSet)
  {
   payload.WithInt64("FragmentLengthInMilliseconds", m_fragmentLengthInMilliseconds);

  }

  return payload;
}

} // namespace Model
} // namespace KinesisVideoArchivedMedia
} // namespace Aws
