/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/wafv2/WAFV2_EXPORTS.h>
#include <aws/wafv2/WAFV2Request.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/wafv2/model/Scope.h>
#include <aws/wafv2/model/IPAddressVersion.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/wafv2/model/Tag.h>
#include <utility>

namespace Aws
{
namespace WAFV2
{
namespace Model
{

  /**
   */
  class CreateIPSetRequest : public WAFV2Request
  {
  public:
    AWS_WAFV2_API CreateIPSetRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateIPSet"; }

    AWS_WAFV2_API Aws::String SerializePayload() const override;

    AWS_WAFV2_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


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
    inline CreateIPSetRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the IP set. You cannot change the name of an <code>IPSet</code>
     * after you create it.</p>
     */
    inline CreateIPSetRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the IP set. You cannot change the name of an <code>IPSet</code>
     * after you create it.</p>
     */
    inline CreateIPSetRequest& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>Specifies whether this is for an Amazon CloudFront distribution or for a
     * regional application. A regional application can be an Application Load Balancer
     * (ALB), an Amazon API Gateway REST API, an AppSync GraphQL API, or an Amazon
     * Cognito user pool. </p> <p>To work with CloudFront, you must also specify the
     * Region US East (N. Virginia) as follows: </p> <ul> <li> <p>CLI - Specify the
     * Region when you use the CloudFront scope: <code>--scope=CLOUDFRONT
     * --region=us-east-1</code>. </p> </li> <li> <p>API and SDKs - For all calls, use
     * the Region endpoint us-east-1. </p> </li> </ul>
     */
    inline const Scope& GetScope() const{ return m_scope; }

    /**
     * <p>Specifies whether this is for an Amazon CloudFront distribution or for a
     * regional application. A regional application can be an Application Load Balancer
     * (ALB), an Amazon API Gateway REST API, an AppSync GraphQL API, or an Amazon
     * Cognito user pool. </p> <p>To work with CloudFront, you must also specify the
     * Region US East (N. Virginia) as follows: </p> <ul> <li> <p>CLI - Specify the
     * Region when you use the CloudFront scope: <code>--scope=CLOUDFRONT
     * --region=us-east-1</code>. </p> </li> <li> <p>API and SDKs - For all calls, use
     * the Region endpoint us-east-1. </p> </li> </ul>
     */
    inline bool ScopeHasBeenSet() const { return m_scopeHasBeenSet; }

    /**
     * <p>Specifies whether this is for an Amazon CloudFront distribution or for a
     * regional application. A regional application can be an Application Load Balancer
     * (ALB), an Amazon API Gateway REST API, an AppSync GraphQL API, or an Amazon
     * Cognito user pool. </p> <p>To work with CloudFront, you must also specify the
     * Region US East (N. Virginia) as follows: </p> <ul> <li> <p>CLI - Specify the
     * Region when you use the CloudFront scope: <code>--scope=CLOUDFRONT
     * --region=us-east-1</code>. </p> </li> <li> <p>API and SDKs - For all calls, use
     * the Region endpoint us-east-1. </p> </li> </ul>
     */
    inline void SetScope(const Scope& value) { m_scopeHasBeenSet = true; m_scope = value; }

    /**
     * <p>Specifies whether this is for an Amazon CloudFront distribution or for a
     * regional application. A regional application can be an Application Load Balancer
     * (ALB), an Amazon API Gateway REST API, an AppSync GraphQL API, or an Amazon
     * Cognito user pool. </p> <p>To work with CloudFront, you must also specify the
     * Region US East (N. Virginia) as follows: </p> <ul> <li> <p>CLI - Specify the
     * Region when you use the CloudFront scope: <code>--scope=CLOUDFRONT
     * --region=us-east-1</code>. </p> </li> <li> <p>API and SDKs - For all calls, use
     * the Region endpoint us-east-1. </p> </li> </ul>
     */
    inline void SetScope(Scope&& value) { m_scopeHasBeenSet = true; m_scope = std::move(value); }

