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

#include <aws/iot/model/AssetPropertyTimestamp.h>
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

AssetPropertyTimestamp::AssetPropertyTimestamp() : 
    m_timeInSecondsHasBeenSet(false),
    m_offsetInNanosHasBeenSet(false)
{
}

AssetPropertyTimestamp::AssetPropertyTimestamp(JsonView jsonValue) : 
    m_timeInSecondsHasBeenSet(false),
    m_offsetInNanosHasBeenSet(false)
{
  *this = jsonValue;
}

AssetPropertyTimestamp& AssetPropertyTimestamp::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("timeInSeconds"))
  {
    m_timeInSeconds = jsonValue.GetString("timeInSeconds");

    m_timeInSecondsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("offsetInNanos"))
  {
    m_offsetInNanos = jsonValue.GetString("offsetInNanos");

    m_offsetInNanosHasBeenSet = true;
  }

  return *this;
}

JsonValue AssetPropertyTimestamp::Jsonize() const
{
  JsonValue payload;

  if(m_timeInSecondsHasBeenSet)
  {
   payload.WithString("timeInSeconds", m_timeInSeconds);

  }

  if(m_offsetInNanosHasBeenSet)
  {
   payload.WithString("offsetInNanos", m_offsetInNanos);

  }

  return payload;
}

} // namespace Model
} // namespace IoT
} // namespace Aws
