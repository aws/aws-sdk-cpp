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


    ///@{
    /**
     * <p>EKS cluster details involved in the coverage statistics.</p>
     */
    inline const CoverageEksClusterDetails& GetEksClusterDetails() const{ return m_eksClusterDetails; }
    inline bool EksClusterDetailsHasBeenSet() const { return m_eksClusterDetailsHasBeenSet; }
    inline void SetEksClusterDetails(const CoverageEksClusterDetails& value) { m_eksClusterDetailsHasBeenSet = true; m_eksClusterDetails = value; }
    inline void SetEksClusterDetails(CoverageEksClusterDetails&& value) { m_eksClusterDetailsHasBeenSet = true; m_eksClusterDetails = std::move(value); }
    inline CoverageResourceDetails& WithEksClusterDetails(const CoverageEksClusterDetails& value) { SetEksClusterDetails(value); return *this;}
    inline CoverageResourceDetails& WithEksClusterDetails(CoverageEksClusterDetails&& value) { SetEksClusterDetails(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of Amazon Web Services resource.</p>
     */
    inline const ResourceType& GetResourceType() const{ return m_resourceType; }
    inline bool ResourceTypeHasBeenSet() const { return m_resourceTypeHasBeenSet; }
    inline void SetResourceType(const ResourceType& value) { m_resourceTypeHasBeenSet = true; m_resourceType = value; }
    inline void SetResourceType(ResourceType&& value) { m_resourceTypeHasBeenSet = true; m_resourceType = std::move(value); }
    inline CoverageResourceDetails& WithResourceType(const ResourceType& value) { SetResourceType(value); return *this;}
    inline CoverageResourceDetails& WithResourceType(ResourceType&& value) { SetResourceType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the Amazon ECS cluster that is assessed for runtime
     * coverage.</p>
     */
    inline const CoverageEcsClusterDetails& GetEcsClusterDetails() const{ return m_ecsClusterDetails; }
    inline bool EcsClusterDetailsHasBeenSet() const { return m_ecsClusterDetailsHasBeenSet; }
    inline void SetEcsClusterDetails(const CoverageEcsClusterDetails& value) { m_ecsClusterDetailsHasBeenSet = true; m_ecsClusterDetails = value; }
    inline void SetEcsClusterDetails(CoverageEcsClusterDetails&& value) { m_ecsClusterDetailsHasBeenSet = true; m_ecsClusterDetails = std::move(value); }
    inline CoverageResourceDetails& WithEcsClusterDetails(const CoverageEcsClusterDetails& value) { SetEcsClusterDetails(value); return *this;}
    inline CoverageResourceDetails& WithEcsClusterDetails(CoverageEcsClusterDetails&& value) { SetEcsClusterDetails(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the Amazon EC2 instance assessed for runtime coverage.</p>
     */
    inline const CoverageEc2InstanceDetails& GetEc2InstanceDetails() const{ return m_ec2InstanceDetails; }
    inline bool Ec2InstanceDetailsHasBeenSet() const { return m_ec2InstanceDetailsHasBeenSet; }
    inline void SetEc2InstanceDetails(const CoverageEc2InstanceDetails& value) { m_ec2InstanceDetailsHasBeenSet = true; m_ec2InstanceDetails = value; }
    inline void SetEc2InstanceDetails(CoverageEc2InstanceDetails&& value) { m_ec2InstanceDetailsHasBeenSet = true; m_ec2InstanceDetails = std::move(value); }
    inline CoverageResourceDetails& WithEc2InstanceDetails(const CoverageEc2InstanceDetails& value) { SetEc2InstanceDetails(value); return *this;}
    inline CoverageResourceDetails& WithEc2InstanceDetails(CoverageEc2InstanceDetails&& value) { SetEc2InstanceDetails(std::move(value)); return *this;}
    ///@}
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