    /**
     * <p>Specifies whether this is for an Amazon CloudFront distribution or for a
     * regional application. A regional application can be an Application Load Balancer
     * (ALB), an Amazon API Gateway REST API, an AppSync GraphQL API, or an Amazon
     * Cognito user pool. </p> <p>To work with CloudFront, you must also specify the
     * Region US East (N. Virginia) as follows: </p> <ul> <li> <p>CLI - Specify the
     * Region when you use the CloudFront scope: <code>--scope=CLOUDFRONT
     * --region=us-east-1</code>. </p> </li> <li> <p>API and SDKs - For all calls, use
     * the Region endpoint us-east-1. </p> </li> </ul>
     */
    inline CreateIPSetRequest& WithScope(const Scope& value) { SetScope(value); return *this;}

    /**
     * <p>Specifies whether this is for an Amazon CloudFront distribution or for a
     * regional application. A regional application can be an Application Load Balancer
     * (ALB), an Amazon API Gateway REST API, an AppSync GraphQL API, or an Amazon
     * Cognito user pool. </p> <p>To work with CloudFront, you must also specify the
     * Region US East (N. Virginia) as follows: </p> <ul> <li> <p>CLI - Specify the
     * Region when you use the CloudFront scope: <code>--scope=CLOUDFRONT
     * --region=us-east-1</code>. </p> </li> <li> <p>API and SDKs - For all calls, use
     * the Region endpoint us-east-1. </p> </li> </ul>
     */
    inline CreateIPSetRequest& WithScope(Scope&& value) { SetScope(std::move(value)); return *this;}


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
    inline CreateIPSetRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>A description of the IP set that helps with identification. </p>
     */
    inline CreateIPSetRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>A description of the IP set that helps with identification. </p>
     */
    inline CreateIPSetRequest& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The version of the IP addresses, either <code>IPV4</code> or
     * <code>IPV6</code>. </p>
     */
    inline const IPAddressVersion& GetIPAddressVersion() const{ return m_iPAddressVersion; }

    /**
     * <p>The version of the IP addresses, either <code>IPV4</code> or
     * <code>IPV6</code>. </p>
     */
    inline bool IPAddressVersionHasBeenSet() const { return m_iPAddressVersionHasBeenSet; }

    /**
     * <p>The version of the IP addresses, either <code>IPV4</code> or
     * <code>IPV6</code>. </p>
     */
    inline void SetIPAddressVersion(const IPAddressVersion& value) { m_iPAddressVersionHasBeenSet = true; m_iPAddressVersion = value; }

    /**
     * <p>The version of the IP addresses, either <code>IPV4</code> or
     * <code>IPV6</code>. </p>
     */
    inline void SetIPAddressVersion(IPAddressVersion&& value) { m_iPAddressVersionHasBeenSet = true; m_iPAddressVersion = std::move(value); }

    /**
     * <p>The version of the IP addresses, either <code>IPV4</code> or
     * <code>IPV6</code>. </p>
     */
    inline CreateIPSetRequest& WithIPAddressVersion(const IPAddressVersion& value) { SetIPAddressVersion(value); return *this;}

    /**
     * <p>The version of the IP addresses, either <code>IPV4</code> or
     * <code>IPV6</code>. </p>
     */
    inline CreateIPSetRequest& WithIPAddressVersion(IPAddressVersion&& value) { SetIPAddressVersion(std::move(value)); return *this;}


