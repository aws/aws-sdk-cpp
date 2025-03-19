/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/emr-serverless/model/InteractiveConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace EMRServerless
{
namespace Model
{

InteractiveConfiguration::InteractiveConfiguration(JsonView jsonValue)
{
  *this = jsonValue;
}

InteractiveConfiguration& InteractiveConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("studioEnabled"))
  {
    m_studioEnabled = jsonValue.GetBool("studioEnabled");
    m_studioEnabledHasBeenSet = true;
  }
  if(jsonValue.ValueExists("livyEndpointEnabled"))
  {
    m_livyEndpointEnabled = jsonValue.GetBool("livyEndpointEnabled");
    m_livyEndpointEnabledHasBeenSet = true;
  }
  return *this;
}

JsonValue InteractiveConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_studioEnabledHasBeenSet)
  {
   payload.WithBool("studioEnabled", m_studioEnabled);

  }

  if(m_livyEndpointEnabledHasBeenSet)
  {
   payload.WithBool("livyEndpointEnabled", m_livyEndpointEnabled);

  }

  return payload;
}

} // namespace Model
} // namespace EMRServerless
} // namespace Aws
