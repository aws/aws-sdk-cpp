/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/guardduty/GuardDuty_EXPORTS.h>
#include <aws/guardduty/model/CoverageEksClusterDetails.h>
#include <aws/guardduty/model/ResourceType.h>
#include <aws/guardduty/model/CoverageEcsClusterDetails.h>
#include <aws/guardduty/model/CoverageEc2InstanceDetails.h>
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
   * <p>Information about the resource for each individual EKS cluster.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/CoverageResourceDetails">AWS
   * API Reference</a></p>
   */
  class CoverageResourceDetails
  {
  public:
    AWS_GUARDDUTY_API CoverageResourceDetails();
    AWS_GUARDDUTY_API CoverageResourceDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_GUARDDUTY_API CoverageResourceDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GUARDDUTY_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>EKS cluster details involved in the coverage statistics.</p>
     */
    inline const CoverageEksClusterDetails& GetEksClusterDetails() const{ return m_eksClusterDetails; }

    /**
     * <p>EKS cluster details involved in the coverage statistics.</p>
     */
    inline bool EksClusterDetailsHasBeenSet() const { return m_eksClusterDetailsHasBeenSet; }

    /**
     * <p>EKS cluster details involved in the coverage statistics.</p>
     */
    inline void SetEksClusterDetails(const CoverageEksClusterDetails& value) { m_eksClusterDetailsHasBeenSet = true; m_eksClusterDetails = value; }

    /**
     * <p>EKS cluster details involved in the coverage statistics.</p>
     */
    inline void SetEksClusterDetails(CoverageEksClusterDetails&& value) { m_eksClusterDetailsHasBeenSet = true; m_eksClusterDetails = std::move(value); }

    /**
     * <p>EKS cluster details involved in the coverage statistics.</p>
     */
    inline CoverageResourceDetails& WithEksClusterDetails(const CoverageEksClusterDetails& value) { SetEksClusterDetails(value); return *this;}

    /**
     * <p>EKS cluster details involved in the coverage statistics.</p>
     */
    inline CoverageResourceDetails& WithEksClusterDetails(CoverageEksClusterDetails&& value) { SetEksClusterDetails(std::move(value)); return *this;}


    /**
     * <p>The type of Amazon Web Services resource.</p>
     */
    inline const ResourceType& GetResourceType() const{ return m_resourceType; }

    /**
     * <p>The type of Amazon Web Services resource.</p>
     */
    inline bool ResourceTypeHasBeenSet() const { return m_resourceTypeHasBeenSet; }

    /**
     * <p>The type of Amazon Web Services resource.</p>
     */
    inline void SetResourceType(const ResourceType& value) { m_resourceTypeHasBeenSet = true; m_resourceType = value; }

    /**
     * <p>The type of Amazon Web Services resource.</p>
     */
    inline void SetResourceType(ResourceType&& value) { m_resourceTypeHasBeenSet = true; m_resourceType = std::move(value); }

    /**
     * <p>The type of Amazon Web Services resource.</p>
     */
    inline CoverageResourceDetails& WithResourceType(const ResourceType& value) { SetResourceType(value); return *this;}

    /**
     * <p>The type of Amazon Web Services resource.</p>
     */
    inline CoverageResourceDetails& WithResourceType(ResourceType&& value) { SetResourceType(std::move(value)); return *this;}


    /**
     * <p>Information about the Amazon ECS cluster that is assessed for runtime
     * coverage.</p>
     */
    inline const CoverageEcsClusterDetails& GetEcsClusterDetails() const{ return m_ecsClusterDetails; }

    /**
     * <p>Information about the Amazon ECS cluster that is assessed for runtime
     * coverage.</p>
     */
    inline bool EcsClusterDetailsHasBeenSet() const { return m_ecsClusterDetailsHasBeenSet; }

    /**
     * <p>Information about the Amazon ECS cluster that is assessed for runtime
     * coverage.</p>
     */
    inline void SetEcsClusterDetails(const CoverageEcsClusterDetails& value) { m_ecsClusterDetailsHasBeenSet = true; m_ecsClusterDetails = value; }

    /**
     * <p>Information about the Amazon ECS cluster that is assessed for runtime
     * coverage.</p>
     */
    inline void SetEcsClusterDetails(CoverageEcsClusterDetails&& value) { m_ecsClusterDetailsHasBeenSet = true; m_ecsClusterDetails = std::move(value); }

    /**
     * <p>Information about the Amazon ECS cluster that is assessed for runtime
     * coverage.</p>
     */
    inline CoverageResourceDetails& WithEcsClusterDetails(const CoverageEcsClusterDetails& value) { SetEcsClusterDetails(value); return *this;}

    /**
     * <p>Information about the Amazon ECS cluster that is assessed for runtime
     * coverage.</p>
     */
    inline CoverageResourceDetails& WithEcsClusterDetails(CoverageEcsClusterDetails&& value) { SetEcsClusterDetails(std::move(value)); return *this;}


    /**
     *  <p>This API is also used when you use GuardDuty Runtime Monitoring for
     * your Amazon EC2 instances (currently in preview release) and is subject to
     * change. The use of this API is subject to Section 2 of the <a
     * href="http://aws.amazon.com/service-terms/">Amazon Web Services Service
     * Terms</a> ("Betas and Previews").</p>  <p>Information about the Amazon
     * EC2 instance assessed for runtime coverage.</p>
     */
    inline const CoverageEc2InstanceDetails& GetEc2InstanceDetails() const{ return m_ec2InstanceDetails; }

    /**
     *  <p>This API is also used when you use GuardDuty Runtime Monitoring for
     * your Amazon EC2 instances (currently in preview release) and is subject to
     * change. The use of this API is subject to Section 2 of the <a
     * href="http://aws.amazon.com/service-terms/">Amazon Web Services Service
     * Terms</a> ("Betas and Previews").</p>  <p>Information about the Amazon
     * EC2 instance assessed for runtime coverage.</p>
     */
    inline bool Ec2InstanceDetailsHasBeenSet() const { return m_ec2InstanceDetailsHasBeenSet; }

    /**
     *  <p>This API is also used when you use GuardDuty Runtime Monitoring for
     * your Amazon EC2 instances (currently in preview release) and is subject to
     * change. The use of this API is subject to Section 2 of the <a
     * href="http://aws.amazon.com/service-terms/">Amazon Web Services Service
     * Terms</a> ("Betas and Previews").</p>  <p>Information about the Amazon
     * EC2 instance assessed for runtime coverage.</p>
     */
    inline void SetEc2InstanceDetails(const CoverageEc2InstanceDetails& value) { m_ec2InstanceDetailsHasBeenSet = true; m_ec2InstanceDetails = value; }

    /**
     *  <p>This API is also used when you use GuardDuty Runtime Monitoring for
     * your Amazon EC2 instances (currently in preview release) and is subject to
     * change. The use of this API is subject to Section 2 of the <a
     * href="http://aws.amazon.com/service-terms/">Amazon Web Services Service
     * Terms</a> ("Betas and Previews").</p>  <p>Information about the Amazon
     * EC2 instance assessed for runtime coverage.</p>
     */
    inline void SetEc2InstanceDetails(CoverageEc2InstanceDetails&& value) { m_ec2InstanceDetailsHasBeenSet = true; m_ec2InstanceDetails = std::move(value); }

    /**
     *  <p>This API is also used when you use GuardDuty Runtime Monitoring for
     * your Amazon EC2 instances (currently in preview release) and is subject to
     * change. The use of this API is subject to Section 2 of the <a
     * href="http://aws.amazon.com/service-terms/">Amazon Web Services Service
     * Terms</a> ("Betas and Previews").</p>  <p>Information about the Amazon
     * EC2 instance assessed for runtime coverage.</p>
     */
    inline CoverageResourceDetails& WithEc2InstanceDetails(const CoverageEc2InstanceDetails& value) { SetEc2InstanceDetails(value); return *this;}

    /**
     *  <p>This API is also used when you use GuardDuty Runtime Monitoring for
     * your Amazon EC2 instances (currently in preview release) and is subject to
     * change. The use of this API is subject to Section 2 of the <a
     * href="http://aws.amazon.com/service-terms/">Amazon Web Services Service
     * Terms</a> ("Betas and Previews").</p>  <p>Information about the Amazon
     * EC2 instance assessed for runtime coverage.</p>
     */
    inline CoverageResourceDetails& WithEc2InstanceDetails(CoverageEc2InstanceDetails&& value) { SetEc2InstanceDetails(std::move(value)); return *this;}

  private:

    CoverageEksClusterDetails m_eksClusterDetails;
    bool m_eksClusterDetailsHasBeenSet = false;

    ResourceType m_resourceType;
    bool m_resourceTypeHasBeenSet = false;

    CoverageEcsClusterDetails m_ecsClusterDetails;
    bool m_ecsClusterDetailsHasBeenSet = false;

    CoverageEc2InstanceDetails m_ec2InstanceDetails;
    bool m_ec2InstanceDetailsHasBeenSet = false;
  };

} // namespace Model
} // namespace GuardDuty
} // namespace Aws
