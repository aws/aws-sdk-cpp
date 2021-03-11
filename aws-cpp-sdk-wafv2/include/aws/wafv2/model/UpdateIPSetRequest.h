/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/wafv2/WAFV2_EXPORTS.h>
#include <aws/wafv2/WAFV2Request.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/wafv2/model/Scope.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <utility>

namespace Aws
{
namespace WAFV2
{
namespace Model
{

  /**
   */
  class AWS_WAFV2_API UpdateIPSetRequest : public WAFV2Request
  {
  public:
    UpdateIPSetRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateIPSet"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The name of the IP set. You cannot change the name of an <code>IPSet</code>
     * after you create it.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the IP set. You cannot change the name of an <code>IPSet</code>
     * after you create it.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the IP set. You cannot change the name of an <code>IPSet</code>
     * after you create it.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the IP set. You cannot change the name of an <code>IPSet</code>
     * after you create it.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the IP set. You cannot change the name of an <code>IPSet</code>
     * after you create it.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the IP set. You cannot change the name of an <code>IPSet</code>
     * after you create it.</p>
     */
    inline UpdateIPSetRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the IP set. You cannot change the name of an <code>IPSet</code>
     * after you create it.</p>
     */
    inline UpdateIPSetRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the IP set. You cannot change the name of an <code>IPSet</code>
     * after you create it.</p>
     */
    inline UpdateIPSetRequest& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>Specifies whether this is for an AWS CloudFront distribution or for a
     * regional application. A regional application can be an Application Load Balancer
     * (ALB), an API Gateway REST API, or an AppSync GraphQL API. </p> <p>To work with
     * CloudFront, you must also specify the Region US East (N. Virginia) as follows:
     * </p> <ul> <li> <p>CLI - Specify the Region when you use the CloudFront scope:
     * <code>--scope=CLOUDFRONT --region=us-east-1</code>. </p> </li> <li> <p>API and
     * SDKs - For all calls, use the Region endpoint us-east-1. </p> </li> </ul>
     */
    inline const Scope& GetScope() const{ return m_scope; }

    /**
     * <p>Specifies whether this is for an AWS CloudFront distribution or for a
     * regional application. A regional application can be an Application Load Balancer
     * (ALB), an API Gateway REST API, or an AppSync GraphQL API. </p> <p>To work with
     * CloudFront, you must also specify the Region US East (N. Virginia) as follows:
     * </p> <ul> <li> <p>CLI - Specify the Region when you use the CloudFront scope:
     * <code>--scope=CLOUDFRONT --region=us-east-1</code>. </p> </li> <li> <p>API and
     * SDKs - For all calls, use the Region endpoint us-east-1. </p> </li> </ul>
     */
    inline bool ScopeHasBeenSet() const { return m_scopeHasBeenSet; }

    /**
     * <p>Specifies whether this is for an AWS CloudFront distribution or for a
     * regional application. A regional application can be an Application Load Balancer
     * (ALB), an API Gateway REST API, or an AppSync GraphQL API. </p> <p>To work with
     * CloudFront, you must also specify the Region US East (N. Virginia) as follows:
     * </p> <ul> <li> <p>CLI - Specify the Region when you use the CloudFront scope:
     * <code>--scope=CLOUDFRONT --region=us-east-1</code>. </p> </li> <li> <p>API and
     * SDKs - For all calls, use the Region endpoint us-east-1. </p> </li> </ul>
     */
    inline void SetScope(const Scope& value) { m_scopeHasBeenSet = true; m_scope = value; }

    /**
     * <p>Specifies whether this is for an AWS CloudFront distribution or for a
     * regional application. A regional application can be an Application Load Balancer
     * (ALB), an API Gateway REST API, or an AppSync GraphQL API. </p> <p>To work with
     * CloudFront, you must also specify the Region US East (N. Virginia) as follows:
     * </p> <ul> <li> <p>CLI - Specify the Region when you use the CloudFront scope:
     * <code>--scope=CLOUDFRONT --region=us-east-1</code>. </p> </li> <li> <p>API and
     * SDKs - For all calls, use the Region endpoint us-east-1. </p> </li> </ul>
     */
    inline void SetScope(Scope&& value) { m_scopeHasBeenSet = true; m_scope = std::move(value); }

