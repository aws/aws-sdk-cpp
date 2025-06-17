/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/guardduty/GuardDuty_EXPORTS.h>
#include <aws/guardduty/model/S3Bucket.h>
#include <aws/guardduty/model/Ec2Instance.h>
#include <aws/guardduty/model/AccessKey.h>
#include <aws/guardduty/model/Ec2NetworkInterface.h>
#include <aws/guardduty/model/S3Object.h>
#include <aws/guardduty/model/EksCluster.h>
#include <aws/guardduty/model/KubernetesWorkload.h>
#include <aws/guardduty/model/ContainerFindingResource.h>
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
namespace GuardDuty
{
namespace Model
{

  /**
   * <p>Contains information about the Amazon Web Services resource that is
   * associated with the activity that prompted GuardDuty to generate a
   * finding.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/ResourceData">AWS
   * API Reference</a></p>
   */
  class ResourceData
  {
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
    template<typename S3BucketT = S3Bucket>
    void SetS3Bucket(S3BucketT&& value) { m_s3BucketHasBeenSet = true; m_s3Bucket = std::forward<S3BucketT>(value); }
    template<typename S3BucketT = S3Bucket>
    ResourceData& WithS3Bucket(S3BucketT&& value) { SetS3Bucket(std::forward<S3BucketT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains information about the Amazon EC2 instance.</p>
     */
    inline const Ec2Instance& GetEc2Instance() const { return m_ec2Instance; }
    inline bool Ec2InstanceHasBeenSet() const { return m_ec2InstanceHasBeenSet; }
    template<typename Ec2InstanceT = Ec2Instance>
    void SetEc2Instance(Ec2InstanceT&& value) { m_ec2InstanceHasBeenSet = true; m_ec2Instance = std::forward<Ec2InstanceT>(value); }
    template<typename Ec2InstanceT = Ec2Instance>
    ResourceData& WithEc2Instance(Ec2InstanceT&& value) { SetEc2Instance(std::forward<Ec2InstanceT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains information about the IAM access key details of a user that involved
     * in the GuardDuty finding.</p>
     */
    inline const AccessKey& GetAccessKey() const { return m_accessKey; }
    inline bool AccessKeyHasBeenSet() const { return m_accessKeyHasBeenSet; }
    template<typename AccessKeyT = AccessKey>
    void SetAccessKey(AccessKeyT&& value) { m_accessKeyHasBeenSet = true; m_accessKey = std::forward<AccessKeyT>(value); }
    template<typename AccessKeyT = AccessKey>
    ResourceData& WithAccessKey(AccessKeyT&& value) { SetAccessKey(std::forward<AccessKeyT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains information about the elastic network interface of the Amazon EC2
     * instance.</p>
     */
    inline const Ec2NetworkInterface& GetEc2NetworkInterface() const { return m_ec2NetworkInterface; }
    inline bool Ec2NetworkInterfaceHasBeenSet() const { return m_ec2NetworkInterfaceHasBeenSet; }
    template<typename Ec2NetworkInterfaceT = Ec2NetworkInterface>
    void SetEc2NetworkInterface(Ec2NetworkInterfaceT&& value) { m_ec2NetworkInterfaceHasBeenSet = true; m_ec2NetworkInterface = std::forward<Ec2NetworkInterfaceT>(value); }
    template<typename Ec2NetworkInterfaceT = Ec2NetworkInterface>
    ResourceData& WithEc2NetworkInterface(Ec2NetworkInterfaceT&& value) { SetEc2NetworkInterface(std::forward<Ec2NetworkInterfaceT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains information about the Amazon S3 object.</p>
     */
    inline const S3Object& GetS3Object() const { return m_s3Object; }
    inline bool S3ObjectHasBeenSet() const { return m_s3ObjectHasBeenSet; }
    template<typename S3ObjectT = S3Object>
    void SetS3Object(S3ObjectT&& value) { m_s3ObjectHasBeenSet = true; m_s3Object = std::forward<S3ObjectT>(value); }
    template<typename S3ObjectT = S3Object>
    ResourceData& WithS3Object(S3ObjectT&& value) { SetS3Object(std::forward<S3ObjectT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains detailed information about the Amazon EKS cluster associated with
     * the activity that prompted GuardDuty to generate a finding.</p>
     */
    inline const EksCluster& GetEksCluster() const { return m_eksCluster; }
    inline bool EksClusterHasBeenSet() const { return m_eksClusterHasBeenSet; }
    template<typename EksClusterT = EksCluster>
    void SetEksCluster(EksClusterT&& value) { m_eksClusterHasBeenSet = true; m_eksCluster = std::forward<EksClusterT>(value); }
    template<typename EksClusterT = EksCluster>
    ResourceData& WithEksCluster(EksClusterT&& value) { SetEksCluster(std::forward<EksClusterT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains detailed information about the Kubernetes workload associated with
     * the activity that prompted GuardDuty to generate a finding.</p>
     */
    inline const KubernetesWorkload& GetKubernetesWorkload() const { return m_kubernetesWorkload; }
    inline bool KubernetesWorkloadHasBeenSet() const { return m_kubernetesWorkloadHasBeenSet; }
    template<typename KubernetesWorkloadT = KubernetesWorkload>
    void SetKubernetesWorkload(KubernetesWorkloadT&& value) { m_kubernetesWorkloadHasBeenSet = true; m_kubernetesWorkload = std::forward<KubernetesWorkloadT>(value); }
    template<typename KubernetesWorkloadT = KubernetesWorkload>
    ResourceData& WithKubernetesWorkload(KubernetesWorkloadT&& value) { SetKubernetesWorkload(std::forward<KubernetesWorkloadT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains detailed information about the container associated with the
     * activity that prompted GuardDuty to generate a finding.</p>
     */
    inline const ContainerFindingResource& GetContainer() const { return m_container; }
    inline bool ContainerHasBeenSet() const { return m_containerHasBeenSet; }
    template<typename ContainerT = ContainerFindingResource>
    void SetContainer(ContainerT&& value) { m_containerHasBeenSet = true; m_container = std::forward<ContainerT>(value); }
    template<typename ContainerT = ContainerFindingResource>
    ResourceData& WithContainer(ContainerT&& value) { SetContainer(std::forward<ContainerT>(value)); return *this;}
    ///@}
  private:

    S3Bucket m_s3Bucket;
    bool m_s3BucketHasBeenSet = false;

    Ec2Instance m_ec2Instance;
    bool m_ec2InstanceHasBeenSet = false;

    AccessKey m_accessKey;
    bool m_accessKeyHasBeenSet = false;

    Ec2NetworkInterface m_ec2NetworkInterface;
    bool m_ec2NetworkInterfaceHasBeenSet = false;

    S3Object m_s3Object;
    bool m_s3ObjectHasBeenSet = false;

    EksCluster m_eksCluster;
    bool m_eksClusterHasBeenSet = false;

    KubernetesWorkload m_kubernetesWorkload;
    bool m_kubernetesWorkloadHasBeenSet = false;

    ContainerFindingResource m_container;
    bool m_containerHasBeenSet = false;
  };

} // namespace Model
} // namespace GuardDuty
} // namespace Aws
