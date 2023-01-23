/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
    m_domainNameHasBeenSet(false),
    m_dnsRecordCreationStateHasBeenSet(false)
{
}

LoadBalancerTlsCertificateDomainValidationRecord::LoadBalancerTlsCertificateDomainValidationRecord(JsonView jsonValue) : 
    m_nameHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_valueHasBeenSet(false),
    m_validationStatus(LoadBalancerTlsCertificateDomainStatus::NOT_SET),
    m_validationStatusHasBeenSet(false),
    m_domainNameHasBeenSet(false),
    m_dnsRecordCreationStateHasBeenSet(false)
{
  *this = jsonValue;
}

LoadBalancerTlsCertificateDomainValidationRecord& LoadBalancerTlsCertificateDomainValidationRecord::operator =(JsonView jsonValue)
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

  if(jsonValue.ValueExists("dnsRecordCreationState"))
  {
    m_dnsRecordCreationState = jsonValue.GetObject("dnsRecordCreationState");

    m_dnsRecordCreationStateHasBeenSet = true;
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

  if(m_dnsRecordCreationStateHasBeenSet)
  {
   payload.WithObject("dnsRecordCreationState", m_dnsRecordCreationState.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace Lightsail
} // namespace Aws
