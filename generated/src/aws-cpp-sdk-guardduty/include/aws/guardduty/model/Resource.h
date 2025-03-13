/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/guardduty/GuardDuty_EXPORTS.h>
#include <aws/guardduty/model/AccessKeyDetails.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/guardduty/model/InstanceDetails.h>
#include <aws/guardduty/model/EksClusterDetails.h>
#include <aws/guardduty/model/KubernetesDetails.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/guardduty/model/EbsVolumeDetails.h>
#include <aws/guardduty/model/EcsClusterDetails.h>
#include <aws/guardduty/model/Container.h>
#include <aws/guardduty/model/RdsDbInstanceDetails.h>
#include <aws/guardduty/model/RdsLimitlessDbDetails.h>
#include <aws/guardduty/model/RdsDbUserDetails.h>
#include <aws/guardduty/model/LambdaDetails.h>
#include <aws/guardduty/model/S3BucketDetail.h>
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
   * <p>Contains information about the Amazon Web Services resource associated with
   * the activity that prompted GuardDuty to generate a finding.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/Resource">AWS
   * API Reference</a></p>
   */
  class Resource
  {
  public:
    AWS_GUARDDUTY_API Resource() = default;
    AWS_GUARDDUTY_API Resource(Aws::Utils::Json::JsonView jsonValue);
    AWS_GUARDDUTY_API Resource& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GUARDDUTY_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The IAM access key details (user information) of a user that engaged in the
     * activity that prompted GuardDuty to generate a finding.</p>
     */
    inline const AccessKeyDetails& GetAccessKeyDetails() const { return m_accessKeyDetails; }
    inline bool AccessKeyDetailsHasBeenSet() const { return m_accessKeyDetailsHasBeenSet; }
    template<typename AccessKeyDetailsT = AccessKeyDetails>
    void SetAccessKeyDetails(AccessKeyDetailsT&& value) { m_accessKeyDetailsHasBeenSet = true; m_accessKeyDetails = std::forward<AccessKeyDetailsT>(value); }
    template<typename AccessKeyDetailsT = AccessKeyDetails>
    Resource& WithAccessKeyDetails(AccessKeyDetailsT&& value) { SetAccessKeyDetails(std::forward<AccessKeyDetailsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains information on the S3 bucket.</p>
     */
    inline const Aws::Vector<S3BucketDetail>& GetS3BucketDetails() const { return m_s3BucketDetails; }
    inline bool S3BucketDetailsHasBeenSet() const { return m_s3BucketDetailsHasBeenSet; }
    template<typename S3BucketDetailsT = Aws::Vector<S3BucketDetail>>
    void SetS3BucketDetails(S3BucketDetailsT&& value) { m_s3BucketDetailsHasBeenSet = true; m_s3BucketDetails = std::forward<S3BucketDetailsT>(value); }
    template<typename S3BucketDetailsT = Aws::Vector<S3BucketDetail>>
    Resource& WithS3BucketDetails(S3BucketDetailsT&& value) { SetS3BucketDetails(std::forward<S3BucketDetailsT>(value)); return *this;}
    template<typename S3BucketDetailsT = S3BucketDetail>
    Resource& AddS3BucketDetails(S3BucketDetailsT&& value) { m_s3BucketDetailsHasBeenSet = true; m_s3BucketDetails.emplace_back(std::forward<S3BucketDetailsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The information about the EC2 instance associated with the activity that
     * prompted GuardDuty to generate a finding.</p>
     */
    inline const InstanceDetails& GetInstanceDetails() const { return m_instanceDetails; }
    inline bool InstanceDetailsHasBeenSet() const { return m_instanceDetailsHasBeenSet; }
    template<typename InstanceDetailsT = InstanceDetails>
    void SetInstanceDetails(InstanceDetailsT&& value) { m_instanceDetailsHasBeenSet = true; m_instanceDetails = std::forward<InstanceDetailsT>(value); }
    template<typename InstanceDetailsT = InstanceDetails>
    Resource& WithInstanceDetails(InstanceDetailsT&& value) { SetInstanceDetails(std::forward<InstanceDetailsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Details about the EKS cluster involved in a Kubernetes finding.</p>
     */
    inline const EksClusterDetails& GetEksClusterDetails() const { return m_eksClusterDetails; }
    inline bool EksClusterDetailsHasBeenSet() const { return m_eksClusterDetailsHasBeenSet; }
    template<typename EksClusterDetailsT = EksClusterDetails>
    void SetEksClusterDetails(EksClusterDetailsT&& value) { m_eksClusterDetailsHasBeenSet = true; m_eksClusterDetails = std::forward<EksClusterDetailsT>(value); }
    template<typename EksClusterDetailsT = EksClusterDetails>
    Resource& WithEksClusterDetails(EksClusterDetailsT&& value) { SetEksClusterDetails(std::forward<EksClusterDetailsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Details about the Kubernetes user and workload involved in a Kubernetes
     * finding.</p>
     */
    inline const KubernetesDetails& GetKubernetesDetails() const { return m_kubernetesDetails; }
    inline bool KubernetesDetailsHasBeenSet() const { return m_kubernetesDetailsHasBeenSet; }
    template<typename KubernetesDetailsT = KubernetesDetails>
    void SetKubernetesDetails(KubernetesDetailsT&& value) { m_kubernetesDetailsHasBeenSet = true; m_kubernetesDetails = std::forward<KubernetesDetailsT>(value); }
    template<typename KubernetesDetailsT = KubernetesDetails>
    Resource& WithKubernetesDetails(KubernetesDetailsT&& value) { SetKubernetesDetails(std::forward<KubernetesDetailsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of Amazon Web Services resource.</p>
     */
    inline const Aws::String& GetResourceType() const { return m_resourceType; }
    inline bool ResourceTypeHasBeenSet() const { return m_resourceTypeHasBeenSet; }
    template<typename ResourceTypeT = Aws::String>
    void SetResourceType(ResourceTypeT&& value) { m_resourceTypeHasBeenSet = true; m_resourceType = std::forward<ResourceTypeT>(value); }
    template<typename ResourceTypeT = Aws::String>
    Resource& WithResourceType(ResourceTypeT&& value) { SetResourceType(std::forward<ResourceTypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains list of scanned and skipped EBS volumes with details.</p>
     */
    inline const EbsVolumeDetails& GetEbsVolumeDetails() const { return m_ebsVolumeDetails; }
    inline bool EbsVolumeDetailsHasBeenSet() const { return m_ebsVolumeDetailsHasBeenSet; }
    template<typename EbsVolumeDetailsT = EbsVolumeDetails>
    void SetEbsVolumeDetails(EbsVolumeDetailsT&& value) { m_ebsVolumeDetailsHasBeenSet = true; m_ebsVolumeDetails = std::forward<EbsVolumeDetailsT>(value); }
    template<typename EbsVolumeDetailsT = EbsVolumeDetails>
    Resource& WithEbsVolumeDetails(EbsVolumeDetailsT&& value) { SetEbsVolumeDetails(std::forward<EbsVolumeDetailsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains information about the details of the ECS Cluster.</p>
     */
    inline const EcsClusterDetails& GetEcsClusterDetails() const { return m_ecsClusterDetails; }
    inline bool EcsClusterDetailsHasBeenSet() const { return m_ecsClusterDetailsHasBeenSet; }
    template<typename EcsClusterDetailsT = EcsClusterDetails>
    void SetEcsClusterDetails(EcsClusterDetailsT&& value) { m_ecsClusterDetailsHasBeenSet = true; m_ecsClusterDetails = std::forward<EcsClusterDetailsT>(value); }
    template<typename EcsClusterDetailsT = EcsClusterDetails>
    Resource& WithEcsClusterDetails(EcsClusterDetailsT&& value) { SetEcsClusterDetails(std::forward<EcsClusterDetailsT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Container& GetContainerDetails() const { return m_containerDetails; }
    inline bool ContainerDetailsHasBeenSet() const { return m_containerDetailsHasBeenSet; }
    template<typename ContainerDetailsT = Container>
    void SetContainerDetails(ContainerDetailsT&& value) { m_containerDetailsHasBeenSet = true; m_containerDetails = std::forward<ContainerDetailsT>(value); }
    template<typename ContainerDetailsT = Container>
    Resource& WithContainerDetails(ContainerDetailsT&& value) { SetContainerDetails(std::forward<ContainerDetailsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains information about the database instance to which an anomalous login
     * attempt was made.</p>
     */
    inline const RdsDbInstanceDetails& GetRdsDbInstanceDetails() const { return m_rdsDbInstanceDetails; }
    inline bool RdsDbInstanceDetailsHasBeenSet() const { return m_rdsDbInstanceDetailsHasBeenSet; }
    template<typename RdsDbInstanceDetailsT = RdsDbInstanceDetails>
    void SetRdsDbInstanceDetails(RdsDbInstanceDetailsT&& value) { m_rdsDbInstanceDetailsHasBeenSet = true; m_rdsDbInstanceDetails = std::forward<RdsDbInstanceDetailsT>(value); }
    template<typename RdsDbInstanceDetailsT = RdsDbInstanceDetails>
    Resource& WithRdsDbInstanceDetails(RdsDbInstanceDetailsT&& value) { SetRdsDbInstanceDetails(std::forward<RdsDbInstanceDetailsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains information about the RDS Limitless database that was involved in a
     * GuardDuty finding.</p>
     */
    inline const RdsLimitlessDbDetails& GetRdsLimitlessDbDetails() const { return m_rdsLimitlessDbDetails; }
    inline bool RdsLimitlessDbDetailsHasBeenSet() const { return m_rdsLimitlessDbDetailsHasBeenSet; }
    template<typename RdsLimitlessDbDetailsT = RdsLimitlessDbDetails>
    void SetRdsLimitlessDbDetails(RdsLimitlessDbDetailsT&& value) { m_rdsLimitlessDbDetailsHasBeenSet = true; m_rdsLimitlessDbDetails = std::forward<RdsLimitlessDbDetailsT>(value); }
    template<typename RdsLimitlessDbDetailsT = RdsLimitlessDbDetails>
    Resource& WithRdsLimitlessDbDetails(RdsLimitlessDbDetailsT&& value) { SetRdsLimitlessDbDetails(std::forward<RdsLimitlessDbDetailsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains information about the user details through which anomalous login
     * attempt was made.</p>
     */
    inline const RdsDbUserDetails& GetRdsDbUserDetails() const { return m_rdsDbUserDetails; }
    inline bool RdsDbUserDetailsHasBeenSet() const { return m_rdsDbUserDetailsHasBeenSet; }
    template<typename RdsDbUserDetailsT = RdsDbUserDetails>
    void SetRdsDbUserDetails(RdsDbUserDetailsT&& value) { m_rdsDbUserDetailsHasBeenSet = true; m_rdsDbUserDetails = std::forward<RdsDbUserDetailsT>(value); }
    template<typename RdsDbUserDetailsT = RdsDbUserDetails>
    Resource& WithRdsDbUserDetails(RdsDbUserDetailsT&& value) { SetRdsDbUserDetails(std::forward<RdsDbUserDetailsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains information about the Lambda function that was involved in a
     * finding.</p>
     */
    inline const LambdaDetails& GetLambdaDetails() const { return m_lambdaDetails; }
    inline bool LambdaDetailsHasBeenSet() const { return m_lambdaDetailsHasBeenSet; }
    template<typename LambdaDetailsT = LambdaDetails>
    void SetLambdaDetails(LambdaDetailsT&& value) { m_lambdaDetailsHasBeenSet = true; m_lambdaDetails = std::forward<LambdaDetailsT>(value); }
    template<typename LambdaDetailsT = LambdaDetails>
    Resource& WithLambdaDetails(LambdaDetailsT&& value) { SetLambdaDetails(std::forward<LambdaDetailsT>(value)); return *this;}
    ///@}
  private:

    AccessKeyDetails m_accessKeyDetails;
    bool m_accessKeyDetailsHasBeenSet = false;

    Aws::Vector<S3BucketDetail> m_s3BucketDetails;
    bool m_s3BucketDetailsHasBeenSet = false;

    InstanceDetails m_instanceDetails;
    bool m_instanceDetailsHasBeenSet = false;

    EksClusterDetails m_eksClusterDetails;
    bool m_eksClusterDetailsHasBeenSet = false;

    KubernetesDetails m_kubernetesDetails;
    bool m_kubernetesDetailsHasBeenSet = false;

    Aws::String m_resourceType;
    bool m_resourceTypeHasBeenSet = false;

    EbsVolumeDetails m_ebsVolumeDetails;
    bool m_ebsVolumeDetailsHasBeenSet = false;

    EcsClusterDetails m_ecsClusterDetails;
    bool m_ecsClusterDetailsHasBeenSet = false;

    Container m_containerDetails;
    bool m_containerDetailsHasBeenSet = false;

    RdsDbInstanceDetails m_rdsDbInstanceDetails;
    bool m_rdsDbInstanceDetailsHasBeenSet = false;

    RdsLimitlessDbDetails m_rdsLimitlessDbDetails;
    bool m_rdsLimitlessDbDetailsHasBeenSet = false;

    RdsDbUserDetails m_rdsDbUserDetails;
    bool m_rdsDbUserDetailsHasBeenSet = false;

    LambdaDetails m_lambdaDetails;
    bool m_lambdaDetailsHasBeenSet = false;
  };

} // namespace Model
} // namespace GuardDuty
} // namespace Aws
