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
    m_awsElbv2LoadBalancerHasBeenSet(false),
    m_awsElasticsearchDomainHasBeenSet(false),
    m_awsS3BucketHasBeenSet(false),
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
    m_containerHasBeenSet(false),
    m_otherHasBeenSet(false)
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
    m_awsElbv2LoadBalancerHasBeenSet(false),
    m_awsElasticsearchDomainHasBeenSet(false),
    m_awsS3BucketHasBeenSet(false),
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
    m_containerHasBeenSet(false),
    m_otherHasBeenSet(false)
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

  if(jsonValue.ValueExists("AwsElbv2LoadBalancer"))
  {
    m_awsElbv2LoadBalancer = jsonValue.GetObject("AwsElbv2LoadBalancer");

    m_awsElbv2LoadBalancerHasBeenSet = true;
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

  if(m_awsElbv2LoadBalancerHasBeenSet)
  {
   payload.WithObject("AwsElbv2LoadBalancer", m_awsElbv2LoadBalancer.Jsonize());

  }

  if(m_awsElasticsearchDomainHasBeenSet)
  {
   payload.WithObject("AwsElasticsearchDomain", m_awsElasticsearchDomain.Jsonize());

  }

  if(m_awsS3BucketHasBeenSet)
  {
   payload.WithObject("AwsS3Bucket", m_awsS3Bucket.Jsonize());

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

  return payload;
}

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