    /**
     * <p>Specifies whether this is for an AWS CloudFront distribution or for a
     * regional application. A regional application can be an Application Load Balancer
     * (ALB), an API Gateway REST API, or an AppSync GraphQL API. </p> <p>To work with
     * CloudFront, you must also specify the Region US East (N. Virginia) as follows:
     * </p> <ul> <li> <p>CLI - Specify the Region when you use the CloudFront scope:
     * <code>--scope=CLOUDFRONT --region=us-east-1</code>. </p> </li> <li> <p>API and
     * SDKs - For all calls, use the Region endpoint us-east-1. </p> </li> </ul>
     */
    inline UpdateIPSetRequest& WithScope(const Scope& value) { SetScope(value); return *this;}

    /**
     * <p>Specifies whether this is for an AWS CloudFront distribution or for a
     * regional application. A regional application can be an Application Load Balancer
     * (ALB), an API Gateway REST API, or an AppSync GraphQL API. </p> <p>To work with
     * CloudFront, you must also specify the Region US East (N. Virginia) as follows:
     * </p> <ul> <li> <p>CLI - Specify the Region when you use the CloudFront scope:
     * <code>--scope=CLOUDFRONT --region=us-east-1</code>. </p> </li> <li> <p>API and
     * SDKs - For all calls, use the Region endpoint us-east-1. </p> </li> </ul>
     */
    inline UpdateIPSetRequest& WithScope(Scope&& value) { SetScope(std::move(value)); return *this;}


    /**
     * <p>A unique identifier for the set. This ID is returned in the responses to
     * create and list commands. You provide it to operations like update and
     * delete.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>A unique identifier for the set. This ID is returned in the responses to
     * create and list commands. You provide it to operations like update and
     * delete.</p>
     */
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }

    /**
     * <p>A unique identifier for the set. This ID is returned in the responses to
     * create and list commands. You provide it to operations like update and
     * delete.</p>
     */
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * <p>A unique identifier for the set. This ID is returned in the responses to
     * create and list commands. You provide it to operations like update and
     * delete.</p>
     */
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }

    /**
     * <p>A unique identifier for the set. This ID is returned in the responses to
     * create and list commands. You provide it to operations like update and
     * delete.</p>
     */
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    /**
     * <p>A unique identifier for the set. This ID is returned in the responses to
     * create and list commands. You provide it to operations like update and
     * delete.</p>
     */
    inline UpdateIPSetRequest& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>A unique identifier for the set. This ID is returned in the responses to
     * create and list commands. You provide it to operations like update and
     * delete.</p>
     */
    inline UpdateIPSetRequest& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p>A unique identifier for the set. This ID is returned in the responses to
     * create and list commands. You provide it to operations like update and
     * delete.</p>
     */
    inline UpdateIPSetRequest& WithId(const char* value) { SetId(value); return *this;}