    /**
     * <p>Contains an array of strings that specifies zero or more IP addresses or
     * blocks of IP addresses. All addresses must be specified using Classless
     * Inter-Domain Routing (CIDR) notation. WAF supports all IPv4 and IPv6 CIDR ranges
     * except for <code>/0</code>. </p> <p>Example address strings: </p> <ul> <li>
     * <p>To configure WAF to allow, block, or count requests that originated from the
     * IP address 192.0.2.44, specify <code>192.0.2.44/32</code>.</p> </li> <li> <p>To
     * configure WAF to allow, block, or count requests that originated from IP
     * addresses from 192.0.2.0 to 192.0.2.255, specify <code>192.0.2.0/24</code>.</p>
     * </li> <li> <p>To configure WAF to allow, block, or count requests that
     * originated from the IP address 1111:0000:0000:0000:0000:0000:0000:0111, specify
     * <code>1111:0000:0000:0000:0000:0000:0000:0111/128</code>.</p> </li> <li> <p>To
     * configure WAF to allow, block, or count requests that originated from IP
     * addresses 1111:0000:0000:0000:0000:0000:0000:0000 to
     * 1111:0000:0000:0000:ffff:ffff:ffff:ffff, specify
     * <code>1111:0000:0000:0000:0000:0000:0000:0000/64</code>.</p> </li> </ul> <p>For
     * more information about CIDR notation, see the Wikipedia entry <a
     * href="https://en.wikipedia.org/wiki/Classless_Inter-Domain_Routing">Classless
     * Inter-Domain Routing</a>.</p> <p>Example JSON <code>Addresses</code>
     * specifications: </p> <ul> <li> <p>Empty array: <code>"Addresses": []</code> </p>
     * </li> <li> <p>Array with one address: <code>"Addresses":
     * ["192.0.2.44/32"]</code> </p> </li> <li> <p>Array with three addresses:
     * <code>"Addresses": ["192.0.2.44/32", "192.0.2.0/24", "192.0.0.0/16"]</code> </p>
     * </li> <li> <p>INVALID specification: <code>"Addresses": [""]</code> INVALID </p>
     * </li> </ul>
     */
    inline const Aws::Vector<Aws::String>& GetAddresses() const{ return m_addresses; }

    /**
     * <p>Contains an array of strings that specifies zero or more IP addresses or
     * blocks of IP addresses. All addresses must be specified using Classless
     * Inter-Domain Routing (CIDR) notation. WAF supports all IPv4 and IPv6 CIDR ranges
     * except for <code>/0</code>. </p> <p>Example address strings: </p> <ul> <li>
     * <p>To configure WAF to allow, block, or count requests that originated from the
     * IP address 192.0.2.44, specify <code>192.0.2.44/32</code>.</p> </li> <li> <p>To
     * configure WAF to allow, block, or count requests that originated from IP
     * addresses from 192.0.2.0 to 192.0.2.255, specify <code>192.0.2.0/24</code>.</p>
     * </li> <li> <p>To configure WAF to allow, block, or count requests that
     * originated from the IP address 1111:0000:0000:0000:0000:0000:0000:0111, specify
     * <code>1111:0000:0000:0000:0000:0000:0000:0111/128</code>.</p> </li> <li> <p>To
     * configure WAF to allow, block, or count requests that originated from IP
     * addresses 1111:0000:0000:0000:0000:0000:0000:0000 to
     * 1111:0000:0000:0000:ffff:ffff:ffff:ffff, specify
     * <code>1111:0000:0000:0000:0000:0000:0000:0000/64</code>.</p> </li> </ul> <p>For
     * more information about CIDR notation, see the Wikipedia entry <a
     * href="https://en.wikipedia.org/wiki/Classless_Inter-Domain_Routing">Classless
     * Inter-Domain Routing</a>.</p> <p>Example JSON <code>Addresses</code>
     * specifications: </p> <ul> <li> <p>Empty array: <code>"Addresses": []</code> </p>
     * </li> <li> <p>Array with one address: <code>"Addresses":
     * ["192.0.2.44/32"]</code> </p> </li> <li> <p>Array with three addresses:
     * <code>"Addresses": ["192.0.2.44/32", "192.0.2.0/24", "192.0.0.0/16"]</code> </p>
     * </li> <li> <p>INVALID specification: <code>"Addresses": [""]</code> INVALID </p>
     * </li> </ul>
     */
    inline bool AddressesHasBeenSet() const { return m_addressesHasBeenSet; }

