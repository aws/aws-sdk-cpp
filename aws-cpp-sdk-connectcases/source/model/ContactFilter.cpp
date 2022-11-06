/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connectcases/model/ContactFilter.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ConnectCases
{
namespace Model
{

ContactFilter::ContactFilter() : 
    m_channelHasBeenSet(false),
    m_contactArnHasBeenSet(false)
{
}

ContactFilter::ContactFilter(JsonView jsonValue) : 
    m_channelHasBeenSet(false),
    m_contactArnHasBeenSet(false)
{
  *this = jsonValue;
}

ContactFilter& ContactFilter::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("channel"))
  {
    Aws::Utils::Array<JsonView> channelJsonList = jsonValue.GetArray("channel");
    for(unsigned channelIndex = 0; channelIndex < channelJsonList.GetLength(); ++channelIndex)
    {
      m_channel.push_back(channelJsonList[channelIndex].AsString());
    }
    m_channelHasBeenSet = true;
  }

  if(jsonValue.ValueExists("contactArn"))
  {
    m_contactArn = jsonValue.GetString("contactArn");

    m_contactArnHasBeenSet = true;
  }

  return *this;
}

JsonValue ContactFilter::Jsonize() const
{
  JsonValue payload;

  if(m_channelHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> channelJsonList(m_channel.size());
   for(unsigned channelIndex = 0; channelIndex < channelJsonList.GetLength(); ++channelIndex)
   {
     channelJsonList[channelIndex].AsString(m_channel[channelIndex]);
   }
   payload.WithArray("channel", std::move(channelJsonList));

  }

  if(m_contactArnHasBeenSet)
  {
   payload.WithString("contactArn", m_contactArn);

  }

  return payload;
}

} // namespace Model
} // namespace ConnectCases
} // namespace Aws
