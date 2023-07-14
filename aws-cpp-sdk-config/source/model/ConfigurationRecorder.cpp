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

ConfigurationRecorder::ConfigurationRecorder() : 
    m_nameHasBeenSet(false),
    m_roleARNHasBeenSet(false),
    m_recordingGroupHasBeenSet(false)
{
}

ConfigurationRecorder::ConfigurationRecorder(JsonView jsonValue) : 
    m_nameHasBeenSet(false),
    m_roleARNHasBeenSet(false),
    m_recordingGroupHasBeenSet(false)
{
  *this = jsonValue;
}

ConfigurationRecorder& ConfigurationRecorder::operator =(JsonView jsonValue)
{
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

  return *this;
}

JsonValue ConfigurationRecorder::Jsonize() const
{
  JsonValue payload;

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

  return payload;
}

} // namespace Model
} // namespace ConfigService
} // namespace Aws
