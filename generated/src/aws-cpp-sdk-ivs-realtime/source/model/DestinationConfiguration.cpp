/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ivs-realtime/model/DestinationConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ivsrealtime
{
namespace Model
{

DestinationConfiguration::DestinationConfiguration() : 
    m_channelHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_s3HasBeenSet(false)
{
}

DestinationConfiguration::DestinationConfiguration(JsonView jsonValue) : 
    m_channelHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_s3HasBeenSet(false)
{
  *this = jsonValue;
}

DestinationConfiguration& DestinationConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("channel"))
  {
    m_channel = jsonValue.GetObject("channel");

    m_channelHasBeenSet = true;
  }

  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("s3"))
  {
    m_s3 = jsonValue.GetObject("s3");

    m_s3HasBeenSet = true;
  }

  return *this;
}

JsonValue DestinationConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_channelHasBeenSet)
  {
   payload.WithObject("channel", m_channel.Jsonize());

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_s3HasBeenSet)
  {
   payload.WithObject("s3", m_s3.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace ivsrealtime
} // namespace Aws