    /**
     * <p>Contains an array of strings that specifies zero or more IP addresses or
     * blocks of IP addresses. All addresses must be specified using Classless
     * Inter-Domain Routing (CIDR) notation. WAF supports all IPv4 and IPv6 CIDR ranges
     * except for <code>/0</code>. </p> <p>Example address strings: </p> <ul> <li>
     * <p>To configure WAF to allow, block, or count requests that originated from the
     * IP address 192.0.2.44, specify <code>192.0.2.44/32</code>.</p> </li> <li> <p>To
     * configure WAF to allow, block, or count requests that originated from IP
     * addresses from 192.0.2.0 to 192.0.2.255, specify <code>192.0.2.0/24</code>.</p>
     * </li> <li> <p>To configure WAF to allow, block, or count requests that
     * originated from the IP address 1111:0000:0000:0000:0000:0000:0000:0111, specify
     * <code>1111:0000:0000:0000:0000:0000:0000:0111/128</code>.</p> </li> <li> <p>To
     * configure WAF to allow, block, or count requests that originated from IP
     * addresses 1111:0000:0000:0000:0000:0000:0000:0000 to
     * 1111:0000:0000:0000:ffff:ffff:ffff:ffff, specify
     * <code>1111:0000:0000:0000:0000:0000:0000:0000/64</code>.</p> </li> </ul> <p>For
     * more information about CIDR notation, see the Wikipedia entry <a
     * href="https://en.wikipedia.org/wiki/Classless_Inter-Domain_Routing">Classless
     * Inter-Domain Routing</a>.</p> <p>Example JSON <code>Addresses</code>
     * specifications: </p> <ul> <li> <p>Empty array: <code>"Addresses": []</code> </p>
     * </li> <li> <p>Array with one address: <code>"Addresses":
     * ["192.0.2.44/32"]</code> </p> </li> <li> <p>Array with three addresses:
     * <code>"Addresses": ["192.0.2.44/32", "192.0.2.0/24", "192.0.0.0/16"]</code> </p>
     * </li> <li> <p>INVALID specification: <code>"Addresses": [""]</code> INVALID </p>
     * </li> </ul>
     */
    inline void SetAddresses(const Aws::Vector<Aws::String>& value) { m_addressesHasBeenSet = true; m_addresses = value; }

    /**
     * <p>Contains an array of strings that specifies zero or more IP addresses or
     * blocks of IP addresses. All addresses must be specified using Classless
     * Inter-Domain Routing (CIDR) notation. WAF supports all IPv4 and IPv6 CIDR ranges
     * except for <code>/0</code>. </p> <p>Example address strings: </p> <ul> <li>
     * <p>To configure WAF to allow, block, or count requests that originated from the
     * IP address 192.0.2.44, specify <code>192.0.2.44/32</code>.</p> </li> <li> <p>To
     * configure WAF to allow, block, or count requests that originated from IP
     * addresses from 192.0.2.0 to 192.0.2.255, specify <code>192.0.2.0/24</code>.</p>
     * </li> <li> <p>To configure WAF to allow, block, or count requests that
     * originated from the IP address 1111:0000:0000:0000:0000:0000:0000:0111, specify
     * <code>1111:0000:0000:0000:0000:0000:0000:0111/128</code>.</p> </li> <li> <p>To
     * configure WAF to allow, block, or count requests that originated from IP
     * addresses 1111:0000:0000:0000:0000:0000:0000:0000 to
     * 1111:0000:0000:0000:ffff:ffff:ffff:ffff, specify
     * <code>1111:0000:0000:0000:0000:0000:0000:0000/64</code>.</p> </li> </ul> <p>For
     * more information about CIDR notation, see the Wikipedia entry <a
     * href="https://en.wikipedia.org/wiki/Classless_Inter-Domain_Routing">Classless
     * Inter-Domain Routing</a>.</p> <p>Example JSON <code>Addresses</code>
     * specifications: </p> <ul> <li> <p>Empty array: <code>"Addresses": []</code> </p>
     * </li> <li> <p>Array with one address: <code>"Addresses":
     * ["192.0.2.44/32"]</code> </p> </li> <li> <p>Array with three addresses:
     * <code>"Addresses": ["192.0.2.44/32", "192.0.2.0/24", "192.0.0.0/16"]</code> </p>
     * </li> <li> <p>INVALID specification: <code>"Addresses": [""]</code> INVALID </p>
     * </li> </ul>
     */
    inline void SetAddresses(Aws::Vector<Aws::String>&& value) { m_addressesHasBeenSet = true; m_addresses = std::move(value); }