    /**
     * <p>A description of the IP set that helps with identification. </p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>A description of the IP set that helps with identification. </p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>A description of the IP set that helps with identification. </p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>A description of the IP set that helps with identification. </p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>A description of the IP set that helps with identification. </p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>A description of the IP set that helps with identification. </p>
     */
    inline UpdateIPSetRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>A description of the IP set that helps with identification. </p>
     */
    inline UpdateIPSetRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>A description of the IP set that helps with identification. </p>
     */
    inline UpdateIPSetRequest& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>Contains an array of strings that specify one or more IP addresses or blocks
     * of IP addresses in Classless Inter-Domain Routing (CIDR) notation. AWS WAF
     * supports all IPv4 and IPv6 CIDR ranges except for /0. </p> <p>Examples: </p>
     * <ul> <li> <p>To configure AWS WAF to allow, block, or count requests that
     * originated from the IP address 192.0.2.44, specify
     * <code>192.0.2.44/32</code>.</p> </li> <li> <p>To configure AWS WAF to allow,
     * block, or count requests that originated from IP addresses from 192.0.2.0 to
     * 192.0.2.255, specify <code>192.0.2.0/24</code>.</p> </li> <li> <p>To configure
     * AWS WAF to allow, block, or count requests that originated from the IP address
     * 1111:0000:0000:0000:0000:0000:0000:0111, specify
     * <code>1111:0000:0000:0000:0000:0000:0000:0111/128</code>.</p> </li> <li> <p>To
     * configure AWS WAF to allow, block, or count requests that originated from IP
     * addresses 1111:0000:0000:0000:0000:0000:0000:0000 to
     * 1111:0000:0000:0000:ffff:ffff:ffff:ffff, specify
     * <code>1111:0000:0000:0000:0000:0000:0000:0000/64</code>.</p> </li> </ul> <p>For
     * more information about CIDR notation, see the Wikipedia entry <a
     * href="https://en.wikipedia.org/wiki/Classless_Inter-Domain_Routing">Classless
     * Inter-Domain Routing</a>.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAddresses() const{ return m_addresses; }

    /**
     * <p>Contains an array of strings that specify one or more IP addresses or blocks
     * of IP addresses in Classless Inter-Domain Routing (CIDR) notation. AWS WAF
     * supports all IPv4 and IPv6 CIDR ranges except for /0. </p> <p>Examples: </p>
     * <ul> <li> <p>To configure AWS WAF to allow, block, or count requests that
     * originated from the IP address 192.0.2.44, specify
     * <code>192.0.2.44/32</code>.</p> </li> <li> <p>To configure AWS WAF to allow,
     * block, or count requests that originated from IP addresses from 192.0.2.0 to
     * 192.0.2.255, specify <code>192.0.2.0/24</code>.</p> </li> <li> <p>To configure
     * AWS WAF to allow, block, or count requests that originated from the IP address
     * 1111:0000:0000:0000:0000:0000:0000:0111, specify
     * <code>1111:0000:0000:0000:0000:0000:0000:0111/128</code>.</p> </li> <li> <p>To
     * configure AWS WAF to allow, block, or count requests that originated from IP
     * addresses 1111:0000:0000:0000:0000:0000:0000:0000 to
     * 1111:0000:0000:0000:ffff:ffff:ffff:ffff, specify
     * <code>1111:0000:0000:0000:0000:0000:0000:0000/64</code>.</p> </li> </ul> <p>For
     * more information about CIDR notation, see the Wikipedia entry <a
     * href="https://en.wikipedia.org/wiki/Classless_Inter-Domain_Routing">Classless
     * Inter-Domain Routing</a>.</p>
     */
    inline bool AddressesHasBeenSet() const { return m_addressesHasBeenSet; }

    /**
     * <p>Contains an array of strings that specify one or more IP addresses or blocks
     * of IP addresses in Classless Inter-Domain Routing (CIDR) notation. AWS WAF
     * supports all IPv4 and IPv6 CIDR ranges except for /0. </p> <p>Examples: </p>
     * <ul> <li> <p>To configure AWS WAF to allow, block, or count requests that
     * originated from the IP address 192.0.2.44, specify
     * <code>192.0.2.44/32</code>.</p> </li> <li> <p>To configure AWS WAF to allow,
     * block, or count requests that originated from IP addresses from 192.0.2.0 to
     * 192.0.2.255, specify <code>192.0.2.0/24</code>.</p> </li> <li> <p>To configure
     * AWS WAF to allow, block, or count requests that originated from the IP address
     * 1111:0000:0000:0000:0000:0000:0000:0111, specify
     * <code>1111:0000:0000:0000:0000:0000:0000:0111/128</code>.</p> </li> <li> <p>To
     * configure AWS WAF to allow, block, or count requests that originated from IP
     * addresses 1111:0000:0000:0000:0000:0000:0000:0000 to
     * 1111:0000:0000:0000:ffff:ffff:ffff:ffff, specify
     * <code>1111:0000:0000:0000:0000:0000:0000:0000/64</code>.</p> </li> </ul> <p>For
     * more information about CIDR notation, see the Wikipedia entry <a
     * href="https://en.wikipedia.org/wiki/Classless_Inter-Domain_Routing">Classless
     * Inter-Domain Routing</a>.</p>
     */
    inline void SetAddresses(const Aws::Vector<Aws::String>& value) { m_addressesHasBeenSet = true; m_addresses = value; }

