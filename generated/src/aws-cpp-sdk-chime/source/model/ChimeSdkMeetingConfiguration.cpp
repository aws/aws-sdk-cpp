/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/chime/model/ChimeSdkMeetingConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Chime
{
namespace Model
{

ChimeSdkMeetingConfiguration::ChimeSdkMeetingConfiguration() : 
    m_sourceConfigurationHasBeenSet(false),
    m_artifactsConfigurationHasBeenSet(false)
{
}

ChimeSdkMeetingConfiguration::ChimeSdkMeetingConfiguration(JsonView jsonValue) : 
    m_sourceConfigurationHasBeenSet(false),
    m_artifactsConfigurationHasBeenSet(false)
{
  *this = jsonValue;
}

ChimeSdkMeetingConfiguration& ChimeSdkMeetingConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("SourceConfiguration"))
  {
    m_sourceConfiguration = jsonValue.GetObject("SourceConfiguration");

    m_sourceConfigurationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ArtifactsConfiguration"))
  {
    m_artifactsConfiguration = jsonValue.GetObject("ArtifactsConfiguration");

    m_artifactsConfigurationHasBeenSet = true;
  }

  return *this;
}

JsonValue ChimeSdkMeetingConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_sourceConfigurationHasBeenSet)
  {
   payload.WithObject("SourceConfiguration", m_sourceConfiguration.Jsonize());

  }

  if(m_artifactsConfigurationHasBeenSet)
  {
   payload.WithObject("ArtifactsConfiguration", m_artifactsConfiguration.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace Chime
} // namespace Aws
