/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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

LoadBalancerTlsCertificateRenewalSummary::LoadBalancerTlsCertificateRenewalSummary(JsonView jsonValue) : 
    m_renewalStatus(LoadBalancerTlsCertificateRenewalStatus::NOT_SET),
    m_renewalStatusHasBeenSet(false),
    m_domainValidationOptionsHasBeenSet(false)
{
  *this = jsonValue;
}

LoadBalancerTlsCertificateRenewalSummary& LoadBalancerTlsCertificateRenewalSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("renewalStatus"))
  {
    m_renewalStatus = LoadBalancerTlsCertificateRenewalStatusMapper::GetLoadBalancerTlsCertificateRenewalStatusForName(jsonValue.GetString("renewalStatus"));

    m_renewalStatusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("domainValidationOptions"))
  {
    Aws::Utils::Array<JsonView> domainValidationOptionsJsonList = jsonValue.GetArray("domainValidationOptions");
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
   Aws::Utils::Array<JsonValue> domainValidationOptionsJsonList(m_domainValidationOptions.size());
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
