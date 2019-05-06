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
#include <aws/route53resolver/Route53Resolver_EXPORTS.h>
#include <aws/route53resolver/Route53ResolverRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/route53resolver/model/RuleTypeOption.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/route53resolver/model/TargetAddress.h>
#include <aws/route53resolver/model/Tag.h>
#include <utility>

namespace Aws
{
namespace Route53Resolver
{
namespace Model
{

  /**
   */
  class AWS_ROUTE53RESOLVER_API CreateResolverRuleRequest : public Route53ResolverRequest
  {
  public:
    CreateResolverRuleRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateResolverRule"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>A unique string that identifies the request and that allows failed requests
     * to be retried without the risk of executing the operation twice.
     * <code>CreatorRequestId</code> can be any unique string, for example, a date/time
     * stamp. </p>
     */
    inline const Aws::String& GetCreatorRequestId() const{ return m_creatorRequestId; }

    /**
     * <p>A unique string that identifies the request and that allows failed requests
     * to be retried without the risk of executing the operation twice.
     * <code>CreatorRequestId</code> can be any unique string, for example, a date/time
     * stamp. </p>
     */
    inline bool CreatorRequestIdHasBeenSet() const { return m_creatorRequestIdHasBeenSet; }

    /**
     * <p>A unique string that identifies the request and that allows failed requests
     * to be retried without the risk of executing the operation twice.
     * <code>CreatorRequestId</code> can be any unique string, for example, a date/time
     * stamp. </p>
     */
    inline void SetCreatorRequestId(const Aws::String& value) { m_creatorRequestIdHasBeenSet = true; m_creatorRequestId = value; }

    /**
     * <p>A unique string that identifies the request and that allows failed requests
     * to be retried without the risk of executing the operation twice.
     * <code>CreatorRequestId</code> can be any unique string, for example, a date/time
     * stamp. </p>
     */
    inline void SetCreatorRequestId(Aws::String&& value) { m_creatorRequestIdHasBeenSet = true; m_creatorRequestId = std::move(value); }

    /**
     * <p>A unique string that identifies the request and that allows failed requests
     * to be retried without the risk of executing the operation twice.
     * <code>CreatorRequestId</code> can be any unique string, for example, a date/time
     * stamp. </p>
     */
    inline void SetCreatorRequestId(const char* value) { m_creatorRequestIdHasBeenSet = true; m_creatorRequestId.assign(value); }

    /**
     * <p>A unique string that identifies the request and that allows failed requests
     * to be retried without the risk of executing the operation twice.
     * <code>CreatorRequestId</code> can be any unique string, for example, a date/time
     * stamp. </p>
     */
    inline CreateResolverRuleRequest& WithCreatorRequestId(const Aws::String& value) { SetCreatorRequestId(value); return *this;}

    /**
     * <p>A unique string that identifies the request and that allows failed requests
     * to be retried without the risk of executing the operation twice.
     * <code>CreatorRequestId</code> can be any unique string, for example, a date/time
     * stamp. </p>
     */
    inline CreateResolverRuleRequest& WithCreatorRequestId(Aws::String&& value) { SetCreatorRequestId(std::move(value)); return *this;}

    /**
     * <p>A unique string that identifies the request and that allows failed requests
     * to be retried without the risk of executing the operation twice.
     * <code>CreatorRequestId</code> can be any unique string, for example, a date/time
     * stamp. </p>
     */
    inline CreateResolverRuleRequest& WithCreatorRequestId(const char* value) { SetCreatorRequestId(value); return *this;}


