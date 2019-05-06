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
   * <p>A <code>RenewDomain</code> request includes the number of years that you want
   * to renew for and the current expiration year.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/route53domains-2014-05-15/RenewDomainRequest">AWS
   * API Reference</a></p>
   */
  class AWS_ROUTE53DOMAINS_API RenewDomainRequest : public Route53DomainsRequest
  {
  public:
    RenewDomainRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "RenewDomain"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The name of the domain that you want to renew.</p>
     */
    inline const Aws::String& GetDomainName() const{ return m_domainName; }

    /**
     * <p>The name of the domain that you want to renew.</p>
     */
    inline bool DomainNameHasBeenSet() const { return m_domainNameHasBeenSet; }

    /**
     * <p>The name of the domain that you want to renew.</p>
     */
    inline void SetDomainName(const Aws::String& value) { m_domainNameHasBeenSet = true; m_domainName = value; }

    /**
     * <p>The name of the domain that you want to renew.</p>
     */
    inline void SetDomainName(Aws::String&& value) { m_domainNameHasBeenSet = true; m_domainName = std::move(value); }

    /**
     * <p>The name of the domain that you want to renew.</p>
     */
    inline void SetDomainName(const char* value) { m_domainNameHasBeenSet = true; m_domainName.assign(value); }

    /**
     * <p>The name of the domain that you want to renew.</p>
     */
    inline RenewDomainRequest& WithDomainName(const Aws::String& value) { SetDomainName(value); return *this;}

    /**
     * <p>The name of the domain that you want to renew.</p>
     */
    inline RenewDomainRequest& WithDomainName(Aws::String&& value) { SetDomainName(std::move(value)); return *this;}

    /**
     * <p>The name of the domain that you want to renew.</p>
     */
    inline RenewDomainRequest& WithDomainName(const char* value) { SetDomainName(value); return *this;}


    /**
     * <p>The number of years that you want to renew the domain for. The maximum number
     * of years depends on the top-level domain. For the range of valid values for your
     * domain, see <a
     * href="http://docs.aws.amazon.com/Route53/latest/DeveloperGuide/registrar-tld-list.html">Domains
     * that You Can Register with Amazon Route 53</a> in the <i>Amazon Route 53
     * Developer Guide</i>.</p> <p>Default: 1</p>
     */
    inline int GetDurationInYears() const{ return m_durationInYears; }

    /**
     * <p>The number of years that you want to renew the domain for. The maximum number
     * of years depends on the top-level domain. For the range of valid values for your
     * domain, see <a
     * href="http://docs.aws.amazon.com/Route53/latest/DeveloperGuide/registrar-tld-list.html">Domains
     * that You Can Register with Amazon Route 53</a> in the <i>Amazon Route 53
     * Developer Guide</i>.</p> <p>Default: 1</p>
     */
    inline bool DurationInYearsHasBeenSet() const { return m_durationInYearsHasBeenSet; }

    /**
     * <p>The number of years that you want to renew the domain for. The maximum number
     * of years depends on the top-level domain. For the range of valid values for your
     * domain, see <a
     * href="http://docs.aws.amazon.com/Route53/latest/DeveloperGuide/registrar-tld-list.html">Domains
     * that You Can Register with Amazon Route 53</a> in the <i>Amazon Route 53
     * Developer Guide</i>.</p> <p>Default: 1</p>
     */
    inline void SetDurationInYears(int value) { m_durationInYearsHasBeenSet = true; m_durationInYears = value; }

    /**
     * <p>The number of years that you want to renew the domain for. The maximum number
     * of years depends on the top-level domain. For the range of valid values for your
     * domain, see <a
     * href="http://docs.aws.amazon.com/Route53/latest/DeveloperGuide/registrar-tld-list.html">Domains
     * that You Can Register with Amazon Route 53</a> in the <i>Amazon Route 53
     * Developer Guide</i>.</p> <p>Default: 1</p>
     */
    inline RenewDomainRequest& WithDurationInYears(int value) { SetDurationInYears(value); return *this;}


    /**
     * <p>The year when the registration for the domain is set to expire. This value
     * must match the current expiration date for the domain.</p>
     */
    inline int GetCurrentExpiryYear() const{ return m_currentExpiryYear; }

    /**
     * <p>The year when the registration for the domain is set to expire. This value
     * must match the current expiration date for the domain.</p>
     */
    inline bool CurrentExpiryYearHasBeenSet() const { return m_currentExpiryYearHasBeenSet; }

    /**
     * <p>The year when the registration for the domain is set to expire. This value
     * must match the current expiration date for the domain.</p>
     */
    inline void SetCurrentExpiryYear(int value) { m_currentExpiryYearHasBeenSet = true; m_currentExpiryYear = value; }

    /**
     * <p>The year when the registration for the domain is set to expire. This value
     * must match the current expiration date for the domain.</p>
     */
    inline RenewDomainRequest& WithCurrentExpiryYear(int value) { SetCurrentExpiryYear(value); return *this;}

  private:

    Aws::String m_domainName;
    bool m_domainNameHasBeenSet;

    int m_durationInYears;
    bool m_durationInYearsHasBeenSet;

    int m_currentExpiryYear;
    bool m_currentExpiryYearHasBeenSet;
  };

} // namespace Model
} // namespace Route53Domains
} // namespace Aws
