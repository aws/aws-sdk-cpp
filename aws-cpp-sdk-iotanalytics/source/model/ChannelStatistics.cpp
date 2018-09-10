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

#include <aws/iotanalytics/model/ChannelStatistics.h>
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

ChannelStatistics::ChannelStatistics() : 
    m_sizeHasBeenSet(false)
{
}

ChannelStatistics::ChannelStatistics(JsonView jsonValue) : 
    m_sizeHasBeenSet(false)
{
  *this = jsonValue;
}

ChannelStatistics& ChannelStatistics::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("size"))
  {
    m_size = jsonValue.GetObject("size");

    m_sizeHasBeenSet = true;
  }

  return *this;
}

JsonValue ChannelStatistics::Jsonize() const
{
  JsonValue payload;

  if(m_sizeHasBeenSet)
  {
   payload.WithObject("size", m_size.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace IoTAnalytics
} // namespace Aws
