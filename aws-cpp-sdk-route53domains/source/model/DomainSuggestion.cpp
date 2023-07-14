/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/route53domains/model/DomainSuggestion.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Route53Domains
{
namespace Model
{

DomainSuggestion::DomainSuggestion() : 
    m_domainNameHasBeenSet(false),
    m_availabilityHasBeenSet(false)
{
}

DomainSuggestion::DomainSuggestion(JsonView jsonValue) : 
    m_domainNameHasBeenSet(false),
    m_availabilityHasBeenSet(false)
{
  *this = jsonValue;
}

DomainSuggestion& DomainSuggestion::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("DomainName"))
  {
    m_domainName = jsonValue.GetString("DomainName");

    m_domainNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Availability"))
  {
    m_availability = jsonValue.GetString("Availability");

    m_availabilityHasBeenSet = true;
  }

  return *this;
}

JsonValue DomainSuggestion::Jsonize() const
{
  JsonValue payload;

  if(m_domainNameHasBeenSet)
  {
   payload.WithString("DomainName", m_domainName);

  }

  if(m_availabilityHasBeenSet)
  {
   payload.WithString("Availability", m_availability);

  }

  return payload;
}

} // namespace Model
} // namespace Route53Domains
} // namespace Aws
