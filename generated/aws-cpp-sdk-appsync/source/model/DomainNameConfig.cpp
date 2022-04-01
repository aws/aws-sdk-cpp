/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appsync/model/DomainNameConfig.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace AppSync
{
namespace Model
{

DomainNameConfig::DomainNameConfig() : 
    m_domainNameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_certificateArnHasBeenSet(false),
    m_appsyncDomainNameHasBeenSet(false),
    m_hostedZoneIdHasBeenSet(false)
{
}

DomainNameConfig::DomainNameConfig(JsonView jsonValue) : 
    m_domainNameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_certificateArnHasBeenSet(false),
    m_appsyncDomainNameHasBeenSet(false),
    m_hostedZoneIdHasBeenSet(false)
{
  *this = jsonValue;
}

DomainNameConfig& DomainNameConfig::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("domainName"))
  {
    m_domainName = jsonValue.GetString("domainName");

    m_domainNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("description"))
  {
    m_description = jsonValue.GetString("description");

    m_descriptionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("certificateArn"))
  {
    m_certificateArn = jsonValue.GetString("certificateArn");

    m_certificateArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("appsyncDomainName"))
  {
    m_appsyncDomainName = jsonValue.GetString("appsyncDomainName");

    m_appsyncDomainNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("hostedZoneId"))
  {
    m_hostedZoneId = jsonValue.GetString("hostedZoneId");

    m_hostedZoneIdHasBeenSet = true;
  }

  return *this;
}

JsonValue DomainNameConfig::Jsonize() const
{
  JsonValue payload;

  if(m_domainNameHasBeenSet)
  {
   payload.WithString("domainName", m_domainName);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("description", m_description);

  }

  if(m_certificateArnHasBeenSet)
  {
   payload.WithString("certificateArn", m_certificateArn);

  }

  if(m_appsyncDomainNameHasBeenSet)
  {
   payload.WithString("appsyncDomainName", m_appsyncDomainName);

  }

  if(m_hostedZoneIdHasBeenSet)
  {
   payload.WithString("hostedZoneId", m_hostedZoneId);

  }

  return payload;
}

} // namespace Model
} // namespace AppSync
} // namespace Aws
