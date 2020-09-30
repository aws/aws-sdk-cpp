/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/securityhub/model/AwsAutoScalingAutoScalingGroupDetails.h>
#include <aws/securityhub/model/AwsCodeBuildProjectDetails.h>
#include <aws/securityhub/model/AwsCloudFrontDistributionDetails.h>
#include <aws/securityhub/model/AwsEc2InstanceDetails.h>
#include <aws/securityhub/model/AwsEc2NetworkInterfaceDetails.h>
#include <aws/securityhub/model/AwsEc2SecurityGroupDetails.h>
#include <aws/securityhub/model/AwsEc2VolumeDetails.h>
#include <aws/securityhub/model/AwsEc2VpcDetails.h>
#include <aws/securityhub/model/AwsEc2EipDetails.h>
#include <aws/securityhub/model/AwsElbv2LoadBalancerDetails.h>
#include <aws/securityhub/model/AwsElasticsearchDomainDetails.h>
#include <aws/securityhub/model/AwsS3BucketDetails.h>
#include <aws/securityhub/model/AwsS3ObjectDetails.h>
#include <aws/securityhub/model/AwsSecretsManagerSecretDetails.h>
#include <aws/securityhub/model/AwsIamAccessKeyDetails.h>
#include <aws/securityhub/model/AwsIamUserDetails.h>
#include <aws/securityhub/model/AwsIamPolicyDetails.h>
#include <aws/securityhub/model/AwsApiGatewayV2StageDetails.h>
#include <aws/securityhub/model/AwsApiGatewayV2ApiDetails.h>
#include <aws/securityhub/model/AwsDynamoDbTableDetails.h>
#include <aws/securityhub/model/AwsApiGatewayStageDetails.h>
#include <aws/securityhub/model/AwsApiGatewayRestApiDetails.h>
#include <aws/securityhub/model/AwsCloudTrailTrailDetails.h>
#include <aws/securityhub/model/AwsCertificateManagerCertificateDetails.h>
#include <aws/securityhub/model/AwsRedshiftClusterDetails.h>
#include <aws/securityhub/model/AwsElbLoadBalancerDetails.h>
#include <aws/securityhub/model/AwsIamGroupDetails.h>
#include <aws/securityhub/model/AwsIamRoleDetails.h>
#include <aws/securityhub/model/AwsKmsKeyDetails.h>
#include <aws/securityhub/model/AwsLambdaFunctionDetails.h>
#include <aws/securityhub/model/AwsLambdaLayerVersionDetails.h>
#include <aws/securityhub/model/AwsRdsDbInstanceDetails.h>
#include <aws/securityhub/model/AwsSnsTopicDetails.h>
#include <aws/securityhub/model/AwsSqsQueueDetails.h>
#include <aws/securityhub/model/AwsWafWebAclDetails.h>
#include <aws/securityhub/model/AwsRdsDbSnapshotDetails.h>
#include <aws/securityhub/model/AwsRdsDbClusterSnapshotDetails.h>
#include <aws/securityhub/model/AwsRdsDbClusterDetails.h>
#include <aws/securityhub/model/ContainerDetails.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
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
namespace SecurityHub
{
namespace Model
{

  /**
   * <p>Additional details about a resource related to a finding.</p> <p>To provide
   * the details, use the object that corresponds to the resource type. For example,
   * if the resource type is <code>AwsEc2Instance</code>, then you use the
   * <code>AwsEc2Instance</code> object to provide the details.</p> <p>If the
   * type-specific object does not contain all of the fields you want to populate,
   * then you use the <code>Other</code> object to populate those additional
   * fields.</p> <p>You also use the <code>Other</code> object to populate the
   * details when the selected type does not have a corresponding
   * object.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/ResourceDetails">AWS
   * API Reference</a></p>
   */
  class AWS_SECURITYHUB_API ResourceDetails
  {
  public:
    ResourceDetails();
    ResourceDetails(Aws::Utils::Json::JsonView jsonValue);
    ResourceDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Details for an autoscaling group.</p>
     */
    inline const AwsAutoScalingAutoScalingGroupDetails& GetAwsAutoScalingAutoScalingGroup() const{ return m_awsAutoScalingAutoScalingGroup; }

    /**
     * <p>Details for an autoscaling group.</p>
     */
    inline bool AwsAutoScalingAutoScalingGroupHasBeenSet() const { return m_awsAutoScalingAutoScalingGroupHasBeenSet; }

    /**
     * <p>Details for an autoscaling group.</p>
     */
    inline void SetAwsAutoScalingAutoScalingGroup(const AwsAutoScalingAutoScalingGroupDetails& value) { m_awsAutoScalingAutoScalingGroupHasBeenSet = true; m_awsAutoScalingAutoScalingGroup = value; }

    /**
     * <p>Details for an autoscaling group.</p>
     */
    inline void SetAwsAutoScalingAutoScalingGroup(AwsAutoScalingAutoScalingGroupDetails&& value) { m_awsAutoScalingAutoScalingGroupHasBeenSet = true; m_awsAutoScalingAutoScalingGroup = std::move(value); }

    /**
     * <p>Details for an autoscaling group.</p>
     */
    inline ResourceDetails& WithAwsAutoScalingAutoScalingGroup(const AwsAutoScalingAutoScalingGroupDetails& value) { SetAwsAutoScalingAutoScalingGroup(value); return *this;}

    /**
     * <p>Details for an autoscaling group.</p>
     */
    inline ResourceDetails& WithAwsAutoScalingAutoScalingGroup(AwsAutoScalingAutoScalingGroupDetails&& value) { SetAwsAutoScalingAutoScalingGroup(std::move(value)); return *this;}


    /**
     * <p>Details for an AWS CodeBuild project.</p>
     */
    inline const AwsCodeBuildProjectDetails& GetAwsCodeBuildProject() const{ return m_awsCodeBuildProject; }

    /**
     * <p>Details for an AWS CodeBuild project.</p>
     */
    inline bool AwsCodeBuildProjectHasBeenSet() const { return m_awsCodeBuildProjectHasBeenSet; }

    /**
     * <p>Details for an AWS CodeBuild project.</p>
     */
    inline void SetAwsCodeBuildProject(const AwsCodeBuildProjectDetails& value) { m_awsCodeBuildProjectHasBeenSet = true; m_awsCodeBuildProject = value; }

    /**
     * <p>Details for an AWS CodeBuild project.</p>
     */
    inline void SetAwsCodeBuildProject(AwsCodeBuildProjectDetails&& value) { m_awsCodeBuildProjectHasBeenSet = true; m_awsCodeBuildProject = std::move(value); }

    /**
     * <p>Details for an AWS CodeBuild project.</p>
     */
    inline ResourceDetails& WithAwsCodeBuildProject(const AwsCodeBuildProjectDetails& value) { SetAwsCodeBuildProject(value); return *this;}

    /**
     * <p>Details for an AWS CodeBuild project.</p>
     */
    inline ResourceDetails& WithAwsCodeBuildProject(AwsCodeBuildProjectDetails&& value) { SetAwsCodeBuildProject(std::move(value)); return *this;}


    /**
     * <p>Details about a CloudFront distribution.</p>
     */
    inline const AwsCloudFrontDistributionDetails& GetAwsCloudFrontDistribution() const{ return m_awsCloudFrontDistribution; }

    /**
     * <p>Details about a CloudFront distribution.</p>
     */
    inline bool AwsCloudFrontDistributionHasBeenSet() const { return m_awsCloudFrontDistributionHasBeenSet; }

    /**
     * <p>Details about a CloudFront distribution.</p>
     */
    inline void SetAwsCloudFrontDistribution(const AwsCloudFrontDistributionDetails& value) { m_awsCloudFrontDistributionHasBeenSet = true; m_awsCloudFrontDistribution = value; }

    /**
     * <p>Details about a CloudFront distribution.</p>
     */
    inline void SetAwsCloudFrontDistribution(AwsCloudFrontDistributionDetails&& value) { m_awsCloudFrontDistributionHasBeenSet = true; m_awsCloudFrontDistribution = std::move(value); }

    /**
     * <p>Details about a CloudFront distribution.</p>
     */
    inline ResourceDetails& WithAwsCloudFrontDistribution(const AwsCloudFrontDistributionDetails& value) { SetAwsCloudFrontDistribution(value); return *this;}

    /**
     * <p>Details about a CloudFront distribution.</p>
     */
    inline ResourceDetails& WithAwsCloudFrontDistribution(AwsCloudFrontDistributionDetails&& value) { SetAwsCloudFrontDistribution(std::move(value)); return *this;}


    /**
     * <p>Details about an Amazon EC2 instance related to a finding.</p>
     */
    inline const AwsEc2InstanceDetails& GetAwsEc2Instance() const{ return m_awsEc2Instance; }

