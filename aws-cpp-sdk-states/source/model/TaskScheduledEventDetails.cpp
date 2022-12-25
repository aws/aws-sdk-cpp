/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/states/model/TaskScheduledEventDetails.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SFN
{
namespace Model
{

TaskScheduledEventDetails::TaskScheduledEventDetails() : 
    m_resourceTypeHasBeenSet(false),
    m_resourceHasBeenSet(false),
    m_regionHasBeenSet(false),
    m_parametersHasBeenSet(false),
    m_timeoutInSeconds(0),
    m_timeoutInSecondsHasBeenSet(false),
    m_heartbeatInSeconds(0),
    m_heartbeatInSecondsHasBeenSet(false),
    m_taskCredentialsHasBeenSet(false)
{
}

TaskScheduledEventDetails::TaskScheduledEventDetails(JsonView jsonValue) : 
    m_resourceTypeHasBeenSet(false),
    m_resourceHasBeenSet(false),
    m_regionHasBeenSet(false),
    m_parametersHasBeenSet(false),
    m_timeoutInSeconds(0),
    m_timeoutInSecondsHasBeenSet(false),
    m_heartbeatInSeconds(0),
    m_heartbeatInSecondsHasBeenSet(false),
    m_taskCredentialsHasBeenSet(false)
{
  *this = jsonValue;
}

TaskScheduledEventDetails& TaskScheduledEventDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("resourceType"))
  {
    m_resourceType = jsonValue.GetString("resourceType");

    m_resourceTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("resource"))
  {
    m_resource = jsonValue.GetString("resource");

    m_resourceHasBeenSet = true;
  }

  if(jsonValue.ValueExists("region"))
  {
    m_region = jsonValue.GetString("region");

    m_regionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("parameters"))
  {
    m_parameters = jsonValue.GetString("parameters");

    m_parametersHasBeenSet = true;
  }

  if(jsonValue.ValueExists("timeoutInSeconds"))
  {
    m_timeoutInSeconds = jsonValue.GetInt64("timeoutInSeconds");

    m_timeoutInSecondsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("heartbeatInSeconds"))
  {
    m_heartbeatInSeconds = jsonValue.GetInt64("heartbeatInSeconds");

    m_heartbeatInSecondsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("taskCredentials"))
  {
    m_taskCredentials = jsonValue.GetObject("taskCredentials");

    m_taskCredentialsHasBeenSet = true;
  }

  return *this;
}

JsonValue TaskScheduledEventDetails::Jsonize() const
{
  JsonValue payload;

  if(m_resourceTypeHasBeenSet)
  {
   payload.WithString("resourceType", m_resourceType);

  }

  if(m_resourceHasBeenSet)
  {
   payload.WithString("resource", m_resource);

  }

  if(m_regionHasBeenSet)
  {
   payload.WithString("region", m_region);

  }

  if(m_parametersHasBeenSet)
  {
   payload.WithString("parameters", m_parameters);

  }

  if(m_timeoutInSecondsHasBeenSet)
  {
   payload.WithInt64("timeoutInSeconds", m_timeoutInSeconds);

  }

  if(m_heartbeatInSecondsHasBeenSet)
  {
   payload.WithInt64("heartbeatInSeconds", m_heartbeatInSeconds);

  }

  if(m_taskCredentialsHasBeenSet)
  {
   payload.WithObject("taskCredentials", m_taskCredentials.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace SFN
} // namespace Aws
