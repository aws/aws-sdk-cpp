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
    AWS_COSTEXPLORER_API SavingsPlansUtilization();
    AWS_COSTEXPLORER_API SavingsPlansUtilization(Aws::Utils::Json::JsonView jsonValue);
    AWS_COSTEXPLORER_API SavingsPlansUtilization& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_COSTEXPLORER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The total amount of Savings Plans commitment that's been purchased in an
     * account (or set of accounts).</p>
     */
    inline const Aws::String& GetTotalCommitment() const{ return m_totalCommitment; }

    /**
     * <p>The total amount of Savings Plans commitment that's been purchased in an
     * account (or set of accounts).</p>
     */
    inline bool TotalCommitmentHasBeenSet() const { return m_totalCommitmentHasBeenSet; }

    /**
     * <p>The total amount of Savings Plans commitment that's been purchased in an
     * account (or set of accounts).</p>
     */
    inline void SetTotalCommitment(const Aws::String& value) { m_totalCommitmentHasBeenSet = true; m_totalCommitment = value; }

    /**
     * <p>The total amount of Savings Plans commitment that's been purchased in an
     * account (or set of accounts).</p>
     */
    inline void SetTotalCommitment(Aws::String&& value) { m_totalCommitmentHasBeenSet = true; m_totalCommitment = std::move(value); }

    /**
     * <p>The total amount of Savings Plans commitment that's been purchased in an
     * account (or set of accounts).</p>
     */
    inline void SetTotalCommitment(const char* value) { m_totalCommitmentHasBeenSet = true; m_totalCommitment.assign(value); }

    /**
     * <p>The total amount of Savings Plans commitment that's been purchased in an
     * account (or set of accounts).</p>
     */
    inline SavingsPlansUtilization& WithTotalCommitment(const Aws::String& value) { SetTotalCommitment(value); return *this;}

    /**
     * <p>The total amount of Savings Plans commitment that's been purchased in an
     * account (or set of accounts).</p>
     */
    inline SavingsPlansUtilization& WithTotalCommitment(Aws::String&& value) { SetTotalCommitment(std::move(value)); return *this;}

    /**
     * <p>The total amount of Savings Plans commitment that's been purchased in an
     * account (or set of accounts).</p>
     */
    inline SavingsPlansUtilization& WithTotalCommitment(const char* value) { SetTotalCommitment(value); return *this;}


    /**
     * <p>The amount of your Savings Plans commitment that was consumed from Savings
     * Plans eligible usage in a specific period.</p>
     */
    inline const Aws::String& GetUsedCommitment() const{ return m_usedCommitment; }

    /**
     * <p>The amount of your Savings Plans commitment that was consumed from Savings
     * Plans eligible usage in a specific period.</p>
     */
    inline bool UsedCommitmentHasBeenSet() const { return m_usedCommitmentHasBeenSet; }

    /**
     * <p>The amount of your Savings Plans commitment that was consumed from Savings
     * Plans eligible usage in a specific period.</p>
     */
    inline void SetUsedCommitment(const Aws::String& value) { m_usedCommitmentHasBeenSet = true; m_usedCommitment = value; }

    /**
     * <p>The amount of your Savings Plans commitment that was consumed from Savings
     * Plans eligible usage in a specific period.</p>
     */
    inline void SetUsedCommitment(Aws::String&& value) { m_usedCommitmentHasBeenSet = true; m_usedCommitment = std::move(value); }

    /**
     * <p>The amount of your Savings Plans commitment that was consumed from Savings
     * Plans eligible usage in a specific period.</p>
     */
    inline void SetUsedCommitment(const char* value) { m_usedCommitmentHasBeenSet = true; m_usedCommitment.assign(value); }

    /**
     * <p>The amount of your Savings Plans commitment that was consumed from Savings
     * Plans eligible usage in a specific period.</p>
     */
    inline SavingsPlansUtilization& WithUsedCommitment(const Aws::String& value) { SetUsedCommitment(value); return *this;}

    /**
     * <p>The amount of your Savings Plans commitment that was consumed from Savings
     * Plans eligible usage in a specific period.</p>
     */
    inline SavingsPlansUtilization& WithUsedCommitment(Aws::String&& value) { SetUsedCommitment(std::move(value)); return *this;}

    /**
     * <p>The amount of your Savings Plans commitment that was consumed from Savings
     * Plans eligible usage in a specific period.</p>
     */
    inline SavingsPlansUtilization& WithUsedCommitment(const char* value) { SetUsedCommitment(value); return *this;}


    /**
     * <p>The amount of your Savings Plans commitment that wasn't consumed from Savings
     * Plans eligible usage in a specific period.</p>
     */
    inline const Aws::String& GetUnusedCommitment() const{ return m_unusedCommitment; }

    /**
     * <p>The amount of your Savings Plans commitment that wasn't consumed from Savings
     * Plans eligible usage in a specific period.</p>
     */
    inline bool UnusedCommitmentHasBeenSet() const { return m_unusedCommitmentHasBeenSet; }

    /**
     * <p>The amount of your Savings Plans commitment that wasn't consumed from Savings
     * Plans eligible usage in a specific period.</p>
     */
    inline void SetUnusedCommitment(const Aws::String& value) { m_unusedCommitmentHasBeenSet = true; m_unusedCommitment = value; }

    /**
     * <p>The amount of your Savings Plans commitment that wasn't consumed from Savings
     * Plans eligible usage in a specific period.</p>
     */
    inline void SetUnusedCommitment(Aws::String&& value) { m_unusedCommitmentHasBeenSet = true; m_unusedCommitment = std::move(value); }

    /**
     * <p>The amount of your Savings Plans commitment that wasn't consumed from Savings
     * Plans eligible usage in a specific period.</p>
     */
    inline void SetUnusedCommitment(const char* value) { m_unusedCommitmentHasBeenSet = true; m_unusedCommitment.assign(value); }

    /**
     * <p>The amount of your Savings Plans commitment that wasn't consumed from Savings
     * Plans eligible usage in a specific period.</p>
     */
    inline SavingsPlansUtilization& WithUnusedCommitment(const Aws::String& value) { SetUnusedCommitment(value); return *this;}

    /**
     * <p>The amount of your Savings Plans commitment that wasn't consumed from Savings
     * Plans eligible usage in a specific period.</p>
     */
    inline SavingsPlansUtilization& WithUnusedCommitment(Aws::String&& value) { SetUnusedCommitment(std::move(value)); return *this;}

    /**
     * <p>The amount of your Savings Plans commitment that wasn't consumed from Savings
     * Plans eligible usage in a specific period.</p>
     */
    inline SavingsPlansUtilization& WithUnusedCommitment(const char* value) { SetUnusedCommitment(value); return *this;}


    /**
     * <p>The amount of <code>UsedCommitment</code> divided by the
     * <code>TotalCommitment</code> for your Savings Plans.</p>
     */
    inline const Aws::String& GetUtilizationPercentage() const{ return m_utilizationPercentage; }

    /**
     * <p>The amount of <code>UsedCommitment</code> divided by the
     * <code>TotalCommitment</code> for your Savings Plans.</p>
     */
    inline bool UtilizationPercentageHasBeenSet() const { return m_utilizationPercentageHasBeenSet; }

    /**
     * <p>The amount of <code>UsedCommitment</code> divided by the
     * <code>TotalCommitment</code> for your Savings Plans.</p>
     */
    inline void SetUtilizationPercentage(const Aws::String& value) { m_utilizationPercentageHasBeenSet = true; m_utilizationPercentage = value; }

    /**
     * <p>The amount of <code>UsedCommitment</code> divided by the
     * <code>TotalCommitment</code> for your Savings Plans.</p>
     */
    inline void SetUtilizationPercentage(Aws::String&& value) { m_utilizationPercentageHasBeenSet = true; m_utilizationPercentage = std::move(value); }

    /**
     * <p>The amount of <code>UsedCommitment</code> divided by the
     * <code>TotalCommitment</code> for your Savings Plans.</p>
     */
    inline void SetUtilizationPercentage(const char* value) { m_utilizationPercentageHasBeenSet = true; m_utilizationPercentage.assign(value); }

    /**
     * <p>The amount of <code>UsedCommitment</code> divided by the
     * <code>TotalCommitment</code> for your Savings Plans.</p>
     */
    inline SavingsPlansUtilization& WithUtilizationPercentage(const Aws::String& value) { SetUtilizationPercentage(value); return *this;}

    /**
     * <p>The amount of <code>UsedCommitment</code> divided by the
     * <code>TotalCommitment</code> for your Savings Plans.</p>
     */
    inline SavingsPlansUtilization& WithUtilizationPercentage(Aws::String&& value) { SetUtilizationPercentage(std::move(value)); return *this;}

    /**
     * <p>The amount of <code>UsedCommitment</code> divided by the
     * <code>TotalCommitment</code> for your Savings Plans.</p>
     */
    inline SavingsPlansUtilization& WithUtilizationPercentage(const char* value) { SetUtilizationPercentage(value); return *this;}

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
