/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/devops-guru/DevOpsGuru_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/devops-guru/model/CostEstimationServiceResourceState.h>
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
namespace DevOpsGuru
{
namespace Model
{

  /**
   * <p>An object that contains information about the estimated monthly cost to
   * analyze an Amazon Web Services resource. For more information, see <a
   * href="https://docs.aws.amazon.com/devops-guru/latest/userguide/cost-estimate.html">Estimate
   * your Amazon DevOps Guru costs</a> and <a
   * href="http://aws.amazon.com/devops-guru/pricing/">Amazon DevOps Guru
   * pricing</a>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/devops-guru-2020-12-01/ServiceResourceCost">AWS
   * API Reference</a></p>
   */
  class ServiceResourceCost
  {
  public:
    AWS_DEVOPSGURU_API ServiceResourceCost() = default;
    AWS_DEVOPSGURU_API ServiceResourceCost(Aws::Utils::Json::JsonView jsonValue);
    AWS_DEVOPSGURU_API ServiceResourceCost& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DEVOPSGURU_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The type of the Amazon Web Services resource.</p>
     */
    inline const Aws::String& GetType() const { return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    template<typename TypeT = Aws::String>
    void SetType(TypeT&& value) { m_typeHasBeenSet = true; m_type = std::forward<TypeT>(value); }
    template<typename TypeT = Aws::String>
    ServiceResourceCost& WithType(TypeT&& value) { SetType(std::forward<TypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The state of the resource. The resource is <code>ACTIVE</code> if it produces
     * metrics, events, or logs within an hour, otherwise it is <code>INACTIVE</code>.
     * You pay for the number of active Amazon Web Services resource hours analyzed for
     * each resource. Inactive resources are not charged. </p>
     */
    inline CostEstimationServiceResourceState GetState() const { return m_state; }
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }
    inline void SetState(CostEstimationServiceResourceState value) { m_stateHasBeenSet = true; m_state = value; }
    inline ServiceResourceCost& WithState(CostEstimationServiceResourceState value) { SetState(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of active resources analyzed for this service to create a monthly
     * cost estimate.</p>
     */
    inline int GetCount() const { return m_count; }
    inline bool CountHasBeenSet() const { return m_countHasBeenSet; }
    inline void SetCount(int value) { m_countHasBeenSet = true; m_count = value; }
    inline ServiceResourceCost& WithCount(int value) { SetCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The price per hour to analyze the resources in the service. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/devops-guru/latest/userguide/cost-estimate.html">Estimate
     * your Amazon DevOps Guru costs</a> and <a
     * href="http://aws.amazon.com/devops-guru/pricing/">Amazon DevOps Guru
     * pricing</a>.</p>
     */
    inline double GetUnitCost() const { return m_unitCost; }
    inline bool UnitCostHasBeenSet() const { return m_unitCostHasBeenSet; }
    inline void SetUnitCost(double value) { m_unitCostHasBeenSet = true; m_unitCost = value; }
    inline ServiceResourceCost& WithUnitCost(double value) { SetUnitCost(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The total estimated monthly cost to analyze the active resources for this
     * resource.</p>
     */
    inline double GetCost() const { return m_cost; }
    inline bool CostHasBeenSet() const { return m_costHasBeenSet; }
    inline void SetCost(double value) { m_costHasBeenSet = true; m_cost = value; }
    inline ServiceResourceCost& WithCost(double value) { SetCost(value); return *this;}
    ///@}
  private:

    Aws::String m_type;
    bool m_typeHasBeenSet = false;

    CostEstimationServiceResourceState m_state{CostEstimationServiceResourceState::NOT_SET};
    bool m_stateHasBeenSet = false;

    int m_count{0};
    bool m_countHasBeenSet = false;

    double m_unitCost{0.0};
    bool m_unitCostHasBeenSet = false;

    double m_cost{0.0};
    bool m_costHasBeenSet = false;
  };

} // namespace Model
} // namespace DevOpsGuru
} // namespace Aws