    /**
     * <p>Details about an Amazon EC2 instance related to a finding.</p>
     */
    inline bool AwsEc2InstanceHasBeenSet() const { return m_awsEc2InstanceHasBeenSet; }

    /**
     * <p>Details about an Amazon EC2 instance related to a finding.</p>
     */
    inline void SetAwsEc2Instance(const AwsEc2InstanceDetails& value) { m_awsEc2InstanceHasBeenSet = true; m_awsEc2Instance = value; }

    /**
     * <p>Details about an Amazon EC2 instance related to a finding.</p>
     */
    inline void SetAwsEc2Instance(AwsEc2InstanceDetails&& value) { m_awsEc2InstanceHasBeenSet = true; m_awsEc2Instance = std::move(value); }

    /**
     * <p>Details about an Amazon EC2 instance related to a finding.</p>
     */
    inline ResourceDetails& WithAwsEc2Instance(const AwsEc2InstanceDetails& value) { SetAwsEc2Instance(value); return *this;}

    /**
     * <p>Details about an Amazon EC2 instance related to a finding.</p>
     */
    inline ResourceDetails& WithAwsEc2Instance(AwsEc2InstanceDetails&& value) { SetAwsEc2Instance(std::move(value)); return *this;}


    /**
     * <p>Details for an Amazon EC2 network interface.</p>
     */
    inline const AwsEc2NetworkInterfaceDetails& GetAwsEc2NetworkInterface() const{ return m_awsEc2NetworkInterface; }

    /**
     * <p>Details for an Amazon EC2 network interface.</p>
     */
    inline bool AwsEc2NetworkInterfaceHasBeenSet() const { return m_awsEc2NetworkInterfaceHasBeenSet; }

    /**
     * <p>Details for an Amazon EC2 network interface.</p>
     */
    inline void SetAwsEc2NetworkInterface(const AwsEc2NetworkInterfaceDetails& value) { m_awsEc2NetworkInterfaceHasBeenSet = true; m_awsEc2NetworkInterface = value; }

    /**
     * <p>Details for an Amazon EC2 network interface.</p>
     */
    inline void SetAwsEc2NetworkInterface(AwsEc2NetworkInterfaceDetails&& value) { m_awsEc2NetworkInterfaceHasBeenSet = true; m_awsEc2NetworkInterface = std::move(value); }

    /**
     * <p>Details for an Amazon EC2 network interface.</p>
     */
    inline ResourceDetails& WithAwsEc2NetworkInterface(const AwsEc2NetworkInterfaceDetails& value) { SetAwsEc2NetworkInterface(value); return *this;}

    /**
     * <p>Details for an Amazon EC2 network interface.</p>
     */
    inline ResourceDetails& WithAwsEc2NetworkInterface(AwsEc2NetworkInterfaceDetails&& value) { SetAwsEc2NetworkInterface(std::move(value)); return *this;}


    /**
     * <p>Details for an EC2 security group.</p>
     */
    inline const AwsEc2SecurityGroupDetails& GetAwsEc2SecurityGroup() const{ return m_awsEc2SecurityGroup; }

    /**
     * <p>Details for an EC2 security group.</p>
     */
    inline bool AwsEc2SecurityGroupHasBeenSet() const { return m_awsEc2SecurityGroupHasBeenSet; }

    /**
     * <p>Details for an EC2 security group.</p>
     */
    inline void SetAwsEc2SecurityGroup(const AwsEc2SecurityGroupDetails& value) { m_awsEc2SecurityGroupHasBeenSet = true; m_awsEc2SecurityGroup = value; }

    /**
     * <p>Details for an EC2 security group.</p>
     */
    inline void SetAwsEc2SecurityGroup(AwsEc2SecurityGroupDetails&& value) { m_awsEc2SecurityGroupHasBeenSet = true; m_awsEc2SecurityGroup = std::move(value); }

    /**
     * <p>Details for an EC2 security group.</p>
     */
    inline ResourceDetails& WithAwsEc2SecurityGroup(const AwsEc2SecurityGroupDetails& value) { SetAwsEc2SecurityGroup(value); return *this;}

    /**
     * <p>Details for an EC2 security group.</p>
     */
    inline ResourceDetails& WithAwsEc2SecurityGroup(AwsEc2SecurityGroupDetails&& value) { SetAwsEc2SecurityGroup(std::move(value)); return *this;}


    /**
     * <p>Details for an EC2 volume.</p>
     */
    inline const AwsEc2VolumeDetails& GetAwsEc2Volume() const{ return m_awsEc2Volume; }

    /**
     * <p>Details for an EC2 volume.</p>
     */
    inline bool AwsEc2VolumeHasBeenSet() const { return m_awsEc2VolumeHasBeenSet; }

    /**
     * <p>Details for an EC2 volume.</p>
     */
    inline void SetAwsEc2Volume(const AwsEc2VolumeDetails& value) { m_awsEc2VolumeHasBeenSet = true; m_awsEc2Volume = value; }

    /**
     * <p>Details for an EC2 volume.</p>
     */
    inline void SetAwsEc2Volume(AwsEc2VolumeDetails&& value) { m_awsEc2VolumeHasBeenSet = true; m_awsEc2Volume = std::move(value); }

    /**
     * <p>Details for an EC2 volume.</p>
     */
    inline ResourceDetails& WithAwsEc2Volume(const AwsEc2VolumeDetails& value) { SetAwsEc2Volume(value); return *this;}

    /**
     * <p>Details for an EC2 volume.</p>
     */
    inline ResourceDetails& WithAwsEc2Volume(AwsEc2VolumeDetails&& value) { SetAwsEc2Volume(std::move(value)); return *this;}


    /**
     * <p>Details for an EC2 VPC.</p>
     */
    inline const AwsEc2VpcDetails& GetAwsEc2Vpc() const{ return m_awsEc2Vpc; }

    /**
     * <p>Details for an EC2 VPC.</p>
     */
    inline bool AwsEc2VpcHasBeenSet() const { return m_awsEc2VpcHasBeenSet; }

    /**
     * <p>Details for an EC2 VPC.</p>
     */
    inline void SetAwsEc2Vpc(const AwsEc2VpcDetails& value) { m_awsEc2VpcHasBeenSet = true; m_awsEc2Vpc = value; }

    /**
     * <p>Details for an EC2 VPC.</p>
     */
    inline void SetAwsEc2Vpc(AwsEc2VpcDetails&& value) { m_awsEc2VpcHasBeenSet = true; m_awsEc2Vpc = std::move(value); }

    /**
     * <p>Details for an EC2 VPC.</p>
     */
    inline ResourceDetails& WithAwsEc2Vpc(const AwsEc2VpcDetails& value) { SetAwsEc2Vpc(value); return *this;}

    /**
     * <p>Details for an EC2 VPC.</p>
     */
    inline ResourceDetails& WithAwsEc2Vpc(AwsEc2VpcDetails&& value) { SetAwsEc2Vpc(std::move(value)); return *this;}


    /**
     * <p>Details about an Elastic IP address.</p>
     */
    inline const AwsEc2EipDetails& GetAwsEc2Eip() const{ return m_awsEc2Eip; }

    /**
     * <p>Details about an Elastic IP address.</p>
     */
    inline bool AwsEc2EipHasBeenSet() const { return m_awsEc2EipHasBeenSet; }

    /**
     * <p>Details about an Elastic IP address.</p>
     */
    inline void SetAwsEc2Eip(const AwsEc2EipDetails& value) { m_awsEc2EipHasBeenSet = true; m_awsEc2Eip = value; }

    /**
     * <p>Details about an Elastic IP address.</p>
     */
    inline void SetAwsEc2Eip(AwsEc2EipDetails&& value) { m_awsEc2EipHasBeenSet = true; m_awsEc2Eip = std::move(value); }

    /**
     * <p>Details about an Elastic IP address.</p>
     */
    inline ResourceDetails& WithAwsEc2Eip(const AwsEc2EipDetails& value) { SetAwsEc2Eip(value); return *this;}

    /**
     * <p>Details about an Elastic IP address.</p>
     */
    inline ResourceDetails& WithAwsEc2Eip(AwsEc2EipDetails&& value) { SetAwsEc2Eip(std::move(value)); return *this;}


    /**
     * <p>Details about a load balancer.</p>
     */
    inline const AwsElbv2LoadBalancerDetails& GetAwsElbv2LoadBalancer() const{ return m_awsElbv2LoadBalancer; }

    /**
     * <p>Details about a load balancer.</p>
     */
    inline bool AwsElbv2LoadBalancerHasBeenSet() const { return m_awsElbv2LoadBalancerHasBeenSet; }

    /**
     * <p>Details about a load balancer.</p>
     */
    inline void SetAwsElbv2LoadBalancer(const AwsElbv2LoadBalancerDetails& value) { m_awsElbv2LoadBalancerHasBeenSet = true; m_awsElbv2LoadBalancer = value; }

