/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/config/model/ConfigurationRecorder.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ConfigService
{
namespace Model
{

ConfigurationRecorder::ConfigurationRecorder(JsonView jsonValue)
{
  *this = jsonValue;
}

ConfigurationRecorder& ConfigurationRecorder::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("arn"))
  {
    m_arn = jsonValue.GetString("arn");
    m_arnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");
    m_nameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("roleARN"))
  {
    m_roleARN = jsonValue.GetString("roleARN");
    m_roleARNHasBeenSet = true;
  }
  if(jsonValue.ValueExists("recordingGroup"))
  {
    m_recordingGroup = jsonValue.GetObject("recordingGroup");
    m_recordingGroupHasBeenSet = true;
  }
  if(jsonValue.ValueExists("recordingMode"))
  {
    m_recordingMode = jsonValue.GetObject("recordingMode");
    m_recordingModeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("recordingScope"))
  {
    m_recordingScope = RecordingScopeMapper::GetRecordingScopeForName(jsonValue.GetString("recordingScope"));
    m_recordingScopeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("servicePrincipal"))
  {
    m_servicePrincipal = jsonValue.GetString("servicePrincipal");
    m_servicePrincipalHasBeenSet = true;
  }
  return *this;
}

JsonValue ConfigurationRecorder::Jsonize() const
{
  JsonValue payload;

  if(m_arnHasBeenSet)
  {
   payload.WithString("arn", m_arn);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_roleARNHasBeenSet)
  {
   payload.WithString("roleARN", m_roleARN);

  }

  if(m_recordingGroupHasBeenSet)
  {
   payload.WithObject("recordingGroup", m_recordingGroup.Jsonize());

  }

  if(m_recordingModeHasBeenSet)
  {
   payload.WithObject("recordingMode", m_recordingMode.Jsonize());

  }

  if(m_recordingScopeHasBeenSet)
  {
   payload.WithString("recordingScope", RecordingScopeMapper::GetNameForRecordingScope(m_recordingScope));
  }

  if(m_servicePrincipalHasBeenSet)
  {
   payload.WithString("servicePrincipal", m_servicePrincipal);

  }

  return payload;
}

} // namespace Model
} // namespace ConfigService
} // namespace Aws
