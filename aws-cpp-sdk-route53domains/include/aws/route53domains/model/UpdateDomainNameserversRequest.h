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
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/route53domains/model/Nameserver.h>
#include <utility>

namespace Aws
{
namespace Route53Domains
{
namespace Model
{

  /**
   * <p>Replaces the current set of name servers for the domain with the specified
   * set of name servers. If you use Amazon Route 53 as your DNS service, specify the
   * four name servers in the delegation set for the hosted zone for the domain.</p>
   * <p>If successful, this operation returns an operation ID that you can use to
   * track the progress and completion of the action. If the request is not completed
   * successfully, the domain registrant will be notified by email. </p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/route53domains-2014-05-15/UpdateDomainNameserversRequest">AWS
   * API Reference</a></p>
   */
  class AWS_ROUTE53DOMAINS_API UpdateDomainNameserversRequest : public Route53DomainsRequest
  {
  public:
    UpdateDomainNameserversRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateDomainNameservers"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The name of the domain that you want to change name servers for.</p>
     */
    inline const Aws::String& GetDomainName() const{ return m_domainName; }

    /**
     * <p>The name of the domain that you want to change name servers for.</p>
     */
    inline bool DomainNameHasBeenSet() const { return m_domainNameHasBeenSet; }

    /**
     * <p>The name of the domain that you want to change name servers for.</p>
     */
    inline void SetDomainName(const Aws::String& value) { m_domainNameHasBeenSet = true; m_domainName = value; }

    /**
     * <p>The name of the domain that you want to change name servers for.</p>
     */
    inline void SetDomainName(Aws::String&& value) { m_domainNameHasBeenSet = true; m_domainName = std::move(value); }

    /**
     * <p>The name of the domain that you want to change name servers for.</p>
     */
    inline void SetDomainName(const char* value) { m_domainNameHasBeenSet = true; m_domainName.assign(value); }

    /**
     * <p>The name of the domain that you want to change name servers for.</p>
     */
    inline UpdateDomainNameserversRequest& WithDomainName(const Aws::String& value) { SetDomainName(value); return *this;}

    /**
     * <p>The name of the domain that you want to change name servers for.</p>
     */
    inline UpdateDomainNameserversRequest& WithDomainName(Aws::String&& value) { SetDomainName(std::move(value)); return *this;}

    /**
     * <p>The name of the domain that you want to change name servers for.</p>
     */
    inline UpdateDomainNameserversRequest& WithDomainName(const char* value) { SetDomainName(value); return *this;}


    /**
     * <p>A list of new name servers for the domain.</p>
     */
    inline const Aws::Vector<Nameserver>& GetNameservers() const{ return m_nameservers; }

    /**
     * <p>A list of new name servers for the domain.</p>
     */
    inline bool NameserversHasBeenSet() const { return m_nameserversHasBeenSet; }

    /**
     * <p>A list of new name servers for the domain.</p>
     */
    inline void SetNameservers(const Aws::Vector<Nameserver>& value) { m_nameserversHasBeenSet = true; m_nameservers = value; }

    /**
     * <p>A list of new name servers for the domain.</p>
     */
    inline void SetNameservers(Aws::Vector<Nameserver>&& value) { m_nameserversHasBeenSet = true; m_nameservers = std::move(value); }

    /**
     * <p>A list of new name servers for the domain.</p>
     */
    inline UpdateDomainNameserversRequest& WithNameservers(const Aws::Vector<Nameserver>& value) { SetNameservers(value); return *this;}

    /**
     * <p>A list of new name servers for the domain.</p>
     */
    inline UpdateDomainNameserversRequest& WithNameservers(Aws::Vector<Nameserver>&& value) { SetNameservers(std::move(value)); return *this;}

    /**
     * <p>A list of new name servers for the domain.</p>
     */
    inline UpdateDomainNameserversRequest& AddNameservers(const Nameserver& value) { m_nameserversHasBeenSet = true; m_nameservers.push_back(value); return *this; }

    /**
     * <p>A list of new name servers for the domain.</p>
     */
    inline UpdateDomainNameserversRequest& AddNameservers(Nameserver&& value) { m_nameserversHasBeenSet = true; m_nameservers.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_domainName;
    bool m_domainNameHasBeenSet;

    Aws::Vector<Nameserver> m_nameservers;
    bool m_nameserversHasBeenSet;
  };

} // namespace Model
} // namespace Route53Domains
} // namespace Aws
