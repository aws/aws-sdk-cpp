/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lambda/model/ProvisionedPollerConfig.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Lambda
{
namespace Model
{

ProvisionedPollerConfig::ProvisionedPollerConfig(JsonView jsonValue)
{
  *this = jsonValue;
}

ProvisionedPollerConfig& ProvisionedPollerConfig::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("MinimumPollers"))
  {
    m_minimumPollers = jsonValue.GetInteger("MinimumPollers");
    m_minimumPollersHasBeenSet = true;
  }
  if(jsonValue.ValueExists("MaximumPollers"))
  {
    m_maximumPollers = jsonValue.GetInteger("MaximumPollers");
    m_maximumPollersHasBeenSet = true;
  }
  return *this;
}

JsonValue ProvisionedPollerConfig::Jsonize() const
{
  JsonValue payload;

  if(m_minimumPollersHasBeenSet)
  {
   payload.WithInteger("MinimumPollers", m_minimumPollers);

  }

  if(m_maximumPollersHasBeenSet)
  {
   payload.WithInteger("MaximumPollers", m_maximumPollers);

  }

  return payload;
}

} // namespace Model
} // namespace Lambda
} // namespace Aws
