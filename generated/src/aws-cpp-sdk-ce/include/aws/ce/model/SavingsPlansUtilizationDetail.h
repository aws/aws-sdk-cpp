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
    AWS_COSTEXPLORER_API SavingsPlansUtilizationDetail();
    AWS_COSTEXPLORER_API SavingsPlansUtilizationDetail(Aws::Utils::Json::JsonView jsonValue);
    AWS_COSTEXPLORER_API SavingsPlansUtilizationDetail& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_COSTEXPLORER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The unique Amazon Resource Name (ARN) for a particular Savings Plan.</p>
     */
    inline const Aws::String& GetSavingsPlanArn() const{ return m_savingsPlanArn; }
    inline bool SavingsPlanArnHasBeenSet() const { return m_savingsPlanArnHasBeenSet; }
    inline void SetSavingsPlanArn(const Aws::String& value) { m_savingsPlanArnHasBeenSet = true; m_savingsPlanArn = value; }
    inline void SetSavingsPlanArn(Aws::String&& value) { m_savingsPlanArnHasBeenSet = true; m_savingsPlanArn = std::move(value); }
    inline void SetSavingsPlanArn(const char* value) { m_savingsPlanArnHasBeenSet = true; m_savingsPlanArn.assign(value); }
    inline SavingsPlansUtilizationDetail& WithSavingsPlanArn(const Aws::String& value) { SetSavingsPlanArn(value); return *this;}
    inline SavingsPlansUtilizationDetail& WithSavingsPlanArn(Aws::String&& value) { SetSavingsPlanArn(std::move(value)); return *this;}
    inline SavingsPlansUtilizationDetail& WithSavingsPlanArn(const char* value) { SetSavingsPlanArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The attribute that applies to a specific <code>Dimension</code>.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetAttributes() const{ return m_attributes; }
    inline bool AttributesHasBeenSet() const { return m_attributesHasBeenSet; }
    inline void SetAttributes(const Aws::Map<Aws::String, Aws::String>& value) { m_attributesHasBeenSet = true; m_attributes = value; }
    inline void SetAttributes(Aws::Map<Aws::String, Aws::String>&& value) { m_attributesHasBeenSet = true; m_attributes = std::move(value); }
    inline SavingsPlansUtilizationDetail& WithAttributes(const Aws::Map<Aws::String, Aws::String>& value) { SetAttributes(value); return *this;}
    inline SavingsPlansUtilizationDetail& WithAttributes(Aws::Map<Aws::String, Aws::String>&& value) { SetAttributes(std::move(value)); return *this;}
    inline SavingsPlansUtilizationDetail& AddAttributes(const Aws::String& key, const Aws::String& value) { m_attributesHasBeenSet = true; m_attributes.emplace(key, value); return *this; }
    inline SavingsPlansUtilizationDetail& AddAttributes(Aws::String&& key, const Aws::String& value) { m_attributesHasBeenSet = true; m_attributes.emplace(std::move(key), value); return *this; }
    inline SavingsPlansUtilizationDetail& AddAttributes(const Aws::String& key, Aws::String&& value) { m_attributesHasBeenSet = true; m_attributes.emplace(key, std::move(value)); return *this; }
    inline SavingsPlansUtilizationDetail& AddAttributes(Aws::String&& key, Aws::String&& value) { m_attributesHasBeenSet = true; m_attributes.emplace(std::move(key), std::move(value)); return *this; }
    inline SavingsPlansUtilizationDetail& AddAttributes(const char* key, Aws::String&& value) { m_attributesHasBeenSet = true; m_attributes.emplace(key, std::move(value)); return *this; }
    inline SavingsPlansUtilizationDetail& AddAttributes(Aws::String&& key, const char* value) { m_attributesHasBeenSet = true; m_attributes.emplace(std::move(key), value); return *this; }
    inline SavingsPlansUtilizationDetail& AddAttributes(const char* key, const char* value) { m_attributesHasBeenSet = true; m_attributes.emplace(key, value); return *this; }
    ///@}

    ///@{
    /**
     * <p>A ratio of your effectiveness of using existing Savings Plans to apply to
     * workloads that are Savings Plans eligible.</p>
     */
    inline const SavingsPlansUtilization& GetUtilization() const{ return m_utilization; }
    inline bool UtilizationHasBeenSet() const { return m_utilizationHasBeenSet; }
    inline void SetUtilization(const SavingsPlansUtilization& value) { m_utilizationHasBeenSet = true; m_utilization = value; }
    inline void SetUtilization(SavingsPlansUtilization&& value) { m_utilizationHasBeenSet = true; m_utilization = std::move(value); }
    inline SavingsPlansUtilizationDetail& WithUtilization(const SavingsPlansUtilization& value) { SetUtilization(value); return *this;}
    inline SavingsPlansUtilizationDetail& WithUtilization(SavingsPlansUtilization&& value) { SetUtilization(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The amount saved by using existing Savings Plans. Savings returns both net
     * savings from savings plans and also the <code>onDemandCostEquivalent</code> of
     * the Savings Plans when considering the utilization rate.</p>
     */
    inline const SavingsPlansSavings& GetSavings() const{ return m_savings; }
    inline bool SavingsHasBeenSet() const { return m_savingsHasBeenSet; }
    inline void SetSavings(const SavingsPlansSavings& value) { m_savingsHasBeenSet = true; m_savings = value; }
    inline void SetSavings(SavingsPlansSavings&& value) { m_savingsHasBeenSet = true; m_savings = std::move(value); }
    inline SavingsPlansUtilizationDetail& WithSavings(const SavingsPlansSavings& value) { SetSavings(value); return *this;}
    inline SavingsPlansUtilizationDetail& WithSavings(SavingsPlansSavings&& value) { SetSavings(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The total amortized commitment for a Savings Plans. Includes the sum of the
     * upfront and recurring Savings Plans fees.</p>
     */
    inline const SavingsPlansAmortizedCommitment& GetAmortizedCommitment() const{ return m_amortizedCommitment; }
    inline bool AmortizedCommitmentHasBeenSet() const { return m_amortizedCommitmentHasBeenSet; }
    inline void SetAmortizedCommitment(const SavingsPlansAmortizedCommitment& value) { m_amortizedCommitmentHasBeenSet = true; m_amortizedCommitment = value; }
    inline void SetAmortizedCommitment(SavingsPlansAmortizedCommitment&& value) { m_amortizedCommitmentHasBeenSet = true; m_amortizedCommitment = std::move(value); }
    inline SavingsPlansUtilizationDetail& WithAmortizedCommitment(const SavingsPlansAmortizedCommitment& value) { SetAmortizedCommitment(value); return *this;}
    inline SavingsPlansUtilizationDetail& WithAmortizedCommitment(SavingsPlansAmortizedCommitment&& value) { SetAmortizedCommitment(std::move(value)); return *this;}
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
