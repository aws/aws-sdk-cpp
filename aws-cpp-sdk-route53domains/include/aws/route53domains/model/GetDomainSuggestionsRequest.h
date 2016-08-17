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
#include <aws/route53domains/Route53DomainsRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Route53Domains
{
namespace Model
{

  /**
   */
  class AWS_ROUTE53DOMAINS_API GetDomainSuggestionsRequest : public Route53DomainsRequest
  {
  public:
    GetDomainSuggestionsRequest();
    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

    
    inline const Aws::String& GetDomainName() const{ return m_domainName; }

    
    inline void SetDomainName(const Aws::String& value) { m_domainNameHasBeenSet = true; m_domainName = value; }

    
    inline void SetDomainName(Aws::String&& value) { m_domainNameHasBeenSet = true; m_domainName = value; }

    
    inline void SetDomainName(const char* value) { m_domainNameHasBeenSet = true; m_domainName.assign(value); }

    
    inline GetDomainSuggestionsRequest& WithDomainName(const Aws::String& value) { SetDomainName(value); return *this;}

    
    inline GetDomainSuggestionsRequest& WithDomainName(Aws::String&& value) { SetDomainName(value); return *this;}

    
    inline GetDomainSuggestionsRequest& WithDomainName(const char* value) { SetDomainName(value); return *this;}

    
    inline int GetSuggestionCount() const{ return m_suggestionCount; }

    
    inline void SetSuggestionCount(int value) { m_suggestionCountHasBeenSet = true; m_suggestionCount = value; }

    
    inline GetDomainSuggestionsRequest& WithSuggestionCount(int value) { SetSuggestionCount(value); return *this;}

    
    inline bool GetOnlyAvailable() const{ return m_onlyAvailable; }

    
    inline void SetOnlyAvailable(bool value) { m_onlyAvailableHasBeenSet = true; m_onlyAvailable = value; }

    
    inline GetDomainSuggestionsRequest& WithOnlyAvailable(bool value) { SetOnlyAvailable(value); return *this;}

  private:
    Aws::String m_domainName;
    bool m_domainNameHasBeenSet;
    int m_suggestionCount;
    bool m_suggestionCountHasBeenSet;
    bool m_onlyAvailable;
    bool m_onlyAvailableHasBeenSet;
  };

} // namespace Model
} // namespace Route53Domains
} // namespace Aws