    /**
     * <p>Details about a load balancer.</p>
     */
    inline void SetAwsElbv2LoadBalancer(AwsElbv2LoadBalancerDetails&& value) { m_awsElbv2LoadBalancerHasBeenSet = true; m_awsElbv2LoadBalancer = std::move(value); }

    /**
     * <p>Details about a load balancer.</p>
     */
    inline ResourceDetails& WithAwsElbv2LoadBalancer(const AwsElbv2LoadBalancerDetails& value) { SetAwsElbv2LoadBalancer(value); return *this;}

    /**
     * <p>Details about a load balancer.</p>
     */
    inline ResourceDetails& WithAwsElbv2LoadBalancer(AwsElbv2LoadBalancerDetails&& value) { SetAwsElbv2LoadBalancer(std::move(value)); return *this;}


    /**
     * <p>Details for an Elasticsearch domain.</p>
     */
    inline const AwsElasticsearchDomainDetails& GetAwsElasticsearchDomain() const{ return m_awsElasticsearchDomain; }

    /**
     * <p>Details for an Elasticsearch domain.</p>
     */
    inline bool AwsElasticsearchDomainHasBeenSet() const { return m_awsElasticsearchDomainHasBeenSet; }

    /**
     * <p>Details for an Elasticsearch domain.</p>
     */
    inline void SetAwsElasticsearchDomain(const AwsElasticsearchDomainDetails& value) { m_awsElasticsearchDomainHasBeenSet = true; m_awsElasticsearchDomain = value; }

    /**
     * <p>Details for an Elasticsearch domain.</p>
     */
    inline void SetAwsElasticsearchDomain(AwsElasticsearchDomainDetails&& value) { m_awsElasticsearchDomainHasBeenSet = true; m_awsElasticsearchDomain = std::move(value); }

    /**
     * <p>Details for an Elasticsearch domain.</p>
     */
    inline ResourceDetails& WithAwsElasticsearchDomain(const AwsElasticsearchDomainDetails& value) { SetAwsElasticsearchDomain(value); return *this;}

    /**
     * <p>Details for an Elasticsearch domain.</p>
     */
    inline ResourceDetails& WithAwsElasticsearchDomain(AwsElasticsearchDomainDetails&& value) { SetAwsElasticsearchDomain(std::move(value)); return *this;}


    /**
     * <p>Details about an Amazon S3 bucket related to a finding.</p>
     */
    inline const AwsS3BucketDetails& GetAwsS3Bucket() const{ return m_awsS3Bucket; }

    /**
     * <p>Details about an Amazon S3 bucket related to a finding.</p>
     */
    inline bool AwsS3BucketHasBeenSet() const { return m_awsS3BucketHasBeenSet; }

    /**
     * <p>Details about an Amazon S3 bucket related to a finding.</p>
     */
    inline void SetAwsS3Bucket(const AwsS3BucketDetails& value) { m_awsS3BucketHasBeenSet = true; m_awsS3Bucket = value; }

    /**
     * <p>Details about an Amazon S3 bucket related to a finding.</p>
     */
    inline void SetAwsS3Bucket(AwsS3BucketDetails&& value) { m_awsS3BucketHasBeenSet = true; m_awsS3Bucket = std::move(value); }

    /**
     * <p>Details about an Amazon S3 bucket related to a finding.</p>
     */
    inline ResourceDetails& WithAwsS3Bucket(const AwsS3BucketDetails& value) { SetAwsS3Bucket(value); return *this;}

    /**
     * <p>Details about an Amazon S3 bucket related to a finding.</p>
     */
    inline ResourceDetails& WithAwsS3Bucket(AwsS3BucketDetails&& value) { SetAwsS3Bucket(std::move(value)); return *this;}


    /**
     * <p>Details about an Amazon S3 object related to a finding.</p>
     */
    inline const AwsS3ObjectDetails& GetAwsS3Object() const{ return m_awsS3Object; }

    /**
     * <p>Details about an Amazon S3 object related to a finding.</p>
     */
    inline bool AwsS3ObjectHasBeenSet() const { return m_awsS3ObjectHasBeenSet; }

    /**
     * <p>Details about an Amazon S3 object related to a finding.</p>
     */
    inline void SetAwsS3Object(const AwsS3ObjectDetails& value) { m_awsS3ObjectHasBeenSet = true; m_awsS3Object = value; }

    /**
     * <p>Details about an Amazon S3 object related to a finding.</p>
     */
    inline void SetAwsS3Object(AwsS3ObjectDetails&& value) { m_awsS3ObjectHasBeenSet = true; m_awsS3Object = std::move(value); }

    /**
     * <p>Details about an Amazon S3 object related to a finding.</p>
     */
    inline ResourceDetails& WithAwsS3Object(const AwsS3ObjectDetails& value) { SetAwsS3Object(value); return *this;}

    /**
     * <p>Details about an Amazon S3 object related to a finding.</p>
     */
    inline ResourceDetails& WithAwsS3Object(AwsS3ObjectDetails&& value) { SetAwsS3Object(std::move(value)); return *this;}


    /**
     * <p>Details about a Secrets Manager secret.</p>
     */
    inline const AwsSecretsManagerSecretDetails& GetAwsSecretsManagerSecret() const{ return m_awsSecretsManagerSecret; }

    /**
     * <p>Details about a Secrets Manager secret.</p>
     */
    inline bool AwsSecretsManagerSecretHasBeenSet() const { return m_awsSecretsManagerSecretHasBeenSet; }

    /**
     * <p>Details about a Secrets Manager secret.</p>
     */
    inline void SetAwsSecretsManagerSecret(const AwsSecretsManagerSecretDetails& value) { m_awsSecretsManagerSecretHasBeenSet = true; m_awsSecretsManagerSecret = value; }

    /**
     * <p>Details about a Secrets Manager secret.</p>
     */
    inline void SetAwsSecretsManagerSecret(AwsSecretsManagerSecretDetails&& value) { m_awsSecretsManagerSecretHasBeenSet = true; m_awsSecretsManagerSecret = std::move(value); }

    /**
     * <p>Details about a Secrets Manager secret.</p>
     */
    inline ResourceDetails& WithAwsSecretsManagerSecret(const AwsSecretsManagerSecretDetails& value) { SetAwsSecretsManagerSecret(value); return *this;}

    /**
     * <p>Details about a Secrets Manager secret.</p>
     */
    inline ResourceDetails& WithAwsSecretsManagerSecret(AwsSecretsManagerSecretDetails&& value) { SetAwsSecretsManagerSecret(std::move(value)); return *this;}


    /**
     * <p>Details about an IAM access key related to a finding.</p>
     */
    inline const AwsIamAccessKeyDetails& GetAwsIamAccessKey() const{ return m_awsIamAccessKey; }

    /**
     * <p>Details about an IAM access key related to a finding.</p>
     */
    inline bool AwsIamAccessKeyHasBeenSet() const { return m_awsIamAccessKeyHasBeenSet; }

    /**
     * <p>Details about an IAM access key related to a finding.</p>
     */
    inline void SetAwsIamAccessKey(const AwsIamAccessKeyDetails& value) { m_awsIamAccessKeyHasBeenSet = true; m_awsIamAccessKey = value; }

    /**
     * <p>Details about an IAM access key related to a finding.</p>
     */
    inline void SetAwsIamAccessKey(AwsIamAccessKeyDetails&& value) { m_awsIamAccessKeyHasBeenSet = true; m_awsIamAccessKey = std::move(value); }

    /**
     * <p>Details about an IAM access key related to a finding.</p>
     */
    inline ResourceDetails& WithAwsIamAccessKey(const AwsIamAccessKeyDetails& value) { SetAwsIamAccessKey(value); return *this;}

    /**
     * <p>Details about an IAM access key related to a finding.</p>
     */
    inline ResourceDetails& WithAwsIamAccessKey(AwsIamAccessKeyDetails&& value) { SetAwsIamAccessKey(std::move(value)); return *this;}


    /**
     * <p>Details about an IAM user.</p>
     */
    inline const AwsIamUserDetails& GetAwsIamUser() const{ return m_awsIamUser; }

    /**
     * <p>Details about an IAM user.</p>
     */
    inline bool AwsIamUserHasBeenSet() const { return m_awsIamUserHasBeenSet; }

    /**
     * <p>Details about an IAM user.</p>
     */
    inline void SetAwsIamUser(const AwsIamUserDetails& value) { m_awsIamUserHasBeenSet = true; m_awsIamUser = value; }

    /**
     * <p>Details about an IAM user.</p>
     */
    inline void SetAwsIamUser(AwsIamUserDetails&& value) { m_awsIamUserHasBeenSet = true; m_awsIamUser = std::move(value); }

    /**
     * <p>Details about an IAM user.</p>
     */
    inline ResourceDetails& WithAwsIamUser(const AwsIamUserDetails& value) { SetAwsIamUser(value); return *this;}