    /**
     * <p>A friendly name that lets you easily find a rule in the Resolver dashboard in
     * the Route 53 console.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>A friendly name that lets you easily find a rule in the Resolver dashboard in
     * the Route 53 console.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>A friendly name that lets you easily find a rule in the Resolver dashboard in
     * the Route 53 console.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>A friendly name that lets you easily find a rule in the Resolver dashboard in
     * the Route 53 console.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>A friendly name that lets you easily find a rule in the Resolver dashboard in
     * the Route 53 console.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>A friendly name that lets you easily find a rule in the Resolver dashboard in
     * the Route 53 console.</p>
     */
    inline CreateResolverRuleRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>A friendly name that lets you easily find a rule in the Resolver dashboard in
     * the Route 53 console.</p>
     */
    inline CreateResolverRuleRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>A friendly name that lets you easily find a rule in the Resolver dashboard in
     * the Route 53 console.</p>
     */
    inline CreateResolverRuleRequest& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>Specify <code>FORWARD</code>. Other resolver rule types aren't supported.</p>
     */
    inline const RuleTypeOption& GetRuleType() const{ return m_ruleType; }

    /**
     * <p>Specify <code>FORWARD</code>. Other resolver rule types aren't supported.</p>
     */
    inline bool RuleTypeHasBeenSet() const { return m_ruleTypeHasBeenSet; }

    /**
     * <p>Specify <code>FORWARD</code>. Other resolver rule types aren't supported.</p>
     */
    inline void SetRuleType(const RuleTypeOption& value) { m_ruleTypeHasBeenSet = true; m_ruleType = value; }

    /**
     * <p>Specify <code>FORWARD</code>. Other resolver rule types aren't supported.</p>
     */
    inline void SetRuleType(RuleTypeOption&& value) { m_ruleTypeHasBeenSet = true; m_ruleType = std::move(value); }

    /**
     * <p>Specify <code>FORWARD</code>. Other resolver rule types aren't supported.</p>
     */
    inline CreateResolverRuleRequest& WithRuleType(const RuleTypeOption& value) { SetRuleType(value); return *this;}

    /**
     * <p>Specify <code>FORWARD</code>. Other resolver rule types aren't supported.</p>
     */
    inline CreateResolverRuleRequest& WithRuleType(RuleTypeOption&& value) { SetRuleType(std::move(value)); return *this;}


    /**
     * <p>DNS queries for this domain name are forwarded to the IP addresses that you
     * specify in <code>TargetIps</code>. If a query matches multiple resolver rules
     * (example.com and www.example.com), outbound DNS queries are routed using the
     * resolver rule that contains the most specific domain name (www.example.com).</p>
     */
    inline const Aws::String& GetDomainName() const{ return m_domainName; }

    /**
     * <p>DNS queries for this domain name are forwarded to the IP addresses that you
     * specify in <code>TargetIps</code>. If a query matches multiple resolver rules
     * (example.com and www.example.com), outbound DNS queries are routed using the
     * resolver rule that contains the most specific domain name (www.example.com).</p>
     */
    inline bool DomainNameHasBeenSet() const { return m_domainNameHasBeenSet; }

    /**
     * <p>DNS queries for this domain name are forwarded to the IP addresses that you
     * specify in <code>TargetIps</code>. If a query matches multiple resolver rules
     * (example.com and www.example.com), outbound DNS queries are routed using the
     * resolver rule that contains the most specific domain name (www.example.com).</p>
     */
    inline void SetDomainName(const Aws::String& value) { m_domainNameHasBeenSet = true; m_domainName = value; }

    /**
     * <p>DNS queries for this domain name are forwarded to the IP addresses that you
     * specify in <code>TargetIps</code>. If a query matches multiple resolver rules
     * (example.com and www.example.com), outbound DNS queries are routed using the
     * resolver rule that contains the most specific domain name (www.example.com).</p>
     */
    inline void SetDomainName(Aws::String&& value) { m_domainNameHasBeenSet = true; m_domainName = std::move(value); }

    /**
     * <p>DNS queries for this domain name are forwarded to the IP addresses that you
     * specify in <code>TargetIps</code>. If a query matches multiple resolver rules
     * (example.com and www.example.com), outbound DNS queries are routed using the
     * resolver rule that contains the most specific domain name (www.example.com).</p>
     */
    inline void SetDomainName(const char* value) { m_domainNameHasBeenSet = true; m_domainName.assign(value); }

