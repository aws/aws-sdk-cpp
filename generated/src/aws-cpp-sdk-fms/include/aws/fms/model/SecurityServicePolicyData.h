/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/fms/FMS_EXPORTS.h>
#include <aws/fms/model/SecurityServiceType.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/fms/model/PolicyOption.h>
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
namespace FMS
{
namespace Model
{

  /**
   * <p>Details about the security service that is being used to protect the
   * resources.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/fms-2018-01-01/SecurityServicePolicyData">AWS
   * API Reference</a></p>
   */
  class SecurityServicePolicyData
  {
  public:
    AWS_FMS_API SecurityServicePolicyData();
    AWS_FMS_API SecurityServicePolicyData(Aws::Utils::Json::JsonView jsonValue);
    AWS_FMS_API SecurityServicePolicyData& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_FMS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The service that the policy is using to protect the resources. This specifies
     * the type of policy that is created, either an WAF policy, a Shield Advanced
     * policy, or a security group policy. For security group policies, Firewall
     * Manager supports one security group for each common policy and for each content
     * audit policy. This is an adjustable limit that you can increase by contacting
     * Amazon Web Services Support.</p>
     */
    inline const SecurityServiceType& GetType() const{ return m_type; }

    /**
     * <p>The service that the policy is using to protect the resources. This specifies
     * the type of policy that is created, either an WAF policy, a Shield Advanced
     * policy, or a security group policy. For security group policies, Firewall
     * Manager supports one security group for each common policy and for each content
     * audit policy. This is an adjustable limit that you can increase by contacting
     * Amazon Web Services Support.</p>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p>The service that the policy is using to protect the resources. This specifies
     * the type of policy that is created, either an WAF policy, a Shield Advanced
     * policy, or a security group policy. For security group policies, Firewall
     * Manager supports one security group for each common policy and for each content
     * audit policy. This is an adjustable limit that you can increase by contacting
     * Amazon Web Services Support.</p>
     */
    inline void SetType(const SecurityServiceType& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>The service that the policy is using to protect the resources. This specifies
     * the type of policy that is created, either an WAF policy, a Shield Advanced
     * policy, or a security group policy. For security group policies, Firewall
     * Manager supports one security group for each common policy and for each content
     * audit policy. This is an adjustable limit that you can increase by contacting
     * Amazon Web Services Support.</p>
     */
    inline void SetType(SecurityServiceType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p>The service that the policy is using to protect the resources. This specifies
     * the type of policy that is created, either an WAF policy, a Shield Advanced
     * policy, or a security group policy. For security group policies, Firewall
     * Manager supports one security group for each common policy and for each content
     * audit policy. This is an adjustable limit that you can increase by contacting
     * Amazon Web Services Support.</p>
     */
    inline SecurityServicePolicyData& WithType(const SecurityServiceType& value) { SetType(value); return *this;}

    /**
     * <p>The service that the policy is using to protect the resources. This specifies
     * the type of policy that is created, either an WAF policy, a Shield Advanced
     * policy, or a security group policy. For security group policies, Firewall
     * Manager supports one security group for each common policy and for each content
     * audit policy. This is an adjustable limit that you can increase by contacting
     * Amazon Web Services Support.</p>
     */
    inline SecurityServicePolicyData& WithType(SecurityServiceType&& value) { SetType(std::move(value)); return *this;}


    /**
     * <p>Details about the service that are specific to the service type, in JSON
     * format. </p> <ul> <li> <p>Example: <code>DNS_FIREWALL</code> </p> <p>
     * <code>"{\"type\":\"DNS_FIREWALL\",\"preProcessRuleGroups\":[{\"ruleGroupId\":\"rslvr-frg-1\",\"priority\":10}],\"postProcessRuleGroups\":[{\"ruleGroupId\":\"rslvr-frg-2\",\"priority\":9911}]}"</code>
     * </p>  <p>Valid values for <code>preProcessRuleGroups</code> are between 1
     * and 99. Valid values for <code>postProcessRuleGroups</code> are between 9901 and
     * 10000.</p>  </li> <li> <p>Example: <code>NETWORK_FIREWALL</code> -
     * Centralized deployment model</p> <p>
     * <code>"{\"type\":\"NETWORK_FIREWALL\",\"awsNetworkFirewallConfig\":{\"networkFirewallStatelessRuleGroupReferences\":[{\"resourceARN\":\"arn:aws:network-firewall:us-east-1:123456789011:stateless-rulegroup/test\",\"priority\":1}],\"networkFirewallStatelessDefaultActions\":[\"aws:forward_to_sfe\",\"customActionName\"],\"networkFirewallStatelessFragmentDefaultActions\":[\"aws:forward_to_sfe\",\"customActionName\"],\"networkFirewallStatelessCustomActions\":[{\"actionName\":\"customActionName\",\"actionDefinition\":{\"publishMetricAction\":{\"dimensions\":[{\"value\":\"metricdimensionvalue\"}]}}}],\"networkFirewallStatefulRuleGroupReferences\":[{\"resourceARN\":\"arn:aws:network-firewall:us-east-1:123456789011:stateful-rulegroup/test\"}],\"networkFirewallLoggingConfiguration\":{\"logDestinationConfigs\":[{\"logDestinationType\":\"S3\",\"logType\":\"ALERT\",\"logDestination\":{\"bucketName\":\"s3-bucket-name\"}},{\"logDestinationType\":\"S3\",\"logType\":\"FLOW\",\"logDestination\":{\"bucketName\":\"s3-bucket-name\"}}],\"overrideExistingConfig\":true}},\"firewallDeploymentModel\":{\"centralizedFirewallDeploymentModel\":{\"centralizedFirewallOrchestrationConfig\":{\"inspectionVpcIds\":[{\"resourceId\":\"vpc-1234\",\"accountId\":\"123456789011\"}],\"firewallCreationConfig\":{\"endpointLocation\":{\"availabilityZoneConfigList\":[{\"availabilityZoneId\":null,\"availabilityZoneName\":\"us-east-1a\",\"allowedIPV4CidrList\":[\"10.0.0.0/28\"]}]}},\"allowedIPV4CidrList\":[]}}}}"</code>
     * </p> <p> To use the centralized deployment model, you must set <a
     * href="https://docs.aws.amazon.com/fms/2018-01-01/APIReference/API_PolicyOption.html">PolicyOption</a>
     * to <code>CENTRALIZED</code>. </p> </li> <li> <p>Example:
     * <code>NETWORK_FIREWALL</code> - Distributed deployment model with automatic
     * Availability Zone configuration</p> <p> <code>
     * "{\"type\":\"NETWORK_FIREWALL\",\"networkFirewallStatelessRuleGroupReferences\":[{\"resourceARN\":\"arn:aws:network-firewall:us-east-1:123456789011:stateless-rulegroup/test\",\"priority\":1}],\"networkFirewallStatelessDefaultActions\":[\"aws:forward_to_sfe\",\"customActionName\"],\"networkFirewallStatelessFragmentDefaultActions\":[\"aws:forward_to_sfe\",\"customActionName\"],\"networkFirewallStatelessCustomActions\":[{\"actionName\":\"customActionName\",\"actionDefinition\":{\"publishMetricAction\":{\"dimensions\":[{\"value\":\"metricdimensionvalue\"}]}}}],\"networkFirewallStatefulRuleGroupReferences\":[{\"resourceARN\":\"arn:aws:network-firewall:us-east-1:123456789011:stateful-rulegroup/test\"}],\"networkFirewallOrchestrationConfig\":{\"singleFirewallEndpointPerVPC\":false,\"allowedIPV4CidrList\":[\"10.0.0.0/28\",\"192.168.0.0/28\"],\"routeManagementAction\":\"OFF\"},\"networkFirewallLoggingConfiguration\":{\"logDestinationConfigs\":[{\"logDestinationType\":\"S3\",\"logType\":\"ALERT\",\"logDestination\":{\"bucketName\":\"s3-bucket-name\"}},{\"logDestinationType\":\"S3\",\"logType\":\"FLOW\",\"logDestination\":{\"bucketName\":\"s3-bucket-name\"}}],\"overrideExistingConfig\":true}}"
     * </code> </p> <p> With automatic Availbility Zone configuration, Firewall Manager
     * chooses which Availability Zones to create the endpoints in. To use the
     * distributed deployment model, you must set <a
     * href="https://docs.aws.amazon.com/fms/2018-01-01/APIReference/API_PolicyOption.html">PolicyOption</a>
     * to <code>NULL</code>. </p> </li> <li> <p>Example: <code>NETWORK_FIREWALL</code>
     * - Distributed deployment model with automatic Availability Zone configuration
     * and route management</p> <p> <code>
     * "{\"type\":\"NETWORK_FIREWALL\",\"networkFirewallStatelessRuleGroupReferences\":[{\"resourceARN\":\"arn:aws:network-firewall:us-east-1:123456789011:stateless-rulegroup/test\",\"priority\":1}],\"networkFirewallStatelessDefaultActions\":[\"aws:forward_to_sfe\",\"customActionName\"],\"networkFirewallStatelessFragmentDefaultActions\":[\"aws:forward_to_sfe\",\"customActionName\"],\"networkFirewallStatelessCustomActions\":[{\"actionName\":\"customActionName\",\"actionDefinition\":{\"publishMetricAction\":{\"dimensions\":[{\"value\":\"metricdimensionvalue\"}]}}}],\"networkFirewallStatefulRuleGroupReferences\":[{\"resourceARN\":\"arn:aws:network-firewall:us-east-1:123456789011:stateful-rulegroup/test\"}],\"networkFirewallOrchestrationConfig\":{\"singleFirewallEndpointPerVPC\":false,\"allowedIPV4CidrList\":[\"10.0.0.0/28\",\"192.168.0.0/28\"],\"routeManagementAction\":\"MONITOR\",\"routeManagementTargetTypes\":[\"InternetGateway\"]},\"networkFirewallLoggingConfiguration\":{\"logDestinationConfigs\":[{\"logDestinationType\":\"S3\",\"logType\":\"ALERT\",\"logDestination\":{\"bucketName\":\"s3-bucket-name\"}},{\"logDestinationType\":\"S3\",\"logType\":
     * \"FLOW\",\"logDestination\":{\"bucketName\":\"s3-bucket-name\"}}],\"overrideExistingConfig\":true}}"
     * </code> </p> <p>To use the distributed deployment model, you must set <a
     * href="https://docs.aws.amazon.com/fms/2018-01-01/APIReference/API_PolicyOption.html">PolicyOption</a>
     * to <code>NULL</code>. </p> </li> <li> <p>Example: <code>NETWORK_FIREWALL</code>
     * - Distributed deployment model with custom Availability Zone configuration</p>
     * <p>
     * <code>"{\"type\":\"NETWORK_FIREWALL\",\"networkFirewallStatelessRuleGroupReferences\":[{\"resourceARN\":\"arn:aws:network-firewall:us-east-1:123456789011:stateless-rulegroup/test\",\"priority\":1}],\"networkFirewallStatelessDefaultActions\":[\"aws:forward_to_sfe\",\"customActionName\"],\"networkFirewallStatelessFragmentDefaultActions\":[\"aws:forward_to_sfe\",\"fragmentcustomactionname\"],\"networkFirewallStatelessCustomActions\":[{\"actionName\":\"customActionName\",
     * \"actionDefinition\":{\"publishMetricAction\":{\"dimensions\":[{\"value\":\"metricdimensionvalue\"}]}}},{\"actionName\":\"fragmentcustomactionname\",\"actionDefinition\":{\"publishMetricAction\":{\"dimensions\":[{\"value\":\"fragmentmetricdimensionvalue\"}]}}}],\"networkFirewallStatefulRuleGroupReferences\":[{\"resourceARN\":\"arn:aws:network-firewall:us-east-1:123456789011:stateful-rulegroup/test\"}],\"networkFirewallOrchestrationConfig\":{\"firewallCreationConfig\":{
     * \"endpointLocation\":{\"availabilityZoneConfigList\":[{\"availabilityZoneName\":\"us-east-1a\",\"allowedIPV4CidrList\":[\"10.0.0.0/28\"]},{\"availabilityZoneName\":\"us-east-1b\",\"allowedIPV4CidrList\":[
     * \"10.0.0.0/28\"]}]}
     * },\"singleFirewallEndpointPerVPC\":false,\"allowedIPV4CidrList\":null,\"routeManagementAction\":\"OFF\",\"networkFirewallLoggingConfiguration\":{\"logDestinationConfigs\":[{\"logDestinationType\":\"S3\",\"logType\":\"ALERT\",\"logDestination\":{\"bucketName\":\"s3-bucket-name\"}},{\"logDestinationType\":\"S3\",\"logType\":\"FLOW\",\"logDestination\":{\"bucketName\":\"s3-bucket-name\"}}],\"overrideExistingConfig\":boolean}}"
     * </code> </p> <p> With custom Availability Zone configuration, you define which
     * specific Availability Zones to create endpoints in by configuring
     * <code>firewallCreationConfig</code>. To configure the Availability Zones in
     * <code>firewallCreationConfig</code>, specify either the
     * <code>availabilityZoneName</code> or <code>availabilityZoneId</code> parameter,
     * not both parameters. </p> <p>To use the distributed deployment model, you must
     * set <a
     * href="https://docs.aws.amazon.com/fms/2018-01-01/APIReference/API_PolicyOption.html">PolicyOption</a>
     * to <code>NULL</code>. </p> </li> <li> <p>Example: <code>NETWORK_FIREWALL</code>
     * - Distributed deployment model with custom Availability Zone configuration and
     * route management</p> <p>
     * <code>"{\"type\":\"NETWORK_FIREWALL\",\"networkFirewallStatelessRuleGroupReferences\":[{\"resourceARN\":\"arn:aws:network-firewall:us-east-1:123456789011:stateless-rulegroup/test\",\"priority\":1}],\"networkFirewallStatelessDefaultActions\":[\"aws:forward_to_sfe\",\"customActionName\"],\"networkFirewallStatelessFragmentDefaultActions\":[\"aws:forward_to_sfe\",\"fragmentcustomactionname\"],\"networkFirewallStatelessCustomActions\":[{\"actionName\":\"customActionName\",\"actionDefinition\":{\"publishMetricAction\":{\"dimensions\":[{\"value\":\"metricdimensionvalue\"}]}}},{\"actionName\":\"fragmentcustomactionname\",\"actionDefinition\":{\"publishMetricAction\":{\"dimensions\":[{\"value\":\"fragmentmetricdimensionvalue\"}]}}}],\"networkFirewallStatefulRuleGroupReferences\":[{\"resourceARN\":\"arn:aws:network-firewall:us-east-1:123456789011:stateful-rulegroup/test\"}],\"networkFirewallOrchestrationConfig\":{\"firewallCreationConfig\":{\"endpointLocation\":{\"availabilityZoneConfigList\":[{\"availabilityZoneName\":\"us-east-1a\",\"allowedIPV4CidrList\":[\"10.0.0.0/28\"]},{\"availabilityZoneName\":\"us-east-1b\",\"allowedIPV4CidrList\":[\"10.0.0.0/28\"]}]}},\"singleFirewallEndpointPerVPC\":false,\"allowedIPV4CidrList\":null,\"routeManagementAction\":\"MONITOR\",\"routeManagementTargetTypes\":[\"InternetGateway\"],\"routeManagementConfig\":{\"allowCrossAZTrafficIfNoEndpoint\":true}},\"networkFirewallLoggingConfiguration\":{\"logDestinationConfigs\":[{\"logDestinationType\":\"S3\",\"logType\":\"ALERT\",\"logDestination\":{\"bucketName\":\"s3-bucket-name\"}},{\"logDestinationType\":\"S3\",\"logType\":\"FLOW\",\"logDestination\":{\"bucketName\":\"s3-bucket-name\"}}],\"overrideExistingConfig\":boolean}}"
     * </code> </p> <p>To use the distributed deployment model, you must set <a
     * href="https://docs.aws.amazon.com/fms/2018-01-01/APIReference/API_PolicyOption.html">PolicyOption</a>
     * to <code>NULL</code>. </p> </li> <li> <p>Example:
     * <code>THIRD_PARTY_FIREWALL</code> </p> <p> <code>"{
     * "type":"THIRD_PARTY_FIREWALL",
     * "thirdPartyFirewall":"PALO_ALTO_NETWORKS_CLOUD_NGFW",
     * "thirdPartyFirewallConfig":{ "thirdPartyFirewallPolicyList":["global-1"] },
     * "firewallDeploymentModel":{ "distributedFirewallDeploymentModel":{
     * "distributedFirewallOrchestrationConfig":{ "firewallCreationConfig":{
     * "endpointLocation":{ "availabilityZoneConfigList":[ {
     * "availabilityZoneName":"${AvailabilityZone}" } ] } }, "allowedIPV4CidrList":[ ]
     * } } } }"</code> </p> </li> <li> <p>Example: <code>SECURITY_GROUPS_COMMON</code>
     * </p> <p>
     * <code>"{\"type\":\"SECURITY_GROUPS_COMMON\",\"revertManualSecurityGroupChanges\":false,\"exclusiveResourceSecurityGroupManagement\":false,
     * \"applyToAllEC2InstanceENIs\":false,\"securityGroups\":[{\"id\":\"
     * sg-000e55995d61a06bd\"}]}"</code> </p> </li> <li> <p>Example:
     * <code>SECURITY_GROUPS_COMMON</code> - Security group tag distribution </p> <p>
     * <code>""{\"type\":\"SECURITY_GROUPS_COMMON\",\"securityGroups\":[{\"id\":\"sg-000e55995d61a06bd\"}],\"revertManualSecurityGroupChanges\":true,\"exclusiveResourceSecurityGroupManagement\":false,\"applyToAllEC2InstanceENIs\":false,\"includeSharedVPC\":false,\"enableTagDistribution\":true}""</code>
     * </p> <p> Firewall Manager automatically distributes tags from the primary group
     * to the security groups created by this policy. To use security group tag
     * distribution, you must also set <code>revertManualSecurityGroupChanges</code> to
     * <code>true</code>, otherwise Firewall Manager won't be able to create the
     * policy. When you enable <code>revertManualSecurityGroupChanges</code>, Firewall
     * Manager identifies and reports when the security groups created by this policy
     * become non-compliant. </p> <p> Firewall Manager won't distrubute system tags
     * added by Amazon Web Services services into the replica security groups. System
     * tags begin with the <code>aws:</code> prefix. </p> </li> <li> <p>Example: Shared
     * VPCs. Apply the preceding policy to resources in shared VPCs as well as to those
     * in VPCs that the account owns </p> <p>
     * <code>"{\"type\":\"SECURITY_GROUPS_COMMON\",\"revertManualSecurityGroupChanges\":false,\"exclusiveResourceSecurityGroupManagement\":false,
     * \"applyToAllEC2InstanceENIs\":false,\"includeSharedVPC\":true,\"securityGroups\":[{\"id\":\"
     * sg-000e55995d61a06bd\"}]}"</code> </p> </li> <li> <p>Example:
     * <code>SECURITY_GROUPS_CONTENT_AUDIT</code> </p> <p>
     * <code>"{\"type\":\"SECURITY_GROUPS_CONTENT_AUDIT\",\"securityGroups\":[{\"id\":\"sg-000e55995d61a06bd\"}],\"securityGroupAction\":{\"type\":\"ALLOW\"}}"</code>
     * </p> <p>The security group action for content audit can be <code>ALLOW</code> or
     * <code>DENY</code>. For <code>ALLOW</code>, all in-scope security group rules
     * must be within the allowed range of the policy's security group rules. For
     * <code>DENY</code>, all in-scope security group rules must not contain a value or
     * a range that matches a rule value or range in the policy security group.</p>
     * </li> <li> <p>Example: <code>SECURITY_GROUPS_USAGE_AUDIT</code> </p> <p>
     * <code>"{\"type\":\"SECURITY_GROUPS_USAGE_AUDIT\",\"deleteUnusedSecurityGroups\":true,\"coalesceRedundantSecurityGroups\":true}"</code>
     * </p> </li> <li> <p>Specification for <code>SHIELD_ADVANCED</code> for Amazon
     * CloudFront distributions </p> <p>
     * <code>"{\"type\":\"SHIELD_ADVANCED\",\"automaticResponseConfiguration\":
     * {\"automaticResponseStatus\":\"ENABLED|IGNORED|DISABLED\",
     * \"automaticResponseAction\":\"BLOCK|COUNT\"},
     * \"overrideCustomerWebaclClassic\":true|false}"</code> </p> <p>For example:
     * <code>"{\"type\":\"SHIELD_ADVANCED\",\"automaticResponseConfiguration\":
     * {\"automaticResponseStatus\":\"ENABLED\",
     * \"automaticResponseAction\":\"COUNT\"}}"</code> </p> <p>The default value for
     * <code>automaticResponseStatus</code> is <code>IGNORED</code>. The value for
     * <code>automaticResponseAction</code> is only required when
     * <code>automaticResponseStatus</code> is set to <code>ENABLED</code>. The default
     * value for <code>overrideCustomerWebaclClassic</code> is <code>false</code>.</p>
     * <p>For other resource types that you can protect with a Shield Advanced policy,
     * this <code>ManagedServiceData</code> configuration is an empty string.</p> </li>
     * <li> <p>Example: <code>WAFV2</code> </p> <p>
     * <code>"{\"type\":\"WAFV2\",\"preProcessRuleGroups\":[{\"ruleGroupArn\":null,\"overrideAction\":{\"type\":\"NONE\"},\"managedRuleGroupIdentifier\":{\"version\":null,\"vendorName\":\"AWS\",\"managedRuleGroupName\":\"AWSManagedRulesAmazonIpReputationList\"},\"ruleGroupType\":\"ManagedRuleGroup\",\"excludeRules\":[{\"name\":\"NoUserAgent_HEADER\"}]}],\"postProcessRuleGroups\":[],\"defaultAction\":{\"type\":\"ALLOW\"},\"overrideCustomerWebACLAssociation\":false,\"loggingConfiguration\":{\"logDestinationConfigs\":[\"arn:aws:firehose:us-west-2:12345678912:deliverystream/aws-waf-logs-fms-admin-destination\"],\"redactedFields\":[{\"redactedFieldType\":\"SingleHeader\",\"redactedFieldValue\":\"Cookies\"},{\"redactedFieldType\":\"Method\"}]}}"</code>
     * </p> <p>In the <code>loggingConfiguration</code>, you can specify one
     * <code>logDestinationConfigs</code>, you can optionally provide up to 20
     * <code>redactedFields</code>, and the <code>RedactedFieldType</code> must be one
     * of <code>URI</code>, <code>QUERY_STRING</code>, <code>HEADER</code>, or
     * <code>METHOD</code>.</p> </li> <li> <p>Example: <code>WAFV2</code> - Firewall
     * Manager support for WAF managed rule group versioning </p> <p>
     * <code>"{\"type\":\"WAFV2\",\"preProcessRuleGroups\":[{\"ruleGroupArn\":null,\"overrideAction\":{\"type\":\"NONE\"},\"managedRuleGroupIdentifier\":{\"versionEnabled\":true,\"version\":\"Version_2.0\",\"vendorName\":\"AWS\",\"managedRuleGroupName\":\"AWSManagedRulesCommonRuleSet\"},\"ruleGroupType\":\"ManagedRuleGroup\",\"excludeRules\":[{\"name\":\"NoUserAgent_HEADER\"}]}],\"postProcessRuleGroups\":[],\"defaultAction\":{\"type\":\"ALLOW\"},\"overrideCustomerWebACLAssociation\":false,\"loggingConfiguration\":{\"logDestinationConfigs\":[\"arn:aws:firehose:us-west-2:12345678912:deliverystream/aws-waf-logs-fms-admin-destination\"],\"redactedFields\":[{\"redactedFieldType\":\"SingleHeader\",\"redactedFieldValue\":\"Cookies\"},{\"redactedFieldType\":\"Method\"}]}}"</code>
     * </p> <p> To use a specific version of a WAF managed rule group in your Firewall
     * Manager policy, you must set <code>versionEnabled</code> to <code>true</code>,
     * and set <code>version</code> to the version you'd like to use. If you don't set
     * <code>versionEnabled</code> to <code>true</code>, or if you omit
     * <code>versionEnabled</code>, then Firewall Manager uses the default version of
     * the WAF managed rule group. </p> </li> <li> <p>Example: <code>WAF Classic</code>
     * </p> <p> <code>"{\"type\": \"WAF\", \"ruleGroups\":
     * [{\"id\":\"12345678-1bcd-9012-efga-0987654321ab\", \"overrideAction\" :
     * {\"type\": \"COUNT\"}}], \"defaultAction\": {\"type\": \"BLOCK\"}}"</code> </p>
     * </li> </ul>
     */
    inline const Aws::String& GetManagedServiceData() const{ return m_managedServiceData; }

    /**
     * <p>Details about the service that are specific to the service type, in JSON
     * format. </p> <ul> <li> <p>Example: <code>DNS_FIREWALL</code> </p> <p>
     * <code>"{\"type\":\"DNS_FIREWALL\",\"preProcessRuleGroups\":[{\"ruleGroupId\":\"rslvr-frg-1\",\"priority\":10}],\"postProcessRuleGroups\":[{\"ruleGroupId\":\"rslvr-frg-2\",\"priority\":9911}]}"</code>
     * </p>  <p>Valid values for <code>preProcessRuleGroups</code> are between 1
     * and 99. Valid values for <code>postProcessRuleGroups</code> are between 9901 and
     * 10000.</p>  </li> <li> <p>Example: <code>NETWORK_FIREWALL</code> -
     * Centralized deployment model</p> <p>
     * <code>"{\"type\":\"NETWORK_FIREWALL\",\"awsNetworkFirewallConfig\":{\"networkFirewallStatelessRuleGroupReferences\":[{\"resourceARN\":\"arn:aws:network-firewall:us-east-1:123456789011:stateless-rulegroup/test\",\"priority\":1}],\"networkFirewallStatelessDefaultActions\":[\"aws:forward_to_sfe\",\"customActionName\"],\"networkFirewallStatelessFragmentDefaultActions\":[\"aws:forward_to_sfe\",\"customActionName\"],\"networkFirewallStatelessCustomActions\":[{\"actionName\":\"customActionName\",\"actionDefinition\":{\"publishMetricAction\":{\"dimensions\":[{\"value\":\"metricdimensionvalue\"}]}}}],\"networkFirewallStatefulRuleGroupReferences\":[{\"resourceARN\":\"arn:aws:network-firewall:us-east-1:123456789011:stateful-rulegroup/test\"}],\"networkFirewallLoggingConfiguration\":{\"logDestinationConfigs\":[{\"logDestinationType\":\"S3\",\"logType\":\"ALERT\",\"logDestination\":{\"bucketName\":\"s3-bucket-name\"}},{\"logDestinationType\":\"S3\",\"logType\":\"FLOW\",\"logDestination\":{\"bucketName\":\"s3-bucket-name\"}}],\"overrideExistingConfig\":true}},\"firewallDeploymentModel\":{\"centralizedFirewallDeploymentModel\":{\"centralizedFirewallOrchestrationConfig\":{\"inspectionVpcIds\":[{\"resourceId\":\"vpc-1234\",\"accountId\":\"123456789011\"}],\"firewallCreationConfig\":{\"endpointLocation\":{\"availabilityZoneConfigList\":[{\"availabilityZoneId\":null,\"availabilityZoneName\":\"us-east-1a\",\"allowedIPV4CidrList\":[\"10.0.0.0/28\"]}]}},\"allowedIPV4CidrList\":[]}}}}"</code>
     * </p> <p> To use the centralized deployment model, you must set <a
     * href="https://docs.aws.amazon.com/fms/2018-01-01/APIReference/API_PolicyOption.html">PolicyOption</a>
     * to <code>CENTRALIZED</code>. </p> </li> <li> <p>Example:
     * <code>NETWORK_FIREWALL</code> - Distributed deployment model with automatic
     * Availability Zone configuration</p> <p> <code>
     * "{\"type\":\"NETWORK_FIREWALL\",\"networkFirewallStatelessRuleGroupReferences\":[{\"resourceARN\":\"arn:aws:network-firewall:us-east-1:123456789011:stateless-rulegroup/test\",\"priority\":1}],\"networkFirewallStatelessDefaultActions\":[\"aws:forward_to_sfe\",\"customActionName\"],\"networkFirewallStatelessFragmentDefaultActions\":[\"aws:forward_to_sfe\",\"customActionName\"],\"networkFirewallStatelessCustomActions\":[{\"actionName\":\"customActionName\",\"actionDefinition\":{\"publishMetricAction\":{\"dimensions\":[{\"value\":\"metricdimensionvalue\"}]}}}],\"networkFirewallStatefulRuleGroupReferences\":[{\"resourceARN\":\"arn:aws:network-firewall:us-east-1:123456789011:stateful-rulegroup/test\"}],\"networkFirewallOrchestrationConfig\":{\"singleFirewallEndpointPerVPC\":false,\"allowedIPV4CidrList\":[\"10.0.0.0/28\",\"192.168.0.0/28\"],\"routeManagementAction\":\"OFF\"},\"networkFirewallLoggingConfiguration\":{\"logDestinationConfigs\":[{\"logDestinationType\":\"S3\",\"logType\":\"ALERT\",\"logDestination\":{\"bucketName\":\"s3-bucket-name\"}},{\"logDestinationType\":\"S3\",\"logType\":\"FLOW\",\"logDestination\":{\"bucketName\":\"s3-bucket-name\"}}],\"overrideExistingConfig\":true}}"
     * </code> </p> <p> With automatic Availbility Zone configuration, Firewall Manager
     * chooses which Availability Zones to create the endpoints in. To use the
     * distributed deployment model, you must set <a
     * href="https://docs.aws.amazon.com/fms/2018-01-01/APIReference/API_PolicyOption.html">PolicyOption</a>
     * to <code>NULL</code>. </p> </li> <li> <p>Example: <code>NETWORK_FIREWALL</code>
     * - Distributed deployment model with automatic Availability Zone configuration
     * and route management</p> <p> <code>
     * "{\"type\":\"NETWORK_FIREWALL\",\"networkFirewallStatelessRuleGroupReferences\":[{\"resourceARN\":\"arn:aws:network-firewall:us-east-1:123456789011:stateless-rulegroup/test\",\"priority\":1}],\"networkFirewallStatelessDefaultActions\":[\"aws:forward_to_sfe\",\"customActionName\"],\"networkFirewallStatelessFragmentDefaultActions\":[\"aws:forward_to_sfe\",\"customActionName\"],\"networkFirewallStatelessCustomActions\":[{\"actionName\":\"customActionName\",\"actionDefinition\":{\"publishMetricAction\":{\"dimensions\":[{\"value\":\"metricdimensionvalue\"}]}}}],\"networkFirewallStatefulRuleGroupReferences\":[{\"resourceARN\":\"arn:aws:network-firewall:us-east-1:123456789011:stateful-rulegroup/test\"}],\"networkFirewallOrchestrationConfig\":{\"singleFirewallEndpointPerVPC\":false,\"allowedIPV4CidrList\":[\"10.0.0.0/28\",\"192.168.0.0/28\"],\"routeManagementAction\":\"MONITOR\",\"routeManagementTargetTypes\":[\"InternetGateway\"]},\"networkFirewallLoggingConfiguration\":{\"logDestinationConfigs\":[{\"logDestinationType\":\"S3\",\"logType\":\"ALERT\",\"logDestination\":{\"bucketName\":\"s3-bucket-name\"}},{\"logDestinationType\":\"S3\",\"logType\":
     * \"FLOW\",\"logDestination\":{\"bucketName\":\"s3-bucket-name\"}}],\"overrideExistingConfig\":true}}"
     * </code> </p> <p>To use the distributed deployment model, you must set <a
     * href="https://docs.aws.amazon.com/fms/2018-01-01/APIReference/API_PolicyOption.html">PolicyOption</a>
     * to <code>NULL</code>. </p> </li> <li> <p>Example: <code>NETWORK_FIREWALL</code>
     * - Distributed deployment model with custom Availability Zone configuration</p>
     * <p>
     * <code>"{\"type\":\"NETWORK_FIREWALL\",\"networkFirewallStatelessRuleGroupReferences\":[{\"resourceARN\":\"arn:aws:network-firewall:us-east-1:123456789011:stateless-rulegroup/test\",\"priority\":1}],\"networkFirewallStatelessDefaultActions\":[\"aws:forward_to_sfe\",\"customActionName\"],\"networkFirewallStatelessFragmentDefaultActions\":[\"aws:forward_to_sfe\",\"fragmentcustomactionname\"],\"networkFirewallStatelessCustomActions\":[{\"actionName\":\"customActionName\",
     * \"actionDefinition\":{\"publishMetricAction\":{\"dimensions\":[{\"value\":\"metricdimensionvalue\"}]}}},{\"actionName\":\"fragmentcustomactionname\",\"actionDefinition\":{\"publishMetricAction\":{\"dimensions\":[{\"value\":\"fragmentmetricdimensionvalue\"}]}}}],\"networkFirewallStatefulRuleGroupReferences\":[{\"resourceARN\":\"arn:aws:network-firewall:us-east-1:123456789011:stateful-rulegroup/test\"}],\"networkFirewallOrchestrationConfig\":{\"firewallCreationConfig\":{
     * \"endpointLocation\":{\"availabilityZoneConfigList\":[{\"availabilityZoneName\":\"us-east-1a\",\"allowedIPV4CidrList\":[\"10.0.0.0/28\"]},{\"availabilityZoneName\":\"us-east-1b\",\"allowedIPV4CidrList\":[
     * \"10.0.0.0/28\"]}]}
     * },\"singleFirewallEndpointPerVPC\":false,\"allowedIPV4CidrList\":null,\"routeManagementAction\":\"OFF\",\"networkFirewallLoggingConfiguration\":{\"logDestinationConfigs\":[{\"logDestinationType\":\"S3\",\"logType\":\"ALERT\",\"logDestination\":{\"bucketName\":\"s3-bucket-name\"}},{\"logDestinationType\":\"S3\",\"logType\":\"FLOW\",\"logDestination\":{\"bucketName\":\"s3-bucket-name\"}}],\"overrideExistingConfig\":boolean}}"
     * </code> </p> <p> With custom Availability Zone configuration, you define which
     * specific Availability Zones to create endpoints in by configuring
     * <code>firewallCreationConfig</code>. To configure the Availability Zones in
     * <code>firewallCreationConfig</code>, specify either the
     * <code>availabilityZoneName</code> or <code>availabilityZoneId</code> parameter,
     * not both parameters. </p> <p>To use the distributed deployment model, you must
     * set <a
     * href="https://docs.aws.amazon.com/fms/2018-01-01/APIReference/API_PolicyOption.html">PolicyOption</a>
     * to <code>NULL</code>. </p> </li> <li> <p>Example: <code>NETWORK_FIREWALL</code>
     * - Distributed deployment model with custom Availability Zone configuration and
     * route management</p> <p>
     * <code>"{\"type\":\"NETWORK_FIREWALL\",\"networkFirewallStatelessRuleGroupReferences\":[{\"resourceARN\":\"arn:aws:network-firewall:us-east-1:123456789011:stateless-rulegroup/test\",\"priority\":1}],\"networkFirewallStatelessDefaultActions\":[\"aws:forward_to_sfe\",\"customActionName\"],\"networkFirewallStatelessFragmentDefaultActions\":[\"aws:forward_to_sfe\",\"fragmentcustomactionname\"],\"networkFirewallStatelessCustomActions\":[{\"actionName\":\"customActionName\",\"actionDefinition\":{\"publishMetricAction\":{\"dimensions\":[{\"value\":\"metricdimensionvalue\"}]}}},{\"actionName\":\"fragmentcustomactionname\",\"actionDefinition\":{\"publishMetricAction\":{\"dimensions\":[{\"value\":\"fragmentmetricdimensionvalue\"}]}}}],\"networkFirewallStatefulRuleGroupReferences\":[{\"resourceARN\":\"arn:aws:network-firewall:us-east-1:123456789011:stateful-rulegroup/test\"}],\"networkFirewallOrchestrationConfig\":{\"firewallCreationConfig\":{\"endpointLocation\":{\"availabilityZoneConfigList\":[{\"availabilityZoneName\":\"us-east-1a\",\"allowedIPV4CidrList\":[\"10.0.0.0/28\"]},{\"availabilityZoneName\":\"us-east-1b\",\"allowedIPV4CidrList\":[\"10.0.0.0/28\"]}]}},\"singleFirewallEndpointPerVPC\":false,\"allowedIPV4CidrList\":null,\"routeManagementAction\":\"MONITOR\",\"routeManagementTargetTypes\":[\"InternetGateway\"],\"routeManagementConfig\":{\"allowCrossAZTrafficIfNoEndpoint\":true}},\"networkFirewallLoggingConfiguration\":{\"logDestinationConfigs\":[{\"logDestinationType\":\"S3\",\"logType\":\"ALERT\",\"logDestination\":{\"bucketName\":\"s3-bucket-name\"}},{\"logDestinationType\":\"S3\",\"logType\":\"FLOW\",\"logDestination\":{\"bucketName\":\"s3-bucket-name\"}}],\"overrideExistingConfig\":boolean}}"
     * </code> </p> <p>To use the distributed deployment model, you must set <a
     * href="https://docs.aws.amazon.com/fms/2018-01-01/APIReference/API_PolicyOption.html">PolicyOption</a>
     * to <code>NULL</code>. </p> </li> <li> <p>Example:
     * <code>THIRD_PARTY_FIREWALL</code> </p> <p> <code>"{
     * "type":"THIRD_PARTY_FIREWALL",
     * "thirdPartyFirewall":"PALO_ALTO_NETWORKS_CLOUD_NGFW",
     * "thirdPartyFirewallConfig":{ "thirdPartyFirewallPolicyList":["global-1"] },
     * "firewallDeploymentModel":{ "distributedFirewallDeploymentModel":{
     * "distributedFirewallOrchestrationConfig":{ "firewallCreationConfig":{
     * "endpointLocation":{ "availabilityZoneConfigList":[ {
     * "availabilityZoneName":"${AvailabilityZone}" } ] } }, "allowedIPV4CidrList":[ ]
     * } } } }"</code> </p> </li> <li> <p>Example: <code>SECURITY_GROUPS_COMMON</code>
     * </p> <p>
     * <code>"{\"type\":\"SECURITY_GROUPS_COMMON\",\"revertManualSecurityGroupChanges\":false,\"exclusiveResourceSecurityGroupManagement\":false,
     * \"applyToAllEC2InstanceENIs\":false,\"securityGroups\":[{\"id\":\"
     * sg-000e55995d61a06bd\"}]}"</code> </p> </li> <li> <p>Example:
     * <code>SECURITY_GROUPS_COMMON</code> - Security group tag distribution </p> <p>
     * <code>""{\"type\":\"SECURITY_GROUPS_COMMON\",\"securityGroups\":[{\"id\":\"sg-000e55995d61a06bd\"}],\"revertManualSecurityGroupChanges\":true,\"exclusiveResourceSecurityGroupManagement\":false,\"applyToAllEC2InstanceENIs\":false,\"includeSharedVPC\":false,\"enableTagDistribution\":true}""</code>
     * </p> <p> Firewall Manager automatically distributes tags from the primary group
     * to the security groups created by this policy. To use security group tag
     * distribution, you must also set <code>revertManualSecurityGroupChanges</code> to
     * <code>true</code>, otherwise Firewall Manager won't be able to create the
     * policy. When you enable <code>revertManualSecurityGroupChanges</code>, Firewall
     * Manager identifies and reports when the security groups created by this policy
     * become non-compliant. </p> <p> Firewall Manager won't distrubute system tags
     * added by Amazon Web Services services into the replica security groups. System
     * tags begin with the <code>aws:</code> prefix. </p> </li> <li> <p>Example: Shared
     * VPCs. Apply the preceding policy to resources in shared VPCs as well as to those
     * in VPCs that the account owns </p> <p>
     * <code>"{\"type\":\"SECURITY_GROUPS_COMMON\",\"revertManualSecurityGroupChanges\":false,\"exclusiveResourceSecurityGroupManagement\":false,
     * \"applyToAllEC2InstanceENIs\":false,\"includeSharedVPC\":true,\"securityGroups\":[{\"id\":\"
     * sg-000e55995d61a06bd\"}]}"</code> </p> </li> <li> <p>Example:
     * <code>SECURITY_GROUPS_CONTENT_AUDIT</code> </p> <p>
     * <code>"{\"type\":\"SECURITY_GROUPS_CONTENT_AUDIT\",\"securityGroups\":[{\"id\":\"sg-000e55995d61a06bd\"}],\"securityGroupAction\":{\"type\":\"ALLOW\"}}"</code>
     * </p> <p>The security group action for content audit can be <code>ALLOW</code> or
     * <code>DENY</code>. For <code>ALLOW</code>, all in-scope security group rules
     * must be within the allowed range of the policy's security group rules. For
     * <code>DENY</code>, all in-scope security group rules must not contain a value or
     * a range that matches a rule value or range in the policy security group.</p>
     * </li> <li> <p>Example: <code>SECURITY_GROUPS_USAGE_AUDIT</code> </p> <p>
     * <code>"{\"type\":\"SECURITY_GROUPS_USAGE_AUDIT\",\"deleteUnusedSecurityGroups\":true,\"coalesceRedundantSecurityGroups\":true}"</code>
     * </p> </li> <li> <p>Specification for <code>SHIELD_ADVANCED</code> for Amazon
     * CloudFront distributions </p> <p>
     * <code>"{\"type\":\"SHIELD_ADVANCED\",\"automaticResponseConfiguration\":
     * {\"automaticResponseStatus\":\"ENABLED|IGNORED|DISABLED\",
     * \"automaticResponseAction\":\"BLOCK|COUNT\"},
     * \"overrideCustomerWebaclClassic\":true|false}"</code> </p> <p>For example:
     * <code>"{\"type\":\"SHIELD_ADVANCED\",\"automaticResponseConfiguration\":
     * {\"automaticResponseStatus\":\"ENABLED\",
     * \"automaticResponseAction\":\"COUNT\"}}"</code> </p> <p>The default value for
     * <code>automaticResponseStatus</code> is <code>IGNORED</code>. The value for
     * <code>automaticResponseAction</code> is only required when
     * <code>automaticResponseStatus</code> is set to <code>ENABLED</code>. The default
     * value for <code>overrideCustomerWebaclClassic</code> is <code>false</code>.</p>
     * <p>For other resource types that you can protect with a Shield Advanced policy,
     * this <code>ManagedServiceData</code> configuration is an empty string.</p> </li>
     * <li> <p>Example: <code>WAFV2</code> </p> <p>
     * <code>"{\"type\":\"WAFV2\",\"preProcessRuleGroups\":[{\"ruleGroupArn\":null,\"overrideAction\":{\"type\":\"NONE\"},\"managedRuleGroupIdentifier\":{\"version\":null,\"vendorName\":\"AWS\",\"managedRuleGroupName\":\"AWSManagedRulesAmazonIpReputationList\"},\"ruleGroupType\":\"ManagedRuleGroup\",\"excludeRules\":[{\"name\":\"NoUserAgent_HEADER\"}]}],\"postProcessRuleGroups\":[],\"defaultAction\":{\"type\":\"ALLOW\"},\"overrideCustomerWebACLAssociation\":false,\"loggingConfiguration\":{\"logDestinationConfigs\":[\"arn:aws:firehose:us-west-2:12345678912:deliverystream/aws-waf-logs-fms-admin-destination\"],\"redactedFields\":[{\"redactedFieldType\":\"SingleHeader\",\"redactedFieldValue\":\"Cookies\"},{\"redactedFieldType\":\"Method\"}]}}"</code>
     * </p> <p>In the <code>loggingConfiguration</code>, you can specify one
     * <code>logDestinationConfigs</code>, you can optionally provide up to 20
     * <code>redactedFields</code>, and the <code>RedactedFieldType</code> must be one
     * of <code>URI</code>, <code>QUERY_STRING</code>, <code>HEADER</code>, or
     * <code>METHOD</code>.</p> </li> <li> <p>Example: <code>WAFV2</code> - Firewall
     * Manager support for WAF managed rule group versioning </p> <p>
     * <code>"{\"type\":\"WAFV2\",\"preProcessRuleGroups\":[{\"ruleGroupArn\":null,\"overrideAction\":{\"type\":\"NONE\"},\"managedRuleGroupIdentifier\":{\"versionEnabled\":true,\"version\":\"Version_2.0\",\"vendorName\":\"AWS\",\"managedRuleGroupName\":\"AWSManagedRulesCommonRuleSet\"},\"ruleGroupType\":\"ManagedRuleGroup\",\"excludeRules\":[{\"name\":\"NoUserAgent_HEADER\"}]}],\"postProcessRuleGroups\":[],\"defaultAction\":{\"type\":\"ALLOW\"},\"overrideCustomerWebACLAssociation\":false,\"loggingConfiguration\":{\"logDestinationConfigs\":[\"arn:aws:firehose:us-west-2:12345678912:deliverystream/aws-waf-logs-fms-admin-destination\"],\"redactedFields\":[{\"redactedFieldType\":\"SingleHeader\",\"redactedFieldValue\":\"Cookies\"},{\"redactedFieldType\":\"Method\"}]}}"</code>
     * </p> <p> To use a specific version of a WAF managed rule group in your Firewall
     * Manager policy, you must set <code>versionEnabled</code> to <code>true</code>,
     * and set <code>version</code> to the version you'd like to use. If you don't set
     * <code>versionEnabled</code> to <code>true</code>, or if you omit
     * <code>versionEnabled</code>, then Firewall Manager uses the default version of
     * the WAF managed rule group. </p> </li> <li> <p>Example: <code>WAF Classic</code>
     * </p> <p> <code>"{\"type\": \"WAF\", \"ruleGroups\":
     * [{\"id\":\"12345678-1bcd-9012-efga-0987654321ab\", \"overrideAction\" :
     * {\"type\": \"COUNT\"}}], \"defaultAction\": {\"type\": \"BLOCK\"}}"</code> </p>
     * </li> </ul>
     */
    inline bool ManagedServiceDataHasBeenSet() const { return m_managedServiceDataHasBeenSet; }

    /**
     * <p>Details about the service that are specific to the service type, in JSON
     * format. </p> <ul> <li> <p>Example: <code>DNS_FIREWALL</code> </p> <p>
     * <code>"{\"type\":\"DNS_FIREWALL\",\"preProcessRuleGroups\":[{\"ruleGroupId\":\"rslvr-frg-1\",\"priority\":10}],\"postProcessRuleGroups\":[{\"ruleGroupId\":\"rslvr-frg-2\",\"priority\":9911}]}"</code>
     * </p>  <p>Valid values for <code>preProcessRuleGroups</code> are between 1
     * and 99. Valid values for <code>postProcessRuleGroups</code> are between 9901 and
     * 10000.</p>  </li> <li> <p>Example: <code>NETWORK_FIREWALL</code> -
     * Centralized deployment model</p> <p>
     * <code>"{\"type\":\"NETWORK_FIREWALL\",\"awsNetworkFirewallConfig\":{\"networkFirewallStatelessRuleGroupReferences\":[{\"resourceARN\":\"arn:aws:network-firewall:us-east-1:123456789011:stateless-rulegroup/test\",\"priority\":1}],\"networkFirewallStatelessDefaultActions\":[\"aws:forward_to_sfe\",\"customActionName\"],\"networkFirewallStatelessFragmentDefaultActions\":[\"aws:forward_to_sfe\",\"customActionName\"],\"networkFirewallStatelessCustomActions\":[{\"actionName\":\"customActionName\",\"actionDefinition\":{\"publishMetricAction\":{\"dimensions\":[{\"value\":\"metricdimensionvalue\"}]}}}],\"networkFirewallStatefulRuleGroupReferences\":[{\"resourceARN\":\"arn:aws:network-firewall:us-east-1:123456789011:stateful-rulegroup/test\"}],\"networkFirewallLoggingConfiguration\":{\"logDestinationConfigs\":[{\"logDestinationType\":\"S3\",\"logType\":\"ALERT\",\"logDestination\":{\"bucketName\":\"s3-bucket-name\"}},{\"logDestinationType\":\"S3\",\"logType\":\"FLOW\",\"logDestination\":{\"bucketName\":\"s3-bucket-name\"}}],\"overrideExistingConfig\":true}},\"firewallDeploymentModel\":{\"centralizedFirewallDeploymentModel\":{\"centralizedFirewallOrchestrationConfig\":{\"inspectionVpcIds\":[{\"resourceId\":\"vpc-1234\",\"accountId\":\"123456789011\"}],\"firewallCreationConfig\":{\"endpointLocation\":{\"availabilityZoneConfigList\":[{\"availabilityZoneId\":null,\"availabilityZoneName\":\"us-east-1a\",\"allowedIPV4CidrList\":[\"10.0.0.0/28\"]}]}},\"allowedIPV4CidrList\":[]}}}}"</code>
     * </p> <p> To use the centralized deployment model, you must set <a
     * href="https://docs.aws.amazon.com/fms/2018-01-01/APIReference/API_PolicyOption.html">PolicyOption</a>
     * to <code>CENTRALIZED</code>. </p> </li> <li> <p>Example:
     * <code>NETWORK_FIREWALL</code> - Distributed deployment model with automatic
     * Availability Zone configuration</p> <p> <code>
     * "{\"type\":\"NETWORK_FIREWALL\",\"networkFirewallStatelessRuleGroupReferences\":[{\"resourceARN\":\"arn:aws:network-firewall:us-east-1:123456789011:stateless-rulegroup/test\",\"priority\":1}],\"networkFirewallStatelessDefaultActions\":[\"aws:forward_to_sfe\",\"customActionName\"],\"networkFirewallStatelessFragmentDefaultActions\":[\"aws:forward_to_sfe\",\"customActionName\"],\"networkFirewallStatelessCustomActions\":[{\"actionName\":\"customActionName\",\"actionDefinition\":{\"publishMetricAction\":{\"dimensions\":[{\"value\":\"metricdimensionvalue\"}]}}}],\"networkFirewallStatefulRuleGroupReferences\":[{\"resourceARN\":\"arn:aws:network-firewall:us-east-1:123456789011:stateful-rulegroup/test\"}],\"networkFirewallOrchestrationConfig\":{\"singleFirewallEndpointPerVPC\":false,\"allowedIPV4CidrList\":[\"10.0.0.0/28\",\"192.168.0.0/28\"],\"routeManagementAction\":\"OFF\"},\"networkFirewallLoggingConfiguration\":{\"logDestinationConfigs\":[{\"logDestinationType\":\"S3\",\"logType\":\"ALERT\",\"logDestination\":{\"bucketName\":\"s3-bucket-name\"}},{\"logDestinationType\":\"S3\",\"logType\":\"FLOW\",\"logDestination\":{\"bucketName\":\"s3-bucket-name\"}}],\"overrideExistingConfig\":true}}"
     * </code> </p> <p> With automatic Availbility Zone configuration, Firewall Manager
     * chooses which Availability Zones to create the endpoints in. To use the
     * distributed deployment model, you must set <a
     * href="https://docs.aws.amazon.com/fms/2018-01-01/APIReference/API_PolicyOption.html">PolicyOption</a>
     * to <code>NULL</code>. </p> </li> <li> <p>Example: <code>NETWORK_FIREWALL</code>
     * - Distributed deployment model with automatic Availability Zone configuration
     * and route management</p> <p> <code>
     * "{\"type\":\"NETWORK_FIREWALL\",\"networkFirewallStatelessRuleGroupReferences\":[{\"resourceARN\":\"arn:aws:network-firewall:us-east-1:123456789011:stateless-rulegroup/test\",\"priority\":1}],\"networkFirewallStatelessDefaultActions\":[\"aws:forward_to_sfe\",\"customActionName\"],\"networkFirewallStatelessFragmentDefaultActions\":[\"aws:forward_to_sfe\",\"customActionName\"],\"networkFirewallStatelessCustomActions\":[{\"actionName\":\"customActionName\",\"actionDefinition\":{\"publishMetricAction\":{\"dimensions\":[{\"value\":\"metricdimensionvalue\"}]}}}],\"networkFirewallStatefulRuleGroupReferences\":[{\"resourceARN\":\"arn:aws:network-firewall:us-east-1:123456789011:stateful-rulegroup/test\"}],\"networkFirewallOrchestrationConfig\":{\"singleFirewallEndpointPerVPC\":false,\"allowedIPV4CidrList\":[\"10.0.0.0/28\",\"192.168.0.0/28\"],\"routeManagementAction\":\"MONITOR\",\"routeManagementTargetTypes\":[\"InternetGateway\"]},\"networkFirewallLoggingConfiguration\":{\"logDestinationConfigs\":[{\"logDestinationType\":\"S3\",\"logType\":\"ALERT\",\"logDestination\":{\"bucketName\":\"s3-bucket-name\"}},{\"logDestinationType\":\"S3\",\"logType\":
     * \"FLOW\",\"logDestination\":{\"bucketName\":\"s3-bucket-name\"}}],\"overrideExistingConfig\":true}}"
     * </code> </p> <p>To use the distributed deployment model, you must set <a
     * href="https://docs.aws.amazon.com/fms/2018-01-01/APIReference/API_PolicyOption.html">PolicyOption</a>
     * to <code>NULL</code>. </p> </li> <li> <p>Example: <code>NETWORK_FIREWALL</code>
     * - Distributed deployment model with custom Availability Zone configuration</p>
     * <p>
     * <code>"{\"type\":\"NETWORK_FIREWALL\",\"networkFirewallStatelessRuleGroupReferences\":[{\"resourceARN\":\"arn:aws:network-firewall:us-east-1:123456789011:stateless-rulegroup/test\",\"priority\":1}],\"networkFirewallStatelessDefaultActions\":[\"aws:forward_to_sfe\",\"customActionName\"],\"networkFirewallStatelessFragmentDefaultActions\":[\"aws:forward_to_sfe\",\"fragmentcustomactionname\"],\"networkFirewallStatelessCustomActions\":[{\"actionName\":\"customActionName\",
     * \"actionDefinition\":{\"publishMetricAction\":{\"dimensions\":[{\"value\":\"metricdimensionvalue\"}]}}},{\"actionName\":\"fragmentcustomactionname\",\"actionDefinition\":{\"publishMetricAction\":{\"dimensions\":[{\"value\":\"fragmentmetricdimensionvalue\"}]}}}],\"networkFirewallStatefulRuleGroupReferences\":[{\"resourceARN\":\"arn:aws:network-firewall:us-east-1:123456789011:stateful-rulegroup/test\"}],\"networkFirewallOrchestrationConfig\":{\"firewallCreationConfig\":{
     * \"endpointLocation\":{\"availabilityZoneConfigList\":[{\"availabilityZoneName\":\"us-east-1a\",\"allowedIPV4CidrList\":[\"10.0.0.0/28\"]},{\"availabilityZoneName\":\"us-east-1b\",\"allowedIPV4CidrList\":[
     * \"10.0.0.0/28\"]}]}
     * },\"singleFirewallEndpointPerVPC\":false,\"allowedIPV4CidrList\":null,\"routeManagementAction\":\"OFF\",\"networkFirewallLoggingConfiguration\":{\"logDestinationConfigs\":[{\"logDestinationType\":\"S3\",\"logType\":\"ALERT\",\"logDestination\":{\"bucketName\":\"s3-bucket-name\"}},{\"logDestinationType\":\"S3\",\"logType\":\"FLOW\",\"logDestination\":{\"bucketName\":\"s3-bucket-name\"}}],\"overrideExistingConfig\":boolean}}"
     * </code> </p> <p> With custom Availability Zone configuration, you define which
     * specific Availability Zones to create endpoints in by configuring
     * <code>firewallCreationConfig</code>. To configure the Availability Zones in
     * <code>firewallCreationConfig</code>, specify either the
     * <code>availabilityZoneName</code> or <code>availabilityZoneId</code> parameter,
     * not both parameters. </p> <p>To use the distributed deployment model, you must
     * set <a
     * href="https://docs.aws.amazon.com/fms/2018-01-01/APIReference/API_PolicyOption.html">PolicyOption</a>
     * to <code>NULL</code>. </p> </li> <li> <p>Example: <code>NETWORK_FIREWALL</code>
     * - Distributed deployment model with custom Availability Zone configuration and
     * route management</p> <p>
     * <code>"{\"type\":\"NETWORK_FIREWALL\",\"networkFirewallStatelessRuleGroupReferences\":[{\"resourceARN\":\"arn:aws:network-firewall:us-east-1:123456789011:stateless-rulegroup/test\",\"priority\":1}],\"networkFirewallStatelessDefaultActions\":[\"aws:forward_to_sfe\",\"customActionName\"],\"networkFirewallStatelessFragmentDefaultActions\":[\"aws:forward_to_sfe\",\"fragmentcustomactionname\"],\"networkFirewallStatelessCustomActions\":[{\"actionName\":\"customActionName\",\"actionDefinition\":{\"publishMetricAction\":{\"dimensions\":[{\"value\":\"metricdimensionvalue\"}]}}},{\"actionName\":\"fragmentcustomactionname\",\"actionDefinition\":{\"publishMetricAction\":{\"dimensions\":[{\"value\":\"fragmentmetricdimensionvalue\"}]}}}],\"networkFirewallStatefulRuleGroupReferences\":[{\"resourceARN\":\"arn:aws:network-firewall:us-east-1:123456789011:stateful-rulegroup/test\"}],\"networkFirewallOrchestrationConfig\":{\"firewallCreationConfig\":{\"endpointLocation\":{\"availabilityZoneConfigList\":[{\"availabilityZoneName\":\"us-east-1a\",\"allowedIPV4CidrList\":[\"10.0.0.0/28\"]},{\"availabilityZoneName\":\"us-east-1b\",\"allowedIPV4CidrList\":[\"10.0.0.0/28\"]}]}},\"singleFirewallEndpointPerVPC\":false,\"allowedIPV4CidrList\":null,\"routeManagementAction\":\"MONITOR\",\"routeManagementTargetTypes\":[\"InternetGateway\"],\"routeManagementConfig\":{\"allowCrossAZTrafficIfNoEndpoint\":true}},\"networkFirewallLoggingConfiguration\":{\"logDestinationConfigs\":[{\"logDestinationType\":\"S3\",\"logType\":\"ALERT\",\"logDestination\":{\"bucketName\":\"s3-bucket-name\"}},{\"logDestinationType\":\"S3\",\"logType\":\"FLOW\",\"logDestination\":{\"bucketName\":\"s3-bucket-name\"}}],\"overrideExistingConfig\":boolean}}"
     * </code> </p> <p>To use the distributed deployment model, you must set <a
     * href="https://docs.aws.amazon.com/fms/2018-01-01/APIReference/API_PolicyOption.html">PolicyOption</a>
     * to <code>NULL</code>. </p> </li> <li> <p>Example:
     * <code>THIRD_PARTY_FIREWALL</code> </p> <p> <code>"{
     * "type":"THIRD_PARTY_FIREWALL",
     * "thirdPartyFirewall":"PALO_ALTO_NETWORKS_CLOUD_NGFW",
     * "thirdPartyFirewallConfig":{ "thirdPartyFirewallPolicyList":["global-1"] },
     * "firewallDeploymentModel":{ "distributedFirewallDeploymentModel":{
     * "distributedFirewallOrchestrationConfig":{ "firewallCreationConfig":{
     * "endpointLocation":{ "availabilityZoneConfigList":[ {
     * "availabilityZoneName":"${AvailabilityZone}" } ] } }, "allowedIPV4CidrList":[ ]
     * } } } }"</code> </p> </li> <li> <p>Example: <code>SECURITY_GROUPS_COMMON</code>
     * </p> <p>
     * <code>"{\"type\":\"SECURITY_GROUPS_COMMON\",\"revertManualSecurityGroupChanges\":false,\"exclusiveResourceSecurityGroupManagement\":false,
     * \"applyToAllEC2InstanceENIs\":false,\"securityGroups\":[{\"id\":\"
     * sg-000e55995d61a06bd\"}]}"</code> </p> </li> <li> <p>Example:
     * <code>SECURITY_GROUPS_COMMON</code> - Security group tag distribution </p> <p>
     * <code>""{\"type\":\"SECURITY_GROUPS_COMMON\",\"securityGroups\":[{\"id\":\"sg-000e55995d61a06bd\"}],\"revertManualSecurityGroupChanges\":true,\"exclusiveResourceSecurityGroupManagement\":false,\"applyToAllEC2InstanceENIs\":false,\"includeSharedVPC\":false,\"enableTagDistribution\":true}""</code>
     * </p> <p> Firewall Manager automatically distributes tags from the primary group
     * to the security groups created by this policy. To use security group tag
     * distribution, you must also set <code>revertManualSecurityGroupChanges</code> to
     * <code>true</code>, otherwise Firewall Manager won't be able to create the
     * policy. When you enable <code>revertManualSecurityGroupChanges</code>, Firewall
     * Manager identifies and reports when the security groups created by this policy
     * become non-compliant. </p> <p> Firewall Manager won't distrubute system tags
     * added by Amazon Web Services services into the replica security groups. System
     * tags begin with the <code>aws:</code> prefix. </p> </li> <li> <p>Example: Shared
     * VPCs. Apply the preceding policy to resources in shared VPCs as well as to those
     * in VPCs that the account owns </p> <p>
     * <code>"{\"type\":\"SECURITY_GROUPS_COMMON\",\"revertManualSecurityGroupChanges\":false,\"exclusiveResourceSecurityGroupManagement\":false,
     * \"applyToAllEC2InstanceENIs\":false,\"includeSharedVPC\":true,\"securityGroups\":[{\"id\":\"
     * sg-000e55995d61a06bd\"}]}"</code> </p> </li> <li> <p>Example:
     * <code>SECURITY_GROUPS_CONTENT_AUDIT</code> </p> <p>
     * <code>"{\"type\":\"SECURITY_GROUPS_CONTENT_AUDIT\",\"securityGroups\":[{\"id\":\"sg-000e55995d61a06bd\"}],\"securityGroupAction\":{\"type\":\"ALLOW\"}}"</code>
     * </p> <p>The security group action for content audit can be <code>ALLOW</code> or
     * <code>DENY</code>. For <code>ALLOW</code>, all in-scope security group rules
     * must be within the allowed range of the policy's security group rules. For
     * <code>DENY</code>, all in-scope security group rules must not contain a value or
     * a range that matches a rule value or range in the policy security group.</p>
     * </li> <li> <p>Example: <code>SECURITY_GROUPS_USAGE_AUDIT</code> </p> <p>
     * <code>"{\"type\":\"SECURITY_GROUPS_USAGE_AUDIT\",\"deleteUnusedSecurityGroups\":true,\"coalesceRedundantSecurityGroups\":true}"</code>
     * </p> </li> <li> <p>Specification for <code>SHIELD_ADVANCED</code> for Amazon
     * CloudFront distributions </p> <p>
     * <code>"{\"type\":\"SHIELD_ADVANCED\",\"automaticResponseConfiguration\":
     * {\"automaticResponseStatus\":\"ENABLED|IGNORED|DISABLED\",
     * \"automaticResponseAction\":\"BLOCK|COUNT\"},
     * \"overrideCustomerWebaclClassic\":true|false}"</code> </p> <p>For example:
     * <code>"{\"type\":\"SHIELD_ADVANCED\",\"automaticResponseConfiguration\":
     * {\"automaticResponseStatus\":\"ENABLED\",
     * \"automaticResponseAction\":\"COUNT\"}}"</code> </p> <p>The default value for
     * <code>automaticResponseStatus</code> is <code>IGNORED</code>. The value for
     * <code>automaticResponseAction</code> is only required when
     * <code>automaticResponseStatus</code> is set to <code>ENABLED</code>. The default
     * value for <code>overrideCustomerWebaclClassic</code> is <code>false</code>.</p>
     * <p>For other resource types that you can protect with a Shield Advanced policy,
     * this <code>ManagedServiceData</code> configuration is an empty string.</p> </li>
     * <li> <p>Example: <code>WAFV2</code> </p> <p>
     * <code>"{\"type\":\"WAFV2\",\"preProcessRuleGroups\":[{\"ruleGroupArn\":null,\"overrideAction\":{\"type\":\"NONE\"},\"managedRuleGroupIdentifier\":{\"version\":null,\"vendorName\":\"AWS\",\"managedRuleGroupName\":\"AWSManagedRulesAmazonIpReputationList\"},\"ruleGroupType\":\"ManagedRuleGroup\",\"excludeRules\":[{\"name\":\"NoUserAgent_HEADER\"}]}],\"postProcessRuleGroups\":[],\"defaultAction\":{\"type\":\"ALLOW\"},\"overrideCustomerWebACLAssociation\":false,\"loggingConfiguration\":{\"logDestinationConfigs\":[\"arn:aws:firehose:us-west-2:12345678912:deliverystream/aws-waf-logs-fms-admin-destination\"],\"redactedFields\":[{\"redactedFieldType\":\"SingleHeader\",\"redactedFieldValue\":\"Cookies\"},{\"redactedFieldType\":\"Method\"}]}}"</code>
     * </p> <p>In the <code>loggingConfiguration</code>, you can specify one
     * <code>logDestinationConfigs</code>, you can optionally provide up to 20
     * <code>redactedFields</code>, and the <code>RedactedFieldType</code> must be one
     * of <code>URI</code>, <code>QUERY_STRING</code>, <code>HEADER</code>, or
     * <code>METHOD</code>.</p> </li> <li> <p>Example: <code>WAFV2</code> - Firewall
     * Manager support for WAF managed rule group versioning </p> <p>
     * <code>"{\"type\":\"WAFV2\",\"preProcessRuleGroups\":[{\"ruleGroupArn\":null,\"overrideAction\":{\"type\":\"NONE\"},\"managedRuleGroupIdentifier\":{\"versionEnabled\":true,\"version\":\"Version_2.0\",\"vendorName\":\"AWS\",\"managedRuleGroupName\":\"AWSManagedRulesCommonRuleSet\"},\"ruleGroupType\":\"ManagedRuleGroup\",\"excludeRules\":[{\"name\":\"NoUserAgent_HEADER\"}]}],\"postProcessRuleGroups\":[],\"defaultAction\":{\"type\":\"ALLOW\"},\"overrideCustomerWebACLAssociation\":false,\"loggingConfiguration\":{\"logDestinationConfigs\":[\"arn:aws:firehose:us-west-2:12345678912:deliverystream/aws-waf-logs-fms-admin-destination\"],\"redactedFields\":[{\"redactedFieldType\":\"SingleHeader\",\"redactedFieldValue\":\"Cookies\"},{\"redactedFieldType\":\"Method\"}]}}"</code>
     * </p> <p> To use a specific version of a WAF managed rule group in your Firewall
     * Manager policy, you must set <code>versionEnabled</code> to <code>true</code>,
     * and set <code>version</code> to the version you'd like to use. If you don't set
     * <code>versionEnabled</code> to <code>true</code>, or if you omit
     * <code>versionEnabled</code>, then Firewall Manager uses the default version of
     * the WAF managed rule group. </p> </li> <li> <p>Example: <code>WAF Classic</code>
     * </p> <p> <code>"{\"type\": \"WAF\", \"ruleGroups\":
     * [{\"id\":\"12345678-1bcd-9012-efga-0987654321ab\", \"overrideAction\" :
     * {\"type\": \"COUNT\"}}], \"defaultAction\": {\"type\": \"BLOCK\"}}"</code> </p>
     * </li> </ul>
     */
    inline void SetManagedServiceData(const Aws::String& value) { m_managedServiceDataHasBeenSet = true; m_managedServiceData = value; }

    /**
     * <p>Details about the service that are specific to the service type, in JSON
     * format. </p> <ul> <li> <p>Example: <code>DNS_FIREWALL</code> </p> <p>
     * <code>"{\"type\":\"DNS_FIREWALL\",\"preProcessRuleGroups\":[{\"ruleGroupId\":\"rslvr-frg-1\",\"priority\":10}],\"postProcessRuleGroups\":[{\"ruleGroupId\":\"rslvr-frg-2\",\"priority\":9911}]}"</code>
     * </p>  <p>Valid values for <code>preProcessRuleGroups</code> are between 1
     * and 99. Valid values for <code>postProcessRuleGroups</code> are between 9901 and
     * 10000.</p>  </li> <li> <p>Example: <code>NETWORK_FIREWALL</code> -
     * Centralized deployment model</p> <p>
     * <code>"{\"type\":\"NETWORK_FIREWALL\",\"awsNetworkFirewallConfig\":{\"networkFirewallStatelessRuleGroupReferences\":[{\"resourceARN\":\"arn:aws:network-firewall:us-east-1:123456789011:stateless-rulegroup/test\",\"priority\":1}],\"networkFirewallStatelessDefaultActions\":[\"aws:forward_to_sfe\",\"customActionName\"],\"networkFirewallStatelessFragmentDefaultActions\":[\"aws:forward_to_sfe\",\"customActionName\"],\"networkFirewallStatelessCustomActions\":[{\"actionName\":\"customActionName\",\"actionDefinition\":{\"publishMetricAction\":{\"dimensions\":[{\"value\":\"metricdimensionvalue\"}]}}}],\"networkFirewallStatefulRuleGroupReferences\":[{\"resourceARN\":\"arn:aws:network-firewall:us-east-1:123456789011:stateful-rulegroup/test\"}],\"networkFirewallLoggingConfiguration\":{\"logDestinationConfigs\":[{\"logDestinationType\":\"S3\",\"logType\":\"ALERT\",\"logDestination\":{\"bucketName\":\"s3-bucket-name\"}},{\"logDestinationType\":\"S3\",\"logType\":\"FLOW\",\"logDestination\":{\"bucketName\":\"s3-bucket-name\"}}],\"overrideExistingConfig\":true}},\"firewallDeploymentModel\":{\"centralizedFirewallDeploymentModel\":{\"centralizedFirewallOrchestrationConfig\":{\"inspectionVpcIds\":[{\"resourceId\":\"vpc-1234\",\"accountId\":\"123456789011\"}],\"firewallCreationConfig\":{\"endpointLocation\":{\"availabilityZoneConfigList\":[{\"availabilityZoneId\":null,\"availabilityZoneName\":\"us-east-1a\",\"allowedIPV4CidrList\":[\"10.0.0.0/28\"]}]}},\"allowedIPV4CidrList\":[]}}}}"</code>
     * </p> <p> To use the centralized deployment model, you must set <a
     * href="https://docs.aws.amazon.com/fms/2018-01-01/APIReference/API_PolicyOption.html">PolicyOption</a>
     * to <code>CENTRALIZED</code>. </p> </li> <li> <p>Example:
     * <code>NETWORK_FIREWALL</code> - Distributed deployment model with automatic
     * Availability Zone configuration</p> <p> <code>
     * "{\"type\":\"NETWORK_FIREWALL\",\"networkFirewallStatelessRuleGroupReferences\":[{\"resourceARN\":\"arn:aws:network-firewall:us-east-1:123456789011:stateless-rulegroup/test\",\"priority\":1}],\"networkFirewallStatelessDefaultActions\":[\"aws:forward_to_sfe\",\"customActionName\"],\"networkFirewallStatelessFragmentDefaultActions\":[\"aws:forward_to_sfe\",\"customActionName\"],\"networkFirewallStatelessCustomActions\":[{\"actionName\":\"customActionName\",\"actionDefinition\":{\"publishMetricAction\":{\"dimensions\":[{\"value\":\"metricdimensionvalue\"}]}}}],\"networkFirewallStatefulRuleGroupReferences\":[{\"resourceARN\":\"arn:aws:network-firewall:us-east-1:123456789011:stateful-rulegroup/test\"}],\"networkFirewallOrchestrationConfig\":{\"singleFirewallEndpointPerVPC\":false,\"allowedIPV4CidrList\":[\"10.0.0.0/28\",\"192.168.0.0/28\"],\"routeManagementAction\":\"OFF\"},\"networkFirewallLoggingConfiguration\":{\"logDestinationConfigs\":[{\"logDestinationType\":\"S3\",\"logType\":\"ALERT\",\"logDestination\":{\"bucketName\":\"s3-bucket-name\"}},{\"logDestinationType\":\"S3\",\"logType\":\"FLOW\",\"logDestination\":{\"bucketName\":\"s3-bucket-name\"}}],\"overrideExistingConfig\":true}}"
     * </code> </p> <p> With automatic Availbility Zone configuration, Firewall Manager
     * chooses which Availability Zones to create the endpoints in. To use the
     * distributed deployment model, you must set <a
     * href="https://docs.aws.amazon.com/fms/2018-01-01/APIReference/API_PolicyOption.html">PolicyOption</a>
     * to <code>NULL</code>. </p> </li> <li> <p>Example: <code>NETWORK_FIREWALL</code>
     * - Distributed deployment model with automatic Availability Zone configuration
     * and route management</p> <p> <code>
     * "{\"type\":\"NETWORK_FIREWALL\",\"networkFirewallStatelessRuleGroupReferences\":[{\"resourceARN\":\"arn:aws:network-firewall:us-east-1:123456789011:stateless-rulegroup/test\",\"priority\":1}],\"networkFirewallStatelessDefaultActions\":[\"aws:forward_to_sfe\",\"customActionName\"],\"networkFirewallStatelessFragmentDefaultActions\":[\"aws:forward_to_sfe\",\"customActionName\"],\"networkFirewallStatelessCustomActions\":[{\"actionName\":\"customActionName\",\"actionDefinition\":{\"publishMetricAction\":{\"dimensions\":[{\"value\":\"metricdimensionvalue\"}]}}}],\"networkFirewallStatefulRuleGroupReferences\":[{\"resourceARN\":\"arn:aws:network-firewall:us-east-1:123456789011:stateful-rulegroup/test\"}],\"networkFirewallOrchestrationConfig\":{\"singleFirewallEndpointPerVPC\":false,\"allowedIPV4CidrList\":[\"10.0.0.0/28\",\"192.168.0.0/28\"],\"routeManagementAction\":\"MONITOR\",\"routeManagementTargetTypes\":[\"InternetGateway\"]},\"networkFirewallLoggingConfiguration\":{\"logDestinationConfigs\":[{\"logDestinationType\":\"S3\",\"logType\":\"ALERT\",\"logDestination\":{\"bucketName\":\"s3-bucket-name\"}},{\"logDestinationType\":\"S3\",\"logType\":
     * \"FLOW\",\"logDestination\":{\"bucketName\":\"s3-bucket-name\"}}],\"overrideExistingConfig\":true}}"
     * </code> </p> <p>To use the distributed deployment model, you must set <a
     * href="https://docs.aws.amazon.com/fms/2018-01-01/APIReference/API_PolicyOption.html">PolicyOption</a>
     * to <code>NULL</code>. </p> </li> <li> <p>Example: <code>NETWORK_FIREWALL</code>
     * - Distributed deployment model with custom Availability Zone configuration</p>
     * <p>
     * <code>"{\"type\":\"NETWORK_FIREWALL\",\"networkFirewallStatelessRuleGroupReferences\":[{\"resourceARN\":\"arn:aws:network-firewall:us-east-1:123456789011:stateless-rulegroup/test\",\"priority\":1}],\"networkFirewallStatelessDefaultActions\":[\"aws:forward_to_sfe\",\"customActionName\"],\"networkFirewallStatelessFragmentDefaultActions\":[\"aws:forward_to_sfe\",\"fragmentcustomactionname\"],\"networkFirewallStatelessCustomActions\":[{\"actionName\":\"customActionName\",
     * \"actionDefinition\":{\"publishMetricAction\":{\"dimensions\":[{\"value\":\"metricdimensionvalue\"}]}}},{\"actionName\":\"fragmentcustomactionname\",\"actionDefinition\":{\"publishMetricAction\":{\"dimensions\":[{\"value\":\"fragmentmetricdimensionvalue\"}]}}}],\"networkFirewallStatefulRuleGroupReferences\":[{\"resourceARN\":\"arn:aws:network-firewall:us-east-1:123456789011:stateful-rulegroup/test\"}],\"networkFirewallOrchestrationConfig\":{\"firewallCreationConfig\":{
     * \"endpointLocation\":{\"availabilityZoneConfigList\":[{\"availabilityZoneName\":\"us-east-1a\",\"allowedIPV4CidrList\":[\"10.0.0.0/28\"]},{\"availabilityZoneName\":\"us-east-1b\",\"allowedIPV4CidrList\":[
     * \"10.0.0.0/28\"]}]}
     * },\"singleFirewallEndpointPerVPC\":false,\"allowedIPV4CidrList\":null,\"routeManagementAction\":\"OFF\",\"networkFirewallLoggingConfiguration\":{\"logDestinationConfigs\":[{\"logDestinationType\":\"S3\",\"logType\":\"ALERT\",\"logDestination\":{\"bucketName\":\"s3-bucket-name\"}},{\"logDestinationType\":\"S3\",\"logType\":\"FLOW\",\"logDestination\":{\"bucketName\":\"s3-bucket-name\"}}],\"overrideExistingConfig\":boolean}}"
     * </code> </p> <p> With custom Availability Zone configuration, you define which
     * specific Availability Zones to create endpoints in by configuring
     * <code>firewallCreationConfig</code>. To configure the Availability Zones in
     * <code>firewallCreationConfig</code>, specify either the
     * <code>availabilityZoneName</code> or <code>availabilityZoneId</code> parameter,
     * not both parameters. </p> <p>To use the distributed deployment model, you must
     * set <a
     * href="https://docs.aws.amazon.com/fms/2018-01-01/APIReference/API_PolicyOption.html">PolicyOption</a>
     * to <code>NULL</code>. </p> </li> <li> <p>Example: <code>NETWORK_FIREWALL</code>
     * - Distributed deployment model with custom Availability Zone configuration and
     * route management</p> <p>
     * <code>"{\"type\":\"NETWORK_FIREWALL\",\"networkFirewallStatelessRuleGroupReferences\":[{\"resourceARN\":\"arn:aws:network-firewall:us-east-1:123456789011:stateless-rulegroup/test\",\"priority\":1}],\"networkFirewallStatelessDefaultActions\":[\"aws:forward_to_sfe\",\"customActionName\"],\"networkFirewallStatelessFragmentDefaultActions\":[\"aws:forward_to_sfe\",\"fragmentcustomactionname\"],\"networkFirewallStatelessCustomActions\":[{\"actionName\":\"customActionName\",\"actionDefinition\":{\"publishMetricAction\":{\"dimensions\":[{\"value\":\"metricdimensionvalue\"}]}}},{\"actionName\":\"fragmentcustomactionname\",\"actionDefinition\":{\"publishMetricAction\":{\"dimensions\":[{\"value\":\"fragmentmetricdimensionvalue\"}]}}}],\"networkFirewallStatefulRuleGroupReferences\":[{\"resourceARN\":\"arn:aws:network-firewall:us-east-1:123456789011:stateful-rulegroup/test\"}],\"networkFirewallOrchestrationConfig\":{\"firewallCreationConfig\":{\"endpointLocation\":{\"availabilityZoneConfigList\":[{\"availabilityZoneName\":\"us-east-1a\",\"allowedIPV4CidrList\":[\"10.0.0.0/28\"]},{\"availabilityZoneName\":\"us-east-1b\",\"allowedIPV4CidrList\":[\"10.0.0.0/28\"]}]}},\"singleFirewallEndpointPerVPC\":false,\"allowedIPV4CidrList\":null,\"routeManagementAction\":\"MONITOR\",\"routeManagementTargetTypes\":[\"InternetGateway\"],\"routeManagementConfig\":{\"allowCrossAZTrafficIfNoEndpoint\":true}},\"networkFirewallLoggingConfiguration\":{\"logDestinationConfigs\":[{\"logDestinationType\":\"S3\",\"logType\":\"ALERT\",\"logDestination\":{\"bucketName\":\"s3-bucket-name\"}},{\"logDestinationType\":\"S3\",\"logType\":\"FLOW\",\"logDestination\":{\"bucketName\":\"s3-bucket-name\"}}],\"overrideExistingConfig\":boolean}}"
     * </code> </p> <p>To use the distributed deployment model, you must set <a
     * href="https://docs.aws.amazon.com/fms/2018-01-01/APIReference/API_PolicyOption.html">PolicyOption</a>
     * to <code>NULL</code>. </p> </li> <li> <p>Example:
     * <code>THIRD_PARTY_FIREWALL</code> </p> <p> <code>"{
     * "type":"THIRD_PARTY_FIREWALL",
     * "thirdPartyFirewall":"PALO_ALTO_NETWORKS_CLOUD_NGFW",
     * "thirdPartyFirewallConfig":{ "thirdPartyFirewallPolicyList":["global-1"] },
     * "firewallDeploymentModel":{ "distributedFirewallDeploymentModel":{
     * "distributedFirewallOrchestrationConfig":{ "firewallCreationConfig":{
     * "endpointLocation":{ "availabilityZoneConfigList":[ {
     * "availabilityZoneName":"${AvailabilityZone}" } ] } }, "allowedIPV4CidrList":[ ]
     * } } } }"</code> </p> </li> <li> <p>Example: <code>SECURITY_GROUPS_COMMON</code>
     * </p> <p>
     * <code>"{\"type\":\"SECURITY_GROUPS_COMMON\",\"revertManualSecurityGroupChanges\":false,\"exclusiveResourceSecurityGroupManagement\":false,
     * \"applyToAllEC2InstanceENIs\":false,\"securityGroups\":[{\"id\":\"
     * sg-000e55995d61a06bd\"}]}"</code> </p> </li> <li> <p>Example:
     * <code>SECURITY_GROUPS_COMMON</code> - Security group tag distribution </p> <p>
     * <code>""{\"type\":\"SECURITY_GROUPS_COMMON\",\"securityGroups\":[{\"id\":\"sg-000e55995d61a06bd\"}],\"revertManualSecurityGroupChanges\":true,\"exclusiveResourceSecurityGroupManagement\":false,\"applyToAllEC2InstanceENIs\":false,\"includeSharedVPC\":false,\"enableTagDistribution\":true}""</code>
     * </p> <p> Firewall Manager automatically distributes tags from the primary group
     * to the security groups created by this policy. To use security group tag
     * distribution, you must also set <code>revertManualSecurityGroupChanges</code> to
     * <code>true</code>, otherwise Firewall Manager won't be able to create the
     * policy. When you enable <code>revertManualSecurityGroupChanges</code>, Firewall
     * Manager identifies and reports when the security groups created by this policy
     * become non-compliant. </p> <p> Firewall Manager won't distrubute system tags
     * added by Amazon Web Services services into the replica security groups. System
     * tags begin with the <code>aws:</code> prefix. </p> </li> <li> <p>Example: Shared
     * VPCs. Apply the preceding policy to resources in shared VPCs as well as to those
     * in VPCs that the account owns </p> <p>
     * <code>"{\"type\":\"SECURITY_GROUPS_COMMON\",\"revertManualSecurityGroupChanges\":false,\"exclusiveResourceSecurityGroupManagement\":false,
     * \"applyToAllEC2InstanceENIs\":false,\"includeSharedVPC\":true,\"securityGroups\":[{\"id\":\"
     * sg-000e55995d61a06bd\"}]}"</code> </p> </li> <li> <p>Example:
     * <code>SECURITY_GROUPS_CONTENT_AUDIT</code> </p> <p>
     * <code>"{\"type\":\"SECURITY_GROUPS_CONTENT_AUDIT\",\"securityGroups\":[{\"id\":\"sg-000e55995d61a06bd\"}],\"securityGroupAction\":{\"type\":\"ALLOW\"}}"</code>
     * </p> <p>The security group action for content audit can be <code>ALLOW</code> or
     * <code>DENY</code>. For <code>ALLOW</code>, all in-scope security group rules
     * must be within the allowed range of the policy's security group rules. For
     * <code>DENY</code>, all in-scope security group rules must not contain a value or
     * a range that matches a rule value or range in the policy security group.</p>
     * </li> <li> <p>Example: <code>SECURITY_GROUPS_USAGE_AUDIT</code> </p> <p>
     * <code>"{\"type\":\"SECURITY_GROUPS_USAGE_AUDIT\",\"deleteUnusedSecurityGroups\":true,\"coalesceRedundantSecurityGroups\":true}"</code>
     * </p> </li> <li> <p>Specification for <code>SHIELD_ADVANCED</code> for Amazon
     * CloudFront distributions </p> <p>
     * <code>"{\"type\":\"SHIELD_ADVANCED\",\"automaticResponseConfiguration\":
     * {\"automaticResponseStatus\":\"ENABLED|IGNORED|DISABLED\",
     * \"automaticResponseAction\":\"BLOCK|COUNT\"},
     * \"overrideCustomerWebaclClassic\":true|false}"</code> </p> <p>For example:
     * <code>"{\"type\":\"SHIELD_ADVANCED\",\"automaticResponseConfiguration\":
     * {\"automaticResponseStatus\":\"ENABLED\",
     * \"automaticResponseAction\":\"COUNT\"}}"</code> </p> <p>The default value for
     * <code>automaticResponseStatus</code> is <code>IGNORED</code>. The value for
     * <code>automaticResponseAction</code> is only required when
     * <code>automaticResponseStatus</code> is set to <code>ENABLED</code>. The default
     * value for <code>overrideCustomerWebaclClassic</code> is <code>false</code>.</p>
     * <p>For other resource types that you can protect with a Shield Advanced policy,
     * this <code>ManagedServiceData</code> configuration is an empty string.</p> </li>
     * <li> <p>Example: <code>WAFV2</code> </p> <p>
     * <code>"{\"type\":\"WAFV2\",\"preProcessRuleGroups\":[{\"ruleGroupArn\":null,\"overrideAction\":{\"type\":\"NONE\"},\"managedRuleGroupIdentifier\":{\"version\":null,\"vendorName\":\"AWS\",\"managedRuleGroupName\":\"AWSManagedRulesAmazonIpReputationList\"},\"ruleGroupType\":\"ManagedRuleGroup\",\"excludeRules\":[{\"name\":\"NoUserAgent_HEADER\"}]}],\"postProcessRuleGroups\":[],\"defaultAction\":{\"type\":\"ALLOW\"},\"overrideCustomerWebACLAssociation\":false,\"loggingConfiguration\":{\"logDestinationConfigs\":[\"arn:aws:firehose:us-west-2:12345678912:deliverystream/aws-waf-logs-fms-admin-destination\"],\"redactedFields\":[{\"redactedFieldType\":\"SingleHeader\",\"redactedFieldValue\":\"Cookies\"},{\"redactedFieldType\":\"Method\"}]}}"</code>
     * </p> <p>In the <code>loggingConfiguration</code>, you can specify one
     * <code>logDestinationConfigs</code>, you can optionally provide up to 20
     * <code>redactedFields</code>, and the <code>RedactedFieldType</code> must be one
     * of <code>URI</code>, <code>QUERY_STRING</code>, <code>HEADER</code>, or
     * <code>METHOD</code>.</p> </li> <li> <p>Example: <code>WAFV2</code> - Firewall
     * Manager support for WAF managed rule group versioning </p> <p>
     * <code>"{\"type\":\"WAFV2\",\"preProcessRuleGroups\":[{\"ruleGroupArn\":null,\"overrideAction\":{\"type\":\"NONE\"},\"managedRuleGroupIdentifier\":{\"versionEnabled\":true,\"version\":\"Version_2.0\",\"vendorName\":\"AWS\",\"managedRuleGroupName\":\"AWSManagedRulesCommonRuleSet\"},\"ruleGroupType\":\"ManagedRuleGroup\",\"excludeRules\":[{\"name\":\"NoUserAgent_HEADER\"}]}],\"postProcessRuleGroups\":[],\"defaultAction\":{\"type\":\"ALLOW\"},\"overrideCustomerWebACLAssociation\":false,\"loggingConfiguration\":{\"logDestinationConfigs\":[\"arn:aws:firehose:us-west-2:12345678912:deliverystream/aws-waf-logs-fms-admin-destination\"],\"redactedFields\":[{\"redactedFieldType\":\"SingleHeader\",\"redactedFieldValue\":\"Cookies\"},{\"redactedFieldType\":\"Method\"}]}}"</code>
     * </p> <p> To use a specific version of a WAF managed rule group in your Firewall
     * Manager policy, you must set <code>versionEnabled</code> to <code>true</code>,
     * and set <code>version</code> to the version you'd like to use. If you don't set
     * <code>versionEnabled</code> to <code>true</code>, or if you omit
     * <code>versionEnabled</code>, then Firewall Manager uses the default version of
     * the WAF managed rule group. </p> </li> <li> <p>Example: <code>WAF Classic</code>
     * </p> <p> <code>"{\"type\": \"WAF\", \"ruleGroups\":
     * [{\"id\":\"12345678-1bcd-9012-efga-0987654321ab\", \"overrideAction\" :
     * {\"type\": \"COUNT\"}}], \"defaultAction\": {\"type\": \"BLOCK\"}}"</code> </p>
     * </li> </ul>
     */
    inline void SetManagedServiceData(Aws::String&& value) { m_managedServiceDataHasBeenSet = true; m_managedServiceData = std::move(value); }

    /**
     * <p>Details about the service that are specific to the service type, in JSON
     * format. </p> <ul> <li> <p>Example: <code>DNS_FIREWALL</code> </p> <p>
     * <code>"{\"type\":\"DNS_FIREWALL\",\"preProcessRuleGroups\":[{\"ruleGroupId\":\"rslvr-frg-1\",\"priority\":10}],\"postProcessRuleGroups\":[{\"ruleGroupId\":\"rslvr-frg-2\",\"priority\":9911}]}"</code>
     * </p>  <p>Valid values for <code>preProcessRuleGroups</code> are between 1
     * and 99. Valid values for <code>postProcessRuleGroups</code> are between 9901 and
     * 10000.</p>  </li> <li> <p>Example: <code>NETWORK_FIREWALL</code> -
     * Centralized deployment model</p> <p>
     * <code>"{\"type\":\"NETWORK_FIREWALL\",\"awsNetworkFirewallConfig\":{\"networkFirewallStatelessRuleGroupReferences\":[{\"resourceARN\":\"arn:aws:network-firewall:us-east-1:123456789011:stateless-rulegroup/test\",\"priority\":1}],\"networkFirewallStatelessDefaultActions\":[\"aws:forward_to_sfe\",\"customActionName\"],\"networkFirewallStatelessFragmentDefaultActions\":[\"aws:forward_to_sfe\",\"customActionName\"],\"networkFirewallStatelessCustomActions\":[{\"actionName\":\"customActionName\",\"actionDefinition\":{\"publishMetricAction\":{\"dimensions\":[{\"value\":\"metricdimensionvalue\"}]}}}],\"networkFirewallStatefulRuleGroupReferences\":[{\"resourceARN\":\"arn:aws:network-firewall:us-east-1:123456789011:stateful-rulegroup/test\"}],\"networkFirewallLoggingConfiguration\":{\"logDestinationConfigs\":[{\"logDestinationType\":\"S3\",\"logType\":\"ALERT\",\"logDestination\":{\"bucketName\":\"s3-bucket-name\"}},{\"logDestinationType\":\"S3\",\"logType\":\"FLOW\",\"logDestination\":{\"bucketName\":\"s3-bucket-name\"}}],\"overrideExistingConfig\":true}},\"firewallDeploymentModel\":{\"centralizedFirewallDeploymentModel\":{\"centralizedFirewallOrchestrationConfig\":{\"inspectionVpcIds\":[{\"resourceId\":\"vpc-1234\",\"accountId\":\"123456789011\"}],\"firewallCreationConfig\":{\"endpointLocation\":{\"availabilityZoneConfigList\":[{\"availabilityZoneId\":null,\"availabilityZoneName\":\"us-east-1a\",\"allowedIPV4CidrList\":[\"10.0.0.0/28\"]}]}},\"allowedIPV4CidrList\":[]}}}}"</code>
     * </p> <p> To use the centralized deployment model, you must set <a
     * href="https://docs.aws.amazon.com/fms/2018-01-01/APIReference/API_PolicyOption.html">PolicyOption</a>
     * to <code>CENTRALIZED</code>. </p> </li> <li> <p>Example:
     * <code>NETWORK_FIREWALL</code> - Distributed deployment model with automatic
     * Availability Zone configuration</p> <p> <code>
     * "{\"type\":\"NETWORK_FIREWALL\",\"networkFirewallStatelessRuleGroupReferences\":[{\"resourceARN\":\"arn:aws:network-firewall:us-east-1:123456789011:stateless-rulegroup/test\",\"priority\":1}],\"networkFirewallStatelessDefaultActions\":[\"aws:forward_to_sfe\",\"customActionName\"],\"networkFirewallStatelessFragmentDefaultActions\":[\"aws:forward_to_sfe\",\"customActionName\"],\"networkFirewallStatelessCustomActions\":[{\"actionName\":\"customActionName\",\"actionDefinition\":{\"publishMetricAction\":{\"dimensions\":[{\"value\":\"metricdimensionvalue\"}]}}}],\"networkFirewallStatefulRuleGroupReferences\":[{\"resourceARN\":\"arn:aws:network-firewall:us-east-1:123456789011:stateful-rulegroup/test\"}],\"networkFirewallOrchestrationConfig\":{\"singleFirewallEndpointPerVPC\":false,\"allowedIPV4CidrList\":[\"10.0.0.0/28\",\"192.168.0.0/28\"],\"routeManagementAction\":\"OFF\"},\"networkFirewallLoggingConfiguration\":{\"logDestinationConfigs\":[{\"logDestinationType\":\"S3\",\"logType\":\"ALERT\",\"logDestination\":{\"bucketName\":\"s3-bucket-name\"}},{\"logDestinationType\":\"S3\",\"logType\":\"FLOW\",\"logDestination\":{\"bucketName\":\"s3-bucket-name\"}}],\"overrideExistingConfig\":true}}"
     * </code> </p> <p> With automatic Availbility Zone configuration, Firewall Manager
     * chooses which Availability Zones to create the endpoints in. To use the
     * distributed deployment model, you must set <a
     * href="https://docs.aws.amazon.com/fms/2018-01-01/APIReference/API_PolicyOption.html">PolicyOption</a>
     * to <code>NULL</code>. </p> </li> <li> <p>Example: <code>NETWORK_FIREWALL</code>
     * - Distributed deployment model with automatic Availability Zone configuration
     * and route management</p> <p> <code>
     * "{\"type\":\"NETWORK_FIREWALL\",\"networkFirewallStatelessRuleGroupReferences\":[{\"resourceARN\":\"arn:aws:network-firewall:us-east-1:123456789011:stateless-rulegroup/test\",\"priority\":1}],\"networkFirewallStatelessDefaultActions\":[\"aws:forward_to_sfe\",\"customActionName\"],\"networkFirewallStatelessFragmentDefaultActions\":[\"aws:forward_to_sfe\",\"customActionName\"],\"networkFirewallStatelessCustomActions\":[{\"actionName\":\"customActionName\",\"actionDefinition\":{\"publishMetricAction\":{\"dimensions\":[{\"value\":\"metricdimensionvalue\"}]}}}],\"networkFirewallStatefulRuleGroupReferences\":[{\"resourceARN\":\"arn:aws:network-firewall:us-east-1:123456789011:stateful-rulegroup/test\"}],\"networkFirewallOrchestrationConfig\":{\"singleFirewallEndpointPerVPC\":false,\"allowedIPV4CidrList\":[\"10.0.0.0/28\",\"192.168.0.0/28\"],\"routeManagementAction\":\"MONITOR\",\"routeManagementTargetTypes\":[\"InternetGateway\"]},\"networkFirewallLoggingConfiguration\":{\"logDestinationConfigs\":[{\"logDestinationType\":\"S3\",\"logType\":\"ALERT\",\"logDestination\":{\"bucketName\":\"s3-bucket-name\"}},{\"logDestinationType\":\"S3\",\"logType\":
     * \"FLOW\",\"logDestination\":{\"bucketName\":\"s3-bucket-name\"}}],\"overrideExistingConfig\":true}}"
     * </code> </p> <p>To use the distributed deployment model, you must set <a
     * href="https://docs.aws.amazon.com/fms/2018-01-01/APIReference/API_PolicyOption.html">PolicyOption</a>
     * to <code>NULL</code>. </p> </li> <li> <p>Example: <code>NETWORK_FIREWALL</code>
     * - Distributed deployment model with custom Availability Zone configuration</p>
     * <p>
     * <code>"{\"type\":\"NETWORK_FIREWALL\",\"networkFirewallStatelessRuleGroupReferences\":[{\"resourceARN\":\"arn:aws:network-firewall:us-east-1:123456789011:stateless-rulegroup/test\",\"priority\":1}],\"networkFirewallStatelessDefaultActions\":[\"aws:forward_to_sfe\",\"customActionName\"],\"networkFirewallStatelessFragmentDefaultActions\":[\"aws:forward_to_sfe\",\"fragmentcustomactionname\"],\"networkFirewallStatelessCustomActions\":[{\"actionName\":\"customActionName\",
     * \"actionDefinition\":{\"publishMetricAction\":{\"dimensions\":[{\"value\":\"metricdimensionvalue\"}]}}},{\"actionName\":\"fragmentcustomactionname\",\"actionDefinition\":{\"publishMetricAction\":{\"dimensions\":[{\"value\":\"fragmentmetricdimensionvalue\"}]}}}],\"networkFirewallStatefulRuleGroupReferences\":[{\"resourceARN\":\"arn:aws:network-firewall:us-east-1:123456789011:stateful-rulegroup/test\"}],\"networkFirewallOrchestrationConfig\":{\"firewallCreationConfig\":{
     * \"endpointLocation\":{\"availabilityZoneConfigList\":[{\"availabilityZoneName\":\"us-east-1a\",\"allowedIPV4CidrList\":[\"10.0.0.0/28\"]},{\"availabilityZoneName\":\"us-east-1b\",\"allowedIPV4CidrList\":[
     * \"10.0.0.0/28\"]}]}
     * },\"singleFirewallEndpointPerVPC\":false,\"allowedIPV4CidrList\":null,\"routeManagementAction\":\"OFF\",\"networkFirewallLoggingConfiguration\":{\"logDestinationConfigs\":[{\"logDestinationType\":\"S3\",\"logType\":\"ALERT\",\"logDestination\":{\"bucketName\":\"s3-bucket-name\"}},{\"logDestinationType\":\"S3\",\"logType\":\"FLOW\",\"logDestination\":{\"bucketName\":\"s3-bucket-name\"}}],\"overrideExistingConfig\":boolean}}"
     * </code> </p> <p> With custom Availability Zone configuration, you define which
     * specific Availability Zones to create endpoints in by configuring
     * <code>firewallCreationConfig</code>. To configure the Availability Zones in
     * <code>firewallCreationConfig</code>, specify either the
     * <code>availabilityZoneName</code> or <code>availabilityZoneId</code> parameter,
     * not both parameters. </p> <p>To use the distributed deployment model, you must
     * set <a
     * href="https://docs.aws.amazon.com/fms/2018-01-01/APIReference/API_PolicyOption.html">PolicyOption</a>
     * to <code>NULL</code>. </p> </li> <li> <p>Example: <code>NETWORK_FIREWALL</code>
     * - Distributed deployment model with custom Availability Zone configuration and
     * route management</p> <p>
     * <code>"{\"type\":\"NETWORK_FIREWALL\",\"networkFirewallStatelessRuleGroupReferences\":[{\"resourceARN\":\"arn:aws:network-firewall:us-east-1:123456789011:stateless-rulegroup/test\",\"priority\":1}],\"networkFirewallStatelessDefaultActions\":[\"aws:forward_to_sfe\",\"customActionName\"],\"networkFirewallStatelessFragmentDefaultActions\":[\"aws:forward_to_sfe\",\"fragmentcustomactionname\"],\"networkFirewallStatelessCustomActions\":[{\"actionName\":\"customActionName\",\"actionDefinition\":{\"publishMetricAction\":{\"dimensions\":[{\"value\":\"metricdimensionvalue\"}]}}},{\"actionName\":\"fragmentcustomactionname\",\"actionDefinition\":{\"publishMetricAction\":{\"dimensions\":[{\"value\":\"fragmentmetricdimensionvalue\"}]}}}],\"networkFirewallStatefulRuleGroupReferences\":[{\"resourceARN\":\"arn:aws:network-firewall:us-east-1:123456789011:stateful-rulegroup/test\"}],\"networkFirewallOrchestrationConfig\":{\"firewallCreationConfig\":{\"endpointLocation\":{\"availabilityZoneConfigList\":[{\"availabilityZoneName\":\"us-east-1a\",\"allowedIPV4CidrList\":[\"10.0.0.0/28\"]},{\"availabilityZoneName\":\"us-east-1b\",\"allowedIPV4CidrList\":[\"10.0.0.0/28\"]}]}},\"singleFirewallEndpointPerVPC\":false,\"allowedIPV4CidrList\":null,\"routeManagementAction\":\"MONITOR\",\"routeManagementTargetTypes\":[\"InternetGateway\"],\"routeManagementConfig\":{\"allowCrossAZTrafficIfNoEndpoint\":true}},\"networkFirewallLoggingConfiguration\":{\"logDestinationConfigs\":[{\"logDestinationType\":\"S3\",\"logType\":\"ALERT\",\"logDestination\":{\"bucketName\":\"s3-bucket-name\"}},{\"logDestinationType\":\"S3\",\"logType\":\"FLOW\",\"logDestination\":{\"bucketName\":\"s3-bucket-name\"}}],\"overrideExistingConfig\":boolean}}"
     * </code> </p> <p>To use the distributed deployment model, you must set <a
     * href="https://docs.aws.amazon.com/fms/2018-01-01/APIReference/API_PolicyOption.html">PolicyOption</a>
     * to <code>NULL</code>. </p> </li> <li> <p>Example:
     * <code>THIRD_PARTY_FIREWALL</code> </p> <p> <code>"{
     * "type":"THIRD_PARTY_FIREWALL",
     * "thirdPartyFirewall":"PALO_ALTO_NETWORKS_CLOUD_NGFW",
     * "thirdPartyFirewallConfig":{ "thirdPartyFirewallPolicyList":["global-1"] },
     * "firewallDeploymentModel":{ "distributedFirewallDeploymentModel":{
     * "distributedFirewallOrchestrationConfig":{ "firewallCreationConfig":{
     * "endpointLocation":{ "availabilityZoneConfigList":[ {
     * "availabilityZoneName":"${AvailabilityZone}" } ] } }, "allowedIPV4CidrList":[ ]
     * } } } }"</code> </p> </li> <li> <p>Example: <code>SECURITY_GROUPS_COMMON</code>
     * </p> <p>
     * <code>"{\"type\":\"SECURITY_GROUPS_COMMON\",\"revertManualSecurityGroupChanges\":false,\"exclusiveResourceSecurityGroupManagement\":false,
     * \"applyToAllEC2InstanceENIs\":false,\"securityGroups\":[{\"id\":\"
     * sg-000e55995d61a06bd\"}]}"</code> </p> </li> <li> <p>Example:
     * <code>SECURITY_GROUPS_COMMON</code> - Security group tag distribution </p> <p>
     * <code>""{\"type\":\"SECURITY_GROUPS_COMMON\",\"securityGroups\":[{\"id\":\"sg-000e55995d61a06bd\"}],\"revertManualSecurityGroupChanges\":true,\"exclusiveResourceSecurityGroupManagement\":false,\"applyToAllEC2InstanceENIs\":false,\"includeSharedVPC\":false,\"enableTagDistribution\":true}""</code>
     * </p> <p> Firewall Manager automatically distributes tags from the primary group
     * to the security groups created by this policy. To use security group tag
     * distribution, you must also set <code>revertManualSecurityGroupChanges</code> to
     * <code>true</code>, otherwise Firewall Manager won't be able to create the
     * policy. When you enable <code>revertManualSecurityGroupChanges</code>, Firewall
     * Manager identifies and reports when the security groups created by this policy
     * become non-compliant. </p> <p> Firewall Manager won't distrubute system tags
     * added by Amazon Web Services services into the replica security groups. System
     * tags begin with the <code>aws:</code> prefix. </p> </li> <li> <p>Example: Shared
     * VPCs. Apply the preceding policy to resources in shared VPCs as well as to those
     * in VPCs that the account owns </p> <p>
     * <code>"{\"type\":\"SECURITY_GROUPS_COMMON\",\"revertManualSecurityGroupChanges\":false,\"exclusiveResourceSecurityGroupManagement\":false,
     * \"applyToAllEC2InstanceENIs\":false,\"includeSharedVPC\":true,\"securityGroups\":[{\"id\":\"
     * sg-000e55995d61a06bd\"}]}"</code> </p> </li> <li> <p>Example:
     * <code>SECURITY_GROUPS_CONTENT_AUDIT</code> </p> <p>
     * <code>"{\"type\":\"SECURITY_GROUPS_CONTENT_AUDIT\",\"securityGroups\":[{\"id\":\"sg-000e55995d61a06bd\"}],\"securityGroupAction\":{\"type\":\"ALLOW\"}}"</code>
     * </p> <p>The security group action for content audit can be <code>ALLOW</code> or
     * <code>DENY</code>. For <code>ALLOW</code>, all in-scope security group rules
     * must be within the allowed range of the policy's security group rules. For
     * <code>DENY</code>, all in-scope security group rules must not contain a value or
     * a range that matches a rule value or range in the policy security group.</p>
     * </li> <li> <p>Example: <code>SECURITY_GROUPS_USAGE_AUDIT</code> </p> <p>
     * <code>"{\"type\":\"SECURITY_GROUPS_USAGE_AUDIT\",\"deleteUnusedSecurityGroups\":true,\"coalesceRedundantSecurityGroups\":true}"</code>
     * </p> </li> <li> <p>Specification for <code>SHIELD_ADVANCED</code> for Amazon
     * CloudFront distributions </p> <p>
     * <code>"{\"type\":\"SHIELD_ADVANCED\",\"automaticResponseConfiguration\":
     * {\"automaticResponseStatus\":\"ENABLED|IGNORED|DISABLED\",
     * \"automaticResponseAction\":\"BLOCK|COUNT\"},
     * \"overrideCustomerWebaclClassic\":true|false}"</code> </p> <p>For example:
     * <code>"{\"type\":\"SHIELD_ADVANCED\",\"automaticResponseConfiguration\":
     * {\"automaticResponseStatus\":\"ENABLED\",
     * \"automaticResponseAction\":\"COUNT\"}}"</code> </p> <p>The default value for
     * <code>automaticResponseStatus</code> is <code>IGNORED</code>. The value for
     * <code>automaticResponseAction</code> is only required when
     * <code>automaticResponseStatus</code> is set to <code>ENABLED</code>. The default
     * value for <code>overrideCustomerWebaclClassic</code> is <code>false</code>.</p>
     * <p>For other resource types that you can protect with a Shield Advanced policy,
     * this <code>ManagedServiceData</code> configuration is an empty string.</p> </li>
     * <li> <p>Example: <code>WAFV2</code> </p> <p>
     * <code>"{\"type\":\"WAFV2\",\"preProcessRuleGroups\":[{\"ruleGroupArn\":null,\"overrideAction\":{\"type\":\"NONE\"},\"managedRuleGroupIdentifier\":{\"version\":null,\"vendorName\":\"AWS\",\"managedRuleGroupName\":\"AWSManagedRulesAmazonIpReputationList\"},\"ruleGroupType\":\"ManagedRuleGroup\",\"excludeRules\":[{\"name\":\"NoUserAgent_HEADER\"}]}],\"postProcessRuleGroups\":[],\"defaultAction\":{\"type\":\"ALLOW\"},\"overrideCustomerWebACLAssociation\":false,\"loggingConfiguration\":{\"logDestinationConfigs\":[\"arn:aws:firehose:us-west-2:12345678912:deliverystream/aws-waf-logs-fms-admin-destination\"],\"redactedFields\":[{\"redactedFieldType\":\"SingleHeader\",\"redactedFieldValue\":\"Cookies\"},{\"redactedFieldType\":\"Method\"}]}}"</code>
     * </p> <p>In the <code>loggingConfiguration</code>, you can specify one
     * <code>logDestinationConfigs</code>, you can optionally provide up to 20
     * <code>redactedFields</code>, and the <code>RedactedFieldType</code> must be one
     * of <code>URI</code>, <code>QUERY_STRING</code>, <code>HEADER</code>, or
     * <code>METHOD</code>.</p> </li> <li> <p>Example: <code>WAFV2</code> - Firewall
     * Manager support for WAF managed rule group versioning </p> <p>
     * <code>"{\"type\":\"WAFV2\",\"preProcessRuleGroups\":[{\"ruleGroupArn\":null,\"overrideAction\":{\"type\":\"NONE\"},\"managedRuleGroupIdentifier\":{\"versionEnabled\":true,\"version\":\"Version_2.0\",\"vendorName\":\"AWS\",\"managedRuleGroupName\":\"AWSManagedRulesCommonRuleSet\"},\"ruleGroupType\":\"ManagedRuleGroup\",\"excludeRules\":[{\"name\":\"NoUserAgent_HEADER\"}]}],\"postProcessRuleGroups\":[],\"defaultAction\":{\"type\":\"ALLOW\"},\"overrideCustomerWebACLAssociation\":false,\"loggingConfiguration\":{\"logDestinationConfigs\":[\"arn:aws:firehose:us-west-2:12345678912:deliverystream/aws-waf-logs-fms-admin-destination\"],\"redactedFields\":[{\"redactedFieldType\":\"SingleHeader\",\"redactedFieldValue\":\"Cookies\"},{\"redactedFieldType\":\"Method\"}]}}"</code>
     * </p> <p> To use a specific version of a WAF managed rule group in your Firewall
     * Manager policy, you must set <code>versionEnabled</code> to <code>true</code>,
     * and set <code>version</code> to the version you'd like to use. If you don't set
     * <code>versionEnabled</code> to <code>true</code>, or if you omit
     * <code>versionEnabled</code>, then Firewall Manager uses the default version of
     * the WAF managed rule group. </p> </li> <li> <p>Example: <code>WAF Classic</code>
     * </p> <p> <code>"{\"type\": \"WAF\", \"ruleGroups\":
     * [{\"id\":\"12345678-1bcd-9012-efga-0987654321ab\", \"overrideAction\" :
     * {\"type\": \"COUNT\"}}], \"defaultAction\": {\"type\": \"BLOCK\"}}"</code> </p>
     * </li> </ul>
     */
    inline void SetManagedServiceData(const char* value) { m_managedServiceDataHasBeenSet = true; m_managedServiceData.assign(value); }

    /**
     * <p>Details about the service that are specific to the service type, in JSON
     * format. </p> <ul> <li> <p>Example: <code>DNS_FIREWALL</code> </p> <p>
     * <code>"{\"type\":\"DNS_FIREWALL\",\"preProcessRuleGroups\":[{\"ruleGroupId\":\"rslvr-frg-1\",\"priority\":10}],\"postProcessRuleGroups\":[{\"ruleGroupId\":\"rslvr-frg-2\",\"priority\":9911}]}"</code>
     * </p>  <p>Valid values for <code>preProcessRuleGroups</code> are between 1
     * and 99. Valid values for <code>postProcessRuleGroups</code> are between 9901 and
     * 10000.</p>  </li> <li> <p>Example: <code>NETWORK_FIREWALL</code> -
     * Centralized deployment model</p> <p>
     * <code>"{\"type\":\"NETWORK_FIREWALL\",\"awsNetworkFirewallConfig\":{\"networkFirewallStatelessRuleGroupReferences\":[{\"resourceARN\":\"arn:aws:network-firewall:us-east-1:123456789011:stateless-rulegroup/test\",\"priority\":1}],\"networkFirewallStatelessDefaultActions\":[\"aws:forward_to_sfe\",\"customActionName\"],\"networkFirewallStatelessFragmentDefaultActions\":[\"aws:forward_to_sfe\",\"customActionName\"],\"networkFirewallStatelessCustomActions\":[{\"actionName\":\"customActionName\",\"actionDefinition\":{\"publishMetricAction\":{\"dimensions\":[{\"value\":\"metricdimensionvalue\"}]}}}],\"networkFirewallStatefulRuleGroupReferences\":[{\"resourceARN\":\"arn:aws:network-firewall:us-east-1:123456789011:stateful-rulegroup/test\"}],\"networkFirewallLoggingConfiguration\":{\"logDestinationConfigs\":[{\"logDestinationType\":\"S3\",\"logType\":\"ALERT\",\"logDestination\":{\"bucketName\":\"s3-bucket-name\"}},{\"logDestinationType\":\"S3\",\"logType\":\"FLOW\",\"logDestination\":{\"bucketName\":\"s3-bucket-name\"}}],\"overrideExistingConfig\":true}},\"firewallDeploymentModel\":{\"centralizedFirewallDeploymentModel\":{\"centralizedFirewallOrchestrationConfig\":{\"inspectionVpcIds\":[{\"resourceId\":\"vpc-1234\",\"accountId\":\"123456789011\"}],\"firewallCreationConfig\":{\"endpointLocation\":{\"availabilityZoneConfigList\":[{\"availabilityZoneId\":null,\"availabilityZoneName\":\"us-east-1a\",\"allowedIPV4CidrList\":[\"10.0.0.0/28\"]}]}},\"allowedIPV4CidrList\":[]}}}}"</code>
     * </p> <p> To use the centralized deployment model, you must set <a
     * href="https://docs.aws.amazon.com/fms/2018-01-01/APIReference/API_PolicyOption.html">PolicyOption</a>
     * to <code>CENTRALIZED</code>. </p> </li> <li> <p>Example:
     * <code>NETWORK_FIREWALL</code> - Distributed deployment model with automatic
     * Availability Zone configuration</p> <p> <code>
     * "{\"type\":\"NETWORK_FIREWALL\",\"networkFirewallStatelessRuleGroupReferences\":[{\"resourceARN\":\"arn:aws:network-firewall:us-east-1:123456789011:stateless-rulegroup/test\",\"priority\":1}],\"networkFirewallStatelessDefaultActions\":[\"aws:forward_to_sfe\",\"customActionName\"],\"networkFirewallStatelessFragmentDefaultActions\":[\"aws:forward_to_sfe\",\"customActionName\"],\"networkFirewallStatelessCustomActions\":[{\"actionName\":\"customActionName\",\"actionDefinition\":{\"publishMetricAction\":{\"dimensions\":[{\"value\":\"metricdimensionvalue\"}]}}}],\"networkFirewallStatefulRuleGroupReferences\":[{\"resourceARN\":\"arn:aws:network-firewall:us-east-1:123456789011:stateful-rulegroup/test\"}],\"networkFirewallOrchestrationConfig\":{\"singleFirewallEndpointPerVPC\":false,\"allowedIPV4CidrList\":[\"10.0.0.0/28\",\"192.168.0.0/28\"],\"routeManagementAction\":\"OFF\"},\"networkFirewallLoggingConfiguration\":{\"logDestinationConfigs\":[{\"logDestinationType\":\"S3\",\"logType\":\"ALERT\",\"logDestination\":{\"bucketName\":\"s3-bucket-name\"}},{\"logDestinationType\":\"S3\",\"logType\":\"FLOW\",\"logDestination\":{\"bucketName\":\"s3-bucket-name\"}}],\"overrideExistingConfig\":true}}"
     * </code> </p> <p> With automatic Availbility Zone configuration, Firewall Manager
     * chooses which Availability Zones to create the endpoints in. To use the
     * distributed deployment model, you must set <a
     * href="https://docs.aws.amazon.com/fms/2018-01-01/APIReference/API_PolicyOption.html">PolicyOption</a>
     * to <code>NULL</code>. </p> </li> <li> <p>Example: <code>NETWORK_FIREWALL</code>
     * - Distributed deployment model with automatic Availability Zone configuration
     * and route management</p> <p> <code>
     * "{\"type\":\"NETWORK_FIREWALL\",\"networkFirewallStatelessRuleGroupReferences\":[{\"resourceARN\":\"arn:aws:network-firewall:us-east-1:123456789011:stateless-rulegroup/test\",\"priority\":1}],\"networkFirewallStatelessDefaultActions\":[\"aws:forward_to_sfe\",\"customActionName\"],\"networkFirewallStatelessFragmentDefaultActions\":[\"aws:forward_to_sfe\",\"customActionName\"],\"networkFirewallStatelessCustomActions\":[{\"actionName\":\"customActionName\",\"actionDefinition\":{\"publishMetricAction\":{\"dimensions\":[{\"value\":\"metricdimensionvalue\"}]}}}],\"networkFirewallStatefulRuleGroupReferences\":[{\"resourceARN\":\"arn:aws:network-firewall:us-east-1:123456789011:stateful-rulegroup/test\"}],\"networkFirewallOrchestrationConfig\":{\"singleFirewallEndpointPerVPC\":false,\"allowedIPV4CidrList\":[\"10.0.0.0/28\",\"192.168.0.0/28\"],\"routeManagementAction\":\"MONITOR\",\"routeManagementTargetTypes\":[\"InternetGateway\"]},\"networkFirewallLoggingConfiguration\":{\"logDestinationConfigs\":[{\"logDestinationType\":\"S3\",\"logType\":\"ALERT\",\"logDestination\":{\"bucketName\":\"s3-bucket-name\"}},{\"logDestinationType\":\"S3\",\"logType\":
     * \"FLOW\",\"logDestination\":{\"bucketName\":\"s3-bucket-name\"}}],\"overrideExistingConfig\":true}}"
     * </code> </p> <p>To use the distributed deployment model, you must set <a
     * href="https://docs.aws.amazon.com/fms/2018-01-01/APIReference/API_PolicyOption.html">PolicyOption</a>
     * to <code>NULL</code>. </p> </li> <li> <p>Example: <code>NETWORK_FIREWALL</code>
     * - Distributed deployment model with custom Availability Zone configuration</p>
     * <p>
     * <code>"{\"type\":\"NETWORK_FIREWALL\",\"networkFirewallStatelessRuleGroupReferences\":[{\"resourceARN\":\"arn:aws:network-firewall:us-east-1:123456789011:stateless-rulegroup/test\",\"priority\":1}],\"networkFirewallStatelessDefaultActions\":[\"aws:forward_to_sfe\",\"customActionName\"],\"networkFirewallStatelessFragmentDefaultActions\":[\"aws:forward_to_sfe\",\"fragmentcustomactionname\"],\"networkFirewallStatelessCustomActions\":[{\"actionName\":\"customActionName\",
     * \"actionDefinition\":{\"publishMetricAction\":{\"dimensions\":[{\"value\":\"metricdimensionvalue\"}]}}},{\"actionName\":\"fragmentcustomactionname\",\"actionDefinition\":{\"publishMetricAction\":{\"dimensions\":[{\"value\":\"fragmentmetricdimensionvalue\"}]}}}],\"networkFirewallStatefulRuleGroupReferences\":[{\"resourceARN\":\"arn:aws:network-firewall:us-east-1:123456789011:stateful-rulegroup/test\"}],\"networkFirewallOrchestrationConfig\":{\"firewallCreationConfig\":{
     * \"endpointLocation\":{\"availabilityZoneConfigList\":[{\"availabilityZoneName\":\"us-east-1a\",\"allowedIPV4CidrList\":[\"10.0.0.0/28\"]},{\"availabilityZoneName\":\"us-east-1b\",\"allowedIPV4CidrList\":[
     * \"10.0.0.0/28\"]}]}
     * },\"singleFirewallEndpointPerVPC\":false,\"allowedIPV4CidrList\":null,\"routeManagementAction\":\"OFF\",\"networkFirewallLoggingConfiguration\":{\"logDestinationConfigs\":[{\"logDestinationType\":\"S3\",\"logType\":\"ALERT\",\"logDestination\":{\"bucketName\":\"s3-bucket-name\"}},{\"logDestinationType\":\"S3\",\"logType\":\"FLOW\",\"logDestination\":{\"bucketName\":\"s3-bucket-name\"}}],\"overrideExistingConfig\":boolean}}"
     * </code> </p> <p> With custom Availability Zone configuration, you define which
     * specific Availability Zones to create endpoints in by configuring
     * <code>firewallCreationConfig</code>. To configure the Availability Zones in
     * <code>firewallCreationConfig</code>, specify either the
     * <code>availabilityZoneName</code> or <code>availabilityZoneId</code> parameter,
     * not both parameters. </p> <p>To use the distributed deployment model, you must
     * set <a
     * href="https://docs.aws.amazon.com/fms/2018-01-01/APIReference/API_PolicyOption.html">PolicyOption</a>
     * to <code>NULL</code>. </p> </li> <li> <p>Example: <code>NETWORK_FIREWALL</code>
     * - Distributed deployment model with custom Availability Zone configuration and
     * route management</p> <p>
     * <code>"{\"type\":\"NETWORK_FIREWALL\",\"networkFirewallStatelessRuleGroupReferences\":[{\"resourceARN\":\"arn:aws:network-firewall:us-east-1:123456789011:stateless-rulegroup/test\",\"priority\":1}],\"networkFirewallStatelessDefaultActions\":[\"aws:forward_to_sfe\",\"customActionName\"],\"networkFirewallStatelessFragmentDefaultActions\":[\"aws:forward_to_sfe\",\"fragmentcustomactionname\"],\"networkFirewallStatelessCustomActions\":[{\"actionName\":\"customActionName\",\"actionDefinition\":{\"publishMetricAction\":{\"dimensions\":[{\"value\":\"metricdimensionvalue\"}]}}},{\"actionName\":\"fragmentcustomactionname\",\"actionDefinition\":{\"publishMetricAction\":{\"dimensions\":[{\"value\":\"fragmentmetricdimensionvalue\"}]}}}],\"networkFirewallStatefulRuleGroupReferences\":[{\"resourceARN\":\"arn:aws:network-firewall:us-east-1:123456789011:stateful-rulegroup/test\"}],\"networkFirewallOrchestrationConfig\":{\"firewallCreationConfig\":{\"endpointLocation\":{\"availabilityZoneConfigList\":[{\"availabilityZoneName\":\"us-east-1a\",\"allowedIPV4CidrList\":[\"10.0.0.0/28\"]},{\"availabilityZoneName\":\"us-east-1b\",\"allowedIPV4CidrList\":[\"10.0.0.0/28\"]}]}},\"singleFirewallEndpointPerVPC\":false,\"allowedIPV4CidrList\":null,\"routeManagementAction\":\"MONITOR\",\"routeManagementTargetTypes\":[\"InternetGateway\"],\"routeManagementConfig\":{\"allowCrossAZTrafficIfNoEndpoint\":true}},\"networkFirewallLoggingConfiguration\":{\"logDestinationConfigs\":[{\"logDestinationType\":\"S3\",\"logType\":\"ALERT\",\"logDestination\":{\"bucketName\":\"s3-bucket-name\"}},{\"logDestinationType\":\"S3\",\"logType\":\"FLOW\",\"logDestination\":{\"bucketName\":\"s3-bucket-name\"}}],\"overrideExistingConfig\":boolean}}"
     * </code> </p> <p>To use the distributed deployment model, you must set <a
     * href="https://docs.aws.amazon.com/fms/2018-01-01/APIReference/API_PolicyOption.html">PolicyOption</a>
     * to <code>NULL</code>. </p> </li> <li> <p>Example:
     * <code>THIRD_PARTY_FIREWALL</code> </p> <p> <code>"{
     * "type":"THIRD_PARTY_FIREWALL",
     * "thirdPartyFirewall":"PALO_ALTO_NETWORKS_CLOUD_NGFW",
     * "thirdPartyFirewallConfig":{ "thirdPartyFirewallPolicyList":["global-1"] },
     * "firewallDeploymentModel":{ "distributedFirewallDeploymentModel":{
     * "distributedFirewallOrchestrationConfig":{ "firewallCreationConfig":{
     * "endpointLocation":{ "availabilityZoneConfigList":[ {
     * "availabilityZoneName":"${AvailabilityZone}" } ] } }, "allowedIPV4CidrList":[ ]
     * } } } }"</code> </p> </li> <li> <p>Example: <code>SECURITY_GROUPS_COMMON</code>
     * </p> <p>
     * <code>"{\"type\":\"SECURITY_GROUPS_COMMON\",\"revertManualSecurityGroupChanges\":false,\"exclusiveResourceSecurityGroupManagement\":false,
     * \"applyToAllEC2InstanceENIs\":false,\"securityGroups\":[{\"id\":\"
     * sg-000e55995d61a06bd\"}]}"</code> </p> </li> <li> <p>Example:
     * <code>SECURITY_GROUPS_COMMON</code> - Security group tag distribution </p> <p>
     * <code>""{\"type\":\"SECURITY_GROUPS_COMMON\",\"securityGroups\":[{\"id\":\"sg-000e55995d61a06bd\"}],\"revertManualSecurityGroupChanges\":true,\"exclusiveResourceSecurityGroupManagement\":false,\"applyToAllEC2InstanceENIs\":false,\"includeSharedVPC\":false,\"enableTagDistribution\":true}""</code>
     * </p> <p> Firewall Manager automatically distributes tags from the primary group
     * to the security groups created by this policy. To use security group tag
     * distribution, you must also set <code>revertManualSecurityGroupChanges</code> to
     * <code>true</code>, otherwise Firewall Manager won't be able to create the
     * policy. When you enable <code>revertManualSecurityGroupChanges</code>, Firewall
     * Manager identifies and reports when the security groups created by this policy
     * become non-compliant. </p> <p> Firewall Manager won't distrubute system tags
     * added by Amazon Web Services services into the replica security groups. System
     * tags begin with the <code>aws:</code> prefix. </p> </li> <li> <p>Example: Shared
     * VPCs. Apply the preceding policy to resources in shared VPCs as well as to those
     * in VPCs that the account owns </p> <p>
     * <code>"{\"type\":\"SECURITY_GROUPS_COMMON\",\"revertManualSecurityGroupChanges\":false,\"exclusiveResourceSecurityGroupManagement\":false,
     * \"applyToAllEC2InstanceENIs\":false,\"includeSharedVPC\":true,\"securityGroups\":[{\"id\":\"
     * sg-000e55995d61a06bd\"}]}"</code> </p> </li> <li> <p>Example:
     * <code>SECURITY_GROUPS_CONTENT_AUDIT</code> </p> <p>
     * <code>"{\"type\":\"SECURITY_GROUPS_CONTENT_AUDIT\",\"securityGroups\":[{\"id\":\"sg-000e55995d61a06bd\"}],\"securityGroupAction\":{\"type\":\"ALLOW\"}}"</code>
     * </p> <p>The security group action for content audit can be <code>ALLOW</code> or
     * <code>DENY</code>. For <code>ALLOW</code>, all in-scope security group rules
     * must be within the allowed range of the policy's security group rules. For
     * <code>DENY</code>, all in-scope security group rules must not contain a value or
     * a range that matches a rule value or range in the policy security group.</p>
     * </li> <li> <p>Example: <code>SECURITY_GROUPS_USAGE_AUDIT</code> </p> <p>
     * <code>"{\"type\":\"SECURITY_GROUPS_USAGE_AUDIT\",\"deleteUnusedSecurityGroups\":true,\"coalesceRedundantSecurityGroups\":true}"</code>
     * </p> </li> <li> <p>Specification for <code>SHIELD_ADVANCED</code> for Amazon
     * CloudFront distributions </p> <p>
     * <code>"{\"type\":\"SHIELD_ADVANCED\",\"automaticResponseConfiguration\":
     * {\"automaticResponseStatus\":\"ENABLED|IGNORED|DISABLED\",
     * \"automaticResponseAction\":\"BLOCK|COUNT\"},
     * \"overrideCustomerWebaclClassic\":true|false}"</code> </p> <p>For example:
     * <code>"{\"type\":\"SHIELD_ADVANCED\",\"automaticResponseConfiguration\":
     * {\"automaticResponseStatus\":\"ENABLED\",
     * \"automaticResponseAction\":\"COUNT\"}}"</code> </p> <p>The default value for
     * <code>automaticResponseStatus</code> is <code>IGNORED</code>. The value for
     * <code>automaticResponseAction</code> is only required when
     * <code>automaticResponseStatus</code> is set to <code>ENABLED</code>. The default
     * value for <code>overrideCustomerWebaclClassic</code> is <code>false</code>.</p>
     * <p>For other resource types that you can protect with a Shield Advanced policy,
     * this <code>ManagedServiceData</code> configuration is an empty string.</p> </li>
     * <li> <p>Example: <code>WAFV2</code> </p> <p>
     * <code>"{\"type\":\"WAFV2\",\"preProcessRuleGroups\":[{\"ruleGroupArn\":null,\"overrideAction\":{\"type\":\"NONE\"},\"managedRuleGroupIdentifier\":{\"version\":null,\"vendorName\":\"AWS\",\"managedRuleGroupName\":\"AWSManagedRulesAmazonIpReputationList\"},\"ruleGroupType\":\"ManagedRuleGroup\",\"excludeRules\":[{\"name\":\"NoUserAgent_HEADER\"}]}],\"postProcessRuleGroups\":[],\"defaultAction\":{\"type\":\"ALLOW\"},\"overrideCustomerWebACLAssociation\":false,\"loggingConfiguration\":{\"logDestinationConfigs\":[\"arn:aws:firehose:us-west-2:12345678912:deliverystream/aws-waf-logs-fms-admin-destination\"],\"redactedFields\":[{\"redactedFieldType\":\"SingleHeader\",\"redactedFieldValue\":\"Cookies\"},{\"redactedFieldType\":\"Method\"}]}}"</code>
     * </p> <p>In the <code>loggingConfiguration</code>, you can specify one
     * <code>logDestinationConfigs</code>, you can optionally provide up to 20
     * <code>redactedFields</code>, and the <code>RedactedFieldType</code> must be one
     * of <code>URI</code>, <code>QUERY_STRING</code>, <code>HEADER</code>, or
     * <code>METHOD</code>.</p> </li> <li> <p>Example: <code>WAFV2</code> - Firewall
     * Manager support for WAF managed rule group versioning </p> <p>
     * <code>"{\"type\":\"WAFV2\",\"preProcessRuleGroups\":[{\"ruleGroupArn\":null,\"overrideAction\":{\"type\":\"NONE\"},\"managedRuleGroupIdentifier\":{\"versionEnabled\":true,\"version\":\"Version_2.0\",\"vendorName\":\"AWS\",\"managedRuleGroupName\":\"AWSManagedRulesCommonRuleSet\"},\"ruleGroupType\":\"ManagedRuleGroup\",\"excludeRules\":[{\"name\":\"NoUserAgent_HEADER\"}]}],\"postProcessRuleGroups\":[],\"defaultAction\":{\"type\":\"ALLOW\"},\"overrideCustomerWebACLAssociation\":false,\"loggingConfiguration\":{\"logDestinationConfigs\":[\"arn:aws:firehose:us-west-2:12345678912:deliverystream/aws-waf-logs-fms-admin-destination\"],\"redactedFields\":[{\"redactedFieldType\":\"SingleHeader\",\"redactedFieldValue\":\"Cookies\"},{\"redactedFieldType\":\"Method\"}]}}"</code>
     * </p> <p> To use a specific version of a WAF managed rule group in your Firewall
     * Manager policy, you must set <code>versionEnabled</code> to <code>true</code>,
     * and set <code>version</code> to the version you'd like to use. If you don't set
     * <code>versionEnabled</code> to <code>true</code>, or if you omit
     * <code>versionEnabled</code>, then Firewall Manager uses the default version of
     * the WAF managed rule group. </p> </li> <li> <p>Example: <code>WAF Classic</code>
     * </p> <p> <code>"{\"type\": \"WAF\", \"ruleGroups\":
     * [{\"id\":\"12345678-1bcd-9012-efga-0987654321ab\", \"overrideAction\" :
     * {\"type\": \"COUNT\"}}], \"defaultAction\": {\"type\": \"BLOCK\"}}"</code> </p>
     * </li> </ul>
     */
    inline SecurityServicePolicyData& WithManagedServiceData(const Aws::String& value) { SetManagedServiceData(value); return *this;}

    /**
     * <p>Details about the service that are specific to the service type, in JSON
     * format. </p> <ul> <li> <p>Example: <code>DNS_FIREWALL</code> </p> <p>
     * <code>"{\"type\":\"DNS_FIREWALL\",\"preProcessRuleGroups\":[{\"ruleGroupId\":\"rslvr-frg-1\",\"priority\":10}],\"postProcessRuleGroups\":[{\"ruleGroupId\":\"rslvr-frg-2\",\"priority\":9911}]}"</code>
     * </p>  <p>Valid values for <code>preProcessRuleGroups</code> are between 1
     * and 99. Valid values for <code>postProcessRuleGroups</code> are between 9901 and
     * 10000.</p>  </li> <li> <p>Example: <code>NETWORK_FIREWALL</code> -
     * Centralized deployment model</p> <p>
     * <code>"{\"type\":\"NETWORK_FIREWALL\",\"awsNetworkFirewallConfig\":{\"networkFirewallStatelessRuleGroupReferences\":[{\"resourceARN\":\"arn:aws:network-firewall:us-east-1:123456789011:stateless-rulegroup/test\",\"priority\":1}],\"networkFirewallStatelessDefaultActions\":[\"aws:forward_to_sfe\",\"customActionName\"],\"networkFirewallStatelessFragmentDefaultActions\":[\"aws:forward_to_sfe\",\"customActionName\"],\"networkFirewallStatelessCustomActions\":[{\"actionName\":\"customActionName\",\"actionDefinition\":{\"publishMetricAction\":{\"dimensions\":[{\"value\":\"metricdimensionvalue\"}]}}}],\"networkFirewallStatefulRuleGroupReferences\":[{\"resourceARN\":\"arn:aws:network-firewall:us-east-1:123456789011:stateful-rulegroup/test\"}],\"networkFirewallLoggingConfiguration\":{\"logDestinationConfigs\":[{\"logDestinationType\":\"S3\",\"logType\":\"ALERT\",\"logDestination\":{\"bucketName\":\"s3-bucket-name\"}},{\"logDestinationType\":\"S3\",\"logType\":\"FLOW\",\"logDestination\":{\"bucketName\":\"s3-bucket-name\"}}],\"overrideExistingConfig\":true}},\"firewallDeploymentModel\":{\"centralizedFirewallDeploymentModel\":{\"centralizedFirewallOrchestrationConfig\":{\"inspectionVpcIds\":[{\"resourceId\":\"vpc-1234\",\"accountId\":\"123456789011\"}],\"firewallCreationConfig\":{\"endpointLocation\":{\"availabilityZoneConfigList\":[{\"availabilityZoneId\":null,\"availabilityZoneName\":\"us-east-1a\",\"allowedIPV4CidrList\":[\"10.0.0.0/28\"]}]}},\"allowedIPV4CidrList\":[]}}}}"</code>
     * </p> <p> To use the centralized deployment model, you must set <a
     * href="https://docs.aws.amazon.com/fms/2018-01-01/APIReference/API_PolicyOption.html">PolicyOption</a>
     * to <code>CENTRALIZED</code>. </p> </li> <li> <p>Example:
     * <code>NETWORK_FIREWALL</code> - Distributed deployment model with automatic
     * Availability Zone configuration</p> <p> <code>
     * "{\"type\":\"NETWORK_FIREWALL\",\"networkFirewallStatelessRuleGroupReferences\":[{\"resourceARN\":\"arn:aws:network-firewall:us-east-1:123456789011:stateless-rulegroup/test\",\"priority\":1}],\"networkFirewallStatelessDefaultActions\":[\"aws:forward_to_sfe\",\"customActionName\"],\"networkFirewallStatelessFragmentDefaultActions\":[\"aws:forward_to_sfe\",\"customActionName\"],\"networkFirewallStatelessCustomActions\":[{\"actionName\":\"customActionName\",\"actionDefinition\":{\"publishMetricAction\":{\"dimensions\":[{\"value\":\"metricdimensionvalue\"}]}}}],\"networkFirewallStatefulRuleGroupReferences\":[{\"resourceARN\":\"arn:aws:network-firewall:us-east-1:123456789011:stateful-rulegroup/test\"}],\"networkFirewallOrchestrationConfig\":{\"singleFirewallEndpointPerVPC\":false,\"allowedIPV4CidrList\":[\"10.0.0.0/28\",\"192.168.0.0/28\"],\"routeManagementAction\":\"OFF\"},\"networkFirewallLoggingConfiguration\":{\"logDestinationConfigs\":[{\"logDestinationType\":\"S3\",\"logType\":\"ALERT\",\"logDestination\":{\"bucketName\":\"s3-bucket-name\"}},{\"logDestinationType\":\"S3\",\"logType\":\"FLOW\",\"logDestination\":{\"bucketName\":\"s3-bucket-name\"}}],\"overrideExistingConfig\":true}}"
     * </code> </p> <p> With automatic Availbility Zone configuration, Firewall Manager
     * chooses which Availability Zones to create the endpoints in. To use the
     * distributed deployment model, you must set <a
     * href="https://docs.aws.amazon.com/fms/2018-01-01/APIReference/API_PolicyOption.html">PolicyOption</a>
     * to <code>NULL</code>. </p> </li> <li> <p>Example: <code>NETWORK_FIREWALL</code>
     * - Distributed deployment model with automatic Availability Zone configuration
     * and route management</p> <p> <code>
     * "{\"type\":\"NETWORK_FIREWALL\",\"networkFirewallStatelessRuleGroupReferences\":[{\"resourceARN\":\"arn:aws:network-firewall:us-east-1:123456789011:stateless-rulegroup/test\",\"priority\":1}],\"networkFirewallStatelessDefaultActions\":[\"aws:forward_to_sfe\",\"customActionName\"],\"networkFirewallStatelessFragmentDefaultActions\":[\"aws:forward_to_sfe\",\"customActionName\"],\"networkFirewallStatelessCustomActions\":[{\"actionName\":\"customActionName\",\"actionDefinition\":{\"publishMetricAction\":{\"dimensions\":[{\"value\":\"metricdimensionvalue\"}]}}}],\"networkFirewallStatefulRuleGroupReferences\":[{\"resourceARN\":\"arn:aws:network-firewall:us-east-1:123456789011:stateful-rulegroup/test\"}],\"networkFirewallOrchestrationConfig\":{\"singleFirewallEndpointPerVPC\":false,\"allowedIPV4CidrList\":[\"10.0.0.0/28\",\"192.168.0.0/28\"],\"routeManagementAction\":\"MONITOR\",\"routeManagementTargetTypes\":[\"InternetGateway\"]},\"networkFirewallLoggingConfiguration\":{\"logDestinationConfigs\":[{\"logDestinationType\":\"S3\",\"logType\":\"ALERT\",\"logDestination\":{\"bucketName\":\"s3-bucket-name\"}},{\"logDestinationType\":\"S3\",\"logType\":
     * \"FLOW\",\"logDestination\":{\"bucketName\":\"s3-bucket-name\"}}],\"overrideExistingConfig\":true}}"
     * </code> </p> <p>To use the distributed deployment model, you must set <a
     * href="https://docs.aws.amazon.com/fms/2018-01-01/APIReference/API_PolicyOption.html">PolicyOption</a>
     * to <code>NULL</code>. </p> </li> <li> <p>Example: <code>NETWORK_FIREWALL</code>
     * - Distributed deployment model with custom Availability Zone configuration</p>
     * <p>
     * <code>"{\"type\":\"NETWORK_FIREWALL\",\"networkFirewallStatelessRuleGroupReferences\":[{\"resourceARN\":\"arn:aws:network-firewall:us-east-1:123456789011:stateless-rulegroup/test\",\"priority\":1}],\"networkFirewallStatelessDefaultActions\":[\"aws:forward_to_sfe\",\"customActionName\"],\"networkFirewallStatelessFragmentDefaultActions\":[\"aws:forward_to_sfe\",\"fragmentcustomactionname\"],\"networkFirewallStatelessCustomActions\":[{\"actionName\":\"customActionName\",
     * \"actionDefinition\":{\"publishMetricAction\":{\"dimensions\":[{\"value\":\"metricdimensionvalue\"}]}}},{\"actionName\":\"fragmentcustomactionname\",\"actionDefinition\":{\"publishMetricAction\":{\"dimensions\":[{\"value\":\"fragmentmetricdimensionvalue\"}]}}}],\"networkFirewallStatefulRuleGroupReferences\":[{\"resourceARN\":\"arn:aws:network-firewall:us-east-1:123456789011:stateful-rulegroup/test\"}],\"networkFirewallOrchestrationConfig\":{\"firewallCreationConfig\":{
     * \"endpointLocation\":{\"availabilityZoneConfigList\":[{\"availabilityZoneName\":\"us-east-1a\",\"allowedIPV4CidrList\":[\"10.0.0.0/28\"]},{\"availabilityZoneName\":\"us-east-1b\",\"allowedIPV4CidrList\":[
     * \"10.0.0.0/28\"]}]}
     * },\"singleFirewallEndpointPerVPC\":false,\"allowedIPV4CidrList\":null,\"routeManagementAction\":\"OFF\",\"networkFirewallLoggingConfiguration\":{\"logDestinationConfigs\":[{\"logDestinationType\":\"S3\",\"logType\":\"ALERT\",\"logDestination\":{\"bucketName\":\"s3-bucket-name\"}},{\"logDestinationType\":\"S3\",\"logType\":\"FLOW\",\"logDestination\":{\"bucketName\":\"s3-bucket-name\"}}],\"overrideExistingConfig\":boolean}}"
     * </code> </p> <p> With custom Availability Zone configuration, you define which
     * specific Availability Zones to create endpoints in by configuring
     * <code>firewallCreationConfig</code>. To configure the Availability Zones in
     * <code>firewallCreationConfig</code>, specify either the
     * <code>availabilityZoneName</code> or <code>availabilityZoneId</code> parameter,
     * not both parameters. </p> <p>To use the distributed deployment model, you must
     * set <a
     * href="https://docs.aws.amazon.com/fms/2018-01-01/APIReference/API_PolicyOption.html">PolicyOption</a>
     * to <code>NULL</code>. </p> </li> <li> <p>Example: <code>NETWORK_FIREWALL</code>
     * - Distributed deployment model with custom Availability Zone configuration and
     * route management</p> <p>
     * <code>"{\"type\":\"NETWORK_FIREWALL\",\"networkFirewallStatelessRuleGroupReferences\":[{\"resourceARN\":\"arn:aws:network-firewall:us-east-1:123456789011:stateless-rulegroup/test\",\"priority\":1}],\"networkFirewallStatelessDefaultActions\":[\"aws:forward_to_sfe\",\"customActionName\"],\"networkFirewallStatelessFragmentDefaultActions\":[\"aws:forward_to_sfe\",\"fragmentcustomactionname\"],\"networkFirewallStatelessCustomActions\":[{\"actionName\":\"customActionName\",\"actionDefinition\":{\"publishMetricAction\":{\"dimensions\":[{\"value\":\"metricdimensionvalue\"}]}}},{\"actionName\":\"fragmentcustomactionname\",\"actionDefinition\":{\"publishMetricAction\":{\"dimensions\":[{\"value\":\"fragmentmetricdimensionvalue\"}]}}}],\"networkFirewallStatefulRuleGroupReferences\":[{\"resourceARN\":\"arn:aws:network-firewall:us-east-1:123456789011:stateful-rulegroup/test\"}],\"networkFirewallOrchestrationConfig\":{\"firewallCreationConfig\":{\"endpointLocation\":{\"availabilityZoneConfigList\":[{\"availabilityZoneName\":\"us-east-1a\",\"allowedIPV4CidrList\":[\"10.0.0.0/28\"]},{\"availabilityZoneName\":\"us-east-1b\",\"allowedIPV4CidrList\":[\"10.0.0.0/28\"]}]}},\"singleFirewallEndpointPerVPC\":false,\"allowedIPV4CidrList\":null,\"routeManagementAction\":\"MONITOR\",\"routeManagementTargetTypes\":[\"InternetGateway\"],\"routeManagementConfig\":{\"allowCrossAZTrafficIfNoEndpoint\":true}},\"networkFirewallLoggingConfiguration\":{\"logDestinationConfigs\":[{\"logDestinationType\":\"S3\",\"logType\":\"ALERT\",\"logDestination\":{\"bucketName\":\"s3-bucket-name\"}},{\"logDestinationType\":\"S3\",\"logType\":\"FLOW\",\"logDestination\":{\"bucketName\":\"s3-bucket-name\"}}],\"overrideExistingConfig\":boolean}}"
     * </code> </p> <p>To use the distributed deployment model, you must set <a
     * href="https://docs.aws.amazon.com/fms/2018-01-01/APIReference/API_PolicyOption.html">PolicyOption</a>
     * to <code>NULL</code>. </p> </li> <li> <p>Example:
     * <code>THIRD_PARTY_FIREWALL</code> </p> <p> <code>"{
     * "type":"THIRD_PARTY_FIREWALL",
     * "thirdPartyFirewall":"PALO_ALTO_NETWORKS_CLOUD_NGFW",
     * "thirdPartyFirewallConfig":{ "thirdPartyFirewallPolicyList":["global-1"] },
     * "firewallDeploymentModel":{ "distributedFirewallDeploymentModel":{
     * "distributedFirewallOrchestrationConfig":{ "firewallCreationConfig":{
     * "endpointLocation":{ "availabilityZoneConfigList":[ {
     * "availabilityZoneName":"${AvailabilityZone}" } ] } }, "allowedIPV4CidrList":[ ]
     * } } } }"</code> </p> </li> <li> <p>Example: <code>SECURITY_GROUPS_COMMON</code>
     * </p> <p>
     * <code>"{\"type\":\"SECURITY_GROUPS_COMMON\",\"revertManualSecurityGroupChanges\":false,\"exclusiveResourceSecurityGroupManagement\":false,
     * \"applyToAllEC2InstanceENIs\":false,\"securityGroups\":[{\"id\":\"
     * sg-000e55995d61a06bd\"}]}"</code> </p> </li> <li> <p>Example:
     * <code>SECURITY_GROUPS_COMMON</code> - Security group tag distribution </p> <p>
     * <code>""{\"type\":\"SECURITY_GROUPS_COMMON\",\"securityGroups\":[{\"id\":\"sg-000e55995d61a06bd\"}],\"revertManualSecurityGroupChanges\":true,\"exclusiveResourceSecurityGroupManagement\":false,\"applyToAllEC2InstanceENIs\":false,\"includeSharedVPC\":false,\"enableTagDistribution\":true}""</code>
     * </p> <p> Firewall Manager automatically distributes tags from the primary group
     * to the security groups created by this policy. To use security group tag
     * distribution, you must also set <code>revertManualSecurityGroupChanges</code> to
     * <code>true</code>, otherwise Firewall Manager won't be able to create the
     * policy. When you enable <code>revertManualSecurityGroupChanges</code>, Firewall
     * Manager identifies and reports when the security groups created by this policy
     * become non-compliant. </p> <p> Firewall Manager won't distrubute system tags
     * added by Amazon Web Services services into the replica security groups. System
     * tags begin with the <code>aws:</code> prefix. </p> </li> <li> <p>Example: Shared
     * VPCs. Apply the preceding policy to resources in shared VPCs as well as to those
     * in VPCs that the account owns </p> <p>
     * <code>"{\"type\":\"SECURITY_GROUPS_COMMON\",\"revertManualSecurityGroupChanges\":false,\"exclusiveResourceSecurityGroupManagement\":false,
     * \"applyToAllEC2InstanceENIs\":false,\"includeSharedVPC\":true,\"securityGroups\":[{\"id\":\"
     * sg-000e55995d61a06bd\"}]}"</code> </p> </li> <li> <p>Example:
     * <code>SECURITY_GROUPS_CONTENT_AUDIT</code> </p> <p>
     * <code>"{\"type\":\"SECURITY_GROUPS_CONTENT_AUDIT\",\"securityGroups\":[{\"id\":\"sg-000e55995d61a06bd\"}],\"securityGroupAction\":{\"type\":\"ALLOW\"}}"</code>
     * </p> <p>The security group action for content audit can be <code>ALLOW</code> or
     * <code>DENY</code>. For <code>ALLOW</code>, all in-scope security group rules
     * must be within the allowed range of the policy's security group rules. For
     * <code>DENY</code>, all in-scope security group rules must not contain a value or
     * a range that matches a rule value or range in the policy security group.</p>
     * </li> <li> <p>Example: <code>SECURITY_GROUPS_USAGE_AUDIT</code> </p> <p>
     * <code>"{\"type\":\"SECURITY_GROUPS_USAGE_AUDIT\",\"deleteUnusedSecurityGroups\":true,\"coalesceRedundantSecurityGroups\":true}"</code>
     * </p> </li> <li> <p>Specification for <code>SHIELD_ADVANCED</code> for Amazon
     * CloudFront distributions </p> <p>
     * <code>"{\"type\":\"SHIELD_ADVANCED\",\"automaticResponseConfiguration\":
     * {\"automaticResponseStatus\":\"ENABLED|IGNORED|DISABLED\",
     * \"automaticResponseAction\":\"BLOCK|COUNT\"},
     * \"overrideCustomerWebaclClassic\":true|false}"</code> </p> <p>For example:
     * <code>"{\"type\":\"SHIELD_ADVANCED\",\"automaticResponseConfiguration\":
     * {\"automaticResponseStatus\":\"ENABLED\",
     * \"automaticResponseAction\":\"COUNT\"}}"</code> </p> <p>The default value for
     * <code>automaticResponseStatus</code> is <code>IGNORED</code>. The value for
     * <code>automaticResponseAction</code> is only required when
     * <code>automaticResponseStatus</code> is set to <code>ENABLED</code>. The default
     * value for <code>overrideCustomerWebaclClassic</code> is <code>false</code>.</p>
     * <p>For other resource types that you can protect with a Shield Advanced policy,
     * this <code>ManagedServiceData</code> configuration is an empty string.</p> </li>
     * <li> <p>Example: <code>WAFV2</code> </p> <p>
     * <code>"{\"type\":\"WAFV2\",\"preProcessRuleGroups\":[{\"ruleGroupArn\":null,\"overrideAction\":{\"type\":\"NONE\"},\"managedRuleGroupIdentifier\":{\"version\":null,\"vendorName\":\"AWS\",\"managedRuleGroupName\":\"AWSManagedRulesAmazonIpReputationList\"},\"ruleGroupType\":\"ManagedRuleGroup\",\"excludeRules\":[{\"name\":\"NoUserAgent_HEADER\"}]}],\"postProcessRuleGroups\":[],\"defaultAction\":{\"type\":\"ALLOW\"},\"overrideCustomerWebACLAssociation\":false,\"loggingConfiguration\":{\"logDestinationConfigs\":[\"arn:aws:firehose:us-west-2:12345678912:deliverystream/aws-waf-logs-fms-admin-destination\"],\"redactedFields\":[{\"redactedFieldType\":\"SingleHeader\",\"redactedFieldValue\":\"Cookies\"},{\"redactedFieldType\":\"Method\"}]}}"</code>
     * </p> <p>In the <code>loggingConfiguration</code>, you can specify one
     * <code>logDestinationConfigs</code>, you can optionally provide up to 20
     * <code>redactedFields</code>, and the <code>RedactedFieldType</code> must be one
     * of <code>URI</code>, <code>QUERY_STRING</code>, <code>HEADER</code>, or
     * <code>METHOD</code>.</p> </li> <li> <p>Example: <code>WAFV2</code> - Firewall
     * Manager support for WAF managed rule group versioning </p> <p>
     * <code>"{\"type\":\"WAFV2\",\"preProcessRuleGroups\":[{\"ruleGroupArn\":null,\"overrideAction\":{\"type\":\"NONE\"},\"managedRuleGroupIdentifier\":{\"versionEnabled\":true,\"version\":\"Version_2.0\",\"vendorName\":\"AWS\",\"managedRuleGroupName\":\"AWSManagedRulesCommonRuleSet\"},\"ruleGroupType\":\"ManagedRuleGroup\",\"excludeRules\":[{\"name\":\"NoUserAgent_HEADER\"}]}],\"postProcessRuleGroups\":[],\"defaultAction\":{\"type\":\"ALLOW\"},\"overrideCustomerWebACLAssociation\":false,\"loggingConfiguration\":{\"logDestinationConfigs\":[\"arn:aws:firehose:us-west-2:12345678912:deliverystream/aws-waf-logs-fms-admin-destination\"],\"redactedFields\":[{\"redactedFieldType\":\"SingleHeader\",\"redactedFieldValue\":\"Cookies\"},{\"redactedFieldType\":\"Method\"}]}}"</code>
     * </p> <p> To use a specific version of a WAF managed rule group in your Firewall
     * Manager policy, you must set <code>versionEnabled</code> to <code>true</code>,
     * and set <code>version</code> to the version you'd like to use. If you don't set
     * <code>versionEnabled</code> to <code>true</code>, or if you omit
     * <code>versionEnabled</code>, then Firewall Manager uses the default version of
     * the WAF managed rule group. </p> </li> <li> <p>Example: <code>WAF Classic</code>
     * </p> <p> <code>"{\"type\": \"WAF\", \"ruleGroups\":
     * [{\"id\":\"12345678-1bcd-9012-efga-0987654321ab\", \"overrideAction\" :
     * {\"type\": \"COUNT\"}}], \"defaultAction\": {\"type\": \"BLOCK\"}}"</code> </p>
     * </li> </ul>
     */
    inline SecurityServicePolicyData& WithManagedServiceData(Aws::String&& value) { SetManagedServiceData(std::move(value)); return *this;}

    /**
     * <p>Details about the service that are specific to the service type, in JSON
     * format. </p> <ul> <li> <p>Example: <code>DNS_FIREWALL</code> </p> <p>
     * <code>"{\"type\":\"DNS_FIREWALL\",\"preProcessRuleGroups\":[{\"ruleGroupId\":\"rslvr-frg-1\",\"priority\":10}],\"postProcessRuleGroups\":[{\"ruleGroupId\":\"rslvr-frg-2\",\"priority\":9911}]}"</code>
     * </p>  <p>Valid values for <code>preProcessRuleGroups</code> are between 1
     * and 99. Valid values for <code>postProcessRuleGroups</code> are between 9901 and
     * 10000.</p>  </li> <li> <p>Example: <code>NETWORK_FIREWALL</code> -
     * Centralized deployment model</p> <p>
     * <code>"{\"type\":\"NETWORK_FIREWALL\",\"awsNetworkFirewallConfig\":{\"networkFirewallStatelessRuleGroupReferences\":[{\"resourceARN\":\"arn:aws:network-firewall:us-east-1:123456789011:stateless-rulegroup/test\",\"priority\":1}],\"networkFirewallStatelessDefaultActions\":[\"aws:forward_to_sfe\",\"customActionName\"],\"networkFirewallStatelessFragmentDefaultActions\":[\"aws:forward_to_sfe\",\"customActionName\"],\"networkFirewallStatelessCustomActions\":[{\"actionName\":\"customActionName\",\"actionDefinition\":{\"publishMetricAction\":{\"dimensions\":[{\"value\":\"metricdimensionvalue\"}]}}}],\"networkFirewallStatefulRuleGroupReferences\":[{\"resourceARN\":\"arn:aws:network-firewall:us-east-1:123456789011:stateful-rulegroup/test\"}],\"networkFirewallLoggingConfiguration\":{\"logDestinationConfigs\":[{\"logDestinationType\":\"S3\",\"logType\":\"ALERT\",\"logDestination\":{\"bucketName\":\"s3-bucket-name\"}},{\"logDestinationType\":\"S3\",\"logType\":\"FLOW\",\"logDestination\":{\"bucketName\":\"s3-bucket-name\"}}],\"overrideExistingConfig\":true}},\"firewallDeploymentModel\":{\"centralizedFirewallDeploymentModel\":{\"centralizedFirewallOrchestrationConfig\":{\"inspectionVpcIds\":[{\"resourceId\":\"vpc-1234\",\"accountId\":\"123456789011\"}],\"firewallCreationConfig\":{\"endpointLocation\":{\"availabilityZoneConfigList\":[{\"availabilityZoneId\":null,\"availabilityZoneName\":\"us-east-1a\",\"allowedIPV4CidrList\":[\"10.0.0.0/28\"]}]}},\"allowedIPV4CidrList\":[]}}}}"</code>
     * </p> <p> To use the centralized deployment model, you must set <a
     * href="https://docs.aws.amazon.com/fms/2018-01-01/APIReference/API_PolicyOption.html">PolicyOption</a>
     * to <code>CENTRALIZED</code>. </p> </li> <li> <p>Example:
     * <code>NETWORK_FIREWALL</code> - Distributed deployment model with automatic
     * Availability Zone configuration</p> <p> <code>
     * "{\"type\":\"NETWORK_FIREWALL\",\"networkFirewallStatelessRuleGroupReferences\":[{\"resourceARN\":\"arn:aws:network-firewall:us-east-1:123456789011:stateless-rulegroup/test\",\"priority\":1}],\"networkFirewallStatelessDefaultActions\":[\"aws:forward_to_sfe\",\"customActionName\"],\"networkFirewallStatelessFragmentDefaultActions\":[\"aws:forward_to_sfe\",\"customActionName\"],\"networkFirewallStatelessCustomActions\":[{\"actionName\":\"customActionName\",\"actionDefinition\":{\"publishMetricAction\":{\"dimensions\":[{\"value\":\"metricdimensionvalue\"}]}}}],\"networkFirewallStatefulRuleGroupReferences\":[{\"resourceARN\":\"arn:aws:network-firewall:us-east-1:123456789011:stateful-rulegroup/test\"}],\"networkFirewallOrchestrationConfig\":{\"singleFirewallEndpointPerVPC\":false,\"allowedIPV4CidrList\":[\"10.0.0.0/28\",\"192.168.0.0/28\"],\"routeManagementAction\":\"OFF\"},\"networkFirewallLoggingConfiguration\":{\"logDestinationConfigs\":[{\"logDestinationType\":\"S3\",\"logType\":\"ALERT\",\"logDestination\":{\"bucketName\":\"s3-bucket-name\"}},{\"logDestinationType\":\"S3\",\"logType\":\"FLOW\",\"logDestination\":{\"bucketName\":\"s3-bucket-name\"}}],\"overrideExistingConfig\":true}}"
     * </code> </p> <p> With automatic Availbility Zone configuration, Firewall Manager
     * chooses which Availability Zones to create the endpoints in. To use the
     * distributed deployment model, you must set <a
     * href="https://docs.aws.amazon.com/fms/2018-01-01/APIReference/API_PolicyOption.html">PolicyOption</a>
     * to <code>NULL</code>. </p> </li> <li> <p>Example: <code>NETWORK_FIREWALL</code>
     * - Distributed deployment model with automatic Availability Zone configuration
     * and route management</p> <p> <code>
     * "{\"type\":\"NETWORK_FIREWALL\",\"networkFirewallStatelessRuleGroupReferences\":[{\"resourceARN\":\"arn:aws:network-firewall:us-east-1:123456789011:stateless-rulegroup/test\",\"priority\":1}],\"networkFirewallStatelessDefaultActions\":[\"aws:forward_to_sfe\",\"customActionName\"],\"networkFirewallStatelessFragmentDefaultActions\":[\"aws:forward_to_sfe\",\"customActionName\"],\"networkFirewallStatelessCustomActions\":[{\"actionName\":\"customActionName\",\"actionDefinition\":{\"publishMetricAction\":{\"dimensions\":[{\"value\":\"metricdimensionvalue\"}]}}}],\"networkFirewallStatefulRuleGroupReferences\":[{\"resourceARN\":\"arn:aws:network-firewall:us-east-1:123456789011:stateful-rulegroup/test\"}],\"networkFirewallOrchestrationConfig\":{\"singleFirewallEndpointPerVPC\":false,\"allowedIPV4CidrList\":[\"10.0.0.0/28\",\"192.168.0.0/28\"],\"routeManagementAction\":\"MONITOR\",\"routeManagementTargetTypes\":[\"InternetGateway\"]},\"networkFirewallLoggingConfiguration\":{\"logDestinationConfigs\":[{\"logDestinationType\":\"S3\",\"logType\":\"ALERT\",\"logDestination\":{\"bucketName\":\"s3-bucket-name\"}},{\"logDestinationType\":\"S3\",\"logType\":
     * \"FLOW\",\"logDestination\":{\"bucketName\":\"s3-bucket-name\"}}],\"overrideExistingConfig\":true}}"
     * </code> </p> <p>To use the distributed deployment model, you must set <a
     * href="https://docs.aws.amazon.com/fms/2018-01-01/APIReference/API_PolicyOption.html">PolicyOption</a>
     * to <code>NULL</code>. </p> </li> <li> <p>Example: <code>NETWORK_FIREWALL</code>
     * - Distributed deployment model with custom Availability Zone configuration</p>
     * <p>
     * <code>"{\"type\":\"NETWORK_FIREWALL\",\"networkFirewallStatelessRuleGroupReferences\":[{\"resourceARN\":\"arn:aws:network-firewall:us-east-1:123456789011:stateless-rulegroup/test\",\"priority\":1}],\"networkFirewallStatelessDefaultActions\":[\"aws:forward_to_sfe\",\"customActionName\"],\"networkFirewallStatelessFragmentDefaultActions\":[\"aws:forward_to_sfe\",\"fragmentcustomactionname\"],\"networkFirewallStatelessCustomActions\":[{\"actionName\":\"customActionName\",
     * \"actionDefinition\":{\"publishMetricAction\":{\"dimensions\":[{\"value\":\"metricdimensionvalue\"}]}}},{\"actionName\":\"fragmentcustomactionname\",\"actionDefinition\":{\"publishMetricAction\":{\"dimensions\":[{\"value\":\"fragmentmetricdimensionvalue\"}]}}}],\"networkFirewallStatefulRuleGroupReferences\":[{\"resourceARN\":\"arn:aws:network-firewall:us-east-1:123456789011:stateful-rulegroup/test\"}],\"networkFirewallOrchestrationConfig\":{\"firewallCreationConfig\":{
     * \"endpointLocation\":{\"availabilityZoneConfigList\":[{\"availabilityZoneName\":\"us-east-1a\",\"allowedIPV4CidrList\":[\"10.0.0.0/28\"]},{\"availabilityZoneName\":\"us-east-1b\",\"allowedIPV4CidrList\":[
     * \"10.0.0.0/28\"]}]}
     * },\"singleFirewallEndpointPerVPC\":false,\"allowedIPV4CidrList\":null,\"routeManagementAction\":\"OFF\",\"networkFirewallLoggingConfiguration\":{\"logDestinationConfigs\":[{\"logDestinationType\":\"S3\",\"logType\":\"ALERT\",\"logDestination\":{\"bucketName\":\"s3-bucket-name\"}},{\"logDestinationType\":\"S3\",\"logType\":\"FLOW\",\"logDestination\":{\"bucketName\":\"s3-bucket-name\"}}],\"overrideExistingConfig\":boolean}}"
     * </code> </p> <p> With custom Availability Zone configuration, you define which
     * specific Availability Zones to create endpoints in by configuring
     * <code>firewallCreationConfig</code>. To configure the Availability Zones in
     * <code>firewallCreationConfig</code>, specify either the
     * <code>availabilityZoneName</code> or <code>availabilityZoneId</code> parameter,
     * not both parameters. </p> <p>To use the distributed deployment model, you must
     * set <a
     * href="https://docs.aws.amazon.com/fms/2018-01-01/APIReference/API_PolicyOption.html">PolicyOption</a>
     * to <code>NULL</code>. </p> </li> <li> <p>Example: <code>NETWORK_FIREWALL</code>
     * - Distributed deployment model with custom Availability Zone configuration and
     * route management</p> <p>
     * <code>"{\"type\":\"NETWORK_FIREWALL\",\"networkFirewallStatelessRuleGroupReferences\":[{\"resourceARN\":\"arn:aws:network-firewall:us-east-1:123456789011:stateless-rulegroup/test\",\"priority\":1}],\"networkFirewallStatelessDefaultActions\":[\"aws:forward_to_sfe\",\"customActionName\"],\"networkFirewallStatelessFragmentDefaultActions\":[\"aws:forward_to_sfe\",\"fragmentcustomactionname\"],\"networkFirewallStatelessCustomActions\":[{\"actionName\":\"customActionName\",\"actionDefinition\":{\"publishMetricAction\":{\"dimensions\":[{\"value\":\"metricdimensionvalue\"}]}}},{\"actionName\":\"fragmentcustomactionname\",\"actionDefinition\":{\"publishMetricAction\":{\"dimensions\":[{\"value\":\"fragmentmetricdimensionvalue\"}]}}}],\"networkFirewallStatefulRuleGroupReferences\":[{\"resourceARN\":\"arn:aws:network-firewall:us-east-1:123456789011:stateful-rulegroup/test\"}],\"networkFirewallOrchestrationConfig\":{\"firewallCreationConfig\":{\"endpointLocation\":{\"availabilityZoneConfigList\":[{\"availabilityZoneName\":\"us-east-1a\",\"allowedIPV4CidrList\":[\"10.0.0.0/28\"]},{\"availabilityZoneName\":\"us-east-1b\",\"allowedIPV4CidrList\":[\"10.0.0.0/28\"]}]}},\"singleFirewallEndpointPerVPC\":false,\"allowedIPV4CidrList\":null,\"routeManagementAction\":\"MONITOR\",\"routeManagementTargetTypes\":[\"InternetGateway\"],\"routeManagementConfig\":{\"allowCrossAZTrafficIfNoEndpoint\":true}},\"networkFirewallLoggingConfiguration\":{\"logDestinationConfigs\":[{\"logDestinationType\":\"S3\",\"logType\":\"ALERT\",\"logDestination\":{\"bucketName\":\"s3-bucket-name\"}},{\"logDestinationType\":\"S3\",\"logType\":\"FLOW\",\"logDestination\":{\"bucketName\":\"s3-bucket-name\"}}],\"overrideExistingConfig\":boolean}}"
     * </code> </p> <p>To use the distributed deployment model, you must set <a
     * href="https://docs.aws.amazon.com/fms/2018-01-01/APIReference/API_PolicyOption.html">PolicyOption</a>
     * to <code>NULL</code>. </p> </li> <li> <p>Example:
     * <code>THIRD_PARTY_FIREWALL</code> </p> <p> <code>"{
     * "type":"THIRD_PARTY_FIREWALL",
     * "thirdPartyFirewall":"PALO_ALTO_NETWORKS_CLOUD_NGFW",
     * "thirdPartyFirewallConfig":{ "thirdPartyFirewallPolicyList":["global-1"] },
     * "firewallDeploymentModel":{ "distributedFirewallDeploymentModel":{
     * "distributedFirewallOrchestrationConfig":{ "firewallCreationConfig":{
     * "endpointLocation":{ "availabilityZoneConfigList":[ {
     * "availabilityZoneName":"${AvailabilityZone}" } ] } }, "allowedIPV4CidrList":[ ]
     * } } } }"</code> </p> </li> <li> <p>Example: <code>SECURITY_GROUPS_COMMON</code>
     * </p> <p>
     * <code>"{\"type\":\"SECURITY_GROUPS_COMMON\",\"revertManualSecurityGroupChanges\":false,\"exclusiveResourceSecurityGroupManagement\":false,
     * \"applyToAllEC2InstanceENIs\":false,\"securityGroups\":[{\"id\":\"
     * sg-000e55995d61a06bd\"}]}"</code> </p> </li> <li> <p>Example:
     * <code>SECURITY_GROUPS_COMMON</code> - Security group tag distribution </p> <p>
     * <code>""{\"type\":\"SECURITY_GROUPS_COMMON\",\"securityGroups\":[{\"id\":\"sg-000e55995d61a06bd\"}],\"revertManualSecurityGroupChanges\":true,\"exclusiveResourceSecurityGroupManagement\":false,\"applyToAllEC2InstanceENIs\":false,\"includeSharedVPC\":false,\"enableTagDistribution\":true}""</code>
     * </p> <p> Firewall Manager automatically distributes tags from the primary group
     * to the security groups created by this policy. To use security group tag
     * distribution, you must also set <code>revertManualSecurityGroupChanges</code> to
     * <code>true</code>, otherwise Firewall Manager won't be able to create the
     * policy. When you enable <code>revertManualSecurityGroupChanges</code>, Firewall
     * Manager identifies and reports when the security groups created by this policy
     * become non-compliant. </p> <p> Firewall Manager won't distrubute system tags
     * added by Amazon Web Services services into the replica security groups. System
     * tags begin with the <code>aws:</code> prefix. </p> </li> <li> <p>Example: Shared
     * VPCs. Apply the preceding policy to resources in shared VPCs as well as to those
     * in VPCs that the account owns </p> <p>
     * <code>"{\"type\":\"SECURITY_GROUPS_COMMON\",\"revertManualSecurityGroupChanges\":false,\"exclusiveResourceSecurityGroupManagement\":false,
     * \"applyToAllEC2InstanceENIs\":false,\"includeSharedVPC\":true,\"securityGroups\":[{\"id\":\"
     * sg-000e55995d61a06bd\"}]}"</code> </p> </li> <li> <p>Example:
     * <code>SECURITY_GROUPS_CONTENT_AUDIT</code> </p> <p>
     * <code>"{\"type\":\"SECURITY_GROUPS_CONTENT_AUDIT\",\"securityGroups\":[{\"id\":\"sg-000e55995d61a06bd\"}],\"securityGroupAction\":{\"type\":\"ALLOW\"}}"</code>
     * </p> <p>The security group action for content audit can be <code>ALLOW</code> or
     * <code>DENY</code>. For <code>ALLOW</code>, all in-scope security group rules
     * must be within the allowed range of the policy's security group rules. For
     * <code>DENY</code>, all in-scope security group rules must not contain a value or
     * a range that matches a rule value or range in the policy security group.</p>
     * </li> <li> <p>Example: <code>SECURITY_GROUPS_USAGE_AUDIT</code> </p> <p>
     * <code>"{\"type\":\"SECURITY_GROUPS_USAGE_AUDIT\",\"deleteUnusedSecurityGroups\":true,\"coalesceRedundantSecurityGroups\":true}"</code>
     * </p> </li> <li> <p>Specification for <code>SHIELD_ADVANCED</code> for Amazon
     * CloudFront distributions </p> <p>
     * <code>"{\"type\":\"SHIELD_ADVANCED\",\"automaticResponseConfiguration\":
     * {\"automaticResponseStatus\":\"ENABLED|IGNORED|DISABLED\",
     * \"automaticResponseAction\":\"BLOCK|COUNT\"},
     * \"overrideCustomerWebaclClassic\":true|false}"</code> </p> <p>For example:
     * <code>"{\"type\":\"SHIELD_ADVANCED\",\"automaticResponseConfiguration\":
     * {\"automaticResponseStatus\":\"ENABLED\",
     * \"automaticResponseAction\":\"COUNT\"}}"</code> </p> <p>The default value for
     * <code>automaticResponseStatus</code> is <code>IGNORED</code>. The value for
     * <code>automaticResponseAction</code> is only required when
     * <code>automaticResponseStatus</code> is set to <code>ENABLED</code>. The default
     * value for <code>overrideCustomerWebaclClassic</code> is <code>false</code>.</p>
     * <p>For other resource types that you can protect with a Shield Advanced policy,
     * this <code>ManagedServiceData</code> configuration is an empty string.</p> </li>
     * <li> <p>Example: <code>WAFV2</code> </p> <p>
     * <code>"{\"type\":\"WAFV2\",\"preProcessRuleGroups\":[{\"ruleGroupArn\":null,\"overrideAction\":{\"type\":\"NONE\"},\"managedRuleGroupIdentifier\":{\"version\":null,\"vendorName\":\"AWS\",\"managedRuleGroupName\":\"AWSManagedRulesAmazonIpReputationList\"},\"ruleGroupType\":\"ManagedRuleGroup\",\"excludeRules\":[{\"name\":\"NoUserAgent_HEADER\"}]}],\"postProcessRuleGroups\":[],\"defaultAction\":{\"type\":\"ALLOW\"},\"overrideCustomerWebACLAssociation\":false,\"loggingConfiguration\":{\"logDestinationConfigs\":[\"arn:aws:firehose:us-west-2:12345678912:deliverystream/aws-waf-logs-fms-admin-destination\"],\"redactedFields\":[{\"redactedFieldType\":\"SingleHeader\",\"redactedFieldValue\":\"Cookies\"},{\"redactedFieldType\":\"Method\"}]}}"</code>
     * </p> <p>In the <code>loggingConfiguration</code>, you can specify one
     * <code>logDestinationConfigs</code>, you can optionally provide up to 20
     * <code>redactedFields</code>, and the <code>RedactedFieldType</code> must be one
     * of <code>URI</code>, <code>QUERY_STRING</code>, <code>HEADER</code>, or
     * <code>METHOD</code>.</p> </li> <li> <p>Example: <code>WAFV2</code> - Firewall
     * Manager support for WAF managed rule group versioning </p> <p>
     * <code>"{\"type\":\"WAFV2\",\"preProcessRuleGroups\":[{\"ruleGroupArn\":null,\"overrideAction\":{\"type\":\"NONE\"},\"managedRuleGroupIdentifier\":{\"versionEnabled\":true,\"version\":\"Version_2.0\",\"vendorName\":\"AWS\",\"managedRuleGroupName\":\"AWSManagedRulesCommonRuleSet\"},\"ruleGroupType\":\"ManagedRuleGroup\",\"excludeRules\":[{\"name\":\"NoUserAgent_HEADER\"}]}],\"postProcessRuleGroups\":[],\"defaultAction\":{\"type\":\"ALLOW\"},\"overrideCustomerWebACLAssociation\":false,\"loggingConfiguration\":{\"logDestinationConfigs\":[\"arn:aws:firehose:us-west-2:12345678912:deliverystream/aws-waf-logs-fms-admin-destination\"],\"redactedFields\":[{\"redactedFieldType\":\"SingleHeader\",\"redactedFieldValue\":\"Cookies\"},{\"redactedFieldType\":\"Method\"}]}}"</code>
     * </p> <p> To use a specific version of a WAF managed rule group in your Firewall
     * Manager policy, you must set <code>versionEnabled</code> to <code>true</code>,
     * and set <code>version</code> to the version you'd like to use. If you don't set
     * <code>versionEnabled</code> to <code>true</code>, or if you omit
     * <code>versionEnabled</code>, then Firewall Manager uses the default version of
     * the WAF managed rule group. </p> </li> <li> <p>Example: <code>WAF Classic</code>
     * </p> <p> <code>"{\"type\": \"WAF\", \"ruleGroups\":
     * [{\"id\":\"12345678-1bcd-9012-efga-0987654321ab\", \"overrideAction\" :
     * {\"type\": \"COUNT\"}}], \"defaultAction\": {\"type\": \"BLOCK\"}}"</code> </p>
     * </li> </ul>
     */
    inline SecurityServicePolicyData& WithManagedServiceData(const char* value) { SetManagedServiceData(value); return *this;}


    /**
     * <p>Contains the Network Firewall firewall policy options to configure a
     * centralized deployment model.</p>
     */
    inline const PolicyOption& GetPolicyOption() const{ return m_policyOption; }

    /**
     * <p>Contains the Network Firewall firewall policy options to configure a
     * centralized deployment model.</p>
     */
    inline bool PolicyOptionHasBeenSet() const { return m_policyOptionHasBeenSet; }

    /**
     * <p>Contains the Network Firewall firewall policy options to configure a
     * centralized deployment model.</p>
     */
    inline void SetPolicyOption(const PolicyOption& value) { m_policyOptionHasBeenSet = true; m_policyOption = value; }

    /**
     * <p>Contains the Network Firewall firewall policy options to configure a
     * centralized deployment model.</p>
     */
    inline void SetPolicyOption(PolicyOption&& value) { m_policyOptionHasBeenSet = true; m_policyOption = std::move(value); }

    /**
     * <p>Contains the Network Firewall firewall policy options to configure a
     * centralized deployment model.</p>
     */
    inline SecurityServicePolicyData& WithPolicyOption(const PolicyOption& value) { SetPolicyOption(value); return *this;}

    /**
     * <p>Contains the Network Firewall firewall policy options to configure a
     * centralized deployment model.</p>
     */
    inline SecurityServicePolicyData& WithPolicyOption(PolicyOption&& value) { SetPolicyOption(std::move(value)); return *this;}

  private:

    SecurityServiceType m_type;
    bool m_typeHasBeenSet = false;

    Aws::String m_managedServiceData;
    bool m_managedServiceDataHasBeenSet = false;

    PolicyOption m_policyOption;
    bool m_policyOptionHasBeenSet = false;
  };

} // namespace Model
} // namespace FMS
} // namespace Aws
