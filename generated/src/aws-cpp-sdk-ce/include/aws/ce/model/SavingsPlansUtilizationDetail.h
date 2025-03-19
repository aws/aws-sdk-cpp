/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ce/CostExplorer_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/ce/model/SavingsPlansUtilization.h>
#include <aws/ce/model/SavingsPlansSavings.h>
#include <aws/ce/model/SavingsPlansAmortizedCommitment.h>
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
namespace CostExplorer
{
namespace Model
{

  /**
   * <p>A single daily or monthly Savings Plans utilization rate and details for your
   * account. A management account in an organization have access to member accounts.
   * You can use <code>GetDimensionValues</code> to determine the possible dimension
   * values. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ce-2017-10-25/SavingsPlansUtilizationDetail">AWS
   * API Reference</a></p>
   */
  class SavingsPlansUtilizationDetail
  {
  public:
    AWS_COSTEXPLORER_API SavingsPlansUtilizationDetail() = default;
    AWS_COSTEXPLORER_API SavingsPlansUtilizationDetail(Aws::Utils::Json::JsonView jsonValue);
    AWS_COSTEXPLORER_API SavingsPlansUtilizationDetail& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_COSTEXPLORER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The unique Amazon Resource Name (ARN) for a particular Savings Plan.</p>
     */
    inline const Aws::String& GetSavingsPlanArn() const { return m_savingsPlanArn; }
    inline bool SavingsPlanArnHasBeenSet() const { return m_savingsPlanArnHasBeenSet; }
    template<typename SavingsPlanArnT = Aws::String>
    void SetSavingsPlanArn(SavingsPlanArnT&& value) { m_savingsPlanArnHasBeenSet = true; m_savingsPlanArn = std::forward<SavingsPlanArnT>(value); }
    template<typename SavingsPlanArnT = Aws::String>
    SavingsPlansUtilizationDetail& WithSavingsPlanArn(SavingsPlanArnT&& value) { SetSavingsPlanArn(std::forward<SavingsPlanArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The attribute that applies to a specific <code>Dimension</code>.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetAttributes() const { return m_attributes; }
    inline bool AttributesHasBeenSet() const { return m_attributesHasBeenSet; }
    template<typename AttributesT = Aws::Map<Aws::String, Aws::String>>
    void SetAttributes(AttributesT&& value) { m_attributesHasBeenSet = true; m_attributes = std::forward<AttributesT>(value); }
    template<typename AttributesT = Aws::Map<Aws::String, Aws::String>>
    SavingsPlansUtilizationDetail& WithAttributes(AttributesT&& value) { SetAttributes(std::forward<AttributesT>(value)); return *this;}
    template<typename AttributesKeyT = Aws::String, typename AttributesValueT = Aws::String>
    SavingsPlansUtilizationDetail& AddAttributes(AttributesKeyT&& key, AttributesValueT&& value) {
      m_attributesHasBeenSet = true; m_attributes.emplace(std::forward<AttributesKeyT>(key), std::forward<AttributesValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>A ratio of your effectiveness of using existing Savings Plans to apply to
     * workloads that are Savings Plans eligible.</p>
     */
    inline const SavingsPlansUtilization& GetUtilization() const { return m_utilization; }
    inline bool UtilizationHasBeenSet() const { return m_utilizationHasBeenSet; }
    template<typename UtilizationT = SavingsPlansUtilization>
    void SetUtilization(UtilizationT&& value) { m_utilizationHasBeenSet = true; m_utilization = std::forward<UtilizationT>(value); }
    template<typename UtilizationT = SavingsPlansUtilization>
    SavingsPlansUtilizationDetail& WithUtilization(UtilizationT&& value) { SetUtilization(std::forward<UtilizationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The amount saved by using existing Savings Plans. Savings returns both net
     * savings from savings plans and also the <code>onDemandCostEquivalent</code> of
     * the Savings Plans when considering the utilization rate.</p>
     */
    inline const SavingsPlansSavings& GetSavings() const { return m_savings; }
    inline bool SavingsHasBeenSet() const { return m_savingsHasBeenSet; }
    template<typename SavingsT = SavingsPlansSavings>
    void SetSavings(SavingsT&& value) { m_savingsHasBeenSet = true; m_savings = std::forward<SavingsT>(value); }
    template<typename SavingsT = SavingsPlansSavings>
    SavingsPlansUtilizationDetail& WithSavings(SavingsT&& value) { SetSavings(std::forward<SavingsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The total amortized commitment for a Savings Plans. Includes the sum of the
     * upfront and recurring Savings Plans fees.</p>
     */
    inline const SavingsPlansAmortizedCommitment& GetAmortizedCommitment() const { return m_amortizedCommitment; }
    inline bool AmortizedCommitmentHasBeenSet() const { return m_amortizedCommitmentHasBeenSet; }
    template<typename AmortizedCommitmentT = SavingsPlansAmortizedCommitment>
    void SetAmortizedCommitment(AmortizedCommitmentT&& value) { m_amortizedCommitmentHasBeenSet = true; m_amortizedCommitment = std::forward<AmortizedCommitmentT>(value); }
    template<typename AmortizedCommitmentT = SavingsPlansAmortizedCommitment>
    SavingsPlansUtilizationDetail& WithAmortizedCommitment(AmortizedCommitmentT&& value) { SetAmortizedCommitment(std::forward<AmortizedCommitmentT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_savingsPlanArn;
    bool m_savingsPlanArnHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_attributes;
    bool m_attributesHasBeenSet = false;

    SavingsPlansUtilization m_utilization;
    bool m_utilizationHasBeenSet = false;

    SavingsPlansSavings m_savings;
    bool m_savingsHasBeenSet = false;

    SavingsPlansAmortizedCommitment m_amortizedCommitment;
    bool m_amortizedCommitmentHasBeenSet = false;
  };

} // namespace Model
} // namespace CostExplorer
} // namespace Aws