    /**
     * <p>DNS queries for this domain name are forwarded to the IP addresses that you
     * specify in <code>TargetIps</code>. If a query matches multiple resolver rules
     * (example.com and www.example.com), outbound DNS queries are routed using the
     * resolver rule that contains the most specific domain name (www.example.com).</p>
     */
    inline CreateResolverRuleRequest& WithDomainName(const Aws::String& value) { SetDomainName(value); return *this;}

    /**
     * <p>DNS queries for this domain name are forwarded to the IP addresses that you
     * specify in <code>TargetIps</code>. If a query matches multiple resolver rules
     * (example.com and www.example.com), outbound DNS queries are routed using the
     * resolver rule that contains the most specific domain name (www.example.com).</p>
     */
    inline CreateResolverRuleRequest& WithDomainName(Aws::String&& value) { SetDomainName(std::move(value)); return *this;}

    /**
     * <p>DNS queries for this domain name are forwarded to the IP addresses that you
     * specify in <code>TargetIps</code>. If a query matches multiple resolver rules
     * (example.com and www.example.com), outbound DNS queries are routed using the
     * resolver rule that contains the most specific domain name (www.example.com).</p>
     */
    inline CreateResolverRuleRequest& WithDomainName(const char* value) { SetDomainName(value); return *this;}


    /**
     * <p>The IPs that you want Resolver to forward DNS queries to. You can specify
     * only IPv4 addresses. Separate IP addresses with a comma.</p>
     */
    inline const Aws::Vector<TargetAddress>& GetTargetIps() const{ return m_targetIps; }

    /**
     * <p>The IPs that you want Resolver to forward DNS queries to. You can specify
     * only IPv4 addresses. Separate IP addresses with a comma.</p>
     */
    inline bool TargetIpsHasBeenSet() const { return m_targetIpsHasBeenSet; }

    /**
     * <p>The IPs that you want Resolver to forward DNS queries to. You can specify
     * only IPv4 addresses. Separate IP addresses with a comma.</p>
     */
    inline void SetTargetIps(const Aws::Vector<TargetAddress>& value) { m_targetIpsHasBeenSet = true; m_targetIps = value; }

    /**
     * <p>The IPs that you want Resolver to forward DNS queries to. You can specify
     * only IPv4 addresses. Separate IP addresses with a comma.</p>
     */
    inline void SetTargetIps(Aws::Vector<TargetAddress>&& value) { m_targetIpsHasBeenSet = true; m_targetIps = std::move(value); }

    /**
     * <p>The IPs that you want Resolver to forward DNS queries to. You can specify
     * only IPv4 addresses. Separate IP addresses with a comma.</p>
     */
    inline CreateResolverRuleRequest& WithTargetIps(const Aws::Vector<TargetAddress>& value) { SetTargetIps(value); return *this;}

    /**
     * <p>The IPs that you want Resolver to forward DNS queries to. You can specify
     * only IPv4 addresses. Separate IP addresses with a comma.</p>
     */
    inline CreateResolverRuleRequest& WithTargetIps(Aws::Vector<TargetAddress>&& value) { SetTargetIps(std::move(value)); return *this;}

    /**
     * <p>The IPs that you want Resolver to forward DNS queries to. You can specify
     * only IPv4 addresses. Separate IP addresses with a comma.</p>
     */
    inline CreateResolverRuleRequest& AddTargetIps(const TargetAddress& value) { m_targetIpsHasBeenSet = true; m_targetIps.push_back(value); return *this; }

    /**
     * <p>The IPs that you want Resolver to forward DNS queries to. You can specify
     * only IPv4 addresses. Separate IP addresses with a comma.</p>
     */
    inline CreateResolverRuleRequest& AddTargetIps(TargetAddress&& value) { m_targetIpsHasBeenSet = true; m_targetIps.push_back(std::move(value)); return *this; }