    /**
     * <p>Details about an IAM user.</p>
     */
    inline ResourceDetails& WithAwsIamUser(AwsIamUserDetails&& value) { SetAwsIamUser(std::move(value)); return *this;}


    /**
     * <p>Details about an IAM permissions policy.</p>
     */
    inline const AwsIamPolicyDetails& GetAwsIamPolicy() const{ return m_awsIamPolicy; }

    /**
     * <p>Details about an IAM permissions policy.</p>
     */
    inline bool AwsIamPolicyHasBeenSet() const { return m_awsIamPolicyHasBeenSet; }

    /**
     * <p>Details about an IAM permissions policy.</p>
     */
    inline void SetAwsIamPolicy(const AwsIamPolicyDetails& value) { m_awsIamPolicyHasBeenSet = true; m_awsIamPolicy = value; }

    /**
     * <p>Details about an IAM permissions policy.</p>
     */
    inline void SetAwsIamPolicy(AwsIamPolicyDetails&& value) { m_awsIamPolicyHasBeenSet = true; m_awsIamPolicy = std::move(value); }

    /**
     * <p>Details about an IAM permissions policy.</p>
     */
    inline ResourceDetails& WithAwsIamPolicy(const AwsIamPolicyDetails& value) { SetAwsIamPolicy(value); return *this;}

    /**
     * <p>Details about an IAM permissions policy.</p>
     */
    inline ResourceDetails& WithAwsIamPolicy(AwsIamPolicyDetails&& value) { SetAwsIamPolicy(std::move(value)); return *this;}


    /**
     * <p/>
     */
    inline const AwsApiGatewayV2StageDetails& GetAwsApiGatewayV2Stage() const{ return m_awsApiGatewayV2Stage; }

    /**
     * <p/>
     */
    inline bool AwsApiGatewayV2StageHasBeenSet() const { return m_awsApiGatewayV2StageHasBeenSet; }

    /**
     * <p/>
     */
    inline void SetAwsApiGatewayV2Stage(const AwsApiGatewayV2StageDetails& value) { m_awsApiGatewayV2StageHasBeenSet = true; m_awsApiGatewayV2Stage = value; }

    /**
     * <p/>
     */
    inline void SetAwsApiGatewayV2Stage(AwsApiGatewayV2StageDetails&& value) { m_awsApiGatewayV2StageHasBeenSet = true; m_awsApiGatewayV2Stage = std::move(value); }

    /**
     * <p/>
     */
    inline ResourceDetails& WithAwsApiGatewayV2Stage(const AwsApiGatewayV2StageDetails& value) { SetAwsApiGatewayV2Stage(value); return *this;}

    /**
     * <p/>
     */
    inline ResourceDetails& WithAwsApiGatewayV2Stage(AwsApiGatewayV2StageDetails&& value) { SetAwsApiGatewayV2Stage(std::move(value)); return *this;}


    /**
     * <p/>
     */
    inline const AwsApiGatewayV2ApiDetails& GetAwsApiGatewayV2Api() const{ return m_awsApiGatewayV2Api; }

    /**
     * <p/>
     */
    inline bool AwsApiGatewayV2ApiHasBeenSet() const { return m_awsApiGatewayV2ApiHasBeenSet; }

    /**
     * <p/>
     */
    inline void SetAwsApiGatewayV2Api(const AwsApiGatewayV2ApiDetails& value) { m_awsApiGatewayV2ApiHasBeenSet = true; m_awsApiGatewayV2Api = value; }

    /**
     * <p/>
     */
    inline void SetAwsApiGatewayV2Api(AwsApiGatewayV2ApiDetails&& value) { m_awsApiGatewayV2ApiHasBeenSet = true; m_awsApiGatewayV2Api = std::move(value); }

    /**
     * <p/>
     */
    inline ResourceDetails& WithAwsApiGatewayV2Api(const AwsApiGatewayV2ApiDetails& value) { SetAwsApiGatewayV2Api(value); return *this;}

    /**
     * <p/>
     */
    inline ResourceDetails& WithAwsApiGatewayV2Api(AwsApiGatewayV2ApiDetails&& value) { SetAwsApiGatewayV2Api(std::move(value)); return *this;}


    /**
     * <p>Details about a DynamoDB table.</p>
     */
    inline const AwsDynamoDbTableDetails& GetAwsDynamoDbTable() const{ return m_awsDynamoDbTable; }

    /**
     * <p>Details about a DynamoDB table.</p>
     */
    inline bool AwsDynamoDbTableHasBeenSet() const { return m_awsDynamoDbTableHasBeenSet; }

    /**
     * <p>Details about a DynamoDB table.</p>
     */
    inline void SetAwsDynamoDbTable(const AwsDynamoDbTableDetails& value) { m_awsDynamoDbTableHasBeenSet = true; m_awsDynamoDbTable = value; }

    /**
     * <p>Details about a DynamoDB table.</p>
     */
    inline void SetAwsDynamoDbTable(AwsDynamoDbTableDetails&& value) { m_awsDynamoDbTableHasBeenSet = true; m_awsDynamoDbTable = std::move(value); }

    /**
     * <p>Details about a DynamoDB table.</p>
     */
    inline ResourceDetails& WithAwsDynamoDbTable(const AwsDynamoDbTableDetails& value) { SetAwsDynamoDbTable(value); return *this;}

    /**
     * <p>Details about a DynamoDB table.</p>
     */
    inline ResourceDetails& WithAwsDynamoDbTable(AwsDynamoDbTableDetails&& value) { SetAwsDynamoDbTable(std::move(value)); return *this;}


    /**
     * <p/>
     */
    inline const AwsApiGatewayStageDetails& GetAwsApiGatewayStage() const{ return m_awsApiGatewayStage; }

    /**
     * <p/>
     */
    inline bool AwsApiGatewayStageHasBeenSet() const { return m_awsApiGatewayStageHasBeenSet; }

    /**
     * <p/>
     */
    inline void SetAwsApiGatewayStage(const AwsApiGatewayStageDetails& value) { m_awsApiGatewayStageHasBeenSet = true; m_awsApiGatewayStage = value; }

    /**
     * <p/>
     */
    inline void SetAwsApiGatewayStage(AwsApiGatewayStageDetails&& value) { m_awsApiGatewayStageHasBeenSet = true; m_awsApiGatewayStage = std::move(value); }

    /**
     * <p/>
     */
    inline ResourceDetails& WithAwsApiGatewayStage(const AwsApiGatewayStageDetails& value) { SetAwsApiGatewayStage(value); return *this;}

    /**
     * <p/>
     */
    inline ResourceDetails& WithAwsApiGatewayStage(AwsApiGatewayStageDetails&& value) { SetAwsApiGatewayStage(std::move(value)); return *this;}


    /**
     * <p/>
     */
    inline const AwsApiGatewayRestApiDetails& GetAwsApiGatewayRestApi() const{ return m_awsApiGatewayRestApi; }

    /**
     * <p/>
     */
    inline bool AwsApiGatewayRestApiHasBeenSet() const { return m_awsApiGatewayRestApiHasBeenSet; }

    /**
     * <p/>
     */
    inline void SetAwsApiGatewayRestApi(const AwsApiGatewayRestApiDetails& value) { m_awsApiGatewayRestApiHasBeenSet = true; m_awsApiGatewayRestApi = value; }

    /**
     * <p/>
     */
    inline void SetAwsApiGatewayRestApi(AwsApiGatewayRestApiDetails&& value) { m_awsApiGatewayRestApiHasBeenSet = true; m_awsApiGatewayRestApi = std::move(value); }

    /**
     * <p/>
     */
    inline ResourceDetails& WithAwsApiGatewayRestApi(const AwsApiGatewayRestApiDetails& value) { SetAwsApiGatewayRestApi(value); return *this;}

    /**
     * <p/>
     */
    inline ResourceDetails& WithAwsApiGatewayRestApi(AwsApiGatewayRestApiDetails&& value) { SetAwsApiGatewayRestApi(std::move(value)); return *this;}


    /**
     * <p/>
     */
    inline const AwsCloudTrailTrailDetails& GetAwsCloudTrailTrail() const{ return m_awsCloudTrailTrail; }

    /**
     * <p/>
     */
    inline bool AwsCloudTrailTrailHasBeenSet() const { return m_awsCloudTrailTrailHasBeenSet; }

    /**
     * <p/>
     */
    inline void SetAwsCloudTrailTrail(const AwsCloudTrailTrailDetails& value) { m_awsCloudTrailTrailHasBeenSet = true; m_awsCloudTrailTrail = value; }

    /**
     * <p/>
     */
    inline void SetAwsCloudTrailTrail(AwsCloudTrailTrailDetails&& value) { m_awsCloudTrailTrailHasBeenSet = true; m_awsCloudTrailTrail = std::move(value); }

