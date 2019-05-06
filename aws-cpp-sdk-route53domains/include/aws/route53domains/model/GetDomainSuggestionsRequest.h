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

#pragma once
#include <aws/route53domains/Route53Domains_EXPORTS.h>
#include <aws/route53domains/Route53DomainsRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

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

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetDomainSuggestions"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>A domain name that you want to use as the basis for a list of possible domain
     * names. The domain name must contain a top-level domain (TLD), such as .com, that
     * Amazon Route 53 supports. For a list of TLDs, see <a
     * href="http://docs.aws.amazon.com/Route53/latest/DeveloperGuide/registrar-tld-list.html">Domains
     * that You Can Register with Amazon Route 53</a> in the <i>Amazon Route 53
     * Developer Guide</i>.</p>
     */
    inline const Aws::String& GetDomainName() const{ return m_domainName; }

    /**
     * <p>A domain name that you want to use as the basis for a list of possible domain
     * names. The domain name must contain a top-level domain (TLD), such as .com, that
     * Amazon Route 53 supports. For a list of TLDs, see <a
     * href="http://docs.aws.amazon.com/Route53/latest/DeveloperGuide/registrar-tld-list.html">Domains
     * that You Can Register with Amazon Route 53</a> in the <i>Amazon Route 53
     * Developer Guide</i>.</p>
     */
    inline bool DomainNameHasBeenSet() const { return m_domainNameHasBeenSet; }

    /**
     * <p>A domain name that you want to use as the basis for a list of possible domain
     * names. The domain name must contain a top-level domain (TLD), such as .com, that
     * Amazon Route 53 supports. For a list of TLDs, see <a
     * href="http://docs.aws.amazon.com/Route53/latest/DeveloperGuide/registrar-tld-list.html">Domains
     * that You Can Register with Amazon Route 53</a> in the <i>Amazon Route 53
     * Developer Guide</i>.</p>
     */
    inline void SetDomainName(const Aws::String& value) { m_domainNameHasBeenSet = true; m_domainName = value; }

    /**
     * <p>A domain name that you want to use as the basis for a list of possible domain
     * names. The domain name must contain a top-level domain (TLD), such as .com, that
     * Amazon Route 53 supports. For a list of TLDs, see <a
     * href="http://docs.aws.amazon.com/Route53/latest/DeveloperGuide/registrar-tld-list.html">Domains
     * that You Can Register with Amazon Route 53</a> in the <i>Amazon Route 53
     * Developer Guide</i>.</p>
     */
    inline void SetDomainName(Aws::String&& value) { m_domainNameHasBeenSet = true; m_domainName = std::move(value); }

    /**
     * <p>A domain name that you want to use as the basis for a list of possible domain
     * names. The domain name must contain a top-level domain (TLD), such as .com, that
     * Amazon Route 53 supports. For a list of TLDs, see <a
     * href="http://docs.aws.amazon.com/Route53/latest/DeveloperGuide/registrar-tld-list.html">Domains
     * that You Can Register with Amazon Route 53</a> in the <i>Amazon Route 53
     * Developer Guide</i>.</p>
     */
    inline void SetDomainName(const char* value) { m_domainNameHasBeenSet = true; m_domainName.assign(value); }

    /**
     * <p>A domain name that you want to use as the basis for a list of possible domain
     * names. The domain name must contain a top-level domain (TLD), such as .com, that
     * Amazon Route 53 supports. For a list of TLDs, see <a
     * href="http://docs.aws.amazon.com/Route53/latest/DeveloperGuide/registrar-tld-list.html">Domains
     * that You Can Register with Amazon Route 53</a> in the <i>Amazon Route 53
     * Developer Guide</i>.</p>
     */
    inline GetDomainSuggestionsRequest& WithDomainName(const Aws::String& value) { SetDomainName(value); return *this;}

    /**
     * <p>A domain name that you want to use as the basis for a list of possible domain
     * names. The domain name must contain a top-level domain (TLD), such as .com, that
     * Amazon Route 53 supports. For a list of TLDs, see <a
     * href="http://docs.aws.amazon.com/Route53/latest/DeveloperGuide/registrar-tld-list.html">Domains
     * that You Can Register with Amazon Route 53</a> in the <i>Amazon Route 53
     * Developer Guide</i>.</p>
     */
    inline GetDomainSuggestionsRequest& WithDomainName(Aws::String&& value) { SetDomainName(std::move(value)); return *this;}

    /**
     * <p>A domain name that you want to use as the basis for a list of possible domain
     * names. The domain name must contain a top-level domain (TLD), such as .com, that
     * Amazon Route 53 supports. For a list of TLDs, see <a
     * href="http://docs.aws.amazon.com/Route53/latest/DeveloperGuide/registrar-tld-list.html">Domains
     * that You Can Register with Amazon Route 53</a> in the <i>Amazon Route 53
     * Developer Guide</i>.</p>
     */
    inline GetDomainSuggestionsRequest& WithDomainName(const char* value) { SetDomainName(value); return *this;}


    /**
     * <p>The number of suggested domain names that you want Amazon Route 53 to
     * return.</p>
     */
    inline int GetSuggestionCount() const{ return m_suggestionCount; }

    /**
     * <p>The number of suggested domain names that you want Amazon Route 53 to
     * return.</p>
     */
    inline bool SuggestionCountHasBeenSet() const { return m_suggestionCountHasBeenSet; }

    /**
     * <p>The number of suggested domain names that you want Amazon Route 53 to
     * return.</p>
     */
    inline void SetSuggestionCount(int value) { m_suggestionCountHasBeenSet = true; m_suggestionCount = value; }

    /**
     * <p>The number of suggested domain names that you want Amazon Route 53 to
     * return.</p>
     */
    inline GetDomainSuggestionsRequest& WithSuggestionCount(int value) { SetSuggestionCount(value); return *this;}


    /**
     * <p>If <code>OnlyAvailable</code> is <code>true</code>, Amazon Route 53 returns
     * only domain names that are available. If <code>OnlyAvailable</code> is
     * <code>false</code>, Amazon Route 53 returns domain names without checking
     * whether they're available to be registered. To determine whether the domain is
     * available, you can call <code>checkDomainAvailability</code> for each
     * suggestion.</p>
     */
    inline bool GetOnlyAvailable() const{ return m_onlyAvailable; }

    /**
     * <p>If <code>OnlyAvailable</code> is <code>true</code>, Amazon Route 53 returns
     * only domain names that are available. If <code>OnlyAvailable</code> is
     * <code>false</code>, Amazon Route 53 returns domain names without checking
     * whether they're available to be registered. To determine whether the domain is
     * available, you can call <code>checkDomainAvailability</code> for each
     * suggestion.</p>
     */
    inline bool OnlyAvailableHasBeenSet() const { return m_onlyAvailableHasBeenSet; }

    /**
     * <p>If <code>OnlyAvailable</code> is <code>true</code>, Amazon Route 53 returns
     * only domain names that are available. If <code>OnlyAvailable</code> is
     * <code>false</code>, Amazon Route 53 returns domain names without checking
     * whether they're available to be registered. To determine whether the domain is
     * available, you can call <code>checkDomainAvailability</code> for each
     * suggestion.</p>
     */
    inline void SetOnlyAvailable(bool value) { m_onlyAvailableHasBeenSet = true; m_onlyAvailable = value; }

    /**
     * <p>If <code>OnlyAvailable</code> is <code>true</code>, Amazon Route 53 returns
     * only domain names that are available. If <code>OnlyAvailable</code> is
     * <code>false</code>, Amazon Route 53 returns domain names without checking
     * whether they're available to be registered. To determine whether the domain is
     * available, you can call <code>checkDomainAvailability</code> for each
     * suggestion.</p>
     */
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
