/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/route53resolver/Route53Resolver_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
namespace Route53Resolver
{
namespace Model
{

  /**
   * <p>For Resolver list operations (<a
   * href="https://docs.aws.amazon.com/Route53/latest/APIReference/API_route53resolver_ListResolverEndpoints.html">ListResolverEndpoints</a>,
   * <a
   * href="https://docs.aws.amazon.com/Route53/latest/APIReference/API_route53resolver_ListResolverRules.html">ListResolverRules</a>,
   * <a
   * href="https://docs.aws.amazon.com/Route53/latest/APIReference/API_route53resolver_ListResolverRuleAssociations.html">ListResolverRuleAssociations</a>,
   * <a
   * href="https://docs.aws.amazon.com/Route53/latest/APIReference/API_route53resolver_ListResolverQueryLogConfigs.html">ListResolverQueryLogConfigs</a>,
   * <a
   * href="https://docs.aws.amazon.com/Route53/latest/APIReference/API_route53resolver_ListResolverQueryLogConfigAssociations.html">ListResolverQueryLogConfigAssociations</a>),
   * and <a
   * href="https://docs.aws.amazon.com/Route53/latest/APIReference/API_route53resolver_ListResolverDnssecConfigs.html">ListResolverDnssecConfigs</a>),
   * an optional specification to return a subset of objects.</p> <p>To filter
   * objects, such as Resolver endpoints or Resolver rules, you specify
   * <code>Name</code> and <code>Values</code>. For example, to list only inbound
   * Resolver endpoints, specify <code>Direction</code> for <code>Name</code> and
   * specify <code>INBOUND</code> for <code>Values</code>. </p><p><h3>See Also:</h3> 
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/route53resolver-2018-04-01/Filter">AWS
   * API Reference</a></p>
   */
  class Filter
  {
  public:
    AWS_ROUTE53RESOLVER_API Filter();
    AWS_ROUTE53RESOLVER_API Filter(Aws::Utils::Json::JsonView jsonValue);
    AWS_ROUTE53RESOLVER_API Filter& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ROUTE53RESOLVER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the parameter that you want to use to filter objects.</p> <p>The
     * valid values for <code>Name</code> depend on the action that you're including
     * the filter in, <a
     * href="https://docs.aws.amazon.com/Route53/latest/APIReference/API_route53resolver_ListResolverEndpoints.html">ListResolverEndpoints</a>,
     * <a
     * href="https://docs.aws.amazon.com/Route53/latest/APIReference/API_route53resolver_ListResolverRules.html">ListResolverRules</a>,
     * <a
     * href="https://docs.aws.amazon.com/Route53/latest/APIReference/API_route53resolver_ListResolverRuleAssociations.html">ListResolverRuleAssociations</a>,
     * <a
     * href="https://docs.aws.amazon.com/Route53/latest/APIReference/API_route53resolver_ListResolverQueryLogConfigs.html">ListResolverQueryLogConfigs</a>,
     * or <a
     * href="https://docs.aws.amazon.com/Route53/latest/APIReference/API_route53resolver_ListResolverQueryLogConfigAssociations.html">ListResolverQueryLogConfigAssociations</a>.</p>
     *  <p>In early versions of Resolver, values for <code>Name</code> were
     * listed as uppercase, with underscore (_) delimiters. For example,
     * <code>CreatorRequestId</code> was originally listed as
     * <code>CREATOR_REQUEST_ID</code>. Uppercase values for <code>Name</code> are
     * still supported.</p>  <p> <b>ListResolverEndpoints</b> </p> <p>Valid
     * values for <code>Name</code> include the following:</p> <ul> <li> <p>
     * <code>CreatorRequestId</code>: The value that you specified when you created the
     * Resolver endpoint.</p> </li> <li> <p> <code>Direction</code>: Whether you want
     * to return inbound or outbound Resolver endpoints. If you specify
     * <code>DIRECTION</code> for <code>Name</code>, specify <code>INBOUND</code> or
     * <code>OUTBOUND</code> for <code>Values</code>.</p> </li> <li> <p>
     * <code>HostVPCId</code>: The ID of the VPC that inbound DNS queries pass through
     * on the way from your network to your VPCs in a region, or the VPC that outbound
     * queries pass through on the way from your VPCs to your network. In a <a
     * href="https://docs.aws.amazon.com/Route53/latest/APIReference/API_route53resolver_CreateResolverEndpoint.html">CreateResolverEndpoint</a>
     * request, <code>SubnetId</code> indirectly identifies the VPC. In a <a
     * href="https://docs.aws.amazon.com/Route53/latest/APIReference/API_route53resolver_GetResolverEndpoint.html">GetResolverEndpoint</a>
     * request, the VPC ID for a Resolver endpoint is returned in the
     * <code>HostVPCId</code> element. </p> </li> <li> <p> <code>IpAddressCount</code>:
     * The number of IP addresses that you have associated with the Resolver
     * endpoint.</p> </li> <li> <p> <code>Name</code>: The name of the Resolver
     * endpoint.</p> </li> <li> <p> <code>SecurityGroupIds</code>: The IDs of the VPC
     * security groups that you specified when you created the Resolver endpoint.</p>
     * </li> <li> <p> <code>Status</code>: The status of the Resolver endpoint. If you
     * specify <code>Status</code> for <code>Name</code>, specify one of the following
     * status codes for <code>Values</code>: <code>CREATING</code>,
     * <code>OPERATIONAL</code>, <code>UPDATING</code>, <code>AUTO_RECOVERING</code>,
     * <code>ACTION_NEEDED</code>, or <code>DELETING</code>. For more information, see
     * <code>Status</code> in <a
     * href="https://docs.aws.amazon.com/Route53/latest/APIReference/API_route53resolver_ResolverEndpoint.html">ResolverEndpoint</a>.</p>
     * </li> </ul> <p> <b>ListResolverRules</b> </p> <p>Valid values for
     * <code>Name</code> include the following:</p> <ul> <li> <p>
     * <code>CreatorRequestId</code>: The value that you specified when you created the
     * Resolver rule.</p> </li> <li> <p> <code>DomainName</code>: The domain name for
     * which Resolver is forwarding DNS queries to your network. In the value that you
     * specify for <code>Values</code>, include a trailing dot (.) after the domain
     * name. For example, if the domain name is example.com, specify the following
     * value. Note the "." after <code>com</code>:</p> <p> <code>example.com.</code>
     * </p> </li> <li> <p> <code>Name</code>: The name of the Resolver rule.</p> </li>
     * <li> <p> <code>ResolverEndpointId</code>: The ID of the Resolver endpoint that
     * the Resolver rule is associated with.</p>  <p>You can filter on the
     * Resolver endpoint only for rules that have a value of <code>FORWARD</code> for
     * <code>RuleType</code>.</p>  </li> <li> <p> <code>Status</code>: The
     * status of the Resolver rule. If you specify <code>Status</code> for
     * <code>Name</code>, specify one of the following status codes for
     * <code>Values</code>: <code>COMPLETE</code>, <code>DELETING</code>,
     * <code>UPDATING</code>, or <code>FAILED</code>.</p> </li> <li> <p>
     * <code>Type</code>: The type of the Resolver rule. If you specify
     * <code>TYPE</code> for <code>Name</code>, specify <code>FORWARD</code> or
     * <code>SYSTEM</code> for <code>Values</code>.</p> </li> </ul> <p>
     * <b>ListResolverRuleAssociations</b> </p> <p>Valid values for <code>Name</code>
     * include the following:</p> <ul> <li> <p> <code>Name</code>: The name of the
     * Resolver rule association.</p> </li> <li> <p> <code>ResolverRuleId</code>: The
     * ID of the Resolver rule that is associated with one or more VPCs.</p> </li> <li>
     * <p> <code>Status</code>: The status of the Resolver rule association. If you
     * specify <code>Status</code> for <code>Name</code>, specify one of the following
     * status codes for <code>Values</code>: <code>CREATING</code>,
     * <code>COMPLETE</code>, <code>DELETING</code>, or <code>FAILED</code>.</p> </li>
     * <li> <p> <code>VPCId</code>: The ID of the VPC that the Resolver rule is
     * associated with.</p> </li> </ul> <p> <b>ListResolverQueryLogConfigs</b> </p>
     * <p>Valid values for <code>Name</code> include the following:</p> <ul> <li> <p>
     * <code>Arn</code>: The ARN for the query logging configuration.</p> </li> <li>
     * <p> <code>AssociationCount</code>: The number of VPCs that are associated with
     * the query logging configuration.</p> </li> <li> <p> <code>CreationTime</code>:
     * The date and time that the query logging configuration was created, in Unix time
     * format and Coordinated Universal Time (UTC). </p> </li> <li> <p>
     * <code>CreatorRequestId</code>: A unique string that identifies the request that
     * created the query logging configuration.</p> </li> <li> <p>
     * <code>Destination</code>: The Amazon Web Services service that you want to
     * forward query logs to. Valid values include the following:</p> <ul> <li> <p>
     * <code>S3</code> </p> </li> <li> <p> <code>CloudWatchLogs</code> </p> </li> <li>
     * <p> <code>KinesisFirehose</code> </p> </li> </ul> </li> <li> <p>
     * <code>DestinationArn</code>: The ARN of the location that Resolver is sending
     * query logs to. This value can be the ARN for an S3 bucket, a CloudWatch Logs log
     * group, or a Kinesis Data Firehose delivery stream.</p> </li> <li> <p>
     * <code>Id</code>: The ID of the query logging configuration</p> </li> <li> <p>
     * <code>Name</code>: The name of the query logging configuration</p> </li> <li>
     * <p> <code>OwnerId</code>: The Amazon Web Services account ID for the account
     * that created the query logging configuration.</p> </li> <li> <p>
     * <code>ShareStatus</code>: An indication of whether the query logging
     * configuration is shared with other Amazon Web Services accounts, or was shared
     * with the current account by another Amazon Web Services account. Valid values
     * include: <code>NOT_SHARED</code>, <code>SHARED_WITH_ME</code>, or
     * <code>SHARED_BY_ME</code>.</p> </li> <li> <p> <code>Status</code>: The status of
     * the query logging configuration. If you specify <code>Status</code> for
     * <code>Name</code>, specify the applicable status code for <code>Values</code>:
     * <code>CREATING</code>, <code>CREATED</code>, <code>DELETING</code>, or
     * <code>FAILED</code>. For more information, see <a
     * href="https://docs.aws.amazon.com/Route53/latest/APIReference/API_route53resolver_ResolverQueryLogConfig.html#Route53Resolver-Type-route53resolver_ResolverQueryLogConfig-Status">Status</a>.
     * </p> </li> </ul> <p> <b>ListResolverQueryLogConfigAssociations</b> </p> <p>Valid
     * values for <code>Name</code> include the following:</p> <ul> <li> <p>
     * <code>CreationTime</code>: The date and time that the VPC was associated with
     * the query logging configuration, in Unix time format and Coordinated Universal
     * Time (UTC).</p> </li> <li> <p> <code>Error</code>: If the value of
     * <code>Status</code> is <code>FAILED</code>, specify the cause:
     * <code>DESTINATION_NOT_FOUND</code> or <code>ACCESS_DENIED</code>.</p> </li> <li>
     * <p> <code>Id</code>: The ID of the query logging association.</p> </li> <li> <p>
     * <code>ResolverQueryLogConfigId</code>: The ID of the query logging configuration
     * that a VPC is associated with.</p> </li> <li> <p> <code>ResourceId</code>: The
     * ID of the Amazon VPC that is associated with the query logging
     * configuration.</p> </li> <li> <p> <code>Status</code>: The status of the query
     * logging association. If you specify <code>Status</code> for <code>Name</code>,
     * specify the applicable status code for <code>Values</code>:
     * <code>CREATING</code>, <code>CREATED</code>, <code>DELETING</code>, or
     * <code>FAILED</code>. For more information, see <a
     * href="https://docs.aws.amazon.com/Route53/latest/APIReference/API_route53resolver_ResolverQueryLogConfigAssociation.html#Route53Resolver-Type-route53resolver_ResolverQueryLogConfigAssociation-Status">Status</a>.
     * </p> </li> </ul>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the parameter that you want to use to filter objects.</p> <p>The
     * valid values for <code>Name</code> depend on the action that you're including
     * the filter in, <a
     * href="https://docs.aws.amazon.com/Route53/latest/APIReference/API_route53resolver_ListResolverEndpoints.html">ListResolverEndpoints</a>,
     * <a
     * href="https://docs.aws.amazon.com/Route53/latest/APIReference/API_route53resolver_ListResolverRules.html">ListResolverRules</a>,
     * <a
     * href="https://docs.aws.amazon.com/Route53/latest/APIReference/API_route53resolver_ListResolverRuleAssociations.html">ListResolverRuleAssociations</a>,
     * <a
     * href="https://docs.aws.amazon.com/Route53/latest/APIReference/API_route53resolver_ListResolverQueryLogConfigs.html">ListResolverQueryLogConfigs</a>,
     * or <a
     * href="https://docs.aws.amazon.com/Route53/latest/APIReference/API_route53resolver_ListResolverQueryLogConfigAssociations.html">ListResolverQueryLogConfigAssociations</a>.</p>
     *  <p>In early versions of Resolver, values for <code>Name</code> were
     * listed as uppercase, with underscore (_) delimiters. For example,
     * <code>CreatorRequestId</code> was originally listed as
     * <code>CREATOR_REQUEST_ID</code>. Uppercase values for <code>Name</code> are
     * still supported.</p>  <p> <b>ListResolverEndpoints</b> </p> <p>Valid
     * values for <code>Name</code> include the following:</p> <ul> <li> <p>
     * <code>CreatorRequestId</code>: The value that you specified when you created the
     * Resolver endpoint.</p> </li> <li> <p> <code>Direction</code>: Whether you want
     * to return inbound or outbound Resolver endpoints. If you specify
     * <code>DIRECTION</code> for <code>Name</code>, specify <code>INBOUND</code> or
     * <code>OUTBOUND</code> for <code>Values</code>.</p> </li> <li> <p>
     * <code>HostVPCId</code>: The ID of the VPC that inbound DNS queries pass through
     * on the way from your network to your VPCs in a region, or the VPC that outbound
     * queries pass through on the way from your VPCs to your network. In a <a
     * href="https://docs.aws.amazon.com/Route53/latest/APIReference/API_route53resolver_CreateResolverEndpoint.html">CreateResolverEndpoint</a>
     * request, <code>SubnetId</code> indirectly identifies the VPC. In a <a
     * href="https://docs.aws.amazon.com/Route53/latest/APIReference/API_route53resolver_GetResolverEndpoint.html">GetResolverEndpoint</a>
     * request, the VPC ID for a Resolver endpoint is returned in the
     * <code>HostVPCId</code> element. </p> </li> <li> <p> <code>IpAddressCount</code>:
     * The number of IP addresses that you have associated with the Resolver
     * endpoint.</p> </li> <li> <p> <code>Name</code>: The name of the Resolver
     * endpoint.</p> </li> <li> <p> <code>SecurityGroupIds</code>: The IDs of the VPC
     * security groups that you specified when you created the Resolver endpoint.</p>
     * </li> <li> <p> <code>Status</code>: The status of the Resolver endpoint. If you
     * specify <code>Status</code> for <code>Name</code>, specify one of the following
     * status codes for <code>Values</code>: <code>CREATING</code>,
     * <code>OPERATIONAL</code>, <code>UPDATING</code>, <code>AUTO_RECOVERING</code>,
     * <code>ACTION_NEEDED</code>, or <code>DELETING</code>. For more information, see
     * <code>Status</code> in <a
     * href="https://docs.aws.amazon.com/Route53/latest/APIReference/API_route53resolver_ResolverEndpoint.html">ResolverEndpoint</a>.</p>
     * </li> </ul> <p> <b>ListResolverRules</b> </p> <p>Valid values for
     * <code>Name</code> include the following:</p> <ul> <li> <p>
     * <code>CreatorRequestId</code>: The value that you specified when you created the
     * Resolver rule.</p> </li> <li> <p> <code>DomainName</code>: The domain name for
     * which Resolver is forwarding DNS queries to your network. In the value that you
     * specify for <code>Values</code>, include a trailing dot (.) after the domain
     * name. For example, if the domain name is example.com, specify the following
     * value. Note the "." after <code>com</code>:</p> <p> <code>example.com.</code>
     * </p> </li> <li> <p> <code>Name</code>: The name of the Resolver rule.</p> </li>
     * <li> <p> <code>ResolverEndpointId</code>: The ID of the Resolver endpoint that
     * the Resolver rule is associated with.</p>  <p>You can filter on the
     * Resolver endpoint only for rules that have a value of <code>FORWARD</code> for
     * <code>RuleType</code>.</p>  </li> <li> <p> <code>Status</code>: The
     * status of the Resolver rule. If you specify <code>Status</code> for
     * <code>Name</code>, specify one of the following status codes for
     * <code>Values</code>: <code>COMPLETE</code>, <code>DELETING</code>,
     * <code>UPDATING</code>, or <code>FAILED</code>.</p> </li> <li> <p>
     * <code>Type</code>: The type of the Resolver rule. If you specify
     * <code>TYPE</code> for <code>Name</code>, specify <code>FORWARD</code> or
     * <code>SYSTEM</code> for <code>Values</code>.</p> </li> </ul> <p>
     * <b>ListResolverRuleAssociations</b> </p> <p>Valid values for <code>Name</code>
     * include the following:</p> <ul> <li> <p> <code>Name</code>: The name of the
     * Resolver rule association.</p> </li> <li> <p> <code>ResolverRuleId</code>: The
     * ID of the Resolver rule that is associated with one or more VPCs.</p> </li> <li>
     * <p> <code>Status</code>: The status of the Resolver rule association. If you
     * specify <code>Status</code> for <code>Name</code>, specify one of the following
     * status codes for <code>Values</code>: <code>CREATING</code>,
     * <code>COMPLETE</code>, <code>DELETING</code>, or <code>FAILED</code>.</p> </li>
     * <li> <p> <code>VPCId</code>: The ID of the VPC that the Resolver rule is
     * associated with.</p> </li> </ul> <p> <b>ListResolverQueryLogConfigs</b> </p>
     * <p>Valid values for <code>Name</code> include the following:</p> <ul> <li> <p>
     * <code>Arn</code>: The ARN for the query logging configuration.</p> </li> <li>
     * <p> <code>AssociationCount</code>: The number of VPCs that are associated with
     * the query logging configuration.</p> </li> <li> <p> <code>CreationTime</code>:
     * The date and time that the query logging configuration was created, in Unix time
     * format and Coordinated Universal Time (UTC). </p> </li> <li> <p>
     * <code>CreatorRequestId</code>: A unique string that identifies the request that
     * created the query logging configuration.</p> </li> <li> <p>
     * <code>Destination</code>: The Amazon Web Services service that you want to
     * forward query logs to. Valid values include the following:</p> <ul> <li> <p>
     * <code>S3</code> </p> </li> <li> <p> <code>CloudWatchLogs</code> </p> </li> <li>
     * <p> <code>KinesisFirehose</code> </p> </li> </ul> </li> <li> <p>
     * <code>DestinationArn</code>: The ARN of the location that Resolver is sending
     * query logs to. This value can be the ARN for an S3 bucket, a CloudWatch Logs log
     * group, or a Kinesis Data Firehose delivery stream.</p> </li> <li> <p>
     * <code>Id</code>: The ID of the query logging configuration</p> </li> <li> <p>
     * <code>Name</code>: The name of the query logging configuration</p> </li> <li>
     * <p> <code>OwnerId</code>: The Amazon Web Services account ID for the account
     * that created the query logging configuration.</p> </li> <li> <p>
     * <code>ShareStatus</code>: An indication of whether the query logging
     * configuration is shared with other Amazon Web Services accounts, or was shared
     * with the current account by another Amazon Web Services account. Valid values
     * include: <code>NOT_SHARED</code>, <code>SHARED_WITH_ME</code>, or
     * <code>SHARED_BY_ME</code>.</p> </li> <li> <p> <code>Status</code>: The status of
     * the query logging configuration. If you specify <code>Status</code> for
     * <code>Name</code>, specify the applicable status code for <code>Values</code>:
     * <code>CREATING</code>, <code>CREATED</code>, <code>DELETING</code>, or
     * <code>FAILED</code>. For more information, see <a
     * href="https://docs.aws.amazon.com/Route53/latest/APIReference/API_route53resolver_ResolverQueryLogConfig.html#Route53Resolver-Type-route53resolver_ResolverQueryLogConfig-Status">Status</a>.
     * </p> </li> </ul> <p> <b>ListResolverQueryLogConfigAssociations</b> </p> <p>Valid
     * values for <code>Name</code> include the following:</p> <ul> <li> <p>
     * <code>CreationTime</code>: The date and time that the VPC was associated with
     * the query logging configuration, in Unix time format and Coordinated Universal
     * Time (UTC).</p> </li> <li> <p> <code>Error</code>: If the value of
     * <code>Status</code> is <code>FAILED</code>, specify the cause:
     * <code>DESTINATION_NOT_FOUND</code> or <code>ACCESS_DENIED</code>.</p> </li> <li>
     * <p> <code>Id</code>: The ID of the query logging association.</p> </li> <li> <p>
     * <code>ResolverQueryLogConfigId</code>: The ID of the query logging configuration
     * that a VPC is associated with.</p> </li> <li> <p> <code>ResourceId</code>: The
     * ID of the Amazon VPC that is associated with the query logging
     * configuration.</p> </li> <li> <p> <code>Status</code>: The status of the query
     * logging association. If you specify <code>Status</code> for <code>Name</code>,
     * specify the applicable status code for <code>Values</code>:
     * <code>CREATING</code>, <code>CREATED</code>, <code>DELETING</code>, or
     * <code>FAILED</code>. For more information, see <a
     * href="https://docs.aws.amazon.com/Route53/latest/APIReference/API_route53resolver_ResolverQueryLogConfigAssociation.html#Route53Resolver-Type-route53resolver_ResolverQueryLogConfigAssociation-Status">Status</a>.
     * </p> </li> </ul>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the parameter that you want to use to filter objects.</p> <p>The
     * valid values for <code>Name</code> depend on the action that you're including
     * the filter in, <a
     * href="https://docs.aws.amazon.com/Route53/latest/APIReference/API_route53resolver_ListResolverEndpoints.html">ListResolverEndpoints</a>,
     * <a
     * href="https://docs.aws.amazon.com/Route53/latest/APIReference/API_route53resolver_ListResolverRules.html">ListResolverRules</a>,
     * <a
     * href="https://docs.aws.amazon.com/Route53/latest/APIReference/API_route53resolver_ListResolverRuleAssociations.html">ListResolverRuleAssociations</a>,
     * <a
     * href="https://docs.aws.amazon.com/Route53/latest/APIReference/API_route53resolver_ListResolverQueryLogConfigs.html">ListResolverQueryLogConfigs</a>,
     * or <a
     * href="https://docs.aws.amazon.com/Route53/latest/APIReference/API_route53resolver_ListResolverQueryLogConfigAssociations.html">ListResolverQueryLogConfigAssociations</a>.</p>
     *  <p>In early versions of Resolver, values for <code>Name</code> were
     * listed as uppercase, with underscore (_) delimiters. For example,
     * <code>CreatorRequestId</code> was originally listed as
     * <code>CREATOR_REQUEST_ID</code>. Uppercase values for <code>Name</code> are
     * still supported.</p>  <p> <b>ListResolverEndpoints</b> </p> <p>Valid
     * values for <code>Name</code> include the following:</p> <ul> <li> <p>
     * <code>CreatorRequestId</code>: The value that you specified when you created the
     * Resolver endpoint.</p> </li> <li> <p> <code>Direction</code>: Whether you want
     * to return inbound or outbound Resolver endpoints. If you specify
     * <code>DIRECTION</code> for <code>Name</code>, specify <code>INBOUND</code> or
     * <code>OUTBOUND</code> for <code>Values</code>.</p> </li> <li> <p>
     * <code>HostVPCId</code>: The ID of the VPC that inbound DNS queries pass through
     * on the way from your network to your VPCs in a region, or the VPC that outbound
     * queries pass through on the way from your VPCs to your network. In a <a
     * href="https://docs.aws.amazon.com/Route53/latest/APIReference/API_route53resolver_CreateResolverEndpoint.html">CreateResolverEndpoint</a>
     * request, <code>SubnetId</code> indirectly identifies the VPC. In a <a
     * href="https://docs.aws.amazon.com/Route53/latest/APIReference/API_route53resolver_GetResolverEndpoint.html">GetResolverEndpoint</a>
     * request, the VPC ID for a Resolver endpoint is returned in the
     * <code>HostVPCId</code> element. </p> </li> <li> <p> <code>IpAddressCount</code>:
     * The number of IP addresses that you have associated with the Resolver
     * endpoint.</p> </li> <li> <p> <code>Name</code>: The name of the Resolver
     * endpoint.</p> </li> <li> <p> <code>SecurityGroupIds</code>: The IDs of the VPC
     * security groups that you specified when you created the Resolver endpoint.</p>
     * </li> <li> <p> <code>Status</code>: The status of the Resolver endpoint. If you
     * specify <code>Status</code> for <code>Name</code>, specify one of the following
     * status codes for <code>Values</code>: <code>CREATING</code>,
     * <code>OPERATIONAL</code>, <code>UPDATING</code>, <code>AUTO_RECOVERING</code>,
     * <code>ACTION_NEEDED</code>, or <code>DELETING</code>. For more information, see
     * <code>Status</code> in <a
     * href="https://docs.aws.amazon.com/Route53/latest/APIReference/API_route53resolver_ResolverEndpoint.html">ResolverEndpoint</a>.</p>
     * </li> </ul> <p> <b>ListResolverRules</b> </p> <p>Valid values for
     * <code>Name</code> include the following:</p> <ul> <li> <p>
     * <code>CreatorRequestId</code>: The value that you specified when you created the
     * Resolver rule.</p> </li> <li> <p> <code>DomainName</code>: The domain name for
     * which Resolver is forwarding DNS queries to your network. In the value that you
     * specify for <code>Values</code>, include a trailing dot (.) after the domain
     * name. For example, if the domain name is example.com, specify the following
     * value. Note the "." after <code>com</code>:</p> <p> <code>example.com.</code>
     * </p> </li> <li> <p> <code>Name</code>: The name of the Resolver rule.</p> </li>
     * <li> <p> <code>ResolverEndpointId</code>: The ID of the Resolver endpoint that
     * the Resolver rule is associated with.</p>  <p>You can filter on the
     * Resolver endpoint only for rules that have a value of <code>FORWARD</code> for
     * <code>RuleType</code>.</p>  </li> <li> <p> <code>Status</code>: The
     * status of the Resolver rule. If you specify <code>Status</code> for
     * <code>Name</code>, specify one of the following status codes for
     * <code>Values</code>: <code>COMPLETE</code>, <code>DELETING</code>,
     * <code>UPDATING</code>, or <code>FAILED</code>.</p> </li> <li> <p>
     * <code>Type</code>: The type of the Resolver rule. If you specify
     * <code>TYPE</code> for <code>Name</code>, specify <code>FORWARD</code> or
     * <code>SYSTEM</code> for <code>Values</code>.</p> </li> </ul> <p>
     * <b>ListResolverRuleAssociations</b> </p> <p>Valid values for <code>Name</code>
     * include the following:</p> <ul> <li> <p> <code>Name</code>: The name of the
     * Resolver rule association.</p> </li> <li> <p> <code>ResolverRuleId</code>: The
     * ID of the Resolver rule that is associated with one or more VPCs.</p> </li> <li>
     * <p> <code>Status</code>: The status of the Resolver rule association. If you
     * specify <code>Status</code> for <code>Name</code>, specify one of the following
     * status codes for <code>Values</code>: <code>CREATING</code>,
     * <code>COMPLETE</code>, <code>DELETING</code>, or <code>FAILED</code>.</p> </li>
     * <li> <p> <code>VPCId</code>: The ID of the VPC that the Resolver rule is
     * associated with.</p> </li> </ul> <p> <b>ListResolverQueryLogConfigs</b> </p>
     * <p>Valid values for <code>Name</code> include the following:</p> <ul> <li> <p>
     * <code>Arn</code>: The ARN for the query logging configuration.</p> </li> <li>
     * <p> <code>AssociationCount</code>: The number of VPCs that are associated with
     * the query logging configuration.</p> </li> <li> <p> <code>CreationTime</code>:
     * The date and time that the query logging configuration was created, in Unix time
     * format and Coordinated Universal Time (UTC). </p> </li> <li> <p>
     * <code>CreatorRequestId</code>: A unique string that identifies the request that
     * created the query logging configuration.</p> </li> <li> <p>
     * <code>Destination</code>: The Amazon Web Services service that you want to
     * forward query logs to. Valid values include the following:</p> <ul> <li> <p>
     * <code>S3</code> </p> </li> <li> <p> <code>CloudWatchLogs</code> </p> </li> <li>
     * <p> <code>KinesisFirehose</code> </p> </li> </ul> </li> <li> <p>
     * <code>DestinationArn</code>: The ARN of the location that Resolver is sending
     * query logs to. This value can be the ARN for an S3 bucket, a CloudWatch Logs log
     * group, or a Kinesis Data Firehose delivery stream.</p> </li> <li> <p>
     * <code>Id</code>: The ID of the query logging configuration</p> </li> <li> <p>
     * <code>Name</code>: The name of the query logging configuration</p> </li> <li>
     * <p> <code>OwnerId</code>: The Amazon Web Services account ID for the account
     * that created the query logging configuration.</p> </li> <li> <p>
     * <code>ShareStatus</code>: An indication of whether the query logging
     * configuration is shared with other Amazon Web Services accounts, or was shared
     * with the current account by another Amazon Web Services account. Valid values
     * include: <code>NOT_SHARED</code>, <code>SHARED_WITH_ME</code>, or
     * <code>SHARED_BY_ME</code>.</p> </li> <li> <p> <code>Status</code>: The status of
     * the query logging configuration. If you specify <code>Status</code> for
     * <code>Name</code>, specify the applicable status code for <code>Values</code>:
     * <code>CREATING</code>, <code>CREATED</code>, <code>DELETING</code>, or
     * <code>FAILED</code>. For more information, see <a
     * href="https://docs.aws.amazon.com/Route53/latest/APIReference/API_route53resolver_ResolverQueryLogConfig.html#Route53Resolver-Type-route53resolver_ResolverQueryLogConfig-Status">Status</a>.
     * </p> </li> </ul> <p> <b>ListResolverQueryLogConfigAssociations</b> </p> <p>Valid
     * values for <code>Name</code> include the following:</p> <ul> <li> <p>
     * <code>CreationTime</code>: The date and time that the VPC was associated with
     * the query logging configuration, in Unix time format and Coordinated Universal
     * Time (UTC).</p> </li> <li> <p> <code>Error</code>: If the value of
     * <code>Status</code> is <code>FAILED</code>, specify the cause:
     * <code>DESTINATION_NOT_FOUND</code> or <code>ACCESS_DENIED</code>.</p> </li> <li>
     * <p> <code>Id</code>: The ID of the query logging association.</p> </li> <li> <p>
     * <code>ResolverQueryLogConfigId</code>: The ID of the query logging configuration
     * that a VPC is associated with.</p> </li> <li> <p> <code>ResourceId</code>: The
     * ID of the Amazon VPC that is associated with the query logging
     * configuration.</p> </li> <li> <p> <code>Status</code>: The status of the query
     * logging association. If you specify <code>Status</code> for <code>Name</code>,
     * specify the applicable status code for <code>Values</code>:
     * <code>CREATING</code>, <code>CREATED</code>, <code>DELETING</code>, or
     * <code>FAILED</code>. For more information, see <a
     * href="https://docs.aws.amazon.com/Route53/latest/APIReference/API_route53resolver_ResolverQueryLogConfigAssociation.html#Route53Resolver-Type-route53resolver_ResolverQueryLogConfigAssociation-Status">Status</a>.
     * </p> </li> </ul>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the parameter that you want to use to filter objects.</p> <p>The
     * valid values for <code>Name</code> depend on the action that you're including
     * the filter in, <a
     * href="https://docs.aws.amazon.com/Route53/latest/APIReference/API_route53resolver_ListResolverEndpoints.html">ListResolverEndpoints</a>,
     * <a
     * href="https://docs.aws.amazon.com/Route53/latest/APIReference/API_route53resolver_ListResolverRules.html">ListResolverRules</a>,
     * <a
     * href="https://docs.aws.amazon.com/Route53/latest/APIReference/API_route53resolver_ListResolverRuleAssociations.html">ListResolverRuleAssociations</a>,
     * <a
     * href="https://docs.aws.amazon.com/Route53/latest/APIReference/API_route53resolver_ListResolverQueryLogConfigs.html">ListResolverQueryLogConfigs</a>,
     * or <a
     * href="https://docs.aws.amazon.com/Route53/latest/APIReference/API_route53resolver_ListResolverQueryLogConfigAssociations.html">ListResolverQueryLogConfigAssociations</a>.</p>
     *  <p>In early versions of Resolver, values for <code>Name</code> were
     * listed as uppercase, with underscore (_) delimiters. For example,
     * <code>CreatorRequestId</code> was originally listed as
     * <code>CREATOR_REQUEST_ID</code>. Uppercase values for <code>Name</code> are
     * still supported.</p>  <p> <b>ListResolverEndpoints</b> </p> <p>Valid
     * values for <code>Name</code> include the following:</p> <ul> <li> <p>
     * <code>CreatorRequestId</code>: The value that you specified when you created the
     * Resolver endpoint.</p> </li> <li> <p> <code>Direction</code>: Whether you want
     * to return inbound or outbound Resolver endpoints. If you specify
     * <code>DIRECTION</code> for <code>Name</code>, specify <code>INBOUND</code> or
     * <code>OUTBOUND</code> for <code>Values</code>.</p> </li> <li> <p>
     * <code>HostVPCId</code>: The ID of the VPC that inbound DNS queries pass through
     * on the way from your network to your VPCs in a region, or the VPC that outbound
     * queries pass through on the way from your VPCs to your network. In a <a
     * href="https://docs.aws.amazon.com/Route53/latest/APIReference/API_route53resolver_CreateResolverEndpoint.html">CreateResolverEndpoint</a>
     * request, <code>SubnetId</code> indirectly identifies the VPC. In a <a
     * href="https://docs.aws.amazon.com/Route53/latest/APIReference/API_route53resolver_GetResolverEndpoint.html">GetResolverEndpoint</a>
     * request, the VPC ID for a Resolver endpoint is returned in the
     * <code>HostVPCId</code> element. </p> </li> <li> <p> <code>IpAddressCount</code>:
     * The number of IP addresses that you have associated with the Resolver
     * endpoint.</p> </li> <li> <p> <code>Name</code>: The name of the Resolver
     * endpoint.</p> </li> <li> <p> <code>SecurityGroupIds</code>: The IDs of the VPC
     * security groups that you specified when you created the Resolver endpoint.</p>
     * </li> <li> <p> <code>Status</code>: The status of the Resolver endpoint. If you
     * specify <code>Status</code> for <code>Name</code>, specify one of the following
     * status codes for <code>Values</code>: <code>CREATING</code>,
     * <code>OPERATIONAL</code>, <code>UPDATING</code>, <code>AUTO_RECOVERING</code>,
     * <code>ACTION_NEEDED</code>, or <code>DELETING</code>. For more information, see
     * <code>Status</code> in <a
     * href="https://docs.aws.amazon.com/Route53/latest/APIReference/API_route53resolver_ResolverEndpoint.html">ResolverEndpoint</a>.</p>
     * </li> </ul> <p> <b>ListResolverRules</b> </p> <p>Valid values for
     * <code>Name</code> include the following:</p> <ul> <li> <p>
     * <code>CreatorRequestId</code>: The value that you specified when you created the
     * Resolver rule.</p> </li> <li> <p> <code>DomainName</code>: The domain name for
     * which Resolver is forwarding DNS queries to your network. In the value that you
     * specify for <code>Values</code>, include a trailing dot (.) after the domain
     * name. For example, if the domain name is example.com, specify the following
     * value. Note the "." after <code>com</code>:</p> <p> <code>example.com.</code>
     * </p> </li> <li> <p> <code>Name</code>: The name of the Resolver rule.</p> </li>
     * <li> <p> <code>ResolverEndpointId</code>: The ID of the Resolver endpoint that
     * the Resolver rule is associated with.</p>  <p>You can filter on the
     * Resolver endpoint only for rules that have a value of <code>FORWARD</code> for
     * <code>RuleType</code>.</p>  </li> <li> <p> <code>Status</code>: The
     * status of the Resolver rule. If you specify <code>Status</code> for
     * <code>Name</code>, specify one of the following status codes for
     * <code>Values</code>: <code>COMPLETE</code>, <code>DELETING</code>,
     * <code>UPDATING</code>, or <code>FAILED</code>.</p> </li> <li> <p>
     * <code>Type</code>: The type of the Resolver rule. If you specify
     * <code>TYPE</code> for <code>Name</code>, specify <code>FORWARD</code> or
     * <code>SYSTEM</code> for <code>Values</code>.</p> </li> </ul> <p>
     * <b>ListResolverRuleAssociations</b> </p> <p>Valid values for <code>Name</code>
     * include the following:</p> <ul> <li> <p> <code>Name</code>: The name of the
     * Resolver rule association.</p> </li> <li> <p> <code>ResolverRuleId</code>: The
     * ID of the Resolver rule that is associated with one or more VPCs.</p> </li> <li>
     * <p> <code>Status</code>: The status of the Resolver rule association. If you
     * specify <code>Status</code> for <code>Name</code>, specify one of the following
     * status codes for <code>Values</code>: <code>CREATING</code>,
     * <code>COMPLETE</code>, <code>DELETING</code>, or <code>FAILED</code>.</p> </li>
     * <li> <p> <code>VPCId</code>: The ID of the VPC that the Resolver rule is
     * associated with.</p> </li> </ul> <p> <b>ListResolverQueryLogConfigs</b> </p>
     * <p>Valid values for <code>Name</code> include the following:</p> <ul> <li> <p>
     * <code>Arn</code>: The ARN for the query logging configuration.</p> </li> <li>
     * <p> <code>AssociationCount</code>: The number of VPCs that are associated with
     * the query logging configuration.</p> </li> <li> <p> <code>CreationTime</code>:
     * The date and time that the query logging configuration was created, in Unix time
     * format and Coordinated Universal Time (UTC). </p> </li> <li> <p>
     * <code>CreatorRequestId</code>: A unique string that identifies the request that
     * created the query logging configuration.</p> </li> <li> <p>
     * <code>Destination</code>: The Amazon Web Services service that you want to
     * forward query logs to. Valid values include the following:</p> <ul> <li> <p>
     * <code>S3</code> </p> </li> <li> <p> <code>CloudWatchLogs</code> </p> </li> <li>
     * <p> <code>KinesisFirehose</code> </p> </li> </ul> </li> <li> <p>
     * <code>DestinationArn</code>: The ARN of the location that Resolver is sending
     * query logs to. This value can be the ARN for an S3 bucket, a CloudWatch Logs log
     * group, or a Kinesis Data Firehose delivery stream.</p> </li> <li> <p>
     * <code>Id</code>: The ID of the query logging configuration</p> </li> <li> <p>
     * <code>Name</code>: The name of the query logging configuration</p> </li> <li>
     * <p> <code>OwnerId</code>: The Amazon Web Services account ID for the account
     * that created the query logging configuration.</p> </li> <li> <p>
     * <code>ShareStatus</code>: An indication of whether the query logging
     * configuration is shared with other Amazon Web Services accounts, or was shared
     * with the current account by another Amazon Web Services account. Valid values
     * include: <code>NOT_SHARED</code>, <code>SHARED_WITH_ME</code>, or
     * <code>SHARED_BY_ME</code>.</p> </li> <li> <p> <code>Status</code>: The status of
     * the query logging configuration. If you specify <code>Status</code> for
     * <code>Name</code>, specify the applicable status code for <code>Values</code>:
     * <code>CREATING</code>, <code>CREATED</code>, <code>DELETING</code>, or
     * <code>FAILED</code>. For more information, see <a
     * href="https://docs.aws.amazon.com/Route53/latest/APIReference/API_route53resolver_ResolverQueryLogConfig.html#Route53Resolver-Type-route53resolver_ResolverQueryLogConfig-Status">Status</a>.
     * </p> </li> </ul> <p> <b>ListResolverQueryLogConfigAssociations</b> </p> <p>Valid
     * values for <code>Name</code> include the following:</p> <ul> <li> <p>
     * <code>CreationTime</code>: The date and time that the VPC was associated with
     * the query logging configuration, in Unix time format and Coordinated Universal
     * Time (UTC).</p> </li> <li> <p> <code>Error</code>: If the value of
     * <code>Status</code> is <code>FAILED</code>, specify the cause:
     * <code>DESTINATION_NOT_FOUND</code> or <code>ACCESS_DENIED</code>.</p> </li> <li>
     * <p> <code>Id</code>: The ID of the query logging association.</p> </li> <li> <p>
     * <code>ResolverQueryLogConfigId</code>: The ID of the query logging configuration
     * that a VPC is associated with.</p> </li> <li> <p> <code>ResourceId</code>: The
     * ID of the Amazon VPC that is associated with the query logging
     * configuration.</p> </li> <li> <p> <code>Status</code>: The status of the query
     * logging association. If you specify <code>Status</code> for <code>Name</code>,
     * specify the applicable status code for <code>Values</code>:
     * <code>CREATING</code>, <code>CREATED</code>, <code>DELETING</code>, or
     * <code>FAILED</code>. For more information, see <a
     * href="https://docs.aws.amazon.com/Route53/latest/APIReference/API_route53resolver_ResolverQueryLogConfigAssociation.html#Route53Resolver-Type-route53resolver_ResolverQueryLogConfigAssociation-Status">Status</a>.
     * </p> </li> </ul>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the parameter that you want to use to filter objects.</p> <p>The
     * valid values for <code>Name</code> depend on the action that you're including
     * the filter in, <a
     * href="https://docs.aws.amazon.com/Route53/latest/APIReference/API_route53resolver_ListResolverEndpoints.html">ListResolverEndpoints</a>,
     * <a
     * href="https://docs.aws.amazon.com/Route53/latest/APIReference/API_route53resolver_ListResolverRules.html">ListResolverRules</a>,
     * <a
     * href="https://docs.aws.amazon.com/Route53/latest/APIReference/API_route53resolver_ListResolverRuleAssociations.html">ListResolverRuleAssociations</a>,
     * <a
     * href="https://docs.aws.amazon.com/Route53/latest/APIReference/API_route53resolver_ListResolverQueryLogConfigs.html">ListResolverQueryLogConfigs</a>,
     * or <a
     * href="https://docs.aws.amazon.com/Route53/latest/APIReference/API_route53resolver_ListResolverQueryLogConfigAssociations.html">ListResolverQueryLogConfigAssociations</a>.</p>
     *  <p>In early versions of Resolver, values for <code>Name</code> were
     * listed as uppercase, with underscore (_) delimiters. For example,
     * <code>CreatorRequestId</code> was originally listed as
     * <code>CREATOR_REQUEST_ID</code>. Uppercase values for <code>Name</code> are
     * still supported.</p>  <p> <b>ListResolverEndpoints</b> </p> <p>Valid
     * values for <code>Name</code> include the following:</p> <ul> <li> <p>
     * <code>CreatorRequestId</code>: The value that you specified when you created the
     * Resolver endpoint.</p> </li> <li> <p> <code>Direction</code>: Whether you want
     * to return inbound or outbound Resolver endpoints. If you specify
     * <code>DIRECTION</code> for <code>Name</code>, specify <code>INBOUND</code> or
     * <code>OUTBOUND</code> for <code>Values</code>.</p> </li> <li> <p>
     * <code>HostVPCId</code>: The ID of the VPC that inbound DNS queries pass through
     * on the way from your network to your VPCs in a region, or the VPC that outbound
     * queries pass through on the way from your VPCs to your network. In a <a
     * href="https://docs.aws.amazon.com/Route53/latest/APIReference/API_route53resolver_CreateResolverEndpoint.html">CreateResolverEndpoint</a>
     * request, <code>SubnetId</code> indirectly identifies the VPC. In a <a
     * href="https://docs.aws.amazon.com/Route53/latest/APIReference/API_route53resolver_GetResolverEndpoint.html">GetResolverEndpoint</a>
     * request, the VPC ID for a Resolver endpoint is returned in the
     * <code>HostVPCId</code> element. </p> </li> <li> <p> <code>IpAddressCount</code>:
     * The number of IP addresses that you have associated with the Resolver
     * endpoint.</p> </li> <li> <p> <code>Name</code>: The name of the Resolver
     * endpoint.</p> </li> <li> <p> <code>SecurityGroupIds</code>: The IDs of the VPC
     * security groups that you specified when you created the Resolver endpoint.</p>
     * </li> <li> <p> <code>Status</code>: The status of the Resolver endpoint. If you
     * specify <code>Status</code> for <code>Name</code>, specify one of the following
     * status codes for <code>Values</code>: <code>CREATING</code>,
     * <code>OPERATIONAL</code>, <code>UPDATING</code>, <code>AUTO_RECOVERING</code>,
     * <code>ACTION_NEEDED</code>, or <code>DELETING</code>. For more information, see
     * <code>Status</code> in <a
     * href="https://docs.aws.amazon.com/Route53/latest/APIReference/API_route53resolver_ResolverEndpoint.html">ResolverEndpoint</a>.</p>
     * </li> </ul> <p> <b>ListResolverRules</b> </p> <p>Valid values for
     * <code>Name</code> include the following:</p> <ul> <li> <p>
     * <code>CreatorRequestId</code>: The value that you specified when you created the
     * Resolver rule.</p> </li> <li> <p> <code>DomainName</code>: The domain name for
     * which Resolver is forwarding DNS queries to your network. In the value that you
     * specify for <code>Values</code>, include a trailing dot (.) after the domain
     * name. For example, if the domain name is example.com, specify the following
     * value. Note the "." after <code>com</code>:</p> <p> <code>example.com.</code>
     * </p> </li> <li> <p> <code>Name</code>: The name of the Resolver rule.</p> </li>
     * <li> <p> <code>ResolverEndpointId</code>: The ID of the Resolver endpoint that
     * the Resolver rule is associated with.</p>  <p>You can filter on the
     * Resolver endpoint only for rules that have a value of <code>FORWARD</code> for
     * <code>RuleType</code>.</p>  </li> <li> <p> <code>Status</code>: The
     * status of the Resolver rule. If you specify <code>Status</code> for
     * <code>Name</code>, specify one of the following status codes for
     * <code>Values</code>: <code>COMPLETE</code>, <code>DELETING</code>,
     * <code>UPDATING</code>, or <code>FAILED</code>.</p> </li> <li> <p>
     * <code>Type</code>: The type of the Resolver rule. If you specify
     * <code>TYPE</code> for <code>Name</code>, specify <code>FORWARD</code> or
     * <code>SYSTEM</code> for <code>Values</code>.</p> </li> </ul> <p>
     * <b>ListResolverRuleAssociations</b> </p> <p>Valid values for <code>Name</code>
     * include the following:</p> <ul> <li> <p> <code>Name</code>: The name of the
     * Resolver rule association.</p> </li> <li> <p> <code>ResolverRuleId</code>: The
     * ID of the Resolver rule that is associated with one or more VPCs.</p> </li> <li>
     * <p> <code>Status</code>: The status of the Resolver rule association. If you
     * specify <code>Status</code> for <code>Name</code>, specify one of the following
     * status codes for <code>Values</code>: <code>CREATING</code>,
     * <code>COMPLETE</code>, <code>DELETING</code>, or <code>FAILED</code>.</p> </li>
     * <li> <p> <code>VPCId</code>: The ID of the VPC that the Resolver rule is
     * associated with.</p> </li> </ul> <p> <b>ListResolverQueryLogConfigs</b> </p>
     * <p>Valid values for <code>Name</code> include the following:</p> <ul> <li> <p>
     * <code>Arn</code>: The ARN for the query logging configuration.</p> </li> <li>
     * <p> <code>AssociationCount</code>: The number of VPCs that are associated with
     * the query logging configuration.</p> </li> <li> <p> <code>CreationTime</code>:
     * The date and time that the query logging configuration was created, in Unix time
     * format and Coordinated Universal Time (UTC). </p> </li> <li> <p>
     * <code>CreatorRequestId</code>: A unique string that identifies the request that
     * created the query logging configuration.</p> </li> <li> <p>
     * <code>Destination</code>: The Amazon Web Services service that you want to
     * forward query logs to. Valid values include the following:</p> <ul> <li> <p>
     * <code>S3</code> </p> </li> <li> <p> <code>CloudWatchLogs</code> </p> </li> <li>
     * <p> <code>KinesisFirehose</code> </p> </li> </ul> </li> <li> <p>
     * <code>DestinationArn</code>: The ARN of the location that Resolver is sending
     * query logs to. This value can be the ARN for an S3 bucket, a CloudWatch Logs log
     * group, or a Kinesis Data Firehose delivery stream.</p> </li> <li> <p>
     * <code>Id</code>: The ID of the query logging configuration</p> </li> <li> <p>
     * <code>Name</code>: The name of the query logging configuration</p> </li> <li>
     * <p> <code>OwnerId</code>: The Amazon Web Services account ID for the account
     * that created the query logging configuration.</p> </li> <li> <p>
     * <code>ShareStatus</code>: An indication of whether the query logging
     * configuration is shared with other Amazon Web Services accounts, or was shared
     * with the current account by another Amazon Web Services account. Valid values
     * include: <code>NOT_SHARED</code>, <code>SHARED_WITH_ME</code>, or
     * <code>SHARED_BY_ME</code>.</p> </li> <li> <p> <code>Status</code>: The status of
     * the query logging configuration. If you specify <code>Status</code> for
     * <code>Name</code>, specify the applicable status code for <code>Values</code>:
     * <code>CREATING</code>, <code>CREATED</code>, <code>DELETING</code>, or
     * <code>FAILED</code>. For more information, see <a
     * href="https://docs.aws.amazon.com/Route53/latest/APIReference/API_route53resolver_ResolverQueryLogConfig.html#Route53Resolver-Type-route53resolver_ResolverQueryLogConfig-Status">Status</a>.
     * </p> </li> </ul> <p> <b>ListResolverQueryLogConfigAssociations</b> </p> <p>Valid
     * values for <code>Name</code> include the following:</p> <ul> <li> <p>
     * <code>CreationTime</code>: The date and time that the VPC was associated with
     * the query logging configuration, in Unix time format and Coordinated Universal
     * Time (UTC).</p> </li> <li> <p> <code>Error</code>: If the value of
     * <code>Status</code> is <code>FAILED</code>, specify the cause:
     * <code>DESTINATION_NOT_FOUND</code> or <code>ACCESS_DENIED</code>.</p> </li> <li>
     * <p> <code>Id</code>: The ID of the query logging association.</p> </li> <li> <p>
     * <code>ResolverQueryLogConfigId</code>: The ID of the query logging configuration
     * that a VPC is associated with.</p> </li> <li> <p> <code>ResourceId</code>: The
     * ID of the Amazon VPC that is associated with the query logging
     * configuration.</p> </li> <li> <p> <code>Status</code>: The status of the query
     * logging association. If you specify <code>Status</code> for <code>Name</code>,
     * specify the applicable status code for <code>Values</code>:
     * <code>CREATING</code>, <code>CREATED</code>, <code>DELETING</code>, or
     * <code>FAILED</code>. For more information, see <a
     * href="https://docs.aws.amazon.com/Route53/latest/APIReference/API_route53resolver_ResolverQueryLogConfigAssociation.html#Route53Resolver-Type-route53resolver_ResolverQueryLogConfigAssociation-Status">Status</a>.
     * </p> </li> </ul>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the parameter that you want to use to filter objects.</p> <p>The
     * valid values for <code>Name</code> depend on the action that you're including
     * the filter in, <a
     * href="https://docs.aws.amazon.com/Route53/latest/APIReference/API_route53resolver_ListResolverEndpoints.html">ListResolverEndpoints</a>,
     * <a
     * href="https://docs.aws.amazon.com/Route53/latest/APIReference/API_route53resolver_ListResolverRules.html">ListResolverRules</a>,
     * <a
     * href="https://docs.aws.amazon.com/Route53/latest/APIReference/API_route53resolver_ListResolverRuleAssociations.html">ListResolverRuleAssociations</a>,
     * <a
     * href="https://docs.aws.amazon.com/Route53/latest/APIReference/API_route53resolver_ListResolverQueryLogConfigs.html">ListResolverQueryLogConfigs</a>,
     * or <a
     * href="https://docs.aws.amazon.com/Route53/latest/APIReference/API_route53resolver_ListResolverQueryLogConfigAssociations.html">ListResolverQueryLogConfigAssociations</a>.</p>
     *  <p>In early versions of Resolver, values for <code>Name</code> were
     * listed as uppercase, with underscore (_) delimiters. For example,
     * <code>CreatorRequestId</code> was originally listed as
     * <code>CREATOR_REQUEST_ID</code>. Uppercase values for <code>Name</code> are
     * still supported.</p>  <p> <b>ListResolverEndpoints</b> </p> <p>Valid
     * values for <code>Name</code> include the following:</p> <ul> <li> <p>
     * <code>CreatorRequestId</code>: The value that you specified when you created the
     * Resolver endpoint.</p> </li> <li> <p> <code>Direction</code>: Whether you want
     * to return inbound or outbound Resolver endpoints. If you specify
     * <code>DIRECTION</code> for <code>Name</code>, specify <code>INBOUND</code> or
     * <code>OUTBOUND</code> for <code>Values</code>.</p> </li> <li> <p>
     * <code>HostVPCId</code>: The ID of the VPC that inbound DNS queries pass through
     * on the way from your network to your VPCs in a region, or the VPC that outbound
     * queries pass through on the way from your VPCs to your network. In a <a
     * href="https://docs.aws.amazon.com/Route53/latest/APIReference/API_route53resolver_CreateResolverEndpoint.html">CreateResolverEndpoint</a>
     * request, <code>SubnetId</code> indirectly identifies the VPC. In a <a
     * href="https://docs.aws.amazon.com/Route53/latest/APIReference/API_route53resolver_GetResolverEndpoint.html">GetResolverEndpoint</a>
     * request, the VPC ID for a Resolver endpoint is returned in the
     * <code>HostVPCId</code> element. </p> </li> <li> <p> <code>IpAddressCount</code>:
     * The number of IP addresses that you have associated with the Resolver
     * endpoint.</p> </li> <li> <p> <code>Name</code>: The name of the Resolver
     * endpoint.</p> </li> <li> <p> <code>SecurityGroupIds</code>: The IDs of the VPC
     * security groups that you specified when you created the Resolver endpoint.</p>
     * </li> <li> <p> <code>Status</code>: The status of the Resolver endpoint. If you
     * specify <code>Status</code> for <code>Name</code>, specify one of the following
     * status codes for <code>Values</code>: <code>CREATING</code>,
     * <code>OPERATIONAL</code>, <code>UPDATING</code>, <code>AUTO_RECOVERING</code>,
     * <code>ACTION_NEEDED</code>, or <code>DELETING</code>. For more information, see
     * <code>Status</code> in <a
     * href="https://docs.aws.amazon.com/Route53/latest/APIReference/API_route53resolver_ResolverEndpoint.html">ResolverEndpoint</a>.</p>
     * </li> </ul> <p> <b>ListResolverRules</b> </p> <p>Valid values for
     * <code>Name</code> include the following:</p> <ul> <li> <p>
     * <code>CreatorRequestId</code>: The value that you specified when you created the
     * Resolver rule.</p> </li> <li> <p> <code>DomainName</code>: The domain name for
     * which Resolver is forwarding DNS queries to your network. In the value that you
     * specify for <code>Values</code>, include a trailing dot (.) after the domain
     * name. For example, if the domain name is example.com, specify the following
     * value. Note the "." after <code>com</code>:</p> <p> <code>example.com.</code>
     * </p> </li> <li> <p> <code>Name</code>: The name of the Resolver rule.</p> </li>
     * <li> <p> <code>ResolverEndpointId</code>: The ID of the Resolver endpoint that
     * the Resolver rule is associated with.</p>  <p>You can filter on the
     * Resolver endpoint only for rules that have a value of <code>FORWARD</code> for
     * <code>RuleType</code>.</p>  </li> <li> <p> <code>Status</code>: The
     * status of the Resolver rule. If you specify <code>Status</code> for
     * <code>Name</code>, specify one of the following status codes for
     * <code>Values</code>: <code>COMPLETE</code>, <code>DELETING</code>,
     * <code>UPDATING</code>, or <code>FAILED</code>.</p> </li> <li> <p>
     * <code>Type</code>: The type of the Resolver rule. If you specify
     * <code>TYPE</code> for <code>Name</code>, specify <code>FORWARD</code> or
     * <code>SYSTEM</code> for <code>Values</code>.</p> </li> </ul> <p>
     * <b>ListResolverRuleAssociations</b> </p> <p>Valid values for <code>Name</code>
     * include the following:</p> <ul> <li> <p> <code>Name</code>: The name of the
     * Resolver rule association.</p> </li> <li> <p> <code>ResolverRuleId</code>: The
     * ID of the Resolver rule that is associated with one or more VPCs.</p> </li> <li>
     * <p> <code>Status</code>: The status of the Resolver rule association. If you
     * specify <code>Status</code> for <code>Name</code>, specify one of the following
     * status codes for <code>Values</code>: <code>CREATING</code>,
     * <code>COMPLETE</code>, <code>DELETING</code>, or <code>FAILED</code>.</p> </li>
     * <li> <p> <code>VPCId</code>: The ID of the VPC that the Resolver rule is
     * associated with.</p> </li> </ul> <p> <b>ListResolverQueryLogConfigs</b> </p>
     * <p>Valid values for <code>Name</code> include the following:</p> <ul> <li> <p>
     * <code>Arn</code>: The ARN for the query logging configuration.</p> </li> <li>
     * <p> <code>AssociationCount</code>: The number of VPCs that are associated with
     * the query logging configuration.</p> </li> <li> <p> <code>CreationTime</code>:
     * The date and time that the query logging configuration was created, in Unix time
     * format and Coordinated Universal Time (UTC). </p> </li> <li> <p>
     * <code>CreatorRequestId</code>: A unique string that identifies the request that
     * created the query logging configuration.</p> </li> <li> <p>
     * <code>Destination</code>: The Amazon Web Services service that you want to
     * forward query logs to. Valid values include the following:</p> <ul> <li> <p>
     * <code>S3</code> </p> </li> <li> <p> <code>CloudWatchLogs</code> </p> </li> <li>
     * <p> <code>KinesisFirehose</code> </p> </li> </ul> </li> <li> <p>
     * <code>DestinationArn</code>: The ARN of the location that Resolver is sending
     * query logs to. This value can be the ARN for an S3 bucket, a CloudWatch Logs log
     * group, or a Kinesis Data Firehose delivery stream.</p> </li> <li> <p>
     * <code>Id</code>: The ID of the query logging configuration</p> </li> <li> <p>
     * <code>Name</code>: The name of the query logging configuration</p> </li> <li>
     * <p> <code>OwnerId</code>: The Amazon Web Services account ID for the account
     * that created the query logging configuration.</p> </li> <li> <p>
     * <code>ShareStatus</code>: An indication of whether the query logging
     * configuration is shared with other Amazon Web Services accounts, or was shared
     * with the current account by another Amazon Web Services account. Valid values
     * include: <code>NOT_SHARED</code>, <code>SHARED_WITH_ME</code>, or
     * <code>SHARED_BY_ME</code>.</p> </li> <li> <p> <code>Status</code>: The status of
     * the query logging configuration. If you specify <code>Status</code> for
     * <code>Name</code>, specify the applicable status code for <code>Values</code>:
     * <code>CREATING</code>, <code>CREATED</code>, <code>DELETING</code>, or
     * <code>FAILED</code>. For more information, see <a
     * href="https://docs.aws.amazon.com/Route53/latest/APIReference/API_route53resolver_ResolverQueryLogConfig.html#Route53Resolver-Type-route53resolver_ResolverQueryLogConfig-Status">Status</a>.
     * </p> </li> </ul> <p> <b>ListResolverQueryLogConfigAssociations</b> </p> <p>Valid
     * values for <code>Name</code> include the following:</p> <ul> <li> <p>
     * <code>CreationTime</code>: The date and time that the VPC was associated with
     * the query logging configuration, in Unix time format and Coordinated Universal
     * Time (UTC).</p> </li> <li> <p> <code>Error</code>: If the value of
     * <code>Status</code> is <code>FAILED</code>, specify the cause:
     * <code>DESTINATION_NOT_FOUND</code> or <code>ACCESS_DENIED</code>.</p> </li> <li>
     * <p> <code>Id</code>: The ID of the query logging association.</p> </li> <li> <p>
     * <code>ResolverQueryLogConfigId</code>: The ID of the query logging configuration
     * that a VPC is associated with.</p> </li> <li> <p> <code>ResourceId</code>: The
     * ID of the Amazon VPC that is associated with the query logging
     * configuration.</p> </li> <li> <p> <code>Status</code>: The status of the query
     * logging association. If you specify <code>Status</code> for <code>Name</code>,
     * specify the applicable status code for <code>Values</code>:
     * <code>CREATING</code>, <code>CREATED</code>, <code>DELETING</code>, or
     * <code>FAILED</code>. For more information, see <a
     * href="https://docs.aws.amazon.com/Route53/latest/APIReference/API_route53resolver_ResolverQueryLogConfigAssociation.html#Route53Resolver-Type-route53resolver_ResolverQueryLogConfigAssociation-Status">Status</a>.
     * </p> </li> </ul>
     */
    inline Filter& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the parameter that you want to use to filter objects.</p> <p>The
     * valid values for <code>Name</code> depend on the action that you're including
     * the filter in, <a
     * href="https://docs.aws.amazon.com/Route53/latest/APIReference/API_route53resolver_ListResolverEndpoints.html">ListResolverEndpoints</a>,
     * <a
     * href="https://docs.aws.amazon.com/Route53/latest/APIReference/API_route53resolver_ListResolverRules.html">ListResolverRules</a>,
     * <a
     * href="https://docs.aws.amazon.com/Route53/latest/APIReference/API_route53resolver_ListResolverRuleAssociations.html">ListResolverRuleAssociations</a>,
     * <a
     * href="https://docs.aws.amazon.com/Route53/latest/APIReference/API_route53resolver_ListResolverQueryLogConfigs.html">ListResolverQueryLogConfigs</a>,
     * or <a
     * href="https://docs.aws.amazon.com/Route53/latest/APIReference/API_route53resolver_ListResolverQueryLogConfigAssociations.html">ListResolverQueryLogConfigAssociations</a>.</p>
     *  <p>In early versions of Resolver, values for <code>Name</code> were
     * listed as uppercase, with underscore (_) delimiters. For example,
     * <code>CreatorRequestId</code> was originally listed as
     * <code>CREATOR_REQUEST_ID</code>. Uppercase values for <code>Name</code> are
     * still supported.</p>  <p> <b>ListResolverEndpoints</b> </p> <p>Valid
     * values for <code>Name</code> include the following:</p> <ul> <li> <p>
     * <code>CreatorRequestId</code>: The value that you specified when you created the
     * Resolver endpoint.</p> </li> <li> <p> <code>Direction</code>: Whether you want
     * to return inbound or outbound Resolver endpoints. If you specify
     * <code>DIRECTION</code> for <code>Name</code>, specify <code>INBOUND</code> or
     * <code>OUTBOUND</code> for <code>Values</code>.</p> </li> <li> <p>
     * <code>HostVPCId</code>: The ID of the VPC that inbound DNS queries pass through
     * on the way from your network to your VPCs in a region, or the VPC that outbound
     * queries pass through on the way from your VPCs to your network. In a <a
     * href="https://docs.aws.amazon.com/Route53/latest/APIReference/API_route53resolver_CreateResolverEndpoint.html">CreateResolverEndpoint</a>
     * request, <code>SubnetId</code> indirectly identifies the VPC. In a <a
     * href="https://docs.aws.amazon.com/Route53/latest/APIReference/API_route53resolver_GetResolverEndpoint.html">GetResolverEndpoint</a>
     * request, the VPC ID for a Resolver endpoint is returned in the
     * <code>HostVPCId</code> element. </p> </li> <li> <p> <code>IpAddressCount</code>:
     * The number of IP addresses that you have associated with the Resolver
     * endpoint.</p> </li> <li> <p> <code>Name</code>: The name of the Resolver
     * endpoint.</p> </li> <li> <p> <code>SecurityGroupIds</code>: The IDs of the VPC
     * security groups that you specified when you created the Resolver endpoint.</p>
     * </li> <li> <p> <code>Status</code>: The status of the Resolver endpoint. If you
     * specify <code>Status</code> for <code>Name</code>, specify one of the following
     * status codes for <code>Values</code>: <code>CREATING</code>,
     * <code>OPERATIONAL</code>, <code>UPDATING</code>, <code>AUTO_RECOVERING</code>,
     * <code>ACTION_NEEDED</code>, or <code>DELETING</code>. For more information, see
     * <code>Status</code> in <a
     * href="https://docs.aws.amazon.com/Route53/latest/APIReference/API_route53resolver_ResolverEndpoint.html">ResolverEndpoint</a>.</p>
     * </li> </ul> <p> <b>ListResolverRules</b> </p> <p>Valid values for
     * <code>Name</code> include the following:</p> <ul> <li> <p>
     * <code>CreatorRequestId</code>: The value that you specified when you created the
     * Resolver rule.</p> </li> <li> <p> <code>DomainName</code>: The domain name for
     * which Resolver is forwarding DNS queries to your network. In the value that you
     * specify for <code>Values</code>, include a trailing dot (.) after the domain
     * name. For example, if the domain name is example.com, specify the following
     * value. Note the "." after <code>com</code>:</p> <p> <code>example.com.</code>
     * </p> </li> <li> <p> <code>Name</code>: The name of the Resolver rule.</p> </li>
     * <li> <p> <code>ResolverEndpointId</code>: The ID of the Resolver endpoint that
     * the Resolver rule is associated with.</p>  <p>You can filter on the
     * Resolver endpoint only for rules that have a value of <code>FORWARD</code> for
     * <code>RuleType</code>.</p>  </li> <li> <p> <code>Status</code>: The
     * status of the Resolver rule. If you specify <code>Status</code> for
     * <code>Name</code>, specify one of the following status codes for
     * <code>Values</code>: <code>COMPLETE</code>, <code>DELETING</code>,
     * <code>UPDATING</code>, or <code>FAILED</code>.</p> </li> <li> <p>
     * <code>Type</code>: The type of the Resolver rule. If you specify
     * <code>TYPE</code> for <code>Name</code>, specify <code>FORWARD</code> or
     * <code>SYSTEM</code> for <code>Values</code>.</p> </li> </ul> <p>
     * <b>ListResolverRuleAssociations</b> </p> <p>Valid values for <code>Name</code>
     * include the following:</p> <ul> <li> <p> <code>Name</code>: The name of the
     * Resolver rule association.</p> </li> <li> <p> <code>ResolverRuleId</code>: The
     * ID of the Resolver rule that is associated with one or more VPCs.</p> </li> <li>
     * <p> <code>Status</code>: The status of the Resolver rule association. If you
     * specify <code>Status</code> for <code>Name</code>, specify one of the following
     * status codes for <code>Values</code>: <code>CREATING</code>,
     * <code>COMPLETE</code>, <code>DELETING</code>, or <code>FAILED</code>.</p> </li>
     * <li> <p> <code>VPCId</code>: The ID of the VPC that the Resolver rule is
     * associated with.</p> </li> </ul> <p> <b>ListResolverQueryLogConfigs</b> </p>
     * <p>Valid values for <code>Name</code> include the following:</p> <ul> <li> <p>
     * <code>Arn</code>: The ARN for the query logging configuration.</p> </li> <li>
     * <p> <code>AssociationCount</code>: The number of VPCs that are associated with
     * the query logging configuration.</p> </li> <li> <p> <code>CreationTime</code>:
     * The date and time that the query logging configuration was created, in Unix time
     * format and Coordinated Universal Time (UTC). </p> </li> <li> <p>
     * <code>CreatorRequestId</code>: A unique string that identifies the request that
     * created the query logging configuration.</p> </li> <li> <p>
     * <code>Destination</code>: The Amazon Web Services service that you want to
     * forward query logs to. Valid values include the following:</p> <ul> <li> <p>
     * <code>S3</code> </p> </li> <li> <p> <code>CloudWatchLogs</code> </p> </li> <li>
     * <p> <code>KinesisFirehose</code> </p> </li> </ul> </li> <li> <p>
     * <code>DestinationArn</code>: The ARN of the location that Resolver is sending
     * query logs to. This value can be the ARN for an S3 bucket, a CloudWatch Logs log
     * group, or a Kinesis Data Firehose delivery stream.</p> </li> <li> <p>
     * <code>Id</code>: The ID of the query logging configuration</p> </li> <li> <p>
     * <code>Name</code>: The name of the query logging configuration</p> </li> <li>
     * <p> <code>OwnerId</code>: The Amazon Web Services account ID for the account
     * that created the query logging configuration.</p> </li> <li> <p>
     * <code>ShareStatus</code>: An indication of whether the query logging
     * configuration is shared with other Amazon Web Services accounts, or was shared
     * with the current account by another Amazon Web Services account. Valid values
     * include: <code>NOT_SHARED</code>, <code>SHARED_WITH_ME</code>, or
     * <code>SHARED_BY_ME</code>.</p> </li> <li> <p> <code>Status</code>: The status of
     * the query logging configuration. If you specify <code>Status</code> for
     * <code>Name</code>, specify the applicable status code for <code>Values</code>:
     * <code>CREATING</code>, <code>CREATED</code>, <code>DELETING</code>, or
     * <code>FAILED</code>. For more information, see <a
     * href="https://docs.aws.amazon.com/Route53/latest/APIReference/API_route53resolver_ResolverQueryLogConfig.html#Route53Resolver-Type-route53resolver_ResolverQueryLogConfig-Status">Status</a>.
     * </p> </li> </ul> <p> <b>ListResolverQueryLogConfigAssociations</b> </p> <p>Valid
     * values for <code>Name</code> include the following:</p> <ul> <li> <p>
     * <code>CreationTime</code>: The date and time that the VPC was associated with
     * the query logging configuration, in Unix time format and Coordinated Universal
     * Time (UTC).</p> </li> <li> <p> <code>Error</code>: If the value of
     * <code>Status</code> is <code>FAILED</code>, specify the cause:
     * <code>DESTINATION_NOT_FOUND</code> or <code>ACCESS_DENIED</code>.</p> </li> <li>
     * <p> <code>Id</code>: The ID of the query logging association.</p> </li> <li> <p>
     * <code>ResolverQueryLogConfigId</code>: The ID of the query logging configuration
     * that a VPC is associated with.</p> </li> <li> <p> <code>ResourceId</code>: The
     * ID of the Amazon VPC that is associated with the query logging
     * configuration.</p> </li> <li> <p> <code>Status</code>: The status of the query
     * logging association. If you specify <code>Status</code> for <code>Name</code>,
     * specify the applicable status code for <code>Values</code>:
     * <code>CREATING</code>, <code>CREATED</code>, <code>DELETING</code>, or
     * <code>FAILED</code>. For more information, see <a
     * href="https://docs.aws.amazon.com/Route53/latest/APIReference/API_route53resolver_ResolverQueryLogConfigAssociation.html#Route53Resolver-Type-route53resolver_ResolverQueryLogConfigAssociation-Status">Status</a>.
     * </p> </li> </ul>
     */
    inline Filter& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the parameter that you want to use to filter objects.</p> <p>The
     * valid values for <code>Name</code> depend on the action that you're including
     * the filter in, <a
     * href="https://docs.aws.amazon.com/Route53/latest/APIReference/API_route53resolver_ListResolverEndpoints.html">ListResolverEndpoints</a>,
     * <a
     * href="https://docs.aws.amazon.com/Route53/latest/APIReference/API_route53resolver_ListResolverRules.html">ListResolverRules</a>,
     * <a
     * href="https://docs.aws.amazon.com/Route53/latest/APIReference/API_route53resolver_ListResolverRuleAssociations.html">ListResolverRuleAssociations</a>,
     * <a
     * href="https://docs.aws.amazon.com/Route53/latest/APIReference/API_route53resolver_ListResolverQueryLogConfigs.html">ListResolverQueryLogConfigs</a>,
     * or <a
     * href="https://docs.aws.amazon.com/Route53/latest/APIReference/API_route53resolver_ListResolverQueryLogConfigAssociations.html">ListResolverQueryLogConfigAssociations</a>.</p>
     *  <p>In early versions of Resolver, values for <code>Name</code> were
     * listed as uppercase, with underscore (_) delimiters. For example,
     * <code>CreatorRequestId</code> was originally listed as
     * <code>CREATOR_REQUEST_ID</code>. Uppercase values for <code>Name</code> are
     * still supported.</p>  <p> <b>ListResolverEndpoints</b> </p> <p>Valid
     * values for <code>Name</code> include the following:</p> <ul> <li> <p>
     * <code>CreatorRequestId</code>: The value that you specified when you created the
     * Resolver endpoint.</p> </li> <li> <p> <code>Direction</code>: Whether you want
     * to return inbound or outbound Resolver endpoints. If you specify
     * <code>DIRECTION</code> for <code>Name</code>, specify <code>INBOUND</code> or
     * <code>OUTBOUND</code> for <code>Values</code>.</p> </li> <li> <p>
     * <code>HostVPCId</code>: The ID of the VPC that inbound DNS queries pass through
     * on the way from your network to your VPCs in a region, or the VPC that outbound
     * queries pass through on the way from your VPCs to your network. In a <a
     * href="https://docs.aws.amazon.com/Route53/latest/APIReference/API_route53resolver_CreateResolverEndpoint.html">CreateResolverEndpoint</a>
     * request, <code>SubnetId</code> indirectly identifies the VPC. In a <a
     * href="https://docs.aws.amazon.com/Route53/latest/APIReference/API_route53resolver_GetResolverEndpoint.html">GetResolverEndpoint</a>
     * request, the VPC ID for a Resolver endpoint is returned in the
     * <code>HostVPCId</code> element. </p> </li> <li> <p> <code>IpAddressCount</code>:
     * The number of IP addresses that you have associated with the Resolver
     * endpoint.</p> </li> <li> <p> <code>Name</code>: The name of the Resolver
     * endpoint.</p> </li> <li> <p> <code>SecurityGroupIds</code>: The IDs of the VPC
     * security groups that you specified when you created the Resolver endpoint.</p>
     * </li> <li> <p> <code>Status</code>: The status of the Resolver endpoint. If you
     * specify <code>Status</code> for <code>Name</code>, specify one of the following
     * status codes for <code>Values</code>: <code>CREATING</code>,
     * <code>OPERATIONAL</code>, <code>UPDATING</code>, <code>AUTO_RECOVERING</code>,
     * <code>ACTION_NEEDED</code>, or <code>DELETING</code>. For more information, see
     * <code>Status</code> in <a
     * href="https://docs.aws.amazon.com/Route53/latest/APIReference/API_route53resolver_ResolverEndpoint.html">ResolverEndpoint</a>.</p>
     * </li> </ul> <p> <b>ListResolverRules</b> </p> <p>Valid values for
     * <code>Name</code> include the following:</p> <ul> <li> <p>
     * <code>CreatorRequestId</code>: The value that you specified when you created the
     * Resolver rule.</p> </li> <li> <p> <code>DomainName</code>: The domain name for
     * which Resolver is forwarding DNS queries to your network. In the value that you
     * specify for <code>Values</code>, include a trailing dot (.) after the domain
     * name. For example, if the domain name is example.com, specify the following
     * value. Note the "." after <code>com</code>:</p> <p> <code>example.com.</code>
     * </p> </li> <li> <p> <code>Name</code>: The name of the Resolver rule.</p> </li>
     * <li> <p> <code>ResolverEndpointId</code>: The ID of the Resolver endpoint that
     * the Resolver rule is associated with.</p>  <p>You can filter on the
     * Resolver endpoint only for rules that have a value of <code>FORWARD</code> for
     * <code>RuleType</code>.</p>  </li> <li> <p> <code>Status</code>: The
     * status of the Resolver rule. If you specify <code>Status</code> for
     * <code>Name</code>, specify one of the following status codes for
     * <code>Values</code>: <code>COMPLETE</code>, <code>DELETING</code>,
     * <code>UPDATING</code>, or <code>FAILED</code>.</p> </li> <li> <p>
     * <code>Type</code>: The type of the Resolver rule. If you specify
     * <code>TYPE</code> for <code>Name</code>, specify <code>FORWARD</code> or
     * <code>SYSTEM</code> for <code>Values</code>.</p> </li> </ul> <p>
     * <b>ListResolverRuleAssociations</b> </p> <p>Valid values for <code>Name</code>
     * include the following:</p> <ul> <li> <p> <code>Name</code>: The name of the
     * Resolver rule association.</p> </li> <li> <p> <code>ResolverRuleId</code>: The
     * ID of the Resolver rule that is associated with one or more VPCs.</p> </li> <li>
     * <p> <code>Status</code>: The status of the Resolver rule association. If you
     * specify <code>Status</code> for <code>Name</code>, specify one of the following
     * status codes for <code>Values</code>: <code>CREATING</code>,
     * <code>COMPLETE</code>, <code>DELETING</code>, or <code>FAILED</code>.</p> </li>
     * <li> <p> <code>VPCId</code>: The ID of the VPC that the Resolver rule is
     * associated with.</p> </li> </ul> <p> <b>ListResolverQueryLogConfigs</b> </p>
     * <p>Valid values for <code>Name</code> include the following:</p> <ul> <li> <p>
     * <code>Arn</code>: The ARN for the query logging configuration.</p> </li> <li>
     * <p> <code>AssociationCount</code>: The number of VPCs that are associated with
     * the query logging configuration.</p> </li> <li> <p> <code>CreationTime</code>:
     * The date and time that the query logging configuration was created, in Unix time
     * format and Coordinated Universal Time (UTC). </p> </li> <li> <p>
     * <code>CreatorRequestId</code>: A unique string that identifies the request that
     * created the query logging configuration.</p> </li> <li> <p>
     * <code>Destination</code>: The Amazon Web Services service that you want to
     * forward query logs to. Valid values include the following:</p> <ul> <li> <p>
     * <code>S3</code> </p> </li> <li> <p> <code>CloudWatchLogs</code> </p> </li> <li>
     * <p> <code>KinesisFirehose</code> </p> </li> </ul> </li> <li> <p>
     * <code>DestinationArn</code>: The ARN of the location that Resolver is sending
     * query logs to. This value can be the ARN for an S3 bucket, a CloudWatch Logs log
     * group, or a Kinesis Data Firehose delivery stream.</p> </li> <li> <p>
     * <code>Id</code>: The ID of the query logging configuration</p> </li> <li> <p>
     * <code>Name</code>: The name of the query logging configuration</p> </li> <li>
     * <p> <code>OwnerId</code>: The Amazon Web Services account ID for the account
     * that created the query logging configuration.</p> </li> <li> <p>
     * <code>ShareStatus</code>: An indication of whether the query logging
     * configuration is shared with other Amazon Web Services accounts, or was shared
     * with the current account by another Amazon Web Services account. Valid values
     * include: <code>NOT_SHARED</code>, <code>SHARED_WITH_ME</code>, or
     * <code>SHARED_BY_ME</code>.</p> </li> <li> <p> <code>Status</code>: The status of
     * the query logging configuration. If you specify <code>Status</code> for
     * <code>Name</code>, specify the applicable status code for <code>Values</code>:
     * <code>CREATING</code>, <code>CREATED</code>, <code>DELETING</code>, or
     * <code>FAILED</code>. For more information, see <a
     * href="https://docs.aws.amazon.com/Route53/latest/APIReference/API_route53resolver_ResolverQueryLogConfig.html#Route53Resolver-Type-route53resolver_ResolverQueryLogConfig-Status">Status</a>.
     * </p> </li> </ul> <p> <b>ListResolverQueryLogConfigAssociations</b> </p> <p>Valid
     * values for <code>Name</code> include the following:</p> <ul> <li> <p>
     * <code>CreationTime</code>: The date and time that the VPC was associated with
     * the query logging configuration, in Unix time format and Coordinated Universal
     * Time (UTC).</p> </li> <li> <p> <code>Error</code>: If the value of
     * <code>Status</code> is <code>FAILED</code>, specify the cause:
     * <code>DESTINATION_NOT_FOUND</code> or <code>ACCESS_DENIED</code>.</p> </li> <li>
     * <p> <code>Id</code>: The ID of the query logging association.</p> </li> <li> <p>
     * <code>ResolverQueryLogConfigId</code>: The ID of the query logging configuration
     * that a VPC is associated with.</p> </li> <li> <p> <code>ResourceId</code>: The
     * ID of the Amazon VPC that is associated with the query logging
     * configuration.</p> </li> <li> <p> <code>Status</code>: The status of the query
     * logging association. If you specify <code>Status</code> for <code>Name</code>,
     * specify the applicable status code for <code>Values</code>:
     * <code>CREATING</code>, <code>CREATED</code>, <code>DELETING</code>, or
     * <code>FAILED</code>. For more information, see <a
     * href="https://docs.aws.amazon.com/Route53/latest/APIReference/API_route53resolver_ResolverQueryLogConfigAssociation.html#Route53Resolver-Type-route53resolver_ResolverQueryLogConfigAssociation-Status">Status</a>.
     * </p> </li> </ul>
     */
    inline Filter& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>When you're using a <code>List</code> operation and you want the operation to
     * return a subset of objects, such as Resolver endpoints or Resolver rules, the
     * value of the parameter that you want to use to filter objects. For example, to
     * list only inbound Resolver endpoints, specify <code>Direction</code> for
     * <code>Name</code> and specify <code>INBOUND</code> for <code>Values</code>.</p>
     */
    inline const Aws::Vector<Aws::String>& GetValues() const{ return m_values; }

