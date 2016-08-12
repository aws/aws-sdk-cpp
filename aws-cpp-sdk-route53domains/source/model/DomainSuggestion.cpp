/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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

DomainSuggestion::DomainSuggestion(const JsonValue& jsonValue) : 
    m_domainNameHasBeenSet(false),
    m_availabilityHasBeenSet(false)
{
  *this = jsonValue;
}

DomainSuggestion& DomainSuggestion::operator =(const JsonValue& jsonValue)
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