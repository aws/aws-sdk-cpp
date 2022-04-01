/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/medialive/model/M3u8Settings.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace MediaLive
{
namespace Model
{

M3u8Settings::M3u8Settings() : 
    m_audioFramesPerPes(0),
    m_audioFramesPerPesHasBeenSet(false),
    m_audioPidsHasBeenSet(false),
    m_ecmPidHasBeenSet(false),
    m_nielsenId3Behavior(M3u8NielsenId3Behavior::NOT_SET),
    m_nielsenId3BehaviorHasBeenSet(false),
    m_patInterval(0),
    m_patIntervalHasBeenSet(false),
    m_pcrControl(M3u8PcrControl::NOT_SET),
    m_pcrControlHasBeenSet(false),
    m_pcrPeriod(0),
    m_pcrPeriodHasBeenSet(false),
    m_pcrPidHasBeenSet(false),
    m_pmtInterval(0),
    m_pmtIntervalHasBeenSet(false),
    m_pmtPidHasBeenSet(false),
    m_programNum(0),
    m_programNumHasBeenSet(false),
    m_scte35Behavior(M3u8Scte35Behavior::NOT_SET),
    m_scte35BehaviorHasBeenSet(false),
    m_scte35PidHasBeenSet(false),
    m_timedMetadataBehavior(M3u8TimedMetadataBehavior::NOT_SET),
    m_timedMetadataBehaviorHasBeenSet(false),
    m_timedMetadataPidHasBeenSet(false),
    m_transportStreamId(0),
    m_transportStreamIdHasBeenSet(false),
    m_videoPidHasBeenSet(false)
{
}

M3u8Settings::M3u8Settings(JsonView jsonValue) : 
    m_audioFramesPerPes(0),
    m_audioFramesPerPesHasBeenSet(false),
    m_audioPidsHasBeenSet(false),
    m_ecmPidHasBeenSet(false),
    m_nielsenId3Behavior(M3u8NielsenId3Behavior::NOT_SET),
    m_nielsenId3BehaviorHasBeenSet(false),
    m_patInterval(0),
    m_patIntervalHasBeenSet(false),
    m_pcrControl(M3u8PcrControl::NOT_SET),
    m_pcrControlHasBeenSet(false),
    m_pcrPeriod(0),
    m_pcrPeriodHasBeenSet(false),
    m_pcrPidHasBeenSet(false),
    m_pmtInterval(0),
    m_pmtIntervalHasBeenSet(false),
    m_pmtPidHasBeenSet(false),
    m_programNum(0),
    m_programNumHasBeenSet(false),
    m_scte35Behavior(M3u8Scte35Behavior::NOT_SET),
    m_scte35BehaviorHasBeenSet(false),
    m_scte35PidHasBeenSet(false),
    m_timedMetadataBehavior(M3u8TimedMetadataBehavior::NOT_SET),
    m_timedMetadataBehaviorHasBeenSet(false),
    m_timedMetadataPidHasBeenSet(false),
    m_transportStreamId(0),
    m_transportStreamIdHasBeenSet(false),
    m_videoPidHasBeenSet(false)
{
  *this = jsonValue;
}

M3u8Settings& M3u8Settings::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("audioFramesPerPes"))
  {
    m_audioFramesPerPes = jsonValue.GetInteger("audioFramesPerPes");

    m_audioFramesPerPesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("audioPids"))
  {
    m_audioPids = jsonValue.GetString("audioPids");

    m_audioPidsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ecmPid"))
  {
    m_ecmPid = jsonValue.GetString("ecmPid");

    m_ecmPidHasBeenSet = true;
  }

  if(jsonValue.ValueExists("nielsenId3Behavior"))
  {
    m_nielsenId3Behavior = M3u8NielsenId3BehaviorMapper::GetM3u8NielsenId3BehaviorForName(jsonValue.GetString("nielsenId3Behavior"));

    m_nielsenId3BehaviorHasBeenSet = true;
  }

  if(jsonValue.ValueExists("patInterval"))
  {
    m_patInterval = jsonValue.GetInteger("patInterval");

    m_patIntervalHasBeenSet = true;
  }

  if(jsonValue.ValueExists("pcrControl"))
  {
    m_pcrControl = M3u8PcrControlMapper::GetM3u8PcrControlForName(jsonValue.GetString("pcrControl"));

    m_pcrControlHasBeenSet = true;
  }

  if(jsonValue.ValueExists("pcrPeriod"))
  {
    m_pcrPeriod = jsonValue.GetInteger("pcrPeriod");

    m_pcrPeriodHasBeenSet = true;
  }

  if(jsonValue.ValueExists("pcrPid"))
  {
    m_pcrPid = jsonValue.GetString("pcrPid");

    m_pcrPidHasBeenSet = true;
  }

  if(jsonValue.ValueExists("pmtInterval"))
  {
    m_pmtInterval = jsonValue.GetInteger("pmtInterval");

    m_pmtIntervalHasBeenSet = true;
  }

  if(jsonValue.ValueExists("pmtPid"))
  {
    m_pmtPid = jsonValue.GetString("pmtPid");

    m_pmtPidHasBeenSet = true;
  }

  if(jsonValue.ValueExists("programNum"))
  {
    m_programNum = jsonValue.GetInteger("programNum");

    m_programNumHasBeenSet = true;
  }

  if(jsonValue.ValueExists("scte35Behavior"))
  {
    m_scte35Behavior = M3u8Scte35BehaviorMapper::GetM3u8Scte35BehaviorForName(jsonValue.GetString("scte35Behavior"));

    m_scte35BehaviorHasBeenSet = true;
  }

  if(jsonValue.ValueExists("scte35Pid"))
  {
    m_scte35Pid = jsonValue.GetString("scte35Pid");

    m_scte35PidHasBeenSet = true;
  }

  if(jsonValue.ValueExists("timedMetadataBehavior"))
  {
    m_timedMetadataBehavior = M3u8TimedMetadataBehaviorMapper::GetM3u8TimedMetadataBehaviorForName(jsonValue.GetString("timedMetadataBehavior"));

    m_timedMetadataBehaviorHasBeenSet = true;
  }

  if(jsonValue.ValueExists("timedMetadataPid"))
  {
    m_timedMetadataPid = jsonValue.GetString("timedMetadataPid");

    m_timedMetadataPidHasBeenSet = true;
  }

  if(jsonValue.ValueExists("transportStreamId"))
  {
    m_transportStreamId = jsonValue.GetInteger("transportStreamId");

    m_transportStreamIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("videoPid"))
  {
    m_videoPid = jsonValue.GetString("videoPid");

    m_videoPidHasBeenSet = true;
  }

  return *this;
}

JsonValue M3u8Settings::Jsonize() const
{
  JsonValue payload;

  if(m_audioFramesPerPesHasBeenSet)
  {
   payload.WithInteger("audioFramesPerPes", m_audioFramesPerPes);

  }

  if(m_audioPidsHasBeenSet)
  {
   payload.WithString("audioPids", m_audioPids);

  }

  if(m_ecmPidHasBeenSet)
  {
   payload.WithString("ecmPid", m_ecmPid);

  }

  if(m_nielsenId3BehaviorHasBeenSet)
  {
   payload.WithString("nielsenId3Behavior", M3u8NielsenId3BehaviorMapper::GetNameForM3u8NielsenId3Behavior(m_nielsenId3Behavior));
  }

  if(m_patIntervalHasBeenSet)
  {
   payload.WithInteger("patInterval", m_patInterval);

  }

  if(m_pcrControlHasBeenSet)
  {
   payload.WithString("pcrControl", M3u8PcrControlMapper::GetNameForM3u8PcrControl(m_pcrControl));
  }

  if(m_pcrPeriodHasBeenSet)
  {
   payload.WithInteger("pcrPeriod", m_pcrPeriod);

  }

  if(m_pcrPidHasBeenSet)
  {
   payload.WithString("pcrPid", m_pcrPid);

  }

  if(m_pmtIntervalHasBeenSet)
  {
   payload.WithInteger("pmtInterval", m_pmtInterval);

  }

  if(m_pmtPidHasBeenSet)
  {
   payload.WithString("pmtPid", m_pmtPid);

  }

  if(m_programNumHasBeenSet)
  {
   payload.WithInteger("programNum", m_programNum);

  }

  if(m_scte35BehaviorHasBeenSet)
  {
   payload.WithString("scte35Behavior", M3u8Scte35BehaviorMapper::GetNameForM3u8Scte35Behavior(m_scte35Behavior));
  }

  if(m_scte35PidHasBeenSet)
  {
   payload.WithString("scte35Pid", m_scte35Pid);

  }

  if(m_timedMetadataBehaviorHasBeenSet)
  {
   payload.WithString("timedMetadataBehavior", M3u8TimedMetadataBehaviorMapper::GetNameForM3u8TimedMetadataBehavior(m_timedMetadataBehavior));
  }

  if(m_timedMetadataPidHasBeenSet)
  {
   payload.WithString("timedMetadataPid", m_timedMetadataPid);

  }

  if(m_transportStreamIdHasBeenSet)
  {
   payload.WithInteger("transportStreamId", m_transportStreamId);

  }

  if(m_videoPidHasBeenSet)
  {
   payload.WithString("videoPid", m_videoPid);

  }

  return payload;
}

} // namespace Model
} // namespace MediaLive
} // namespace Aws
