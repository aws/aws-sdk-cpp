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

#include <aws/lightsail/model/LoadBalancerTlsCertificateRenewalSummary.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Lightsail
{
namespace Model
{

LoadBalancerTlsCertificateRenewalSummary::LoadBalancerTlsCertificateRenewalSummary() : 
    m_renewalStatus(LoadBalancerTlsCertificateRenewalStatus::NOT_SET),
    m_renewalStatusHasBeenSet(false),
    m_domainValidationOptionsHasBeenSet(false)
{
}

LoadBalancerTlsCertificateRenewalSummary::LoadBalancerTlsCertificateRenewalSummary(const JsonValue& jsonValue) : 
    m_renewalStatus(LoadBalancerTlsCertificateRenewalStatus::NOT_SET),
    m_renewalStatusHasBeenSet(false),
    m_domainValidationOptionsHasBeenSet(false)
{
  *this = jsonValue;
}

LoadBalancerTlsCertificateRenewalSummary& LoadBalancerTlsCertificateRenewalSummary::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("renewalStatus"))
  {
    m_renewalStatus = LoadBalancerTlsCertificateRenewalStatusMapper::GetLoadBalancerTlsCertificateRenewalStatusForName(jsonValue.GetString("renewalStatus"));

    m_renewalStatusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("domainValidationOptions"))
  {
    Array<JsonValue> domainValidationOptionsJsonList = jsonValue.GetArray("domainValidationOptions");
    for(unsigned domainValidationOptionsIndex = 0; domainValidationOptionsIndex < domainValidationOptionsJsonList.GetLength(); ++domainValidationOptionsIndex)
    {
      m_domainValidationOptions.push_back(domainValidationOptionsJsonList[domainValidationOptionsIndex].AsObject());
    }
    m_domainValidationOptionsHasBeenSet = true;
  }

  return *this;
}

JsonValue LoadBalancerTlsCertificateRenewalSummary::Jsonize() const
{
  JsonValue payload;

  if(m_renewalStatusHasBeenSet)
  {
   payload.WithString("renewalStatus", LoadBalancerTlsCertificateRenewalStatusMapper::GetNameForLoadBalancerTlsCertificateRenewalStatus(m_renewalStatus));
  }

  if(m_domainValidationOptionsHasBeenSet)
  {
   Array<JsonValue> domainValidationOptionsJsonList(m_domainValidationOptions.size());
   for(unsigned domainValidationOptionsIndex = 0; domainValidationOptionsIndex < domainValidationOptionsJsonList.GetLength(); ++domainValidationOptionsIndex)
   {
     domainValidationOptionsJsonList[domainValidationOptionsIndex].AsObject(m_domainValidationOptions[domainValidationOptionsIndex].Jsonize());
   }
   payload.WithArray("domainValidationOptions", std::move(domainValidationOptionsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace Lightsail
} // namespace Aws
