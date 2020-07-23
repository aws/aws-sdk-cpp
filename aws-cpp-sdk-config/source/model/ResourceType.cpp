/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/config/model/ResourceType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace ConfigService
  {
    namespace Model
    {
      namespace ResourceTypeMapper
      {

        static const int AWS_EC2_CustomerGateway_HASH = HashingUtils::HashString("AWS::EC2::CustomerGateway");
        static const int AWS_EC2_EIP_HASH = HashingUtils::HashString("AWS::EC2::EIP");
        static const int AWS_EC2_Host_HASH = HashingUtils::HashString("AWS::EC2::Host");
        static const int AWS_EC2_Instance_HASH = HashingUtils::HashString("AWS::EC2::Instance");
        static const int AWS_EC2_InternetGateway_HASH = HashingUtils::HashString("AWS::EC2::InternetGateway");
        static const int AWS_EC2_NetworkAcl_HASH = HashingUtils::HashString("AWS::EC2::NetworkAcl");
        static const int AWS_EC2_NetworkInterface_HASH = HashingUtils::HashString("AWS::EC2::NetworkInterface");
        static const int AWS_EC2_RouteTable_HASH = HashingUtils::HashString("AWS::EC2::RouteTable");
        static const int AWS_EC2_SecurityGroup_HASH = HashingUtils::HashString("AWS::EC2::SecurityGroup");
        static const int AWS_EC2_Subnet_HASH = HashingUtils::HashString("AWS::EC2::Subnet");
        static const int AWS_CloudTrail_Trail_HASH = HashingUtils::HashString("AWS::CloudTrail::Trail");
        static const int AWS_EC2_Volume_HASH = HashingUtils::HashString("AWS::EC2::Volume");
        static const int AWS_EC2_VPC_HASH = HashingUtils::HashString("AWS::EC2::VPC");
        static const int AWS_EC2_VPNConnection_HASH = HashingUtils::HashString("AWS::EC2::VPNConnection");
        static const int AWS_EC2_VPNGateway_HASH = HashingUtils::HashString("AWS::EC2::VPNGateway");
        static const int AWS_EC2_RegisteredHAInstance_HASH = HashingUtils::HashString("AWS::EC2::RegisteredHAInstance");
        static const int AWS_EC2_NatGateway_HASH = HashingUtils::HashString("AWS::EC2::NatGateway");
        static const int AWS_EC2_EgressOnlyInternetGateway_HASH = HashingUtils::HashString("AWS::EC2::EgressOnlyInternetGateway");
        static const int AWS_EC2_VPCEndpoint_HASH = HashingUtils::HashString("AWS::EC2::VPCEndpoint");
        static const int AWS_EC2_VPCEndpointService_HASH = HashingUtils::HashString("AWS::EC2::VPCEndpointService");
        static const int AWS_EC2_FlowLog_HASH = HashingUtils::HashString("AWS::EC2::FlowLog");
        static const int AWS_EC2_VPCPeeringConnection_HASH = HashingUtils::HashString("AWS::EC2::VPCPeeringConnection");
        static const int AWS_Elasticsearch_Domain_HASH = HashingUtils::HashString("AWS::Elasticsearch::Domain");
        static const int AWS_IAM_Group_HASH = HashingUtils::HashString("AWS::IAM::Group");
        static const int AWS_IAM_Policy_HASH = HashingUtils::HashString("AWS::IAM::Policy");
        static const int AWS_IAM_Role_HASH = HashingUtils::HashString("AWS::IAM::Role");
        static const int AWS_IAM_User_HASH = HashingUtils::HashString("AWS::IAM::User");
        static const int AWS_ElasticLoadBalancingV2_LoadBalancer_HASH = HashingUtils::HashString("AWS::ElasticLoadBalancingV2::LoadBalancer");
        static const int AWS_ACM_Certificate_HASH = HashingUtils::HashString("AWS::ACM::Certificate");
        static const int AWS_RDS_DBInstance_HASH = HashingUtils::HashString("AWS::RDS::DBInstance");
        static const int AWS_RDS_DBSubnetGroup_HASH = HashingUtils::HashString("AWS::RDS::DBSubnetGroup");
        static const int AWS_RDS_DBSecurityGroup_HASH = HashingUtils::HashString("AWS::RDS::DBSecurityGroup");
        static const int AWS_RDS_DBSnapshot_HASH = HashingUtils::HashString("AWS::RDS::DBSnapshot");
        static const int AWS_RDS_DBCluster_HASH = HashingUtils::HashString("AWS::RDS::DBCluster");
        static const int AWS_RDS_DBClusterSnapshot_HASH = HashingUtils::HashString("AWS::RDS::DBClusterSnapshot");
        static const int AWS_RDS_EventSubscription_HASH = HashingUtils::HashString("AWS::RDS::EventSubscription");
        static const int AWS_S3_Bucket_HASH = HashingUtils::HashString("AWS::S3::Bucket");
        static const int AWS_S3_AccountPublicAccessBlock_HASH = HashingUtils::HashString("AWS::S3::AccountPublicAccessBlock");
        static const int AWS_Redshift_Cluster_HASH = HashingUtils::HashString("AWS::Redshift::Cluster");
        static const int AWS_Redshift_ClusterSnapshot_HASH = HashingUtils::HashString("AWS::Redshift::ClusterSnapshot");
        static const int AWS_Redshift_ClusterParameterGroup_HASH = HashingUtils::HashString("AWS::Redshift::ClusterParameterGroup");
        static const int AWS_Redshift_ClusterSecurityGroup_HASH = HashingUtils::HashString("AWS::Redshift::ClusterSecurityGroup");
        static const int AWS_Redshift_ClusterSubnetGroup_HASH = HashingUtils::HashString("AWS::Redshift::ClusterSubnetGroup");
        static const int AWS_Redshift_EventSubscription_HASH = HashingUtils::HashString("AWS::Redshift::EventSubscription");
        static const int AWS_SSM_ManagedInstanceInventory_HASH = HashingUtils::HashString("AWS::SSM::ManagedInstanceInventory");
        static const int AWS_CloudWatch_Alarm_HASH = HashingUtils::HashString("AWS::CloudWatch::Alarm");
        static const int AWS_CloudFormation_Stack_HASH = HashingUtils::HashString("AWS::CloudFormation::Stack");
        static const int AWS_ElasticLoadBalancing_LoadBalancer_HASH = HashingUtils::HashString("AWS::ElasticLoadBalancing::LoadBalancer");
        static const int AWS_AutoScaling_AutoScalingGroup_HASH = HashingUtils::HashString("AWS::AutoScaling::AutoScalingGroup");
        static const int AWS_AutoScaling_LaunchConfiguration_HASH = HashingUtils::HashString("AWS::AutoScaling::LaunchConfiguration");
        static const int AWS_AutoScaling_ScalingPolicy_HASH = HashingUtils::HashString("AWS::AutoScaling::ScalingPolicy");
        static const int AWS_AutoScaling_ScheduledAction_HASH = HashingUtils::HashString("AWS::AutoScaling::ScheduledAction");
        static const int AWS_DynamoDB_Table_HASH = HashingUtils::HashString("AWS::DynamoDB::Table");
        static const int AWS_CodeBuild_Project_HASH = HashingUtils::HashString("AWS::CodeBuild::Project");
        static const int AWS_WAF_RateBasedRule_HASH = HashingUtils::HashString("AWS::WAF::RateBasedRule");
        static const int AWS_WAF_Rule_HASH = HashingUtils::HashString("AWS::WAF::Rule");
        static const int AWS_WAF_RuleGroup_HASH = HashingUtils::HashString("AWS::WAF::RuleGroup");
        static const int AWS_WAF_WebACL_HASH = HashingUtils::HashString("AWS::WAF::WebACL");
        static const int AWS_WAFRegional_RateBasedRule_HASH = HashingUtils::HashString("AWS::WAFRegional::RateBasedRule");
        static const int AWS_WAFRegional_Rule_HASH = HashingUtils::HashString("AWS::WAFRegional::Rule");
        static const int AWS_WAFRegional_RuleGroup_HASH = HashingUtils::HashString("AWS::WAFRegional::RuleGroup");
        static const int AWS_WAFRegional_WebACL_HASH = HashingUtils::HashString("AWS::WAFRegional::WebACL");
        static const int AWS_CloudFront_Distribution_HASH = HashingUtils::HashString("AWS::CloudFront::Distribution");
        static const int AWS_CloudFront_StreamingDistribution_HASH = HashingUtils::HashString("AWS::CloudFront::StreamingDistribution");
        static const int AWS_Lambda_Function_HASH = HashingUtils::HashString("AWS::Lambda::Function");
        static const int AWS_ElasticBeanstalk_Application_HASH = HashingUtils::HashString("AWS::ElasticBeanstalk::Application");
        static const int AWS_ElasticBeanstalk_ApplicationVersion_HASH = HashingUtils::HashString("AWS::ElasticBeanstalk::ApplicationVersion");
        static const int AWS_ElasticBeanstalk_Environment_HASH = HashingUtils::HashString("AWS::ElasticBeanstalk::Environment");
        static const int AWS_WAFv2_WebACL_HASH = HashingUtils::HashString("AWS::WAFv2::WebACL");
        static const int AWS_WAFv2_RuleGroup_HASH = HashingUtils::HashString("AWS::WAFv2::RuleGroup");
        static const int AWS_WAFv2_IPSet_HASH = HashingUtils::HashString("AWS::WAFv2::IPSet");
        static const int AWS_WAFv2_RegexPatternSet_HASH = HashingUtils::HashString("AWS::WAFv2::RegexPatternSet");
        static const int AWS_WAFv2_ManagedRuleSet_HASH = HashingUtils::HashString("AWS::WAFv2::ManagedRuleSet");
        static const int AWS_XRay_EncryptionConfig_HASH = HashingUtils::HashString("AWS::XRay::EncryptionConfig");
        static const int AWS_SSM_AssociationCompliance_HASH = HashingUtils::HashString("AWS::SSM::AssociationCompliance");
        static const int AWS_SSM_PatchCompliance_HASH = HashingUtils::HashString("AWS::SSM::PatchCompliance");
        static const int AWS_Shield_Protection_HASH = HashingUtils::HashString("AWS::Shield::Protection");
        static const int AWS_ShieldRegional_Protection_HASH = HashingUtils::HashString("AWS::ShieldRegional::Protection");
        static const int AWS_Config_ResourceCompliance_HASH = HashingUtils::HashString("AWS::Config::ResourceCompliance");
        static const int AWS_ApiGateway_Stage_HASH = HashingUtils::HashString("AWS::ApiGateway::Stage");
        static const int AWS_ApiGateway_RestApi_HASH = HashingUtils::HashString("AWS::ApiGateway::RestApi");
        static const int AWS_ApiGatewayV2_Stage_HASH = HashingUtils::HashString("AWS::ApiGatewayV2::Stage");
        static const int AWS_ApiGatewayV2_Api_HASH = HashingUtils::HashString("AWS::ApiGatewayV2::Api");
        static const int AWS_CodePipeline_Pipeline_HASH = HashingUtils::HashString("AWS::CodePipeline::Pipeline");
        static const int AWS_ServiceCatalog_CloudFormationProvisionedProduct_HASH = HashingUtils::HashString("AWS::ServiceCatalog::CloudFormationProvisionedProduct");
        static const int AWS_ServiceCatalog_CloudFormationProduct_HASH = HashingUtils::HashString("AWS::ServiceCatalog::CloudFormationProduct");
        static const int AWS_ServiceCatalog_Portfolio_HASH = HashingUtils::HashString("AWS::ServiceCatalog::Portfolio");
        static const int AWS_SQS_Queue_HASH = HashingUtils::HashString("AWS::SQS::Queue");
        static const int AWS_KMS_Key_HASH = HashingUtils::HashString("AWS::KMS::Key");
        static const int AWS_QLDB_Ledger_HASH = HashingUtils::HashString("AWS::QLDB::Ledger");
        static const int AWS_SecretsManager_Secret_HASH = HashingUtils::HashString("AWS::SecretsManager::Secret");
        static const int AWS_SNS_Topic_HASH = HashingUtils::HashString("AWS::SNS::Topic");
        static const int AWS_SSM_FileData_HASH = HashingUtils::HashString("AWS::SSM::FileData");


        ResourceType GetResourceTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == AWS_EC2_CustomerGateway_HASH)
          {
            return ResourceType::AWS_EC2_CustomerGateway;
          }
          else if (hashCode == AWS_EC2_EIP_HASH)
          {
            return ResourceType::AWS_EC2_EIP;
          }
          else if (hashCode == AWS_EC2_Host_HASH)
          {
            return ResourceType::AWS_EC2_Host;
          }
          else if (hashCode == AWS_EC2_Instance_HASH)
          {
            return ResourceType::AWS_EC2_Instance;
          }
          else if (hashCode == AWS_EC2_InternetGateway_HASH)
          {
            return ResourceType::AWS_EC2_InternetGateway;
          }
          else if (hashCode == AWS_EC2_NetworkAcl_HASH)
          {
            return ResourceType::AWS_EC2_NetworkAcl;
          }
          else if (hashCode == AWS_EC2_NetworkInterface_HASH)
          {
            return ResourceType::AWS_EC2_NetworkInterface;
          }
          else if (hashCode == AWS_EC2_RouteTable_HASH)
          {
            return ResourceType::AWS_EC2_RouteTable;
          }
          else if (hashCode == AWS_EC2_SecurityGroup_HASH)
          {
            return ResourceType::AWS_EC2_SecurityGroup;
          }
          else if (hashCode == AWS_EC2_Subnet_HASH)
          {
            return ResourceType::AWS_EC2_Subnet;
          }
          else if (hashCode == AWS_CloudTrail_Trail_HASH)
          {
            return ResourceType::AWS_CloudTrail_Trail;
          }
          else if (hashCode == AWS_EC2_Volume_HASH)
          {
            return ResourceType::AWS_EC2_Volume;
          }
          else if (hashCode == AWS_EC2_VPC_HASH)
          {
            return ResourceType::AWS_EC2_VPC;
          }
          else if (hashCode == AWS_EC2_VPNConnection_HASH)
          {
            return ResourceType::AWS_EC2_VPNConnection;
          }
          else if (hashCode == AWS_EC2_VPNGateway_HASH)
          {
            return ResourceType::AWS_EC2_VPNGateway;
          }
          else if (hashCode == AWS_EC2_RegisteredHAInstance_HASH)
          {
            return ResourceType::AWS_EC2_RegisteredHAInstance;
          }
          else if (hashCode == AWS_EC2_NatGateway_HASH)
          {
            return ResourceType::AWS_EC2_NatGateway;
          }
          else if (hashCode == AWS_EC2_EgressOnlyInternetGateway_HASH)
          {
            return ResourceType::AWS_EC2_EgressOnlyInternetGateway;
          }
          else if (hashCode == AWS_EC2_VPCEndpoint_HASH)
          {
            return ResourceType::AWS_EC2_VPCEndpoint;
          }
          else if (hashCode == AWS_EC2_VPCEndpointService_HASH)
          {
            return ResourceType::AWS_EC2_VPCEndpointService;
          }
          else if (hashCode == AWS_EC2_FlowLog_HASH)
          {
            return ResourceType::AWS_EC2_FlowLog;
          }
          else if (hashCode == AWS_EC2_VPCPeeringConnection_HASH)
          {
            return ResourceType::AWS_EC2_VPCPeeringConnection;
          }
          else if (hashCode == AWS_Elasticsearch_Domain_HASH)
          {
            return ResourceType::AWS_Elasticsearch_Domain;
          }
          else if (hashCode == AWS_IAM_Group_HASH)
          {
            return ResourceType::AWS_IAM_Group;
          }
          else if (hashCode == AWS_IAM_Policy_HASH)
          {
            return ResourceType::AWS_IAM_Policy;
          }
          else if (hashCode == AWS_IAM_Role_HASH)
          {
            return ResourceType::AWS_IAM_Role;
          }
          else if (hashCode == AWS_IAM_User_HASH)
          {
            return ResourceType::AWS_IAM_User;
          }
          else if (hashCode == AWS_ElasticLoadBalancingV2_LoadBalancer_HASH)
          {
            return ResourceType::AWS_ElasticLoadBalancingV2_LoadBalancer;
          }
          else if (hashCode == AWS_ACM_Certificate_HASH)
          {
            return ResourceType::AWS_ACM_Certificate;
          }
          else if (hashCode == AWS_RDS_DBInstance_HASH)
          {
            return ResourceType::AWS_RDS_DBInstance;
          }
          else if (hashCode == AWS_RDS_DBSubnetGroup_HASH)
          {
            return ResourceType::AWS_RDS_DBSubnetGroup;
          }
          else if (hashCode == AWS_RDS_DBSecurityGroup_HASH)
          {
            return ResourceType::AWS_RDS_DBSecurityGroup;
          }
          else if (hashCode == AWS_RDS_DBSnapshot_HASH)
          {
            return ResourceType::AWS_RDS_DBSnapshot;
          }
          else if (hashCode == AWS_RDS_DBCluster_HASH)
          {
            return ResourceType::AWS_RDS_DBCluster;
          }
          else if (hashCode == AWS_RDS_DBClusterSnapshot_HASH)
          {
            return ResourceType::AWS_RDS_DBClusterSnapshot;
          }
          else if (hashCode == AWS_RDS_EventSubscription_HASH)
          {
            return ResourceType::AWS_RDS_EventSubscription;
          }
          else if (hashCode == AWS_S3_Bucket_HASH)
          {
            return ResourceType::AWS_S3_Bucket;
          }
          else if (hashCode == AWS_S3_AccountPublicAccessBlock_HASH)
          {
            return ResourceType::AWS_S3_AccountPublicAccessBlock;
          }
          else if (hashCode == AWS_Redshift_Cluster_HASH)
          {
            return ResourceType::AWS_Redshift_Cluster;
          }
          else if (hashCode == AWS_Redshift_ClusterSnapshot_HASH)
          {
            return ResourceType::AWS_Redshift_ClusterSnapshot;
          }
          else if (hashCode == AWS_Redshift_ClusterParameterGroup_HASH)
          {
            return ResourceType::AWS_Redshift_ClusterParameterGroup;
          }
          else if (hashCode == AWS_Redshift_ClusterSecurityGroup_HASH)
          {
            return ResourceType::AWS_Redshift_ClusterSecurityGroup;
          }
          else if (hashCode == AWS_Redshift_ClusterSubnetGroup_HASH)
          {
            return ResourceType::AWS_Redshift_ClusterSubnetGroup;
          }
          else if (hashCode == AWS_Redshift_EventSubscription_HASH)
          {
            return ResourceType::AWS_Redshift_EventSubscription;
          }
          else if (hashCode == AWS_SSM_ManagedInstanceInventory_HASH)
          {
            return ResourceType::AWS_SSM_ManagedInstanceInventory;
          }
          else if (hashCode == AWS_CloudWatch_Alarm_HASH)
          {
            return ResourceType::AWS_CloudWatch_Alarm;
          }
          else if (hashCode == AWS_CloudFormation_Stack_HASH)
          {
            return ResourceType::AWS_CloudFormation_Stack;
          }
          else if (hashCode == AWS_ElasticLoadBalancing_LoadBalancer_HASH)
          {
            return ResourceType::AWS_ElasticLoadBalancing_LoadBalancer;
          }
          else if (hashCode == AWS_AutoScaling_AutoScalingGroup_HASH)
          {
            return ResourceType::AWS_AutoScaling_AutoScalingGroup;
          }
          else if (hashCode == AWS_AutoScaling_LaunchConfiguration_HASH)
          {
            return ResourceType::AWS_AutoScaling_LaunchConfiguration;
          }
          else if (hashCode == AWS_AutoScaling_ScalingPolicy_HASH)
          {
            return ResourceType::AWS_AutoScaling_ScalingPolicy;
          }
          else if (hashCode == AWS_AutoScaling_ScheduledAction_HASH)
          {
            return ResourceType::AWS_AutoScaling_ScheduledAction;
          }
          else if (hashCode == AWS_DynamoDB_Table_HASH)
          {
            return ResourceType::AWS_DynamoDB_Table;
          }
          else if (hashCode == AWS_CodeBuild_Project_HASH)
          {
            return ResourceType::AWS_CodeBuild_Project;
          }
          else if (hashCode == AWS_WAF_RateBasedRule_HASH)
          {
            return ResourceType::AWS_WAF_RateBasedRule;
          }
          else if (hashCode == AWS_WAF_Rule_HASH)
          {
            return ResourceType::AWS_WAF_Rule;
          }
          else if (hashCode == AWS_WAF_RuleGroup_HASH)
          {
            return ResourceType::AWS_WAF_RuleGroup;
          }
          else if (hashCode == AWS_WAF_WebACL_HASH)
          {
            return ResourceType::AWS_WAF_WebACL;
          }
          else if (hashCode == AWS_WAFRegional_RateBasedRule_HASH)
          {
            return ResourceType::AWS_WAFRegional_RateBasedRule;
          }
          else if (hashCode == AWS_WAFRegional_Rule_HASH)
          {
            return ResourceType::AWS_WAFRegional_Rule;
          }
          else if (hashCode == AWS_WAFRegional_RuleGroup_HASH)
          {
            return ResourceType::AWS_WAFRegional_RuleGroup;
          }
          else if (hashCode == AWS_WAFRegional_WebACL_HASH)
          {
            return ResourceType::AWS_WAFRegional_WebACL;
          }
          else if (hashCode == AWS_CloudFront_Distribution_HASH)
          {
            return ResourceType::AWS_CloudFront_Distribution;
          }
          else if (hashCode == AWS_CloudFront_StreamingDistribution_HASH)
          {
            return ResourceType::AWS_CloudFront_StreamingDistribution;
          }
          else if (hashCode == AWS_Lambda_Function_HASH)
          {
            return ResourceType::AWS_Lambda_Function;
          }
          else if (hashCode == AWS_ElasticBeanstalk_Application_HASH)
          {
            return ResourceType::AWS_ElasticBeanstalk_Application;
          }
          else if (hashCode == AWS_ElasticBeanstalk_ApplicationVersion_HASH)
          {
            return ResourceType::AWS_ElasticBeanstalk_ApplicationVersion;
          }
          else if (hashCode == AWS_ElasticBeanstalk_Environment_HASH)
          {
            return ResourceType::AWS_ElasticBeanstalk_Environment;
          }
          else if (hashCode == AWS_WAFv2_WebACL_HASH)
          {
            return ResourceType::AWS_WAFv2_WebACL;
          }
          else if (hashCode == AWS_WAFv2_RuleGroup_HASH)
          {
            return ResourceType::AWS_WAFv2_RuleGroup;
          }
          else if (hashCode == AWS_WAFv2_IPSet_HASH)
          {
            return ResourceType::AWS_WAFv2_IPSet;
          }
          else if (hashCode == AWS_WAFv2_RegexPatternSet_HASH)
          {
            return ResourceType::AWS_WAFv2_RegexPatternSet;
          }
          else if (hashCode == AWS_WAFv2_ManagedRuleSet_HASH)
          {
            return ResourceType::AWS_WAFv2_ManagedRuleSet;
          }
          else if (hashCode == AWS_XRay_EncryptionConfig_HASH)
          {
            return ResourceType::AWS_XRay_EncryptionConfig;
          }
          else if (hashCode == AWS_SSM_AssociationCompliance_HASH)
          {
            return ResourceType::AWS_SSM_AssociationCompliance;
          }
          else if (hashCode == AWS_SSM_PatchCompliance_HASH)
          {
            return ResourceType::AWS_SSM_PatchCompliance;
          }
          else if (hashCode == AWS_Shield_Protection_HASH)
          {
            return ResourceType::AWS_Shield_Protection;
          }
          else if (hashCode == AWS_ShieldRegional_Protection_HASH)
          {
            return ResourceType::AWS_ShieldRegional_Protection;
          }
          else if (hashCode == AWS_Config_ResourceCompliance_HASH)
          {
            return ResourceType::AWS_Config_ResourceCompliance;
          }
          else if (hashCode == AWS_ApiGateway_Stage_HASH)
          {
            return ResourceType::AWS_ApiGateway_Stage;
          }
          else if (hashCode == AWS_ApiGateway_RestApi_HASH)
          {
            return ResourceType::AWS_ApiGateway_RestApi;
          }
          else if (hashCode == AWS_ApiGatewayV2_Stage_HASH)
          {
            return ResourceType::AWS_ApiGatewayV2_Stage;
          }
          else if (hashCode == AWS_ApiGatewayV2_Api_HASH)
          {
            return ResourceType::AWS_ApiGatewayV2_Api;
          }
          else if (hashCode == AWS_CodePipeline_Pipeline_HASH)
          {
            return ResourceType::AWS_CodePipeline_Pipeline;
          }
          else if (hashCode == AWS_ServiceCatalog_CloudFormationProvisionedProduct_HASH)
          {
            return ResourceType::AWS_ServiceCatalog_CloudFormationProvisionedProduct;
          }
          else if (hashCode == AWS_ServiceCatalog_CloudFormationProduct_HASH)
          {
            return ResourceType::AWS_ServiceCatalog_CloudFormationProduct;
          }
          else if (hashCode == AWS_ServiceCatalog_Portfolio_HASH)
          {
            return ResourceType::AWS_ServiceCatalog_Portfolio;
          }
          else if (hashCode == AWS_SQS_Queue_HASH)
          {
            return ResourceType::AWS_SQS_Queue;
          }
          else if (hashCode == AWS_KMS_Key_HASH)
          {
            return ResourceType::AWS_KMS_Key;
          }
          else if (hashCode == AWS_QLDB_Ledger_HASH)
          {
            return ResourceType::AWS_QLDB_Ledger;
          }
          else if (hashCode == AWS_SecretsManager_Secret_HASH)
          {
            return ResourceType::AWS_SecretsManager_Secret;
          }
          else if (hashCode == AWS_SNS_Topic_HASH)
          {
            return ResourceType::AWS_SNS_Topic;
          }
          else if (hashCode == AWS_SSM_FileData_HASH)
          {
            return ResourceType::AWS_SSM_FileData;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ResourceType>(hashCode);
          }

          return ResourceType::NOT_SET;
        }

        Aws::String GetNameForResourceType(ResourceType enumValue)
        {
          switch(enumValue)
          {
          case ResourceType::AWS_EC2_CustomerGateway:
            return "AWS::EC2::CustomerGateway";
          case ResourceType::AWS_EC2_EIP:
            return "AWS::EC2::EIP";
          case ResourceType::AWS_EC2_Host:
            return "AWS::EC2::Host";
          case ResourceType::AWS_EC2_Instance:
            return "AWS::EC2::Instance";
          case ResourceType::AWS_EC2_InternetGateway:
            return "AWS::EC2::InternetGateway";
          case ResourceType::AWS_EC2_NetworkAcl:
            return "AWS::EC2::NetworkAcl";
          case ResourceType::AWS_EC2_NetworkInterface:
            return "AWS::EC2::NetworkInterface";
          case ResourceType::AWS_EC2_RouteTable:
            return "AWS::EC2::RouteTable";
          case ResourceType::AWS_EC2_SecurityGroup:
            return "AWS::EC2::SecurityGroup";
          case ResourceType::AWS_EC2_Subnet:
            return "AWS::EC2::Subnet";
          case ResourceType::AWS_CloudTrail_Trail:
            return "AWS::CloudTrail::Trail";
          case ResourceType::AWS_EC2_Volume:
            return "AWS::EC2::Volume";
          case ResourceType::AWS_EC2_VPC:
            return "AWS::EC2::VPC";
          case ResourceType::AWS_EC2_VPNConnection:
            return "AWS::EC2::VPNConnection";
          case ResourceType::AWS_EC2_VPNGateway:
            return "AWS::EC2::VPNGateway";
          case ResourceType::AWS_EC2_RegisteredHAInstance:
            return "AWS::EC2::RegisteredHAInstance";
          case ResourceType::AWS_EC2_NatGateway:
            return "AWS::EC2::NatGateway";
          case ResourceType::AWS_EC2_EgressOnlyInternetGateway:
            return "AWS::EC2::EgressOnlyInternetGateway";
          case ResourceType::AWS_EC2_VPCEndpoint:
            return "AWS::EC2::VPCEndpoint";
          case ResourceType::AWS_EC2_VPCEndpointService:
            return "AWS::EC2::VPCEndpointService";
          case ResourceType::AWS_EC2_FlowLog:
            return "AWS::EC2::FlowLog";
          case ResourceType::AWS_EC2_VPCPeeringConnection:
            return "AWS::EC2::VPCPeeringConnection";
          case ResourceType::AWS_Elasticsearch_Domain:
            return "AWS::Elasticsearch::Domain";
          case ResourceType::AWS_IAM_Group:
            return "AWS::IAM::Group";
          case ResourceType::AWS_IAM_Policy:
            return "AWS::IAM::Policy";
          case ResourceType::AWS_IAM_Role:
            return "AWS::IAM::Role";
          case ResourceType::AWS_IAM_User:
            return "AWS::IAM::User";
          case ResourceType::AWS_ElasticLoadBalancingV2_LoadBalancer:
            return "AWS::ElasticLoadBalancingV2::LoadBalancer";
          case ResourceType::AWS_ACM_Certificate:
            return "AWS::ACM::Certificate";
          case ResourceType::AWS_RDS_DBInstance:
            return "AWS::RDS::DBInstance";
          case ResourceType::AWS_RDS_DBSubnetGroup:
            return "AWS::RDS::DBSubnetGroup";
          case ResourceType::AWS_RDS_DBSecurityGroup:
            return "AWS::RDS::DBSecurityGroup";
          case ResourceType::AWS_RDS_DBSnapshot:
            return "AWS::RDS::DBSnapshot";
          case ResourceType::AWS_RDS_DBCluster:
            return "AWS::RDS::DBCluster";
          case ResourceType::AWS_RDS_DBClusterSnapshot:
            return "AWS::RDS::DBClusterSnapshot";
          case ResourceType::AWS_RDS_EventSubscription:
            return "AWS::RDS::EventSubscription";
          case ResourceType::AWS_S3_Bucket:
            return "AWS::S3::Bucket";
          case ResourceType::AWS_S3_AccountPublicAccessBlock:
            return "AWS::S3::AccountPublicAccessBlock";
          case ResourceType::AWS_Redshift_Cluster:
            return "AWS::Redshift::Cluster";
          case ResourceType::AWS_Redshift_ClusterSnapshot:
            return "AWS::Redshift::ClusterSnapshot";
          case ResourceType::AWS_Redshift_ClusterParameterGroup:
            return "AWS::Redshift::ClusterParameterGroup";
          case ResourceType::AWS_Redshift_ClusterSecurityGroup:
            return "AWS::Redshift::ClusterSecurityGroup";
          case ResourceType::AWS_Redshift_ClusterSubnetGroup:
            return "AWS::Redshift::ClusterSubnetGroup";
          case ResourceType::AWS_Redshift_EventSubscription:
            return "AWS::Redshift::EventSubscription";
          case ResourceType::AWS_SSM_ManagedInstanceInventory:
            return "AWS::SSM::ManagedInstanceInventory";
          case ResourceType::AWS_CloudWatch_Alarm:
            return "AWS::CloudWatch::Alarm";
          case ResourceType::AWS_CloudFormation_Stack:
            return "AWS::CloudFormation::Stack";
          case ResourceType::AWS_ElasticLoadBalancing_LoadBalancer:
            return "AWS::ElasticLoadBalancing::LoadBalancer";
          case ResourceType::AWS_AutoScaling_AutoScalingGroup:
            return "AWS::AutoScaling::AutoScalingGroup";
          case ResourceType::AWS_AutoScaling_LaunchConfiguration:
            return "AWS::AutoScaling::LaunchConfiguration";
          case ResourceType::AWS_AutoScaling_ScalingPolicy:
            return "AWS::AutoScaling::ScalingPolicy";
          case ResourceType::AWS_AutoScaling_ScheduledAction:
            return "AWS::AutoScaling::ScheduledAction";
          case ResourceType::AWS_DynamoDB_Table:
            return "AWS::DynamoDB::Table";
          case ResourceType::AWS_CodeBuild_Project:
            return "AWS::CodeBuild::Project";
          case ResourceType::AWS_WAF_RateBasedRule:
            return "AWS::WAF::RateBasedRule";
          case ResourceType::AWS_WAF_Rule:
            return "AWS::WAF::Rule";
          case ResourceType::AWS_WAF_RuleGroup:
            return "AWS::WAF::RuleGroup";
          case ResourceType::AWS_WAF_WebACL:
            return "AWS::WAF::WebACL";
          case ResourceType::AWS_WAFRegional_RateBasedRule:
            return "AWS::WAFRegional::RateBasedRule";
          case ResourceType::AWS_WAFRegional_Rule:
            return "AWS::WAFRegional::Rule";
          case ResourceType::AWS_WAFRegional_RuleGroup:
            return "AWS::WAFRegional::RuleGroup";
          case ResourceType::AWS_WAFRegional_WebACL:
            return "AWS::WAFRegional::WebACL";
          case ResourceType::AWS_CloudFront_Distribution:
            return "AWS::CloudFront::Distribution";
          case ResourceType::AWS_CloudFront_StreamingDistribution:
            return "AWS::CloudFront::StreamingDistribution";
          case ResourceType::AWS_Lambda_Function:
            return "AWS::Lambda::Function";
          case ResourceType::AWS_ElasticBeanstalk_Application:
            return "AWS::ElasticBeanstalk::Application";
          case ResourceType::AWS_ElasticBeanstalk_ApplicationVersion:
            return "AWS::ElasticBeanstalk::ApplicationVersion";
          case ResourceType::AWS_ElasticBeanstalk_Environment:
            return "AWS::ElasticBeanstalk::Environment";
          case ResourceType::AWS_WAFv2_WebACL:
            return "AWS::WAFv2::WebACL";
          case ResourceType::AWS_WAFv2_RuleGroup:
            return "AWS::WAFv2::RuleGroup";
          case ResourceType::AWS_WAFv2_IPSet:
            return "AWS::WAFv2::IPSet";
          case ResourceType::AWS_WAFv2_RegexPatternSet:
            return "AWS::WAFv2::RegexPatternSet";
          case ResourceType::AWS_WAFv2_ManagedRuleSet:
            return "AWS::WAFv2::ManagedRuleSet";
          case ResourceType::AWS_XRay_EncryptionConfig:
            return "AWS::XRay::EncryptionConfig";
          case ResourceType::AWS_SSM_AssociationCompliance:
            return "AWS::SSM::AssociationCompliance";
          case ResourceType::AWS_SSM_PatchCompliance:
            return "AWS::SSM::PatchCompliance";
          case ResourceType::AWS_Shield_Protection:
            return "AWS::Shield::Protection";
          case ResourceType::AWS_ShieldRegional_Protection:
            return "AWS::ShieldRegional::Protection";
          case ResourceType::AWS_Config_ResourceCompliance:
            return "AWS::Config::ResourceCompliance";
          case ResourceType::AWS_ApiGateway_Stage:
            return "AWS::ApiGateway::Stage";
          case ResourceType::AWS_ApiGateway_RestApi:
            return "AWS::ApiGateway::RestApi";
          case ResourceType::AWS_ApiGatewayV2_Stage:
            return "AWS::ApiGatewayV2::Stage";
          case ResourceType::AWS_ApiGatewayV2_Api:
            return "AWS::ApiGatewayV2::Api";
          case ResourceType::AWS_CodePipeline_Pipeline:
            return "AWS::CodePipeline::Pipeline";
          case ResourceType::AWS_ServiceCatalog_CloudFormationProvisionedProduct:
            return "AWS::ServiceCatalog::CloudFormationProvisionedProduct";
          case ResourceType::AWS_ServiceCatalog_CloudFormationProduct:
            return "AWS::ServiceCatalog::CloudFormationProduct";
          case ResourceType::AWS_ServiceCatalog_Portfolio:
            return "AWS::ServiceCatalog::Portfolio";
          case ResourceType::AWS_SQS_Queue:
            return "AWS::SQS::Queue";
          case ResourceType::AWS_KMS_Key:
            return "AWS::KMS::Key";
          case ResourceType::AWS_QLDB_Ledger:
            return "AWS::QLDB::Ledger";
          case ResourceType::AWS_SecretsManager_Secret:
            return "AWS::SecretsManager::Secret";
          case ResourceType::AWS_SNS_Topic:
            return "AWS::SNS::Topic";
          case ResourceType::AWS_SSM_FileData:
            return "AWS::SSM::FileData";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ResourceTypeMapper
    } // namespace Model
  } // namespace ConfigService
} // namespace Aws