    /**
     * <p/>
     */
    inline ResourceDetails& WithAwsCloudTrailTrail(const AwsCloudTrailTrailDetails& value) { SetAwsCloudTrailTrail(value); return *this;}

    /**
     * <p/>
     */
    inline ResourceDetails& WithAwsCloudTrailTrail(AwsCloudTrailTrailDetails&& value) { SetAwsCloudTrailTrail(std::move(value)); return *this;}


    /**
     * <p/>
     */
    inline const AwsCertificateManagerCertificateDetails& GetAwsCertificateManagerCertificate() const{ return m_awsCertificateManagerCertificate; }

    /**
     * <p/>
     */
    inline bool AwsCertificateManagerCertificateHasBeenSet() const { return m_awsCertificateManagerCertificateHasBeenSet; }

    /**
     * <p/>
     */
    inline void SetAwsCertificateManagerCertificate(const AwsCertificateManagerCertificateDetails& value) { m_awsCertificateManagerCertificateHasBeenSet = true; m_awsCertificateManagerCertificate = value; }

    /**
     * <p/>
     */
    inline void SetAwsCertificateManagerCertificate(AwsCertificateManagerCertificateDetails&& value) { m_awsCertificateManagerCertificateHasBeenSet = true; m_awsCertificateManagerCertificate = std::move(value); }

    /**
     * <p/>
     */
    inline ResourceDetails& WithAwsCertificateManagerCertificate(const AwsCertificateManagerCertificateDetails& value) { SetAwsCertificateManagerCertificate(value); return *this;}

    /**
     * <p/>
     */
    inline ResourceDetails& WithAwsCertificateManagerCertificate(AwsCertificateManagerCertificateDetails&& value) { SetAwsCertificateManagerCertificate(std::move(value)); return *this;}


    /**
     * <p/>
     */
    inline const AwsRedshiftClusterDetails& GetAwsRedshiftCluster() const{ return m_awsRedshiftCluster; }

    /**
     * <p/>
     */
    inline bool AwsRedshiftClusterHasBeenSet() const { return m_awsRedshiftClusterHasBeenSet; }

    /**
     * <p/>
     */
    inline void SetAwsRedshiftCluster(const AwsRedshiftClusterDetails& value) { m_awsRedshiftClusterHasBeenSet = true; m_awsRedshiftCluster = value; }

    /**
     * <p/>
     */
    inline void SetAwsRedshiftCluster(AwsRedshiftClusterDetails&& value) { m_awsRedshiftClusterHasBeenSet = true; m_awsRedshiftCluster = std::move(value); }

    /**
     * <p/>
     */
    inline ResourceDetails& WithAwsRedshiftCluster(const AwsRedshiftClusterDetails& value) { SetAwsRedshiftCluster(value); return *this;}

    /**
     * <p/>
     */
    inline ResourceDetails& WithAwsRedshiftCluster(AwsRedshiftClusterDetails&& value) { SetAwsRedshiftCluster(std::move(value)); return *this;}


    /**
     * <p/>
     */
    inline const AwsElbLoadBalancerDetails& GetAwsElbLoadBalancer() const{ return m_awsElbLoadBalancer; }

    /**
     * <p/>
     */
    inline bool AwsElbLoadBalancerHasBeenSet() const { return m_awsElbLoadBalancerHasBeenSet; }

    /**
     * <p/>
     */
    inline void SetAwsElbLoadBalancer(const AwsElbLoadBalancerDetails& value) { m_awsElbLoadBalancerHasBeenSet = true; m_awsElbLoadBalancer = value; }

    /**
     * <p/>
     */
    inline void SetAwsElbLoadBalancer(AwsElbLoadBalancerDetails&& value) { m_awsElbLoadBalancerHasBeenSet = true; m_awsElbLoadBalancer = std::move(value); }

    /**
     * <p/>
     */
    inline ResourceDetails& WithAwsElbLoadBalancer(const AwsElbLoadBalancerDetails& value) { SetAwsElbLoadBalancer(value); return *this;}

    /**
     * <p/>
     */
    inline ResourceDetails& WithAwsElbLoadBalancer(AwsElbLoadBalancerDetails&& value) { SetAwsElbLoadBalancer(std::move(value)); return *this;}


    /**
     * <p/>
     */
    inline const AwsIamGroupDetails& GetAwsIamGroup() const{ return m_awsIamGroup; }

    /**
     * <p/>
     */
    inline bool AwsIamGroupHasBeenSet() const { return m_awsIamGroupHasBeenSet; }

    /**
     * <p/>
     */
    inline void SetAwsIamGroup(const AwsIamGroupDetails& value) { m_awsIamGroupHasBeenSet = true; m_awsIamGroup = value; }

    /**
     * <p/>
     */
    inline void SetAwsIamGroup(AwsIamGroupDetails&& value) { m_awsIamGroupHasBeenSet = true; m_awsIamGroup = std::move(value); }

    /**
     * <p/>
     */
    inline ResourceDetails& WithAwsIamGroup(const AwsIamGroupDetails& value) { SetAwsIamGroup(value); return *this;}

    /**
     * <p/>
     */
    inline ResourceDetails& WithAwsIamGroup(AwsIamGroupDetails&& value) { SetAwsIamGroup(std::move(value)); return *this;}


    /**
     * <p>Details about an IAM role.</p>
     */
    inline const AwsIamRoleDetails& GetAwsIamRole() const{ return m_awsIamRole; }

    /**
     * <p>Details about an IAM role.</p>
     */
    inline bool AwsIamRoleHasBeenSet() const { return m_awsIamRoleHasBeenSet; }

    /**
     * <p>Details about an IAM role.</p>
     */
    inline void SetAwsIamRole(const AwsIamRoleDetails& value) { m_awsIamRoleHasBeenSet = true; m_awsIamRole = value; }

    /**
     * <p>Details about an IAM role.</p>
     */
    inline void SetAwsIamRole(AwsIamRoleDetails&& value) { m_awsIamRoleHasBeenSet = true; m_awsIamRole = std::move(value); }

    /**
     * <p>Details about an IAM role.</p>
     */
    inline ResourceDetails& WithAwsIamRole(const AwsIamRoleDetails& value) { SetAwsIamRole(value); return *this;}

    /**
     * <p>Details about an IAM role.</p>
     */
    inline ResourceDetails& WithAwsIamRole(AwsIamRoleDetails&& value) { SetAwsIamRole(std::move(value)); return *this;}


    /**
     * <p>Details about a KMS key.</p>
     */
    inline const AwsKmsKeyDetails& GetAwsKmsKey() const{ return m_awsKmsKey; }

    /**
     * <p>Details about a KMS key.</p>
     */
    inline bool AwsKmsKeyHasBeenSet() const { return m_awsKmsKeyHasBeenSet; }

    /**
     * <p>Details about a KMS key.</p>
     */
    inline void SetAwsKmsKey(const AwsKmsKeyDetails& value) { m_awsKmsKeyHasBeenSet = true; m_awsKmsKey = value; }

    /**
     * <p>Details about a KMS key.</p>
     */
    inline void SetAwsKmsKey(AwsKmsKeyDetails&& value) { m_awsKmsKeyHasBeenSet = true; m_awsKmsKey = std::move(value); }

    /**
     * <p>Details about a KMS key.</p>
     */
    inline ResourceDetails& WithAwsKmsKey(const AwsKmsKeyDetails& value) { SetAwsKmsKey(value); return *this;}

    /**
     * <p>Details about a KMS key.</p>
     */
    inline ResourceDetails& WithAwsKmsKey(AwsKmsKeyDetails&& value) { SetAwsKmsKey(std::move(value)); return *this;}


    /**
     * <p>Details about a Lambda function.</p>
     */
    inline const AwsLambdaFunctionDetails& GetAwsLambdaFunction() const{ return m_awsLambdaFunction; }

    /**
     * <p>Details about a Lambda function.</p>
     */
    inline bool AwsLambdaFunctionHasBeenSet() const { return m_awsLambdaFunctionHasBeenSet; }

    /**
     * <p>Details about a Lambda function.</p>
     */
    inline void SetAwsLambdaFunction(const AwsLambdaFunctionDetails& value) { m_awsLambdaFunctionHasBeenSet = true; m_awsLambdaFunction = value; }

    /**
     * <p>Details about a Lambda function.</p>
     */
    inline void SetAwsLambdaFunction(AwsLambdaFunctionDetails&& value) { m_awsLambdaFunctionHasBeenSet = true; m_awsLambdaFunction = std::move(value); }

    /**
     * <p>Details about a Lambda function.</p>
     */
    inline ResourceDetails& WithAwsLambdaFunction(const AwsLambdaFunctionDetails& value) { SetAwsLambdaFunction(value); return *this;}

