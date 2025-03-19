/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/eks/EKS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/eks/model/ControlPlanePlacementResponse.h>
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
namespace EKS
{
namespace Model
{

  /**
   * <p>An object representing the configuration of your local Amazon EKS cluster on
   * an Amazon Web Services Outpost. This API isn't available for Amazon EKS clusters
   * on the Amazon Web Services cloud.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/eks-2017-11-01/OutpostConfigResponse">AWS
   * API Reference</a></p>
   */
  class OutpostConfigResponse
  {
  public:
    AWS_EKS_API OutpostConfigResponse() = default;
    AWS_EKS_API OutpostConfigResponse(Aws::Utils::Json::JsonView jsonValue);
    AWS_EKS_API OutpostConfigResponse& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_EKS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ARN of the Outpost that you specified for use with your local Amazon EKS
     * cluster on Outposts.</p>
     */
    inline const Aws::Vector<Aws::String>& GetOutpostArns() const { return m_outpostArns; }
    inline bool OutpostArnsHasBeenSet() const { return m_outpostArnsHasBeenSet; }
    template<typename OutpostArnsT = Aws::Vector<Aws::String>>
    void SetOutpostArns(OutpostArnsT&& value) { m_outpostArnsHasBeenSet = true; m_outpostArns = std::forward<OutpostArnsT>(value); }
    template<typename OutpostArnsT = Aws::Vector<Aws::String>>
    OutpostConfigResponse& WithOutpostArns(OutpostArnsT&& value) { SetOutpostArns(std::forward<OutpostArnsT>(value)); return *this;}
    template<typename OutpostArnsT = Aws::String>
    OutpostConfigResponse& AddOutpostArns(OutpostArnsT&& value) { m_outpostArnsHasBeenSet = true; m_outpostArns.emplace_back(std::forward<OutpostArnsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The Amazon EC2 instance type used for the control plane. The instance type is
     * the same for all control plane instances.</p>
     */
    inline const Aws::String& GetControlPlaneInstanceType() const { return m_controlPlaneInstanceType; }
    inline bool ControlPlaneInstanceTypeHasBeenSet() const { return m_controlPlaneInstanceTypeHasBeenSet; }
    template<typename ControlPlaneInstanceTypeT = Aws::String>
    void SetControlPlaneInstanceType(ControlPlaneInstanceTypeT&& value) { m_controlPlaneInstanceTypeHasBeenSet = true; m_controlPlaneInstanceType = std::forward<ControlPlaneInstanceTypeT>(value); }
    template<typename ControlPlaneInstanceTypeT = Aws::String>
    OutpostConfigResponse& WithControlPlaneInstanceType(ControlPlaneInstanceTypeT&& value) { SetControlPlaneInstanceType(std::forward<ControlPlaneInstanceTypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An object representing the placement configuration for all the control plane
     * instances of your local Amazon EKS cluster on an Amazon Web Services Outpost.
     * For more information, see <a
     * href="https://docs.aws.amazon.com/eks/latest/userguide/eks-outposts-capacity-considerations.html">Capacity
     * considerations</a> in the <i>Amazon EKS User Guide</i>.</p>
     */
    inline const ControlPlanePlacementResponse& GetControlPlanePlacement() const { return m_controlPlanePlacement; }
    inline bool ControlPlanePlacementHasBeenSet() const { return m_controlPlanePlacementHasBeenSet; }
    template<typename ControlPlanePlacementT = ControlPlanePlacementResponse>
    void SetControlPlanePlacement(ControlPlanePlacementT&& value) { m_controlPlanePlacementHasBeenSet = true; m_controlPlanePlacement = std::forward<ControlPlanePlacementT>(value); }
    template<typename ControlPlanePlacementT = ControlPlanePlacementResponse>
    OutpostConfigResponse& WithControlPlanePlacement(ControlPlanePlacementT&& value) { SetControlPlanePlacement(std::forward<ControlPlanePlacementT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<Aws::String> m_outpostArns;
    bool m_outpostArnsHasBeenSet = false;

    Aws::String m_controlPlaneInstanceType;
    bool m_controlPlaneInstanceTypeHasBeenSet = false;

    ControlPlanePlacementResponse m_controlPlanePlacement;
    bool m_controlPlanePlacementHasBeenSet = false;
  };

} // namespace Model
} // namespace EKS
} // namespace Aws
