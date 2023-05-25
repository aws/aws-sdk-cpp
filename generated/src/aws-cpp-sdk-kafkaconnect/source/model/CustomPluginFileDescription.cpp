/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kafkaconnect/model/CustomPluginFileDescription.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace KafkaConnect
{
namespace Model
{

CustomPluginFileDescription::CustomPluginFileDescription() : 
    m_fileMd5HasBeenSet(false),
    m_fileSize(0),
    m_fileSizeHasBeenSet(false)
{
}

CustomPluginFileDescription::CustomPluginFileDescription(JsonView jsonValue) : 
    m_fileMd5HasBeenSet(false),
    m_fileSize(0),
    m_fileSizeHasBeenSet(false)
{
  *this = jsonValue;
}

CustomPluginFileDescription& CustomPluginFileDescription::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("fileMd5"))
  {
    m_fileMd5 = jsonValue.GetString("fileMd5");

    m_fileMd5HasBeenSet = true;
  }

  if(jsonValue.ValueExists("fileSize"))
  {
    m_fileSize = jsonValue.GetInt64("fileSize");

    m_fileSizeHasBeenSet = true;
  }

  return *this;
}

JsonValue CustomPluginFileDescription::Jsonize() const
{
  JsonValue payload;

  if(m_fileMd5HasBeenSet)
  {
   payload.WithString("fileMd5", m_fileMd5);

  }

  if(m_fileSizeHasBeenSet)
  {
   payload.WithInt64("fileSize", m_fileSize);

  }

  return payload;
}

} // namespace Model
} // namespace KafkaConnect
} // namespace Aws
