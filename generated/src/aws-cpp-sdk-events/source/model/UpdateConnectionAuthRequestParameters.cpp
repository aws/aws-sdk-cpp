/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/events/model/UpdateConnectionAuthRequestParameters.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CloudWatchEvents
{
namespace Model
{

UpdateConnectionAuthRequestParameters::UpdateConnectionAuthRequestParameters() : 
    m_basicAuthParametersHasBeenSet(false),
    m_oAuthParametersHasBeenSet(false),
    m_apiKeyAuthParametersHasBeenSet(false),
    m_invocationHttpParametersHasBeenSet(false)
{
}

UpdateConnectionAuthRequestParameters::UpdateConnectionAuthRequestParameters(JsonView jsonValue) : 
    m_basicAuthParametersHasBeenSet(false),
    m_oAuthParametersHasBeenSet(false),
    m_apiKeyAuthParametersHasBeenSet(false),
    m_invocationHttpParametersHasBeenSet(false)
{
  *this = jsonValue;
}

UpdateConnectionAuthRequestParameters& UpdateConnectionAuthRequestParameters::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("BasicAuthParameters"))
  {
    m_basicAuthParameters = jsonValue.GetObject("BasicAuthParameters");

    m_basicAuthParametersHasBeenSet = true;
  }

  if(jsonValue.ValueExists("OAuthParameters"))
  {
    m_oAuthParameters = jsonValue.GetObject("OAuthParameters");

    m_oAuthParametersHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ApiKeyAuthParameters"))
  {
    m_apiKeyAuthParameters = jsonValue.GetObject("ApiKeyAuthParameters");

    m_apiKeyAuthParametersHasBeenSet = true;
  }

  if(jsonValue.ValueExists("InvocationHttpParameters"))
  {
    m_invocationHttpParameters = jsonValue.GetObject("InvocationHttpParameters");

    m_invocationHttpParametersHasBeenSet = true;
  }

  return *this;
}

JsonValue UpdateConnectionAuthRequestParameters::Jsonize() const
{
  JsonValue payload;

  if(m_basicAuthParametersHasBeenSet)
  {
   payload.WithObject("BasicAuthParameters", m_basicAuthParameters.Jsonize());

  }

  if(m_oAuthParametersHasBeenSet)
  {
   payload.WithObject("OAuthParameters", m_oAuthParameters.Jsonize());

  }

  if(m_apiKeyAuthParametersHasBeenSet)
  {
   payload.WithObject("ApiKeyAuthParameters", m_apiKeyAuthParameters.Jsonize());

  }

  if(m_invocationHttpParametersHasBeenSet)
  {
   payload.WithObject("InvocationHttpParameters", m_invocationHttpParameters.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace CloudWatchEvents
} // namespace Aws
