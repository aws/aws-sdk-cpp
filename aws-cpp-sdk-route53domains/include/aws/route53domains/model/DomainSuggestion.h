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
#pragma once
#include <aws/route53domains/Route53Domains_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace Route53Domains
{
namespace Model
{

  class AWS_ROUTE53DOMAINS_API DomainSuggestion
  {
  public:
    DomainSuggestion();
    DomainSuggestion(const Aws::Utils::Json::JsonValue& jsonValue);
    DomainSuggestion& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;

    
    inline const Aws::String& GetDomainName() const{ return m_domainName; }

    
    inline void SetDomainName(const Aws::String& value) { m_domainNameHasBeenSet = true; m_domainName = value; }

    
    inline void SetDomainName(Aws::String&& value) { m_domainNameHasBeenSet = true; m_domainName = value; }

    
    inline void SetDomainName(const char* value) { m_domainNameHasBeenSet = true; m_domainName.assign(value); }

    
    inline DomainSuggestion& WithDomainName(const Aws::String& value) { SetDomainName(value); return *this;}

    
    inline DomainSuggestion& WithDomainName(Aws::String&& value) { SetDomainName(value); return *this;}

    
    inline DomainSuggestion& WithDomainName(const char* value) { SetDomainName(value); return *this;}

    
    inline const Aws::String& GetAvailability() const{ return m_availability; }

    
    inline void SetAvailability(const Aws::String& value) { m_availabilityHasBeenSet = true; m_availability = value; }

    
    inline void SetAvailability(Aws::String&& value) { m_availabilityHasBeenSet = true; m_availability = value; }

    
    inline void SetAvailability(const char* value) { m_availabilityHasBeenSet = true; m_availability.assign(value); }

    
    inline DomainSuggestion& WithAvailability(const Aws::String& value) { SetAvailability(value); return *this;}

    
    inline DomainSuggestion& WithAvailability(Aws::String&& value) { SetAvailability(value); return *this;}

    
    inline DomainSuggestion& WithAvailability(const char* value) { SetAvailability(value); return *this;}

  private:
    Aws::String m_domainName;
    bool m_domainNameHasBeenSet;
    Aws::String m_availability;
    bool m_availabilityHasBeenSet;
  };

} // namespace Model
} // namespace Route53Domains
} // namespace Aws
