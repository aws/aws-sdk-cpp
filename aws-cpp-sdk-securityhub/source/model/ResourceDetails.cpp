/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/ResourceDetails.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SecurityHub
{
namespace Model
{

ResourceDetails::ResourceDetails() : 
    m_awsAutoScalingAutoScalingGroupHasBeenSet(false),
    m_awsCodeBuildProjectHasBeenSet(false),
    m_awsCloudFrontDistributionHasBeenSet(false),
    m_awsEc2InstanceHasBeenSet(false),
    m_awsEc2NetworkInterfaceHasBeenSet(false),
    m_awsEc2SecurityGroupHasBeenSet(false),
    m_awsEc2VolumeHasBeenSet(false),
    m_awsEc2VpcHasBeenSet(false),
    m_awsEc2EipHasBeenSet(false),
    m_awsEc2SubnetHasBeenSet(false),
    m_awsEc2NetworkAclHasBeenSet(false),
    m_awsElbv2LoadBalancerHasBeenSet(false),
    m_awsElasticBeanstalkEnvironmentHasBeenSet(false),
    m_awsElasticsearchDomainHasBeenSet(false),
    m_awsS3BucketHasBeenSet(false),
    m_awsS3AccountPublicAccessBlockHasBeenSet(false),
    m_awsS3ObjectHasBeenSet(false),
    m_awsSecretsManagerSecretHasBeenSet(false),
    m_awsIamAccessKeyHasBeenSet(false),
    m_awsIamUserHasBeenSet(false),
    m_awsIamPolicyHasBeenSet(false),
    m_awsApiGatewayV2StageHasBeenSet(false),
    m_awsApiGatewayV2ApiHasBeenSet(false),
    m_awsDynamoDbTableHasBeenSet(false),
    m_awsApiGatewayStageHasBeenSet(false),
    m_awsApiGatewayRestApiHasBeenSet(false),
    m_awsCloudTrailTrailHasBeenSet(false),
    m_awsSsmPatchComplianceHasBeenSet(false),
    m_awsCertificateManagerCertificateHasBeenSet(false),
    m_awsRedshiftClusterHasBeenSet(false),
    m_awsElbLoadBalancerHasBeenSet(false),
    m_awsIamGroupHasBeenSet(false),
    m_awsIamRoleHasBeenSet(false),
    m_awsKmsKeyHasBeenSet(false),
    m_awsLambdaFunctionHasBeenSet(false),
    m_awsLambdaLayerVersionHasBeenSet(false),
    m_awsRdsDbInstanceHasBeenSet(false),
    m_awsSnsTopicHasBeenSet(false),
    m_awsSqsQueueHasBeenSet(false),
    m_awsWafWebAclHasBeenSet(false),
    m_awsRdsDbSnapshotHasBeenSet(false),
    m_awsRdsDbClusterSnapshotHasBeenSet(false),
    m_awsRdsDbClusterHasBeenSet(false),
    m_awsEcsClusterHasBeenSet(false),
    m_awsEcsContainerHasBeenSet(false),
    m_awsEcsTaskDefinitionHasBeenSet(false),
    m_containerHasBeenSet(false),
    m_otherHasBeenSet(false),
    m_awsRdsEventSubscriptionHasBeenSet(false),
    m_awsEcsServiceHasBeenSet(false),
    m_awsAutoScalingLaunchConfigurationHasBeenSet(false),
    m_awsEc2VpnConnectionHasBeenSet(false),
    m_awsEcrContainerImageHasBeenSet(false),
    m_awsOpenSearchServiceDomainHasBeenSet(false),
    m_awsEc2VpcEndpointServiceHasBeenSet(false),
    m_awsXrayEncryptionConfigHasBeenSet(false),
    m_awsWafRateBasedRuleHasBeenSet(false),
    m_awsWafRegionalRateBasedRuleHasBeenSet(false),
    m_awsEcrRepositoryHasBeenSet(false),
    m_awsEksClusterHasBeenSet(false),
    m_awsNetworkFirewallFirewallPolicyHasBeenSet(false),
    m_awsNetworkFirewallFirewallHasBeenSet(false),
    m_awsNetworkFirewallRuleGroupHasBeenSet(false),
    m_awsRdsDbSecurityGroupHasBeenSet(false),
    m_awsKinesisStreamHasBeenSet(false),
    m_awsEc2TransitGatewayHasBeenSet(false),
    m_awsEfsAccessPointHasBeenSet(false),
    m_awsCloudFormationStackHasBeenSet(false),
    m_awsCloudWatchAlarmHasBeenSet(false),
    m_awsEc2VpcPeeringConnectionHasBeenSet(false),
    m_awsWafRegionalRuleGroupHasBeenSet(false),
    m_awsWafRegionalRuleHasBeenSet(false),
    m_awsWafRegionalWebAclHasBeenSet(false),
    m_awsWafRuleHasBeenSet(false),
    m_awsWafRuleGroupHasBeenSet(false),
    m_awsEcsTaskHasBeenSet(false),
    m_awsBackupBackupVaultHasBeenSet(false),
    m_awsBackupBackupPlanHasBeenSet(false),
    m_awsBackupRecoveryPointHasBeenSet(false),
    m_awsEc2LaunchTemplateHasBeenSet(false),
    m_awsSageMakerNotebookInstanceHasBeenSet(false),
    m_awsWafv2WebAclHasBeenSet(false),
    m_awsWafv2RuleGroupHasBeenSet(false)
{
}

ResourceDetails::ResourceDetails(JsonView jsonValue) : 
    m_awsAutoScalingAutoScalingGroupHasBeenSet(false),
    m_awsCodeBuildProjectHasBeenSet(false),
    m_awsCloudFrontDistributionHasBeenSet(false),
    m_awsEc2InstanceHasBeenSet(false),
    m_awsEc2NetworkInterfaceHasBeenSet(false),
    m_awsEc2SecurityGroupHasBeenSet(false),
    m_awsEc2VolumeHasBeenSet(false),
    m_awsEc2VpcHasBeenSet(false),
    m_awsEc2EipHasBeenSet(false),
    m_awsEc2SubnetHasBeenSet(false),
    m_awsEc2NetworkAclHasBeenSet(false),
    m_awsElbv2LoadBalancerHasBeenSet(false),
    m_awsElasticBeanstalkEnvironmentHasBeenSet(false),
    m_awsElasticsearchDomainHasBeenSet(false),
    m_awsS3BucketHasBeenSet(false),
    m_awsS3AccountPublicAccessBlockHasBeenSet(false),
    m_awsS3ObjectHasBeenSet(false),
    m_awsSecretsManagerSecretHasBeenSet(false),
    m_awsIamAccessKeyHasBeenSet(false),
    m_awsIamUserHasBeenSet(false),
    m_awsIamPolicyHasBeenSet(false),
    m_awsApiGatewayV2StageHasBeenSet(false),
    m_awsApiGatewayV2ApiHasBeenSet(false),
    m_awsDynamoDbTableHasBeenSet(false),
    m_awsApiGatewayStageHasBeenSet(false),
    m_awsApiGatewayRestApiHasBeenSet(false),
    m_awsCloudTrailTrailHasBeenSet(false),
    m_awsSsmPatchComplianceHasBeenSet(false),
    m_awsCertificateManagerCertificateHasBeenSet(false),
    m_awsRedshiftClusterHasBeenSet(false),
    m_awsElbLoadBalancerHasBeenSet(false),
    m_awsIamGroupHasBeenSet(false),
    m_awsIamRoleHasBeenSet(false),
    m_awsKmsKeyHasBeenSet(false),
    m_awsLambdaFunctionHasBeenSet(false),
    m_awsLambdaLayerVersionHasBeenSet(false),
    m_awsRdsDbInstanceHasBeenSet(false),
    m_awsSnsTopicHasBeenSet(false),
    m_awsSqsQueueHasBeenSet(false),
    m_awsWafWebAclHasBeenSet(false),
    m_awsRdsDbSnapshotHasBeenSet(false),
    m_awsRdsDbClusterSnapshotHasBeenSet(false),
    m_awsRdsDbClusterHasBeenSet(false),
    m_awsEcsClusterHasBeenSet(false),
    m_awsEcsContainerHasBeenSet(false),
    m_awsEcsTaskDefinitionHasBeenSet(false),
    m_containerHasBeenSet(false),
    m_otherHasBeenSet(false),
    m_awsRdsEventSubscriptionHasBeenSet(false),
    m_awsEcsServiceHasBeenSet(false),
    m_awsAutoScalingLaunchConfigurationHasBeenSet(false),
    m_awsEc2VpnConnectionHasBeenSet(false),
    m_awsEcrContainerImageHasBeenSet(false),
    m_awsOpenSearchServiceDomainHasBeenSet(false),
    m_awsEc2VpcEndpointServiceHasBeenSet(false),
    m_awsXrayEncryptionConfigHasBeenSet(false),
    m_awsWafRateBasedRuleHasBeenSet(false),
    m_awsWafRegionalRateBasedRuleHasBeenSet(false),
    m_awsEcrRepositoryHasBeenSet(false),
    m_awsEksClusterHasBeenSet(false),
    m_awsNetworkFirewallFirewallPolicyHasBeenSet(false),
    m_awsNetworkFirewallFirewallHasBeenSet(false),
    m_awsNetworkFirewallRuleGroupHasBeenSet(false),
    m_awsRdsDbSecurityGroupHasBeenSet(false),
    m_awsKinesisStreamHasBeenSet(false),
    m_awsEc2TransitGatewayHasBeenSet(false),
    m_awsEfsAccessPointHasBeenSet(false),
    m_awsCloudFormationStackHasBeenSet(false),
    m_awsCloudWatchAlarmHasBeenSet(false),
    m_awsEc2VpcPeeringConnectionHasBeenSet(false),
    m_awsWafRegionalRuleGroupHasBeenSet(false),
    m_awsWafRegionalRuleHasBeenSet(false),
    m_awsWafRegionalWebAclHasBeenSet(false),
    m_awsWafRuleHasBeenSet(false),
    m_awsWafRuleGroupHasBeenSet(false),
    m_awsEcsTaskHasBeenSet(false),
    m_awsBackupBackupVaultHasBeenSet(false),
    m_awsBackupBackupPlanHasBeenSet(false),
    m_awsBackupRecoveryPointHasBeenSet(false),
    m_awsEc2LaunchTemplateHasBeenSet(false),
    m_awsSageMakerNotebookInstanceHasBeenSet(false),
    m_awsWafv2WebAclHasBeenSet(false),
    m_awsWafv2RuleGroupHasBeenSet(false)
{
  *this = jsonValue;
}

ResourceDetails& ResourceDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("AwsAutoScalingAutoScalingGroup"))
  {
    m_awsAutoScalingAutoScalingGroup = jsonValue.GetObject("AwsAutoScalingAutoScalingGroup");

    m_awsAutoScalingAutoScalingGroupHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AwsCodeBuildProject"))
  {
    m_awsCodeBuildProject = jsonValue.GetObject("AwsCodeBuildProject");

    m_awsCodeBuildProjectHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AwsCloudFrontDistribution"))
  {
    m_awsCloudFrontDistribution = jsonValue.GetObject("AwsCloudFrontDistribution");

    m_awsCloudFrontDistributionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AwsEc2Instance"))
  {
    m_awsEc2Instance = jsonValue.GetObject("AwsEc2Instance");

    m_awsEc2InstanceHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AwsEc2NetworkInterface"))
  {
    m_awsEc2NetworkInterface = jsonValue.GetObject("AwsEc2NetworkInterface");

    m_awsEc2NetworkInterfaceHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AwsEc2SecurityGroup"))
  {
    m_awsEc2SecurityGroup = jsonValue.GetObject("AwsEc2SecurityGroup");

    m_awsEc2SecurityGroupHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AwsEc2Volume"))
  {
    m_awsEc2Volume = jsonValue.GetObject("AwsEc2Volume");

    m_awsEc2VolumeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AwsEc2Vpc"))
  {
    m_awsEc2Vpc = jsonValue.GetObject("AwsEc2Vpc");

    m_awsEc2VpcHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AwsEc2Eip"))
  {
    m_awsEc2Eip = jsonValue.GetObject("AwsEc2Eip");

    m_awsEc2EipHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AwsEc2Subnet"))
  {
    m_awsEc2Subnet = jsonValue.GetObject("AwsEc2Subnet");

    m_awsEc2SubnetHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AwsEc2NetworkAcl"))
  {
    m_awsEc2NetworkAcl = jsonValue.GetObject("AwsEc2NetworkAcl");

    m_awsEc2NetworkAclHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AwsElbv2LoadBalancer"))
  {
    m_awsElbv2LoadBalancer = jsonValue.GetObject("AwsElbv2LoadBalancer");

    m_awsElbv2LoadBalancerHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AwsElasticBeanstalkEnvironment"))
  {
    m_awsElasticBeanstalkEnvironment = jsonValue.GetObject("AwsElasticBeanstalkEnvironment");

    m_awsElasticBeanstalkEnvironmentHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AwsElasticsearchDomain"))
  {
    m_awsElasticsearchDomain = jsonValue.GetObject("AwsElasticsearchDomain");

    m_awsElasticsearchDomainHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AwsS3Bucket"))
  {
    m_awsS3Bucket = jsonValue.GetObject("AwsS3Bucket");

    m_awsS3BucketHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AwsS3AccountPublicAccessBlock"))
  {
    m_awsS3AccountPublicAccessBlock = jsonValue.GetObject("AwsS3AccountPublicAccessBlock");

    m_awsS3AccountPublicAccessBlockHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AwsS3Object"))
  {
    m_awsS3Object = jsonValue.GetObject("AwsS3Object");

    m_awsS3ObjectHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AwsSecretsManagerSecret"))
  {
    m_awsSecretsManagerSecret = jsonValue.GetObject("AwsSecretsManagerSecret");

    m_awsSecretsManagerSecretHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AwsIamAccessKey"))
  {
    m_awsIamAccessKey = jsonValue.GetObject("AwsIamAccessKey");

    m_awsIamAccessKeyHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AwsIamUser"))
  {
    m_awsIamUser = jsonValue.GetObject("AwsIamUser");

    m_awsIamUserHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AwsIamPolicy"))
  {
    m_awsIamPolicy = jsonValue.GetObject("AwsIamPolicy");

    m_awsIamPolicyHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AwsApiGatewayV2Stage"))
  {
    m_awsApiGatewayV2Stage = jsonValue.GetObject("AwsApiGatewayV2Stage");

    m_awsApiGatewayV2StageHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AwsApiGatewayV2Api"))
  {
    m_awsApiGatewayV2Api = jsonValue.GetObject("AwsApiGatewayV2Api");

    m_awsApiGatewayV2ApiHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AwsDynamoDbTable"))
  {
    m_awsDynamoDbTable = jsonValue.GetObject("AwsDynamoDbTable");

    m_awsDynamoDbTableHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AwsApiGatewayStage"))
  {
    m_awsApiGatewayStage = jsonValue.GetObject("AwsApiGatewayStage");

    m_awsApiGatewayStageHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AwsApiGatewayRestApi"))
  {
    m_awsApiGatewayRestApi = jsonValue.GetObject("AwsApiGatewayRestApi");

    m_awsApiGatewayRestApiHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AwsCloudTrailTrail"))
  {
    m_awsCloudTrailTrail = jsonValue.GetObject("AwsCloudTrailTrail");

    m_awsCloudTrailTrailHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AwsSsmPatchCompliance"))
  {
    m_awsSsmPatchCompliance = jsonValue.GetObject("AwsSsmPatchCompliance");

    m_awsSsmPatchComplianceHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AwsCertificateManagerCertificate"))
  {
    m_awsCertificateManagerCertificate = jsonValue.GetObject("AwsCertificateManagerCertificate");

    m_awsCertificateManagerCertificateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AwsRedshiftCluster"))
  {
    m_awsRedshiftCluster = jsonValue.GetObject("AwsRedshiftCluster");

    m_awsRedshiftClusterHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AwsElbLoadBalancer"))
  {
    m_awsElbLoadBalancer = jsonValue.GetObject("AwsElbLoadBalancer");

    m_awsElbLoadBalancerHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AwsIamGroup"))
  {
    m_awsIamGroup = jsonValue.GetObject("AwsIamGroup");

    m_awsIamGroupHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AwsIamRole"))
  {
    m_awsIamRole = jsonValue.GetObject("AwsIamRole");

    m_awsIamRoleHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AwsKmsKey"))
  {
    m_awsKmsKey = jsonValue.GetObject("AwsKmsKey");

    m_awsKmsKeyHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AwsLambdaFunction"))
  {
    m_awsLambdaFunction = jsonValue.GetObject("AwsLambdaFunction");

    m_awsLambdaFunctionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AwsLambdaLayerVersion"))
  {
    m_awsLambdaLayerVersion = jsonValue.GetObject("AwsLambdaLayerVersion");

    m_awsLambdaLayerVersionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AwsRdsDbInstance"))
  {
    m_awsRdsDbInstance = jsonValue.GetObject("AwsRdsDbInstance");

    m_awsRdsDbInstanceHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AwsSnsTopic"))
  {
    m_awsSnsTopic = jsonValue.GetObject("AwsSnsTopic");

    m_awsSnsTopicHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AwsSqsQueue"))
  {
    m_awsSqsQueue = jsonValue.GetObject("AwsSqsQueue");

    m_awsSqsQueueHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AwsWafWebAcl"))
  {
    m_awsWafWebAcl = jsonValue.GetObject("AwsWafWebAcl");

    m_awsWafWebAclHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AwsRdsDbSnapshot"))
  {
    m_awsRdsDbSnapshot = jsonValue.GetObject("AwsRdsDbSnapshot");

    m_awsRdsDbSnapshotHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AwsRdsDbClusterSnapshot"))
  {
    m_awsRdsDbClusterSnapshot = jsonValue.GetObject("AwsRdsDbClusterSnapshot");

    m_awsRdsDbClusterSnapshotHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AwsRdsDbCluster"))
  {
    m_awsRdsDbCluster = jsonValue.GetObject("AwsRdsDbCluster");

    m_awsRdsDbClusterHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AwsEcsCluster"))
  {
    m_awsEcsCluster = jsonValue.GetObject("AwsEcsCluster");

    m_awsEcsClusterHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AwsEcsContainer"))
  {
    m_awsEcsContainer = jsonValue.GetObject("AwsEcsContainer");

    m_awsEcsContainerHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AwsEcsTaskDefinition"))
  {
    m_awsEcsTaskDefinition = jsonValue.GetObject("AwsEcsTaskDefinition");

    m_awsEcsTaskDefinitionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Container"))
  {
    m_container = jsonValue.GetObject("Container");

    m_containerHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Other"))
  {
    Aws::Map<Aws::String, JsonView> otherJsonMap = jsonValue.GetObject("Other").GetAllObjects();
    for(auto& otherItem : otherJsonMap)
    {
      m_other[otherItem.first] = otherItem.second.AsString();
    }
    m_otherHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AwsRdsEventSubscription"))
  {
    m_awsRdsEventSubscription = jsonValue.GetObject("AwsRdsEventSubscription");

    m_awsRdsEventSubscriptionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AwsEcsService"))
  {
    m_awsEcsService = jsonValue.GetObject("AwsEcsService");

    m_awsEcsServiceHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AwsAutoScalingLaunchConfiguration"))
  {
    m_awsAutoScalingLaunchConfiguration = jsonValue.GetObject("AwsAutoScalingLaunchConfiguration");

    m_awsAutoScalingLaunchConfigurationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AwsEc2VpnConnection"))
  {
    m_awsEc2VpnConnection = jsonValue.GetObject("AwsEc2VpnConnection");

    m_awsEc2VpnConnectionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AwsEcrContainerImage"))
  {
    m_awsEcrContainerImage = jsonValue.GetObject("AwsEcrContainerImage");

    m_awsEcrContainerImageHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AwsOpenSearchServiceDomain"))
  {
    m_awsOpenSearchServiceDomain = jsonValue.GetObject("AwsOpenSearchServiceDomain");

    m_awsOpenSearchServiceDomainHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AwsEc2VpcEndpointService"))
  {
    m_awsEc2VpcEndpointService = jsonValue.GetObject("AwsEc2VpcEndpointService");

    m_awsEc2VpcEndpointServiceHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AwsXrayEncryptionConfig"))
  {
    m_awsXrayEncryptionConfig = jsonValue.GetObject("AwsXrayEncryptionConfig");

    m_awsXrayEncryptionConfigHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AwsWafRateBasedRule"))
  {
    m_awsWafRateBasedRule = jsonValue.GetObject("AwsWafRateBasedRule");

    m_awsWafRateBasedRuleHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AwsWafRegionalRateBasedRule"))
  {
    m_awsWafRegionalRateBasedRule = jsonValue.GetObject("AwsWafRegionalRateBasedRule");

    m_awsWafRegionalRateBasedRuleHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AwsEcrRepository"))
  {
    m_awsEcrRepository = jsonValue.GetObject("AwsEcrRepository");

    m_awsEcrRepositoryHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AwsEksCluster"))
  {
    m_awsEksCluster = jsonValue.GetObject("AwsEksCluster");

    m_awsEksClusterHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AwsNetworkFirewallFirewallPolicy"))
  {
    m_awsNetworkFirewallFirewallPolicy = jsonValue.GetObject("AwsNetworkFirewallFirewallPolicy");

    m_awsNetworkFirewallFirewallPolicyHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AwsNetworkFirewallFirewall"))
  {
    m_awsNetworkFirewallFirewall = jsonValue.GetObject("AwsNetworkFirewallFirewall");

    m_awsNetworkFirewallFirewallHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AwsNetworkFirewallRuleGroup"))
  {
    m_awsNetworkFirewallRuleGroup = jsonValue.GetObject("AwsNetworkFirewallRuleGroup");

    m_awsNetworkFirewallRuleGroupHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AwsRdsDbSecurityGroup"))
  {
    m_awsRdsDbSecurityGroup = jsonValue.GetObject("AwsRdsDbSecurityGroup");

    m_awsRdsDbSecurityGroupHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AwsKinesisStream"))
  {
    m_awsKinesisStream = jsonValue.GetObject("AwsKinesisStream");

    m_awsKinesisStreamHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AwsEc2TransitGateway"))
  {
    m_awsEc2TransitGateway = jsonValue.GetObject("AwsEc2TransitGateway");

    m_awsEc2TransitGatewayHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AwsEfsAccessPoint"))
  {
    m_awsEfsAccessPoint = jsonValue.GetObject("AwsEfsAccessPoint");

    m_awsEfsAccessPointHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AwsCloudFormationStack"))
  {
    m_awsCloudFormationStack = jsonValue.GetObject("AwsCloudFormationStack");

    m_awsCloudFormationStackHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AwsCloudWatchAlarm"))
  {
    m_awsCloudWatchAlarm = jsonValue.GetObject("AwsCloudWatchAlarm");

    m_awsCloudWatchAlarmHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AwsEc2VpcPeeringConnection"))
  {
    m_awsEc2VpcPeeringConnection = jsonValue.GetObject("AwsEc2VpcPeeringConnection");

    m_awsEc2VpcPeeringConnectionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AwsWafRegionalRuleGroup"))
  {
    m_awsWafRegionalRuleGroup = jsonValue.GetObject("AwsWafRegionalRuleGroup");

    m_awsWafRegionalRuleGroupHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AwsWafRegionalRule"))
  {
    m_awsWafRegionalRule = jsonValue.GetObject("AwsWafRegionalRule");

    m_awsWafRegionalRuleHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AwsWafRegionalWebAcl"))
  {
    m_awsWafRegionalWebAcl = jsonValue.GetObject("AwsWafRegionalWebAcl");

    m_awsWafRegionalWebAclHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AwsWafRule"))
  {
    m_awsWafRule = jsonValue.GetObject("AwsWafRule");

    m_awsWafRuleHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AwsWafRuleGroup"))
  {
    m_awsWafRuleGroup = jsonValue.GetObject("AwsWafRuleGroup");

    m_awsWafRuleGroupHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AwsEcsTask"))
  {
    m_awsEcsTask = jsonValue.GetObject("AwsEcsTask");

    m_awsEcsTaskHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AwsBackupBackupVault"))
  {
    m_awsBackupBackupVault = jsonValue.GetObject("AwsBackupBackupVault");

    m_awsBackupBackupVaultHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AwsBackupBackupPlan"))
  {
    m_awsBackupBackupPlan = jsonValue.GetObject("AwsBackupBackupPlan");

    m_awsBackupBackupPlanHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AwsBackupRecoveryPoint"))
  {
    m_awsBackupRecoveryPoint = jsonValue.GetObject("AwsBackupRecoveryPoint");

    m_awsBackupRecoveryPointHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AwsEc2LaunchTemplate"))
  {
    m_awsEc2LaunchTemplate = jsonValue.GetObject("AwsEc2LaunchTemplate");

    m_awsEc2LaunchTemplateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AwsSageMakerNotebookInstance"))
  {
    m_awsSageMakerNotebookInstance = jsonValue.GetObject("AwsSageMakerNotebookInstance");

    m_awsSageMakerNotebookInstanceHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AwsWafv2WebAcl"))
  {
    m_awsWafv2WebAcl = jsonValue.GetObject("AwsWafv2WebAcl");

    m_awsWafv2WebAclHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AwsWafv2RuleGroup"))
  {
    m_awsWafv2RuleGroup = jsonValue.GetObject("AwsWafv2RuleGroup");

    m_awsWafv2RuleGroupHasBeenSet = true;
  }

  return *this;
}

JsonValue ResourceDetails::Jsonize() const
{
  JsonValue payload;

  if(m_awsAutoScalingAutoScalingGroupHasBeenSet)
  {
   payload.WithObject("AwsAutoScalingAutoScalingGroup", m_awsAutoScalingAutoScalingGroup.Jsonize());

  }

  if(m_awsCodeBuildProjectHasBeenSet)
  {
   payload.WithObject("AwsCodeBuildProject", m_awsCodeBuildProject.Jsonize());

  }

  if(m_awsCloudFrontDistributionHasBeenSet)
  {
   payload.WithObject("AwsCloudFrontDistribution", m_awsCloudFrontDistribution.Jsonize());

  }

  if(m_awsEc2InstanceHasBeenSet)
  {
   payload.WithObject("AwsEc2Instance", m_awsEc2Instance.Jsonize());

  }

  if(m_awsEc2NetworkInterfaceHasBeenSet)
  {
   payload.WithObject("AwsEc2NetworkInterface", m_awsEc2NetworkInterface.Jsonize());

  }

  if(m_awsEc2SecurityGroupHasBeenSet)
  {
   payload.WithObject("AwsEc2SecurityGroup", m_awsEc2SecurityGroup.Jsonize());

  }

  if(m_awsEc2VolumeHasBeenSet)
  {
   payload.WithObject("AwsEc2Volume", m_awsEc2Volume.Jsonize());

  }

  if(m_awsEc2VpcHasBeenSet)
  {
   payload.WithObject("AwsEc2Vpc", m_awsEc2Vpc.Jsonize());

  }

  if(m_awsEc2EipHasBeenSet)
  {
   payload.WithObject("AwsEc2Eip", m_awsEc2Eip.Jsonize());

  }

  if(m_awsEc2SubnetHasBeenSet)
  {
   payload.WithObject("AwsEc2Subnet", m_awsEc2Subnet.Jsonize());

  }

  if(m_awsEc2NetworkAclHasBeenSet)
  {
   payload.WithObject("AwsEc2NetworkAcl", m_awsEc2NetworkAcl.Jsonize());

  }

  if(m_awsElbv2LoadBalancerHasBeenSet)
  {
   payload.WithObject("AwsElbv2LoadBalancer", m_awsElbv2LoadBalancer.Jsonize());

  }

  if(m_awsElasticBeanstalkEnvironmentHasBeenSet)
  {
   payload.WithObject("AwsElasticBeanstalkEnvironment", m_awsElasticBeanstalkEnvironment.Jsonize());

  }

  if(m_awsElasticsearchDomainHasBeenSet)
  {
   payload.WithObject("AwsElasticsearchDomain", m_awsElasticsearchDomain.Jsonize());

  }

  if(m_awsS3BucketHasBeenSet)
  {
   payload.WithObject("AwsS3Bucket", m_awsS3Bucket.Jsonize());

  }

  if(m_awsS3AccountPublicAccessBlockHasBeenSet)
  {
   payload.WithObject("AwsS3AccountPublicAccessBlock", m_awsS3AccountPublicAccessBlock.Jsonize());

  }

  if(m_awsS3ObjectHasBeenSet)
  {
   payload.WithObject("AwsS3Object", m_awsS3Object.Jsonize());

  }

  if(m_awsSecretsManagerSecretHasBeenSet)
  {
   payload.WithObject("AwsSecretsManagerSecret", m_awsSecretsManagerSecret.Jsonize());

  }

  if(m_awsIamAccessKeyHasBeenSet)
  {
   payload.WithObject("AwsIamAccessKey", m_awsIamAccessKey.Jsonize());

  }

  if(m_awsIamUserHasBeenSet)
  {
   payload.WithObject("AwsIamUser", m_awsIamUser.Jsonize());

  }

  if(m_awsIamPolicyHasBeenSet)
  {
   payload.WithObject("AwsIamPolicy", m_awsIamPolicy.Jsonize());

  }

  if(m_awsApiGatewayV2StageHasBeenSet)
  {
   payload.WithObject("AwsApiGatewayV2Stage", m_awsApiGatewayV2Stage.Jsonize());

  }

  if(m_awsApiGatewayV2ApiHasBeenSet)
  {
   payload.WithObject("AwsApiGatewayV2Api", m_awsApiGatewayV2Api.Jsonize());

  }

  if(m_awsDynamoDbTableHasBeenSet)
  {
   payload.WithObject("AwsDynamoDbTable", m_awsDynamoDbTable.Jsonize());

  }

  if(m_awsApiGatewayStageHasBeenSet)
  {
   payload.WithObject("AwsApiGatewayStage", m_awsApiGatewayStage.Jsonize());

  }

  if(m_awsApiGatewayRestApiHasBeenSet)
  {
   payload.WithObject("AwsApiGatewayRestApi", m_awsApiGatewayRestApi.Jsonize());

  }

  if(m_awsCloudTrailTrailHasBeenSet)
  {
   payload.WithObject("AwsCloudTrailTrail", m_awsCloudTrailTrail.Jsonize());

  }

  if(m_awsSsmPatchComplianceHasBeenSet)
  {
   payload.WithObject("AwsSsmPatchCompliance", m_awsSsmPatchCompliance.Jsonize());

  }

  if(m_awsCertificateManagerCertificateHasBeenSet)
  {
   payload.WithObject("AwsCertificateManagerCertificate", m_awsCertificateManagerCertificate.Jsonize());

  }

  if(m_awsRedshiftClusterHasBeenSet)
  {
   payload.WithObject("AwsRedshiftCluster", m_awsRedshiftCluster.Jsonize());

  }

  if(m_awsElbLoadBalancerHasBeenSet)
  {
   payload.WithObject("AwsElbLoadBalancer", m_awsElbLoadBalancer.Jsonize());

  }

  if(m_awsIamGroupHasBeenSet)
  {
   payload.WithObject("AwsIamGroup", m_awsIamGroup.Jsonize());

  }

  if(m_awsIamRoleHasBeenSet)
  {
   payload.WithObject("AwsIamRole", m_awsIamRole.Jsonize());

  }

  if(m_awsKmsKeyHasBeenSet)
  {
   payload.WithObject("AwsKmsKey", m_awsKmsKey.Jsonize());

  }

  if(m_awsLambdaFunctionHasBeenSet)
  {
   payload.WithObject("AwsLambdaFunction", m_awsLambdaFunction.Jsonize());

  }

  if(m_awsLambdaLayerVersionHasBeenSet)
  {
   payload.WithObject("AwsLambdaLayerVersion", m_awsLambdaLayerVersion.Jsonize());

  }

  if(m_awsRdsDbInstanceHasBeenSet)
  {
   payload.WithObject("AwsRdsDbInstance", m_awsRdsDbInstance.Jsonize());

  }

  if(m_awsSnsTopicHasBeenSet)
  {
   payload.WithObject("AwsSnsTopic", m_awsSnsTopic.Jsonize());

  }

  if(m_awsSqsQueueHasBeenSet)
  {
   payload.WithObject("AwsSqsQueue", m_awsSqsQueue.Jsonize());

  }

  if(m_awsWafWebAclHasBeenSet)
  {
   payload.WithObject("AwsWafWebAcl", m_awsWafWebAcl.Jsonize());

  }

  if(m_awsRdsDbSnapshotHasBeenSet)
  {
   payload.WithObject("AwsRdsDbSnapshot", m_awsRdsDbSnapshot.Jsonize());

  }

  if(m_awsRdsDbClusterSnapshotHasBeenSet)
  {
   payload.WithObject("AwsRdsDbClusterSnapshot", m_awsRdsDbClusterSnapshot.Jsonize());

  }

  if(m_awsRdsDbClusterHasBeenSet)
  {
   payload.WithObject("AwsRdsDbCluster", m_awsRdsDbCluster.Jsonize());

  }

  if(m_awsEcsClusterHasBeenSet)
  {
   payload.WithObject("AwsEcsCluster", m_awsEcsCluster.Jsonize());

  }

  if(m_awsEcsContainerHasBeenSet)
  {
   payload.WithObject("AwsEcsContainer", m_awsEcsContainer.Jsonize());

  }

  if(m_awsEcsTaskDefinitionHasBeenSet)
  {
   payload.WithObject("AwsEcsTaskDefinition", m_awsEcsTaskDefinition.Jsonize());

  }

  if(m_containerHasBeenSet)
  {
   payload.WithObject("Container", m_container.Jsonize());

  }

  if(m_otherHasBeenSet)
  {
   JsonValue otherJsonMap;
   for(auto& otherItem : m_other)
   {
     otherJsonMap.WithString(otherItem.first, otherItem.second);
   }
   payload.WithObject("Other", std::move(otherJsonMap));

  }

  if(m_awsRdsEventSubscriptionHasBeenSet)
  {
   payload.WithObject("AwsRdsEventSubscription", m_awsRdsEventSubscription.Jsonize());

  }

  if(m_awsEcsServiceHasBeenSet)
  {
   payload.WithObject("AwsEcsService", m_awsEcsService.Jsonize());

  }

  if(m_awsAutoScalingLaunchConfigurationHasBeenSet)
  {
   payload.WithObject("AwsAutoScalingLaunchConfiguration", m_awsAutoScalingLaunchConfiguration.Jsonize());

  }

  if(m_awsEc2VpnConnectionHasBeenSet)
  {
   payload.WithObject("AwsEc2VpnConnection", m_awsEc2VpnConnection.Jsonize());

  }

  if(m_awsEcrContainerImageHasBeenSet)
  {
   payload.WithObject("AwsEcrContainerImage", m_awsEcrContainerImage.Jsonize());

  }

  if(m_awsOpenSearchServiceDomainHasBeenSet)
  {
   payload.WithObject("AwsOpenSearchServiceDomain", m_awsOpenSearchServiceDomain.Jsonize());

  }

  if(m_awsEc2VpcEndpointServiceHasBeenSet)
  {
   payload.WithObject("AwsEc2VpcEndpointService", m_awsEc2VpcEndpointService.Jsonize());

  }

  if(m_awsXrayEncryptionConfigHasBeenSet)
  {
   payload.WithObject("AwsXrayEncryptionConfig", m_awsXrayEncryptionConfig.Jsonize());

  }

  if(m_awsWafRateBasedRuleHasBeenSet)
  {
   payload.WithObject("AwsWafRateBasedRule", m_awsWafRateBasedRule.Jsonize());

  }

  if(m_awsWafRegionalRateBasedRuleHasBeenSet)
  {
   payload.WithObject("AwsWafRegionalRateBasedRule", m_awsWafRegionalRateBasedRule.Jsonize());

  }

  if(m_awsEcrRepositoryHasBeenSet)
  {
   payload.WithObject("AwsEcrRepository", m_awsEcrRepository.Jsonize());

  }

  if(m_awsEksClusterHasBeenSet)
  {
   payload.WithObject("AwsEksCluster", m_awsEksCluster.Jsonize());

  }

  if(m_awsNetworkFirewallFirewallPolicyHasBeenSet)
  {
   payload.WithObject("AwsNetworkFirewallFirewallPolicy", m_awsNetworkFirewallFirewallPolicy.Jsonize());

  }

  if(m_awsNetworkFirewallFirewallHasBeenSet)
  {
   payload.WithObject("AwsNetworkFirewallFirewall", m_awsNetworkFirewallFirewall.Jsonize());

  }

  if(m_awsNetworkFirewallRuleGroupHasBeenSet)
  {
   payload.WithObject("AwsNetworkFirewallRuleGroup", m_awsNetworkFirewallRuleGroup.Jsonize());

  }

  if(m_awsRdsDbSecurityGroupHasBeenSet)
  {
   payload.WithObject("AwsRdsDbSecurityGroup", m_awsRdsDbSecurityGroup.Jsonize());

  }

  if(m_awsKinesisStreamHasBeenSet)
  {
   payload.WithObject("AwsKinesisStream", m_awsKinesisStream.Jsonize());

  }

  if(m_awsEc2TransitGatewayHasBeenSet)
  {
   payload.WithObject("AwsEc2TransitGateway", m_awsEc2TransitGateway.Jsonize());

  }

  if(m_awsEfsAccessPointHasBeenSet)
  {
   payload.WithObject("AwsEfsAccessPoint", m_awsEfsAccessPoint.Jsonize());

  }

  if(m_awsCloudFormationStackHasBeenSet)
  {
   payload.WithObject("AwsCloudFormationStack", m_awsCloudFormationStack.Jsonize());

  }

  if(m_awsCloudWatchAlarmHasBeenSet)
  {
   payload.WithObject("AwsCloudWatchAlarm", m_awsCloudWatchAlarm.Jsonize());

  }

  if(m_awsEc2VpcPeeringConnectionHasBeenSet)
  {
   payload.WithObject("AwsEc2VpcPeeringConnection", m_awsEc2VpcPeeringConnection.Jsonize());

  }

  if(m_awsWafRegionalRuleGroupHasBeenSet)
  {
   payload.WithObject("AwsWafRegionalRuleGroup", m_awsWafRegionalRuleGroup.Jsonize());

  }

  if(m_awsWafRegionalRuleHasBeenSet)
  {
   payload.WithObject("AwsWafRegionalRule", m_awsWafRegionalRule.Jsonize());

  }

  if(m_awsWafRegionalWebAclHasBeenSet)
  {
   payload.WithObject("AwsWafRegionalWebAcl", m_awsWafRegionalWebAcl.Jsonize());

  }

  if(m_awsWafRuleHasBeenSet)
  {
   payload.WithObject("AwsWafRule", m_awsWafRule.Jsonize());

  }

  if(m_awsWafRuleGroupHasBeenSet)
  {
   payload.WithObject("AwsWafRuleGroup", m_awsWafRuleGroup.Jsonize());

  }

  if(m_awsEcsTaskHasBeenSet)
  {
   payload.WithObject("AwsEcsTask", m_awsEcsTask.Jsonize());

  }

  if(m_awsBackupBackupVaultHasBeenSet)
  {
   payload.WithObject("AwsBackupBackupVault", m_awsBackupBackupVault.Jsonize());

  }

  if(m_awsBackupBackupPlanHasBeenSet)
  {
   payload.WithObject("AwsBackupBackupPlan", m_awsBackupBackupPlan.Jsonize());

  }

  if(m_awsBackupRecoveryPointHasBeenSet)
  {
   payload.WithObject("AwsBackupRecoveryPoint", m_awsBackupRecoveryPoint.Jsonize());

  }

  if(m_awsEc2LaunchTemplateHasBeenSet)
  {
   payload.WithObject("AwsEc2LaunchTemplate", m_awsEc2LaunchTemplate.Jsonize());

  }

  if(m_awsSageMakerNotebookInstanceHasBeenSet)
  {
   payload.WithObject("AwsSageMakerNotebookInstance", m_awsSageMakerNotebookInstance.Jsonize());

  }

  if(m_awsWafv2WebAclHasBeenSet)
  {
   payload.WithObject("AwsWafv2WebAcl", m_awsWafv2WebAcl.Jsonize());

  }

  if(m_awsWafv2RuleGroupHasBeenSet)
  {
   payload.WithObject("AwsWafv2RuleGroup", m_awsWafv2RuleGroup.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
