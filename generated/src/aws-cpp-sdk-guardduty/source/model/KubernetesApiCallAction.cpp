/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/guardduty/model/KubernetesApiCallAction.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace GuardDuty
{
namespace Model
{

KubernetesApiCallAction::KubernetesApiCallAction() : 
    m_requestUriHasBeenSet(false),
    m_verbHasBeenSet(false),
    m_sourceIpsHasBeenSet(false),
    m_userAgentHasBeenSet(false),
    m_remoteIpDetailsHasBeenSet(false),
    m_statusCode(0),
    m_statusCodeHasBeenSet(false),
    m_parametersHasBeenSet(false)
{
}

KubernetesApiCallAction::KubernetesApiCallAction(JsonView jsonValue) : 
    m_requestUriHasBeenSet(false),
    m_verbHasBeenSet(false),
    m_sourceIpsHasBeenSet(false),
    m_userAgentHasBeenSet(false),
    m_remoteIpDetailsHasBeenSet(false),
    m_statusCode(0),
    m_statusCodeHasBeenSet(false),
    m_parametersHasBeenSet(false)
{
  *this = jsonValue;
}

KubernetesApiCallAction& KubernetesApiCallAction::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("requestUri"))
  {
    m_requestUri = jsonValue.GetString("requestUri");

    m_requestUriHasBeenSet = true;
  }

  if(jsonValue.ValueExists("verb"))
  {
    m_verb = jsonValue.GetString("verb");

    m_verbHasBeenSet = true;
  }

  if(jsonValue.ValueExists("sourceIps"))
  {
    Aws::Utils::Array<JsonView> sourceIpsJsonList = jsonValue.GetArray("sourceIps");
    for(unsigned sourceIpsIndex = 0; sourceIpsIndex < sourceIpsJsonList.GetLength(); ++sourceIpsIndex)
    {
      m_sourceIps.push_back(sourceIpsJsonList[sourceIpsIndex].AsString());
    }
    m_sourceIpsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("userAgent"))
  {
    m_userAgent = jsonValue.GetString("userAgent");

    m_userAgentHasBeenSet = true;
  }

  if(jsonValue.ValueExists("remoteIpDetails"))
  {
    m_remoteIpDetails = jsonValue.GetObject("remoteIpDetails");

    m_remoteIpDetailsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("statusCode"))
  {
    m_statusCode = jsonValue.GetInteger("statusCode");

    m_statusCodeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("parameters"))
  {
    m_parameters = jsonValue.GetString("parameters");

    m_parametersHasBeenSet = true;
  }

  return *this;
}

JsonValue KubernetesApiCallAction::Jsonize() const
{
  JsonValue payload;

  if(m_requestUriHasBeenSet)
  {
   payload.WithString("requestUri", m_requestUri);

  }

  if(m_verbHasBeenSet)
  {
   payload.WithString("verb", m_verb);

  }

  if(m_sourceIpsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> sourceIpsJsonList(m_sourceIps.size());
   for(unsigned sourceIpsIndex = 0; sourceIpsIndex < sourceIpsJsonList.GetLength(); ++sourceIpsIndex)
   {
     sourceIpsJsonList[sourceIpsIndex].AsString(m_sourceIps[sourceIpsIndex]);
   }
   payload.WithArray("sourceIps", std::move(sourceIpsJsonList));

  }

  if(m_userAgentHasBeenSet)
  {
   payload.WithString("userAgent", m_userAgent);

  }

  if(m_remoteIpDetailsHasBeenSet)
  {
   payload.WithObject("remoteIpDetails", m_remoteIpDetails.Jsonize());

  }

  if(m_statusCodeHasBeenSet)
  {
   payload.WithInteger("statusCode", m_statusCode);

  }

  if(m_parametersHasBeenSet)
  {
   payload.WithString("parameters", m_parameters);

  }

  return payload;
}

} // namespace Model
} // namespace GuardDuty
} // namespace Aws
