/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotanalytics/model/ChannelMessages.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace IoTAnalytics
{
namespace Model
{

ChannelMessages::ChannelMessages() : 
    m_s3PathsHasBeenSet(false)
{
}

ChannelMessages::ChannelMessages(JsonView jsonValue) : 
    m_s3PathsHasBeenSet(false)
{
  *this = jsonValue;
}

ChannelMessages& ChannelMessages::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("s3Paths"))
  {
    Aws::Utils::Array<JsonView> s3PathsJsonList = jsonValue.GetArray("s3Paths");
    for(unsigned s3PathsIndex = 0; s3PathsIndex < s3PathsJsonList.GetLength(); ++s3PathsIndex)
    {
      m_s3Paths.push_back(s3PathsJsonList[s3PathsIndex].AsString());
    }
    m_s3PathsHasBeenSet = true;
  }

  return *this;
}

JsonValue ChannelMessages::Jsonize() const
{
  JsonValue payload;

  if(m_s3PathsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> s3PathsJsonList(m_s3Paths.size());
   for(unsigned s3PathsIndex = 0; s3PathsIndex < s3PathsJsonList.GetLength(); ++s3PathsIndex)
   {
     s3PathsJsonList[s3PathsIndex].AsString(m_s3Paths[s3PathsIndex]);
   }
   payload.WithArray("s3Paths", std::move(s3PathsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace IoTAnalytics
} // namespace Aws
