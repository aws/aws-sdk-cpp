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

#include <aws/sagemaker/model/Channel.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SageMaker
{
namespace Model
{

Channel::Channel() : 
    m_channelNameHasBeenSet(false),
    m_dataSourceHasBeenSet(false),
    m_contentTypeHasBeenSet(false),
    m_compressionType(CompressionType::NOT_SET),
    m_compressionTypeHasBeenSet(false),
    m_recordWrapperType(RecordWrapper::NOT_SET),
    m_recordWrapperTypeHasBeenSet(false)
{
}

Channel::Channel(const JsonValue& jsonValue) : 
    m_channelNameHasBeenSet(false),
    m_dataSourceHasBeenSet(false),
    m_contentTypeHasBeenSet(false),
    m_compressionType(CompressionType::NOT_SET),
    m_compressionTypeHasBeenSet(false),
    m_recordWrapperType(RecordWrapper::NOT_SET),
    m_recordWrapperTypeHasBeenSet(false)
{
  *this = jsonValue;
}

Channel& Channel::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("ChannelName"))
  {
    m_channelName = jsonValue.GetString("ChannelName");

    m_channelNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DataSource"))
  {
    m_dataSource = jsonValue.GetObject("DataSource");

    m_dataSourceHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ContentType"))
  {
    m_contentType = jsonValue.GetString("ContentType");

    m_contentTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CompressionType"))
  {
    m_compressionType = CompressionTypeMapper::GetCompressionTypeForName(jsonValue.GetString("CompressionType"));

    m_compressionTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RecordWrapperType"))
  {
    m_recordWrapperType = RecordWrapperMapper::GetRecordWrapperForName(jsonValue.GetString("RecordWrapperType"));

    m_recordWrapperTypeHasBeenSet = true;
  }

  return *this;
}

JsonValue Channel::Jsonize() const
{
  JsonValue payload;

  if(m_channelNameHasBeenSet)
  {
   payload.WithString("ChannelName", m_channelName);

  }

  if(m_dataSourceHasBeenSet)
  {
   payload.WithObject("DataSource", m_dataSource.Jsonize());

  }

  if(m_contentTypeHasBeenSet)
  {
   payload.WithString("ContentType", m_contentType);

  }

  if(m_compressionTypeHasBeenSet)
  {
   payload.WithString("CompressionType", CompressionTypeMapper::GetNameForCompressionType(m_compressionType));
  }

  if(m_recordWrapperTypeHasBeenSet)
  {
   payload.WithString("RecordWrapperType", RecordWrapperMapper::GetNameForRecordWrapper(m_recordWrapperType));
  }

  return payload;
}

} // namespace Model
} // namespace SageMaker
} // namespace Aws