    /**
     * <p>Contains an array of strings that specify one or more IP addresses or blocks
     * of IP addresses in Classless Inter-Domain Routing (CIDR) notation. AWS WAF
     * supports all IPv4 and IPv6 CIDR ranges except for /0. </p> <p>Examples: </p>
     * <ul> <li> <p>To configure AWS WAF to allow, block, or count requests that
     * originated from the IP address 192.0.2.44, specify
     * <code>192.0.2.44/32</code>.</p> </li> <li> <p>To configure AWS WAF to allow,
     * block, or count requests that originated from IP addresses from 192.0.2.0 to
     * 192.0.2.255, specify <code>192.0.2.0/24</code>.</p> </li> <li> <p>To configure
     * AWS WAF to allow, block, or count requests that originated from the IP address
     * 1111:0000:0000:0000:0000:0000:0000:0111, specify
     * <code>1111:0000:0000:0000:0000:0000:0000:0111/128</code>.</p> </li> <li> <p>To
     * configure AWS WAF to allow, block, or count requests that originated from IP
     * addresses 1111:0000:0000:0000:0000:0000:0000:0000 to
     * 1111:0000:0000:0000:ffff:ffff:ffff:ffff, specify
     * <code>1111:0000:0000:0000:0000:0000:0000:0000/64</code>.</p> </li> </ul> <p>For
     * more information about CIDR notation, see the Wikipedia entry <a
     * href="https://en.wikipedia.org/wiki/Classless_Inter-Domain_Routing">Classless
     * Inter-Domain Routing</a>.</p>
     */
    inline void SetAddresses(Aws::Vector<Aws::String>&& value) { m_addressesHasBeenSet = true; m_addresses = std::move(value); }

    /**
     * <p>Contains an array of strings that specify one or more IP addresses or blocks
     * of IP addresses in Classless Inter-Domain Routing (CIDR) notation. AWS WAF
     * supports all IPv4 and IPv6 CIDR ranges except for /0. </p> <p>Examples: </p>
     * <ul> <li> <p>To configure AWS WAF to allow, block, or count requests that
     * originated from the IP address 192.0.2.44, specify
     * <code>192.0.2.44/32</code>.</p> </li> <li> <p>To configure AWS WAF to allow,
     * block, or count requests that originated from IP addresses from 192.0.2.0 to
     * 192.0.2.255, specify <code>192.0.2.0/24</code>.</p> </li> <li> <p>To configure
     * AWS WAF to allow, block, or count requests that originated from the IP address
     * 1111:0000:0000:0000:0000:0000:0000:0111, specify
     * <code>1111:0000:0000:0000:0000:0000:0000:0111/128</code>.</p> </li> <li> <p>To
     * configure AWS WAF to allow, block, or count requests that originated from IP
     * addresses 1111:0000:0000:0000:0000:0000:0000:0000 to
     * 1111:0000:0000:0000:ffff:ffff:ffff:ffff, specify
     * <code>1111:0000:0000:0000:0000:0000:0000:0000/64</code>.</p> </li> </ul> <p>For
     * more information about CIDR notation, see the Wikipedia entry <a
     * href="https://en.wikipedia.org/wiki/Classless_Inter-Domain_Routing">Classless
     * Inter-Domain Routing</a>.</p>
     */
    inline UpdateIPSetRequest& WithAddresses(const Aws::Vector<Aws::String>& value) { SetAddresses(value); return *this;}

