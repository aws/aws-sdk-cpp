/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/guardduty/model/AwsApiCallAction.h>
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

AwsApiCallAction::AwsApiCallAction() : 
    m_apiHasBeenSet(false),
    m_callerTypeHasBeenSet(false),
    m_domainDetailsHasBeenSet(false),
    m_errorCodeHasBeenSet(false),
    m_remoteIpDetailsHasBeenSet(false),
    m_serviceNameHasBeenSet(false)
{
}

AwsApiCallAction::AwsApiCallAction(JsonView jsonValue) : 
    m_apiHasBeenSet(false),
    m_callerTypeHasBeenSet(false),
    m_domainDetailsHasBeenSet(false),
    m_errorCodeHasBeenSet(false),
    m_remoteIpDetailsHasBeenSet(false),
    m_serviceNameHasBeenSet(false)
{
  *this = jsonValue;
}

AwsApiCallAction& AwsApiCallAction::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("api"))
  {
    m_api = jsonValue.GetString("api");

    m_apiHasBeenSet = true;
  }

  if(jsonValue.ValueExists("callerType"))
  {
    m_callerType = jsonValue.GetString("callerType");

    m_callerTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("domainDetails"))
  {
    m_domainDetails = jsonValue.GetObject("domainDetails");

    m_domainDetailsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("errorCode"))
  {
    m_errorCode = jsonValue.GetString("errorCode");

    m_errorCodeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("remoteIpDetails"))
  {
    m_remoteIpDetails = jsonValue.GetObject("remoteIpDetails");

    m_remoteIpDetailsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("serviceName"))
  {
    m_serviceName = jsonValue.GetString("serviceName");

    m_serviceNameHasBeenSet = true;
  }

  return *this;
}

JsonValue AwsApiCallAction::Jsonize() const
{
  JsonValue payload;

  if(m_apiHasBeenSet)
  {
   payload.WithString("api", m_api);

  }

  if(m_callerTypeHasBeenSet)
  {
   payload.WithString("callerType", m_callerType);

  }

  if(m_domainDetailsHasBeenSet)
  {
   payload.WithObject("domainDetails", m_domainDetails.Jsonize());

  }

  if(m_errorCodeHasBeenSet)
  {
   payload.WithString("errorCode", m_errorCode);

  }

  if(m_remoteIpDetailsHasBeenSet)
  {
   payload.WithObject("remoteIpDetails", m_remoteIpDetails.Jsonize());

  }

  if(m_serviceNameHasBeenSet)
  {
   payload.WithString("serviceName", m_serviceName);

  }

  return payload;
}

} // namespace Model
} // namespace GuardDuty
} // namespace Aws
