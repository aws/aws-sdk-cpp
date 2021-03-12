/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediatailor/model/Program.h>
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

Program::Program() : 
    m_adBreaksHasBeenSet(false),
    m_arnHasBeenSet(false),
    m_channelNameHasBeenSet(false),
    m_creationTimeHasBeenSet(false),
    m_lastModifiedTimeHasBeenSet(false),
    m_programNameHasBeenSet(false),
    m_sourceLocationNameHasBeenSet(false),
    m_vodSourceNameHasBeenSet(false)
{
}

Program::Program(JsonView jsonValue) : 
    m_adBreaksHasBeenSet(false),
    m_arnHasBeenSet(false),
    m_channelNameHasBeenSet(false),
    m_creationTimeHasBeenSet(false),
    m_lastModifiedTimeHasBeenSet(false),
    m_programNameHasBeenSet(false),
    m_sourceLocationNameHasBeenSet(false),
    m_vodSourceNameHasBeenSet(false)
{
  *this = jsonValue;
}

Program& Program::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("AdBreaks"))
  {
    Array<JsonView> adBreaksJsonList = jsonValue.GetArray("AdBreaks");
    for(unsigned adBreaksIndex = 0; adBreaksIndex < adBreaksJsonList.GetLength(); ++adBreaksIndex)
    {
      m_adBreaks.push_back(adBreaksJsonList[adBreaksIndex].AsObject());
    }
    m_adBreaksHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Arn"))
  {
    m_arn = jsonValue.GetString("Arn");

    m_arnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ChannelName"))
  {
    m_channelName = jsonValue.GetString("ChannelName");

    m_channelNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CreationTime"))
  {
    m_creationTime = jsonValue.GetDouble("CreationTime");

    m_creationTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LastModifiedTime"))
  {
    m_lastModifiedTime = jsonValue.GetDouble("LastModifiedTime");

    m_lastModifiedTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ProgramName"))
  {
    m_programName = jsonValue.GetString("ProgramName");

    m_programNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SourceLocationName"))
  {
    m_sourceLocationName = jsonValue.GetString("SourceLocationName");

    m_sourceLocationNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("VodSourceName"))
  {
    m_vodSourceName = jsonValue.GetString("VodSourceName");

    m_vodSourceNameHasBeenSet = true;
  }

  return *this;
}

JsonValue Program::Jsonize() const
{
  JsonValue payload;

  if(m_adBreaksHasBeenSet)
  {
   Array<JsonValue> adBreaksJsonList(m_adBreaks.size());
   for(unsigned adBreaksIndex = 0; adBreaksIndex < adBreaksJsonList.GetLength(); ++adBreaksIndex)
   {
     adBreaksJsonList[adBreaksIndex].AsObject(m_adBreaks[adBreaksIndex].Jsonize());
   }
   payload.WithArray("AdBreaks", std::move(adBreaksJsonList));

  }

  if(m_arnHasBeenSet)
  {
   payload.WithString("Arn", m_arn);

  }

  if(m_channelNameHasBeenSet)
  {
   payload.WithString("ChannelName", m_channelName);

  }

  if(m_creationTimeHasBeenSet)
  {
   payload.WithDouble("CreationTime", m_creationTime.SecondsWithMSPrecision());
  }

  if(m_lastModifiedTimeHasBeenSet)
  {
   payload.WithDouble("LastModifiedTime", m_lastModifiedTime.SecondsWithMSPrecision());
  }

  if(m_programNameHasBeenSet)
  {
   payload.WithString("ProgramName", m_programName);

  }

  if(m_sourceLocationNameHasBeenSet)
  {
   payload.WithString("SourceLocationName", m_sourceLocationName);

  }

  if(m_vodSourceNameHasBeenSet)
  {
   payload.WithString("VodSourceName", m_vodSourceName);

  }

  return payload;
}

} // namespace Model
} // namespace MediaTailor
} // namespace Aws
