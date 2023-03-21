/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/chime-sdk-messaging/model/StreamingConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ChimeSDKMessaging
{
namespace Model
{

StreamingConfiguration::StreamingConfiguration() : 
    m_dataType(MessagingDataType::NOT_SET),
    m_dataTypeHasBeenSet(false),
    m_resourceArnHasBeenSet(false)
{
}

StreamingConfiguration::StreamingConfiguration(JsonView jsonValue) : 
    m_dataType(MessagingDataType::NOT_SET),
    m_dataTypeHasBeenSet(false),
    m_resourceArnHasBeenSet(false)
{
  *this = jsonValue;
}

StreamingConfiguration& StreamingConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("DataType"))
  {
    m_dataType = MessagingDataTypeMapper::GetMessagingDataTypeForName(jsonValue.GetString("DataType"));

    m_dataTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ResourceArn"))
  {
    m_resourceArn = jsonValue.GetString("ResourceArn");

    m_resourceArnHasBeenSet = true;
  }

  return *this;
}

JsonValue StreamingConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_dataTypeHasBeenSet)
  {
   payload.WithString("DataType", MessagingDataTypeMapper::GetNameForMessagingDataType(m_dataType));
  }

  if(m_resourceArnHasBeenSet)
  {
   payload.WithString("ResourceArn", m_resourceArn);

  }

  return payload;
}

} // namespace Model
} // namespace ChimeSDKMessaging
} // namespace Aws
