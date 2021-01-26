/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/fms/FMS_EXPORTS.h>
#include <aws/fms/model/SecurityServiceType.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
  class AWS_FMS_API SecurityServicePolicyData
  {
  public:
    SecurityServicePolicyData();
    SecurityServicePolicyData(Aws::Utils::Json::JsonView jsonValue);
    SecurityServicePolicyData& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The service that the policy is using to protect the resources. This specifies
     * the type of policy that is created, either an AWS WAF policy, a Shield Advanced
     * policy, or a security group policy. For security group policies, Firewall
     * Manager supports one security group for each common policy and for each content
     * audit policy. This is an adjustable limit that you can increase by contacting
     * AWS Support.</p>
     */
    inline const SecurityServiceType& GetType() const{ return m_type; }

    /**
     * <p>The service that the policy is using to protect the resources. This specifies
     * the type of policy that is created, either an AWS WAF policy, a Shield Advanced
     * policy, or a security group policy. For security group policies, Firewall
     * Manager supports one security group for each common policy and for each content
     * audit policy. This is an adjustable limit that you can increase by contacting
     * AWS Support.</p>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p>The service that the policy is using to protect the resources. This specifies
     * the type of policy that is created, either an AWS WAF policy, a Shield Advanced
     * policy, or a security group policy. For security group policies, Firewall
     * Manager supports one security group for each common policy and for each content
     * audit policy. This is an adjustable limit that you can increase by contacting
     * AWS Support.</p>
     */
    inline void SetType(const SecurityServiceType& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>The service that the policy is using to protect the resources. This specifies
     * the type of policy that is created, either an AWS WAF policy, a Shield Advanced
     * policy, or a security group policy. For security group policies, Firewall
     * Manager supports one security group for each common policy and for each content
     * audit policy. This is an adjustable limit that you can increase by contacting
     * AWS Support.</p>
     */
    inline void SetType(SecurityServiceType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p>The service that the policy is using to protect the resources. This specifies
     * the type of policy that is created, either an AWS WAF policy, a Shield Advanced
     * policy, or a security group policy. For security group policies, Firewall
     * Manager supports one security group for each common policy and for each content
     * audit policy. This is an adjustable limit that you can increase by contacting
     * AWS Support.</p>
     */
    inline SecurityServicePolicyData& WithType(const SecurityServiceType& value) { SetType(value); return *this;}

    /**
     * <p>The service that the policy is using to protect the resources. This specifies
     * the type of policy that is created, either an AWS WAF policy, a Shield Advanced
     * policy, or a security group policy. For security group policies, Firewall
     * Manager supports one security group for each common policy and for each content
     * audit policy. This is an adjustable limit that you can increase by contacting
     * AWS Support.</p>
     */
    inline SecurityServicePolicyData& WithType(SecurityServiceType&& value) { SetType(std::move(value)); return *this;}


    /**
     * <p>Details about the service that are specific to the service type, in JSON
     * format. For service type <code>SHIELD_ADVANCED</code>, this is an empty
     * string.</p> <ul> <li> <p>Example: <code>NETWORK_FIREWALL</code> </p> <p>
     * <code>"{\"type\":\"NETWORK_FIREWALL\",\"networkFirewallStatelessRuleGroupReferences\":[{\"resourceARN\":\"arn:aws:network-firewall:us-west-1:1234567891011:stateless-rulegroup/rulegroup2\",\"priority\":10}],\"networkFirewallStatelessDefaultActions\":[\"aws:pass\",\"custom1\"],\"networkFirewallStatelessFragmentDefaultActions\":[\"custom2\",\"aws:pass\"],\"networkFirewallStatelessCustomActions\":[{\"actionName\":\"custom1\",\"actionDefinition\":{\"publishMetricAction\":{\"dimensions\":[{\"value\":\"dimension1\"}]}}},{\"actionName\":\"custom2\",\"actionDefinition\":{\"publishMetricAction\":{\"dimensions\":[{\"value\":\"dimension2\"}]}}}],\"networkFirewallStatefulRuleGroupReferences\":[{\"resourceARN\":\"arn:aws:network-firewall:us-west-1:1234567891011:stateful-rulegroup/rulegroup1\"}],\"networkFirewallOrchestrationConfig\":{\"singleFirewallEndpointPerVPC\":true,\"allowedIPV4CidrList\":[\"10.24.34.0/28\"]}
     * }"</code> </p> </li> <li> <p>Example: <code>WAFV2</code> </p> <p>
     * <code>"{\"type\":\"WAFV2\",\"preProcessRuleGroups\":[{\"ruleGroupArn\":null,\"overrideAction\":{\"type\":\"NONE\"},\"managedRuleGroupIdentifier\":{\"version\":null,\"vendorName\":\"AWS\",\"managedRuleGroupName\":\"AWSManagedRulesAmazonIpReputationList\"},\"ruleGroupType\":\"ManagedRuleGroup\",\"excludeRules\":[]}],\"postProcessRuleGroups\":[],\"defaultAction\":{\"type\":\"ALLOW\"},\"overrideCustomerWebACLAssociation\":false,\"loggingConfiguration\":{\"logDestinationConfigs\":[\"arn:aws:firehose:us-west-2:12345678912:deliverystream/aws-waf-logs-fms-admin-destination\"],\"redactedFields\":[{\"redactedFieldType\":\"SingleHeader\",\"redactedFieldValue\":\"Cookies\"},{\"redactedFieldType\":\"Method\"}]}}"</code>
     * </p> <p>In the <code>loggingConfiguration</code>, you can specify one
     * <code>logDestinationConfigs</code>, you can optionally provide up to 20
     * <code>redactedFields</code>, and the <code>RedactedFieldType</code> must be one
     * of <code>URI</code>, <code>QUERY_STRING</code>, <code>HEADER</code>, or
     * <code>METHOD</code>.</p> </li> <li> <p>Example: <code>WAF Classic</code> </p>
     * <p> <code>"{\"type\": \"WAF\", \"ruleGroups\":
     * [{\"id\":\"12345678-1bcd-9012-efga-0987654321ab\", \"overrideAction\" :
     * {\"type\": \"COUNT\"}}], \"defaultAction\": {\"type\": \"BLOCK\"}}"</code> </p>
     * </li> <li> <p>Example: <code>SECURITY_GROUPS_COMMON</code> </p> <p>
     * <code>"{\"type\":\"SECURITY_GROUPS_COMMON\",\"revertManualSecurityGroupChanges\":false,\"exclusiveResourceSecurityGroupManagement\":false,
     * \"applyToAllEC2InstanceENIs\":false,\"securityGroups\":[{\"id\":\"
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
     * </p> </li> </ul>
     */
    inline const Aws::String& GetManagedServiceData() const{ return m_managedServiceData; }

    /**
     * <p>Details about the service that are specific to the service type, in JSON
     * format. For service type <code>SHIELD_ADVANCED</code>, this is an empty
     * string.</p> <ul> <li> <p>Example: <code>NETWORK_FIREWALL</code> </p> <p>
     * <code>"{\"type\":\"NETWORK_FIREWALL\",\"networkFirewallStatelessRuleGroupReferences\":[{\"resourceARN\":\"arn:aws:network-firewall:us-west-1:1234567891011:stateless-rulegroup/rulegroup2\",\"priority\":10}],\"networkFirewallStatelessDefaultActions\":[\"aws:pass\",\"custom1\"],\"networkFirewallStatelessFragmentDefaultActions\":[\"custom2\",\"aws:pass\"],\"networkFirewallStatelessCustomActions\":[{\"actionName\":\"custom1\",\"actionDefinition\":{\"publishMetricAction\":{\"dimensions\":[{\"value\":\"dimension1\"}]}}},{\"actionName\":\"custom2\",\"actionDefinition\":{\"publishMetricAction\":{\"dimensions\":[{\"value\":\"dimension2\"}]}}}],\"networkFirewallStatefulRuleGroupReferences\":[{\"resourceARN\":\"arn:aws:network-firewall:us-west-1:1234567891011:stateful-rulegroup/rulegroup1\"}],\"networkFirewallOrchestrationConfig\":{\"singleFirewallEndpointPerVPC\":true,\"allowedIPV4CidrList\":[\"10.24.34.0/28\"]}
     * }"</code> </p> </li> <li> <p>Example: <code>WAFV2</code> </p> <p>
     * <code>"{\"type\":\"WAFV2\",\"preProcessRuleGroups\":[{\"ruleGroupArn\":null,\"overrideAction\":{\"type\":\"NONE\"},\"managedRuleGroupIdentifier\":{\"version\":null,\"vendorName\":\"AWS\",\"managedRuleGroupName\":\"AWSManagedRulesAmazonIpReputationList\"},\"ruleGroupType\":\"ManagedRuleGroup\",\"excludeRules\":[]}],\"postProcessRuleGroups\":[],\"defaultAction\":{\"type\":\"ALLOW\"},\"overrideCustomerWebACLAssociation\":false,\"loggingConfiguration\":{\"logDestinationConfigs\":[\"arn:aws:firehose:us-west-2:12345678912:deliverystream/aws-waf-logs-fms-admin-destination\"],\"redactedFields\":[{\"redactedFieldType\":\"SingleHeader\",\"redactedFieldValue\":\"Cookies\"},{\"redactedFieldType\":\"Method\"}]}}"</code>
     * </p> <p>In the <code>loggingConfiguration</code>, you can specify one
     * <code>logDestinationConfigs</code>, you can optionally provide up to 20
     * <code>redactedFields</code>, and the <code>RedactedFieldType</code> must be one
     * of <code>URI</code>, <code>QUERY_STRING</code>, <code>HEADER</code>, or
     * <code>METHOD</code>.</p> </li> <li> <p>Example: <code>WAF Classic</code> </p>
     * <p> <code>"{\"type\": \"WAF\", \"ruleGroups\":
     * [{\"id\":\"12345678-1bcd-9012-efga-0987654321ab\", \"overrideAction\" :
     * {\"type\": \"COUNT\"}}], \"defaultAction\": {\"type\": \"BLOCK\"}}"</code> </p>
     * </li> <li> <p>Example: <code>SECURITY_GROUPS_COMMON</code> </p> <p>
     * <code>"{\"type\":\"SECURITY_GROUPS_COMMON\",\"revertManualSecurityGroupChanges\":false,\"exclusiveResourceSecurityGroupManagement\":false,
     * \"applyToAllEC2InstanceENIs\":false,\"securityGroups\":[{\"id\":\"
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
     * </p> </li> </ul>
     */
    inline bool ManagedServiceDataHasBeenSet() const { return m_managedServiceDataHasBeenSet; }

    /**
     * <p>Details about the service that are specific to the service type, in JSON
     * format. For service type <code>SHIELD_ADVANCED</code>, this is an empty
     * string.</p> <ul> <li> <p>Example: <code>NETWORK_FIREWALL</code> </p> <p>
     * <code>"{\"type\":\"NETWORK_FIREWALL\",\"networkFirewallStatelessRuleGroupReferences\":[{\"resourceARN\":\"arn:aws:network-firewall:us-west-1:1234567891011:stateless-rulegroup/rulegroup2\",\"priority\":10}],\"networkFirewallStatelessDefaultActions\":[\"aws:pass\",\"custom1\"],\"networkFirewallStatelessFragmentDefaultActions\":[\"custom2\",\"aws:pass\"],\"networkFirewallStatelessCustomActions\":[{\"actionName\":\"custom1\",\"actionDefinition\":{\"publishMetricAction\":{\"dimensions\":[{\"value\":\"dimension1\"}]}}},{\"actionName\":\"custom2\",\"actionDefinition\":{\"publishMetricAction\":{\"dimensions\":[{\"value\":\"dimension2\"}]}}}],\"networkFirewallStatefulRuleGroupReferences\":[{\"resourceARN\":\"arn:aws:network-firewall:us-west-1:1234567891011:stateful-rulegroup/rulegroup1\"}],\"networkFirewallOrchestrationConfig\":{\"singleFirewallEndpointPerVPC\":true,\"allowedIPV4CidrList\":[\"10.24.34.0/28\"]}
     * }"</code> </p> </li> <li> <p>Example: <code>WAFV2</code> </p> <p>
     * <code>"{\"type\":\"WAFV2\",\"preProcessRuleGroups\":[{\"ruleGroupArn\":null,\"overrideAction\":{\"type\":\"NONE\"},\"managedRuleGroupIdentifier\":{\"version\":null,\"vendorName\":\"AWS\",\"managedRuleGroupName\":\"AWSManagedRulesAmazonIpReputationList\"},\"ruleGroupType\":\"ManagedRuleGroup\",\"excludeRules\":[]}],\"postProcessRuleGroups\":[],\"defaultAction\":{\"type\":\"ALLOW\"},\"overrideCustomerWebACLAssociation\":false,\"loggingConfiguration\":{\"logDestinationConfigs\":[\"arn:aws:firehose:us-west-2:12345678912:deliverystream/aws-waf-logs-fms-admin-destination\"],\"redactedFields\":[{\"redactedFieldType\":\"SingleHeader\",\"redactedFieldValue\":\"Cookies\"},{\"redactedFieldType\":\"Method\"}]}}"</code>
     * </p> <p>In the <code>loggingConfiguration</code>, you can specify one
     * <code>logDestinationConfigs</code>, you can optionally provide up to 20
     * <code>redactedFields</code>, and the <code>RedactedFieldType</code> must be one
     * of <code>URI</code>, <code>QUERY_STRING</code>, <code>HEADER</code>, or
     * <code>METHOD</code>.</p> </li> <li> <p>Example: <code>WAF Classic</code> </p>
     * <p> <code>"{\"type\": \"WAF\", \"ruleGroups\":
     * [{\"id\":\"12345678-1bcd-9012-efga-0987654321ab\", \"overrideAction\" :
     * {\"type\": \"COUNT\"}}], \"defaultAction\": {\"type\": \"BLOCK\"}}"</code> </p>
     * </li> <li> <p>Example: <code>SECURITY_GROUPS_COMMON</code> </p> <p>
     * <code>"{\"type\":\"SECURITY_GROUPS_COMMON\",\"revertManualSecurityGroupChanges\":false,\"exclusiveResourceSecurityGroupManagement\":false,
     * \"applyToAllEC2InstanceENIs\":false,\"securityGroups\":[{\"id\":\"
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
     * </p> </li> </ul>
     */
    inline void SetManagedServiceData(const Aws::String& value) { m_managedServiceDataHasBeenSet = true; m_managedServiceData = value; }

    /**
     * <p>Details about the service that are specific to the service type, in JSON
     * format. For service type <code>SHIELD_ADVANCED</code>, this is an empty
     * string.</p> <ul> <li> <p>Example: <code>NETWORK_FIREWALL</code> </p> <p>
     * <code>"{\"type\":\"NETWORK_FIREWALL\",\"networkFirewallStatelessRuleGroupReferences\":[{\"resourceARN\":\"arn:aws:network-firewall:us-west-1:1234567891011:stateless-rulegroup/rulegroup2\",\"priority\":10}],\"networkFirewallStatelessDefaultActions\":[\"aws:pass\",\"custom1\"],\"networkFirewallStatelessFragmentDefaultActions\":[\"custom2\",\"aws:pass\"],\"networkFirewallStatelessCustomActions\":[{\"actionName\":\"custom1\",\"actionDefinition\":{\"publishMetricAction\":{\"dimensions\":[{\"value\":\"dimension1\"}]}}},{\"actionName\":\"custom2\",\"actionDefinition\":{\"publishMetricAction\":{\"dimensions\":[{\"value\":\"dimension2\"}]}}}],\"networkFirewallStatefulRuleGroupReferences\":[{\"resourceARN\":\"arn:aws:network-firewall:us-west-1:1234567891011:stateful-rulegroup/rulegroup1\"}],\"networkFirewallOrchestrationConfig\":{\"singleFirewallEndpointPerVPC\":true,\"allowedIPV4CidrList\":[\"10.24.34.0/28\"]}
     * }"</code> </p> </li> <li> <p>Example: <code>WAFV2</code> </p> <p>
     * <code>"{\"type\":\"WAFV2\",\"preProcessRuleGroups\":[{\"ruleGroupArn\":null,\"overrideAction\":{\"type\":\"NONE\"},\"managedRuleGroupIdentifier\":{\"version\":null,\"vendorName\":\"AWS\",\"managedRuleGroupName\":\"AWSManagedRulesAmazonIpReputationList\"},\"ruleGroupType\":\"ManagedRuleGroup\",\"excludeRules\":[]}],\"postProcessRuleGroups\":[],\"defaultAction\":{\"type\":\"ALLOW\"},\"overrideCustomerWebACLAssociation\":false,\"loggingConfiguration\":{\"logDestinationConfigs\":[\"arn:aws:firehose:us-west-2:12345678912:deliverystream/aws-waf-logs-fms-admin-destination\"],\"redactedFields\":[{\"redactedFieldType\":\"SingleHeader\",\"redactedFieldValue\":\"Cookies\"},{\"redactedFieldType\":\"Method\"}]}}"</code>
     * </p> <p>In the <code>loggingConfiguration</code>, you can specify one
     * <code>logDestinationConfigs</code>, you can optionally provide up to 20
     * <code>redactedFields</code>, and the <code>RedactedFieldType</code> must be one
     * of <code>URI</code>, <code>QUERY_STRING</code>, <code>HEADER</code>, or
     * <code>METHOD</code>.</p> </li> <li> <p>Example: <code>WAF Classic</code> </p>
     * <p> <code>"{\"type\": \"WAF\", \"ruleGroups\":
     * [{\"id\":\"12345678-1bcd-9012-efga-0987654321ab\", \"overrideAction\" :
     * {\"type\": \"COUNT\"}}], \"defaultAction\": {\"type\": \"BLOCK\"}}"</code> </p>
     * </li> <li> <p>Example: <code>SECURITY_GROUPS_COMMON</code> </p> <p>
     * <code>"{\"type\":\"SECURITY_GROUPS_COMMON\",\"revertManualSecurityGroupChanges\":false,\"exclusiveResourceSecurityGroupManagement\":false,
     * \"applyToAllEC2InstanceENIs\":false,\"securityGroups\":[{\"id\":\"
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
     * </p> </li> </ul>
     */
    inline void SetManagedServiceData(Aws::String&& value) { m_managedServiceDataHasBeenSet = true; m_managedServiceData = std::move(value); }

    /**
     * <p>Details about the service that are specific to the service type, in JSON
     * format. For service type <code>SHIELD_ADVANCED</code>, this is an empty
     * string.</p> <ul> <li> <p>Example: <code>NETWORK_FIREWALL</code> </p> <p>
     * <code>"{\"type\":\"NETWORK_FIREWALL\",\"networkFirewallStatelessRuleGroupReferences\":[{\"resourceARN\":\"arn:aws:network-firewall:us-west-1:1234567891011:stateless-rulegroup/rulegroup2\",\"priority\":10}],\"networkFirewallStatelessDefaultActions\":[\"aws:pass\",\"custom1\"],\"networkFirewallStatelessFragmentDefaultActions\":[\"custom2\",\"aws:pass\"],\"networkFirewallStatelessCustomActions\":[{\"actionName\":\"custom1\",\"actionDefinition\":{\"publishMetricAction\":{\"dimensions\":[{\"value\":\"dimension1\"}]}}},{\"actionName\":\"custom2\",\"actionDefinition\":{\"publishMetricAction\":{\"dimensions\":[{\"value\":\"dimension2\"}]}}}],\"networkFirewallStatefulRuleGroupReferences\":[{\"resourceARN\":\"arn:aws:network-firewall:us-west-1:1234567891011:stateful-rulegroup/rulegroup1\"}],\"networkFirewallOrchestrationConfig\":{\"singleFirewallEndpointPerVPC\":true,\"allowedIPV4CidrList\":[\"10.24.34.0/28\"]}
     * }"</code> </p> </li> <li> <p>Example: <code>WAFV2</code> </p> <p>
     * <code>"{\"type\":\"WAFV2\",\"preProcessRuleGroups\":[{\"ruleGroupArn\":null,\"overrideAction\":{\"type\":\"NONE\"},\"managedRuleGroupIdentifier\":{\"version\":null,\"vendorName\":\"AWS\",\"managedRuleGroupName\":\"AWSManagedRulesAmazonIpReputationList\"},\"ruleGroupType\":\"ManagedRuleGroup\",\"excludeRules\":[]}],\"postProcessRuleGroups\":[],\"defaultAction\":{\"type\":\"ALLOW\"},\"overrideCustomerWebACLAssociation\":false,\"loggingConfiguration\":{\"logDestinationConfigs\":[\"arn:aws:firehose:us-west-2:12345678912:deliverystream/aws-waf-logs-fms-admin-destination\"],\"redactedFields\":[{\"redactedFieldType\":\"SingleHeader\",\"redactedFieldValue\":\"Cookies\"},{\"redactedFieldType\":\"Method\"}]}}"</code>
     * </p> <p>In the <code>loggingConfiguration</code>, you can specify one
     * <code>logDestinationConfigs</code>, you can optionally provide up to 20
     * <code>redactedFields</code>, and the <code>RedactedFieldType</code> must be one
     * of <code>URI</code>, <code>QUERY_STRING</code>, <code>HEADER</code>, or
     * <code>METHOD</code>.</p> </li> <li> <p>Example: <code>WAF Classic</code> </p>
     * <p> <code>"{\"type\": \"WAF\", \"ruleGroups\":
     * [{\"id\":\"12345678-1bcd-9012-efga-0987654321ab\", \"overrideAction\" :
     * {\"type\": \"COUNT\"}}], \"defaultAction\": {\"type\": \"BLOCK\"}}"</code> </p>
     * </li> <li> <p>Example: <code>SECURITY_GROUPS_COMMON</code> </p> <p>
     * <code>"{\"type\":\"SECURITY_GROUPS_COMMON\",\"revertManualSecurityGroupChanges\":false,\"exclusiveResourceSecurityGroupManagement\":false,
     * \"applyToAllEC2InstanceENIs\":false,\"securityGroups\":[{\"id\":\"
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
     * </p> </li> </ul>
     */
    inline void SetManagedServiceData(const char* value) { m_managedServiceDataHasBeenSet = true; m_managedServiceData.assign(value); }

    /**
     * <p>Details about the service that are specific to the service type, in JSON
     * format. For service type <code>SHIELD_ADVANCED</code>, this is an empty
     * string.</p> <ul> <li> <p>Example: <code>NETWORK_FIREWALL</code> </p> <p>
     * <code>"{\"type\":\"NETWORK_FIREWALL\",\"networkFirewallStatelessRuleGroupReferences\":[{\"resourceARN\":\"arn:aws:network-firewall:us-west-1:1234567891011:stateless-rulegroup/rulegroup2\",\"priority\":10}],\"networkFirewallStatelessDefaultActions\":[\"aws:pass\",\"custom1\"],\"networkFirewallStatelessFragmentDefaultActions\":[\"custom2\",\"aws:pass\"],\"networkFirewallStatelessCustomActions\":[{\"actionName\":\"custom1\",\"actionDefinition\":{\"publishMetricAction\":{\"dimensions\":[{\"value\":\"dimension1\"}]}}},{\"actionName\":\"custom2\",\"actionDefinition\":{\"publishMetricAction\":{\"dimensions\":[{\"value\":\"dimension2\"}]}}}],\"networkFirewallStatefulRuleGroupReferences\":[{\"resourceARN\":\"arn:aws:network-firewall:us-west-1:1234567891011:stateful-rulegroup/rulegroup1\"}],\"networkFirewallOrchestrationConfig\":{\"singleFirewallEndpointPerVPC\":true,\"allowedIPV4CidrList\":[\"10.24.34.0/28\"]}
     * }"</code> </p> </li> <li> <p>Example: <code>WAFV2</code> </p> <p>
     * <code>"{\"type\":\"WAFV2\",\"preProcessRuleGroups\":[{\"ruleGroupArn\":null,\"overrideAction\":{\"type\":\"NONE\"},\"managedRuleGroupIdentifier\":{\"version\":null,\"vendorName\":\"AWS\",\"managedRuleGroupName\":\"AWSManagedRulesAmazonIpReputationList\"},\"ruleGroupType\":\"ManagedRuleGroup\",\"excludeRules\":[]}],\"postProcessRuleGroups\":[],\"defaultAction\":{\"type\":\"ALLOW\"},\"overrideCustomerWebACLAssociation\":false,\"loggingConfiguration\":{\"logDestinationConfigs\":[\"arn:aws:firehose:us-west-2:12345678912:deliverystream/aws-waf-logs-fms-admin-destination\"],\"redactedFields\":[{\"redactedFieldType\":\"SingleHeader\",\"redactedFieldValue\":\"Cookies\"},{\"redactedFieldType\":\"Method\"}]}}"</code>
     * </p> <p>In the <code>loggingConfiguration</code>, you can specify one
     * <code>logDestinationConfigs</code>, you can optionally provide up to 20
     * <code>redactedFields</code>, and the <code>RedactedFieldType</code> must be one
     * of <code>URI</code>, <code>QUERY_STRING</code>, <code>HEADER</code>, or
     * <code>METHOD</code>.</p> </li> <li> <p>Example: <code>WAF Classic</code> </p>
     * <p> <code>"{\"type\": \"WAF\", \"ruleGroups\":
     * [{\"id\":\"12345678-1bcd-9012-efga-0987654321ab\", \"overrideAction\" :
     * {\"type\": \"COUNT\"}}], \"defaultAction\": {\"type\": \"BLOCK\"}}"</code> </p>
     * </li> <li> <p>Example: <code>SECURITY_GROUPS_COMMON</code> </p> <p>
     * <code>"{\"type\":\"SECURITY_GROUPS_COMMON\",\"revertManualSecurityGroupChanges\":false,\"exclusiveResourceSecurityGroupManagement\":false,
     * \"applyToAllEC2InstanceENIs\":false,\"securityGroups\":[{\"id\":\"
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
     * </p> </li> </ul>
     */
    inline SecurityServicePolicyData& WithManagedServiceData(const Aws::String& value) { SetManagedServiceData(value); return *this;}

    /**
     * <p>Details about the service that are specific to the service type, in JSON
     * format. For service type <code>SHIELD_ADVANCED</code>, this is an empty
     * string.</p> <ul> <li> <p>Example: <code>NETWORK_FIREWALL</code> </p> <p>
     * <code>"{\"type\":\"NETWORK_FIREWALL\",\"networkFirewallStatelessRuleGroupReferences\":[{\"resourceARN\":\"arn:aws:network-firewall:us-west-1:1234567891011:stateless-rulegroup/rulegroup2\",\"priority\":10}],\"networkFirewallStatelessDefaultActions\":[\"aws:pass\",\"custom1\"],\"networkFirewallStatelessFragmentDefaultActions\":[\"custom2\",\"aws:pass\"],\"networkFirewallStatelessCustomActions\":[{\"actionName\":\"custom1\",\"actionDefinition\":{\"publishMetricAction\":{\"dimensions\":[{\"value\":\"dimension1\"}]}}},{\"actionName\":\"custom2\",\"actionDefinition\":{\"publishMetricAction\":{\"dimensions\":[{\"value\":\"dimension2\"}]}}}],\"networkFirewallStatefulRuleGroupReferences\":[{\"resourceARN\":\"arn:aws:network-firewall:us-west-1:1234567891011:stateful-rulegroup/rulegroup1\"}],\"networkFirewallOrchestrationConfig\":{\"singleFirewallEndpointPerVPC\":true,\"allowedIPV4CidrList\":[\"10.24.34.0/28\"]}
     * }"</code> </p> </li> <li> <p>Example: <code>WAFV2</code> </p> <p>
     * <code>"{\"type\":\"WAFV2\",\"preProcessRuleGroups\":[{\"ruleGroupArn\":null,\"overrideAction\":{\"type\":\"NONE\"},\"managedRuleGroupIdentifier\":{\"version\":null,\"vendorName\":\"AWS\",\"managedRuleGroupName\":\"AWSManagedRulesAmazonIpReputationList\"},\"ruleGroupType\":\"ManagedRuleGroup\",\"excludeRules\":[]}],\"postProcessRuleGroups\":[],\"defaultAction\":{\"type\":\"ALLOW\"},\"overrideCustomerWebACLAssociation\":false,\"loggingConfiguration\":{\"logDestinationConfigs\":[\"arn:aws:firehose:us-west-2:12345678912:deliverystream/aws-waf-logs-fms-admin-destination\"],\"redactedFields\":[{\"redactedFieldType\":\"SingleHeader\",\"redactedFieldValue\":\"Cookies\"},{\"redactedFieldType\":\"Method\"}]}}"</code>
     * </p> <p>In the <code>loggingConfiguration</code>, you can specify one
     * <code>logDestinationConfigs</code>, you can optionally provide up to 20
     * <code>redactedFields</code>, and the <code>RedactedFieldType</code> must be one
     * of <code>URI</code>, <code>QUERY_STRING</code>, <code>HEADER</code>, or
     * <code>METHOD</code>.</p> </li> <li> <p>Example: <code>WAF Classic</code> </p>
     * <p> <code>"{\"type\": \"WAF\", \"ruleGroups\":
     * [{\"id\":\"12345678-1bcd-9012-efga-0987654321ab\", \"overrideAction\" :
     * {\"type\": \"COUNT\"}}], \"defaultAction\": {\"type\": \"BLOCK\"}}"</code> </p>
     * </li> <li> <p>Example: <code>SECURITY_GROUPS_COMMON</code> </p> <p>
     * <code>"{\"type\":\"SECURITY_GROUPS_COMMON\",\"revertManualSecurityGroupChanges\":false,\"exclusiveResourceSecurityGroupManagement\":false,
     * \"applyToAllEC2InstanceENIs\":false,\"securityGroups\":[{\"id\":\"
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
     * </p> </li> </ul>
     */
    inline SecurityServicePolicyData& WithManagedServiceData(Aws::String&& value) { SetManagedServiceData(std::move(value)); return *this;}

    /**
     * <p>Details about the service that are specific to the service type, in JSON
     * format. For service type <code>SHIELD_ADVANCED</code>, this is an empty
     * string.</p> <ul> <li> <p>Example: <code>NETWORK_FIREWALL</code> </p> <p>
     * <code>"{\"type\":\"NETWORK_FIREWALL\",\"networkFirewallStatelessRuleGroupReferences\":[{\"resourceARN\":\"arn:aws:network-firewall:us-west-1:1234567891011:stateless-rulegroup/rulegroup2\",\"priority\":10}],\"networkFirewallStatelessDefaultActions\":[\"aws:pass\",\"custom1\"],\"networkFirewallStatelessFragmentDefaultActions\":[\"custom2\",\"aws:pass\"],\"networkFirewallStatelessCustomActions\":[{\"actionName\":\"custom1\",\"actionDefinition\":{\"publishMetricAction\":{\"dimensions\":[{\"value\":\"dimension1\"}]}}},{\"actionName\":\"custom2\",\"actionDefinition\":{\"publishMetricAction\":{\"dimensions\":[{\"value\":\"dimension2\"}]}}}],\"networkFirewallStatefulRuleGroupReferences\":[{\"resourceARN\":\"arn:aws:network-firewall:us-west-1:1234567891011:stateful-rulegroup/rulegroup1\"}],\"networkFirewallOrchestrationConfig\":{\"singleFirewallEndpointPerVPC\":true,\"allowedIPV4CidrList\":[\"10.24.34.0/28\"]}
     * }"</code> </p> </li> <li> <p>Example: <code>WAFV2</code> </p> <p>
     * <code>"{\"type\":\"WAFV2\",\"preProcessRuleGroups\":[{\"ruleGroupArn\":null,\"overrideAction\":{\"type\":\"NONE\"},\"managedRuleGroupIdentifier\":{\"version\":null,\"vendorName\":\"AWS\",\"managedRuleGroupName\":\"AWSManagedRulesAmazonIpReputationList\"},\"ruleGroupType\":\"ManagedRuleGroup\",\"excludeRules\":[]}],\"postProcessRuleGroups\":[],\"defaultAction\":{\"type\":\"ALLOW\"},\"overrideCustomerWebACLAssociation\":false,\"loggingConfiguration\":{\"logDestinationConfigs\":[\"arn:aws:firehose:us-west-2:12345678912:deliverystream/aws-waf-logs-fms-admin-destination\"],\"redactedFields\":[{\"redactedFieldType\":\"SingleHeader\",\"redactedFieldValue\":\"Cookies\"},{\"redactedFieldType\":\"Method\"}]}}"</code>
     * </p> <p>In the <code>loggingConfiguration</code>, you can specify one
     * <code>logDestinationConfigs</code>, you can optionally provide up to 20
     * <code>redactedFields</code>, and the <code>RedactedFieldType</code> must be one
     * of <code>URI</code>, <code>QUERY_STRING</code>, <code>HEADER</code>, or
     * <code>METHOD</code>.</p> </li> <li> <p>Example: <code>WAF Classic</code> </p>
     * <p> <code>"{\"type\": \"WAF\", \"ruleGroups\":
     * [{\"id\":\"12345678-1bcd-9012-efga-0987654321ab\", \"overrideAction\" :
     * {\"type\": \"COUNT\"}}], \"defaultAction\": {\"type\": \"BLOCK\"}}"</code> </p>
     * </li> <li> <p>Example: <code>SECURITY_GROUPS_COMMON</code> </p> <p>
     * <code>"{\"type\":\"SECURITY_GROUPS_COMMON\",\"revertManualSecurityGroupChanges\":false,\"exclusiveResourceSecurityGroupManagement\":false,
     * \"applyToAllEC2InstanceENIs\":false,\"securityGroups\":[{\"id\":\"
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
     * </p> </li> </ul>
     */
    inline SecurityServicePolicyData& WithManagedServiceData(const char* value) { SetManagedServiceData(value); return *this;}

  private:

    SecurityServiceType m_type;
    bool m_typeHasBeenSet;

    Aws::String m_managedServiceData;
    bool m_managedServiceDataHasBeenSet;
  };

} // namespace Model
} // namespace FMS
} // namespace Aws