    /**
     * <p>Contains an array of strings that specifies zero or more IP addresses or
     * blocks of IP addresses. All addresses must be specified using Classless
     * Inter-Domain Routing (CIDR) notation. WAF supports all IPv4 and IPv6 CIDR ranges
     * except for <code>/0</code>. </p> <p>Example address strings: </p> <ul> <li>
     * <p>To configure WAF to allow, block, or count requests that originated from the
     * IP address 192.0.2.44, specify <code>192.0.2.44/32</code>.</p> </li> <li> <p>To
     * configure WAF to allow, block, or count requests that originated from IP
     * addresses from 192.0.2.0 to 192.0.2.255, specify <code>192.0.2.0/24</code>.</p>
     * </li> <li> <p>To configure WAF to allow, block, or count requests that
     * originated from the IP address 1111:0000:0000:0000:0000:0000:0000:0111, specify
     * <code>1111:0000:0000:0000:0000:0000:0000:0111/128</code>.</p> </li> <li> <p>To
     * configure WAF to allow, block, or count requests that originated from IP
     * addresses 1111:0000:0000:0000:0000:0000:0000:0000 to
     * 1111:0000:0000:0000:ffff:ffff:ffff:ffff, specify
     * <code>1111:0000:0000:0000:0000:0000:0000:0000/64</code>.</p> </li> </ul> <p>For
     * more information about CIDR notation, see the Wikipedia entry <a
     * href="https://en.wikipedia.org/wiki/Classless_Inter-Domain_Routing">Classless
     * Inter-Domain Routing</a>.</p> <p>Example JSON <code>Addresses</code>
     * specifications: </p> <ul> <li> <p>Empty array: <code>"Addresses": []</code> </p>
     * </li> <li> <p>Array with one address: <code>"Addresses":
     * ["192.0.2.44/32"]</code> </p> </li> <li> <p>Array with three addresses:
     * <code>"Addresses": ["192.0.2.44/32", "192.0.2.0/24", "192.0.0.0/16"]</code> </p>
     * </li> <li> <p>INVALID specification: <code>"Addresses": [""]</code> INVALID </p>
     * </li> </ul>
     */
    inline CreateIPSetRequest& WithAddresses(const Aws::Vector<Aws::String>& value) { SetAddresses(value); return *this;}

    /**
     * <p>Contains an array of strings that specifies zero or more IP addresses or
     * blocks of IP addresses. All addresses must be specified using Classless
     * Inter-Domain Routing (CIDR) notation. WAF supports all IPv4 and IPv6 CIDR ranges
     * except for <code>/0</code>. </p> <p>Example address strings: </p> <ul> <li>
     * <p>To configure WAF to allow, block, or count requests that originated from the
     * IP address 192.0.2.44, specify <code>192.0.2.44/32</code>.</p> </li> <li> <p>To
     * configure WAF to allow, block, or count requests that originated from IP
     * addresses from 192.0.2.0 to 192.0.2.255, specify <code>192.0.2.0/24</code>.</p>
     * </li> <li> <p>To configure WAF to allow, block, or count requests that
     * originated from the IP address 1111:0000:0000:0000:0000:0000:0000:0111, specify
     * <code>1111:0000:0000:0000:0000:0000:0000:0111/128</code>.</p> </li> <li> <p>To
     * configure WAF to allow, block, or count requests that originated from IP
     * addresses 1111:0000:0000:0000:0000:0000:0000:0000 to
     * 1111:0000:0000:0000:ffff:ffff:ffff:ffff, specify
     * <code>1111:0000:0000:0000:0000:0000:0000:0000/64</code>.</p> </li> </ul> <p>For
     * more information about CIDR notation, see the Wikipedia entry <a
     * href="https://en.wikipedia.org/wiki/Classless_Inter-Domain_Routing">Classless
     * Inter-Domain Routing</a>.</p> <p>Example JSON <code>Addresses</code>
     * specifications: </p> <ul> <li> <p>Empty array: <code>"Addresses": []</code> </p>
     * </li> <li> <p>Array with one address: <code>"Addresses":
     * ["192.0.2.44/32"]</code> </p> </li> <li> <p>Array with three addresses:
     * <code>"Addresses": ["192.0.2.44/32", "192.0.2.0/24", "192.0.0.0/16"]</code> </p>
     * </li> <li> <p>INVALID specification: <code>"Addresses": [""]</code> INVALID </p>
     * </li> </ul>
     */
    inline CreateIPSetRequest& WithAddresses(Aws::Vector<Aws::String>&& value) { SetAddresses(std::move(value)); return *this;}