    /**
     * <p>Contains an array of strings that specify one or more IP addresses or blocks
     * of IP addresses in Classless Inter-Domain Routing (CIDR) notation. AWS WAF
     * supports all IPv4 and IPv6 CIDR ranges except for /0. </p> <p>Examples: </p>
     * <ul> <li> <p>To configure AWS WAF to allow, block, or count requests that
     * originated from the IP address 192.0.2.44, specify
     * <code>192.0.2.44/32</code>.</p> </li> <li> <p>To configure AWS WAF to allow,
     * block, or count requests that originated from IP addresses from 192.0.2.0 to
     * 192.0.2.255, specify <code>192.0.2.0/24</code>.</p> </li> <li> <p>To configure
     * AWS WAF to allow, block, or count requests that originated from the IP address
     * 1111:0000:0000:0000:0000:0000:0000:0111, specify
     * <code>1111:0000:0000:0000:0000:0000:0000:0111/128</code>.</p> </li> <li> <p>To
     * configure AWS WAF to allow, block, or count requests that originated from IP
     * addresses 1111:0000:0000:0000:0000:0000:0000:0000 to
     * 1111:0000:0000:0000:ffff:ffff:ffff:ffff, specify
     * <code>1111:0000:0000:0000:0000:0000:0000:0000/64</code>.</p> </li> </ul> <p>For
     * more information about CIDR notation, see the Wikipedia entry <a
     * href="https://en.wikipedia.org/wiki/Classless_Inter-Domain_Routing">Classless
     * Inter-Domain Routing</a>.</p>
     */
    inline UpdateIPSetRequest& WithAddresses(Aws::Vector<Aws::String>&& value) { SetAddresses(std::move(value)); return *this;}

    /**
     * <p>Contains an array of strings that specify one or more IP addresses or blocks
     * of IP addresses in Classless Inter-Domain Routing (CIDR) notation. AWS WAF
     * supports all IPv4 and IPv6 CIDR ranges except for /0. </p> <p>Examples: </p>
     * <ul> <li> <p>To configure AWS WAF to allow, block, or count requests that
     * originated from the IP address 192.0.2.44, specify
     * <code>192.0.2.44/32</code>.</p> </li> <li> <p>To configure AWS WAF to allow,
     * block, or count requests that originated from IP addresses from 192.0.2.0 to
     * 192.0.2.255, specify <code>192.0.2.0/24</code>.</p> </li> <li> <p>To configure
     * AWS WAF to allow, block, or count requests that originated from the IP address
     * 1111:0000:0000:0000:0000:0000:0000:0111, specify
     * <code>1111:0000:0000:0000:0000:0000:0000:0111/128</code>.</p> </li> <li> <p>To
     * configure AWS WAF to allow, block, or count requests that originated from IP
     * addresses 1111:0000:0000:0000:0000:0000:0000:0000 to
     * 1111:0000:0000:0000:ffff:ffff:ffff:ffff, specify
     * <code>1111:0000:0000:0000:0000:0000:0000:0000/64</code>.</p> </li> </ul> <p>For
     * more information about CIDR notation, see the Wikipedia entry <a
     * href="https://en.wikipedia.org/wiki/Classless_Inter-Domain_Routing">Classless
     * Inter-Domain Routing</a>.</p>
     */
    inline UpdateIPSetRequest& AddAddresses(const Aws::String& value) { m_addressesHasBeenSet = true; m_addresses.push_back(value); return *this; }

