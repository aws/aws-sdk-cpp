/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediatailor/model/PrefetchSchedule.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace MediaTailor
{
namespace Model
{

PrefetchSchedule::PrefetchSchedule() : 
    m_arnHasBeenSet(false),
    m_consumptionHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_playbackConfigurationNameHasBeenSet(false),
    m_retrievalHasBeenSet(false),
    m_streamIdHasBeenSet(false)
{
}

PrefetchSchedule::PrefetchSchedule(JsonView jsonValue) : 
    m_arnHasBeenSet(false),
    m_consumptionHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_playbackConfigurationNameHasBeenSet(false),
    m_retrievalHasBeenSet(false),
    m_streamIdHasBeenSet(false)
{
  *this = jsonValue;
}

PrefetchSchedule& PrefetchSchedule::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Arn"))
  {
    m_arn = jsonValue.GetString("Arn");

    m_arnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Consumption"))
  {
    m_consumption = jsonValue.GetObject("Consumption");

    m_consumptionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("PlaybackConfigurationName"))
  {
    m_playbackConfigurationName = jsonValue.GetString("PlaybackConfigurationName");

    m_playbackConfigurationNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Retrieval"))
  {
    m_retrieval = jsonValue.GetObject("Retrieval");

    m_retrievalHasBeenSet = true;
  }

  if(jsonValue.ValueExists("StreamId"))
  {
    m_streamId = jsonValue.GetString("StreamId");

    m_streamIdHasBeenSet = true;
  }

  return *this;
}

JsonValue PrefetchSchedule::Jsonize() const
{
  JsonValue payload;

  if(m_arnHasBeenSet)
  {
   payload.WithString("Arn", m_arn);

  }

  if(m_consumptionHasBeenSet)
  {
   payload.WithObject("Consumption", m_consumption.Jsonize());

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_playbackConfigurationNameHasBeenSet)
  {
   payload.WithString("PlaybackConfigurationName", m_playbackConfigurationName);

  }

  if(m_retrievalHasBeenSet)
  {
   payload.WithObject("Retrieval", m_retrieval.Jsonize());

  }

  if(m_streamIdHasBeenSet)
  {
   payload.WithString("StreamId", m_streamId);

  }

  return payload;
}

} // namespace Model
} // namespace MediaTailor
} // namespace Aws