    /**
     * <p>Contains an array of strings that specifies zero or more IP addresses or
     * blocks of IP addresses. All addresses must be specified using Classless
     * Inter-Domain Routing (CIDR) notation. WAF supports all IPv4 and IPv6 CIDR ranges
     * except for <code>/0</code>. </p> <p>Example address strings: </p> <ul> <li>
     * <p>To configure WAF to allow, block, or count requests that originated from the
     * IP address 192.0.2.44, specify <code>192.0.2.44/32</code>.</p> </li> <li> <p>To
     * configure WAF to allow, block, or count requests that originated from IP
     * addresses from 192.0.2.0 to 192.0.2.255, specify <code>192.0.2.0/24</code>.</p>
     * </li> <li> <p>To configure WAF to allow, block, or count requests that
     * originated from the IP address 1111:0000:0000:0000:0000:0000:0000:0111, specify
     * <code>1111:0000:0000:0000:0000:0000:0000:0111/128</code>.</p> </li> <li> <p>To
     * configure WAF to allow, block, or count requests that originated from IP
     * addresses 1111:0000:0000:0000:0000:0000:0000:0000 to
     * 1111:0000:0000:0000:ffff:ffff:ffff:ffff, specify
     * <code>1111:0000:0000:0000:0000:0000:0000:0000/64</code>.</p> </li> </ul> <p>For
     * more information about CIDR notation, see the Wikipedia entry <a
     * href="https://en.wikipedia.org/wiki/Classless_Inter-Domain_Routing">Classless
     * Inter-Domain Routing</a>.</p> <p>Example JSON <code>Addresses</code>
     * specifications: </p> <ul> <li> <p>Empty array: <code>"Addresses": []</code> </p>
     * </li> <li> <p>Array with one address: <code>"Addresses":
     * ["192.0.2.44/32"]</code> </p> </li> <li> <p>Array with three addresses:
     * <code>"Addresses": ["192.0.2.44/32", "192.0.2.0/24", "192.0.0.0/16"]</code> </p>
     * </li> <li> <p>INVALID specification: <code>"Addresses": [""]</code> INVALID </p>
     * </li> </ul>
     */
    inline CreateIPSetRequest& AddAddresses(const Aws::String& value) { m_addressesHasBeenSet = true; m_addresses.push_back(value); return *this; }

    /**
     * <p>Contains an array of strings that specifies zero or more IP addresses or
     * blocks of IP addresses. All addresses must be specified using Classless
     * Inter-Domain Routing (CIDR) notation. WAF supports all IPv4 and IPv6 CIDR ranges
     * except for <code>/0</code>. </p> <p>Example address strings: </p> <ul> <li>
     * <p>To configure WAF to allow, block, or count requests that originated from the
     * IP address 192.0.2.44, specify <code>192.0.2.44/32</code>.</p> </li> <li> <p>To
     * configure WAF to allow, block, or count requests that originated from IP
     * addresses from 192.0.2.0 to 192.0.2.255, specify <code>192.0.2.0/24</code>.</p>
     * </li> <li> <p>To configure WAF to allow, block, or count requests that
     * originated from the IP address 1111:0000:0000:0000:0000:0000:0000:0111, specify
     * <code>1111:0000:0000:0000:0000:0000:0000:0111/128</code>.</p> </li> <li> <p>To
     * configure WAF to allow, block, or count requests that originated from IP
     * addresses 1111:0000:0000:0000:0000:0000:0000:0000 to
     * 1111:0000:0000:0000:ffff:ffff:ffff:ffff, specify
     * <code>1111:0000:0000:0000:0000:0000:0000:0000/64</code>.</p> </li> </ul> <p>For
     * more information about CIDR notation, see the Wikipedia entry <a
     * href="https://en.wikipedia.org/wiki/Classless_Inter-Domain_Routing">Classless
     * Inter-Domain Routing</a>.</p> <p>Example JSON <code>Addresses</code>
     * specifications: </p> <ul> <li> <p>Empty array: <code>"Addresses": []</code> </p>
     * </li> <li> <p>Array with one address: <code>"Addresses":
     * ["192.0.2.44/32"]</code> </p> </li> <li> <p>Array with three addresses:
     * <code>"Addresses": ["192.0.2.44/32", "192.0.2.0/24", "192.0.0.0/16"]</code> </p>
     * </li> <li> <p>INVALID specification: <code>"Addresses": [""]</code> INVALID </p>
     * </li> </ul>
     */
    inline CreateIPSetRequest& AddAddresses(Aws::String&& value) { m_addressesHasBeenSet = true; m_addresses.push_back(std::move(value)); return *this; }

