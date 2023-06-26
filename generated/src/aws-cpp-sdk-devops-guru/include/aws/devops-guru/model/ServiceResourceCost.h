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
    AWS_DEVOPSGURU_API ServiceResourceCost();
    AWS_DEVOPSGURU_API ServiceResourceCost(Aws::Utils::Json::JsonView jsonValue);
    AWS_DEVOPSGURU_API ServiceResourceCost& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DEVOPSGURU_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The type of the Amazon Web Services resource.</p>
     */
    inline const Aws::String& GetType() const{ return m_type; }

    /**
     * <p>The type of the Amazon Web Services resource.</p>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p>The type of the Amazon Web Services resource.</p>
     */
    inline void SetType(const Aws::String& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>The type of the Amazon Web Services resource.</p>
     */
    inline void SetType(Aws::String&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p>The type of the Amazon Web Services resource.</p>
     */
    inline void SetType(const char* value) { m_typeHasBeenSet = true; m_type.assign(value); }

    /**
     * <p>The type of the Amazon Web Services resource.</p>
     */
    inline ServiceResourceCost& WithType(const Aws::String& value) { SetType(value); return *this;}

    /**
     * <p>The type of the Amazon Web Services resource.</p>
     */
    inline ServiceResourceCost& WithType(Aws::String&& value) { SetType(std::move(value)); return *this;}

    /**
     * <p>The type of the Amazon Web Services resource.</p>
     */
    inline ServiceResourceCost& WithType(const char* value) { SetType(value); return *this;}


    /**
     * <p>The state of the resource. The resource is <code>ACTIVE</code> if it produces
     * metrics, events, or logs within an hour, otherwise it is <code>INACTIVE</code>.
     * You pay for the number of active Amazon Web Services resource hours analyzed for
     * each resource. Inactive resources are not charged. </p>
     */
    inline const CostEstimationServiceResourceState& GetState() const{ return m_state; }

    /**
     * <p>The state of the resource. The resource is <code>ACTIVE</code> if it produces
     * metrics, events, or logs within an hour, otherwise it is <code>INACTIVE</code>.
     * You pay for the number of active Amazon Web Services resource hours analyzed for
     * each resource. Inactive resources are not charged. </p>
     */
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }

    /**
     * <p>The state of the resource. The resource is <code>ACTIVE</code> if it produces
     * metrics, events, or logs within an hour, otherwise it is <code>INACTIVE</code>.
     * You pay for the number of active Amazon Web Services resource hours analyzed for
     * each resource. Inactive resources are not charged. </p>
     */
    inline void SetState(const CostEstimationServiceResourceState& value) { m_stateHasBeenSet = true; m_state = value; }

    /**
     * <p>The state of the resource. The resource is <code>ACTIVE</code> if it produces
     * metrics, events, or logs within an hour, otherwise it is <code>INACTIVE</code>.
     * You pay for the number of active Amazon Web Services resource hours analyzed for
     * each resource. Inactive resources are not charged. </p>
     */
    inline void SetState(CostEstimationServiceResourceState&& value) { m_stateHasBeenSet = true; m_state = std::move(value); }

    /**
     * <p>The state of the resource. The resource is <code>ACTIVE</code> if it produces
     * metrics, events, or logs within an hour, otherwise it is <code>INACTIVE</code>.
     * You pay for the number of active Amazon Web Services resource hours analyzed for
     * each resource. Inactive resources are not charged. </p>
     */
    inline ServiceResourceCost& WithState(const CostEstimationServiceResourceState& value) { SetState(value); return *this;}

    /**
     * <p>The state of the resource. The resource is <code>ACTIVE</code> if it produces
     * metrics, events, or logs within an hour, otherwise it is <code>INACTIVE</code>.
     * You pay for the number of active Amazon Web Services resource hours analyzed for
     * each resource. Inactive resources are not charged. </p>
     */
    inline ServiceResourceCost& WithState(CostEstimationServiceResourceState&& value) { SetState(std::move(value)); return *this;}


    /**
     * <p>The number of active resources analyzed for this service to create a monthly
     * cost estimate.</p>
     */
    inline int GetCount() const{ return m_count; }

    /**
     * <p>The number of active resources analyzed for this service to create a monthly
     * cost estimate.</p>
     */
    inline bool CountHasBeenSet() const { return m_countHasBeenSet; }

    /**
     * <p>The number of active resources analyzed for this service to create a monthly
     * cost estimate.</p>
     */
    inline void SetCount(int value) { m_countHasBeenSet = true; m_count = value; }

    /**
     * <p>The number of active resources analyzed for this service to create a monthly
     * cost estimate.</p>
     */
    inline ServiceResourceCost& WithCount(int value) { SetCount(value); return *this;}


    /**
     * <p>The price per hour to analyze the resources in the service. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/devops-guru/latest/userguide/cost-estimate.html">Estimate
     * your Amazon DevOps Guru costs</a> and <a
     * href="http://aws.amazon.com/devops-guru/pricing/">Amazon DevOps Guru
     * pricing</a>.</p>
     */
    inline double GetUnitCost() const{ return m_unitCost; }

    /**
     * <p>The price per hour to analyze the resources in the service. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/devops-guru/latest/userguide/cost-estimate.html">Estimate
     * your Amazon DevOps Guru costs</a> and <a
     * href="http://aws.amazon.com/devops-guru/pricing/">Amazon DevOps Guru
     * pricing</a>.</p>
     */
    inline bool UnitCostHasBeenSet() const { return m_unitCostHasBeenSet; }

    /**
     * <p>The price per hour to analyze the resources in the service. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/devops-guru/latest/userguide/cost-estimate.html">Estimate
     * your Amazon DevOps Guru costs</a> and <a
     * href="http://aws.amazon.com/devops-guru/pricing/">Amazon DevOps Guru
     * pricing</a>.</p>
     */
    inline void SetUnitCost(double value) { m_unitCostHasBeenSet = true; m_unitCost = value; }

    /**
     * <p>The price per hour to analyze the resources in the service. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/devops-guru/latest/userguide/cost-estimate.html">Estimate
     * your Amazon DevOps Guru costs</a> and <a
     * href="http://aws.amazon.com/devops-guru/pricing/">Amazon DevOps Guru
     * pricing</a>.</p>
     */
    inline ServiceResourceCost& WithUnitCost(double value) { SetUnitCost(value); return *this;}


    /**
     * <p>The total estimated monthly cost to analyze the active resources for this
     * resource.</p>
     */
    inline double GetCost() const{ return m_cost; }

    /**
     * <p>The total estimated monthly cost to analyze the active resources for this
     * resource.</p>
     */
    inline bool CostHasBeenSet() const { return m_costHasBeenSet; }

    /**
     * <p>The total estimated monthly cost to analyze the active resources for this
     * resource.</p>
     */
    inline void SetCost(double value) { m_costHasBeenSet = true; m_cost = value; }

    /**
     * <p>The total estimated monthly cost to analyze the active resources for this
     * resource.</p>
     */
    inline ServiceResourceCost& WithCost(double value) { SetCost(value); return *this;}

  private:

    Aws::String m_type;
    bool m_typeHasBeenSet = false;

    CostEstimationServiceResourceState m_state;
    bool m_stateHasBeenSet = false;

    int m_count;
    bool m_countHasBeenSet = false;

    double m_unitCost;
    bool m_unitCostHasBeenSet = false;

    double m_cost;
    bool m_costHasBeenSet = false;
  };

} // namespace Model
} // namespace DevOpsGuru
} // namespace Aws
