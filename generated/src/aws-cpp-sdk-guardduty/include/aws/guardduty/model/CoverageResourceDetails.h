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
    AWS_GUARDDUTY_API CoverageResourceDetails() = default;
    AWS_GUARDDUTY_API CoverageResourceDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_GUARDDUTY_API CoverageResourceDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GUARDDUTY_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>EKS cluster details involved in the coverage statistics.</p>
     */
    inline const CoverageEksClusterDetails& GetEksClusterDetails() const { return m_eksClusterDetails; }
    inline bool EksClusterDetailsHasBeenSet() const { return m_eksClusterDetailsHasBeenSet; }
    template<typename EksClusterDetailsT = CoverageEksClusterDetails>
    void SetEksClusterDetails(EksClusterDetailsT&& value) { m_eksClusterDetailsHasBeenSet = true; m_eksClusterDetails = std::forward<EksClusterDetailsT>(value); }
    template<typename EksClusterDetailsT = CoverageEksClusterDetails>
    CoverageResourceDetails& WithEksClusterDetails(EksClusterDetailsT&& value) { SetEksClusterDetails(std::forward<EksClusterDetailsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of Amazon Web Services resource.</p>
     */
    inline ResourceType GetResourceType() const { return m_resourceType; }
    inline bool ResourceTypeHasBeenSet() const { return m_resourceTypeHasBeenSet; }
    inline void SetResourceType(ResourceType value) { m_resourceTypeHasBeenSet = true; m_resourceType = value; }
    inline CoverageResourceDetails& WithResourceType(ResourceType value) { SetResourceType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the Amazon ECS cluster that is assessed for runtime
     * coverage.</p>
     */
    inline const CoverageEcsClusterDetails& GetEcsClusterDetails() const { return m_ecsClusterDetails; }
    inline bool EcsClusterDetailsHasBeenSet() const { return m_ecsClusterDetailsHasBeenSet; }
    template<typename EcsClusterDetailsT = CoverageEcsClusterDetails>
    void SetEcsClusterDetails(EcsClusterDetailsT&& value) { m_ecsClusterDetailsHasBeenSet = true; m_ecsClusterDetails = std::forward<EcsClusterDetailsT>(value); }
    template<typename EcsClusterDetailsT = CoverageEcsClusterDetails>
    CoverageResourceDetails& WithEcsClusterDetails(EcsClusterDetailsT&& value) { SetEcsClusterDetails(std::forward<EcsClusterDetailsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the Amazon EC2 instance assessed for runtime coverage.</p>
     */
    inline const CoverageEc2InstanceDetails& GetEc2InstanceDetails() const { return m_ec2InstanceDetails; }
    inline bool Ec2InstanceDetailsHasBeenSet() const { return m_ec2InstanceDetailsHasBeenSet; }
    template<typename Ec2InstanceDetailsT = CoverageEc2InstanceDetails>
    void SetEc2InstanceDetails(Ec2InstanceDetailsT&& value) { m_ec2InstanceDetailsHasBeenSet = true; m_ec2InstanceDetails = std::forward<Ec2InstanceDetailsT>(value); }
    template<typename Ec2InstanceDetailsT = CoverageEc2InstanceDetails>
    CoverageResourceDetails& WithEc2InstanceDetails(Ec2InstanceDetailsT&& value) { SetEc2InstanceDetails(std::forward<Ec2InstanceDetailsT>(value)); return *this;}
    ///@}
  private:

    CoverageEksClusterDetails m_eksClusterDetails;
    bool m_eksClusterDetailsHasBeenSet = false;

    ResourceType m_resourceType{ResourceType::NOT_SET};
    bool m_resourceTypeHasBeenSet = false;

    CoverageEcsClusterDetails m_ecsClusterDetails;
    bool m_ecsClusterDetailsHasBeenSet = false;

    CoverageEc2InstanceDetails m_ec2InstanceDetails;
    bool m_ec2InstanceDetailsHasBeenSet = false;
  };

} // namespace Model
} // namespace GuardDuty
} // namespace Aws
