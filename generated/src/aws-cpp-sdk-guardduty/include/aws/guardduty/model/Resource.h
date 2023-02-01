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
    AWS_GUARDDUTY_API Resource();
    AWS_GUARDDUTY_API Resource(Aws::Utils::Json::JsonView jsonValue);
    AWS_GUARDDUTY_API Resource& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GUARDDUTY_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The IAM access key details (IAM user information) of a user that engaged in
     * the activity that prompted GuardDuty to generate a finding.</p>
     */
    inline const AccessKeyDetails& GetAccessKeyDetails() const{ return m_accessKeyDetails; }

    /**
     * <p>The IAM access key details (IAM user information) of a user that engaged in
     * the activity that prompted GuardDuty to generate a finding.</p>
     */
    inline bool AccessKeyDetailsHasBeenSet() const { return m_accessKeyDetailsHasBeenSet; }

    /**
     * <p>The IAM access key details (IAM user information) of a user that engaged in
     * the activity that prompted GuardDuty to generate a finding.</p>
     */
    inline void SetAccessKeyDetails(const AccessKeyDetails& value) { m_accessKeyDetailsHasBeenSet = true; m_accessKeyDetails = value; }

    /**
     * <p>The IAM access key details (IAM user information) of a user that engaged in
     * the activity that prompted GuardDuty to generate a finding.</p>
     */
    inline void SetAccessKeyDetails(AccessKeyDetails&& value) { m_accessKeyDetailsHasBeenSet = true; m_accessKeyDetails = std::move(value); }

    /**
     * <p>The IAM access key details (IAM user information) of a user that engaged in
     * the activity that prompted GuardDuty to generate a finding.</p>
     */
    inline Resource& WithAccessKeyDetails(const AccessKeyDetails& value) { SetAccessKeyDetails(value); return *this;}

    /**
     * <p>The IAM access key details (IAM user information) of a user that engaged in
     * the activity that prompted GuardDuty to generate a finding.</p>
     */
    inline Resource& WithAccessKeyDetails(AccessKeyDetails&& value) { SetAccessKeyDetails(std::move(value)); return *this;}


    /**
     * <p>Contains information on the S3 bucket.</p>
     */
    inline const Aws::Vector<S3BucketDetail>& GetS3BucketDetails() const{ return m_s3BucketDetails; }

    /**
     * <p>Contains information on the S3 bucket.</p>
     */
    inline bool S3BucketDetailsHasBeenSet() const { return m_s3BucketDetailsHasBeenSet; }

    /**
     * <p>Contains information on the S3 bucket.</p>
     */
    inline void SetS3BucketDetails(const Aws::Vector<S3BucketDetail>& value) { m_s3BucketDetailsHasBeenSet = true; m_s3BucketDetails = value; }

    /**
     * <p>Contains information on the S3 bucket.</p>
     */
    inline void SetS3BucketDetails(Aws::Vector<S3BucketDetail>&& value) { m_s3BucketDetailsHasBeenSet = true; m_s3BucketDetails = std::move(value); }

    /**
     * <p>Contains information on the S3 bucket.</p>
     */
    inline Resource& WithS3BucketDetails(const Aws::Vector<S3BucketDetail>& value) { SetS3BucketDetails(value); return *this;}

    /**
     * <p>Contains information on the S3 bucket.</p>
     */
    inline Resource& WithS3BucketDetails(Aws::Vector<S3BucketDetail>&& value) { SetS3BucketDetails(std::move(value)); return *this;}

    /**
     * <p>Contains information on the S3 bucket.</p>
     */
    inline Resource& AddS3BucketDetails(const S3BucketDetail& value) { m_s3BucketDetailsHasBeenSet = true; m_s3BucketDetails.push_back(value); return *this; }

    /**
     * <p>Contains information on the S3 bucket.</p>
     */
    inline Resource& AddS3BucketDetails(S3BucketDetail&& value) { m_s3BucketDetailsHasBeenSet = true; m_s3BucketDetails.push_back(std::move(value)); return *this; }


    /**
     * <p>The information about the EC2 instance associated with the activity that
     * prompted GuardDuty to generate a finding.</p>
     */
    inline const InstanceDetails& GetInstanceDetails() const{ return m_instanceDetails; }

    /**
     * <p>The information about the EC2 instance associated with the activity that
     * prompted GuardDuty to generate a finding.</p>
     */
    inline bool InstanceDetailsHasBeenSet() const { return m_instanceDetailsHasBeenSet; }

    /**
     * <p>The information about the EC2 instance associated with the activity that
     * prompted GuardDuty to generate a finding.</p>
     */
    inline void SetInstanceDetails(const InstanceDetails& value) { m_instanceDetailsHasBeenSet = true; m_instanceDetails = value; }

    /**
     * <p>The information about the EC2 instance associated with the activity that
     * prompted GuardDuty to generate a finding.</p>
     */
    inline void SetInstanceDetails(InstanceDetails&& value) { m_instanceDetailsHasBeenSet = true; m_instanceDetails = std::move(value); }

    /**
     * <p>The information about the EC2 instance associated with the activity that
     * prompted GuardDuty to generate a finding.</p>
     */
    inline Resource& WithInstanceDetails(const InstanceDetails& value) { SetInstanceDetails(value); return *this;}

    /**
     * <p>The information about the EC2 instance associated with the activity that
     * prompted GuardDuty to generate a finding.</p>
     */
    inline Resource& WithInstanceDetails(InstanceDetails&& value) { SetInstanceDetails(std::move(value)); return *this;}


    /**
     * <p>Details about the EKS cluster involved in a Kubernetes finding.</p>
     */
    inline const EksClusterDetails& GetEksClusterDetails() const{ return m_eksClusterDetails; }

    /**
     * <p>Details about the EKS cluster involved in a Kubernetes finding.</p>
     */
    inline bool EksClusterDetailsHasBeenSet() const { return m_eksClusterDetailsHasBeenSet; }

    /**
     * <p>Details about the EKS cluster involved in a Kubernetes finding.</p>
     */
    inline void SetEksClusterDetails(const EksClusterDetails& value) { m_eksClusterDetailsHasBeenSet = true; m_eksClusterDetails = value; }

    /**
     * <p>Details about the EKS cluster involved in a Kubernetes finding.</p>
     */
    inline void SetEksClusterDetails(EksClusterDetails&& value) { m_eksClusterDetailsHasBeenSet = true; m_eksClusterDetails = std::move(value); }

    /**
     * <p>Details about the EKS cluster involved in a Kubernetes finding.</p>
     */
    inline Resource& WithEksClusterDetails(const EksClusterDetails& value) { SetEksClusterDetails(value); return *this;}

    /**
     * <p>Details about the EKS cluster involved in a Kubernetes finding.</p>
     */
    inline Resource& WithEksClusterDetails(EksClusterDetails&& value) { SetEksClusterDetails(std::move(value)); return *this;}


    /**
     * <p>Details about the Kubernetes user and workload involved in a Kubernetes
     * finding.</p>
     */
    inline const KubernetesDetails& GetKubernetesDetails() const{ return m_kubernetesDetails; }

    /**
     * <p>Details about the Kubernetes user and workload involved in a Kubernetes
     * finding.</p>
     */
    inline bool KubernetesDetailsHasBeenSet() const { return m_kubernetesDetailsHasBeenSet; }

    /**
     * <p>Details about the Kubernetes user and workload involved in a Kubernetes
     * finding.</p>
     */
    inline void SetKubernetesDetails(const KubernetesDetails& value) { m_kubernetesDetailsHasBeenSet = true; m_kubernetesDetails = value; }

    /**
     * <p>Details about the Kubernetes user and workload involved in a Kubernetes
     * finding.</p>
     */
    inline void SetKubernetesDetails(KubernetesDetails&& value) { m_kubernetesDetailsHasBeenSet = true; m_kubernetesDetails = std::move(value); }

    /**
     * <p>Details about the Kubernetes user and workload involved in a Kubernetes
     * finding.</p>
     */
    inline Resource& WithKubernetesDetails(const KubernetesDetails& value) { SetKubernetesDetails(value); return *this;}

    /**
     * <p>Details about the Kubernetes user and workload involved in a Kubernetes
     * finding.</p>
     */
    inline Resource& WithKubernetesDetails(KubernetesDetails&& value) { SetKubernetesDetails(std::move(value)); return *this;}


    /**
     * <p>The type of Amazon Web Services resource.</p>
     */
    inline const Aws::String& GetResourceType() const{ return m_resourceType; }

    /**
     * <p>The type of Amazon Web Services resource.</p>
     */
    inline bool ResourceTypeHasBeenSet() const { return m_resourceTypeHasBeenSet; }

    /**
     * <p>The type of Amazon Web Services resource.</p>
     */
    inline void SetResourceType(const Aws::String& value) { m_resourceTypeHasBeenSet = true; m_resourceType = value; }

    /**
     * <p>The type of Amazon Web Services resource.</p>
     */
    inline void SetResourceType(Aws::String&& value) { m_resourceTypeHasBeenSet = true; m_resourceType = std::move(value); }

    /**
     * <p>The type of Amazon Web Services resource.</p>
     */
    inline void SetResourceType(const char* value) { m_resourceTypeHasBeenSet = true; m_resourceType.assign(value); }

    /**
     * <p>The type of Amazon Web Services resource.</p>
     */
    inline Resource& WithResourceType(const Aws::String& value) { SetResourceType(value); return *this;}

    /**
     * <p>The type of Amazon Web Services resource.</p>
     */
    inline Resource& WithResourceType(Aws::String&& value) { SetResourceType(std::move(value)); return *this;}

    /**
     * <p>The type of Amazon Web Services resource.</p>
     */
    inline Resource& WithResourceType(const char* value) { SetResourceType(value); return *this;}


    /**
     * <p>Contains list of scanned and skipped EBS volumes with details.</p>
     */
    inline const EbsVolumeDetails& GetEbsVolumeDetails() const{ return m_ebsVolumeDetails; }

    /**
     * <p>Contains list of scanned and skipped EBS volumes with details.</p>
     */
    inline bool EbsVolumeDetailsHasBeenSet() const { return m_ebsVolumeDetailsHasBeenSet; }

    /**
     * <p>Contains list of scanned and skipped EBS volumes with details.</p>
     */
    inline void SetEbsVolumeDetails(const EbsVolumeDetails& value) { m_ebsVolumeDetailsHasBeenSet = true; m_ebsVolumeDetails = value; }

    /**
     * <p>Contains list of scanned and skipped EBS volumes with details.</p>
     */
    inline void SetEbsVolumeDetails(EbsVolumeDetails&& value) { m_ebsVolumeDetailsHasBeenSet = true; m_ebsVolumeDetails = std::move(value); }

    /**
     * <p>Contains list of scanned and skipped EBS volumes with details.</p>
     */
    inline Resource& WithEbsVolumeDetails(const EbsVolumeDetails& value) { SetEbsVolumeDetails(value); return *this;}

    /**
     * <p>Contains list of scanned and skipped EBS volumes with details.</p>
     */
    inline Resource& WithEbsVolumeDetails(EbsVolumeDetails&& value) { SetEbsVolumeDetails(std::move(value)); return *this;}


    /**
     * <p>Contains information about the details of the ECS Cluster.</p>
     */
    inline const EcsClusterDetails& GetEcsClusterDetails() const{ return m_ecsClusterDetails; }

    /**
     * <p>Contains information about the details of the ECS Cluster.</p>
     */
    inline bool EcsClusterDetailsHasBeenSet() const { return m_ecsClusterDetailsHasBeenSet; }

    /**
     * <p>Contains information about the details of the ECS Cluster.</p>
     */
    inline void SetEcsClusterDetails(const EcsClusterDetails& value) { m_ecsClusterDetailsHasBeenSet = true; m_ecsClusterDetails = value; }

    /**
     * <p>Contains information about the details of the ECS Cluster.</p>
     */
    inline void SetEcsClusterDetails(EcsClusterDetails&& value) { m_ecsClusterDetailsHasBeenSet = true; m_ecsClusterDetails = std::move(value); }

    /**
     * <p>Contains information about the details of the ECS Cluster.</p>
     */
    inline Resource& WithEcsClusterDetails(const EcsClusterDetails& value) { SetEcsClusterDetails(value); return *this;}

    /**
     * <p>Contains information about the details of the ECS Cluster.</p>
     */
    inline Resource& WithEcsClusterDetails(EcsClusterDetails&& value) { SetEcsClusterDetails(std::move(value)); return *this;}


    
    inline const Container& GetContainerDetails() const{ return m_containerDetails; }

    
    inline bool ContainerDetailsHasBeenSet() const { return m_containerDetailsHasBeenSet; }

    
    inline void SetContainerDetails(const Container& value) { m_containerDetailsHasBeenSet = true; m_containerDetails = value; }

    
    inline void SetContainerDetails(Container&& value) { m_containerDetailsHasBeenSet = true; m_containerDetails = std::move(value); }

    
    inline Resource& WithContainerDetails(const Container& value) { SetContainerDetails(value); return *this;}

    
    inline Resource& WithContainerDetails(Container&& value) { SetContainerDetails(std::move(value)); return *this;}

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
  };

} // namespace Model
} // namespace GuardDuty
} // namespace Aws
