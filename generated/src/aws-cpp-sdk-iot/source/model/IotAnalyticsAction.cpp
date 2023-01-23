/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iot/model/IotAnalyticsAction.h>
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

IotAnalyticsAction::IotAnalyticsAction() : 
    m_channelArnHasBeenSet(false),
    m_channelNameHasBeenSet(false),
    m_batchMode(false),
    m_batchModeHasBeenSet(false),
    m_roleArnHasBeenSet(false)
{
}

IotAnalyticsAction::IotAnalyticsAction(JsonView jsonValue) : 
    m_channelArnHasBeenSet(false),
    m_channelNameHasBeenSet(false),
    m_batchMode(false),
    m_batchModeHasBeenSet(false),
    m_roleArnHasBeenSet(false)
{
  *this = jsonValue;
}

IotAnalyticsAction& IotAnalyticsAction::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("channelArn"))
  {
    m_channelArn = jsonValue.GetString("channelArn");

    m_channelArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("channelName"))
  {
    m_channelName = jsonValue.GetString("channelName");

    m_channelNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("batchMode"))
  {
    m_batchMode = jsonValue.GetBool("batchMode");

    m_batchModeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("roleArn"))
  {
    m_roleArn = jsonValue.GetString("roleArn");

    m_roleArnHasBeenSet = true;
  }

  return *this;
}

JsonValue IotAnalyticsAction::Jsonize() const
{
  JsonValue payload;

  if(m_channelArnHasBeenSet)
  {
   payload.WithString("channelArn", m_channelArn);

  }

  if(m_channelNameHasBeenSet)
  {
   payload.WithString("channelName", m_channelName);

  }

  if(m_batchModeHasBeenSet)
  {
   payload.WithBool("batchMode", m_batchMode);

  }

  if(m_roleArnHasBeenSet)
  {
   payload.WithString("roleArn", m_roleArn);

  }

  return payload;
}

} // namespace Model
} // namespace IoT
} // namespace Aws
