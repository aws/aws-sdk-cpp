/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ce/CostExplorer_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
   * <p>The amortized amount of Savings Plans purchased in a specific account during
   * a specific time interval.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ce-2017-10-25/SavingsPlansAmortizedCommitment">AWS
   * API Reference</a></p>
   */
  class SavingsPlansAmortizedCommitment
  {
  public:
    AWS_COSTEXPLORER_API SavingsPlansAmortizedCommitment() = default;
    AWS_COSTEXPLORER_API SavingsPlansAmortizedCommitment(Aws::Utils::Json::JsonView jsonValue);
    AWS_COSTEXPLORER_API SavingsPlansAmortizedCommitment& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_COSTEXPLORER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The amortized amount of your Savings Plans commitment that was purchased with
     * either a <code>Partial</code> or a <code>NoUpfront</code>.</p>
     */
    inline const Aws::String& GetAmortizedRecurringCommitment() const { return m_amortizedRecurringCommitment; }
    inline bool AmortizedRecurringCommitmentHasBeenSet() const { return m_amortizedRecurringCommitmentHasBeenSet; }
    template<typename AmortizedRecurringCommitmentT = Aws::String>
    void SetAmortizedRecurringCommitment(AmortizedRecurringCommitmentT&& value) { m_amortizedRecurringCommitmentHasBeenSet = true; m_amortizedRecurringCommitment = std::forward<AmortizedRecurringCommitmentT>(value); }
    template<typename AmortizedRecurringCommitmentT = Aws::String>
    SavingsPlansAmortizedCommitment& WithAmortizedRecurringCommitment(AmortizedRecurringCommitmentT&& value) { SetAmortizedRecurringCommitment(std::forward<AmortizedRecurringCommitmentT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The amortized amount of your Savings Plans commitment that was purchased with
     * an <code>Upfront</code> or <code>PartialUpfront</code> Savings Plans.</p>
     */
    inline const Aws::String& GetAmortizedUpfrontCommitment() const { return m_amortizedUpfrontCommitment; }
    inline bool AmortizedUpfrontCommitmentHasBeenSet() const { return m_amortizedUpfrontCommitmentHasBeenSet; }
    template<typename AmortizedUpfrontCommitmentT = Aws::String>
    void SetAmortizedUpfrontCommitment(AmortizedUpfrontCommitmentT&& value) { m_amortizedUpfrontCommitmentHasBeenSet = true; m_amortizedUpfrontCommitment = std::forward<AmortizedUpfrontCommitmentT>(value); }
    template<typename AmortizedUpfrontCommitmentT = Aws::String>
    SavingsPlansAmortizedCommitment& WithAmortizedUpfrontCommitment(AmortizedUpfrontCommitmentT&& value) { SetAmortizedUpfrontCommitment(std::forward<AmortizedUpfrontCommitmentT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The total amortized amount of your Savings Plans commitment, regardless of
     * your Savings Plans purchase method. </p>
     */
    inline const Aws::String& GetTotalAmortizedCommitment() const { return m_totalAmortizedCommitment; }
    inline bool TotalAmortizedCommitmentHasBeenSet() const { return m_totalAmortizedCommitmentHasBeenSet; }
    template<typename TotalAmortizedCommitmentT = Aws::String>
    void SetTotalAmortizedCommitment(TotalAmortizedCommitmentT&& value) { m_totalAmortizedCommitmentHasBeenSet = true; m_totalAmortizedCommitment = std::forward<TotalAmortizedCommitmentT>(value); }
    template<typename TotalAmortizedCommitmentT = Aws::String>
    SavingsPlansAmortizedCommitment& WithTotalAmortizedCommitment(TotalAmortizedCommitmentT&& value) { SetTotalAmortizedCommitment(std::forward<TotalAmortizedCommitmentT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_amortizedRecurringCommitment;
    bool m_amortizedRecurringCommitmentHasBeenSet = false;

    Aws::String m_amortizedUpfrontCommitment;
    bool m_amortizedUpfrontCommitmentHasBeenSet = false;

    Aws::String m_totalAmortizedCommitment;
    bool m_totalAmortizedCommitmentHasBeenSet = false;
  };

} // namespace Model
} // namespace CostExplorer
} // namespace Aws
