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
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/route53domains/model/Nameserver.h>

namespace Aws
{
namespace Route53Domains
{
namespace Model
{

  /**
   * <p>The UpdateDomainNameserver request includes the following elements.</p>
   */
  class AWS_ROUTE53DOMAINS_API UpdateDomainNameserversRequest : public Route53DomainsRequest
  {
  public:
    UpdateDomainNameserversRequest();
    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

    /**
     * <p>The name of a domain.</p> <p>Type: String</p> <p>Default: None</p>
     * <p>Constraints: The domain name can contain only the letters a through z, the
     * numbers 0 through 9, and hyphen (-). Internationalized Domain Names are not
     * supported.</p> <p>Required: Yes</p>
     */
    inline const Aws::String& GetDomainName() const{ return m_domainName; }

    /**
     * <p>The name of a domain.</p> <p>Type: String</p> <p>Default: None</p>
     * <p>Constraints: The domain name can contain only the letters a through z, the
     * numbers 0 through 9, and hyphen (-). Internationalized Domain Names are not
     * supported.</p> <p>Required: Yes</p>
     */
    inline void SetDomainName(const Aws::String& value) { m_domainNameHasBeenSet = true; m_domainName = value; }

    /**
     * <p>The name of a domain.</p> <p>Type: String</p> <p>Default: None</p>
     * <p>Constraints: The domain name can contain only the letters a through z, the
     * numbers 0 through 9, and hyphen (-). Internationalized Domain Names are not
     * supported.</p> <p>Required: Yes</p>
     */
    inline void SetDomainName(Aws::String&& value) { m_domainNameHasBeenSet = true; m_domainName = value; }

    /**
     * <p>The name of a domain.</p> <p>Type: String</p> <p>Default: None</p>
     * <p>Constraints: The domain name can contain only the letters a through z, the
     * numbers 0 through 9, and hyphen (-). Internationalized Domain Names are not
     * supported.</p> <p>Required: Yes</p>
     */
    inline void SetDomainName(const char* value) { m_domainNameHasBeenSet = true; m_domainName.assign(value); }

    /**
     * <p>The name of a domain.</p> <p>Type: String</p> <p>Default: None</p>
     * <p>Constraints: The domain name can contain only the letters a through z, the
     * numbers 0 through 9, and hyphen (-). Internationalized Domain Names are not
     * supported.</p> <p>Required: Yes</p>
     */
    inline UpdateDomainNameserversRequest& WithDomainName(const Aws::String& value) { SetDomainName(value); return *this;}

    /**
     * <p>The name of a domain.</p> <p>Type: String</p> <p>Default: None</p>
     * <p>Constraints: The domain name can contain only the letters a through z, the
     * numbers 0 through 9, and hyphen (-). Internationalized Domain Names are not
     * supported.</p> <p>Required: Yes</p>
     */
    inline UpdateDomainNameserversRequest& WithDomainName(Aws::String&& value) { SetDomainName(value); return *this;}

    /**
     * <p>The name of a domain.</p> <p>Type: String</p> <p>Default: None</p>
     * <p>Constraints: The domain name can contain only the letters a through z, the
     * numbers 0 through 9, and hyphen (-). Internationalized Domain Names are not
     * supported.</p> <p>Required: Yes</p>
     */
    inline UpdateDomainNameserversRequest& WithDomainName(const char* value) { SetDomainName(value); return *this;}

    /**
     * <p>The authorization key for .fi domains</p>
     */
    inline const Aws::String& GetFIAuthKey() const{ return m_fIAuthKey; }

    /**
     * <p>The authorization key for .fi domains</p>
     */
    inline void SetFIAuthKey(const Aws::String& value) { m_fIAuthKeyHasBeenSet = true; m_fIAuthKey = value; }

    /**
     * <p>The authorization key for .fi domains</p>
     */
    inline void SetFIAuthKey(Aws::String&& value) { m_fIAuthKeyHasBeenSet = true; m_fIAuthKey = value; }

    /**
     * <p>The authorization key for .fi domains</p>
     */
    inline void SetFIAuthKey(const char* value) { m_fIAuthKeyHasBeenSet = true; m_fIAuthKey.assign(value); }

    /**
     * <p>The authorization key for .fi domains</p>
     */
    inline UpdateDomainNameserversRequest& WithFIAuthKey(const Aws::String& value) { SetFIAuthKey(value); return *this;}

    /**
     * <p>The authorization key for .fi domains</p>
     */
    inline UpdateDomainNameserversRequest& WithFIAuthKey(Aws::String&& value) { SetFIAuthKey(value); return *this;}

    /**
     * <p>The authorization key for .fi domains</p>
     */
    inline UpdateDomainNameserversRequest& WithFIAuthKey(const char* value) { SetFIAuthKey(value); return *this;}

    /**
     * <p>A list of new name servers for the domain.</p> <p>Type: Complex</p>
     * <p>Children: <code>Name</code>, <code>GlueIps</code></p> <p>Required: Yes</p>
     */
    inline const Aws::Vector<Nameserver>& GetNameservers() const{ return m_nameservers; }

    /**
     * <p>A list of new name servers for the domain.</p> <p>Type: Complex</p>
     * <p>Children: <code>Name</code>, <code>GlueIps</code></p> <p>Required: Yes</p>
     */
    inline void SetNameservers(const Aws::Vector<Nameserver>& value) { m_nameserversHasBeenSet = true; m_nameservers = value; }

    /**
     * <p>A list of new name servers for the domain.</p> <p>Type: Complex</p>
     * <p>Children: <code>Name</code>, <code>GlueIps</code></p> <p>Required: Yes</p>
     */
    inline void SetNameservers(Aws::Vector<Nameserver>&& value) { m_nameserversHasBeenSet = true; m_nameservers = value; }

    /**
     * <p>A list of new name servers for the domain.</p> <p>Type: Complex</p>
     * <p>Children: <code>Name</code>, <code>GlueIps</code></p> <p>Required: Yes</p>
     */
    inline UpdateDomainNameserversRequest& WithNameservers(const Aws::Vector<Nameserver>& value) { SetNameservers(value); return *this;}

    /**
     * <p>A list of new name servers for the domain.</p> <p>Type: Complex</p>
     * <p>Children: <code>Name</code>, <code>GlueIps</code></p> <p>Required: Yes</p>
     */
    inline UpdateDomainNameserversRequest& WithNameservers(Aws::Vector<Nameserver>&& value) { SetNameservers(value); return *this;}

    /**
     * <p>A list of new name servers for the domain.</p> <p>Type: Complex</p>
     * <p>Children: <code>Name</code>, <code>GlueIps</code></p> <p>Required: Yes</p>
     */
    inline UpdateDomainNameserversRequest& AddNameservers(const Nameserver& value) { m_nameserversHasBeenSet = true; m_nameservers.push_back(value); return *this; }

    /**
     * <p>A list of new name servers for the domain.</p> <p>Type: Complex</p>
     * <p>Children: <code>Name</code>, <code>GlueIps</code></p> <p>Required: Yes</p>
     */
    inline UpdateDomainNameserversRequest& AddNameservers(Nameserver&& value) { m_nameserversHasBeenSet = true; m_nameservers.push_back(value); return *this; }

  private:
    Aws::String m_domainName;
    bool m_domainNameHasBeenSet;
    Aws::String m_fIAuthKey;
    bool m_fIAuthKeyHasBeenSet;
    Aws::Vector<Nameserver> m_nameservers;
    bool m_nameserversHasBeenSet;
  };

} // namespace Model
} // namespace Route53Domains
} // namespace Aws
