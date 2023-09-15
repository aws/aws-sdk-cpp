/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/fsx/model/ReleaseConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace FSx
{
namespace Model
{

ReleaseConfiguration::ReleaseConfiguration() : 
    m_durationSinceLastAccessHasBeenSet(false)
{
}

ReleaseConfiguration::ReleaseConfiguration(JsonView jsonValue) : 
    m_durationSinceLastAccessHasBeenSet(false)
{
  *this = jsonValue;
}

ReleaseConfiguration& ReleaseConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("DurationSinceLastAccess"))
  {
    m_durationSinceLastAccess = jsonValue.GetObject("DurationSinceLastAccess");

    m_durationSinceLastAccessHasBeenSet = true;
  }

  return *this;
}

JsonValue ReleaseConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_durationSinceLastAccessHasBeenSet)
  {
   payload.WithObject("DurationSinceLastAccess", m_durationSinceLastAccess.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace FSx
} // namespace Aws