    /**
     * <p>When you're using a <code>List</code> operation and you want the operation to
     * return a subset of objects, such as Resolver endpoints or Resolver rules, the
     * value of the parameter that you want to use to filter objects. For example, to
     * list only inbound Resolver endpoints, specify <code>Direction</code> for
     * <code>Name</code> and specify <code>INBOUND</code> for <code>Values</code>.</p>
     */
    inline bool ValuesHasBeenSet() const { return m_valuesHasBeenSet; }

    /**
     * <p>When you're using a <code>List</code> operation and you want the operation to
     * return a subset of objects, such as Resolver endpoints or Resolver rules, the
     * value of the parameter that you want to use to filter objects. For example, to
     * list only inbound Resolver endpoints, specify <code>Direction</code> for
     * <code>Name</code> and specify <code>INBOUND</code> for <code>Values</code>.</p>
     */
    inline void SetValues(const Aws::Vector<Aws::String>& value) { m_valuesHasBeenSet = true; m_values = value; }

    /**
     * <p>When you're using a <code>List</code> operation and you want the operation to
     * return a subset of objects, such as Resolver endpoints or Resolver rules, the
     * value of the parameter that you want to use to filter objects. For example, to
     * list only inbound Resolver endpoints, specify <code>Direction</code> for
     * <code>Name</code> and specify <code>INBOUND</code> for <code>Values</code>.</p>
     */
    inline void SetValues(Aws::Vector<Aws::String>&& value) { m_valuesHasBeenSet = true; m_values = std::move(value); }

