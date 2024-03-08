/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ivs-realtime/model/RecordingConfiguration.h>
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

RecordingConfiguration::RecordingConfiguration() : 
    m_format(RecordingConfigurationFormat::NOT_SET),
    m_formatHasBeenSet(false)
{
}

RecordingConfiguration::RecordingConfiguration(JsonView jsonValue) : 
    m_format(RecordingConfigurationFormat::NOT_SET),
    m_formatHasBeenSet(false)
{
  *this = jsonValue;
}

RecordingConfiguration& RecordingConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("format"))
  {
    m_format = RecordingConfigurationFormatMapper::GetRecordingConfigurationFormatForName(jsonValue.GetString("format"));

    m_formatHasBeenSet = true;
  }

  return *this;
}

JsonValue RecordingConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_formatHasBeenSet)
  {
   payload.WithString("format", RecordingConfigurationFormatMapper::GetNameForRecordingConfigurationFormat(m_format));
  }

  return payload;
}

} // namespace Model
} // namespace ivsrealtime
} // namespace Aws
