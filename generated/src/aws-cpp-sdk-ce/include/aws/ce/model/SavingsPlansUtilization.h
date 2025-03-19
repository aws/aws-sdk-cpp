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
   * <p>The measurement of how well you're using your existing Savings
   * Plans.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ce-2017-10-25/SavingsPlansUtilization">AWS
   * API Reference</a></p>
   */
  class SavingsPlansUtilization
  {
  public:
    AWS_COSTEXPLORER_API SavingsPlansUtilization() = default;
    AWS_COSTEXPLORER_API SavingsPlansUtilization(Aws::Utils::Json::JsonView jsonValue);
    AWS_COSTEXPLORER_API SavingsPlansUtilization& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_COSTEXPLORER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The total amount of Savings Plans commitment that's been purchased in an
     * account (or set of accounts).</p>
     */
    inline const Aws::String& GetTotalCommitment() const { return m_totalCommitment; }
    inline bool TotalCommitmentHasBeenSet() const { return m_totalCommitmentHasBeenSet; }
    template<typename TotalCommitmentT = Aws::String>
    void SetTotalCommitment(TotalCommitmentT&& value) { m_totalCommitmentHasBeenSet = true; m_totalCommitment = std::forward<TotalCommitmentT>(value); }
    template<typename TotalCommitmentT = Aws::String>
    SavingsPlansUtilization& WithTotalCommitment(TotalCommitmentT&& value) { SetTotalCommitment(std::forward<TotalCommitmentT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The amount of your Savings Plans commitment that was consumed from Savings
     * Plans eligible usage in a specific period.</p>
     */
    inline const Aws::String& GetUsedCommitment() const { return m_usedCommitment; }
    inline bool UsedCommitmentHasBeenSet() const { return m_usedCommitmentHasBeenSet; }
    template<typename UsedCommitmentT = Aws::String>
    void SetUsedCommitment(UsedCommitmentT&& value) { m_usedCommitmentHasBeenSet = true; m_usedCommitment = std::forward<UsedCommitmentT>(value); }
    template<typename UsedCommitmentT = Aws::String>
    SavingsPlansUtilization& WithUsedCommitment(UsedCommitmentT&& value) { SetUsedCommitment(std::forward<UsedCommitmentT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The amount of your Savings Plans commitment that wasn't consumed from Savings
     * Plans eligible usage in a specific period.</p>
     */
    inline const Aws::String& GetUnusedCommitment() const { return m_unusedCommitment; }
    inline bool UnusedCommitmentHasBeenSet() const { return m_unusedCommitmentHasBeenSet; }
    template<typename UnusedCommitmentT = Aws::String>
    void SetUnusedCommitment(UnusedCommitmentT&& value) { m_unusedCommitmentHasBeenSet = true; m_unusedCommitment = std::forward<UnusedCommitmentT>(value); }
    template<typename UnusedCommitmentT = Aws::String>
    SavingsPlansUtilization& WithUnusedCommitment(UnusedCommitmentT&& value) { SetUnusedCommitment(std::forward<UnusedCommitmentT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The amount of <code>UsedCommitment</code> divided by the
     * <code>TotalCommitment</code> for your Savings Plans.</p>
     */
    inline const Aws::String& GetUtilizationPercentage() const { return m_utilizationPercentage; }
    inline bool UtilizationPercentageHasBeenSet() const { return m_utilizationPercentageHasBeenSet; }
    template<typename UtilizationPercentageT = Aws::String>
    void SetUtilizationPercentage(UtilizationPercentageT&& value) { m_utilizationPercentageHasBeenSet = true; m_utilizationPercentage = std::forward<UtilizationPercentageT>(value); }
    template<typename UtilizationPercentageT = Aws::String>
    SavingsPlansUtilization& WithUtilizationPercentage(UtilizationPercentageT&& value) { SetUtilizationPercentage(std::forward<UtilizationPercentageT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_totalCommitment;
    bool m_totalCommitmentHasBeenSet = false;

    Aws::String m_usedCommitment;
    bool m_usedCommitmentHasBeenSet = false;

    Aws::String m_unusedCommitment;
    bool m_unusedCommitmentHasBeenSet = false;

    Aws::String m_utilizationPercentage;
    bool m_utilizationPercentageHasBeenSet = false;
  };

} // namespace Model
} // namespace CostExplorer
} // namespace Aws
