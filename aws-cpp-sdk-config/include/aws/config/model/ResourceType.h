/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/config/ConfigService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace ConfigService
{
namespace Model
{
  enum class ResourceType
  {
    NOT_SET,
    AWS_EC2_CustomerGateway,
    AWS_EC2_EIP,
    AWS_EC2_Host,
    AWS_EC2_Instance,
    AWS_EC2_InternetGateway,
    AWS_EC2_NetworkAcl,
    AWS_EC2_NetworkInterface,
    AWS_EC2_RouteTable,
    AWS_EC2_SecurityGroup,
    AWS_EC2_Subnet,
    AWS_CloudTrail_Trail,
    AWS_EC2_Volume,
    AWS_EC2_VPC,
    AWS_EC2_VPNConnection,
    AWS_EC2_VPNGateway,
    AWS_EC2_RegisteredHAInstance,
    AWS_EC2_NatGateway,
    AWS_EC2_EgressOnlyInternetGateway,
    AWS_EC2_VPCEndpoint,
    AWS_EC2_VPCEndpointService,
    AWS_EC2_FlowLog,
    AWS_EC2_VPCPeeringConnection,
    AWS_Elasticsearch_Domain,
    AWS_IAM_Group,
    AWS_IAM_Policy,
    AWS_IAM_Role,
    AWS_IAM_User,
    AWS_ElasticLoadBalancingV2_LoadBalancer,
    AWS_ACM_Certificate,
    AWS_RDS_DBInstance,
    AWS_RDS_DBSubnetGroup,
    AWS_RDS_DBSecurityGroup,
    AWS_RDS_DBSnapshot,
    AWS_RDS_DBCluster,
    AWS_RDS_DBClusterSnapshot,
    AWS_RDS_EventSubscription,
    AWS_S3_Bucket,
    AWS_S3_AccountPublicAccessBlock,
    AWS_Redshift_Cluster,
    AWS_Redshift_ClusterSnapshot,
    AWS_Redshift_ClusterParameterGroup,
    AWS_Redshift_ClusterSecurityGroup,
    AWS_Redshift_ClusterSubnetGroup,
    AWS_Redshift_EventSubscription,
    AWS_SSM_ManagedInstanceInventory,
    AWS_CloudWatch_Alarm,
    AWS_CloudFormation_Stack,
    AWS_ElasticLoadBalancing_LoadBalancer,
    AWS_AutoScaling_AutoScalingGroup,
    AWS_AutoScaling_LaunchConfiguration,
    AWS_AutoScaling_ScalingPolicy,
    AWS_AutoScaling_ScheduledAction,
    AWS_DynamoDB_Table,
    AWS_CodeBuild_Project,
    AWS_WAF_RateBasedRule,
    AWS_WAF_Rule,
    AWS_WAF_RuleGroup,
    AWS_WAF_WebACL,
    AWS_WAFRegional_RateBasedRule,
    AWS_WAFRegional_Rule,
    AWS_WAFRegional_RuleGroup,
    AWS_WAFRegional_WebACL,
    AWS_CloudFront_Distribution,
    AWS_CloudFront_StreamingDistribution,
    AWS_Lambda_Function,
    AWS_ElasticBeanstalk_Application,
    AWS_ElasticBeanstalk_ApplicationVersion,
    AWS_ElasticBeanstalk_Environment,
    AWS_WAFv2_WebACL,
    AWS_WAFv2_RuleGroup,
    AWS_WAFv2_IPSet,
    AWS_WAFv2_RegexPatternSet,
    AWS_WAFv2_ManagedRuleSet,
    AWS_XRay_EncryptionConfig,
    AWS_SSM_AssociationCompliance,
    AWS_SSM_PatchCompliance,
    AWS_Shield_Protection,
    AWS_ShieldRegional_Protection,
    AWS_Config_ResourceCompliance,
    AWS_ApiGateway_Stage,
    AWS_ApiGateway_RestApi,
    AWS_ApiGatewayV2_Stage,
    AWS_ApiGatewayV2_Api,
    AWS_CodePipeline_Pipeline,
    AWS_ServiceCatalog_CloudFormationProvisionedProduct,
    AWS_ServiceCatalog_CloudFormationProduct,
    AWS_ServiceCatalog_Portfolio,
    AWS_SQS_Queue,
    AWS_KMS_Key,
    AWS_QLDB_Ledger,
    AWS_SecretsManager_Secret,
    AWS_SNS_Topic,
    AWS_SSM_FileData
  };

namespace ResourceTypeMapper
{
AWS_CONFIGSERVICE_API ResourceType GetResourceTypeForName(const Aws::String& name);

AWS_CONFIGSERVICE_API Aws::String GetNameForResourceType(ResourceType value);
} // namespace ResourceTypeMapper
} // namespace Model
} // namespace ConfigService
} // namespace Aws
