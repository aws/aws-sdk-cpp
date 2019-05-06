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
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/route53resolver/model/ResolverEndpointDirection.h>
#include <aws/route53resolver/model/IpAddressRequest.h>
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
  class AWS_ROUTE53RESOLVER_API CreateResolverEndpointRequest : public Route53ResolverRequest
  {
  public:
    CreateResolverEndpointRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateResolverEndpoint"; }

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
    inline CreateResolverEndpointRequest& WithCreatorRequestId(const Aws::String& value) { SetCreatorRequestId(value); return *this;}

    /**
     * <p>A unique string that identifies the request and that allows failed requests
     * to be retried without the risk of executing the operation twice.
     * <code>CreatorRequestId</code> can be any unique string, for example, a date/time
     * stamp. </p>
     */
    inline CreateResolverEndpointRequest& WithCreatorRequestId(Aws::String&& value) { SetCreatorRequestId(std::move(value)); return *this;}

    /**
     * <p>A unique string that identifies the request and that allows failed requests
     * to be retried without the risk of executing the operation twice.
     * <code>CreatorRequestId</code> can be any unique string, for example, a date/time
     * stamp. </p>
     */
    inline CreateResolverEndpointRequest& WithCreatorRequestId(const char* value) { SetCreatorRequestId(value); return *this;}


    /**
     * <p>A friendly name that lets you easily find a configuration in the Resolver
     * dashboard in the Route 53 console.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>A friendly name that lets you easily find a configuration in the Resolver
     * dashboard in the Route 53 console.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>A friendly name that lets you easily find a configuration in the Resolver
     * dashboard in the Route 53 console.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>A friendly name that lets you easily find a configuration in the Resolver
     * dashboard in the Route 53 console.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>A friendly name that lets you easily find a configuration in the Resolver
     * dashboard in the Route 53 console.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>A friendly name that lets you easily find a configuration in the Resolver
     * dashboard in the Route 53 console.</p>
     */
    inline CreateResolverEndpointRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>A friendly name that lets you easily find a configuration in the Resolver
     * dashboard in the Route 53 console.</p>
     */
    inline CreateResolverEndpointRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>A friendly name that lets you easily find a configuration in the Resolver
     * dashboard in the Route 53 console.</p>
     */
    inline CreateResolverEndpointRequest& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The ID of one or more security groups that you want to use to control access
     * to this VPC. The security group that you specify must include one or more
     * inbound rules (for inbound resolver endpoints) or outbound rules (for outbound
     * resolver endpoints).</p>
     */
    inline const Aws::Vector<Aws::String>& GetSecurityGroupIds() const{ return m_securityGroupIds; }

    /**
     * <p>The ID of one or more security groups that you want to use to control access
     * to this VPC. The security group that you specify must include one or more
     * inbound rules (for inbound resolver endpoints) or outbound rules (for outbound
     * resolver endpoints).</p>
     */
    inline bool SecurityGroupIdsHasBeenSet() const { return m_securityGroupIdsHasBeenSet; }

    /**
     * <p>The ID of one or more security groups that you want to use to control access
     * to this VPC. The security group that you specify must include one or more
     * inbound rules (for inbound resolver endpoints) or outbound rules (for outbound
     * resolver endpoints).</p>
     */
    inline void SetSecurityGroupIds(const Aws::Vector<Aws::String>& value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds = value; }

    /**
     * <p>The ID of one or more security groups that you want to use to control access
     * to this VPC. The security group that you specify must include one or more
     * inbound rules (for inbound resolver endpoints) or outbound rules (for outbound
     * resolver endpoints).</p>
     */
    inline void SetSecurityGroupIds(Aws::Vector<Aws::String>&& value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds = std::move(value); }

    /**
     * <p>The ID of one or more security groups that you want to use to control access
     * to this VPC. The security group that you specify must include one or more
     * inbound rules (for inbound resolver endpoints) or outbound rules (for outbound
     * resolver endpoints).</p>
     */
    inline CreateResolverEndpointRequest& WithSecurityGroupIds(const Aws::Vector<Aws::String>& value) { SetSecurityGroupIds(value); return *this;}

    /**
     * <p>The ID of one or more security groups that you want to use to control access
     * to this VPC. The security group that you specify must include one or more
     * inbound rules (for inbound resolver endpoints) or outbound rules (for outbound
     * resolver endpoints).</p>
     */
    inline CreateResolverEndpointRequest& WithSecurityGroupIds(Aws::Vector<Aws::String>&& value) { SetSecurityGroupIds(std::move(value)); return *this;}

    /**
     * <p>The ID of one or more security groups that you want to use to control access
     * to this VPC. The security group that you specify must include one or more
     * inbound rules (for inbound resolver endpoints) or outbound rules (for outbound
     * resolver endpoints).</p>
     */
    inline CreateResolverEndpointRequest& AddSecurityGroupIds(const Aws::String& value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds.push_back(value); return *this; }

    /**
     * <p>The ID of one or more security groups that you want to use to control access
     * to this VPC. The security group that you specify must include one or more
     * inbound rules (for inbound resolver endpoints) or outbound rules (for outbound
     * resolver endpoints).</p>
     */
    inline CreateResolverEndpointRequest& AddSecurityGroupIds(Aws::String&& value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds.push_back(std::move(value)); return *this; }

    /**
     * <p>The ID of one or more security groups that you want to use to control access
     * to this VPC. The security group that you specify must include one or more
     * inbound rules (for inbound resolver endpoints) or outbound rules (for outbound
     * resolver endpoints).</p>
     */
    inline CreateResolverEndpointRequest& AddSecurityGroupIds(const char* value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds.push_back(value); return *this; }


    /**
     * <p>Specify the applicable value:</p> <ul> <li> <p> <code>INBOUND</code>:
     * Resolver forwards DNS queries to the DNS service for a VPC from your network or
     * another VPC</p> </li> <li> <p> <code>OUTBOUND</code>: Resolver forwards DNS
     * queries from the DNS service for a VPC to your network or another VPC</p> </li>
     * </ul>
     */
    inline const ResolverEndpointDirection& GetDirection() const{ return m_direction; }

    /**
     * <p>Specify the applicable value:</p> <ul> <li> <p> <code>INBOUND</code>:
     * Resolver forwards DNS queries to the DNS service for a VPC from your network or
     * another VPC</p> </li> <li> <p> <code>OUTBOUND</code>: Resolver forwards DNS
     * queries from the DNS service for a VPC to your network or another VPC</p> </li>
     * </ul>
     */
    inline bool DirectionHasBeenSet() const { return m_directionHasBeenSet; }

    /**
     * <p>Specify the applicable value:</p> <ul> <li> <p> <code>INBOUND</code>:
     * Resolver forwards DNS queries to the DNS service for a VPC from your network or
     * another VPC</p> </li> <li> <p> <code>OUTBOUND</code>: Resolver forwards DNS
     * queries from the DNS service for a VPC to your network or another VPC</p> </li>
     * </ul>
     */
    inline void SetDirection(const ResolverEndpointDirection& value) { m_directionHasBeenSet = true; m_direction = value; }

    /**
     * <p>Specify the applicable value:</p> <ul> <li> <p> <code>INBOUND</code>:
     * Resolver forwards DNS queries to the DNS service for a VPC from your network or
     * another VPC</p> </li> <li> <p> <code>OUTBOUND</code>: Resolver forwards DNS
     * queries from the DNS service for a VPC to your network or another VPC</p> </li>
     * </ul>
     */
    inline void SetDirection(ResolverEndpointDirection&& value) { m_directionHasBeenSet = true; m_direction = std::move(value); }

    /**
     * <p>Specify the applicable value:</p> <ul> <li> <p> <code>INBOUND</code>:
     * Resolver forwards DNS queries to the DNS service for a VPC from your network or
     * another VPC</p> </li> <li> <p> <code>OUTBOUND</code>: Resolver forwards DNS
     * queries from the DNS service for a VPC to your network or another VPC</p> </li>
     * </ul>
     */
    inline CreateResolverEndpointRequest& WithDirection(const ResolverEndpointDirection& value) { SetDirection(value); return *this;}

    /**
     * <p>Specify the applicable value:</p> <ul> <li> <p> <code>INBOUND</code>:
     * Resolver forwards DNS queries to the DNS service for a VPC from your network or
     * another VPC</p> </li> <li> <p> <code>OUTBOUND</code>: Resolver forwards DNS
     * queries from the DNS service for a VPC to your network or another VPC</p> </li>
     * </ul>
     */
    inline CreateResolverEndpointRequest& WithDirection(ResolverEndpointDirection&& value) { SetDirection(std::move(value)); return *this;}


    /**
     * <p>The subnets and IP addresses in your VPC that you want DNS queries to pass
     * through on the way from your VPCs to your network (for outbound endpoints) or on
     * the way from your network to your VPCs (for inbound resolver endpoints). </p>
     */
    inline const Aws::Vector<IpAddressRequest>& GetIpAddresses() const{ return m_ipAddresses; }

    /**
     * <p>The subnets and IP addresses in your VPC that you want DNS queries to pass
     * through on the way from your VPCs to your network (for outbound endpoints) or on
     * the way from your network to your VPCs (for inbound resolver endpoints). </p>
     */
    inline bool IpAddressesHasBeenSet() const { return m_ipAddressesHasBeenSet; }

    /**
     * <p>The subnets and IP addresses in your VPC that you want DNS queries to pass
     * through on the way from your VPCs to your network (for outbound endpoints) or on
     * the way from your network to your VPCs (for inbound resolver endpoints). </p>
     */
    inline void SetIpAddresses(const Aws::Vector<IpAddressRequest>& value) { m_ipAddressesHasBeenSet = true; m_ipAddresses = value; }

    /**
     * <p>The subnets and IP addresses in your VPC that you want DNS queries to pass
     * through on the way from your VPCs to your network (for outbound endpoints) or on
     * the way from your network to your VPCs (for inbound resolver endpoints). </p>
     */
    inline void SetIpAddresses(Aws::Vector<IpAddressRequest>&& value) { m_ipAddressesHasBeenSet = true; m_ipAddresses = std::move(value); }

    /**
     * <p>The subnets and IP addresses in your VPC that you want DNS queries to pass
     * through on the way from your VPCs to your network (for outbound endpoints) or on
     * the way from your network to your VPCs (for inbound resolver endpoints). </p>
     */
    inline CreateResolverEndpointRequest& WithIpAddresses(const Aws::Vector<IpAddressRequest>& value) { SetIpAddresses(value); return *this;}

    /**
     * <p>The subnets and IP addresses in your VPC that you want DNS queries to pass
     * through on the way from your VPCs to your network (for outbound endpoints) or on
     * the way from your network to your VPCs (for inbound resolver endpoints). </p>
     */
    inline CreateResolverEndpointRequest& WithIpAddresses(Aws::Vector<IpAddressRequest>&& value) { SetIpAddresses(std::move(value)); return *this;}

    /**
     * <p>The subnets and IP addresses in your VPC that you want DNS queries to pass
     * through on the way from your VPCs to your network (for outbound endpoints) or on
     * the way from your network to your VPCs (for inbound resolver endpoints). </p>
     */
    inline CreateResolverEndpointRequest& AddIpAddresses(const IpAddressRequest& value) { m_ipAddressesHasBeenSet = true; m_ipAddresses.push_back(value); return *this; }

    /**
     * <p>The subnets and IP addresses in your VPC that you want DNS queries to pass
     * through on the way from your VPCs to your network (for outbound endpoints) or on
     * the way from your network to your VPCs (for inbound resolver endpoints). </p>
     */
    inline CreateResolverEndpointRequest& AddIpAddresses(IpAddressRequest&& value) { m_ipAddressesHasBeenSet = true; m_ipAddresses.push_back(std::move(value)); return *this; }


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
    inline CreateResolverEndpointRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>A list of the tag keys and values that you want to associate with the
     * endpoint.</p>
     */
    inline CreateResolverEndpointRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>A list of the tag keys and values that you want to associate with the
     * endpoint.</p>
     */
    inline CreateResolverEndpointRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>A list of the tag keys and values that you want to associate with the
     * endpoint.</p>
     */
    inline CreateResolverEndpointRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_creatorRequestId;
    bool m_creatorRequestIdHasBeenSet;

    Aws::String m_name;
    bool m_nameHasBeenSet;

    Aws::Vector<Aws::String> m_securityGroupIds;
    bool m_securityGroupIdsHasBeenSet;

    ResolverEndpointDirection m_direction;
    bool m_directionHasBeenSet;

    Aws::Vector<IpAddressRequest> m_ipAddresses;
    bool m_ipAddressesHasBeenSet;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet;
  };

} // namespace Model
} // namespace Route53Resolver
} // namespace Aws