    /**
     * <p>Details about a Lambda function.</p>
     */
    inline ResourceDetails& WithAwsLambdaFunction(AwsLambdaFunctionDetails&& value) { SetAwsLambdaFunction(std::move(value)); return *this;}


    /**
     * <p>Details for a Lambda layer version.</p>
     */
    inline const AwsLambdaLayerVersionDetails& GetAwsLambdaLayerVersion() const{ return m_awsLambdaLayerVersion; }

    /**
     * <p>Details for a Lambda layer version.</p>
     */
    inline bool AwsLambdaLayerVersionHasBeenSet() const { return m_awsLambdaLayerVersionHasBeenSet; }

    /**
     * <p>Details for a Lambda layer version.</p>
     */
    inline void SetAwsLambdaLayerVersion(const AwsLambdaLayerVersionDetails& value) { m_awsLambdaLayerVersionHasBeenSet = true; m_awsLambdaLayerVersion = value; }

    /**
     * <p>Details for a Lambda layer version.</p>
     */
    inline void SetAwsLambdaLayerVersion(AwsLambdaLayerVersionDetails&& value) { m_awsLambdaLayerVersionHasBeenSet = true; m_awsLambdaLayerVersion = std::move(value); }

    /**
     * <p>Details for a Lambda layer version.</p>
     */
    inline ResourceDetails& WithAwsLambdaLayerVersion(const AwsLambdaLayerVersionDetails& value) { SetAwsLambdaLayerVersion(value); return *this;}

    /**
     * <p>Details for a Lambda layer version.</p>
     */
    inline ResourceDetails& WithAwsLambdaLayerVersion(AwsLambdaLayerVersionDetails&& value) { SetAwsLambdaLayerVersion(std::move(value)); return *this;}


    /**
     * <p>Details about an Amazon RDS database instance.</p>
     */
    inline const AwsRdsDbInstanceDetails& GetAwsRdsDbInstance() const{ return m_awsRdsDbInstance; }

    /**
     * <p>Details about an Amazon RDS database instance.</p>
     */
    inline bool AwsRdsDbInstanceHasBeenSet() const { return m_awsRdsDbInstanceHasBeenSet; }

    /**
     * <p>Details about an Amazon RDS database instance.</p>
     */
    inline void SetAwsRdsDbInstance(const AwsRdsDbInstanceDetails& value) { m_awsRdsDbInstanceHasBeenSet = true; m_awsRdsDbInstance = value; }

    /**
     * <p>Details about an Amazon RDS database instance.</p>
     */
    inline void SetAwsRdsDbInstance(AwsRdsDbInstanceDetails&& value) { m_awsRdsDbInstanceHasBeenSet = true; m_awsRdsDbInstance = std::move(value); }

    /**
     * <p>Details about an Amazon RDS database instance.</p>
     */
    inline ResourceDetails& WithAwsRdsDbInstance(const AwsRdsDbInstanceDetails& value) { SetAwsRdsDbInstance(value); return *this;}

    /**
     * <p>Details about an Amazon RDS database instance.</p>
     */
    inline ResourceDetails& WithAwsRdsDbInstance(AwsRdsDbInstanceDetails&& value) { SetAwsRdsDbInstance(std::move(value)); return *this;}


    /**
     * <p>Details about an SNS topic.</p>
     */
    inline const AwsSnsTopicDetails& GetAwsSnsTopic() const{ return m_awsSnsTopic; }

    /**
     * <p>Details about an SNS topic.</p>
     */
    inline bool AwsSnsTopicHasBeenSet() const { return m_awsSnsTopicHasBeenSet; }

    /**
     * <p>Details about an SNS topic.</p>
     */
    inline void SetAwsSnsTopic(const AwsSnsTopicDetails& value) { m_awsSnsTopicHasBeenSet = true; m_awsSnsTopic = value; }

    /**
     * <p>Details about an SNS topic.</p>
     */
    inline void SetAwsSnsTopic(AwsSnsTopicDetails&& value) { m_awsSnsTopicHasBeenSet = true; m_awsSnsTopic = std::move(value); }

    /**
     * <p>Details about an SNS topic.</p>
     */
    inline ResourceDetails& WithAwsSnsTopic(const AwsSnsTopicDetails& value) { SetAwsSnsTopic(value); return *this;}

    /**
     * <p>Details about an SNS topic.</p>
     */
    inline ResourceDetails& WithAwsSnsTopic(AwsSnsTopicDetails&& value) { SetAwsSnsTopic(std::move(value)); return *this;}


    /**
     * <p>Details about an SQS queue.</p>
     */
    inline const AwsSqsQueueDetails& GetAwsSqsQueue() const{ return m_awsSqsQueue; }

    /**
     * <p>Details about an SQS queue.</p>
     */
    inline bool AwsSqsQueueHasBeenSet() const { return m_awsSqsQueueHasBeenSet; }

    /**
     * <p>Details about an SQS queue.</p>
     */
    inline void SetAwsSqsQueue(const AwsSqsQueueDetails& value) { m_awsSqsQueueHasBeenSet = true; m_awsSqsQueue = value; }

    /**
     * <p>Details about an SQS queue.</p>
     */
    inline void SetAwsSqsQueue(AwsSqsQueueDetails&& value) { m_awsSqsQueueHasBeenSet = true; m_awsSqsQueue = std::move(value); }

    /**
     * <p>Details about an SQS queue.</p>
     */
    inline ResourceDetails& WithAwsSqsQueue(const AwsSqsQueueDetails& value) { SetAwsSqsQueue(value); return *this;}

    /**
     * <p>Details about an SQS queue.</p>
     */
    inline ResourceDetails& WithAwsSqsQueue(AwsSqsQueueDetails&& value) { SetAwsSqsQueue(std::move(value)); return *this;}


    /**
     * <p>Details for a WAF WebACL.</p>
     */
    inline const AwsWafWebAclDetails& GetAwsWafWebAcl() const{ return m_awsWafWebAcl; }

    /**
     * <p>Details for a WAF WebACL.</p>
     */
    inline bool AwsWafWebAclHasBeenSet() const { return m_awsWafWebAclHasBeenSet; }

    /**
     * <p>Details for a WAF WebACL.</p>
     */
    inline void SetAwsWafWebAcl(const AwsWafWebAclDetails& value) { m_awsWafWebAclHasBeenSet = true; m_awsWafWebAcl = value; }

    /**
     * <p>Details for a WAF WebACL.</p>
     */
    inline void SetAwsWafWebAcl(AwsWafWebAclDetails&& value) { m_awsWafWebAclHasBeenSet = true; m_awsWafWebAcl = std::move(value); }

    /**
     * <p>Details for a WAF WebACL.</p>
     */
    inline ResourceDetails& WithAwsWafWebAcl(const AwsWafWebAclDetails& value) { SetAwsWafWebAcl(value); return *this;}

    /**
     * <p>Details for a WAF WebACL.</p>
     */
    inline ResourceDetails& WithAwsWafWebAcl(AwsWafWebAclDetails&& value) { SetAwsWafWebAcl(std::move(value)); return *this;}


    /**
     * <p>Details about an Amazon RDS database snapshot.</p>
     */
    inline const AwsRdsDbSnapshotDetails& GetAwsRdsDbSnapshot() const{ return m_awsRdsDbSnapshot; }

    /**
     * <p>Details about an Amazon RDS database snapshot.</p>
     */
    inline bool AwsRdsDbSnapshotHasBeenSet() const { return m_awsRdsDbSnapshotHasBeenSet; }

    /**
     * <p>Details about an Amazon RDS database snapshot.</p>
     */
    inline void SetAwsRdsDbSnapshot(const AwsRdsDbSnapshotDetails& value) { m_awsRdsDbSnapshotHasBeenSet = true; m_awsRdsDbSnapshot = value; }

    /**
     * <p>Details about an Amazon RDS database snapshot.</p>
     */
    inline void SetAwsRdsDbSnapshot(AwsRdsDbSnapshotDetails&& value) { m_awsRdsDbSnapshotHasBeenSet = true; m_awsRdsDbSnapshot = std::move(value); }

    /**
     * <p>Details about an Amazon RDS database snapshot.</p>
     */
    inline ResourceDetails& WithAwsRdsDbSnapshot(const AwsRdsDbSnapshotDetails& value) { SetAwsRdsDbSnapshot(value); return *this;}

    /**
     * <p>Details about an Amazon RDS database snapshot.</p>
     */
    inline ResourceDetails& WithAwsRdsDbSnapshot(AwsRdsDbSnapshotDetails&& value) { SetAwsRdsDbSnapshot(std::move(value)); return *this;}


    /**
     * <p>Details about an Amazon RDS database cluster snapshot.</p>
     */
    inline const AwsRdsDbClusterSnapshotDetails& GetAwsRdsDbClusterSnapshot() const{ return m_awsRdsDbClusterSnapshot; }

