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
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace Route53Domains
{
namespace Model
{

  /**
   * <p>Summary information about one domain.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/route53domains-2014-05-15/DomainSummary">AWS
   * API Reference</a></p>
   */
  class AWS_ROUTE53DOMAINS_API DomainSummary
  {
  public:
    DomainSummary();
    DomainSummary(Aws::Utils::Json::JsonView jsonValue);
    DomainSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the domain that the summary information applies to.</p>
     */
    inline const Aws::String& GetDomainName() const{ return m_domainName; }

    /**
     * <p>The name of the domain that the summary information applies to.</p>
     */
    inline bool DomainNameHasBeenSet() const { return m_domainNameHasBeenSet; }

    /**
     * <p>The name of the domain that the summary information applies to.</p>
     */
    inline void SetDomainName(const Aws::String& value) { m_domainNameHasBeenSet = true; m_domainName = value; }

    /**
     * <p>The name of the domain that the summary information applies to.</p>
     */
    inline void SetDomainName(Aws::String&& value) { m_domainNameHasBeenSet = true; m_domainName = std::move(value); }

    /**
     * <p>The name of the domain that the summary information applies to.</p>
     */
    inline void SetDomainName(const char* value) { m_domainNameHasBeenSet = true; m_domainName.assign(value); }

    /**
     * <p>The name of the domain that the summary information applies to.</p>
     */
    inline DomainSummary& WithDomainName(const Aws::String& value) { SetDomainName(value); return *this;}

    /**
     * <p>The name of the domain that the summary information applies to.</p>
     */
    inline DomainSummary& WithDomainName(Aws::String&& value) { SetDomainName(std::move(value)); return *this;}

    /**
     * <p>The name of the domain that the summary information applies to.</p>
     */
    inline DomainSummary& WithDomainName(const char* value) { SetDomainName(value); return *this;}


    /**
     * <p>Indicates whether the domain is automatically renewed upon expiration.</p>
     */
    inline bool GetAutoRenew() const{ return m_autoRenew; }

    /**
     * <p>Indicates whether the domain is automatically renewed upon expiration.</p>
     */
    inline bool AutoRenewHasBeenSet() const { return m_autoRenewHasBeenSet; }

    /**
     * <p>Indicates whether the domain is automatically renewed upon expiration.</p>
     */
    inline void SetAutoRenew(bool value) { m_autoRenewHasBeenSet = true; m_autoRenew = value; }

    /**
     * <p>Indicates whether the domain is automatically renewed upon expiration.</p>
     */
    inline DomainSummary& WithAutoRenew(bool value) { SetAutoRenew(value); return *this;}


    /**
     * <p>Indicates whether a domain is locked from unauthorized transfer to another
     * party.</p>
     */
    inline bool GetTransferLock() const{ return m_transferLock; }

    /**
     * <p>Indicates whether a domain is locked from unauthorized transfer to another
     * party.</p>
     */
    inline bool TransferLockHasBeenSet() const { return m_transferLockHasBeenSet; }

    /**
     * <p>Indicates whether a domain is locked from unauthorized transfer to another
     * party.</p>
     */
    inline void SetTransferLock(bool value) { m_transferLockHasBeenSet = true; m_transferLock = value; }

    /**
     * <p>Indicates whether a domain is locked from unauthorized transfer to another
     * party.</p>
     */
    inline DomainSummary& WithTransferLock(bool value) { SetTransferLock(value); return *this;}


    /**
     * <p>Expiration date of the domain in Coordinated Universal Time (UTC).</p>
     */
    inline const Aws::Utils::DateTime& GetExpiry() const{ return m_expiry; }

    /**
     * <p>Expiration date of the domain in Coordinated Universal Time (UTC).</p>
     */
    inline bool ExpiryHasBeenSet() const { return m_expiryHasBeenSet; }

    /**
     * <p>Expiration date of the domain in Coordinated Universal Time (UTC).</p>
     */
    inline void SetExpiry(const Aws::Utils::DateTime& value) { m_expiryHasBeenSet = true; m_expiry = value; }

    /**
     * <p>Expiration date of the domain in Coordinated Universal Time (UTC).</p>
     */
    inline void SetExpiry(Aws::Utils::DateTime&& value) { m_expiryHasBeenSet = true; m_expiry = std::move(value); }

    /**
     * <p>Expiration date of the domain in Coordinated Universal Time (UTC).</p>
     */
    inline DomainSummary& WithExpiry(const Aws::Utils::DateTime& value) { SetExpiry(value); return *this;}

    /**
     * <p>Expiration date of the domain in Coordinated Universal Time (UTC).</p>
     */
    inline DomainSummary& WithExpiry(Aws::Utils::DateTime&& value) { SetExpiry(std::move(value)); return *this;}

  private:

    Aws::String m_domainName;
    bool m_domainNameHasBeenSet;

    bool m_autoRenew;
    bool m_autoRenewHasBeenSet;

    bool m_transferLock;
    bool m_transferLockHasBeenSet;

    Aws::Utils::DateTime m_expiry;
    bool m_expiryHasBeenSet;
  };

} // namespace Model
} // namespace Route53Domains
} // namespace Aws