    /**
     * <p>Contains an array of strings that specifies zero or more IP addresses or
     * blocks of IP addresses. All addresses must be specified using Classless
     * Inter-Domain Routing (CIDR) notation. WAF supports all IPv4 and IPv6 CIDR ranges
     * except for <code>/0</code>. </p> <p>Example address strings: </p> <ul> <li>
     * <p>To configure WAF to allow, block, or count requests that originated from the
     * IP address 192.0.2.44, specify <code>192.0.2.44/32</code>.</p> </li> <li> <p>To
     * configure WAF to allow, block, or count requests that originated from IP
     * addresses from 192.0.2.0 to 192.0.2.255, specify <code>192.0.2.0/24</code>.</p>
     * </li> <li> <p>To configure WAF to allow, block, or count requests that
     * originated from the IP address 1111:0000:0000:0000:0000:0000:0000:0111, specify
     * <code>1111:0000:0000:0000:0000:0000:0000:0111/128</code>.</p> </li> <li> <p>To
     * configure WAF to allow, block, or count requests that originated from IP
     * addresses 1111:0000:0000:0000:0000:0000:0000:0000 to
     * 1111:0000:0000:0000:ffff:ffff:ffff:ffff, specify
     * <code>1111:0000:0000:0000:0000:0000:0000:0000/64</code>.</p> </li> </ul> <p>For
     * more information about CIDR notation, see the Wikipedia entry <a
     * href="https://en.wikipedia.org/wiki/Classless_Inter-Domain_Routing">Classless
     * Inter-Domain Routing</a>.</p> <p>Example JSON <code>Addresses</code>
     * specifications: </p> <ul> <li> <p>Empty array: <code>"Addresses": []</code> </p>
     * </li> <li> <p>Array with one address: <code>"Addresses":
     * ["192.0.2.44/32"]</code> </p> </li> <li> <p>Array with three addresses:
     * <code>"Addresses": ["192.0.2.44/32", "192.0.2.0/24", "192.0.0.0/16"]</code> </p>
     * </li> <li> <p>INVALID specification: <code>"Addresses": [""]</code> INVALID </p>
     * </li> </ul>
     */
    inline CreateIPSetRequest& AddAddresses(const char* value) { m_addressesHasBeenSet = true; m_addresses.push_back(value); return *this; }


    /**
     * <p>An array of key:value pairs to associate with the resource.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p>An array of key:value pairs to associate with the resource.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>An array of key:value pairs to associate with the resource.</p>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>An array of key:value pairs to associate with the resource.</p>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>An array of key:value pairs to associate with the resource.</p>
     */
    inline CreateIPSetRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>An array of key:value pairs to associate with the resource.</p>
     */
    inline CreateIPSetRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>An array of key:value pairs to associate with the resource.</p>
     */
    inline CreateIPSetRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>An array of key:value pairs to associate with the resource.</p>
     */
    inline CreateIPSetRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Scope m_scope;
    bool m_scopeHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    IPAddressVersion m_iPAddressVersion;
    bool m_iPAddressVersionHasBeenSet = false;

    Aws::Vector<Aws::String> m_addresses;
    bool m_addressesHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace WAFV2
} // namespace Aws