    /**
     * <p>Details about an Amazon RDS database cluster snapshot.</p>
     */
    inline bool AwsRdsDbClusterSnapshotHasBeenSet() const { return m_awsRdsDbClusterSnapshotHasBeenSet; }

    /**
     * <p>Details about an Amazon RDS database cluster snapshot.</p>
     */
    inline void SetAwsRdsDbClusterSnapshot(const AwsRdsDbClusterSnapshotDetails& value) { m_awsRdsDbClusterSnapshotHasBeenSet = true; m_awsRdsDbClusterSnapshot = value; }

    /**
     * <p>Details about an Amazon RDS database cluster snapshot.</p>
     */
    inline void SetAwsRdsDbClusterSnapshot(AwsRdsDbClusterSnapshotDetails&& value) { m_awsRdsDbClusterSnapshotHasBeenSet = true; m_awsRdsDbClusterSnapshot = std::move(value); }

    /**
     * <p>Details about an Amazon RDS database cluster snapshot.</p>
     */
    inline ResourceDetails& WithAwsRdsDbClusterSnapshot(const AwsRdsDbClusterSnapshotDetails& value) { SetAwsRdsDbClusterSnapshot(value); return *this;}

    /**
     * <p>Details about an Amazon RDS database cluster snapshot.</p>
     */
    inline ResourceDetails& WithAwsRdsDbClusterSnapshot(AwsRdsDbClusterSnapshotDetails&& value) { SetAwsRdsDbClusterSnapshot(std::move(value)); return *this;}


    /**
     * <p>Details about an Amazon RDS database cluster.</p>
     */
    inline const AwsRdsDbClusterDetails& GetAwsRdsDbCluster() const{ return m_awsRdsDbCluster; }

    /**
     * <p>Details about an Amazon RDS database cluster.</p>
     */
    inline bool AwsRdsDbClusterHasBeenSet() const { return m_awsRdsDbClusterHasBeenSet; }

    /**
     * <p>Details about an Amazon RDS database cluster.</p>
     */
    inline void SetAwsRdsDbCluster(const AwsRdsDbClusterDetails& value) { m_awsRdsDbClusterHasBeenSet = true; m_awsRdsDbCluster = value; }

    /**
     * <p>Details about an Amazon RDS database cluster.</p>
     */
    inline void SetAwsRdsDbCluster(AwsRdsDbClusterDetails&& value) { m_awsRdsDbClusterHasBeenSet = true; m_awsRdsDbCluster = std::move(value); }

    /**
     * <p>Details about an Amazon RDS database cluster.</p>
     */
    inline ResourceDetails& WithAwsRdsDbCluster(const AwsRdsDbClusterDetails& value) { SetAwsRdsDbCluster(value); return *this;}

    /**
     * <p>Details about an Amazon RDS database cluster.</p>
     */
    inline ResourceDetails& WithAwsRdsDbCluster(AwsRdsDbClusterDetails&& value) { SetAwsRdsDbCluster(std::move(value)); return *this;}


    /**
     * <p>Details about a container resource related to a finding.</p>
     */
    inline const ContainerDetails& GetContainer() const{ return m_container; }

    /**
     * <p>Details about a container resource related to a finding.</p>
     */
    inline bool ContainerHasBeenSet() const { return m_containerHasBeenSet; }

    /**
     * <p>Details about a container resource related to a finding.</p>
     */
    inline void SetContainer(const ContainerDetails& value) { m_containerHasBeenSet = true; m_container = value; }

    /**
     * <p>Details about a container resource related to a finding.</p>
     */
    inline void SetContainer(ContainerDetails&& value) { m_containerHasBeenSet = true; m_container = std::move(value); }

    /**
     * <p>Details about a container resource related to a finding.</p>
     */
    inline ResourceDetails& WithContainer(const ContainerDetails& value) { SetContainer(value); return *this;}

    /**
     * <p>Details about a container resource related to a finding.</p>
     */
    inline ResourceDetails& WithContainer(ContainerDetails&& value) { SetContainer(std::move(value)); return *this;}


    /**
     * <p>Details about a resource that are not available in a type-specific details
     * object. Use the <code>Other</code> object in the following cases.</p> <ul> <li>
     * <p>The type-specific object does not contain all of the fields that you want to
     * populate. In this case, first use the type-specific object to populate those
     * fields. Use the <code>Other</code> object to populate the fields that are
     * missing from the type-specific object.</p> </li> <li> <p>The resource type does
     * not have a corresponding object. This includes resources for which the type is
     * <code>Other</code>. </p> </li> </ul>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetOther() const{ return m_other; }

    /**
     * <p>Details about a resource that are not available in a type-specific details
     * object. Use the <code>Other</code> object in the following cases.</p> <ul> <li>
     * <p>The type-specific object does not contain all of the fields that you want to
     * populate. In this case, first use the type-specific object to populate those
     * fields. Use the <code>Other</code> object to populate the fields that are
     * missing from the type-specific object.</p> </li> <li> <p>The resource type does
     * not have a corresponding object. This includes resources for which the type is
     * <code>Other</code>. </p> </li> </ul>
     */
    inline bool OtherHasBeenSet() const { return m_otherHasBeenSet; }

    /**
     * <p>Details about a resource that are not available in a type-specific details
     * object. Use the <code>Other</code> object in the following cases.</p> <ul> <li>
     * <p>The type-specific object does not contain all of the fields that you want to
     * populate. In this case, first use the type-specific object to populate those
     * fields. Use the <code>Other</code> object to populate the fields that are
     * missing from the type-specific object.</p> </li> <li> <p>The resource type does
     * not have a corresponding object. This includes resources for which the type is
     * <code>Other</code>. </p> </li> </ul>
     */
    inline void SetOther(const Aws::Map<Aws::String, Aws::String>& value) { m_otherHasBeenSet = true; m_other = value; }

    /**
     * <p>Details about a resource that are not available in a type-specific details
     * object. Use the <code>Other</code> object in the following cases.</p> <ul> <li>
     * <p>The type-specific object does not contain all of the fields that you want to
     * populate. In this case, first use the type-specific object to populate those
     * fields. Use the <code>Other</code> object to populate the fields that are
     * missing from the type-specific object.</p> </li> <li> <p>The resource type does
     * not have a corresponding object. This includes resources for which the type is
     * <code>Other</code>. </p> </li> </ul>
     */
    inline void SetOther(Aws::Map<Aws::String, Aws::String>&& value) { m_otherHasBeenSet = true; m_other = std::move(value); }

    /**
     * <p>Details about a resource that are not available in a type-specific details
     * object. Use the <code>Other</code> object in the following cases.</p> <ul> <li>
     * <p>The type-specific object does not contain all of the fields that you want to
     * populate. In this case, first use the type-specific object to populate those
     * fields. Use the <code>Other</code> object to populate the fields that are
     * missing from the type-specific object.</p> </li> <li> <p>The resource type does
     * not have a corresponding object. This includes resources for which the type is
     * <code>Other</code>. </p> </li> </ul>
     */
    inline ResourceDetails& WithOther(const Aws::Map<Aws::String, Aws::String>& value) { SetOther(value); return *this;}

    /**
     * <p>Details about a resource that are not available in a type-specific details
     * object. Use the <code>Other</code> object in the following cases.</p> <ul> <li>
     * <p>The type-specific object does not contain all of the fields that you want to
     * populate. In this case, first use the type-specific object to populate those
     * fields. Use the <code>Other</code> object to populate the fields that are
     * missing from the type-specific object.</p> </li> <li> <p>The resource type does
     * not have a corresponding object. This includes resources for which the type is
     * <code>Other</code>. </p> </li> </ul>
     */
    inline ResourceDetails& WithOther(Aws::Map<Aws::String, Aws::String>&& value) { SetOther(std::move(value)); return *this;}

    /**
     * <p>Details about a resource that are not available in a type-specific details
     * object. Use the <code>Other</code> object in the following cases.</p> <ul> <li>
     * <p>The type-specific object does not contain all of the fields that you want to
     * populate. In this case, first use the type-specific object to populate those
     * fields. Use the <code>Other</code> object to populate the fields that are
     * missing from the type-specific object.</p> </li> <li> <p>The resource type does
     * not have a corresponding object. This includes resources for which the type is
     * <code>Other</code>. </p> </li> </ul>
     */
    inline ResourceDetails& AddOther(const Aws::String& key, const Aws::String& value) { m_otherHasBeenSet = true; m_other.emplace(key, value); return *this; }

    /**
     * <p>Details about a resource that are not available in a type-specific details
     * object. Use the <code>Other</code> object in the following cases.</p> <ul> <li>
     * <p>The type-specific object does not contain all of the fields that you want to
     * populate. In this case, first use the type-specific object to populate those
     * fields. Use the <code>Other</code> object to populate the fields that are
     * missing from the type-specific object.</p> </li> <li> <p>The resource type does
     * not have a corresponding object. This includes resources for which the type is
     * <code>Other</code>. </p> </li> </ul>
     */
    inline ResourceDetails& AddOther(Aws::String&& key, const Aws::String& value) { m_otherHasBeenSet = true; m_other.emplace(std::move(key), value); return *this; }

