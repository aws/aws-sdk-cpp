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

ImageTestsConfiguration::ImageTestsConfiguration(JsonView jsonValue)
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
