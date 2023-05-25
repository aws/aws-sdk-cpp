/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/eventbridge/model/ApiDestination.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace EventBridge
{
namespace Model
{

ApiDestination::ApiDestination() : 
    m_apiDestinationArnHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_apiDestinationState(ApiDestinationState::NOT_SET),
    m_apiDestinationStateHasBeenSet(false),
    m_connectionArnHasBeenSet(false),
    m_invocationEndpointHasBeenSet(false),
    m_httpMethod(ApiDestinationHttpMethod::NOT_SET),
    m_httpMethodHasBeenSet(false),
    m_invocationRateLimitPerSecond(0),
    m_invocationRateLimitPerSecondHasBeenSet(false),
    m_creationTimeHasBeenSet(false),
    m_lastModifiedTimeHasBeenSet(false)
{
}

ApiDestination::ApiDestination(JsonView jsonValue) : 
    m_apiDestinationArnHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_apiDestinationState(ApiDestinationState::NOT_SET),
    m_apiDestinationStateHasBeenSet(false),
    m_connectionArnHasBeenSet(false),
    m_invocationEndpointHasBeenSet(false),
    m_httpMethod(ApiDestinationHttpMethod::NOT_SET),
    m_httpMethodHasBeenSet(false),
    m_invocationRateLimitPerSecond(0),
    m_invocationRateLimitPerSecondHasBeenSet(false),
    m_creationTimeHasBeenSet(false),
    m_lastModifiedTimeHasBeenSet(false)
{
  *this = jsonValue;
}

ApiDestination& ApiDestination::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ApiDestinationArn"))
  {
    m_apiDestinationArn = jsonValue.GetString("ApiDestinationArn");

    m_apiDestinationArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ApiDestinationState"))
  {
    m_apiDestinationState = ApiDestinationStateMapper::GetApiDestinationStateForName(jsonValue.GetString("ApiDestinationState"));

    m_apiDestinationStateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ConnectionArn"))
  {
    m_connectionArn = jsonValue.GetString("ConnectionArn");

    m_connectionArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("InvocationEndpoint"))
  {
    m_invocationEndpoint = jsonValue.GetString("InvocationEndpoint");

    m_invocationEndpointHasBeenSet = true;
  }

  if(jsonValue.ValueExists("HttpMethod"))
  {
    m_httpMethod = ApiDestinationHttpMethodMapper::GetApiDestinationHttpMethodForName(jsonValue.GetString("HttpMethod"));

    m_httpMethodHasBeenSet = true;
  }

  if(jsonValue.ValueExists("InvocationRateLimitPerSecond"))
  {
    m_invocationRateLimitPerSecond = jsonValue.GetInteger("InvocationRateLimitPerSecond");

    m_invocationRateLimitPerSecondHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CreationTime"))
  {
    m_creationTime = jsonValue.GetDouble("CreationTime");

    m_creationTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LastModifiedTime"))
  {
    m_lastModifiedTime = jsonValue.GetDouble("LastModifiedTime");

    m_lastModifiedTimeHasBeenSet = true;
  }

  return *this;
}

JsonValue ApiDestination::Jsonize() const
{
  JsonValue payload;

  if(m_apiDestinationArnHasBeenSet)
  {
   payload.WithString("ApiDestinationArn", m_apiDestinationArn);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_apiDestinationStateHasBeenSet)
  {
   payload.WithString("ApiDestinationState", ApiDestinationStateMapper::GetNameForApiDestinationState(m_apiDestinationState));
  }

  if(m_connectionArnHasBeenSet)
  {
   payload.WithString("ConnectionArn", m_connectionArn);

  }

  if(m_invocationEndpointHasBeenSet)
  {
   payload.WithString("InvocationEndpoint", m_invocationEndpoint);

  }

  if(m_httpMethodHasBeenSet)
  {
   payload.WithString("HttpMethod", ApiDestinationHttpMethodMapper::GetNameForApiDestinationHttpMethod(m_httpMethod));
  }

  if(m_invocationRateLimitPerSecondHasBeenSet)
  {
   payload.WithInteger("InvocationRateLimitPerSecond", m_invocationRateLimitPerSecond);

  }

  if(m_creationTimeHasBeenSet)
  {
   payload.WithDouble("CreationTime", m_creationTime.SecondsWithMSPrecision());
  }

  if(m_lastModifiedTimeHasBeenSet)
  {
   payload.WithDouble("LastModifiedTime", m_lastModifiedTime.SecondsWithMSPrecision());
  }

  return payload;
}

} // namespace Model
} // namespace EventBridge
} // namespace Aws
