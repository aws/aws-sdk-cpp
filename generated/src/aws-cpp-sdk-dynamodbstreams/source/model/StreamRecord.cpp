/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/dynamodbstreams/model/StreamRecord.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace DynamoDBStreams
{
namespace Model
{

StreamRecord::StreamRecord() : 
    m_approximateCreationDateTimeHasBeenSet(false),
    m_keysHasBeenSet(false),
    m_newImageHasBeenSet(false),
    m_oldImageHasBeenSet(false),
    m_sequenceNumberHasBeenSet(false),
    m_sizeBytes(0),
    m_sizeBytesHasBeenSet(false),
    m_streamViewType(StreamViewType::NOT_SET),
    m_streamViewTypeHasBeenSet(false)
{
}

StreamRecord::StreamRecord(JsonView jsonValue) : 
    m_approximateCreationDateTimeHasBeenSet(false),
    m_keysHasBeenSet(false),
    m_newImageHasBeenSet(false),
    m_oldImageHasBeenSet(false),
    m_sequenceNumberHasBeenSet(false),
    m_sizeBytes(0),
    m_sizeBytesHasBeenSet(false),
    m_streamViewType(StreamViewType::NOT_SET),
    m_streamViewTypeHasBeenSet(false)
{
  *this = jsonValue;
}

StreamRecord& StreamRecord::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ApproximateCreationDateTime"))
  {
    m_approximateCreationDateTime = jsonValue.GetDouble("ApproximateCreationDateTime");

    m_approximateCreationDateTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Keys"))
  {
    Aws::Map<Aws::String, JsonView> keysJsonMap = jsonValue.GetObject("Keys").GetAllObjects();
    for(auto& keysItem : keysJsonMap)
    {
      m_keys[keysItem.first] = keysItem.second.AsObject();
    }
    m_keysHasBeenSet = true;
  }

  if(jsonValue.ValueExists("NewImage"))
  {
    Aws::Map<Aws::String, JsonView> newImageJsonMap = jsonValue.GetObject("NewImage").GetAllObjects();
    for(auto& newImageItem : newImageJsonMap)
    {
      m_newImage[newImageItem.first] = newImageItem.second.AsObject();
    }
    m_newImageHasBeenSet = true;
  }

  if(jsonValue.ValueExists("OldImage"))
  {
    Aws::Map<Aws::String, JsonView> oldImageJsonMap = jsonValue.GetObject("OldImage").GetAllObjects();
    for(auto& oldImageItem : oldImageJsonMap)
    {
      m_oldImage[oldImageItem.first] = oldImageItem.second.AsObject();
    }
    m_oldImageHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SequenceNumber"))
  {
    m_sequenceNumber = jsonValue.GetString("SequenceNumber");

    m_sequenceNumberHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SizeBytes"))
  {
    m_sizeBytes = jsonValue.GetInt64("SizeBytes");

    m_sizeBytesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("StreamViewType"))
  {
    m_streamViewType = StreamViewTypeMapper::GetStreamViewTypeForName(jsonValue.GetString("StreamViewType"));

    m_streamViewTypeHasBeenSet = true;
  }

  return *this;
}

JsonValue StreamRecord::Jsonize() const
{
  JsonValue payload;

  if(m_approximateCreationDateTimeHasBeenSet)
  {
   payload.WithDouble("ApproximateCreationDateTime", m_approximateCreationDateTime.SecondsWithMSPrecision());
  }

  if(m_keysHasBeenSet)
  {
   JsonValue keysJsonMap;
   for(auto& keysItem : m_keys)
   {
     keysJsonMap.WithObject(keysItem.first, keysItem.second.Jsonize());
   }
   payload.WithObject("Keys", std::move(keysJsonMap));

  }

  if(m_newImageHasBeenSet)
  {
   JsonValue newImageJsonMap;
   for(auto& newImageItem : m_newImage)
   {
     newImageJsonMap.WithObject(newImageItem.first, newImageItem.second.Jsonize());
   }
   payload.WithObject("NewImage", std::move(newImageJsonMap));

  }

  if(m_oldImageHasBeenSet)
  {
   JsonValue oldImageJsonMap;
   for(auto& oldImageItem : m_oldImage)
   {
     oldImageJsonMap.WithObject(oldImageItem.first, oldImageItem.second.Jsonize());
   }
   payload.WithObject("OldImage", std::move(oldImageJsonMap));

  }

  if(m_sequenceNumberHasBeenSet)
  {
   payload.WithString("SequenceNumber", m_sequenceNumber);

  }

  if(m_sizeBytesHasBeenSet)
  {
   payload.WithInt64("SizeBytes", m_sizeBytes);

  }

  if(m_streamViewTypeHasBeenSet)
  {
   payload.WithString("StreamViewType", StreamViewTypeMapper::GetNameForStreamViewType(m_streamViewType));
  }

  return payload;
}

} // namespace Model
} // namespace DynamoDBStreams
} // namespace Aws
