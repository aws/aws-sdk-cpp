/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/imagebuilder/model/ImageTestsConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace imagebuilder
{
namespace Model
{

ImageTestsConfiguration::ImageTestsConfiguration() : 
    m_imageTestsEnabled(false),
    m_imageTestsEnabledHasBeenSet(false),
    m_timeoutMinutes(0),
    m_timeoutMinutesHasBeenSet(false)
{
}

ImageTestsConfiguration::ImageTestsConfiguration(JsonView jsonValue) : 
    m_imageTestsEnabled(false),
    m_imageTestsEnabledHasBeenSet(false),
    m_timeoutMinutes(0),
    m_timeoutMinutesHasBeenSet(false)
{
  *this = jsonValue;
}

ImageTestsConfiguration& ImageTestsConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("imageTestsEnabled"))
  {
    m_imageTestsEnabled = jsonValue.GetBool("imageTestsEnabled");

    m_imageTestsEnabledHasBeenSet = true;
  }

  if(jsonValue.ValueExists("timeoutMinutes"))
  {
    m_timeoutMinutes = jsonValue.GetInteger("timeoutMinutes");

    m_timeoutMinutesHasBeenSet = true;
  }

  return *this;
}

JsonValue ImageTestsConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_imageTestsEnabledHasBeenSet)
  {
   payload.WithBool("imageTestsEnabled", m_imageTestsEnabled);

  }

  if(m_timeoutMinutesHasBeenSet)
  {
   payload.WithInteger("timeoutMinutes", m_timeoutMinutes);

  }

  return payload;
}

} // namespace Model
} // namespace imagebuilder
} // namespace Aws
