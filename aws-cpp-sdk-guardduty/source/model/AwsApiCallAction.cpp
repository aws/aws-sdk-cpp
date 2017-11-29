/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
    m_remoteIpDetailsHasBeenSet(false),
    m_serviceNameHasBeenSet(false)
{
}

AwsApiCallAction::AwsApiCallAction(const JsonValue& jsonValue) : 
    m_apiHasBeenSet(false),
    m_callerTypeHasBeenSet(false),
    m_domainDetailsHasBeenSet(false),
    m_remoteIpDetailsHasBeenSet(false),
    m_serviceNameHasBeenSet(false)
{
  *this = jsonValue;
}

AwsApiCallAction& AwsApiCallAction::operator =(const JsonValue& jsonValue)
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
