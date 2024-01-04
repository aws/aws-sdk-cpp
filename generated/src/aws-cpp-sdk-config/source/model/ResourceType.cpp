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
        static const int AWS_NetworkFirewall_Firewall_HASH = HashingUtils::HashString("AWS::NetworkFirewall::Firewall");
        static const int AWS_NetworkFirewall_FirewallPolicy_HASH = HashingUtils::HashString("AWS::NetworkFirewall::FirewallPolicy");
        static const int AWS_NetworkFirewall_RuleGroup_HASH = HashingUtils::HashString("AWS::NetworkFirewall::RuleGroup");
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
        static const int AWS_Config_ConformancePackCompliance_HASH = HashingUtils::HashString("AWS::Config::ConformancePackCompliance");
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
        static const int AWS_Backup_BackupPlan_HASH = HashingUtils::HashString("AWS::Backup::BackupPlan");
        static const int AWS_Backup_BackupSelection_HASH = HashingUtils::HashString("AWS::Backup::BackupSelection");
        static const int AWS_Backup_BackupVault_HASH = HashingUtils::HashString("AWS::Backup::BackupVault");
        static const int AWS_Backup_RecoveryPoint_HASH = HashingUtils::HashString("AWS::Backup::RecoveryPoint");
        static const int AWS_ECR_Repository_HASH = HashingUtils::HashString("AWS::ECR::Repository");
        static const int AWS_ECS_Cluster_HASH = HashingUtils::HashString("AWS::ECS::Cluster");
        static const int AWS_ECS_Service_HASH = HashingUtils::HashString("AWS::ECS::Service");
        static const int AWS_ECS_TaskDefinition_HASH = HashingUtils::HashString("AWS::ECS::TaskDefinition");
        static const int AWS_EFS_AccessPoint_HASH = HashingUtils::HashString("AWS::EFS::AccessPoint");
        static const int AWS_EFS_FileSystem_HASH = HashingUtils::HashString("AWS::EFS::FileSystem");
        static const int AWS_EKS_Cluster_HASH = HashingUtils::HashString("AWS::EKS::Cluster");
        static const int AWS_OpenSearch_Domain_HASH = HashingUtils::HashString("AWS::OpenSearch::Domain");
        static const int AWS_EC2_TransitGateway_HASH = HashingUtils::HashString("AWS::EC2::TransitGateway");
        static const int AWS_Kinesis_Stream_HASH = HashingUtils::HashString("AWS::Kinesis::Stream");
        static const int AWS_Kinesis_StreamConsumer_HASH = HashingUtils::HashString("AWS::Kinesis::StreamConsumer");
        static const int AWS_CodeDeploy_Application_HASH = HashingUtils::HashString("AWS::CodeDeploy::Application");
        static const int AWS_CodeDeploy_DeploymentConfig_HASH = HashingUtils::HashString("AWS::CodeDeploy::DeploymentConfig");
        static const int AWS_CodeDeploy_DeploymentGroup_HASH = HashingUtils::HashString("AWS::CodeDeploy::DeploymentGroup");
        static const int AWS_EC2_LaunchTemplate_HASH = HashingUtils::HashString("AWS::EC2::LaunchTemplate");
        static const int AWS_ECR_PublicRepository_HASH = HashingUtils::HashString("AWS::ECR::PublicRepository");
        static const int AWS_GuardDuty_Detector_HASH = HashingUtils::HashString("AWS::GuardDuty::Detector");
        static const int AWS_EMR_SecurityConfiguration_HASH = HashingUtils::HashString("AWS::EMR::SecurityConfiguration");
        static const int AWS_SageMaker_CodeRepository_HASH = HashingUtils::HashString("AWS::SageMaker::CodeRepository");
        static const int AWS_Route53Resolver_ResolverEndpoint_HASH = HashingUtils::HashString("AWS::Route53Resolver::ResolverEndpoint");
        static const int AWS_Route53Resolver_ResolverRule_HASH = HashingUtils::HashString("AWS::Route53Resolver::ResolverRule");
        static const int AWS_Route53Resolver_ResolverRuleAssociation_HASH = HashingUtils::HashString("AWS::Route53Resolver::ResolverRuleAssociation");
        static const int AWS_DMS_ReplicationSubnetGroup_HASH = HashingUtils::HashString("AWS::DMS::ReplicationSubnetGroup");
        static const int AWS_DMS_EventSubscription_HASH = HashingUtils::HashString("AWS::DMS::EventSubscription");
        static const int AWS_MSK_Cluster_HASH = HashingUtils::HashString("AWS::MSK::Cluster");
        static const int AWS_StepFunctions_Activity_HASH = HashingUtils::HashString("AWS::StepFunctions::Activity");
        static const int AWS_WorkSpaces_Workspace_HASH = HashingUtils::HashString("AWS::WorkSpaces::Workspace");
        static const int AWS_WorkSpaces_ConnectionAlias_HASH = HashingUtils::HashString("AWS::WorkSpaces::ConnectionAlias");
        static const int AWS_SageMaker_Model_HASH = HashingUtils::HashString("AWS::SageMaker::Model");
        static const int AWS_ElasticLoadBalancingV2_Listener_HASH = HashingUtils::HashString("AWS::ElasticLoadBalancingV2::Listener");
        static const int AWS_StepFunctions_StateMachine_HASH = HashingUtils::HashString("AWS::StepFunctions::StateMachine");
        static const int AWS_Batch_JobQueue_HASH = HashingUtils::HashString("AWS::Batch::JobQueue");
        static const int AWS_Batch_ComputeEnvironment_HASH = HashingUtils::HashString("AWS::Batch::ComputeEnvironment");
        static const int AWS_AccessAnalyzer_Analyzer_HASH = HashingUtils::HashString("AWS::AccessAnalyzer::Analyzer");
        static const int AWS_Athena_WorkGroup_HASH = HashingUtils::HashString("AWS::Athena::WorkGroup");
        static const int AWS_Athena_DataCatalog_HASH = HashingUtils::HashString("AWS::Athena::DataCatalog");
        static const int AWS_Detective_Graph_HASH = HashingUtils::HashString("AWS::Detective::Graph");
        static const int AWS_GlobalAccelerator_Accelerator_HASH = HashingUtils::HashString("AWS::GlobalAccelerator::Accelerator");
        static const int AWS_GlobalAccelerator_EndpointGroup_HASH = HashingUtils::HashString("AWS::GlobalAccelerator::EndpointGroup");
        static const int AWS_GlobalAccelerator_Listener_HASH = HashingUtils::HashString("AWS::GlobalAccelerator::Listener");
        static const int AWS_EC2_TransitGatewayAttachment_HASH = HashingUtils::HashString("AWS::EC2::TransitGatewayAttachment");
        static const int AWS_EC2_TransitGatewayRouteTable_HASH = HashingUtils::HashString("AWS::EC2::TransitGatewayRouteTable");
        static const int AWS_DMS_Certificate_HASH = HashingUtils::HashString("AWS::DMS::Certificate");
        static const int AWS_AppConfig_Application_HASH = HashingUtils::HashString("AWS::AppConfig::Application");
        static const int AWS_AppSync_GraphQLApi_HASH = HashingUtils::HashString("AWS::AppSync::GraphQLApi");
        static const int AWS_DataSync_LocationSMB_HASH = HashingUtils::HashString("AWS::DataSync::LocationSMB");
        static const int AWS_DataSync_LocationFSxLustre_HASH = HashingUtils::HashString("AWS::DataSync::LocationFSxLustre");
        static const int AWS_DataSync_LocationS3_HASH = HashingUtils::HashString("AWS::DataSync::LocationS3");
        static const int AWS_DataSync_LocationEFS_HASH = HashingUtils::HashString("AWS::DataSync::LocationEFS");
        static const int AWS_DataSync_Task_HASH = HashingUtils::HashString("AWS::DataSync::Task");
        static const int AWS_DataSync_LocationNFS_HASH = HashingUtils::HashString("AWS::DataSync::LocationNFS");
        static const int AWS_EC2_NetworkInsightsAccessScopeAnalysis_HASH = HashingUtils::HashString("AWS::EC2::NetworkInsightsAccessScopeAnalysis");
        static const int AWS_EKS_FargateProfile_HASH = HashingUtils::HashString("AWS::EKS::FargateProfile");
        static const int AWS_Glue_Job_HASH = HashingUtils::HashString("AWS::Glue::Job");
        static const int AWS_GuardDuty_ThreatIntelSet_HASH = HashingUtils::HashString("AWS::GuardDuty::ThreatIntelSet");
        static const int AWS_GuardDuty_IPSet_HASH = HashingUtils::HashString("AWS::GuardDuty::IPSet");
        static const int AWS_SageMaker_Workteam_HASH = HashingUtils::HashString("AWS::SageMaker::Workteam");
        static const int AWS_SageMaker_NotebookInstanceLifecycleConfig_HASH = HashingUtils::HashString("AWS::SageMaker::NotebookInstanceLifecycleConfig");
        static const int AWS_ServiceDiscovery_Service_HASH = HashingUtils::HashString("AWS::ServiceDiscovery::Service");
        static const int AWS_ServiceDiscovery_PublicDnsNamespace_HASH = HashingUtils::HashString("AWS::ServiceDiscovery::PublicDnsNamespace");
        static const int AWS_SES_ContactList_HASH = HashingUtils::HashString("AWS::SES::ContactList");
        static const int AWS_SES_ConfigurationSet_HASH = HashingUtils::HashString("AWS::SES::ConfigurationSet");
        static const int AWS_Route53_HostedZone_HASH = HashingUtils::HashString("AWS::Route53::HostedZone");
        static const int AWS_IoTEvents_Input_HASH = HashingUtils::HashString("AWS::IoTEvents::Input");
        static const int AWS_IoTEvents_DetectorModel_HASH = HashingUtils::HashString("AWS::IoTEvents::DetectorModel");
        static const int AWS_IoTEvents_AlarmModel_HASH = HashingUtils::HashString("AWS::IoTEvents::AlarmModel");
        static const int AWS_ServiceDiscovery_HttpNamespace_HASH = HashingUtils::HashString("AWS::ServiceDiscovery::HttpNamespace");
        static const int AWS_Events_EventBus_HASH = HashingUtils::HashString("AWS::Events::EventBus");
        static const int AWS_ImageBuilder_ContainerRecipe_HASH = HashingUtils::HashString("AWS::ImageBuilder::ContainerRecipe");
        static const int AWS_ImageBuilder_DistributionConfiguration_HASH = HashingUtils::HashString("AWS::ImageBuilder::DistributionConfiguration");
        static const int AWS_ImageBuilder_InfrastructureConfiguration_HASH = HashingUtils::HashString("AWS::ImageBuilder::InfrastructureConfiguration");
        static const int AWS_DataSync_LocationObjectStorage_HASH = HashingUtils::HashString("AWS::DataSync::LocationObjectStorage");
        static const int AWS_DataSync_LocationHDFS_HASH = HashingUtils::HashString("AWS::DataSync::LocationHDFS");
        static const int AWS_Glue_Classifier_HASH = HashingUtils::HashString("AWS::Glue::Classifier");
        static const int AWS_Route53RecoveryReadiness_Cell_HASH = HashingUtils::HashString("AWS::Route53RecoveryReadiness::Cell");
        static const int AWS_Route53RecoveryReadiness_ReadinessCheck_HASH = HashingUtils::HashString("AWS::Route53RecoveryReadiness::ReadinessCheck");
        static const int AWS_ECR_RegistryPolicy_HASH = HashingUtils::HashString("AWS::ECR::RegistryPolicy");
        static const int AWS_Backup_ReportPlan_HASH = HashingUtils::HashString("AWS::Backup::ReportPlan");
        static const int AWS_Lightsail_Certificate_HASH = HashingUtils::HashString("AWS::Lightsail::Certificate");
        static const int AWS_RUM_AppMonitor_HASH = HashingUtils::HashString("AWS::RUM::AppMonitor");
        static const int AWS_Events_Endpoint_HASH = HashingUtils::HashString("AWS::Events::Endpoint");
        static const int AWS_SES_ReceiptRuleSet_HASH = HashingUtils::HashString("AWS::SES::ReceiptRuleSet");
        static const int AWS_Events_Archive_HASH = HashingUtils::HashString("AWS::Events::Archive");
        static const int AWS_Events_ApiDestination_HASH = HashingUtils::HashString("AWS::Events::ApiDestination");
        static const int AWS_Lightsail_Disk_HASH = HashingUtils::HashString("AWS::Lightsail::Disk");
        static const int AWS_FIS_ExperimentTemplate_HASH = HashingUtils::HashString("AWS::FIS::ExperimentTemplate");
        static const int AWS_DataSync_LocationFSxWindows_HASH = HashingUtils::HashString("AWS::DataSync::LocationFSxWindows");
        static const int AWS_SES_ReceiptFilter_HASH = HashingUtils::HashString("AWS::SES::ReceiptFilter");
        static const int AWS_GuardDuty_Filter_HASH = HashingUtils::HashString("AWS::GuardDuty::Filter");
        static const int AWS_SES_Template_HASH = HashingUtils::HashString("AWS::SES::Template");
        static const int AWS_AmazonMQ_Broker_HASH = HashingUtils::HashString("AWS::AmazonMQ::Broker");
        static const int AWS_AppConfig_Environment_HASH = HashingUtils::HashString("AWS::AppConfig::Environment");
        static const int AWS_AppConfig_ConfigurationProfile_HASH = HashingUtils::HashString("AWS::AppConfig::ConfigurationProfile");
        static const int AWS_Cloud9_EnvironmentEC2_HASH = HashingUtils::HashString("AWS::Cloud9::EnvironmentEC2");
        static const int AWS_EventSchemas_Registry_HASH = HashingUtils::HashString("AWS::EventSchemas::Registry");
        static const int AWS_EventSchemas_RegistryPolicy_HASH = HashingUtils::HashString("AWS::EventSchemas::RegistryPolicy");
        static const int AWS_EventSchemas_Discoverer_HASH = HashingUtils::HashString("AWS::EventSchemas::Discoverer");
        static const int AWS_FraudDetector_Label_HASH = HashingUtils::HashString("AWS::FraudDetector::Label");
        static const int AWS_FraudDetector_EntityType_HASH = HashingUtils::HashString("AWS::FraudDetector::EntityType");
        static const int AWS_FraudDetector_Variable_HASH = HashingUtils::HashString("AWS::FraudDetector::Variable");
        static const int AWS_FraudDetector_Outcome_HASH = HashingUtils::HashString("AWS::FraudDetector::Outcome");
        static const int AWS_IoT_Authorizer_HASH = HashingUtils::HashString("AWS::IoT::Authorizer");
        static const int AWS_IoT_SecurityProfile_HASH = HashingUtils::HashString("AWS::IoT::SecurityProfile");
        static const int AWS_IoT_RoleAlias_HASH = HashingUtils::HashString("AWS::IoT::RoleAlias");
        static const int AWS_IoT_Dimension_HASH = HashingUtils::HashString("AWS::IoT::Dimension");
        static const int AWS_IoTAnalytics_Datastore_HASH = HashingUtils::HashString("AWS::IoTAnalytics::Datastore");
        static const int AWS_Lightsail_Bucket_HASH = HashingUtils::HashString("AWS::Lightsail::Bucket");
        static const int AWS_Lightsail_StaticIp_HASH = HashingUtils::HashString("AWS::Lightsail::StaticIp");
        static const int AWS_MediaPackage_PackagingGroup_HASH = HashingUtils::HashString("AWS::MediaPackage::PackagingGroup");
        static const int AWS_Route53RecoveryReadiness_RecoveryGroup_HASH = HashingUtils::HashString("AWS::Route53RecoveryReadiness::RecoveryGroup");
        static const int AWS_ResilienceHub_ResiliencyPolicy_HASH = HashingUtils::HashString("AWS::ResilienceHub::ResiliencyPolicy");
        static const int AWS_Transfer_Workflow_HASH = HashingUtils::HashString("AWS::Transfer::Workflow");
        static const int AWS_EKS_IdentityProviderConfig_HASH = HashingUtils::HashString("AWS::EKS::IdentityProviderConfig");
        static const int AWS_EKS_Addon_HASH = HashingUtils::HashString("AWS::EKS::Addon");
        static const int AWS_Glue_MLTransform_HASH = HashingUtils::HashString("AWS::Glue::MLTransform");
        static const int AWS_IoT_Policy_HASH = HashingUtils::HashString("AWS::IoT::Policy");
        static const int AWS_IoT_MitigationAction_HASH = HashingUtils::HashString("AWS::IoT::MitigationAction");
        static const int AWS_IoTTwinMaker_Workspace_HASH = HashingUtils::HashString("AWS::IoTTwinMaker::Workspace");
        static const int AWS_IoTTwinMaker_Entity_HASH = HashingUtils::HashString("AWS::IoTTwinMaker::Entity");
        static const int AWS_IoTAnalytics_Dataset_HASH = HashingUtils::HashString("AWS::IoTAnalytics::Dataset");
        static const int AWS_IoTAnalytics_Pipeline_HASH = HashingUtils::HashString("AWS::IoTAnalytics::Pipeline");
        static const int AWS_IoTAnalytics_Channel_HASH = HashingUtils::HashString("AWS::IoTAnalytics::Channel");
        static const int AWS_IoTSiteWise_Dashboard_HASH = HashingUtils::HashString("AWS::IoTSiteWise::Dashboard");
        static const int AWS_IoTSiteWise_Project_HASH = HashingUtils::HashString("AWS::IoTSiteWise::Project");
        static const int AWS_IoTSiteWise_Portal_HASH = HashingUtils::HashString("AWS::IoTSiteWise::Portal");
        static const int AWS_IoTSiteWise_AssetModel_HASH = HashingUtils::HashString("AWS::IoTSiteWise::AssetModel");
        static const int AWS_IVS_Channel_HASH = HashingUtils::HashString("AWS::IVS::Channel");
        static const int AWS_IVS_RecordingConfiguration_HASH = HashingUtils::HashString("AWS::IVS::RecordingConfiguration");
        static const int AWS_IVS_PlaybackKeyPair_HASH = HashingUtils::HashString("AWS::IVS::PlaybackKeyPair");
        static const int AWS_KinesisAnalyticsV2_Application_HASH = HashingUtils::HashString("AWS::KinesisAnalyticsV2::Application");
        static const int AWS_RDS_GlobalCluster_HASH = HashingUtils::HashString("AWS::RDS::GlobalCluster");
        static const int AWS_S3_MultiRegionAccessPoint_HASH = HashingUtils::HashString("AWS::S3::MultiRegionAccessPoint");
        static const int AWS_DeviceFarm_TestGridProject_HASH = HashingUtils::HashString("AWS::DeviceFarm::TestGridProject");
        static const int AWS_Budgets_BudgetsAction_HASH = HashingUtils::HashString("AWS::Budgets::BudgetsAction");
        static const int AWS_Lex_Bot_HASH = HashingUtils::HashString("AWS::Lex::Bot");
        static const int AWS_CodeGuruReviewer_RepositoryAssociation_HASH = HashingUtils::HashString("AWS::CodeGuruReviewer::RepositoryAssociation");
        static const int AWS_IoT_CustomMetric_HASH = HashingUtils::HashString("AWS::IoT::CustomMetric");
        static const int AWS_Route53Resolver_FirewallDomainList_HASH = HashingUtils::HashString("AWS::Route53Resolver::FirewallDomainList");
        static const int AWS_RoboMaker_RobotApplicationVersion_HASH = HashingUtils::HashString("AWS::RoboMaker::RobotApplicationVersion");
        static const int AWS_EC2_TrafficMirrorSession_HASH = HashingUtils::HashString("AWS::EC2::TrafficMirrorSession");
        static const int AWS_IoTSiteWise_Gateway_HASH = HashingUtils::HashString("AWS::IoTSiteWise::Gateway");
        static const int AWS_Lex_BotAlias_HASH = HashingUtils::HashString("AWS::Lex::BotAlias");
        static const int AWS_LookoutMetrics_Alert_HASH = HashingUtils::HashString("AWS::LookoutMetrics::Alert");
        static const int AWS_IoT_AccountAuditConfiguration_HASH = HashingUtils::HashString("AWS::IoT::AccountAuditConfiguration");
        static const int AWS_EC2_TrafficMirrorTarget_HASH = HashingUtils::HashString("AWS::EC2::TrafficMirrorTarget");
        static const int AWS_S3_StorageLens_HASH = HashingUtils::HashString("AWS::S3::StorageLens");
        static const int AWS_IoT_ScheduledAudit_HASH = HashingUtils::HashString("AWS::IoT::ScheduledAudit");
        static const int AWS_Events_Connection_HASH = HashingUtils::HashString("AWS::Events::Connection");
        static const int AWS_EventSchemas_Schema_HASH = HashingUtils::HashString("AWS::EventSchemas::Schema");
        static const int AWS_MediaPackage_PackagingConfiguration_HASH = HashingUtils::HashString("AWS::MediaPackage::PackagingConfiguration");
        static const int AWS_KinesisVideo_SignalingChannel_HASH = HashingUtils::HashString("AWS::KinesisVideo::SignalingChannel");
        static const int AWS_AppStream_DirectoryConfig_HASH = HashingUtils::HashString("AWS::AppStream::DirectoryConfig");
        static const int AWS_LookoutVision_Project_HASH = HashingUtils::HashString("AWS::LookoutVision::Project");
        static const int AWS_Route53RecoveryControl_Cluster_HASH = HashingUtils::HashString("AWS::Route53RecoveryControl::Cluster");
        static const int AWS_Route53RecoveryControl_SafetyRule_HASH = HashingUtils::HashString("AWS::Route53RecoveryControl::SafetyRule");
        static const int AWS_Route53RecoveryControl_ControlPanel_HASH = HashingUtils::HashString("AWS::Route53RecoveryControl::ControlPanel");
        static const int AWS_Route53RecoveryControl_RoutingControl_HASH = HashingUtils::HashString("AWS::Route53RecoveryControl::RoutingControl");
        static const int AWS_Route53RecoveryReadiness_ResourceSet_HASH = HashingUtils::HashString("AWS::Route53RecoveryReadiness::ResourceSet");
        static const int AWS_RoboMaker_SimulationApplication_HASH = HashingUtils::HashString("AWS::RoboMaker::SimulationApplication");
        static const int AWS_RoboMaker_RobotApplication_HASH = HashingUtils::HashString("AWS::RoboMaker::RobotApplication");
        static const int AWS_HealthLake_FHIRDatastore_HASH = HashingUtils::HashString("AWS::HealthLake::FHIRDatastore");
        static const int AWS_Pinpoint_Segment_HASH = HashingUtils::HashString("AWS::Pinpoint::Segment");
        static const int AWS_Pinpoint_ApplicationSettings_HASH = HashingUtils::HashString("AWS::Pinpoint::ApplicationSettings");
        static const int AWS_Events_Rule_HASH = HashingUtils::HashString("AWS::Events::Rule");
        static const int AWS_EC2_DHCPOptions_HASH = HashingUtils::HashString("AWS::EC2::DHCPOptions");
        static const int AWS_EC2_NetworkInsightsPath_HASH = HashingUtils::HashString("AWS::EC2::NetworkInsightsPath");
        static const int AWS_EC2_TrafficMirrorFilter_HASH = HashingUtils::HashString("AWS::EC2::TrafficMirrorFilter");
        static const int AWS_EC2_IPAM_HASH = HashingUtils::HashString("AWS::EC2::IPAM");
        static const int AWS_IoTTwinMaker_Scene_HASH = HashingUtils::HashString("AWS::IoTTwinMaker::Scene");
        static const int AWS_NetworkManager_TransitGatewayRegistration_HASH = HashingUtils::HashString("AWS::NetworkManager::TransitGatewayRegistration");
        static const int AWS_CustomerProfiles_Domain_HASH = HashingUtils::HashString("AWS::CustomerProfiles::Domain");
        static const int AWS_AutoScaling_WarmPool_HASH = HashingUtils::HashString("AWS::AutoScaling::WarmPool");
        static const int AWS_Connect_PhoneNumber_HASH = HashingUtils::HashString("AWS::Connect::PhoneNumber");
        static const int AWS_AppConfig_DeploymentStrategy_HASH = HashingUtils::HashString("AWS::AppConfig::DeploymentStrategy");
        static const int AWS_AppFlow_Flow_HASH = HashingUtils::HashString("AWS::AppFlow::Flow");
        static const int AWS_AuditManager_Assessment_HASH = HashingUtils::HashString("AWS::AuditManager::Assessment");
        static const int AWS_CloudWatch_MetricStream_HASH = HashingUtils::HashString("AWS::CloudWatch::MetricStream");
        static const int AWS_DeviceFarm_InstanceProfile_HASH = HashingUtils::HashString("AWS::DeviceFarm::InstanceProfile");
        static const int AWS_DeviceFarm_Project_HASH = HashingUtils::HashString("AWS::DeviceFarm::Project");
        static const int AWS_EC2_EC2Fleet_HASH = HashingUtils::HashString("AWS::EC2::EC2Fleet");
        static const int AWS_EC2_SubnetRouteTableAssociation_HASH = HashingUtils::HashString("AWS::EC2::SubnetRouteTableAssociation");
        static const int AWS_ECR_PullThroughCacheRule_HASH = HashingUtils::HashString("AWS::ECR::PullThroughCacheRule");
        static const int AWS_GroundStation_Config_HASH = HashingUtils::HashString("AWS::GroundStation::Config");
        static const int AWS_ImageBuilder_ImagePipeline_HASH = HashingUtils::HashString("AWS::ImageBuilder::ImagePipeline");
        static const int AWS_IoT_FleetMetric_HASH = HashingUtils::HashString("AWS::IoT::FleetMetric");
        static const int AWS_IoTWireless_ServiceProfile_HASH = HashingUtils::HashString("AWS::IoTWireless::ServiceProfile");
        static const int AWS_NetworkManager_Device_HASH = HashingUtils::HashString("AWS::NetworkManager::Device");
        static const int AWS_NetworkManager_GlobalNetwork_HASH = HashingUtils::HashString("AWS::NetworkManager::GlobalNetwork");
        static const int AWS_NetworkManager_Link_HASH = HashingUtils::HashString("AWS::NetworkManager::Link");
        static const int AWS_NetworkManager_Site_HASH = HashingUtils::HashString("AWS::NetworkManager::Site");
        static const int AWS_Panorama_Package_HASH = HashingUtils::HashString("AWS::Panorama::Package");
        static const int AWS_Pinpoint_App_HASH = HashingUtils::HashString("AWS::Pinpoint::App");
        static const int AWS_Redshift_ScheduledAction_HASH = HashingUtils::HashString("AWS::Redshift::ScheduledAction");
        static const int AWS_Route53Resolver_FirewallRuleGroupAssociation_HASH = HashingUtils::HashString("AWS::Route53Resolver::FirewallRuleGroupAssociation");
        static const int AWS_SageMaker_AppImageConfig_HASH = HashingUtils::HashString("AWS::SageMaker::AppImageConfig");
        static const int AWS_SageMaker_Image_HASH = HashingUtils::HashString("AWS::SageMaker::Image");
        static const int AWS_ECS_TaskSet_HASH = HashingUtils::HashString("AWS::ECS::TaskSet");
        static const int AWS_Cassandra_Keyspace_HASH = HashingUtils::HashString("AWS::Cassandra::Keyspace");
        static const int AWS_Signer_SigningProfile_HASH = HashingUtils::HashString("AWS::Signer::SigningProfile");
        static const int AWS_Amplify_App_HASH = HashingUtils::HashString("AWS::Amplify::App");
        static const int AWS_AppMesh_VirtualNode_HASH = HashingUtils::HashString("AWS::AppMesh::VirtualNode");
        static const int AWS_AppMesh_VirtualService_HASH = HashingUtils::HashString("AWS::AppMesh::VirtualService");
        static const int AWS_AppRunner_VpcConnector_HASH = HashingUtils::HashString("AWS::AppRunner::VpcConnector");
        static const int AWS_AppStream_Application_HASH = HashingUtils::HashString("AWS::AppStream::Application");
        static const int AWS_CodeArtifact_Repository_HASH = HashingUtils::HashString("AWS::CodeArtifact::Repository");
        static const int AWS_EC2_PrefixList_HASH = HashingUtils::HashString("AWS::EC2::PrefixList");
        static const int AWS_EC2_SpotFleet_HASH = HashingUtils::HashString("AWS::EC2::SpotFleet");
        static const int AWS_Evidently_Project_HASH = HashingUtils::HashString("AWS::Evidently::Project");
        static const int AWS_Forecast_Dataset_HASH = HashingUtils::HashString("AWS::Forecast::Dataset");
        static const int AWS_IAM_SAMLProvider_HASH = HashingUtils::HashString("AWS::IAM::SAMLProvider");
        static const int AWS_IAM_ServerCertificate_HASH = HashingUtils::HashString("AWS::IAM::ServerCertificate");
        static const int AWS_Pinpoint_Campaign_HASH = HashingUtils::HashString("AWS::Pinpoint::Campaign");
        static const int AWS_Pinpoint_InAppTemplate_HASH = HashingUtils::HashString("AWS::Pinpoint::InAppTemplate");
        static const int AWS_SageMaker_Domain_HASH = HashingUtils::HashString("AWS::SageMaker::Domain");
        static const int AWS_Transfer_Agreement_HASH = HashingUtils::HashString("AWS::Transfer::Agreement");
        static const int AWS_Transfer_Connector_HASH = HashingUtils::HashString("AWS::Transfer::Connector");
        static const int AWS_KinesisFirehose_DeliveryStream_HASH = HashingUtils::HashString("AWS::KinesisFirehose::DeliveryStream");
        static const int AWS_Amplify_Branch_HASH = HashingUtils::HashString("AWS::Amplify::Branch");
        static const int AWS_AppIntegrations_EventIntegration_HASH = HashingUtils::HashString("AWS::AppIntegrations::EventIntegration");
        static const int AWS_AppMesh_Route_HASH = HashingUtils::HashString("AWS::AppMesh::Route");
        static const int AWS_Athena_PreparedStatement_HASH = HashingUtils::HashString("AWS::Athena::PreparedStatement");
        static const int AWS_EC2_IPAMScope_HASH = HashingUtils::HashString("AWS::EC2::IPAMScope");
        static const int AWS_Evidently_Launch_HASH = HashingUtils::HashString("AWS::Evidently::Launch");
        static const int AWS_Forecast_DatasetGroup_HASH = HashingUtils::HashString("AWS::Forecast::DatasetGroup");
        static const int AWS_GreengrassV2_ComponentVersion_HASH = HashingUtils::HashString("AWS::GreengrassV2::ComponentVersion");
        static const int AWS_GroundStation_MissionProfile_HASH = HashingUtils::HashString("AWS::GroundStation::MissionProfile");
        static const int AWS_MediaConnect_FlowEntitlement_HASH = HashingUtils::HashString("AWS::MediaConnect::FlowEntitlement");
        static const int AWS_MediaConnect_FlowVpcInterface_HASH = HashingUtils::HashString("AWS::MediaConnect::FlowVpcInterface");
        static const int AWS_MediaTailor_PlaybackConfiguration_HASH = HashingUtils::HashString("AWS::MediaTailor::PlaybackConfiguration");
        static const int AWS_MSK_Configuration_HASH = HashingUtils::HashString("AWS::MSK::Configuration");
        static const int AWS_Personalize_Dataset_HASH = HashingUtils::HashString("AWS::Personalize::Dataset");
        static const int AWS_Personalize_Schema_HASH = HashingUtils::HashString("AWS::Personalize::Schema");
        static const int AWS_Personalize_Solution_HASH = HashingUtils::HashString("AWS::Personalize::Solution");
        static const int AWS_Pinpoint_EmailTemplate_HASH = HashingUtils::HashString("AWS::Pinpoint::EmailTemplate");
        static const int AWS_Pinpoint_EventStream_HASH = HashingUtils::HashString("AWS::Pinpoint::EventStream");
        static const int AWS_ResilienceHub_App_HASH = HashingUtils::HashString("AWS::ResilienceHub::App");
        static const int AWS_ACMPCA_CertificateAuthority_HASH = HashingUtils::HashString("AWS::ACMPCA::CertificateAuthority");
        static const int AWS_AppConfig_HostedConfigurationVersion_HASH = HashingUtils::HashString("AWS::AppConfig::HostedConfigurationVersion");
        static const int AWS_AppMesh_VirtualGateway_HASH = HashingUtils::HashString("AWS::AppMesh::VirtualGateway");
        static const int AWS_AppMesh_VirtualRouter_HASH = HashingUtils::HashString("AWS::AppMesh::VirtualRouter");
        static const int AWS_AppRunner_Service_HASH = HashingUtils::HashString("AWS::AppRunner::Service");
        static const int AWS_CustomerProfiles_ObjectType_HASH = HashingUtils::HashString("AWS::CustomerProfiles::ObjectType");
        static const int AWS_DMS_Endpoint_HASH = HashingUtils::HashString("AWS::DMS::Endpoint");
        static const int AWS_EC2_CapacityReservation_HASH = HashingUtils::HashString("AWS::EC2::CapacityReservation");
        static const int AWS_EC2_ClientVpnEndpoint_HASH = HashingUtils::HashString("AWS::EC2::ClientVpnEndpoint");
        static const int AWS_Kendra_Index_HASH = HashingUtils::HashString("AWS::Kendra::Index");
        static const int AWS_KinesisVideo_Stream_HASH = HashingUtils::HashString("AWS::KinesisVideo::Stream");
        static const int AWS_Logs_Destination_HASH = HashingUtils::HashString("AWS::Logs::Destination");
        static const int AWS_Pinpoint_EmailChannel_HASH = HashingUtils::HashString("AWS::Pinpoint::EmailChannel");
        static const int AWS_S3_AccessPoint_HASH = HashingUtils::HashString("AWS::S3::AccessPoint");
        static const int AWS_NetworkManager_CustomerGatewayAssociation_HASH = HashingUtils::HashString("AWS::NetworkManager::CustomerGatewayAssociation");
        static const int AWS_NetworkManager_LinkAssociation_HASH = HashingUtils::HashString("AWS::NetworkManager::LinkAssociation");
        static const int AWS_IoTWireless_MulticastGroup_HASH = HashingUtils::HashString("AWS::IoTWireless::MulticastGroup");
        static const int AWS_Personalize_DatasetGroup_HASH = HashingUtils::HashString("AWS::Personalize::DatasetGroup");
        static const int AWS_IoTTwinMaker_ComponentType_HASH = HashingUtils::HashString("AWS::IoTTwinMaker::ComponentType");
        static const int AWS_CodeBuild_ReportGroup_HASH = HashingUtils::HashString("AWS::CodeBuild::ReportGroup");
        static const int AWS_SageMaker_FeatureGroup_HASH = HashingUtils::HashString("AWS::SageMaker::FeatureGroup");
        static const int AWS_MSK_BatchScramSecret_HASH = HashingUtils::HashString("AWS::MSK::BatchScramSecret");
        static const int AWS_AppStream_Stack_HASH = HashingUtils::HashString("AWS::AppStream::Stack");
        static const int AWS_IoT_JobTemplate_HASH = HashingUtils::HashString("AWS::IoT::JobTemplate");
        static const int AWS_IoTWireless_FuotaTask_HASH = HashingUtils::HashString("AWS::IoTWireless::FuotaTask");
        static const int AWS_IoT_ProvisioningTemplate_HASH = HashingUtils::HashString("AWS::IoT::ProvisioningTemplate");
        static const int AWS_InspectorV2_Filter_HASH = HashingUtils::HashString("AWS::InspectorV2::Filter");
        static const int AWS_Route53Resolver_ResolverQueryLoggingConfigAssociation_HASH = HashingUtils::HashString("AWS::Route53Resolver::ResolverQueryLoggingConfigAssociation");
        static const int AWS_ServiceDiscovery_Instance_HASH = HashingUtils::HashString("AWS::ServiceDiscovery::Instance");
        static const int AWS_Transfer_Certificate_HASH = HashingUtils::HashString("AWS::Transfer::Certificate");
        static const int AWS_MediaConnect_FlowSource_HASH = HashingUtils::HashString("AWS::MediaConnect::FlowSource");
        static const int AWS_APS_RuleGroupsNamespace_HASH = HashingUtils::HashString("AWS::APS::RuleGroupsNamespace");
        static const int AWS_CodeGuruProfiler_ProfilingGroup_HASH = HashingUtils::HashString("AWS::CodeGuruProfiler::ProfilingGroup");
        static const int AWS_Route53Resolver_ResolverQueryLoggingConfig_HASH = HashingUtils::HashString("AWS::Route53Resolver::ResolverQueryLoggingConfig");
        static const int AWS_Batch_SchedulingPolicy_HASH = HashingUtils::HashString("AWS::Batch::SchedulingPolicy");
        static const int AWS_ACMPCA_CertificateAuthorityActivation_HASH = HashingUtils::HashString("AWS::ACMPCA::CertificateAuthorityActivation");
        static const int AWS_AppMesh_GatewayRoute_HASH = HashingUtils::HashString("AWS::AppMesh::GatewayRoute");
        static const int AWS_AppMesh_Mesh_HASH = HashingUtils::HashString("AWS::AppMesh::Mesh");
        static const int AWS_Connect_Instance_HASH = HashingUtils::HashString("AWS::Connect::Instance");
        static const int AWS_Connect_QuickConnect_HASH = HashingUtils::HashString("AWS::Connect::QuickConnect");
        static const int AWS_EC2_CarrierGateway_HASH = HashingUtils::HashString("AWS::EC2::CarrierGateway");
        static const int AWS_EC2_IPAMPool_HASH = HashingUtils::HashString("AWS::EC2::IPAMPool");
        static const int AWS_EC2_TransitGatewayConnect_HASH = HashingUtils::HashString("AWS::EC2::TransitGatewayConnect");
        static const int AWS_EC2_TransitGatewayMulticastDomain_HASH = HashingUtils::HashString("AWS::EC2::TransitGatewayMulticastDomain");
        static const int AWS_ECS_CapacityProvider_HASH = HashingUtils::HashString("AWS::ECS::CapacityProvider");
        static const int AWS_IAM_InstanceProfile_HASH = HashingUtils::HashString("AWS::IAM::InstanceProfile");
        static const int AWS_IoT_CACertificate_HASH = HashingUtils::HashString("AWS::IoT::CACertificate");
        static const int AWS_IoTTwinMaker_SyncJob_HASH = HashingUtils::HashString("AWS::IoTTwinMaker::SyncJob");
        static const int AWS_KafkaConnect_Connector_HASH = HashingUtils::HashString("AWS::KafkaConnect::Connector");
        static const int AWS_Lambda_CodeSigningConfig_HASH = HashingUtils::HashString("AWS::Lambda::CodeSigningConfig");
        static const int AWS_NetworkManager_ConnectPeer_HASH = HashingUtils::HashString("AWS::NetworkManager::ConnectPeer");
        static const int AWS_ResourceExplorer2_Index_HASH = HashingUtils::HashString("AWS::ResourceExplorer2::Index");
        static const int AWS_AppStream_Fleet_HASH = HashingUtils::HashString("AWS::AppStream::Fleet");
        static const int AWS_Cognito_UserPool_HASH = HashingUtils::HashString("AWS::Cognito::UserPool");
        static const int AWS_Cognito_UserPoolClient_HASH = HashingUtils::HashString("AWS::Cognito::UserPoolClient");
        static const int AWS_Cognito_UserPoolGroup_HASH = HashingUtils::HashString("AWS::Cognito::UserPoolGroup");
        static const int AWS_EC2_NetworkInsightsAccessScope_HASH = HashingUtils::HashString("AWS::EC2::NetworkInsightsAccessScope");
        static const int AWS_EC2_NetworkInsightsAnalysis_HASH = HashingUtils::HashString("AWS::EC2::NetworkInsightsAnalysis");
        static const int AWS_Grafana_Workspace_HASH = HashingUtils::HashString("AWS::Grafana::Workspace");
        static const int AWS_GroundStation_DataflowEndpointGroup_HASH = HashingUtils::HashString("AWS::GroundStation::DataflowEndpointGroup");
        static const int AWS_ImageBuilder_ImageRecipe_HASH = HashingUtils::HashString("AWS::ImageBuilder::ImageRecipe");
        static const int AWS_KMS_Alias_HASH = HashingUtils::HashString("AWS::KMS::Alias");
        static const int AWS_M2_Environment_HASH = HashingUtils::HashString("AWS::M2::Environment");
        static const int AWS_QuickSight_DataSource_HASH = HashingUtils::HashString("AWS::QuickSight::DataSource");
        static const int AWS_QuickSight_Template_HASH = HashingUtils::HashString("AWS::QuickSight::Template");
        static const int AWS_QuickSight_Theme_HASH = HashingUtils::HashString("AWS::QuickSight::Theme");
        static const int AWS_RDS_OptionGroup_HASH = HashingUtils::HashString("AWS::RDS::OptionGroup");
        static const int AWS_Redshift_EndpointAccess_HASH = HashingUtils::HashString("AWS::Redshift::EndpointAccess");
        static const int AWS_Route53Resolver_FirewallRuleGroup_HASH = HashingUtils::HashString("AWS::Route53Resolver::FirewallRuleGroup");
        static const int AWS_SSM_Document_HASH = HashingUtils::HashString("AWS::SSM::Document");

        /*
        The if-else chains in this file are converted into a jump table by the compiler,
        which allows constant time lookup. The chain has been broken into helper functions
        because MSVC has a maximum of 122 chained if-else blocks.
        */
        static bool GetEnumForNameHelper0(int hashCode, ResourceType& enumValue)
        {
          if (hashCode == AWS_EC2_CustomerGateway_HASH)
          {
            enumValue = ResourceType::AWS_EC2_CustomerGateway;
            return true;
          }
          else if (hashCode == AWS_EC2_EIP_HASH)
          {
            enumValue = ResourceType::AWS_EC2_EIP;
            return true;
          }
          else if (hashCode == AWS_EC2_Host_HASH)
          {
            enumValue = ResourceType::AWS_EC2_Host;
            return true;
          }
          else if (hashCode == AWS_EC2_Instance_HASH)
          {
            enumValue = ResourceType::AWS_EC2_Instance;
            return true;
          }
          else if (hashCode == AWS_EC2_InternetGateway_HASH)
          {
            enumValue = ResourceType::AWS_EC2_InternetGateway;
            return true;
          }
          else if (hashCode == AWS_EC2_NetworkAcl_HASH)
          {
            enumValue = ResourceType::AWS_EC2_NetworkAcl;
            return true;
          }
          else if (hashCode == AWS_EC2_NetworkInterface_HASH)
          {
            enumValue = ResourceType::AWS_EC2_NetworkInterface;
            return true;
          }
          else if (hashCode == AWS_EC2_RouteTable_HASH)
          {
            enumValue = ResourceType::AWS_EC2_RouteTable;
            return true;
          }
          else if (hashCode == AWS_EC2_SecurityGroup_HASH)
          {
            enumValue = ResourceType::AWS_EC2_SecurityGroup;
            return true;
          }
          else if (hashCode == AWS_EC2_Subnet_HASH)
          {
            enumValue = ResourceType::AWS_EC2_Subnet;
            return true;
          }
          else if (hashCode == AWS_CloudTrail_Trail_HASH)
          {
            enumValue = ResourceType::AWS_CloudTrail_Trail;
            return true;
          }
          else if (hashCode == AWS_EC2_Volume_HASH)
          {
            enumValue = ResourceType::AWS_EC2_Volume;
            return true;
          }
          else if (hashCode == AWS_EC2_VPC_HASH)
          {
            enumValue = ResourceType::AWS_EC2_VPC;
            return true;
          }
          else if (hashCode == AWS_EC2_VPNConnection_HASH)
          {
            enumValue = ResourceType::AWS_EC2_VPNConnection;
            return true;
          }
          else if (hashCode == AWS_EC2_VPNGateway_HASH)
          {
            enumValue = ResourceType::AWS_EC2_VPNGateway;
            return true;
          }
          else if (hashCode == AWS_EC2_RegisteredHAInstance_HASH)
          {
            enumValue = ResourceType::AWS_EC2_RegisteredHAInstance;
            return true;
          }
          else if (hashCode == AWS_EC2_NatGateway_HASH)
          {
            enumValue = ResourceType::AWS_EC2_NatGateway;
            return true;
          }
          else if (hashCode == AWS_EC2_EgressOnlyInternetGateway_HASH)
          {
            enumValue = ResourceType::AWS_EC2_EgressOnlyInternetGateway;
            return true;
          }
          else if (hashCode == AWS_EC2_VPCEndpoint_HASH)
          {
            enumValue = ResourceType::AWS_EC2_VPCEndpoint;
            return true;
          }
          else if (hashCode == AWS_EC2_VPCEndpointService_HASH)
          {
            enumValue = ResourceType::AWS_EC2_VPCEndpointService;
            return true;
          }
          else if (hashCode == AWS_EC2_FlowLog_HASH)
          {
            enumValue = ResourceType::AWS_EC2_FlowLog;
            return true;
          }
          else if (hashCode == AWS_EC2_VPCPeeringConnection_HASH)
          {
            enumValue = ResourceType::AWS_EC2_VPCPeeringConnection;
            return true;
          }
          else if (hashCode == AWS_Elasticsearch_Domain_HASH)
          {
            enumValue = ResourceType::AWS_Elasticsearch_Domain;
            return true;
          }
          else if (hashCode == AWS_IAM_Group_HASH)
          {
            enumValue = ResourceType::AWS_IAM_Group;
            return true;
          }
          else if (hashCode == AWS_IAM_Policy_HASH)
          {
            enumValue = ResourceType::AWS_IAM_Policy;
            return true;
          }
          else if (hashCode == AWS_IAM_Role_HASH)
          {
            enumValue = ResourceType::AWS_IAM_Role;
            return true;
          }
          else if (hashCode == AWS_IAM_User_HASH)
          {
            enumValue = ResourceType::AWS_IAM_User;
            return true;
          }
          else if (hashCode == AWS_ElasticLoadBalancingV2_LoadBalancer_HASH)
          {
            enumValue = ResourceType::AWS_ElasticLoadBalancingV2_LoadBalancer;
            return true;
          }
          else if (hashCode == AWS_ACM_Certificate_HASH)
          {
            enumValue = ResourceType::AWS_ACM_Certificate;
            return true;
          }
          else if (hashCode == AWS_RDS_DBInstance_HASH)
          {
            enumValue = ResourceType::AWS_RDS_DBInstance;
            return true;
          }
          else if (hashCode == AWS_RDS_DBSubnetGroup_HASH)
          {
            enumValue = ResourceType::AWS_RDS_DBSubnetGroup;
            return true;
          }
          else if (hashCode == AWS_RDS_DBSecurityGroup_HASH)
          {
            enumValue = ResourceType::AWS_RDS_DBSecurityGroup;
            return true;
          }
          else if (hashCode == AWS_RDS_DBSnapshot_HASH)
          {
            enumValue = ResourceType::AWS_RDS_DBSnapshot;
            return true;
          }
          else if (hashCode == AWS_RDS_DBCluster_HASH)
          {
            enumValue = ResourceType::AWS_RDS_DBCluster;
            return true;
          }
          else if (hashCode == AWS_RDS_DBClusterSnapshot_HASH)
          {
            enumValue = ResourceType::AWS_RDS_DBClusterSnapshot;
            return true;
          }
          else if (hashCode == AWS_RDS_EventSubscription_HASH)
          {
            enumValue = ResourceType::AWS_RDS_EventSubscription;
            return true;
          }
          else if (hashCode == AWS_S3_Bucket_HASH)
          {
            enumValue = ResourceType::AWS_S3_Bucket;
            return true;
          }
          else if (hashCode == AWS_S3_AccountPublicAccessBlock_HASH)
          {
            enumValue = ResourceType::AWS_S3_AccountPublicAccessBlock;
            return true;
          }
          else if (hashCode == AWS_Redshift_Cluster_HASH)
          {
            enumValue = ResourceType::AWS_Redshift_Cluster;
            return true;
          }
          else if (hashCode == AWS_Redshift_ClusterSnapshot_HASH)
          {
            enumValue = ResourceType::AWS_Redshift_ClusterSnapshot;
            return true;
          }
          else if (hashCode == AWS_Redshift_ClusterParameterGroup_HASH)
          {
            enumValue = ResourceType::AWS_Redshift_ClusterParameterGroup;
            return true;
          }
          else if (hashCode == AWS_Redshift_ClusterSecurityGroup_HASH)
          {
            enumValue = ResourceType::AWS_Redshift_ClusterSecurityGroup;
            return true;
          }
          else if (hashCode == AWS_Redshift_ClusterSubnetGroup_HASH)
          {
            enumValue = ResourceType::AWS_Redshift_ClusterSubnetGroup;
            return true;
          }
          else if (hashCode == AWS_Redshift_EventSubscription_HASH)
          {
            enumValue = ResourceType::AWS_Redshift_EventSubscription;
            return true;
          }
          else if (hashCode == AWS_SSM_ManagedInstanceInventory_HASH)
          {
            enumValue = ResourceType::AWS_SSM_ManagedInstanceInventory;
            return true;
          }
          else if (hashCode == AWS_CloudWatch_Alarm_HASH)
          {
            enumValue = ResourceType::AWS_CloudWatch_Alarm;
            return true;
          }
          else if (hashCode == AWS_CloudFormation_Stack_HASH)
          {
            enumValue = ResourceType::AWS_CloudFormation_Stack;
            return true;
          }
          else if (hashCode == AWS_ElasticLoadBalancing_LoadBalancer_HASH)
          {
            enumValue = ResourceType::AWS_ElasticLoadBalancing_LoadBalancer;
            return true;
          }
          else if (hashCode == AWS_AutoScaling_AutoScalingGroup_HASH)
          {
            enumValue = ResourceType::AWS_AutoScaling_AutoScalingGroup;
            return true;
          }
          else if (hashCode == AWS_AutoScaling_LaunchConfiguration_HASH)
          {
            enumValue = ResourceType::AWS_AutoScaling_LaunchConfiguration;
            return true;
          }
          else if (hashCode == AWS_AutoScaling_ScalingPolicy_HASH)
          {
            enumValue = ResourceType::AWS_AutoScaling_ScalingPolicy;
            return true;
          }
          else if (hashCode == AWS_AutoScaling_ScheduledAction_HASH)
          {
            enumValue = ResourceType::AWS_AutoScaling_ScheduledAction;
            return true;
          }
          else if (hashCode == AWS_DynamoDB_Table_HASH)
          {
            enumValue = ResourceType::AWS_DynamoDB_Table;
            return true;
          }
          else if (hashCode == AWS_CodeBuild_Project_HASH)
          {
            enumValue = ResourceType::AWS_CodeBuild_Project;
            return true;
          }
          else if (hashCode == AWS_WAF_RateBasedRule_HASH)
          {
            enumValue = ResourceType::AWS_WAF_RateBasedRule;
            return true;
          }
          else if (hashCode == AWS_WAF_Rule_HASH)
          {
            enumValue = ResourceType::AWS_WAF_Rule;
            return true;
          }
          else if (hashCode == AWS_WAF_RuleGroup_HASH)
          {
            enumValue = ResourceType::AWS_WAF_RuleGroup;
            return true;
          }
          else if (hashCode == AWS_WAF_WebACL_HASH)
          {
            enumValue = ResourceType::AWS_WAF_WebACL;
            return true;
          }
          else if (hashCode == AWS_WAFRegional_RateBasedRule_HASH)
          {
            enumValue = ResourceType::AWS_WAFRegional_RateBasedRule;
            return true;
          }
          else if (hashCode == AWS_WAFRegional_Rule_HASH)
          {
            enumValue = ResourceType::AWS_WAFRegional_Rule;
            return true;
          }
          else if (hashCode == AWS_WAFRegional_RuleGroup_HASH)
          {
            enumValue = ResourceType::AWS_WAFRegional_RuleGroup;
            return true;
          }
          else if (hashCode == AWS_WAFRegional_WebACL_HASH)
          {
            enumValue = ResourceType::AWS_WAFRegional_WebACL;
            return true;
          }
          else if (hashCode == AWS_CloudFront_Distribution_HASH)
          {
            enumValue = ResourceType::AWS_CloudFront_Distribution;
            return true;
          }
          else if (hashCode == AWS_CloudFront_StreamingDistribution_HASH)
          {
            enumValue = ResourceType::AWS_CloudFront_StreamingDistribution;
            return true;
          }
          else if (hashCode == AWS_Lambda_Function_HASH)
          {
            enumValue = ResourceType::AWS_Lambda_Function;
            return true;
          }
          else if (hashCode == AWS_NetworkFirewall_Firewall_HASH)
          {
            enumValue = ResourceType::AWS_NetworkFirewall_Firewall;
            return true;
          }
          else if (hashCode == AWS_NetworkFirewall_FirewallPolicy_HASH)
          {
            enumValue = ResourceType::AWS_NetworkFirewall_FirewallPolicy;
            return true;
          }
          else if (hashCode == AWS_NetworkFirewall_RuleGroup_HASH)
          {
            enumValue = ResourceType::AWS_NetworkFirewall_RuleGroup;
            return true;
          }
          else if (hashCode == AWS_ElasticBeanstalk_Application_HASH)
          {
            enumValue = ResourceType::AWS_ElasticBeanstalk_Application;
            return true;
          }
          else if (hashCode == AWS_ElasticBeanstalk_ApplicationVersion_HASH)
          {
            enumValue = ResourceType::AWS_ElasticBeanstalk_ApplicationVersion;
            return true;
          }
          else if (hashCode == AWS_ElasticBeanstalk_Environment_HASH)
          {
            enumValue = ResourceType::AWS_ElasticBeanstalk_Environment;
            return true;
          }
          else if (hashCode == AWS_WAFv2_WebACL_HASH)
          {
            enumValue = ResourceType::AWS_WAFv2_WebACL;
            return true;
          }
          else if (hashCode == AWS_WAFv2_RuleGroup_HASH)
          {
            enumValue = ResourceType::AWS_WAFv2_RuleGroup;
            return true;
          }
          else if (hashCode == AWS_WAFv2_IPSet_HASH)
          {
            enumValue = ResourceType::AWS_WAFv2_IPSet;
            return true;
          }
          else if (hashCode == AWS_WAFv2_RegexPatternSet_HASH)
          {
            enumValue = ResourceType::AWS_WAFv2_RegexPatternSet;
            return true;
          }
          else if (hashCode == AWS_WAFv2_ManagedRuleSet_HASH)
          {
            enumValue = ResourceType::AWS_WAFv2_ManagedRuleSet;
            return true;
          }
          else if (hashCode == AWS_XRay_EncryptionConfig_HASH)
          {
            enumValue = ResourceType::AWS_XRay_EncryptionConfig;
            return true;
          }
          else if (hashCode == AWS_SSM_AssociationCompliance_HASH)
          {
            enumValue = ResourceType::AWS_SSM_AssociationCompliance;
            return true;
          }
          else if (hashCode == AWS_SSM_PatchCompliance_HASH)
          {
            enumValue = ResourceType::AWS_SSM_PatchCompliance;
            return true;
          }
          else if (hashCode == AWS_Shield_Protection_HASH)
          {
            enumValue = ResourceType::AWS_Shield_Protection;
            return true;
          }
          else if (hashCode == AWS_ShieldRegional_Protection_HASH)
          {
            enumValue = ResourceType::AWS_ShieldRegional_Protection;
            return true;
          }
          else if (hashCode == AWS_Config_ConformancePackCompliance_HASH)
          {
            enumValue = ResourceType::AWS_Config_ConformancePackCompliance;
            return true;
          }
          else if (hashCode == AWS_Config_ResourceCompliance_HASH)
          {
            enumValue = ResourceType::AWS_Config_ResourceCompliance;
            return true;
          }
          else if (hashCode == AWS_ApiGateway_Stage_HASH)
          {
            enumValue = ResourceType::AWS_ApiGateway_Stage;
            return true;
          }
          else if (hashCode == AWS_ApiGateway_RestApi_HASH)
          {
            enumValue = ResourceType::AWS_ApiGateway_RestApi;
            return true;
          }
          else if (hashCode == AWS_ApiGatewayV2_Stage_HASH)
          {
            enumValue = ResourceType::AWS_ApiGatewayV2_Stage;
            return true;
          }
          else if (hashCode == AWS_ApiGatewayV2_Api_HASH)
          {
            enumValue = ResourceType::AWS_ApiGatewayV2_Api;
            return true;
          }
          else if (hashCode == AWS_CodePipeline_Pipeline_HASH)
          {
            enumValue = ResourceType::AWS_CodePipeline_Pipeline;
            return true;
          }
          else if (hashCode == AWS_ServiceCatalog_CloudFormationProvisionedProduct_HASH)
          {
            enumValue = ResourceType::AWS_ServiceCatalog_CloudFormationProvisionedProduct;
            return true;
          }
          else if (hashCode == AWS_ServiceCatalog_CloudFormationProduct_HASH)
          {
            enumValue = ResourceType::AWS_ServiceCatalog_CloudFormationProduct;
            return true;
          }
          else if (hashCode == AWS_ServiceCatalog_Portfolio_HASH)
          {
            enumValue = ResourceType::AWS_ServiceCatalog_Portfolio;
            return true;
          }
          else if (hashCode == AWS_SQS_Queue_HASH)
          {
            enumValue = ResourceType::AWS_SQS_Queue;
            return true;
          }
          else if (hashCode == AWS_KMS_Key_HASH)
          {
            enumValue = ResourceType::AWS_KMS_Key;
            return true;
          }
          else if (hashCode == AWS_QLDB_Ledger_HASH)
          {
            enumValue = ResourceType::AWS_QLDB_Ledger;
            return true;
          }
          else if (hashCode == AWS_SecretsManager_Secret_HASH)
          {
            enumValue = ResourceType::AWS_SecretsManager_Secret;
            return true;
          }
          else if (hashCode == AWS_SNS_Topic_HASH)
          {
            enumValue = ResourceType::AWS_SNS_Topic;
            return true;
          }
          else if (hashCode == AWS_SSM_FileData_HASH)
          {
            enumValue = ResourceType::AWS_SSM_FileData;
            return true;
          }
          else if (hashCode == AWS_Backup_BackupPlan_HASH)
          {
            enumValue = ResourceType::AWS_Backup_BackupPlan;
            return true;
          }
          else if (hashCode == AWS_Backup_BackupSelection_HASH)
          {
            enumValue = ResourceType::AWS_Backup_BackupSelection;
            return true;
          }
          else if (hashCode == AWS_Backup_BackupVault_HASH)
          {
            enumValue = ResourceType::AWS_Backup_BackupVault;
            return true;
          }
          else if (hashCode == AWS_Backup_RecoveryPoint_HASH)
          {
            enumValue = ResourceType::AWS_Backup_RecoveryPoint;
            return true;
          }
          else if (hashCode == AWS_ECR_Repository_HASH)
          {
            enumValue = ResourceType::AWS_ECR_Repository;
            return true;
          }
          else if (hashCode == AWS_ECS_Cluster_HASH)
          {
            enumValue = ResourceType::AWS_ECS_Cluster;
            return true;
          }
          else if (hashCode == AWS_ECS_Service_HASH)
          {
            enumValue = ResourceType::AWS_ECS_Service;
            return true;
          }
          else if (hashCode == AWS_ECS_TaskDefinition_HASH)
          {
            enumValue = ResourceType::AWS_ECS_TaskDefinition;
            return true;
          }
          else if (hashCode == AWS_EFS_AccessPoint_HASH)
          {
            enumValue = ResourceType::AWS_EFS_AccessPoint;
            return true;
          }
          else if (hashCode == AWS_EFS_FileSystem_HASH)
          {
            enumValue = ResourceType::AWS_EFS_FileSystem;
            return true;
          }
          else if (hashCode == AWS_EKS_Cluster_HASH)
          {
            enumValue = ResourceType::AWS_EKS_Cluster;
            return true;
          }
          else if (hashCode == AWS_OpenSearch_Domain_HASH)
          {
            enumValue = ResourceType::AWS_OpenSearch_Domain;
            return true;
          }
          else if (hashCode == AWS_EC2_TransitGateway_HASH)
          {
            enumValue = ResourceType::AWS_EC2_TransitGateway;
            return true;
          }
          else if (hashCode == AWS_Kinesis_Stream_HASH)
          {
            enumValue = ResourceType::AWS_Kinesis_Stream;
            return true;
          }
          else if (hashCode == AWS_Kinesis_StreamConsumer_HASH)
          {
            enumValue = ResourceType::AWS_Kinesis_StreamConsumer;
            return true;
          }
          else if (hashCode == AWS_CodeDeploy_Application_HASH)
          {
            enumValue = ResourceType::AWS_CodeDeploy_Application;
            return true;
          }
          else if (hashCode == AWS_CodeDeploy_DeploymentConfig_HASH)
          {
            enumValue = ResourceType::AWS_CodeDeploy_DeploymentConfig;
            return true;
          }
          else if (hashCode == AWS_CodeDeploy_DeploymentGroup_HASH)
          {
            enumValue = ResourceType::AWS_CodeDeploy_DeploymentGroup;
            return true;
          }
          else if (hashCode == AWS_EC2_LaunchTemplate_HASH)
          {
            enumValue = ResourceType::AWS_EC2_LaunchTemplate;
            return true;
          }
          else if (hashCode == AWS_ECR_PublicRepository_HASH)
          {
            enumValue = ResourceType::AWS_ECR_PublicRepository;
            return true;
          }
          else if (hashCode == AWS_GuardDuty_Detector_HASH)
          {
            enumValue = ResourceType::AWS_GuardDuty_Detector;
            return true;
          }
          else if (hashCode == AWS_EMR_SecurityConfiguration_HASH)
          {
            enumValue = ResourceType::AWS_EMR_SecurityConfiguration;
            return true;
          }
          else if (hashCode == AWS_SageMaker_CodeRepository_HASH)
          {
            enumValue = ResourceType::AWS_SageMaker_CodeRepository;
            return true;
          }
          else if (hashCode == AWS_Route53Resolver_ResolverEndpoint_HASH)
          {
            enumValue = ResourceType::AWS_Route53Resolver_ResolverEndpoint;
            return true;
          }
          else if (hashCode == AWS_Route53Resolver_ResolverRule_HASH)
          {
            enumValue = ResourceType::AWS_Route53Resolver_ResolverRule;
            return true;
          }
          return false;
        }
        static bool GetEnumForNameHelper1(int hashCode, ResourceType& enumValue)
        {
          if (hashCode == AWS_Route53Resolver_ResolverRuleAssociation_HASH)
          {
            enumValue = ResourceType::AWS_Route53Resolver_ResolverRuleAssociation;
            return true;
          }
          else if (hashCode == AWS_DMS_ReplicationSubnetGroup_HASH)
          {
            enumValue = ResourceType::AWS_DMS_ReplicationSubnetGroup;
            return true;
          }
          else if (hashCode == AWS_DMS_EventSubscription_HASH)
          {
            enumValue = ResourceType::AWS_DMS_EventSubscription;
            return true;
          }
          else if (hashCode == AWS_MSK_Cluster_HASH)
          {
            enumValue = ResourceType::AWS_MSK_Cluster;
            return true;
          }
          else if (hashCode == AWS_StepFunctions_Activity_HASH)
          {
            enumValue = ResourceType::AWS_StepFunctions_Activity;
            return true;
          }
          else if (hashCode == AWS_WorkSpaces_Workspace_HASH)
          {
            enumValue = ResourceType::AWS_WorkSpaces_Workspace;
            return true;
          }
          else if (hashCode == AWS_WorkSpaces_ConnectionAlias_HASH)
          {
            enumValue = ResourceType::AWS_WorkSpaces_ConnectionAlias;
            return true;
          }
          else if (hashCode == AWS_SageMaker_Model_HASH)
          {
            enumValue = ResourceType::AWS_SageMaker_Model;
            return true;
          }
          else if (hashCode == AWS_ElasticLoadBalancingV2_Listener_HASH)
          {
            enumValue = ResourceType::AWS_ElasticLoadBalancingV2_Listener;
            return true;
          }
          else if (hashCode == AWS_StepFunctions_StateMachine_HASH)
          {
            enumValue = ResourceType::AWS_StepFunctions_StateMachine;
            return true;
          }
          else if (hashCode == AWS_Batch_JobQueue_HASH)
          {
            enumValue = ResourceType::AWS_Batch_JobQueue;
            return true;
          }
          else if (hashCode == AWS_Batch_ComputeEnvironment_HASH)
          {
            enumValue = ResourceType::AWS_Batch_ComputeEnvironment;
            return true;
          }
          else if (hashCode == AWS_AccessAnalyzer_Analyzer_HASH)
          {
            enumValue = ResourceType::AWS_AccessAnalyzer_Analyzer;
            return true;
          }
          else if (hashCode == AWS_Athena_WorkGroup_HASH)
          {
            enumValue = ResourceType::AWS_Athena_WorkGroup;
            return true;
          }
          else if (hashCode == AWS_Athena_DataCatalog_HASH)
          {
            enumValue = ResourceType::AWS_Athena_DataCatalog;
            return true;
          }
          else if (hashCode == AWS_Detective_Graph_HASH)
          {
            enumValue = ResourceType::AWS_Detective_Graph;
            return true;
          }
          else if (hashCode == AWS_GlobalAccelerator_Accelerator_HASH)
          {
            enumValue = ResourceType::AWS_GlobalAccelerator_Accelerator;
            return true;
          }
          else if (hashCode == AWS_GlobalAccelerator_EndpointGroup_HASH)
          {
            enumValue = ResourceType::AWS_GlobalAccelerator_EndpointGroup;
            return true;
          }
          else if (hashCode == AWS_GlobalAccelerator_Listener_HASH)
          {
            enumValue = ResourceType::AWS_GlobalAccelerator_Listener;
            return true;
          }
          else if (hashCode == AWS_EC2_TransitGatewayAttachment_HASH)
          {
            enumValue = ResourceType::AWS_EC2_TransitGatewayAttachment;
            return true;
          }
          else if (hashCode == AWS_EC2_TransitGatewayRouteTable_HASH)
          {
            enumValue = ResourceType::AWS_EC2_TransitGatewayRouteTable;
            return true;
          }
          else if (hashCode == AWS_DMS_Certificate_HASH)
          {
            enumValue = ResourceType::AWS_DMS_Certificate;
            return true;
          }
          else if (hashCode == AWS_AppConfig_Application_HASH)
          {
            enumValue = ResourceType::AWS_AppConfig_Application;
            return true;
          }
          else if (hashCode == AWS_AppSync_GraphQLApi_HASH)
          {
            enumValue = ResourceType::AWS_AppSync_GraphQLApi;
            return true;
          }
          else if (hashCode == AWS_DataSync_LocationSMB_HASH)
          {
            enumValue = ResourceType::AWS_DataSync_LocationSMB;
            return true;
          }
          else if (hashCode == AWS_DataSync_LocationFSxLustre_HASH)
          {
            enumValue = ResourceType::AWS_DataSync_LocationFSxLustre;
            return true;
          }
          else if (hashCode == AWS_DataSync_LocationS3_HASH)
          {
            enumValue = ResourceType::AWS_DataSync_LocationS3;
            return true;
          }
          else if (hashCode == AWS_DataSync_LocationEFS_HASH)
          {
            enumValue = ResourceType::AWS_DataSync_LocationEFS;
            return true;
          }
          else if (hashCode == AWS_DataSync_Task_HASH)
          {
            enumValue = ResourceType::AWS_DataSync_Task;
            return true;
          }
          else if (hashCode == AWS_DataSync_LocationNFS_HASH)
          {
            enumValue = ResourceType::AWS_DataSync_LocationNFS;
            return true;
          }
          else if (hashCode == AWS_EC2_NetworkInsightsAccessScopeAnalysis_HASH)
          {
            enumValue = ResourceType::AWS_EC2_NetworkInsightsAccessScopeAnalysis;
            return true;
          }
          else if (hashCode == AWS_EKS_FargateProfile_HASH)
          {
            enumValue = ResourceType::AWS_EKS_FargateProfile;
            return true;
          }
          else if (hashCode == AWS_Glue_Job_HASH)
          {
            enumValue = ResourceType::AWS_Glue_Job;
            return true;
          }
          else if (hashCode == AWS_GuardDuty_ThreatIntelSet_HASH)
          {
            enumValue = ResourceType::AWS_GuardDuty_ThreatIntelSet;
            return true;
          }
          else if (hashCode == AWS_GuardDuty_IPSet_HASH)
          {
            enumValue = ResourceType::AWS_GuardDuty_IPSet;
            return true;
          }
          else if (hashCode == AWS_SageMaker_Workteam_HASH)
          {
            enumValue = ResourceType::AWS_SageMaker_Workteam;
            return true;
          }
          else if (hashCode == AWS_SageMaker_NotebookInstanceLifecycleConfig_HASH)
          {
            enumValue = ResourceType::AWS_SageMaker_NotebookInstanceLifecycleConfig;
            return true;
          }
          else if (hashCode == AWS_ServiceDiscovery_Service_HASH)
          {
            enumValue = ResourceType::AWS_ServiceDiscovery_Service;
            return true;
          }
          else if (hashCode == AWS_ServiceDiscovery_PublicDnsNamespace_HASH)
          {
            enumValue = ResourceType::AWS_ServiceDiscovery_PublicDnsNamespace;
            return true;
          }
          else if (hashCode == AWS_SES_ContactList_HASH)
          {
            enumValue = ResourceType::AWS_SES_ContactList;
            return true;
          }
          else if (hashCode == AWS_SES_ConfigurationSet_HASH)
          {
            enumValue = ResourceType::AWS_SES_ConfigurationSet;
            return true;
          }
          else if (hashCode == AWS_Route53_HostedZone_HASH)
          {
            enumValue = ResourceType::AWS_Route53_HostedZone;
            return true;
          }
          else if (hashCode == AWS_IoTEvents_Input_HASH)
          {
            enumValue = ResourceType::AWS_IoTEvents_Input;
            return true;
          }
          else if (hashCode == AWS_IoTEvents_DetectorModel_HASH)
          {
            enumValue = ResourceType::AWS_IoTEvents_DetectorModel;
            return true;
          }
          else if (hashCode == AWS_IoTEvents_AlarmModel_HASH)
          {
            enumValue = ResourceType::AWS_IoTEvents_AlarmModel;
            return true;
          }
          else if (hashCode == AWS_ServiceDiscovery_HttpNamespace_HASH)
          {
            enumValue = ResourceType::AWS_ServiceDiscovery_HttpNamespace;
            return true;
          }
          else if (hashCode == AWS_Events_EventBus_HASH)
          {
            enumValue = ResourceType::AWS_Events_EventBus;
            return true;
          }
          else if (hashCode == AWS_ImageBuilder_ContainerRecipe_HASH)
          {
            enumValue = ResourceType::AWS_ImageBuilder_ContainerRecipe;
            return true;
          }
          else if (hashCode == AWS_ImageBuilder_DistributionConfiguration_HASH)
          {
            enumValue = ResourceType::AWS_ImageBuilder_DistributionConfiguration;
            return true;
          }
          else if (hashCode == AWS_ImageBuilder_InfrastructureConfiguration_HASH)
          {
            enumValue = ResourceType::AWS_ImageBuilder_InfrastructureConfiguration;
            return true;
          }
          else if (hashCode == AWS_DataSync_LocationObjectStorage_HASH)
          {
            enumValue = ResourceType::AWS_DataSync_LocationObjectStorage;
            return true;
          }
          else if (hashCode == AWS_DataSync_LocationHDFS_HASH)
          {
            enumValue = ResourceType::AWS_DataSync_LocationHDFS;
            return true;
          }
          else if (hashCode == AWS_Glue_Classifier_HASH)
          {
            enumValue = ResourceType::AWS_Glue_Classifier;
            return true;
          }
          else if (hashCode == AWS_Route53RecoveryReadiness_Cell_HASH)
          {
            enumValue = ResourceType::AWS_Route53RecoveryReadiness_Cell;
            return true;
          }
          else if (hashCode == AWS_Route53RecoveryReadiness_ReadinessCheck_HASH)
          {
            enumValue = ResourceType::AWS_Route53RecoveryReadiness_ReadinessCheck;
            return true;
          }
          else if (hashCode == AWS_ECR_RegistryPolicy_HASH)
          {
            enumValue = ResourceType::AWS_ECR_RegistryPolicy;
            return true;
          }
          else if (hashCode == AWS_Backup_ReportPlan_HASH)
          {
            enumValue = ResourceType::AWS_Backup_ReportPlan;
            return true;
          }
          else if (hashCode == AWS_Lightsail_Certificate_HASH)
          {
            enumValue = ResourceType::AWS_Lightsail_Certificate;
            return true;
          }
          else if (hashCode == AWS_RUM_AppMonitor_HASH)
          {
            enumValue = ResourceType::AWS_RUM_AppMonitor;
            return true;
          }
          else if (hashCode == AWS_Events_Endpoint_HASH)
          {
            enumValue = ResourceType::AWS_Events_Endpoint;
            return true;
          }
          else if (hashCode == AWS_SES_ReceiptRuleSet_HASH)
          {
            enumValue = ResourceType::AWS_SES_ReceiptRuleSet;
            return true;
          }
          else if (hashCode == AWS_Events_Archive_HASH)
          {
            enumValue = ResourceType::AWS_Events_Archive;
            return true;
          }
          else if (hashCode == AWS_Events_ApiDestination_HASH)
          {
            enumValue = ResourceType::AWS_Events_ApiDestination;
            return true;
          }
          else if (hashCode == AWS_Lightsail_Disk_HASH)
          {
            enumValue = ResourceType::AWS_Lightsail_Disk;
            return true;
          }
          else if (hashCode == AWS_FIS_ExperimentTemplate_HASH)
          {
            enumValue = ResourceType::AWS_FIS_ExperimentTemplate;
            return true;
          }
          else if (hashCode == AWS_DataSync_LocationFSxWindows_HASH)
          {
            enumValue = ResourceType::AWS_DataSync_LocationFSxWindows;
            return true;
          }
          else if (hashCode == AWS_SES_ReceiptFilter_HASH)
          {
            enumValue = ResourceType::AWS_SES_ReceiptFilter;
            return true;
          }
          else if (hashCode == AWS_GuardDuty_Filter_HASH)
          {
            enumValue = ResourceType::AWS_GuardDuty_Filter;
            return true;
          }
          else if (hashCode == AWS_SES_Template_HASH)
          {
            enumValue = ResourceType::AWS_SES_Template;
            return true;
          }
          else if (hashCode == AWS_AmazonMQ_Broker_HASH)
          {
            enumValue = ResourceType::AWS_AmazonMQ_Broker;
            return true;
          }
          else if (hashCode == AWS_AppConfig_Environment_HASH)
          {
            enumValue = ResourceType::AWS_AppConfig_Environment;
            return true;
          }
          else if (hashCode == AWS_AppConfig_ConfigurationProfile_HASH)
          {
            enumValue = ResourceType::AWS_AppConfig_ConfigurationProfile;
            return true;
          }
          else if (hashCode == AWS_Cloud9_EnvironmentEC2_HASH)
          {
            enumValue = ResourceType::AWS_Cloud9_EnvironmentEC2;
            return true;
          }
          else if (hashCode == AWS_EventSchemas_Registry_HASH)
          {
            enumValue = ResourceType::AWS_EventSchemas_Registry;
            return true;
          }
          else if (hashCode == AWS_EventSchemas_RegistryPolicy_HASH)
          {
            enumValue = ResourceType::AWS_EventSchemas_RegistryPolicy;
            return true;
          }
          else if (hashCode == AWS_EventSchemas_Discoverer_HASH)
          {
            enumValue = ResourceType::AWS_EventSchemas_Discoverer;
            return true;
          }
          else if (hashCode == AWS_FraudDetector_Label_HASH)
          {
            enumValue = ResourceType::AWS_FraudDetector_Label;
            return true;
          }
          else if (hashCode == AWS_FraudDetector_EntityType_HASH)
          {
            enumValue = ResourceType::AWS_FraudDetector_EntityType;
            return true;
          }
          else if (hashCode == AWS_FraudDetector_Variable_HASH)
          {
            enumValue = ResourceType::AWS_FraudDetector_Variable;
            return true;
          }
          else if (hashCode == AWS_FraudDetector_Outcome_HASH)
          {
            enumValue = ResourceType::AWS_FraudDetector_Outcome;
            return true;
          }
          else if (hashCode == AWS_IoT_Authorizer_HASH)
          {
            enumValue = ResourceType::AWS_IoT_Authorizer;
            return true;
          }
          else if (hashCode == AWS_IoT_SecurityProfile_HASH)
          {
            enumValue = ResourceType::AWS_IoT_SecurityProfile;
            return true;
          }
          else if (hashCode == AWS_IoT_RoleAlias_HASH)
          {
            enumValue = ResourceType::AWS_IoT_RoleAlias;
            return true;
          }
          else if (hashCode == AWS_IoT_Dimension_HASH)
          {
            enumValue = ResourceType::AWS_IoT_Dimension;
            return true;
          }
          else if (hashCode == AWS_IoTAnalytics_Datastore_HASH)
          {
            enumValue = ResourceType::AWS_IoTAnalytics_Datastore;
            return true;
          }
          else if (hashCode == AWS_Lightsail_Bucket_HASH)
          {
            enumValue = ResourceType::AWS_Lightsail_Bucket;
            return true;
          }
          else if (hashCode == AWS_Lightsail_StaticIp_HASH)
          {
            enumValue = ResourceType::AWS_Lightsail_StaticIp;
            return true;
          }
          else if (hashCode == AWS_MediaPackage_PackagingGroup_HASH)
          {
            enumValue = ResourceType::AWS_MediaPackage_PackagingGroup;
            return true;
          }
          else if (hashCode == AWS_Route53RecoveryReadiness_RecoveryGroup_HASH)
          {
            enumValue = ResourceType::AWS_Route53RecoveryReadiness_RecoveryGroup;
            return true;
          }
          else if (hashCode == AWS_ResilienceHub_ResiliencyPolicy_HASH)
          {
            enumValue = ResourceType::AWS_ResilienceHub_ResiliencyPolicy;
            return true;
          }
          else if (hashCode == AWS_Transfer_Workflow_HASH)
          {
            enumValue = ResourceType::AWS_Transfer_Workflow;
            return true;
          }
          else if (hashCode == AWS_EKS_IdentityProviderConfig_HASH)
          {
            enumValue = ResourceType::AWS_EKS_IdentityProviderConfig;
            return true;
          }
          else if (hashCode == AWS_EKS_Addon_HASH)
          {
            enumValue = ResourceType::AWS_EKS_Addon;
            return true;
          }
          else if (hashCode == AWS_Glue_MLTransform_HASH)
          {
            enumValue = ResourceType::AWS_Glue_MLTransform;
            return true;
          }
          else if (hashCode == AWS_IoT_Policy_HASH)
          {
            enumValue = ResourceType::AWS_IoT_Policy;
            return true;
          }
          else if (hashCode == AWS_IoT_MitigationAction_HASH)
          {
            enumValue = ResourceType::AWS_IoT_MitigationAction;
            return true;
          }
          else if (hashCode == AWS_IoTTwinMaker_Workspace_HASH)
          {
            enumValue = ResourceType::AWS_IoTTwinMaker_Workspace;
            return true;
          }
          else if (hashCode == AWS_IoTTwinMaker_Entity_HASH)
          {
            enumValue = ResourceType::AWS_IoTTwinMaker_Entity;
            return true;
          }
          else if (hashCode == AWS_IoTAnalytics_Dataset_HASH)
          {
            enumValue = ResourceType::AWS_IoTAnalytics_Dataset;
            return true;
          }
          else if (hashCode == AWS_IoTAnalytics_Pipeline_HASH)
          {
            enumValue = ResourceType::AWS_IoTAnalytics_Pipeline;
            return true;
          }
          else if (hashCode == AWS_IoTAnalytics_Channel_HASH)
          {
            enumValue = ResourceType::AWS_IoTAnalytics_Channel;
            return true;
          }
          else if (hashCode == AWS_IoTSiteWise_Dashboard_HASH)
          {
            enumValue = ResourceType::AWS_IoTSiteWise_Dashboard;
            return true;
          }
          else if (hashCode == AWS_IoTSiteWise_Project_HASH)
          {
            enumValue = ResourceType::AWS_IoTSiteWise_Project;
            return true;
          }
          else if (hashCode == AWS_IoTSiteWise_Portal_HASH)
          {
            enumValue = ResourceType::AWS_IoTSiteWise_Portal;
            return true;
          }
          else if (hashCode == AWS_IoTSiteWise_AssetModel_HASH)
          {
            enumValue = ResourceType::AWS_IoTSiteWise_AssetModel;
            return true;
          }
          else if (hashCode == AWS_IVS_Channel_HASH)
          {
            enumValue = ResourceType::AWS_IVS_Channel;
            return true;
          }
          else if (hashCode == AWS_IVS_RecordingConfiguration_HASH)
          {
            enumValue = ResourceType::AWS_IVS_RecordingConfiguration;
            return true;
          }
          else if (hashCode == AWS_IVS_PlaybackKeyPair_HASH)
          {
            enumValue = ResourceType::AWS_IVS_PlaybackKeyPair;
            return true;
          }
          else if (hashCode == AWS_KinesisAnalyticsV2_Application_HASH)
          {
            enumValue = ResourceType::AWS_KinesisAnalyticsV2_Application;
            return true;
          }
          else if (hashCode == AWS_RDS_GlobalCluster_HASH)
          {
            enumValue = ResourceType::AWS_RDS_GlobalCluster;
            return true;
          }
          else if (hashCode == AWS_S3_MultiRegionAccessPoint_HASH)
          {
            enumValue = ResourceType::AWS_S3_MultiRegionAccessPoint;
            return true;
          }
          else if (hashCode == AWS_DeviceFarm_TestGridProject_HASH)
          {
            enumValue = ResourceType::AWS_DeviceFarm_TestGridProject;
            return true;
          }
          else if (hashCode == AWS_Budgets_BudgetsAction_HASH)
          {
            enumValue = ResourceType::AWS_Budgets_BudgetsAction;
            return true;
          }
          else if (hashCode == AWS_Lex_Bot_HASH)
          {
            enumValue = ResourceType::AWS_Lex_Bot;
            return true;
          }
          else if (hashCode == AWS_CodeGuruReviewer_RepositoryAssociation_HASH)
          {
            enumValue = ResourceType::AWS_CodeGuruReviewer_RepositoryAssociation;
            return true;
          }
          else if (hashCode == AWS_IoT_CustomMetric_HASH)
          {
            enumValue = ResourceType::AWS_IoT_CustomMetric;
            return true;
          }
          else if (hashCode == AWS_Route53Resolver_FirewallDomainList_HASH)
          {
            enumValue = ResourceType::AWS_Route53Resolver_FirewallDomainList;
            return true;
          }
          else if (hashCode == AWS_RoboMaker_RobotApplicationVersion_HASH)
          {
            enumValue = ResourceType::AWS_RoboMaker_RobotApplicationVersion;
            return true;
          }
          else if (hashCode == AWS_EC2_TrafficMirrorSession_HASH)
          {
            enumValue = ResourceType::AWS_EC2_TrafficMirrorSession;
            return true;
          }
          else if (hashCode == AWS_IoTSiteWise_Gateway_HASH)
          {
            enumValue = ResourceType::AWS_IoTSiteWise_Gateway;
            return true;
          }
          else if (hashCode == AWS_Lex_BotAlias_HASH)
          {
            enumValue = ResourceType::AWS_Lex_BotAlias;
            return true;
          }
          else if (hashCode == AWS_LookoutMetrics_Alert_HASH)
          {
            enumValue = ResourceType::AWS_LookoutMetrics_Alert;
            return true;
          }
          return false;
        }
        static bool GetEnumForNameHelper2(int hashCode, ResourceType& enumValue)
        {
          if (hashCode == AWS_IoT_AccountAuditConfiguration_HASH)
          {
            enumValue = ResourceType::AWS_IoT_AccountAuditConfiguration;
            return true;
          }
          else if (hashCode == AWS_EC2_TrafficMirrorTarget_HASH)
          {
            enumValue = ResourceType::AWS_EC2_TrafficMirrorTarget;
            return true;
          }
          else if (hashCode == AWS_S3_StorageLens_HASH)
          {
            enumValue = ResourceType::AWS_S3_StorageLens;
            return true;
          }
          else if (hashCode == AWS_IoT_ScheduledAudit_HASH)
          {
            enumValue = ResourceType::AWS_IoT_ScheduledAudit;
            return true;
          }
          else if (hashCode == AWS_Events_Connection_HASH)
          {
            enumValue = ResourceType::AWS_Events_Connection;
            return true;
          }
          else if (hashCode == AWS_EventSchemas_Schema_HASH)
          {
            enumValue = ResourceType::AWS_EventSchemas_Schema;
            return true;
          }
          else if (hashCode == AWS_MediaPackage_PackagingConfiguration_HASH)
          {
            enumValue = ResourceType::AWS_MediaPackage_PackagingConfiguration;
            return true;
          }
          else if (hashCode == AWS_KinesisVideo_SignalingChannel_HASH)
          {
            enumValue = ResourceType::AWS_KinesisVideo_SignalingChannel;
            return true;
          }
          else if (hashCode == AWS_AppStream_DirectoryConfig_HASH)
          {
            enumValue = ResourceType::AWS_AppStream_DirectoryConfig;
            return true;
          }
          else if (hashCode == AWS_LookoutVision_Project_HASH)
          {
            enumValue = ResourceType::AWS_LookoutVision_Project;
            return true;
          }
          else if (hashCode == AWS_Route53RecoveryControl_Cluster_HASH)
          {
            enumValue = ResourceType::AWS_Route53RecoveryControl_Cluster;
            return true;
          }
          else if (hashCode == AWS_Route53RecoveryControl_SafetyRule_HASH)
          {
            enumValue = ResourceType::AWS_Route53RecoveryControl_SafetyRule;
            return true;
          }
          else if (hashCode == AWS_Route53RecoveryControl_ControlPanel_HASH)
          {
            enumValue = ResourceType::AWS_Route53RecoveryControl_ControlPanel;
            return true;
          }
          else if (hashCode == AWS_Route53RecoveryControl_RoutingControl_HASH)
          {
            enumValue = ResourceType::AWS_Route53RecoveryControl_RoutingControl;
            return true;
          }
          else if (hashCode == AWS_Route53RecoveryReadiness_ResourceSet_HASH)
          {
            enumValue = ResourceType::AWS_Route53RecoveryReadiness_ResourceSet;
            return true;
          }
          else if (hashCode == AWS_RoboMaker_SimulationApplication_HASH)
          {
            enumValue = ResourceType::AWS_RoboMaker_SimulationApplication;
            return true;
          }
          else if (hashCode == AWS_RoboMaker_RobotApplication_HASH)
          {
            enumValue = ResourceType::AWS_RoboMaker_RobotApplication;
            return true;
          }
          else if (hashCode == AWS_HealthLake_FHIRDatastore_HASH)
          {
            enumValue = ResourceType::AWS_HealthLake_FHIRDatastore;
            return true;
          }
          else if (hashCode == AWS_Pinpoint_Segment_HASH)
          {
            enumValue = ResourceType::AWS_Pinpoint_Segment;
            return true;
          }
          else if (hashCode == AWS_Pinpoint_ApplicationSettings_HASH)
          {
            enumValue = ResourceType::AWS_Pinpoint_ApplicationSettings;
            return true;
          }
          else if (hashCode == AWS_Events_Rule_HASH)
          {
            enumValue = ResourceType::AWS_Events_Rule;
            return true;
          }
          else if (hashCode == AWS_EC2_DHCPOptions_HASH)
          {
            enumValue = ResourceType::AWS_EC2_DHCPOptions;
            return true;
          }
          else if (hashCode == AWS_EC2_NetworkInsightsPath_HASH)
          {
            enumValue = ResourceType::AWS_EC2_NetworkInsightsPath;
            return true;
          }
          else if (hashCode == AWS_EC2_TrafficMirrorFilter_HASH)
          {
            enumValue = ResourceType::AWS_EC2_TrafficMirrorFilter;
            return true;
          }
          else if (hashCode == AWS_EC2_IPAM_HASH)
          {
            enumValue = ResourceType::AWS_EC2_IPAM;
            return true;
          }
          else if (hashCode == AWS_IoTTwinMaker_Scene_HASH)
          {
            enumValue = ResourceType::AWS_IoTTwinMaker_Scene;
            return true;
          }
          else if (hashCode == AWS_NetworkManager_TransitGatewayRegistration_HASH)
          {
            enumValue = ResourceType::AWS_NetworkManager_TransitGatewayRegistration;
            return true;
          }
          else if (hashCode == AWS_CustomerProfiles_Domain_HASH)
          {
            enumValue = ResourceType::AWS_CustomerProfiles_Domain;
            return true;
          }
          else if (hashCode == AWS_AutoScaling_WarmPool_HASH)
          {
            enumValue = ResourceType::AWS_AutoScaling_WarmPool;
            return true;
          }
          else if (hashCode == AWS_Connect_PhoneNumber_HASH)
          {
            enumValue = ResourceType::AWS_Connect_PhoneNumber;
            return true;
          }
          else if (hashCode == AWS_AppConfig_DeploymentStrategy_HASH)
          {
            enumValue = ResourceType::AWS_AppConfig_DeploymentStrategy;
            return true;
          }
          else if (hashCode == AWS_AppFlow_Flow_HASH)
          {
            enumValue = ResourceType::AWS_AppFlow_Flow;
            return true;
          }
          else if (hashCode == AWS_AuditManager_Assessment_HASH)
          {
            enumValue = ResourceType::AWS_AuditManager_Assessment;
            return true;
          }
          else if (hashCode == AWS_CloudWatch_MetricStream_HASH)
          {
            enumValue = ResourceType::AWS_CloudWatch_MetricStream;
            return true;
          }
          else if (hashCode == AWS_DeviceFarm_InstanceProfile_HASH)
          {
            enumValue = ResourceType::AWS_DeviceFarm_InstanceProfile;
            return true;
          }
          else if (hashCode == AWS_DeviceFarm_Project_HASH)
          {
            enumValue = ResourceType::AWS_DeviceFarm_Project;
            return true;
          }
          else if (hashCode == AWS_EC2_EC2Fleet_HASH)
          {
            enumValue = ResourceType::AWS_EC2_EC2Fleet;
            return true;
          }
          else if (hashCode == AWS_EC2_SubnetRouteTableAssociation_HASH)
          {
            enumValue = ResourceType::AWS_EC2_SubnetRouteTableAssociation;
            return true;
          }
          else if (hashCode == AWS_ECR_PullThroughCacheRule_HASH)
          {
            enumValue = ResourceType::AWS_ECR_PullThroughCacheRule;
            return true;
          }
          else if (hashCode == AWS_GroundStation_Config_HASH)
          {
            enumValue = ResourceType::AWS_GroundStation_Config;
            return true;
          }
          else if (hashCode == AWS_ImageBuilder_ImagePipeline_HASH)
          {
            enumValue = ResourceType::AWS_ImageBuilder_ImagePipeline;
            return true;
          }
          else if (hashCode == AWS_IoT_FleetMetric_HASH)
          {
            enumValue = ResourceType::AWS_IoT_FleetMetric;
            return true;
          }
          else if (hashCode == AWS_IoTWireless_ServiceProfile_HASH)
          {
            enumValue = ResourceType::AWS_IoTWireless_ServiceProfile;
            return true;
          }
          else if (hashCode == AWS_NetworkManager_Device_HASH)
          {
            enumValue = ResourceType::AWS_NetworkManager_Device;
            return true;
          }
          else if (hashCode == AWS_NetworkManager_GlobalNetwork_HASH)
          {
            enumValue = ResourceType::AWS_NetworkManager_GlobalNetwork;
            return true;
          }
          else if (hashCode == AWS_NetworkManager_Link_HASH)
          {
            enumValue = ResourceType::AWS_NetworkManager_Link;
            return true;
          }
          else if (hashCode == AWS_NetworkManager_Site_HASH)
          {
            enumValue = ResourceType::AWS_NetworkManager_Site;
            return true;
          }
          else if (hashCode == AWS_Panorama_Package_HASH)
          {
            enumValue = ResourceType::AWS_Panorama_Package;
            return true;
          }
          else if (hashCode == AWS_Pinpoint_App_HASH)
          {
            enumValue = ResourceType::AWS_Pinpoint_App;
            return true;
          }
          else if (hashCode == AWS_Redshift_ScheduledAction_HASH)
          {
            enumValue = ResourceType::AWS_Redshift_ScheduledAction;
            return true;
          }
          else if (hashCode == AWS_Route53Resolver_FirewallRuleGroupAssociation_HASH)
          {
            enumValue = ResourceType::AWS_Route53Resolver_FirewallRuleGroupAssociation;
            return true;
          }
          else if (hashCode == AWS_SageMaker_AppImageConfig_HASH)
          {
            enumValue = ResourceType::AWS_SageMaker_AppImageConfig;
            return true;
          }
          else if (hashCode == AWS_SageMaker_Image_HASH)
          {
            enumValue = ResourceType::AWS_SageMaker_Image;
            return true;
          }
          else if (hashCode == AWS_ECS_TaskSet_HASH)
          {
            enumValue = ResourceType::AWS_ECS_TaskSet;
            return true;
          }
          else if (hashCode == AWS_Cassandra_Keyspace_HASH)
          {
            enumValue = ResourceType::AWS_Cassandra_Keyspace;
            return true;
          }
          else if (hashCode == AWS_Signer_SigningProfile_HASH)
          {
            enumValue = ResourceType::AWS_Signer_SigningProfile;
            return true;
          }
          else if (hashCode == AWS_Amplify_App_HASH)
          {
            enumValue = ResourceType::AWS_Amplify_App;
            return true;
          }
          else if (hashCode == AWS_AppMesh_VirtualNode_HASH)
          {
            enumValue = ResourceType::AWS_AppMesh_VirtualNode;
            return true;
          }
          else if (hashCode == AWS_AppMesh_VirtualService_HASH)
          {
            enumValue = ResourceType::AWS_AppMesh_VirtualService;
            return true;
          }
          else if (hashCode == AWS_AppRunner_VpcConnector_HASH)
          {
            enumValue = ResourceType::AWS_AppRunner_VpcConnector;
            return true;
          }
          else if (hashCode == AWS_AppStream_Application_HASH)
          {
            enumValue = ResourceType::AWS_AppStream_Application;
            return true;
          }
          else if (hashCode == AWS_CodeArtifact_Repository_HASH)
          {
            enumValue = ResourceType::AWS_CodeArtifact_Repository;
            return true;
          }
          else if (hashCode == AWS_EC2_PrefixList_HASH)
          {
            enumValue = ResourceType::AWS_EC2_PrefixList;
            return true;
          }
          else if (hashCode == AWS_EC2_SpotFleet_HASH)
          {
            enumValue = ResourceType::AWS_EC2_SpotFleet;
            return true;
          }
          else if (hashCode == AWS_Evidently_Project_HASH)
          {
            enumValue = ResourceType::AWS_Evidently_Project;
            return true;
          }
          else if (hashCode == AWS_Forecast_Dataset_HASH)
          {
            enumValue = ResourceType::AWS_Forecast_Dataset;
            return true;
          }
          else if (hashCode == AWS_IAM_SAMLProvider_HASH)
          {
            enumValue = ResourceType::AWS_IAM_SAMLProvider;
            return true;
          }
          else if (hashCode == AWS_IAM_ServerCertificate_HASH)
          {
            enumValue = ResourceType::AWS_IAM_ServerCertificate;
            return true;
          }
          else if (hashCode == AWS_Pinpoint_Campaign_HASH)
          {
            enumValue = ResourceType::AWS_Pinpoint_Campaign;
            return true;
          }
          else if (hashCode == AWS_Pinpoint_InAppTemplate_HASH)
          {
            enumValue = ResourceType::AWS_Pinpoint_InAppTemplate;
            return true;
          }
          else if (hashCode == AWS_SageMaker_Domain_HASH)
          {
            enumValue = ResourceType::AWS_SageMaker_Domain;
            return true;
          }
          else if (hashCode == AWS_Transfer_Agreement_HASH)
          {
            enumValue = ResourceType::AWS_Transfer_Agreement;
            return true;
          }
          else if (hashCode == AWS_Transfer_Connector_HASH)
          {
            enumValue = ResourceType::AWS_Transfer_Connector;
            return true;
          }
          else if (hashCode == AWS_KinesisFirehose_DeliveryStream_HASH)
          {
            enumValue = ResourceType::AWS_KinesisFirehose_DeliveryStream;
            return true;
          }
          else if (hashCode == AWS_Amplify_Branch_HASH)
          {
            enumValue = ResourceType::AWS_Amplify_Branch;
            return true;
          }
          else if (hashCode == AWS_AppIntegrations_EventIntegration_HASH)
          {
            enumValue = ResourceType::AWS_AppIntegrations_EventIntegration;
            return true;
          }
          else if (hashCode == AWS_AppMesh_Route_HASH)
          {
            enumValue = ResourceType::AWS_AppMesh_Route;
            return true;
          }
          else if (hashCode == AWS_Athena_PreparedStatement_HASH)
          {
            enumValue = ResourceType::AWS_Athena_PreparedStatement;
            return true;
          }
          else if (hashCode == AWS_EC2_IPAMScope_HASH)
          {
            enumValue = ResourceType::AWS_EC2_IPAMScope;
            return true;
          }
          else if (hashCode == AWS_Evidently_Launch_HASH)
          {
            enumValue = ResourceType::AWS_Evidently_Launch;
            return true;
          }
          else if (hashCode == AWS_Forecast_DatasetGroup_HASH)
          {
            enumValue = ResourceType::AWS_Forecast_DatasetGroup;
            return true;
          }
          else if (hashCode == AWS_GreengrassV2_ComponentVersion_HASH)
          {
            enumValue = ResourceType::AWS_GreengrassV2_ComponentVersion;
            return true;
          }
          else if (hashCode == AWS_GroundStation_MissionProfile_HASH)
          {
            enumValue = ResourceType::AWS_GroundStation_MissionProfile;
            return true;
          }
          else if (hashCode == AWS_MediaConnect_FlowEntitlement_HASH)
          {
            enumValue = ResourceType::AWS_MediaConnect_FlowEntitlement;
            return true;
          }
          else if (hashCode == AWS_MediaConnect_FlowVpcInterface_HASH)
          {
            enumValue = ResourceType::AWS_MediaConnect_FlowVpcInterface;
            return true;
          }
          else if (hashCode == AWS_MediaTailor_PlaybackConfiguration_HASH)
          {
            enumValue = ResourceType::AWS_MediaTailor_PlaybackConfiguration;
            return true;
          }
          else if (hashCode == AWS_MSK_Configuration_HASH)
          {
            enumValue = ResourceType::AWS_MSK_Configuration;
            return true;
          }
          else if (hashCode == AWS_Personalize_Dataset_HASH)
          {
            enumValue = ResourceType::AWS_Personalize_Dataset;
            return true;
          }
          else if (hashCode == AWS_Personalize_Schema_HASH)
          {
            enumValue = ResourceType::AWS_Personalize_Schema;
            return true;
          }
          else if (hashCode == AWS_Personalize_Solution_HASH)
          {
            enumValue = ResourceType::AWS_Personalize_Solution;
            return true;
          }
          else if (hashCode == AWS_Pinpoint_EmailTemplate_HASH)
          {
            enumValue = ResourceType::AWS_Pinpoint_EmailTemplate;
            return true;
          }
          else if (hashCode == AWS_Pinpoint_EventStream_HASH)
          {
            enumValue = ResourceType::AWS_Pinpoint_EventStream;
            return true;
          }
          else if (hashCode == AWS_ResilienceHub_App_HASH)
          {
            enumValue = ResourceType::AWS_ResilienceHub_App;
            return true;
          }
          else if (hashCode == AWS_ACMPCA_CertificateAuthority_HASH)
          {
            enumValue = ResourceType::AWS_ACMPCA_CertificateAuthority;
            return true;
          }
          else if (hashCode == AWS_AppConfig_HostedConfigurationVersion_HASH)
          {
            enumValue = ResourceType::AWS_AppConfig_HostedConfigurationVersion;
            return true;
          }
          else if (hashCode == AWS_AppMesh_VirtualGateway_HASH)
          {
            enumValue = ResourceType::AWS_AppMesh_VirtualGateway;
            return true;
          }
          else if (hashCode == AWS_AppMesh_VirtualRouter_HASH)
          {
            enumValue = ResourceType::AWS_AppMesh_VirtualRouter;
            return true;
          }
          else if (hashCode == AWS_AppRunner_Service_HASH)
          {
            enumValue = ResourceType::AWS_AppRunner_Service;
            return true;
          }
          else if (hashCode == AWS_CustomerProfiles_ObjectType_HASH)
          {
            enumValue = ResourceType::AWS_CustomerProfiles_ObjectType;
            return true;
          }
          else if (hashCode == AWS_DMS_Endpoint_HASH)
          {
            enumValue = ResourceType::AWS_DMS_Endpoint;
            return true;
          }
          else if (hashCode == AWS_EC2_CapacityReservation_HASH)
          {
            enumValue = ResourceType::AWS_EC2_CapacityReservation;
            return true;
          }
          else if (hashCode == AWS_EC2_ClientVpnEndpoint_HASH)
          {
            enumValue = ResourceType::AWS_EC2_ClientVpnEndpoint;
            return true;
          }
          else if (hashCode == AWS_Kendra_Index_HASH)
          {
            enumValue = ResourceType::AWS_Kendra_Index;
            return true;
          }
          else if (hashCode == AWS_KinesisVideo_Stream_HASH)
          {
            enumValue = ResourceType::AWS_KinesisVideo_Stream;
            return true;
          }
          else if (hashCode == AWS_Logs_Destination_HASH)
          {
            enumValue = ResourceType::AWS_Logs_Destination;
            return true;
          }
          else if (hashCode == AWS_Pinpoint_EmailChannel_HASH)
          {
            enumValue = ResourceType::AWS_Pinpoint_EmailChannel;
            return true;
          }
          else if (hashCode == AWS_S3_AccessPoint_HASH)
          {
            enumValue = ResourceType::AWS_S3_AccessPoint;
            return true;
          }
          else if (hashCode == AWS_NetworkManager_CustomerGatewayAssociation_HASH)
          {
            enumValue = ResourceType::AWS_NetworkManager_CustomerGatewayAssociation;
            return true;
          }
          else if (hashCode == AWS_NetworkManager_LinkAssociation_HASH)
          {
            enumValue = ResourceType::AWS_NetworkManager_LinkAssociation;
            return true;
          }
          else if (hashCode == AWS_IoTWireless_MulticastGroup_HASH)
          {
            enumValue = ResourceType::AWS_IoTWireless_MulticastGroup;
            return true;
          }
          else if (hashCode == AWS_Personalize_DatasetGroup_HASH)
          {
            enumValue = ResourceType::AWS_Personalize_DatasetGroup;
            return true;
          }
          else if (hashCode == AWS_IoTTwinMaker_ComponentType_HASH)
          {
            enumValue = ResourceType::AWS_IoTTwinMaker_ComponentType;
            return true;
          }
          else if (hashCode == AWS_CodeBuild_ReportGroup_HASH)
          {
            enumValue = ResourceType::AWS_CodeBuild_ReportGroup;
            return true;
          }
          else if (hashCode == AWS_SageMaker_FeatureGroup_HASH)
          {
            enumValue = ResourceType::AWS_SageMaker_FeatureGroup;
            return true;
          }
          else if (hashCode == AWS_MSK_BatchScramSecret_HASH)
          {
            enumValue = ResourceType::AWS_MSK_BatchScramSecret;
            return true;
          }
          else if (hashCode == AWS_AppStream_Stack_HASH)
          {
            enumValue = ResourceType::AWS_AppStream_Stack;
            return true;
          }
          else if (hashCode == AWS_IoT_JobTemplate_HASH)
          {
            enumValue = ResourceType::AWS_IoT_JobTemplate;
            return true;
          }
          else if (hashCode == AWS_IoTWireless_FuotaTask_HASH)
          {
            enumValue = ResourceType::AWS_IoTWireless_FuotaTask;
            return true;
          }
          else if (hashCode == AWS_IoT_ProvisioningTemplate_HASH)
          {
            enumValue = ResourceType::AWS_IoT_ProvisioningTemplate;
            return true;
          }
          else if (hashCode == AWS_InspectorV2_Filter_HASH)
          {
            enumValue = ResourceType::AWS_InspectorV2_Filter;
            return true;
          }
          else if (hashCode == AWS_Route53Resolver_ResolverQueryLoggingConfigAssociation_HASH)
          {
            enumValue = ResourceType::AWS_Route53Resolver_ResolverQueryLoggingConfigAssociation;
            return true;
          }
          else if (hashCode == AWS_ServiceDiscovery_Instance_HASH)
          {
            enumValue = ResourceType::AWS_ServiceDiscovery_Instance;
            return true;
          }
          return false;
        }
        static bool GetEnumForNameHelper3(int hashCode, ResourceType& enumValue)
        {
          if (hashCode == AWS_Transfer_Certificate_HASH)
          {
            enumValue = ResourceType::AWS_Transfer_Certificate;
            return true;
          }
          else if (hashCode == AWS_MediaConnect_FlowSource_HASH)
          {
            enumValue = ResourceType::AWS_MediaConnect_FlowSource;
            return true;
          }
          else if (hashCode == AWS_APS_RuleGroupsNamespace_HASH)
          {
            enumValue = ResourceType::AWS_APS_RuleGroupsNamespace;
            return true;
          }
          else if (hashCode == AWS_CodeGuruProfiler_ProfilingGroup_HASH)
          {
            enumValue = ResourceType::AWS_CodeGuruProfiler_ProfilingGroup;
            return true;
          }
          else if (hashCode == AWS_Route53Resolver_ResolverQueryLoggingConfig_HASH)
          {
            enumValue = ResourceType::AWS_Route53Resolver_ResolverQueryLoggingConfig;
            return true;
          }
          else if (hashCode == AWS_Batch_SchedulingPolicy_HASH)
          {
            enumValue = ResourceType::AWS_Batch_SchedulingPolicy;
            return true;
          }
          else if (hashCode == AWS_ACMPCA_CertificateAuthorityActivation_HASH)
          {
            enumValue = ResourceType::AWS_ACMPCA_CertificateAuthorityActivation;
            return true;
          }
          else if (hashCode == AWS_AppMesh_GatewayRoute_HASH)
          {
            enumValue = ResourceType::AWS_AppMesh_GatewayRoute;
            return true;
          }
          else if (hashCode == AWS_AppMesh_Mesh_HASH)
          {
            enumValue = ResourceType::AWS_AppMesh_Mesh;
            return true;
          }
          else if (hashCode == AWS_Connect_Instance_HASH)
          {
            enumValue = ResourceType::AWS_Connect_Instance;
            return true;
          }
          else if (hashCode == AWS_Connect_QuickConnect_HASH)
          {
            enumValue = ResourceType::AWS_Connect_QuickConnect;
            return true;
          }
          else if (hashCode == AWS_EC2_CarrierGateway_HASH)
          {
            enumValue = ResourceType::AWS_EC2_CarrierGateway;
            return true;
          }
          else if (hashCode == AWS_EC2_IPAMPool_HASH)
          {
            enumValue = ResourceType::AWS_EC2_IPAMPool;
            return true;
          }
          else if (hashCode == AWS_EC2_TransitGatewayConnect_HASH)
          {
            enumValue = ResourceType::AWS_EC2_TransitGatewayConnect;
            return true;
          }
          else if (hashCode == AWS_EC2_TransitGatewayMulticastDomain_HASH)
          {
            enumValue = ResourceType::AWS_EC2_TransitGatewayMulticastDomain;
            return true;
          }
          else if (hashCode == AWS_ECS_CapacityProvider_HASH)
          {
            enumValue = ResourceType::AWS_ECS_CapacityProvider;
            return true;
          }
          else if (hashCode == AWS_IAM_InstanceProfile_HASH)
          {
            enumValue = ResourceType::AWS_IAM_InstanceProfile;
            return true;
          }
          else if (hashCode == AWS_IoT_CACertificate_HASH)
          {
            enumValue = ResourceType::AWS_IoT_CACertificate;
            return true;
          }
          else if (hashCode == AWS_IoTTwinMaker_SyncJob_HASH)
          {
            enumValue = ResourceType::AWS_IoTTwinMaker_SyncJob;
            return true;
          }
          else if (hashCode == AWS_KafkaConnect_Connector_HASH)
          {
            enumValue = ResourceType::AWS_KafkaConnect_Connector;
            return true;
          }
          else if (hashCode == AWS_Lambda_CodeSigningConfig_HASH)
          {
            enumValue = ResourceType::AWS_Lambda_CodeSigningConfig;
            return true;
          }
          else if (hashCode == AWS_NetworkManager_ConnectPeer_HASH)
          {
            enumValue = ResourceType::AWS_NetworkManager_ConnectPeer;
            return true;
          }
          else if (hashCode == AWS_ResourceExplorer2_Index_HASH)
          {
            enumValue = ResourceType::AWS_ResourceExplorer2_Index;
            return true;
          }
          else if (hashCode == AWS_AppStream_Fleet_HASH)
          {
            enumValue = ResourceType::AWS_AppStream_Fleet;
            return true;
          }
          else if (hashCode == AWS_Cognito_UserPool_HASH)
          {
            enumValue = ResourceType::AWS_Cognito_UserPool;
            return true;
          }
          else if (hashCode == AWS_Cognito_UserPoolClient_HASH)
          {
            enumValue = ResourceType::AWS_Cognito_UserPoolClient;
            return true;
          }
          else if (hashCode == AWS_Cognito_UserPoolGroup_HASH)
          {
            enumValue = ResourceType::AWS_Cognito_UserPoolGroup;
            return true;
          }
          else if (hashCode == AWS_EC2_NetworkInsightsAccessScope_HASH)
          {
            enumValue = ResourceType::AWS_EC2_NetworkInsightsAccessScope;
            return true;
          }
          else if (hashCode == AWS_EC2_NetworkInsightsAnalysis_HASH)
          {
            enumValue = ResourceType::AWS_EC2_NetworkInsightsAnalysis;
            return true;
          }
          else if (hashCode == AWS_Grafana_Workspace_HASH)
          {
            enumValue = ResourceType::AWS_Grafana_Workspace;
            return true;
          }
          else if (hashCode == AWS_GroundStation_DataflowEndpointGroup_HASH)
          {
            enumValue = ResourceType::AWS_GroundStation_DataflowEndpointGroup;
            return true;
          }
          else if (hashCode == AWS_ImageBuilder_ImageRecipe_HASH)
          {
            enumValue = ResourceType::AWS_ImageBuilder_ImageRecipe;
            return true;
          }
          else if (hashCode == AWS_KMS_Alias_HASH)
          {
            enumValue = ResourceType::AWS_KMS_Alias;
            return true;
          }
          else if (hashCode == AWS_M2_Environment_HASH)
          {
            enumValue = ResourceType::AWS_M2_Environment;
            return true;
          }
          else if (hashCode == AWS_QuickSight_DataSource_HASH)
          {
            enumValue = ResourceType::AWS_QuickSight_DataSource;
            return true;
          }
          else if (hashCode == AWS_QuickSight_Template_HASH)
          {
            enumValue = ResourceType::AWS_QuickSight_Template;
            return true;
          }
          else if (hashCode == AWS_QuickSight_Theme_HASH)
          {
            enumValue = ResourceType::AWS_QuickSight_Theme;
            return true;
          }
          else if (hashCode == AWS_RDS_OptionGroup_HASH)
          {
            enumValue = ResourceType::AWS_RDS_OptionGroup;
            return true;
          }
          else if (hashCode == AWS_Redshift_EndpointAccess_HASH)
          {
            enumValue = ResourceType::AWS_Redshift_EndpointAccess;
            return true;
          }
          else if (hashCode == AWS_Route53Resolver_FirewallRuleGroup_HASH)
          {
            enumValue = ResourceType::AWS_Route53Resolver_FirewallRuleGroup;
            return true;
          }
          else if (hashCode == AWS_SSM_Document_HASH)
          {
            enumValue = ResourceType::AWS_SSM_Document;
            return true;
          }
          return false;
        }

        static bool GetNameForEnumHelper0(ResourceType enumValue, Aws::String& value)
        {
          switch(enumValue)
          {
          case ResourceType::AWS_EC2_CustomerGateway:
            value = "AWS::EC2::CustomerGateway";
            return true;
          case ResourceType::AWS_EC2_EIP:
            value = "AWS::EC2::EIP";
            return true;
          case ResourceType::AWS_EC2_Host:
            value = "AWS::EC2::Host";
            return true;
          case ResourceType::AWS_EC2_Instance:
            value = "AWS::EC2::Instance";
            return true;
          case ResourceType::AWS_EC2_InternetGateway:
            value = "AWS::EC2::InternetGateway";
            return true;
          case ResourceType::AWS_EC2_NetworkAcl:
            value = "AWS::EC2::NetworkAcl";
            return true;
          case ResourceType::AWS_EC2_NetworkInterface:
            value = "AWS::EC2::NetworkInterface";
            return true;
          case ResourceType::AWS_EC2_RouteTable:
            value = "AWS::EC2::RouteTable";
            return true;
          case ResourceType::AWS_EC2_SecurityGroup:
            value = "AWS::EC2::SecurityGroup";
            return true;
          case ResourceType::AWS_EC2_Subnet:
            value = "AWS::EC2::Subnet";
            return true;
          case ResourceType::AWS_CloudTrail_Trail:
            value = "AWS::CloudTrail::Trail";
            return true;
          case ResourceType::AWS_EC2_Volume:
            value = "AWS::EC2::Volume";
            return true;
          case ResourceType::AWS_EC2_VPC:
            value = "AWS::EC2::VPC";
            return true;
          case ResourceType::AWS_EC2_VPNConnection:
            value = "AWS::EC2::VPNConnection";
            return true;
          case ResourceType::AWS_EC2_VPNGateway:
            value = "AWS::EC2::VPNGateway";
            return true;
          case ResourceType::AWS_EC2_RegisteredHAInstance:
            value = "AWS::EC2::RegisteredHAInstance";
            return true;
          case ResourceType::AWS_EC2_NatGateway:
            value = "AWS::EC2::NatGateway";
            return true;
          case ResourceType::AWS_EC2_EgressOnlyInternetGateway:
            value = "AWS::EC2::EgressOnlyInternetGateway";
            return true;
          case ResourceType::AWS_EC2_VPCEndpoint:
            value = "AWS::EC2::VPCEndpoint";
            return true;
          case ResourceType::AWS_EC2_VPCEndpointService:
            value = "AWS::EC2::VPCEndpointService";
            return true;
          case ResourceType::AWS_EC2_FlowLog:
            value = "AWS::EC2::FlowLog";
            return true;
          case ResourceType::AWS_EC2_VPCPeeringConnection:
            value = "AWS::EC2::VPCPeeringConnection";
            return true;
          case ResourceType::AWS_Elasticsearch_Domain:
            value = "AWS::Elasticsearch::Domain";
            return true;
          case ResourceType::AWS_IAM_Group:
            value = "AWS::IAM::Group";
            return true;
          case ResourceType::AWS_IAM_Policy:
            value = "AWS::IAM::Policy";
            return true;
          case ResourceType::AWS_IAM_Role:
            value = "AWS::IAM::Role";
            return true;
          case ResourceType::AWS_IAM_User:
            value = "AWS::IAM::User";
            return true;
          case ResourceType::AWS_ElasticLoadBalancingV2_LoadBalancer:
            value = "AWS::ElasticLoadBalancingV2::LoadBalancer";
            return true;
          case ResourceType::AWS_ACM_Certificate:
            value = "AWS::ACM::Certificate";
            return true;
          case ResourceType::AWS_RDS_DBInstance:
            value = "AWS::RDS::DBInstance";
            return true;
          case ResourceType::AWS_RDS_DBSubnetGroup:
            value = "AWS::RDS::DBSubnetGroup";
            return true;
          case ResourceType::AWS_RDS_DBSecurityGroup:
            value = "AWS::RDS::DBSecurityGroup";
            return true;
          case ResourceType::AWS_RDS_DBSnapshot:
            value = "AWS::RDS::DBSnapshot";
            return true;
          case ResourceType::AWS_RDS_DBCluster:
            value = "AWS::RDS::DBCluster";
            return true;
          case ResourceType::AWS_RDS_DBClusterSnapshot:
            value = "AWS::RDS::DBClusterSnapshot";
            return true;
          case ResourceType::AWS_RDS_EventSubscription:
            value = "AWS::RDS::EventSubscription";
            return true;
          case ResourceType::AWS_S3_Bucket:
            value = "AWS::S3::Bucket";
            return true;
          case ResourceType::AWS_S3_AccountPublicAccessBlock:
            value = "AWS::S3::AccountPublicAccessBlock";
            return true;
          case ResourceType::AWS_Redshift_Cluster:
            value = "AWS::Redshift::Cluster";
            return true;
          case ResourceType::AWS_Redshift_ClusterSnapshot:
            value = "AWS::Redshift::ClusterSnapshot";
            return true;
          case ResourceType::AWS_Redshift_ClusterParameterGroup:
            value = "AWS::Redshift::ClusterParameterGroup";
            return true;
          case ResourceType::AWS_Redshift_ClusterSecurityGroup:
            value = "AWS::Redshift::ClusterSecurityGroup";
            return true;
          case ResourceType::AWS_Redshift_ClusterSubnetGroup:
            value = "AWS::Redshift::ClusterSubnetGroup";
            return true;
          case ResourceType::AWS_Redshift_EventSubscription:
            value = "AWS::Redshift::EventSubscription";
            return true;
          case ResourceType::AWS_SSM_ManagedInstanceInventory:
            value = "AWS::SSM::ManagedInstanceInventory";
            return true;
          case ResourceType::AWS_CloudWatch_Alarm:
            value = "AWS::CloudWatch::Alarm";
            return true;
          case ResourceType::AWS_CloudFormation_Stack:
            value = "AWS::CloudFormation::Stack";
            return true;
          case ResourceType::AWS_ElasticLoadBalancing_LoadBalancer:
            value = "AWS::ElasticLoadBalancing::LoadBalancer";
            return true;
          case ResourceType::AWS_AutoScaling_AutoScalingGroup:
            value = "AWS::AutoScaling::AutoScalingGroup";
            return true;
          case ResourceType::AWS_AutoScaling_LaunchConfiguration:
            value = "AWS::AutoScaling::LaunchConfiguration";
            return true;
          case ResourceType::AWS_AutoScaling_ScalingPolicy:
            value = "AWS::AutoScaling::ScalingPolicy";
            return true;
          case ResourceType::AWS_AutoScaling_ScheduledAction:
            value = "AWS::AutoScaling::ScheduledAction";
            return true;
          case ResourceType::AWS_DynamoDB_Table:
            value = "AWS::DynamoDB::Table";
            return true;
          case ResourceType::AWS_CodeBuild_Project:
            value = "AWS::CodeBuild::Project";
            return true;
          case ResourceType::AWS_WAF_RateBasedRule:
            value = "AWS::WAF::RateBasedRule";
            return true;
          case ResourceType::AWS_WAF_Rule:
            value = "AWS::WAF::Rule";
            return true;
          case ResourceType::AWS_WAF_RuleGroup:
            value = "AWS::WAF::RuleGroup";
            return true;
          case ResourceType::AWS_WAF_WebACL:
            value = "AWS::WAF::WebACL";
            return true;
          case ResourceType::AWS_WAFRegional_RateBasedRule:
            value = "AWS::WAFRegional::RateBasedRule";
            return true;
          case ResourceType::AWS_WAFRegional_Rule:
            value = "AWS::WAFRegional::Rule";
            return true;
          case ResourceType::AWS_WAFRegional_RuleGroup:
            value = "AWS::WAFRegional::RuleGroup";
            return true;
          case ResourceType::AWS_WAFRegional_WebACL:
            value = "AWS::WAFRegional::WebACL";
            return true;
          case ResourceType::AWS_CloudFront_Distribution:
            value = "AWS::CloudFront::Distribution";
            return true;
          case ResourceType::AWS_CloudFront_StreamingDistribution:
            value = "AWS::CloudFront::StreamingDistribution";
            return true;
          case ResourceType::AWS_Lambda_Function:
            value = "AWS::Lambda::Function";
            return true;
          case ResourceType::AWS_NetworkFirewall_Firewall:
            value = "AWS::NetworkFirewall::Firewall";
            return true;
          case ResourceType::AWS_NetworkFirewall_FirewallPolicy:
            value = "AWS::NetworkFirewall::FirewallPolicy";
            return true;
          case ResourceType::AWS_NetworkFirewall_RuleGroup:
            value = "AWS::NetworkFirewall::RuleGroup";
            return true;
          case ResourceType::AWS_ElasticBeanstalk_Application:
            value = "AWS::ElasticBeanstalk::Application";
            return true;
          case ResourceType::AWS_ElasticBeanstalk_ApplicationVersion:
            value = "AWS::ElasticBeanstalk::ApplicationVersion";
            return true;
          case ResourceType::AWS_ElasticBeanstalk_Environment:
            value = "AWS::ElasticBeanstalk::Environment";
            return true;
          case ResourceType::AWS_WAFv2_WebACL:
            value = "AWS::WAFv2::WebACL";
            return true;
          case ResourceType::AWS_WAFv2_RuleGroup:
            value = "AWS::WAFv2::RuleGroup";
            return true;
          case ResourceType::AWS_WAFv2_IPSet:
            value = "AWS::WAFv2::IPSet";
            return true;
          case ResourceType::AWS_WAFv2_RegexPatternSet:
            value = "AWS::WAFv2::RegexPatternSet";
            return true;
          case ResourceType::AWS_WAFv2_ManagedRuleSet:
            value = "AWS::WAFv2::ManagedRuleSet";
            return true;
          case ResourceType::AWS_XRay_EncryptionConfig:
            value = "AWS::XRay::EncryptionConfig";
            return true;
          case ResourceType::AWS_SSM_AssociationCompliance:
            value = "AWS::SSM::AssociationCompliance";
            return true;
          case ResourceType::AWS_SSM_PatchCompliance:
            value = "AWS::SSM::PatchCompliance";
            return true;
          case ResourceType::AWS_Shield_Protection:
            value = "AWS::Shield::Protection";
            return true;
          case ResourceType::AWS_ShieldRegional_Protection:
            value = "AWS::ShieldRegional::Protection";
            return true;
          case ResourceType::AWS_Config_ConformancePackCompliance:
            value = "AWS::Config::ConformancePackCompliance";
            return true;
          case ResourceType::AWS_Config_ResourceCompliance:
            value = "AWS::Config::ResourceCompliance";
            return true;
          case ResourceType::AWS_ApiGateway_Stage:
            value = "AWS::ApiGateway::Stage";
            return true;
          case ResourceType::AWS_ApiGateway_RestApi:
            value = "AWS::ApiGateway::RestApi";
            return true;
          case ResourceType::AWS_ApiGatewayV2_Stage:
            value = "AWS::ApiGatewayV2::Stage";
            return true;
          case ResourceType::AWS_ApiGatewayV2_Api:
            value = "AWS::ApiGatewayV2::Api";
            return true;
          case ResourceType::AWS_CodePipeline_Pipeline:
            value = "AWS::CodePipeline::Pipeline";
            return true;
          case ResourceType::AWS_ServiceCatalog_CloudFormationProvisionedProduct:
            value = "AWS::ServiceCatalog::CloudFormationProvisionedProduct";
            return true;
          case ResourceType::AWS_ServiceCatalog_CloudFormationProduct:
            value = "AWS::ServiceCatalog::CloudFormationProduct";
            return true;
          case ResourceType::AWS_ServiceCatalog_Portfolio:
            value = "AWS::ServiceCatalog::Portfolio";
            return true;
          case ResourceType::AWS_SQS_Queue:
            value = "AWS::SQS::Queue";
            return true;
          case ResourceType::AWS_KMS_Key:
            value = "AWS::KMS::Key";
            return true;
          case ResourceType::AWS_QLDB_Ledger:
            value = "AWS::QLDB::Ledger";
            return true;
          case ResourceType::AWS_SecretsManager_Secret:
            value = "AWS::SecretsManager::Secret";
            return true;
          case ResourceType::AWS_SNS_Topic:
            value = "AWS::SNS::Topic";
            return true;
          case ResourceType::AWS_SSM_FileData:
            value = "AWS::SSM::FileData";
            return true;
          case ResourceType::AWS_Backup_BackupPlan:
            value = "AWS::Backup::BackupPlan";
            return true;
          case ResourceType::AWS_Backup_BackupSelection:
            value = "AWS::Backup::BackupSelection";
            return true;
          case ResourceType::AWS_Backup_BackupVault:
            value = "AWS::Backup::BackupVault";
            return true;
          case ResourceType::AWS_Backup_RecoveryPoint:
            value = "AWS::Backup::RecoveryPoint";
            return true;
          case ResourceType::AWS_ECR_Repository:
            value = "AWS::ECR::Repository";
            return true;
          case ResourceType::AWS_ECS_Cluster:
            value = "AWS::ECS::Cluster";
            return true;
          case ResourceType::AWS_ECS_Service:
            value = "AWS::ECS::Service";
            return true;
          case ResourceType::AWS_ECS_TaskDefinition:
            value = "AWS::ECS::TaskDefinition";
            return true;
          case ResourceType::AWS_EFS_AccessPoint:
            value = "AWS::EFS::AccessPoint";
            return true;
          case ResourceType::AWS_EFS_FileSystem:
            value = "AWS::EFS::FileSystem";
            return true;
          case ResourceType::AWS_EKS_Cluster:
            value = "AWS::EKS::Cluster";
            return true;
          case ResourceType::AWS_OpenSearch_Domain:
            value = "AWS::OpenSearch::Domain";
            return true;
          case ResourceType::AWS_EC2_TransitGateway:
            value = "AWS::EC2::TransitGateway";
            return true;
          case ResourceType::AWS_Kinesis_Stream:
            value = "AWS::Kinesis::Stream";
            return true;
          case ResourceType::AWS_Kinesis_StreamConsumer:
            value = "AWS::Kinesis::StreamConsumer";
            return true;
          case ResourceType::AWS_CodeDeploy_Application:
            value = "AWS::CodeDeploy::Application";
            return true;
          case ResourceType::AWS_CodeDeploy_DeploymentConfig:
            value = "AWS::CodeDeploy::DeploymentConfig";
            return true;
          case ResourceType::AWS_CodeDeploy_DeploymentGroup:
            value = "AWS::CodeDeploy::DeploymentGroup";
            return true;
          case ResourceType::AWS_EC2_LaunchTemplate:
            value = "AWS::EC2::LaunchTemplate";
            return true;
          case ResourceType::AWS_ECR_PublicRepository:
            value = "AWS::ECR::PublicRepository";
            return true;
          case ResourceType::AWS_GuardDuty_Detector:
            value = "AWS::GuardDuty::Detector";
            return true;
          case ResourceType::AWS_EMR_SecurityConfiguration:
            value = "AWS::EMR::SecurityConfiguration";
            return true;
          case ResourceType::AWS_SageMaker_CodeRepository:
            value = "AWS::SageMaker::CodeRepository";
            return true;
          case ResourceType::AWS_Route53Resolver_ResolverEndpoint:
            value = "AWS::Route53Resolver::ResolverEndpoint";
            return true;
          case ResourceType::AWS_Route53Resolver_ResolverRule:
            value = "AWS::Route53Resolver::ResolverRule";
            return true;
          default:
            return false;
          }
        }
        static bool GetNameForEnumHelper1(ResourceType enumValue, Aws::String& value)
        {
          switch(enumValue)
          {
          case ResourceType::AWS_Route53Resolver_ResolverRuleAssociation:
            value = "AWS::Route53Resolver::ResolverRuleAssociation";
            return true;
          case ResourceType::AWS_DMS_ReplicationSubnetGroup:
            value = "AWS::DMS::ReplicationSubnetGroup";
            return true;
          case ResourceType::AWS_DMS_EventSubscription:
            value = "AWS::DMS::EventSubscription";
            return true;
          case ResourceType::AWS_MSK_Cluster:
            value = "AWS::MSK::Cluster";
            return true;
          case ResourceType::AWS_StepFunctions_Activity:
            value = "AWS::StepFunctions::Activity";
            return true;
          case ResourceType::AWS_WorkSpaces_Workspace:
            value = "AWS::WorkSpaces::Workspace";
            return true;
          case ResourceType::AWS_WorkSpaces_ConnectionAlias:
            value = "AWS::WorkSpaces::ConnectionAlias";
            return true;
          case ResourceType::AWS_SageMaker_Model:
            value = "AWS::SageMaker::Model";
            return true;
          case ResourceType::AWS_ElasticLoadBalancingV2_Listener:
            value = "AWS::ElasticLoadBalancingV2::Listener";
            return true;
          case ResourceType::AWS_StepFunctions_StateMachine:
            value = "AWS::StepFunctions::StateMachine";
            return true;
          case ResourceType::AWS_Batch_JobQueue:
            value = "AWS::Batch::JobQueue";
            return true;
          case ResourceType::AWS_Batch_ComputeEnvironment:
            value = "AWS::Batch::ComputeEnvironment";
            return true;
          case ResourceType::AWS_AccessAnalyzer_Analyzer:
            value = "AWS::AccessAnalyzer::Analyzer";
            return true;
          case ResourceType::AWS_Athena_WorkGroup:
            value = "AWS::Athena::WorkGroup";
            return true;
          case ResourceType::AWS_Athena_DataCatalog:
            value = "AWS::Athena::DataCatalog";
            return true;
          case ResourceType::AWS_Detective_Graph:
            value = "AWS::Detective::Graph";
            return true;
          case ResourceType::AWS_GlobalAccelerator_Accelerator:
            value = "AWS::GlobalAccelerator::Accelerator";
            return true;
          case ResourceType::AWS_GlobalAccelerator_EndpointGroup:
            value = "AWS::GlobalAccelerator::EndpointGroup";
            return true;
          case ResourceType::AWS_GlobalAccelerator_Listener:
            value = "AWS::GlobalAccelerator::Listener";
            return true;
          case ResourceType::AWS_EC2_TransitGatewayAttachment:
            value = "AWS::EC2::TransitGatewayAttachment";
            return true;
          case ResourceType::AWS_EC2_TransitGatewayRouteTable:
            value = "AWS::EC2::TransitGatewayRouteTable";
            return true;
          case ResourceType::AWS_DMS_Certificate:
            value = "AWS::DMS::Certificate";
            return true;
          case ResourceType::AWS_AppConfig_Application:
            value = "AWS::AppConfig::Application";
            return true;
          case ResourceType::AWS_AppSync_GraphQLApi:
            value = "AWS::AppSync::GraphQLApi";
            return true;
          case ResourceType::AWS_DataSync_LocationSMB:
            value = "AWS::DataSync::LocationSMB";
            return true;
          case ResourceType::AWS_DataSync_LocationFSxLustre:
            value = "AWS::DataSync::LocationFSxLustre";
            return true;
          case ResourceType::AWS_DataSync_LocationS3:
            value = "AWS::DataSync::LocationS3";
            return true;
          case ResourceType::AWS_DataSync_LocationEFS:
            value = "AWS::DataSync::LocationEFS";
            return true;
          case ResourceType::AWS_DataSync_Task:
            value = "AWS::DataSync::Task";
            return true;
          case ResourceType::AWS_DataSync_LocationNFS:
            value = "AWS::DataSync::LocationNFS";
            return true;
          case ResourceType::AWS_EC2_NetworkInsightsAccessScopeAnalysis:
            value = "AWS::EC2::NetworkInsightsAccessScopeAnalysis";
            return true;
          case ResourceType::AWS_EKS_FargateProfile:
            value = "AWS::EKS::FargateProfile";
            return true;
          case ResourceType::AWS_Glue_Job:
            value = "AWS::Glue::Job";
            return true;
          case ResourceType::AWS_GuardDuty_ThreatIntelSet:
            value = "AWS::GuardDuty::ThreatIntelSet";
            return true;
          case ResourceType::AWS_GuardDuty_IPSet:
            value = "AWS::GuardDuty::IPSet";
            return true;
          case ResourceType::AWS_SageMaker_Workteam:
            value = "AWS::SageMaker::Workteam";
            return true;
          case ResourceType::AWS_SageMaker_NotebookInstanceLifecycleConfig:
            value = "AWS::SageMaker::NotebookInstanceLifecycleConfig";
            return true;
          case ResourceType::AWS_ServiceDiscovery_Service:
            value = "AWS::ServiceDiscovery::Service";
            return true;
          case ResourceType::AWS_ServiceDiscovery_PublicDnsNamespace:
            value = "AWS::ServiceDiscovery::PublicDnsNamespace";
            return true;
          case ResourceType::AWS_SES_ContactList:
            value = "AWS::SES::ContactList";
            return true;
          case ResourceType::AWS_SES_ConfigurationSet:
            value = "AWS::SES::ConfigurationSet";
            return true;
          case ResourceType::AWS_Route53_HostedZone:
            value = "AWS::Route53::HostedZone";
            return true;
          case ResourceType::AWS_IoTEvents_Input:
            value = "AWS::IoTEvents::Input";
            return true;
          case ResourceType::AWS_IoTEvents_DetectorModel:
            value = "AWS::IoTEvents::DetectorModel";
            return true;
          case ResourceType::AWS_IoTEvents_AlarmModel:
            value = "AWS::IoTEvents::AlarmModel";
            return true;
          case ResourceType::AWS_ServiceDiscovery_HttpNamespace:
            value = "AWS::ServiceDiscovery::HttpNamespace";
            return true;
          case ResourceType::AWS_Events_EventBus:
            value = "AWS::Events::EventBus";
            return true;
          case ResourceType::AWS_ImageBuilder_ContainerRecipe:
            value = "AWS::ImageBuilder::ContainerRecipe";
            return true;
          case ResourceType::AWS_ImageBuilder_DistributionConfiguration:
            value = "AWS::ImageBuilder::DistributionConfiguration";
            return true;
          case ResourceType::AWS_ImageBuilder_InfrastructureConfiguration:
            value = "AWS::ImageBuilder::InfrastructureConfiguration";
            return true;
          case ResourceType::AWS_DataSync_LocationObjectStorage:
            value = "AWS::DataSync::LocationObjectStorage";
            return true;
          case ResourceType::AWS_DataSync_LocationHDFS:
            value = "AWS::DataSync::LocationHDFS";
            return true;
          case ResourceType::AWS_Glue_Classifier:
            value = "AWS::Glue::Classifier";
            return true;
          case ResourceType::AWS_Route53RecoveryReadiness_Cell:
            value = "AWS::Route53RecoveryReadiness::Cell";
            return true;
          case ResourceType::AWS_Route53RecoveryReadiness_ReadinessCheck:
            value = "AWS::Route53RecoveryReadiness::ReadinessCheck";
            return true;
          case ResourceType::AWS_ECR_RegistryPolicy:
            value = "AWS::ECR::RegistryPolicy";
            return true;
          case ResourceType::AWS_Backup_ReportPlan:
            value = "AWS::Backup::ReportPlan";
            return true;
          case ResourceType::AWS_Lightsail_Certificate:
            value = "AWS::Lightsail::Certificate";
            return true;
          case ResourceType::AWS_RUM_AppMonitor:
            value = "AWS::RUM::AppMonitor";
            return true;
          case ResourceType::AWS_Events_Endpoint:
            value = "AWS::Events::Endpoint";
            return true;
          case ResourceType::AWS_SES_ReceiptRuleSet:
            value = "AWS::SES::ReceiptRuleSet";
            return true;
          case ResourceType::AWS_Events_Archive:
            value = "AWS::Events::Archive";
            return true;
          case ResourceType::AWS_Events_ApiDestination:
            value = "AWS::Events::ApiDestination";
            return true;
          case ResourceType::AWS_Lightsail_Disk:
            value = "AWS::Lightsail::Disk";
            return true;
          case ResourceType::AWS_FIS_ExperimentTemplate:
            value = "AWS::FIS::ExperimentTemplate";
            return true;
          case ResourceType::AWS_DataSync_LocationFSxWindows:
            value = "AWS::DataSync::LocationFSxWindows";
            return true;
          case ResourceType::AWS_SES_ReceiptFilter:
            value = "AWS::SES::ReceiptFilter";
            return true;
          case ResourceType::AWS_GuardDuty_Filter:
            value = "AWS::GuardDuty::Filter";
            return true;
          case ResourceType::AWS_SES_Template:
            value = "AWS::SES::Template";
            return true;
          case ResourceType::AWS_AmazonMQ_Broker:
            value = "AWS::AmazonMQ::Broker";
            return true;
          case ResourceType::AWS_AppConfig_Environment:
            value = "AWS::AppConfig::Environment";
            return true;
          case ResourceType::AWS_AppConfig_ConfigurationProfile:
            value = "AWS::AppConfig::ConfigurationProfile";
            return true;
          case ResourceType::AWS_Cloud9_EnvironmentEC2:
            value = "AWS::Cloud9::EnvironmentEC2";
            return true;
          case ResourceType::AWS_EventSchemas_Registry:
            value = "AWS::EventSchemas::Registry";
            return true;
          case ResourceType::AWS_EventSchemas_RegistryPolicy:
            value = "AWS::EventSchemas::RegistryPolicy";
            return true;
          case ResourceType::AWS_EventSchemas_Discoverer:
            value = "AWS::EventSchemas::Discoverer";
            return true;
          case ResourceType::AWS_FraudDetector_Label:
            value = "AWS::FraudDetector::Label";
            return true;
          case ResourceType::AWS_FraudDetector_EntityType:
            value = "AWS::FraudDetector::EntityType";
            return true;
          case ResourceType::AWS_FraudDetector_Variable:
            value = "AWS::FraudDetector::Variable";
            return true;
          case ResourceType::AWS_FraudDetector_Outcome:
            value = "AWS::FraudDetector::Outcome";
            return true;
          case ResourceType::AWS_IoT_Authorizer:
            value = "AWS::IoT::Authorizer";
            return true;
          case ResourceType::AWS_IoT_SecurityProfile:
            value = "AWS::IoT::SecurityProfile";
            return true;
          case ResourceType::AWS_IoT_RoleAlias:
            value = "AWS::IoT::RoleAlias";
            return true;
          case ResourceType::AWS_IoT_Dimension:
            value = "AWS::IoT::Dimension";
            return true;
          case ResourceType::AWS_IoTAnalytics_Datastore:
            value = "AWS::IoTAnalytics::Datastore";
            return true;
          case ResourceType::AWS_Lightsail_Bucket:
            value = "AWS::Lightsail::Bucket";
            return true;
          case ResourceType::AWS_Lightsail_StaticIp:
            value = "AWS::Lightsail::StaticIp";
            return true;
          case ResourceType::AWS_MediaPackage_PackagingGroup:
            value = "AWS::MediaPackage::PackagingGroup";
            return true;
          case ResourceType::AWS_Route53RecoveryReadiness_RecoveryGroup:
            value = "AWS::Route53RecoveryReadiness::RecoveryGroup";
            return true;
          case ResourceType::AWS_ResilienceHub_ResiliencyPolicy:
            value = "AWS::ResilienceHub::ResiliencyPolicy";
            return true;
          case ResourceType::AWS_Transfer_Workflow:
            value = "AWS::Transfer::Workflow";
            return true;
          case ResourceType::AWS_EKS_IdentityProviderConfig:
            value = "AWS::EKS::IdentityProviderConfig";
            return true;
          case ResourceType::AWS_EKS_Addon:
            value = "AWS::EKS::Addon";
            return true;
          case ResourceType::AWS_Glue_MLTransform:
            value = "AWS::Glue::MLTransform";
            return true;
          case ResourceType::AWS_IoT_Policy:
            value = "AWS::IoT::Policy";
            return true;
          case ResourceType::AWS_IoT_MitigationAction:
            value = "AWS::IoT::MitigationAction";
            return true;
          case ResourceType::AWS_IoTTwinMaker_Workspace:
            value = "AWS::IoTTwinMaker::Workspace";
            return true;
          case ResourceType::AWS_IoTTwinMaker_Entity:
            value = "AWS::IoTTwinMaker::Entity";
            return true;
          case ResourceType::AWS_IoTAnalytics_Dataset:
            value = "AWS::IoTAnalytics::Dataset";
            return true;
          case ResourceType::AWS_IoTAnalytics_Pipeline:
            value = "AWS::IoTAnalytics::Pipeline";
            return true;
          case ResourceType::AWS_IoTAnalytics_Channel:
            value = "AWS::IoTAnalytics::Channel";
            return true;
          case ResourceType::AWS_IoTSiteWise_Dashboard:
            value = "AWS::IoTSiteWise::Dashboard";
            return true;
          case ResourceType::AWS_IoTSiteWise_Project:
            value = "AWS::IoTSiteWise::Project";
            return true;
          case ResourceType::AWS_IoTSiteWise_Portal:
            value = "AWS::IoTSiteWise::Portal";
            return true;
          case ResourceType::AWS_IoTSiteWise_AssetModel:
            value = "AWS::IoTSiteWise::AssetModel";
            return true;
          case ResourceType::AWS_IVS_Channel:
            value = "AWS::IVS::Channel";
            return true;
          case ResourceType::AWS_IVS_RecordingConfiguration:
            value = "AWS::IVS::RecordingConfiguration";
            return true;
          case ResourceType::AWS_IVS_PlaybackKeyPair:
            value = "AWS::IVS::PlaybackKeyPair";
            return true;
          case ResourceType::AWS_KinesisAnalyticsV2_Application:
            value = "AWS::KinesisAnalyticsV2::Application";
            return true;
          case ResourceType::AWS_RDS_GlobalCluster:
            value = "AWS::RDS::GlobalCluster";
            return true;
          case ResourceType::AWS_S3_MultiRegionAccessPoint:
            value = "AWS::S3::MultiRegionAccessPoint";
            return true;
          case ResourceType::AWS_DeviceFarm_TestGridProject:
            value = "AWS::DeviceFarm::TestGridProject";
            return true;
          case ResourceType::AWS_Budgets_BudgetsAction:
            value = "AWS::Budgets::BudgetsAction";
            return true;
          case ResourceType::AWS_Lex_Bot:
            value = "AWS::Lex::Bot";
            return true;
          case ResourceType::AWS_CodeGuruReviewer_RepositoryAssociation:
            value = "AWS::CodeGuruReviewer::RepositoryAssociation";
            return true;
          case ResourceType::AWS_IoT_CustomMetric:
            value = "AWS::IoT::CustomMetric";
            return true;
          case ResourceType::AWS_Route53Resolver_FirewallDomainList:
            value = "AWS::Route53Resolver::FirewallDomainList";
            return true;
          case ResourceType::AWS_RoboMaker_RobotApplicationVersion:
            value = "AWS::RoboMaker::RobotApplicationVersion";
            return true;
          case ResourceType::AWS_EC2_TrafficMirrorSession:
            value = "AWS::EC2::TrafficMirrorSession";
            return true;
          case ResourceType::AWS_IoTSiteWise_Gateway:
            value = "AWS::IoTSiteWise::Gateway";
            return true;
          case ResourceType::AWS_Lex_BotAlias:
            value = "AWS::Lex::BotAlias";
            return true;
          case ResourceType::AWS_LookoutMetrics_Alert:
            value = "AWS::LookoutMetrics::Alert";
            return true;
          default:
            return false;
          }
        }
        static bool GetNameForEnumHelper2(ResourceType enumValue, Aws::String& value)
        {
          switch(enumValue)
          {
          case ResourceType::AWS_IoT_AccountAuditConfiguration:
            value = "AWS::IoT::AccountAuditConfiguration";
            return true;
          case ResourceType::AWS_EC2_TrafficMirrorTarget:
            value = "AWS::EC2::TrafficMirrorTarget";
            return true;
          case ResourceType::AWS_S3_StorageLens:
            value = "AWS::S3::StorageLens";
            return true;
          case ResourceType::AWS_IoT_ScheduledAudit:
            value = "AWS::IoT::ScheduledAudit";
            return true;
          case ResourceType::AWS_Events_Connection:
            value = "AWS::Events::Connection";
            return true;
          case ResourceType::AWS_EventSchemas_Schema:
            value = "AWS::EventSchemas::Schema";
            return true;
          case ResourceType::AWS_MediaPackage_PackagingConfiguration:
            value = "AWS::MediaPackage::PackagingConfiguration";
            return true;
          case ResourceType::AWS_KinesisVideo_SignalingChannel:
            value = "AWS::KinesisVideo::SignalingChannel";
            return true;
          case ResourceType::AWS_AppStream_DirectoryConfig:
            value = "AWS::AppStream::DirectoryConfig";
            return true;
          case ResourceType::AWS_LookoutVision_Project:
            value = "AWS::LookoutVision::Project";
            return true;
          case ResourceType::AWS_Route53RecoveryControl_Cluster:
            value = "AWS::Route53RecoveryControl::Cluster";
            return true;
          case ResourceType::AWS_Route53RecoveryControl_SafetyRule:
            value = "AWS::Route53RecoveryControl::SafetyRule";
            return true;
          case ResourceType::AWS_Route53RecoveryControl_ControlPanel:
            value = "AWS::Route53RecoveryControl::ControlPanel";
            return true;
          case ResourceType::AWS_Route53RecoveryControl_RoutingControl:
            value = "AWS::Route53RecoveryControl::RoutingControl";
            return true;
          case ResourceType::AWS_Route53RecoveryReadiness_ResourceSet:
            value = "AWS::Route53RecoveryReadiness::ResourceSet";
            return true;
          case ResourceType::AWS_RoboMaker_SimulationApplication:
            value = "AWS::RoboMaker::SimulationApplication";
            return true;
          case ResourceType::AWS_RoboMaker_RobotApplication:
            value = "AWS::RoboMaker::RobotApplication";
            return true;
          case ResourceType::AWS_HealthLake_FHIRDatastore:
            value = "AWS::HealthLake::FHIRDatastore";
            return true;
          case ResourceType::AWS_Pinpoint_Segment:
            value = "AWS::Pinpoint::Segment";
            return true;
          case ResourceType::AWS_Pinpoint_ApplicationSettings:
            value = "AWS::Pinpoint::ApplicationSettings";
            return true;
          case ResourceType::AWS_Events_Rule:
            value = "AWS::Events::Rule";
            return true;
          case ResourceType::AWS_EC2_DHCPOptions:
            value = "AWS::EC2::DHCPOptions";
            return true;
          case ResourceType::AWS_EC2_NetworkInsightsPath:
            value = "AWS::EC2::NetworkInsightsPath";
            return true;
          case ResourceType::AWS_EC2_TrafficMirrorFilter:
            value = "AWS::EC2::TrafficMirrorFilter";
            return true;
          case ResourceType::AWS_EC2_IPAM:
            value = "AWS::EC2::IPAM";
            return true;
          case ResourceType::AWS_IoTTwinMaker_Scene:
            value = "AWS::IoTTwinMaker::Scene";
            return true;
          case ResourceType::AWS_NetworkManager_TransitGatewayRegistration:
            value = "AWS::NetworkManager::TransitGatewayRegistration";
            return true;
          case ResourceType::AWS_CustomerProfiles_Domain:
            value = "AWS::CustomerProfiles::Domain";
            return true;
          case ResourceType::AWS_AutoScaling_WarmPool:
            value = "AWS::AutoScaling::WarmPool";
            return true;
          case ResourceType::AWS_Connect_PhoneNumber:
            value = "AWS::Connect::PhoneNumber";
            return true;
          case ResourceType::AWS_AppConfig_DeploymentStrategy:
            value = "AWS::AppConfig::DeploymentStrategy";
            return true;
          case ResourceType::AWS_AppFlow_Flow:
            value = "AWS::AppFlow::Flow";
            return true;
          case ResourceType::AWS_AuditManager_Assessment:
            value = "AWS::AuditManager::Assessment";
            return true;
          case ResourceType::AWS_CloudWatch_MetricStream:
            value = "AWS::CloudWatch::MetricStream";
            return true;
          case ResourceType::AWS_DeviceFarm_InstanceProfile:
            value = "AWS::DeviceFarm::InstanceProfile";
            return true;
          case ResourceType::AWS_DeviceFarm_Project:
            value = "AWS::DeviceFarm::Project";
            return true;
          case ResourceType::AWS_EC2_EC2Fleet:
            value = "AWS::EC2::EC2Fleet";
            return true;
          case ResourceType::AWS_EC2_SubnetRouteTableAssociation:
            value = "AWS::EC2::SubnetRouteTableAssociation";
            return true;
          case ResourceType::AWS_ECR_PullThroughCacheRule:
            value = "AWS::ECR::PullThroughCacheRule";
            return true;
          case ResourceType::AWS_GroundStation_Config:
            value = "AWS::GroundStation::Config";
            return true;
          case ResourceType::AWS_ImageBuilder_ImagePipeline:
            value = "AWS::ImageBuilder::ImagePipeline";
            return true;
          case ResourceType::AWS_IoT_FleetMetric:
            value = "AWS::IoT::FleetMetric";
            return true;
          case ResourceType::AWS_IoTWireless_ServiceProfile:
            value = "AWS::IoTWireless::ServiceProfile";
            return true;
          case ResourceType::AWS_NetworkManager_Device:
            value = "AWS::NetworkManager::Device";
            return true;
          case ResourceType::AWS_NetworkManager_GlobalNetwork:
            value = "AWS::NetworkManager::GlobalNetwork";
            return true;
          case ResourceType::AWS_NetworkManager_Link:
            value = "AWS::NetworkManager::Link";
            return true;
          case ResourceType::AWS_NetworkManager_Site:
            value = "AWS::NetworkManager::Site";
            return true;
          case ResourceType::AWS_Panorama_Package:
            value = "AWS::Panorama::Package";
            return true;
          case ResourceType::AWS_Pinpoint_App:
            value = "AWS::Pinpoint::App";
            return true;
          case ResourceType::AWS_Redshift_ScheduledAction:
            value = "AWS::Redshift::ScheduledAction";
            return true;
          case ResourceType::AWS_Route53Resolver_FirewallRuleGroupAssociation:
            value = "AWS::Route53Resolver::FirewallRuleGroupAssociation";
            return true;
          case ResourceType::AWS_SageMaker_AppImageConfig:
            value = "AWS::SageMaker::AppImageConfig";
            return true;
          case ResourceType::AWS_SageMaker_Image:
            value = "AWS::SageMaker::Image";
            return true;
          case ResourceType::AWS_ECS_TaskSet:
            value = "AWS::ECS::TaskSet";
            return true;
          case ResourceType::AWS_Cassandra_Keyspace:
            value = "AWS::Cassandra::Keyspace";
            return true;
          case ResourceType::AWS_Signer_SigningProfile:
            value = "AWS::Signer::SigningProfile";
            return true;
          case ResourceType::AWS_Amplify_App:
            value = "AWS::Amplify::App";
            return true;
          case ResourceType::AWS_AppMesh_VirtualNode:
            value = "AWS::AppMesh::VirtualNode";
            return true;
          case ResourceType::AWS_AppMesh_VirtualService:
            value = "AWS::AppMesh::VirtualService";
            return true;
          case ResourceType::AWS_AppRunner_VpcConnector:
            value = "AWS::AppRunner::VpcConnector";
            return true;
          case ResourceType::AWS_AppStream_Application:
            value = "AWS::AppStream::Application";
            return true;
          case ResourceType::AWS_CodeArtifact_Repository:
            value = "AWS::CodeArtifact::Repository";
            return true;
          case ResourceType::AWS_EC2_PrefixList:
            value = "AWS::EC2::PrefixList";
            return true;
          case ResourceType::AWS_EC2_SpotFleet:
            value = "AWS::EC2::SpotFleet";
            return true;
          case ResourceType::AWS_Evidently_Project:
            value = "AWS::Evidently::Project";
            return true;
          case ResourceType::AWS_Forecast_Dataset:
            value = "AWS::Forecast::Dataset";
            return true;
          case ResourceType::AWS_IAM_SAMLProvider:
            value = "AWS::IAM::SAMLProvider";
            return true;
          case ResourceType::AWS_IAM_ServerCertificate:
            value = "AWS::IAM::ServerCertificate";
            return true;
          case ResourceType::AWS_Pinpoint_Campaign:
            value = "AWS::Pinpoint::Campaign";
            return true;
          case ResourceType::AWS_Pinpoint_InAppTemplate:
            value = "AWS::Pinpoint::InAppTemplate";
            return true;
          case ResourceType::AWS_SageMaker_Domain:
            value = "AWS::SageMaker::Domain";
            return true;
          case ResourceType::AWS_Transfer_Agreement:
            value = "AWS::Transfer::Agreement";
            return true;
          case ResourceType::AWS_Transfer_Connector:
            value = "AWS::Transfer::Connector";
            return true;
          case ResourceType::AWS_KinesisFirehose_DeliveryStream:
            value = "AWS::KinesisFirehose::DeliveryStream";
            return true;
          case ResourceType::AWS_Amplify_Branch:
            value = "AWS::Amplify::Branch";
            return true;
          case ResourceType::AWS_AppIntegrations_EventIntegration:
            value = "AWS::AppIntegrations::EventIntegration";
            return true;
          case ResourceType::AWS_AppMesh_Route:
            value = "AWS::AppMesh::Route";
            return true;
          case ResourceType::AWS_Athena_PreparedStatement:
            value = "AWS::Athena::PreparedStatement";
            return true;
          case ResourceType::AWS_EC2_IPAMScope:
            value = "AWS::EC2::IPAMScope";
            return true;
          case ResourceType::AWS_Evidently_Launch:
            value = "AWS::Evidently::Launch";
            return true;
          case ResourceType::AWS_Forecast_DatasetGroup:
            value = "AWS::Forecast::DatasetGroup";
            return true;
          case ResourceType::AWS_GreengrassV2_ComponentVersion:
            value = "AWS::GreengrassV2::ComponentVersion";
            return true;
          case ResourceType::AWS_GroundStation_MissionProfile:
            value = "AWS::GroundStation::MissionProfile";
            return true;
          case ResourceType::AWS_MediaConnect_FlowEntitlement:
            value = "AWS::MediaConnect::FlowEntitlement";
            return true;
          case ResourceType::AWS_MediaConnect_FlowVpcInterface:
            value = "AWS::MediaConnect::FlowVpcInterface";
            return true;
          case ResourceType::AWS_MediaTailor_PlaybackConfiguration:
            value = "AWS::MediaTailor::PlaybackConfiguration";
            return true;
          case ResourceType::AWS_MSK_Configuration:
            value = "AWS::MSK::Configuration";
            return true;
          case ResourceType::AWS_Personalize_Dataset:
            value = "AWS::Personalize::Dataset";
            return true;
          case ResourceType::AWS_Personalize_Schema:
            value = "AWS::Personalize::Schema";
            return true;
          case ResourceType::AWS_Personalize_Solution:
            value = "AWS::Personalize::Solution";
            return true;
          case ResourceType::AWS_Pinpoint_EmailTemplate:
            value = "AWS::Pinpoint::EmailTemplate";
            return true;
          case ResourceType::AWS_Pinpoint_EventStream:
            value = "AWS::Pinpoint::EventStream";
            return true;
          case ResourceType::AWS_ResilienceHub_App:
            value = "AWS::ResilienceHub::App";
            return true;
          case ResourceType::AWS_ACMPCA_CertificateAuthority:
            value = "AWS::ACMPCA::CertificateAuthority";
            return true;
          case ResourceType::AWS_AppConfig_HostedConfigurationVersion:
            value = "AWS::AppConfig::HostedConfigurationVersion";
            return true;
          case ResourceType::AWS_AppMesh_VirtualGateway:
            value = "AWS::AppMesh::VirtualGateway";
            return true;
          case ResourceType::AWS_AppMesh_VirtualRouter:
            value = "AWS::AppMesh::VirtualRouter";
            return true;
          case ResourceType::AWS_AppRunner_Service:
            value = "AWS::AppRunner::Service";
            return true;
          case ResourceType::AWS_CustomerProfiles_ObjectType:
            value = "AWS::CustomerProfiles::ObjectType";
            return true;
          case ResourceType::AWS_DMS_Endpoint:
            value = "AWS::DMS::Endpoint";
            return true;
          case ResourceType::AWS_EC2_CapacityReservation:
            value = "AWS::EC2::CapacityReservation";
            return true;
          case ResourceType::AWS_EC2_ClientVpnEndpoint:
            value = "AWS::EC2::ClientVpnEndpoint";
            return true;
          case ResourceType::AWS_Kendra_Index:
            value = "AWS::Kendra::Index";
            return true;
          case ResourceType::AWS_KinesisVideo_Stream:
            value = "AWS::KinesisVideo::Stream";
            return true;
          case ResourceType::AWS_Logs_Destination:
            value = "AWS::Logs::Destination";
            return true;
          case ResourceType::AWS_Pinpoint_EmailChannel:
            value = "AWS::Pinpoint::EmailChannel";
            return true;
          case ResourceType::AWS_S3_AccessPoint:
            value = "AWS::S3::AccessPoint";
            return true;
          case ResourceType::AWS_NetworkManager_CustomerGatewayAssociation:
            value = "AWS::NetworkManager::CustomerGatewayAssociation";
            return true;
          case ResourceType::AWS_NetworkManager_LinkAssociation:
            value = "AWS::NetworkManager::LinkAssociation";
            return true;
          case ResourceType::AWS_IoTWireless_MulticastGroup:
            value = "AWS::IoTWireless::MulticastGroup";
            return true;
          case ResourceType::AWS_Personalize_DatasetGroup:
            value = "AWS::Personalize::DatasetGroup";
            return true;
          case ResourceType::AWS_IoTTwinMaker_ComponentType:
            value = "AWS::IoTTwinMaker::ComponentType";
            return true;
          case ResourceType::AWS_CodeBuild_ReportGroup:
            value = "AWS::CodeBuild::ReportGroup";
            return true;
          case ResourceType::AWS_SageMaker_FeatureGroup:
            value = "AWS::SageMaker::FeatureGroup";
            return true;
          case ResourceType::AWS_MSK_BatchScramSecret:
            value = "AWS::MSK::BatchScramSecret";
            return true;
          case ResourceType::AWS_AppStream_Stack:
            value = "AWS::AppStream::Stack";
            return true;
          case ResourceType::AWS_IoT_JobTemplate:
            value = "AWS::IoT::JobTemplate";
            return true;
          case ResourceType::AWS_IoTWireless_FuotaTask:
            value = "AWS::IoTWireless::FuotaTask";
            return true;
          case ResourceType::AWS_IoT_ProvisioningTemplate:
            value = "AWS::IoT::ProvisioningTemplate";
            return true;
          case ResourceType::AWS_InspectorV2_Filter:
            value = "AWS::InspectorV2::Filter";
            return true;
          case ResourceType::AWS_Route53Resolver_ResolverQueryLoggingConfigAssociation:
            value = "AWS::Route53Resolver::ResolverQueryLoggingConfigAssociation";
            return true;
          case ResourceType::AWS_ServiceDiscovery_Instance:
            value = "AWS::ServiceDiscovery::Instance";
            return true;
          default:
            return false;
          }
        }
        static bool GetNameForEnumHelper3(ResourceType enumValue, Aws::String& value)
        {
          switch(enumValue)
          {
          case ResourceType::AWS_Transfer_Certificate:
            value = "AWS::Transfer::Certificate";
            return true;
          case ResourceType::AWS_MediaConnect_FlowSource:
            value = "AWS::MediaConnect::FlowSource";
            return true;
          case ResourceType::AWS_APS_RuleGroupsNamespace:
            value = "AWS::APS::RuleGroupsNamespace";
            return true;
          case ResourceType::AWS_CodeGuruProfiler_ProfilingGroup:
            value = "AWS::CodeGuruProfiler::ProfilingGroup";
            return true;
          case ResourceType::AWS_Route53Resolver_ResolverQueryLoggingConfig:
            value = "AWS::Route53Resolver::ResolverQueryLoggingConfig";
            return true;
          case ResourceType::AWS_Batch_SchedulingPolicy:
            value = "AWS::Batch::SchedulingPolicy";
            return true;
          case ResourceType::AWS_ACMPCA_CertificateAuthorityActivation:
            value = "AWS::ACMPCA::CertificateAuthorityActivation";
            return true;
          case ResourceType::AWS_AppMesh_GatewayRoute:
            value = "AWS::AppMesh::GatewayRoute";
            return true;
          case ResourceType::AWS_AppMesh_Mesh:
            value = "AWS::AppMesh::Mesh";
            return true;
          case ResourceType::AWS_Connect_Instance:
            value = "AWS::Connect::Instance";
            return true;
          case ResourceType::AWS_Connect_QuickConnect:
            value = "AWS::Connect::QuickConnect";
            return true;
          case ResourceType::AWS_EC2_CarrierGateway:
            value = "AWS::EC2::CarrierGateway";
            return true;
          case ResourceType::AWS_EC2_IPAMPool:
            value = "AWS::EC2::IPAMPool";
            return true;
          case ResourceType::AWS_EC2_TransitGatewayConnect:
            value = "AWS::EC2::TransitGatewayConnect";
            return true;
          case ResourceType::AWS_EC2_TransitGatewayMulticastDomain:
            value = "AWS::EC2::TransitGatewayMulticastDomain";
            return true;
          case ResourceType::AWS_ECS_CapacityProvider:
            value = "AWS::ECS::CapacityProvider";
            return true;
          case ResourceType::AWS_IAM_InstanceProfile:
            value = "AWS::IAM::InstanceProfile";
            return true;
          case ResourceType::AWS_IoT_CACertificate:
            value = "AWS::IoT::CACertificate";
            return true;
          case ResourceType::AWS_IoTTwinMaker_SyncJob:
            value = "AWS::IoTTwinMaker::SyncJob";
            return true;
          case ResourceType::AWS_KafkaConnect_Connector:
            value = "AWS::KafkaConnect::Connector";
            return true;
          case ResourceType::AWS_Lambda_CodeSigningConfig:
            value = "AWS::Lambda::CodeSigningConfig";
            return true;
          case ResourceType::AWS_NetworkManager_ConnectPeer:
            value = "AWS::NetworkManager::ConnectPeer";
            return true;
          case ResourceType::AWS_ResourceExplorer2_Index:
            value = "AWS::ResourceExplorer2::Index";
            return true;
          case ResourceType::AWS_AppStream_Fleet:
            value = "AWS::AppStream::Fleet";
            return true;
          case ResourceType::AWS_Cognito_UserPool:
            value = "AWS::Cognito::UserPool";
            return true;
          case ResourceType::AWS_Cognito_UserPoolClient:
            value = "AWS::Cognito::UserPoolClient";
            return true;
          case ResourceType::AWS_Cognito_UserPoolGroup:
            value = "AWS::Cognito::UserPoolGroup";
            return true;
          case ResourceType::AWS_EC2_NetworkInsightsAccessScope:
            value = "AWS::EC2::NetworkInsightsAccessScope";
            return true;
          case ResourceType::AWS_EC2_NetworkInsightsAnalysis:
            value = "AWS::EC2::NetworkInsightsAnalysis";
            return true;
          case ResourceType::AWS_Grafana_Workspace:
            value = "AWS::Grafana::Workspace";
            return true;
          case ResourceType::AWS_GroundStation_DataflowEndpointGroup:
            value = "AWS::GroundStation::DataflowEndpointGroup";
            return true;
          case ResourceType::AWS_ImageBuilder_ImageRecipe:
            value = "AWS::ImageBuilder::ImageRecipe";
            return true;
          case ResourceType::AWS_KMS_Alias:
            value = "AWS::KMS::Alias";
            return true;
          case ResourceType::AWS_M2_Environment:
            value = "AWS::M2::Environment";
            return true;
          case ResourceType::AWS_QuickSight_DataSource:
            value = "AWS::QuickSight::DataSource";
            return true;
          case ResourceType::AWS_QuickSight_Template:
            value = "AWS::QuickSight::Template";
            return true;
          case ResourceType::AWS_QuickSight_Theme:
            value = "AWS::QuickSight::Theme";
            return true;
          case ResourceType::AWS_RDS_OptionGroup:
            value = "AWS::RDS::OptionGroup";
            return true;
          case ResourceType::AWS_Redshift_EndpointAccess:
            value = "AWS::Redshift::EndpointAccess";
            return true;
          case ResourceType::AWS_Route53Resolver_FirewallRuleGroup:
            value = "AWS::Route53Resolver::FirewallRuleGroup";
            return true;
          case ResourceType::AWS_SSM_Document:
            value = "AWS::SSM::Document";
            return true;
          default:
            return false;
          }
        }

        ResourceType GetResourceTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          ResourceType enumValue;
          if (GetEnumForNameHelper0(hashCode, enumValue))
          {
             return enumValue;
          }
          else if (GetEnumForNameHelper1(hashCode, enumValue))
          {
             return enumValue;
          }
          else if (GetEnumForNameHelper2(hashCode, enumValue))
          {
             return enumValue;
          }
          else if (GetEnumForNameHelper3(hashCode, enumValue))
          {
             return enumValue;
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
          Aws::String value;
          if (GetNameForEnumHelper0(enumValue, value))
          {
            return value;
          }
          else if (GetNameForEnumHelper1(enumValue, value))
          {
            return value;
          }
          else if (GetNameForEnumHelper2(enumValue, value))
          {
            return value;
          }
          else if (GetNameForEnumHelper3(enumValue, value))
          {
            return value;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
          }

          return {};
        }

      } // namespace ResourceTypeMapper
    } // namespace Model
  } // namespace ConfigService
} // namespace Aws