    /**
     * <p>Contains an array of strings that specify one or more IP addresses or blocks
     * of IP addresses in Classless Inter-Domain Routing (CIDR) notation. AWS WAF
     * supports all IPv4 and IPv6 CIDR ranges except for /0. </p> <p>Examples: </p>
     * <ul> <li> <p>To configure AWS WAF to allow, block, or count requests that
     * originated from the IP address 192.0.2.44, specify
     * <code>192.0.2.44/32</code>.</p> </li> <li> <p>To configure AWS WAF to allow,
     * block, or count requests that originated from IP addresses from 192.0.2.0 to
     * 192.0.2.255, specify <code>192.0.2.0/24</code>.</p> </li> <li> <p>To configure
     * AWS WAF to allow, block, or count requests that originated from the IP address
     * 1111:0000:0000:0000:0000:0000:0000:0111, specify
     * <code>1111:0000:0000:0000:0000:0000:0000:0111/128</code>.</p> </li> <li> <p>To
     * configure AWS WAF to allow, block, or count requests that originated from IP
     * addresses 1111:0000:0000:0000:0000:0000:0000:0000 to
     * 1111:0000:0000:0000:ffff:ffff:ffff:ffff, specify
     * <code>1111:0000:0000:0000:0000:0000:0000:0000/64</code>.</p> </li> </ul> <p>For
     * more information about CIDR notation, see the Wikipedia entry <a
     * href="https://en.wikipedia.org/wiki/Classless_Inter-Domain_Routing">Classless
     * Inter-Domain Routing</a>.</p>
     */
    inline UpdateIPSetRequest& AddAddresses(Aws::String&& value) { m_addressesHasBeenSet = true; m_addresses.push_back(std::move(value)); return *this; }

    /**
     * <p>Contains an array of strings that specify one or more IP addresses or blocks
     * of IP addresses in Classless Inter-Domain Routing (CIDR) notation. AWS WAF
     * supports all IPv4 and IPv6 CIDR ranges except for /0. </p> <p>Examples: </p>
     * <ul> <li> <p>To configure AWS WAF to allow, block, or count requests that
     * originated from the IP address 192.0.2.44, specify
     * <code>192.0.2.44/32</code>.</p> </li> <li> <p>To configure AWS WAF to allow,
     * block, or count requests that originated from IP addresses from 192.0.2.0 to
     * 192.0.2.255, specify <code>192.0.2.0/24</code>.</p> </li> <li> <p>To configure
     * AWS WAF to allow, block, or count requests that originated from the IP address
     * 1111:0000:0000:0000:0000:0000:0000:0111, specify
     * <code>1111:0000:0000:0000:0000:0000:0000:0111/128</code>.</p> </li> <li> <p>To
     * configure AWS WAF to allow, block, or count requests that originated from IP
     * addresses 1111:0000:0000:0000:0000:0000:0000:0000 to
     * 1111:0000:0000:0000:ffff:ffff:ffff:ffff, specify
     * <code>1111:0000:0000:0000:0000:0000:0000:0000/64</code>.</p> </li> </ul> <p>For
     * more information about CIDR notation, see the Wikipedia entry <a
     * href="https://en.wikipedia.org/wiki/Classless_Inter-Domain_Routing">Classless
     * Inter-Domain Routing</a>.</p>
     */
    inline UpdateIPSetRequest& AddAddresses(const char* value) { m_addressesHasBeenSet = true; m_addresses.push_back(value); return *this; }


    /**
     * <p>A token used for optimistic locking. AWS WAF returns a token to your get and
     * list requests, to mark the state of the entity at the time of the request. To
     * make changes to the entity associated with the token, you provide the token to
     * operations like update and delete. AWS WAF uses the token to ensure that no
     * changes have been made to the entity since you last retrieved it. If a change
     * has been made, the update fails with a <code>WAFOptimisticLockException</code>.
     * If this happens, perform another get, and use the new token returned by that
     * operation. </p>
     */
    inline const Aws::String& GetLockToken() const{ return m_lockToken; }

    /**
     * <p>A token used for optimistic locking. AWS WAF returns a token to your get and
     * list requests, to mark the state of the entity at the time of the request. To
     * make changes to the entity associated with the token, you provide the token to
     * operations like update and delete. AWS WAF uses the token to ensure that no
     * changes have been made to the entity since you last retrieved it. If a change
     * has been made, the update fails with a <code>WAFOptimisticLockException</code>.
     * If this happens, perform another get, and use the new token returned by that
     * operation. </p>
     */
    inline bool LockTokenHasBeenSet() const { return m_lockTokenHasBeenSet; }