    /**
     * <p>The ID of the outbound resolver endpoint that you want to use to route DNS
     * queries to the IP addresses that you specify in <code>TargetIps</code>.</p>
     */
    inline const Aws::String& GetResolverEndpointId() const{ return m_resolverEndpointId; }

    /**
     * <p>The ID of the outbound resolver endpoint that you want to use to route DNS
     * queries to the IP addresses that you specify in <code>TargetIps</code>.</p>
     */
    inline bool ResolverEndpointIdHasBeenSet() const { return m_resolverEndpointIdHasBeenSet; }

    /**
     * <p>The ID of the outbound resolver endpoint that you want to use to route DNS
     * queries to the IP addresses that you specify in <code>TargetIps</code>.</p>
     */
    inline void SetResolverEndpointId(const Aws::String& value) { m_resolverEndpointIdHasBeenSet = true; m_resolverEndpointId = value; }

    /**
     * <p>The ID of the outbound resolver endpoint that you want to use to route DNS
     * queries to the IP addresses that you specify in <code>TargetIps</code>.</p>
     */
    inline void SetResolverEndpointId(Aws::String&& value) { m_resolverEndpointIdHasBeenSet = true; m_resolverEndpointId = std::move(value); }

    /**
     * <p>The ID of the outbound resolver endpoint that you want to use to route DNS
     * queries to the IP addresses that you specify in <code>TargetIps</code>.</p>
     */
    inline void SetResolverEndpointId(const char* value) { m_resolverEndpointIdHasBeenSet = true; m_resolverEndpointId.assign(value); }

    /**
     * <p>The ID of the outbound resolver endpoint that you want to use to route DNS
     * queries to the IP addresses that you specify in <code>TargetIps</code>.</p>
     */
    inline CreateResolverRuleRequest& WithResolverEndpointId(const Aws::String& value) { SetResolverEndpointId(value); return *this;}

    /**
     * <p>The ID of the outbound resolver endpoint that you want to use to route DNS
     * queries to the IP addresses that you specify in <code>TargetIps</code>.</p>
     */
    inline CreateResolverRuleRequest& WithResolverEndpointId(Aws::String&& value) { SetResolverEndpointId(std::move(value)); return *this;}

    /**
     * <p>The ID of the outbound resolver endpoint that you want to use to route DNS
     * queries to the IP addresses that you specify in <code>TargetIps</code>.</p>
     */
    inline CreateResolverRuleRequest& WithResolverEndpointId(const char* value) { SetResolverEndpointId(value); return *this;}


    /**
     * <p>A list of the tag keys and values that you want to associate with the
     * endpoint.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p>A list of the tag keys and values that you want to associate with the
     * endpoint.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>A list of the tag keys and values that you want to associate with the
     * endpoint.</p>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>A list of the tag keys and values that you want to associate with the
     * endpoint.</p>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>A list of the tag keys and values that you want to associate with the
     * endpoint.</p>
     */
    inline CreateResolverRuleRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>A list of the tag keys and values that you want to associate with the
     * endpoint.</p>
     */
    inline CreateResolverRuleRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>A list of the tag keys and values that you want to associate with the
     * endpoint.</p>
     */
    inline CreateResolverRuleRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>A list of the tag keys and values that you want to associate with the
     * endpoint.</p>
     */
    inline CreateResolverRuleRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_creatorRequestId;
    bool m_creatorRequestIdHasBeenSet;

    Aws::String m_name;
    bool m_nameHasBeenSet;

    RuleTypeOption m_ruleType;
    bool m_ruleTypeHasBeenSet;

    Aws::String m_domainName;
    bool m_domainNameHasBeenSet;

    Aws::Vector<TargetAddress> m_targetIps;
    bool m_targetIpsHasBeenSet;

    Aws::String m_resolverEndpointId;
    bool m_resolverEndpointIdHasBeenSet;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet;
  };

} // namespace Model
} // namespace Route53Resolver
} // namespace Aws
