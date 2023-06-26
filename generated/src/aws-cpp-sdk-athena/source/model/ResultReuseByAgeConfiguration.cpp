/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/athena/model/ResultReuseByAgeConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Athena
{
namespace Model
{

ResultReuseByAgeConfiguration::ResultReuseByAgeConfiguration() : 
    m_enabled(false),
    m_enabledHasBeenSet(false),
    m_maxAgeInMinutes(0),
    m_maxAgeInMinutesHasBeenSet(false)
{
}

ResultReuseByAgeConfiguration::ResultReuseByAgeConfiguration(JsonView jsonValue) : 
    m_enabled(false),
    m_enabledHasBeenSet(false),
    m_maxAgeInMinutes(0),
    m_maxAgeInMinutesHasBeenSet(false)
{
  *this = jsonValue;
}

ResultReuseByAgeConfiguration& ResultReuseByAgeConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Enabled"))
  {
    m_enabled = jsonValue.GetBool("Enabled");

    m_enabledHasBeenSet = true;
  }

  if(jsonValue.ValueExists("MaxAgeInMinutes"))
  {
    m_maxAgeInMinutes = jsonValue.GetInteger("MaxAgeInMinutes");

    m_maxAgeInMinutesHasBeenSet = true;
  }

  return *this;
}

JsonValue ResultReuseByAgeConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_enabledHasBeenSet)
  {
   payload.WithBool("Enabled", m_enabled);

  }

  if(m_maxAgeInMinutesHasBeenSet)
  {
   payload.WithInteger("MaxAgeInMinutes", m_maxAgeInMinutes);

  }

  return payload;
}

} // namespace Model
} // namespace Athena
} // namespace Aws
