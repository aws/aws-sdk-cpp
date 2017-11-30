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

#include <aws/lightsail/model/LoadBalancerTlsCertificateDomainValidationRecord.h>
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

LoadBalancerTlsCertificateDomainValidationRecord::LoadBalancerTlsCertificateDomainValidationRecord() : 
    m_nameHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_valueHasBeenSet(false),
    m_validationStatus(LoadBalancerTlsCertificateDomainStatus::NOT_SET),
    m_validationStatusHasBeenSet(false),
    m_domainNameHasBeenSet(false)
{
}

LoadBalancerTlsCertificateDomainValidationRecord::LoadBalancerTlsCertificateDomainValidationRecord(const JsonValue& jsonValue) : 
    m_nameHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_valueHasBeenSet(false),
    m_validationStatus(LoadBalancerTlsCertificateDomainStatus::NOT_SET),
    m_validationStatusHasBeenSet(false),
    m_domainNameHasBeenSet(false)
{
  *this = jsonValue;
}

LoadBalancerTlsCertificateDomainValidationRecord& LoadBalancerTlsCertificateDomainValidationRecord::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("type"))
  {
    m_type = jsonValue.GetString("type");

    m_typeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("value"))
  {
    m_value = jsonValue.GetString("value");

    m_valueHasBeenSet = true;
  }

  if(jsonValue.ValueExists("validationStatus"))
  {
    m_validationStatus = LoadBalancerTlsCertificateDomainStatusMapper::GetLoadBalancerTlsCertificateDomainStatusForName(jsonValue.GetString("validationStatus"));

    m_validationStatusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("domainName"))
  {
    m_domainName = jsonValue.GetString("domainName");

    m_domainNameHasBeenSet = true;
  }

  return *this;
}

JsonValue LoadBalancerTlsCertificateDomainValidationRecord::Jsonize() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_typeHasBeenSet)
  {
   payload.WithString("type", m_type);

  }

  if(m_valueHasBeenSet)
  {
   payload.WithString("value", m_value);

  }

  if(m_validationStatusHasBeenSet)
  {
   payload.WithString("validationStatus", LoadBalancerTlsCertificateDomainStatusMapper::GetNameForLoadBalancerTlsCertificateDomainStatus(m_validationStatus));
  }

  if(m_domainNameHasBeenSet)
  {
   payload.WithString("domainName", m_domainName);

  }

  return payload;
}

} // namespace Model
} // namespace Lightsail
} // namespace Aws