    /**
     * <p>Details about a resource that are not available in a type-specific details
     * object. Use the <code>Other</code> object in the following cases.</p> <ul> <li>
     * <p>The type-specific object does not contain all of the fields that you want to
     * populate. In this case, first use the type-specific object to populate those
     * fields. Use the <code>Other</code> object to populate the fields that are
     * missing from the type-specific object.</p> </li> <li> <p>The resource type does
     * not have a corresponding object. This includes resources for which the type is
     * <code>Other</code>. </p> </li> </ul>
     */
    inline ResourceDetails& AddOther(const Aws::String& key, Aws::String&& value) { m_otherHasBeenSet = true; m_other.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Details about a resource that are not available in a type-specific details
     * object. Use the <code>Other</code> object in the following cases.</p> <ul> <li>
     * <p>The type-specific object does not contain all of the fields that you want to
     * populate. In this case, first use the type-specific object to populate those
     * fields. Use the <code>Other</code> object to populate the fields that are
     * missing from the type-specific object.</p> </li> <li> <p>The resource type does
     * not have a corresponding object. This includes resources for which the type is
     * <code>Other</code>. </p> </li> </ul>
     */
    inline ResourceDetails& AddOther(Aws::String&& key, Aws::String&& value) { m_otherHasBeenSet = true; m_other.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>Details about a resource that are not available in a type-specific details
     * object. Use the <code>Other</code> object in the following cases.</p> <ul> <li>
     * <p>The type-specific object does not contain all of the fields that you want to
     * populate. In this case, first use the type-specific object to populate those
     * fields. Use the <code>Other</code> object to populate the fields that are
     * missing from the type-specific object.</p> </li> <li> <p>The resource type does
     * not have a corresponding object. This includes resources for which the type is
     * <code>Other</code>. </p> </li> </ul>
     */
    inline ResourceDetails& AddOther(const char* key, Aws::String&& value) { m_otherHasBeenSet = true; m_other.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Details about a resource that are not available in a type-specific details
     * object. Use the <code>Other</code> object in the following cases.</p> <ul> <li>
     * <p>The type-specific object does not contain all of the fields that you want to
     * populate. In this case, first use the type-specific object to populate those
     * fields. Use the <code>Other</code> object to populate the fields that are
     * missing from the type-specific object.</p> </li> <li> <p>The resource type does
     * not have a corresponding object. This includes resources for which the type is
     * <code>Other</code>. </p> </li> </ul>
     */
    inline ResourceDetails& AddOther(Aws::String&& key, const char* value) { m_otherHasBeenSet = true; m_other.emplace(std::move(key), value); return *this; }

    /**
     * <p>Details about a resource that are not available in a type-specific details
     * object. Use the <code>Other</code> object in the following cases.</p> <ul> <li>
     * <p>The type-specific object does not contain all of the fields that you want to
     * populate. In this case, first use the type-specific object to populate those
     * fields. Use the <code>Other</code> object to populate the fields that are
     * missing from the type-specific object.</p> </li> <li> <p>The resource type does
     * not have a corresponding object. This includes resources for which the type is
     * <code>Other</code>. </p> </li> </ul>
     */
    inline ResourceDetails& AddOther(const char* key, const char* value) { m_otherHasBeenSet = true; m_other.emplace(key, value); return *this; }

  private:

    AwsAutoScalingAutoScalingGroupDetails m_awsAutoScalingAutoScalingGroup;
    bool m_awsAutoScalingAutoScalingGroupHasBeenSet;

    AwsCodeBuildProjectDetails m_awsCodeBuildProject;
    bool m_awsCodeBuildProjectHasBeenSet;

    AwsCloudFrontDistributionDetails m_awsCloudFrontDistribution;
    bool m_awsCloudFrontDistributionHasBeenSet;

    AwsEc2InstanceDetails m_awsEc2Instance;
    bool m_awsEc2InstanceHasBeenSet;

    AwsEc2NetworkInterfaceDetails m_awsEc2NetworkInterface;
    bool m_awsEc2NetworkInterfaceHasBeenSet;

    AwsEc2SecurityGroupDetails m_awsEc2SecurityGroup;
    bool m_awsEc2SecurityGroupHasBeenSet;

    AwsEc2VolumeDetails m_awsEc2Volume;
    bool m_awsEc2VolumeHasBeenSet;

    AwsEc2VpcDetails m_awsEc2Vpc;
    bool m_awsEc2VpcHasBeenSet;

    AwsEc2EipDetails m_awsEc2Eip;
    bool m_awsEc2EipHasBeenSet;

    AwsElbv2LoadBalancerDetails m_awsElbv2LoadBalancer;
    bool m_awsElbv2LoadBalancerHasBeenSet;

    AwsElasticsearchDomainDetails m_awsElasticsearchDomain;
    bool m_awsElasticsearchDomainHasBeenSet;

    AwsS3BucketDetails m_awsS3Bucket;
    bool m_awsS3BucketHasBeenSet;

    AwsS3ObjectDetails m_awsS3Object;
    bool m_awsS3ObjectHasBeenSet;

    AwsSecretsManagerSecretDetails m_awsSecretsManagerSecret;
    bool m_awsSecretsManagerSecretHasBeenSet;

    AwsIamAccessKeyDetails m_awsIamAccessKey;
    bool m_awsIamAccessKeyHasBeenSet;

    AwsIamUserDetails m_awsIamUser;
    bool m_awsIamUserHasBeenSet;

    AwsIamPolicyDetails m_awsIamPolicy;
    bool m_awsIamPolicyHasBeenSet;

    AwsApiGatewayV2StageDetails m_awsApiGatewayV2Stage;
    bool m_awsApiGatewayV2StageHasBeenSet;

    AwsApiGatewayV2ApiDetails m_awsApiGatewayV2Api;
    bool m_awsApiGatewayV2ApiHasBeenSet;

    AwsDynamoDbTableDetails m_awsDynamoDbTable;
    bool m_awsDynamoDbTableHasBeenSet;

    AwsApiGatewayStageDetails m_awsApiGatewayStage;
    bool m_awsApiGatewayStageHasBeenSet;

    AwsApiGatewayRestApiDetails m_awsApiGatewayRestApi;
    bool m_awsApiGatewayRestApiHasBeenSet;

    AwsCloudTrailTrailDetails m_awsCloudTrailTrail;
    bool m_awsCloudTrailTrailHasBeenSet;

    AwsCertificateManagerCertificateDetails m_awsCertificateManagerCertificate;
    bool m_awsCertificateManagerCertificateHasBeenSet;

    AwsRedshiftClusterDetails m_awsRedshiftCluster;
    bool m_awsRedshiftClusterHasBeenSet;

    AwsElbLoadBalancerDetails m_awsElbLoadBalancer;
    bool m_awsElbLoadBalancerHasBeenSet;

    AwsIamGroupDetails m_awsIamGroup;
    bool m_awsIamGroupHasBeenSet;

    AwsIamRoleDetails m_awsIamRole;
    bool m_awsIamRoleHasBeenSet;

    AwsKmsKeyDetails m_awsKmsKey;
    bool m_awsKmsKeyHasBeenSet;

    AwsLambdaFunctionDetails m_awsLambdaFunction;
    bool m_awsLambdaFunctionHasBeenSet;

    AwsLambdaLayerVersionDetails m_awsLambdaLayerVersion;
    bool m_awsLambdaLayerVersionHasBeenSet;

    AwsRdsDbInstanceDetails m_awsRdsDbInstance;
    bool m_awsRdsDbInstanceHasBeenSet;

    AwsSnsTopicDetails m_awsSnsTopic;
    bool m_awsSnsTopicHasBeenSet;

    AwsSqsQueueDetails m_awsSqsQueue;
    bool m_awsSqsQueueHasBeenSet;

    AwsWafWebAclDetails m_awsWafWebAcl;
    bool m_awsWafWebAclHasBeenSet;

    AwsRdsDbSnapshotDetails m_awsRdsDbSnapshot;
    bool m_awsRdsDbSnapshotHasBeenSet;

    AwsRdsDbClusterSnapshotDetails m_awsRdsDbClusterSnapshot;
    bool m_awsRdsDbClusterSnapshotHasBeenSet;

    AwsRdsDbClusterDetails m_awsRdsDbCluster;
    bool m_awsRdsDbClusterHasBeenSet;

    ContainerDetails m_container;
    bool m_containerHasBeenSet;

    Aws::Map<Aws::String, Aws::String> m_other;
    bool m_otherHasBeenSet;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
