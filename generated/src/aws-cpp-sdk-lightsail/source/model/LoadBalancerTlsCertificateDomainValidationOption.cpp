/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lightsail/model/LoadBalancerTlsCertificateDomainValidationOption.h>
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

LoadBalancerTlsCertificateDomainValidationOption::LoadBalancerTlsCertificateDomainValidationOption() : 
    m_domainNameHasBeenSet(false),
    m_validationStatus(LoadBalancerTlsCertificateDomainStatus::NOT_SET),
    m_validationStatusHasBeenSet(false)
{
}

LoadBalancerTlsCertificateDomainValidationOption::LoadBalancerTlsCertificateDomainValidationOption(JsonView jsonValue) : 
    m_domainNameHasBeenSet(false),
    m_validationStatus(LoadBalancerTlsCertificateDomainStatus::NOT_SET),
    m_validationStatusHasBeenSet(false)
{
  *this = jsonValue;
}

LoadBalancerTlsCertificateDomainValidationOption& LoadBalancerTlsCertificateDomainValidationOption::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("domainName"))
  {
    m_domainName = jsonValue.GetString("domainName");

    m_domainNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("validationStatus"))
  {
    m_validationStatus = LoadBalancerTlsCertificateDomainStatusMapper::GetLoadBalancerTlsCertificateDomainStatusForName(jsonValue.GetString("validationStatus"));

    m_validationStatusHasBeenSet = true;
  }

  return *this;
}

JsonValue LoadBalancerTlsCertificateDomainValidationOption::Jsonize() const
{
  JsonValue payload;

  if(m_domainNameHasBeenSet)
  {
   payload.WithString("domainName", m_domainName);

  }

  if(m_validationStatusHasBeenSet)
  {
   payload.WithString("validationStatus", LoadBalancerTlsCertificateDomainStatusMapper::GetNameForLoadBalancerTlsCertificateDomainStatus(m_validationStatus));
  }

  return payload;
}

} // namespace Model
} // namespace Lightsail
} // namespace Aws
