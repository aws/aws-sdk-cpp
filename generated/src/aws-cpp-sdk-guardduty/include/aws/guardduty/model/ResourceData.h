/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/guardduty/GuardDuty_EXPORTS.h>
#include <aws/guardduty/model/AccessKey.h>
#include <aws/guardduty/model/AutoscalingAutoScalingGroup.h>
#include <aws/guardduty/model/CloudformationStack.h>
#include <aws/guardduty/model/ContainerFindingResource.h>
#include <aws/guardduty/model/Ec2Image.h>
#include <aws/guardduty/model/Ec2Instance.h>
#include <aws/guardduty/model/Ec2LaunchTemplate.h>
#include <aws/guardduty/model/Ec2NetworkInterface.h>
#include <aws/guardduty/model/Ec2Vpc.h>
#include <aws/guardduty/model/EcsCluster.h>
#include <aws/guardduty/model/EcsTask.h>
#include <aws/guardduty/model/EksCluster.h>
#include <aws/guardduty/model/IamInstanceProfileV2.h>
#include <aws/guardduty/model/KubernetesWorkload.h>
#include <aws/guardduty/model/S3Bucket.h>
#include <aws/guardduty/model/S3Object.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace GuardDuty {
namespace Model {

/**
 * <p>Contains information about the Amazon Web Services resource that is
 * associated with the activity that prompted GuardDuty to generate a
 * finding.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/ResourceData">AWS
 * API Reference</a></p>
 */
class ResourceData {
 public:
  AWS_GUARDDUTY_API ResourceData() = default;
  AWS_GUARDDUTY_API ResourceData(Aws::Utils::Json::JsonView jsonValue);
  AWS_GUARDDUTY_API ResourceData& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_GUARDDUTY_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Contains information about the Amazon S3 bucket.</p>
   */
  inline const S3Bucket& GetS3Bucket() const { return m_s3Bucket; }
  inline bool S3BucketHasBeenSet() const { return m_s3BucketHasBeenSet; }
  template <typename S3BucketT = S3Bucket>
  void SetS3Bucket(S3BucketT&& value) {
    m_s3BucketHasBeenSet = true;
    m_s3Bucket = std::forward<S3BucketT>(value);
  }
  template <typename S3BucketT = S3Bucket>
  ResourceData& WithS3Bucket(S3BucketT&& value) {
    SetS3Bucket(std::forward<S3BucketT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Contains information about the Amazon EC2 instance.</p>
   */
  inline const Ec2Instance& GetEc2Instance() const { return m_ec2Instance; }
  inline bool Ec2InstanceHasBeenSet() const { return m_ec2InstanceHasBeenSet; }
  template <typename Ec2InstanceT = Ec2Instance>
  void SetEc2Instance(Ec2InstanceT&& value) {
    m_ec2InstanceHasBeenSet = true;
    m_ec2Instance = std::forward<Ec2InstanceT>(value);
  }
  template <typename Ec2InstanceT = Ec2Instance>
  ResourceData& WithEc2Instance(Ec2InstanceT&& value) {
    SetEc2Instance(std::forward<Ec2InstanceT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Contains information about the IAM access key details of a user that involved
   * in the GuardDuty finding.</p>
   */
  inline const AccessKey& GetAccessKey() const { return m_accessKey; }
  inline bool AccessKeyHasBeenSet() const { return m_accessKeyHasBeenSet; }
  template <typename AccessKeyT = AccessKey>
  void SetAccessKey(AccessKeyT&& value) {
    m_accessKeyHasBeenSet = true;
    m_accessKey = std::forward<AccessKeyT>(value);
  }
  template <typename AccessKeyT = AccessKey>
  ResourceData& WithAccessKey(AccessKeyT&& value) {
    SetAccessKey(std::forward<AccessKeyT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Contains information about the elastic network interface of the Amazon EC2
   * instance.</p>
   */
  inline const Ec2NetworkInterface& GetEc2NetworkInterface() const { return m_ec2NetworkInterface; }
  inline bool Ec2NetworkInterfaceHasBeenSet() const { return m_ec2NetworkInterfaceHasBeenSet; }
  template <typename Ec2NetworkInterfaceT = Ec2NetworkInterface>
  void SetEc2NetworkInterface(Ec2NetworkInterfaceT&& value) {
    m_ec2NetworkInterfaceHasBeenSet = true;
    m_ec2NetworkInterface = std::forward<Ec2NetworkInterfaceT>(value);
  }
  template <typename Ec2NetworkInterfaceT = Ec2NetworkInterface>
  ResourceData& WithEc2NetworkInterface(Ec2NetworkInterfaceT&& value) {
    SetEc2NetworkInterface(std::forward<Ec2NetworkInterfaceT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Contains information about the Amazon S3 object.</p>
   */
  inline const S3Object& GetS3Object() const { return m_s3Object; }
  inline bool S3ObjectHasBeenSet() const { return m_s3ObjectHasBeenSet; }
  template <typename S3ObjectT = S3Object>
  void SetS3Object(S3ObjectT&& value) {
    m_s3ObjectHasBeenSet = true;
    m_s3Object = std::forward<S3ObjectT>(value);
  }
  template <typename S3ObjectT = S3Object>
  ResourceData& WithS3Object(S3ObjectT&& value) {
    SetS3Object(std::forward<S3ObjectT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Contains detailed information about the Amazon EKS cluster associated with
   * the activity that prompted GuardDuty to generate a finding.</p>
   */
  inline const EksCluster& GetEksCluster() const { return m_eksCluster; }
  inline bool EksClusterHasBeenSet() const { return m_eksClusterHasBeenSet; }
  template <typename EksClusterT = EksCluster>
  void SetEksCluster(EksClusterT&& value) {
    m_eksClusterHasBeenSet = true;
    m_eksCluster = std::forward<EksClusterT>(value);
  }
  template <typename EksClusterT = EksCluster>
  ResourceData& WithEksCluster(EksClusterT&& value) {
    SetEksCluster(std::forward<EksClusterT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Contains detailed information about the Kubernetes workload associated with
   * the activity that prompted GuardDuty to generate a finding.</p>
   */
  inline const KubernetesWorkload& GetKubernetesWorkload() const { return m_kubernetesWorkload; }
  inline bool KubernetesWorkloadHasBeenSet() const { return m_kubernetesWorkloadHasBeenSet; }
  template <typename KubernetesWorkloadT = KubernetesWorkload>
  void SetKubernetesWorkload(KubernetesWorkloadT&& value) {
    m_kubernetesWorkloadHasBeenSet = true;
    m_kubernetesWorkload = std::forward<KubernetesWorkloadT>(value);
  }
  template <typename KubernetesWorkloadT = KubernetesWorkload>
  ResourceData& WithKubernetesWorkload(KubernetesWorkloadT&& value) {
    SetKubernetesWorkload(std::forward<KubernetesWorkloadT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Contains detailed information about the container associated with the
   * activity that prompted GuardDuty to generate a finding.</p>
   */
  inline const ContainerFindingResource& GetContainer() const { return m_container; }
  inline bool ContainerHasBeenSet() const { return m_containerHasBeenSet; }
  template <typename ContainerT = ContainerFindingResource>
  void SetContainer(ContainerT&& value) {
    m_containerHasBeenSet = true;
    m_container = std::forward<ContainerT>(value);
  }
  template <typename ContainerT = ContainerFindingResource>
  ResourceData& WithContainer(ContainerT&& value) {
    SetContainer(std::forward<ContainerT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Contains detailed information about the Amazon ECS cluster associated with
   * the activity that prompted GuardDuty to generate a finding.</p>
   */
  inline const EcsCluster& GetEcsCluster() const { return m_ecsCluster; }
  inline bool EcsClusterHasBeenSet() const { return m_ecsClusterHasBeenSet; }
  template <typename EcsClusterT = EcsCluster>
  void SetEcsCluster(EcsClusterT&& value) {
    m_ecsClusterHasBeenSet = true;
    m_ecsCluster = std::forward<EcsClusterT>(value);
  }
  template <typename EcsClusterT = EcsCluster>
  ResourceData& WithEcsCluster(EcsClusterT&& value) {
    SetEcsCluster(std::forward<EcsClusterT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Contains detailed information about the Amazon ECS task associated with the
   * activity that prompted GuardDuty to generate a finding.</p>
   */
  inline const EcsTask& GetEcsTask() const { return m_ecsTask; }
  inline bool EcsTaskHasBeenSet() const { return m_ecsTaskHasBeenSet; }
  template <typename EcsTaskT = EcsTask>
  void SetEcsTask(EcsTaskT&& value) {
    m_ecsTaskHasBeenSet = true;
    m_ecsTask = std::forward<EcsTaskT>(value);
  }
  template <typename EcsTaskT = EcsTask>
  ResourceData& WithEcsTask(EcsTaskT&& value) {
    SetEcsTask(std::forward<EcsTaskT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Contains detailed information about the IAM instance profile associated with
   * the activity that prompted GuardDuty to generate a finding.</p>
   */
  inline const IamInstanceProfileV2& GetIamInstanceProfile() const { return m_iamInstanceProfile; }
  inline bool IamInstanceProfileHasBeenSet() const { return m_iamInstanceProfileHasBeenSet; }
  template <typename IamInstanceProfileT = IamInstanceProfileV2>
  void SetIamInstanceProfile(IamInstanceProfileT&& value) {
    m_iamInstanceProfileHasBeenSet = true;
    m_iamInstanceProfile = std::forward<IamInstanceProfileT>(value);
  }
  template <typename IamInstanceProfileT = IamInstanceProfileV2>
  ResourceData& WithIamInstanceProfile(IamInstanceProfileT&& value) {
    SetIamInstanceProfile(std::forward<IamInstanceProfileT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Contains detailed information about the Auto Scaling Group associated with
   * the activity that prompted GuardDuty to generate a finding.</p>
   */
  inline const AutoscalingAutoScalingGroup& GetAutoscalingAutoScalingGroup() const { return m_autoscalingAutoScalingGroup; }
  inline bool AutoscalingAutoScalingGroupHasBeenSet() const { return m_autoscalingAutoScalingGroupHasBeenSet; }
  template <typename AutoscalingAutoScalingGroupT = AutoscalingAutoScalingGroup>
  void SetAutoscalingAutoScalingGroup(AutoscalingAutoScalingGroupT&& value) {
    m_autoscalingAutoScalingGroupHasBeenSet = true;
    m_autoscalingAutoScalingGroup = std::forward<AutoscalingAutoScalingGroupT>(value);
  }
  template <typename AutoscalingAutoScalingGroupT = AutoscalingAutoScalingGroup>
  ResourceData& WithAutoscalingAutoScalingGroup(AutoscalingAutoScalingGroupT&& value) {
    SetAutoscalingAutoScalingGroup(std::forward<AutoscalingAutoScalingGroupT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Contains detailed information about the EC2 launch template associated with
   * the activity that prompted GuardDuty to generate a finding.</p>
   */
  inline const Ec2LaunchTemplate& GetEc2LaunchTemplate() const { return m_ec2LaunchTemplate; }
  inline bool Ec2LaunchTemplateHasBeenSet() const { return m_ec2LaunchTemplateHasBeenSet; }
  template <typename Ec2LaunchTemplateT = Ec2LaunchTemplate>
  void SetEc2LaunchTemplate(Ec2LaunchTemplateT&& value) {
    m_ec2LaunchTemplateHasBeenSet = true;
    m_ec2LaunchTemplate = std::forward<Ec2LaunchTemplateT>(value);
  }
  template <typename Ec2LaunchTemplateT = Ec2LaunchTemplate>
  ResourceData& WithEc2LaunchTemplate(Ec2LaunchTemplateT&& value) {
    SetEc2LaunchTemplate(std::forward<Ec2LaunchTemplateT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Contains detailed information about the EC2 VPC associated with the activity
   * that prompted GuardDuty to generate a finding.</p>
   */
  inline const Ec2Vpc& GetEc2Vpc() const { return m_ec2Vpc; }
  inline bool Ec2VpcHasBeenSet() const { return m_ec2VpcHasBeenSet; }
  template <typename Ec2VpcT = Ec2Vpc>
  void SetEc2Vpc(Ec2VpcT&& value) {
    m_ec2VpcHasBeenSet = true;
    m_ec2Vpc = std::forward<Ec2VpcT>(value);
  }
  template <typename Ec2VpcT = Ec2Vpc>
  ResourceData& WithEc2Vpc(Ec2VpcT&& value) {
    SetEc2Vpc(std::forward<Ec2VpcT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Contains detailed information about the EC2 Image associated with the
   * activity that prompted GuardDuty to generate a finding.</p>
   */
  inline const Ec2Image& GetEc2Image() const { return m_ec2Image; }
  inline bool Ec2ImageHasBeenSet() const { return m_ec2ImageHasBeenSet; }
  template <typename Ec2ImageT = Ec2Image>
  void SetEc2Image(Ec2ImageT&& value) {
    m_ec2ImageHasBeenSet = true;
    m_ec2Image = std::forward<Ec2ImageT>(value);
  }
  template <typename Ec2ImageT = Ec2Image>
  ResourceData& WithEc2Image(Ec2ImageT&& value) {
    SetEc2Image(std::forward<Ec2ImageT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Contains detailed information about the CloudFormation stack associated with
   * the activity that prompted GuardDuty to generate a finding.</p>
   */
  inline const CloudformationStack& GetCloudformationStack() const { return m_cloudformationStack; }
  inline bool CloudformationStackHasBeenSet() const { return m_cloudformationStackHasBeenSet; }
  template <typename CloudformationStackT = CloudformationStack>
  void SetCloudformationStack(CloudformationStackT&& value) {
    m_cloudformationStackHasBeenSet = true;
    m_cloudformationStack = std::forward<CloudformationStackT>(value);
  }
  template <typename CloudformationStackT = CloudformationStack>
  ResourceData& WithCloudformationStack(CloudformationStackT&& value) {
    SetCloudformationStack(std::forward<CloudformationStackT>(value));
    return *this;
  }
  ///@}
 private:
  S3Bucket m_s3Bucket;

  Ec2Instance m_ec2Instance;

  AccessKey m_accessKey;

  Ec2NetworkInterface m_ec2NetworkInterface;

  S3Object m_s3Object;

  EksCluster m_eksCluster;

  KubernetesWorkload m_kubernetesWorkload;

  ContainerFindingResource m_container;

  EcsCluster m_ecsCluster;

  EcsTask m_ecsTask;

  IamInstanceProfileV2 m_iamInstanceProfile;

  AutoscalingAutoScalingGroup m_autoscalingAutoScalingGroup;

  Ec2LaunchTemplate m_ec2LaunchTemplate;

  Ec2Vpc m_ec2Vpc;

  Ec2Image m_ec2Image;

  CloudformationStack m_cloudformationStack;
  bool m_s3BucketHasBeenSet = false;
  bool m_ec2InstanceHasBeenSet = false;
  bool m_accessKeyHasBeenSet = false;
  bool m_ec2NetworkInterfaceHasBeenSet = false;
  bool m_s3ObjectHasBeenSet = false;
  bool m_eksClusterHasBeenSet = false;
  bool m_kubernetesWorkloadHasBeenSet = false;
  bool m_containerHasBeenSet = false;
  bool m_ecsClusterHasBeenSet = false;
  bool m_ecsTaskHasBeenSet = false;
  bool m_iamInstanceProfileHasBeenSet = false;
  bool m_autoscalingAutoScalingGroupHasBeenSet = false;
  bool m_ec2LaunchTemplateHasBeenSet = false;
  bool m_ec2VpcHasBeenSet = false;
  bool m_ec2ImageHasBeenSet = false;
  bool m_cloudformationStackHasBeenSet = false;
};

}  // namespace Model
}  // namespace GuardDuty
}  // namespace Aws
