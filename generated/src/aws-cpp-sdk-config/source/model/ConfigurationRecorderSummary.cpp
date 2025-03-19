/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/config/model/ConfigurationRecorderSummary.h>
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

ConfigurationRecorderSummary::ConfigurationRecorderSummary(JsonView jsonValue)
{
  *this = jsonValue;
}

ConfigurationRecorderSummary& ConfigurationRecorderSummary::operator =(JsonView jsonValue)
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
  if(jsonValue.ValueExists("servicePrincipal"))
  {
    m_servicePrincipal = jsonValue.GetString("servicePrincipal");
    m_servicePrincipalHasBeenSet = true;
  }
  if(jsonValue.ValueExists("recordingScope"))
  {
    m_recordingScope = RecordingScopeMapper::GetRecordingScopeForName(jsonValue.GetString("recordingScope"));
    m_recordingScopeHasBeenSet = true;
  }
  return *this;
}

JsonValue ConfigurationRecorderSummary::Jsonize() const
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

  if(m_servicePrincipalHasBeenSet)
  {
   payload.WithString("servicePrincipal", m_servicePrincipal);

  }

  if(m_recordingScopeHasBeenSet)
  {
   payload.WithString("recordingScope", RecordingScopeMapper::GetNameForRecordingScope(m_recordingScope));
  }

  return payload;
}

} // namespace Model
} // namespace ConfigService
} // namespace Aws
