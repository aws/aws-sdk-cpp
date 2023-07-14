/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/route53-recovery-readiness/model/DNSTargetResource.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Route53RecoveryReadiness
{
namespace Model
{

DNSTargetResource::DNSTargetResource() : 
    m_domainNameHasBeenSet(false),
    m_hostedZoneArnHasBeenSet(false),
    m_recordSetIdHasBeenSet(false),
    m_recordTypeHasBeenSet(false),
    m_targetResourceHasBeenSet(false)
{
}

DNSTargetResource::DNSTargetResource(JsonView jsonValue) : 
    m_domainNameHasBeenSet(false),
    m_hostedZoneArnHasBeenSet(false),
    m_recordSetIdHasBeenSet(false),
    m_recordTypeHasBeenSet(false),
    m_targetResourceHasBeenSet(false)
{
  *this = jsonValue;
}

DNSTargetResource& DNSTargetResource::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("domainName"))
  {
    m_domainName = jsonValue.GetString("domainName");

    m_domainNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("hostedZoneArn"))
  {
    m_hostedZoneArn = jsonValue.GetString("hostedZoneArn");

    m_hostedZoneArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("recordSetId"))
  {
    m_recordSetId = jsonValue.GetString("recordSetId");

    m_recordSetIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("recordType"))
  {
    m_recordType = jsonValue.GetString("recordType");

    m_recordTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("targetResource"))
  {
    m_targetResource = jsonValue.GetObject("targetResource");

    m_targetResourceHasBeenSet = true;
  }

  return *this;
}

JsonValue DNSTargetResource::Jsonize() const
{
  JsonValue payload;

  if(m_domainNameHasBeenSet)
  {
   payload.WithString("domainName", m_domainName);

  }

  if(m_hostedZoneArnHasBeenSet)
  {
   payload.WithString("hostedZoneArn", m_hostedZoneArn);

  }

  if(m_recordSetIdHasBeenSet)
  {
   payload.WithString("recordSetId", m_recordSetId);

  }

  if(m_recordTypeHasBeenSet)
  {
   payload.WithString("recordType", m_recordType);

  }

  if(m_targetResourceHasBeenSet)
  {
   payload.WithObject("targetResource", m_targetResource.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace Route53RecoveryReadiness
} // namespace Aws