    /**
     * <p>A token used for optimistic locking. AWS WAF returns a token to your get and
     * list requests, to mark the state of the entity at the time of the request. To
     * make changes to the entity associated with the token, you provide the token to
     * operations like update and delete. AWS WAF uses the token to ensure that no
     * changes have been made to the entity since you last retrieved it. If a change
     * has been made, the update fails with a <code>WAFOptimisticLockException</code>.
     * If this happens, perform another get, and use the new token returned by that
     * operation. </p>
     */
    inline void SetLockToken(const Aws::String& value) { m_lockTokenHasBeenSet = true; m_lockToken = value; }

    /**
     * <p>A token used for optimistic locking. AWS WAF returns a token to your get and
     * list requests, to mark the state of the entity at the time of the request. To
     * make changes to the entity associated with the token, you provide the token to
     * operations like update and delete. AWS WAF uses the token to ensure that no
     * changes have been made to the entity since you last retrieved it. If a change
     * has been made, the update fails with a <code>WAFOptimisticLockException</code>.
     * If this happens, perform another get, and use the new token returned by that
     * operation. </p>
     */
    inline void SetLockToken(Aws::String&& value) { m_lockTokenHasBeenSet = true; m_lockToken = std::move(value); }

    /**
     * <p>A token used for optimistic locking. AWS WAF returns a token to your get and
     * list requests, to mark the state of the entity at the time of the request. To
     * make changes to the entity associated with the token, you provide the token to
     * operations like update and delete. AWS WAF uses the token to ensure that no
     * changes have been made to the entity since you last retrieved it. If a change
     * has been made, the update fails with a <code>WAFOptimisticLockException</code>.
     * If this happens, perform another get, and use the new token returned by that
     * operation. </p>
     */
    inline void SetLockToken(const char* value) { m_lockTokenHasBeenSet = true; m_lockToken.assign(value); }

    /**
     * <p>A token used for optimistic locking. AWS WAF returns a token to your get and
     * list requests, to mark the state of the entity at the time of the request. To
     * make changes to the entity associated with the token, you provide the token to
     * operations like update and delete. AWS WAF uses the token to ensure that no
     * changes have been made to the entity since you last retrieved it. If a change
     * has been made, the update fails with a <code>WAFOptimisticLockException</code>.
     * If this happens, perform another get, and use the new token returned by that
     * operation. </p>
     */
    inline UpdateIPSetRequest& WithLockToken(const Aws::String& value) { SetLockToken(value); return *this;}

    /**
     * <p>A token used for optimistic locking. AWS WAF returns a token to your get and
     * list requests, to mark the state of the entity at the time of the request. To
     * make changes to the entity associated with the token, you provide the token to
     * operations like update and delete. AWS WAF uses the token to ensure that no
     * changes have been made to the entity since you last retrieved it. If a change
     * has been made, the update fails with a <code>WAFOptimisticLockException</code>.
     * If this happens, perform another get, and use the new token returned by that
     * operation. </p>
     */
    inline UpdateIPSetRequest& WithLockToken(Aws::String&& value) { SetLockToken(std::move(value)); return *this;}

    /**
     * <p>A token used for optimistic locking. AWS WAF returns a token to your get and
     * list requests, to mark the state of the entity at the time of the request. To
     * make changes to the entity associated with the token, you provide the token to
     * operations like update and delete. AWS WAF uses the token to ensure that no
     * changes have been made to the entity since you last retrieved it. If a change
     * has been made, the update fails with a <code>WAFOptimisticLockException</code>.
     * If this happens, perform another get, and use the new token returned by that
     * operation. </p>
     */
    inline UpdateIPSetRequest& WithLockToken(const char* value) { SetLockToken(value); return *this;}

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet;

    Scope m_scope;
    bool m_scopeHasBeenSet;

    Aws::String m_id;
    bool m_idHasBeenSet;

    Aws::String m_description;
    bool m_descriptionHasBeenSet;

    Aws::Vector<Aws::String> m_addresses;
    bool m_addressesHasBeenSet;

    Aws::String m_lockToken;
    bool m_lockTokenHasBeenSet;
  };

} // namespace Model
} // namespace WAFV2
} // namespace Aws
