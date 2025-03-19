/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/guardduty/GuardDuty_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/guardduty/model/FargateDetails.h>
#include <aws/guardduty/model/ContainerInstanceDetails.h>
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
   * <p>Contains information about Amazon ECS cluster runtime coverage
   * details.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/CoverageEcsClusterDetails">AWS
   * API Reference</a></p>
   */
  class CoverageEcsClusterDetails
  {
  public:
    AWS_GUARDDUTY_API CoverageEcsClusterDetails() = default;
    AWS_GUARDDUTY_API CoverageEcsClusterDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_GUARDDUTY_API CoverageEcsClusterDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GUARDDUTY_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the Amazon ECS cluster.</p>
     */
    inline const Aws::String& GetClusterName() const { return m_clusterName; }
    inline bool ClusterNameHasBeenSet() const { return m_clusterNameHasBeenSet; }
    template<typename ClusterNameT = Aws::String>
    void SetClusterName(ClusterNameT&& value) { m_clusterNameHasBeenSet = true; m_clusterName = std::forward<ClusterNameT>(value); }
    template<typename ClusterNameT = Aws::String>
    CoverageEcsClusterDetails& WithClusterName(ClusterNameT&& value) { SetClusterName(std::forward<ClusterNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the Fargate details associated with the Amazon ECS
     * cluster.</p>
     */
    inline const FargateDetails& GetFargateDetails() const { return m_fargateDetails; }
    inline bool FargateDetailsHasBeenSet() const { return m_fargateDetailsHasBeenSet; }
    template<typename FargateDetailsT = FargateDetails>
    void SetFargateDetails(FargateDetailsT&& value) { m_fargateDetailsHasBeenSet = true; m_fargateDetails = std::forward<FargateDetailsT>(value); }
    template<typename FargateDetailsT = FargateDetails>
    CoverageEcsClusterDetails& WithFargateDetails(FargateDetailsT&& value) { SetFargateDetails(std::forward<FargateDetailsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the Amazon ECS container running on Amazon EC2
     * instance.</p>
     */
    inline const ContainerInstanceDetails& GetContainerInstanceDetails() const { return m_containerInstanceDetails; }
    inline bool ContainerInstanceDetailsHasBeenSet() const { return m_containerInstanceDetailsHasBeenSet; }
    template<typename ContainerInstanceDetailsT = ContainerInstanceDetails>
    void SetContainerInstanceDetails(ContainerInstanceDetailsT&& value) { m_containerInstanceDetailsHasBeenSet = true; m_containerInstanceDetails = std::forward<ContainerInstanceDetailsT>(value); }
    template<typename ContainerInstanceDetailsT = ContainerInstanceDetails>
    CoverageEcsClusterDetails& WithContainerInstanceDetails(ContainerInstanceDetailsT&& value) { SetContainerInstanceDetails(std::forward<ContainerInstanceDetailsT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_clusterName;
    bool m_clusterNameHasBeenSet = false;

    FargateDetails m_fargateDetails;
    bool m_fargateDetailsHasBeenSet = false;

    ContainerInstanceDetails m_containerInstanceDetails;
    bool m_containerInstanceDetailsHasBeenSet = false;
  };

} // namespace Model
} // namespace GuardDuty
} // namespace Aws
