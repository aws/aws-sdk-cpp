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

LoadBalancerTlsCertificateDomainValidationOption::LoadBalancerTlsCertificateDomainValidationOption(const JsonValue& jsonValue) : 
    m_domainNameHasBeenSet(false),
    m_validationStatus(LoadBalancerTlsCertificateDomainStatus::NOT_SET),
    m_validationStatusHasBeenSet(false)
{
  *this = jsonValue;
}

LoadBalancerTlsCertificateDomainValidationOption& LoadBalancerTlsCertificateDomainValidationOption::operator =(const JsonValue& jsonValue)
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