    /**
     * <p>When you're using a <code>List</code> operation and you want the operation to
     * return a subset of objects, such as Resolver endpoints or Resolver rules, the
     * value of the parameter that you want to use to filter objects. For example, to
     * list only inbound Resolver endpoints, specify <code>Direction</code> for
     * <code>Name</code> and specify <code>INBOUND</code> for <code>Values</code>.</p>
     */
    inline Filter& WithValues(const Aws::Vector<Aws::String>& value) { SetValues(value); return *this;}

    /**
     * <p>When you're using a <code>List</code> operation and you want the operation to
     * return a subset of objects, such as Resolver endpoints or Resolver rules, the
     * value of the parameter that you want to use to filter objects. For example, to
     * list only inbound Resolver endpoints, specify <code>Direction</code> for
     * <code>Name</code> and specify <code>INBOUND</code> for <code>Values</code>.</p>
     */
    inline Filter& WithValues(Aws::Vector<Aws::String>&& value) { SetValues(std::move(value)); return *this;}

    /**
     * <p>When you're using a <code>List</code> operation and you want the operation to
     * return a subset of objects, such as Resolver endpoints or Resolver rules, the
     * value of the parameter that you want to use to filter objects. For example, to
     * list only inbound Resolver endpoints, specify <code>Direction</code> for
     * <code>Name</code> and specify <code>INBOUND</code> for <code>Values</code>.</p>
     */
    inline Filter& AddValues(const Aws::String& value) { m_valuesHasBeenSet = true; m_values.push_back(value); return *this; }

    /**
     * <p>When you're using a <code>List</code> operation and you want the operation to
     * return a subset of objects, such as Resolver endpoints or Resolver rules, the
     * value of the parameter that you want to use to filter objects. For example, to
     * list only inbound Resolver endpoints, specify <code>Direction</code> for
     * <code>Name</code> and specify <code>INBOUND</code> for <code>Values</code>.</p>
     */
    inline Filter& AddValues(Aws::String&& value) { m_valuesHasBeenSet = true; m_values.push_back(std::move(value)); return *this; }

    /**
     * <p>When you're using a <code>List</code> operation and you want the operation to
     * return a subset of objects, such as Resolver endpoints or Resolver rules, the
     * value of the parameter that you want to use to filter objects. For example, to
     * list only inbound Resolver endpoints, specify <code>Direction</code> for
     * <code>Name</code> and specify <code>INBOUND</code> for <code>Values</code>.</p>
     */
    inline Filter& AddValues(const char* value) { m_valuesHasBeenSet = true; m_values.push_back(value); return *this; }

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::Vector<Aws::String> m_values;
    bool m_valuesHasBeenSet = false;
  };

} // namespace Model
} // namespace Route53Resolver
} // namespace Aws
