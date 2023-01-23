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
    AWS_COSTEXPLORER_API SavingsPlansAmortizedCommitment();
    AWS_COSTEXPLORER_API SavingsPlansAmortizedCommitment(Aws::Utils::Json::JsonView jsonValue);
    AWS_COSTEXPLORER_API SavingsPlansAmortizedCommitment& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_COSTEXPLORER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The amortized amount of your Savings Plans commitment that was purchased with
     * either a <code>Partial</code> or a <code>NoUpfront</code>.</p>
     */
    inline const Aws::String& GetAmortizedRecurringCommitment() const{ return m_amortizedRecurringCommitment; }

    /**
     * <p>The amortized amount of your Savings Plans commitment that was purchased with
     * either a <code>Partial</code> or a <code>NoUpfront</code>.</p>
     */
    inline bool AmortizedRecurringCommitmentHasBeenSet() const { return m_amortizedRecurringCommitmentHasBeenSet; }

    /**
     * <p>The amortized amount of your Savings Plans commitment that was purchased with
     * either a <code>Partial</code> or a <code>NoUpfront</code>.</p>
     */
    inline void SetAmortizedRecurringCommitment(const Aws::String& value) { m_amortizedRecurringCommitmentHasBeenSet = true; m_amortizedRecurringCommitment = value; }

    /**
     * <p>The amortized amount of your Savings Plans commitment that was purchased with
     * either a <code>Partial</code> or a <code>NoUpfront</code>.</p>
     */
    inline void SetAmortizedRecurringCommitment(Aws::String&& value) { m_amortizedRecurringCommitmentHasBeenSet = true; m_amortizedRecurringCommitment = std::move(value); }

    /**
     * <p>The amortized amount of your Savings Plans commitment that was purchased with
     * either a <code>Partial</code> or a <code>NoUpfront</code>.</p>
     */
    inline void SetAmortizedRecurringCommitment(const char* value) { m_amortizedRecurringCommitmentHasBeenSet = true; m_amortizedRecurringCommitment.assign(value); }

    /**
     * <p>The amortized amount of your Savings Plans commitment that was purchased with
     * either a <code>Partial</code> or a <code>NoUpfront</code>.</p>
     */
    inline SavingsPlansAmortizedCommitment& WithAmortizedRecurringCommitment(const Aws::String& value) { SetAmortizedRecurringCommitment(value); return *this;}

    /**
     * <p>The amortized amount of your Savings Plans commitment that was purchased with
     * either a <code>Partial</code> or a <code>NoUpfront</code>.</p>
     */
    inline SavingsPlansAmortizedCommitment& WithAmortizedRecurringCommitment(Aws::String&& value) { SetAmortizedRecurringCommitment(std::move(value)); return *this;}

    /**
     * <p>The amortized amount of your Savings Plans commitment that was purchased with
     * either a <code>Partial</code> or a <code>NoUpfront</code>.</p>
     */
    inline SavingsPlansAmortizedCommitment& WithAmortizedRecurringCommitment(const char* value) { SetAmortizedRecurringCommitment(value); return *this;}


    /**
     * <p>The amortized amount of your Savings Plans commitment that was purchased with
     * an <code>Upfront</code> or <code>PartialUpfront</code> Savings Plans.</p>
     */
    inline const Aws::String& GetAmortizedUpfrontCommitment() const{ return m_amortizedUpfrontCommitment; }

    /**
     * <p>The amortized amount of your Savings Plans commitment that was purchased with
     * an <code>Upfront</code> or <code>PartialUpfront</code> Savings Plans.</p>
     */
    inline bool AmortizedUpfrontCommitmentHasBeenSet() const { return m_amortizedUpfrontCommitmentHasBeenSet; }

    /**
     * <p>The amortized amount of your Savings Plans commitment that was purchased with
     * an <code>Upfront</code> or <code>PartialUpfront</code> Savings Plans.</p>
     */
    inline void SetAmortizedUpfrontCommitment(const Aws::String& value) { m_amortizedUpfrontCommitmentHasBeenSet = true; m_amortizedUpfrontCommitment = value; }

    /**
     * <p>The amortized amount of your Savings Plans commitment that was purchased with
     * an <code>Upfront</code> or <code>PartialUpfront</code> Savings Plans.</p>
     */
    inline void SetAmortizedUpfrontCommitment(Aws::String&& value) { m_amortizedUpfrontCommitmentHasBeenSet = true; m_amortizedUpfrontCommitment = std::move(value); }

    /**
     * <p>The amortized amount of your Savings Plans commitment that was purchased with
     * an <code>Upfront</code> or <code>PartialUpfront</code> Savings Plans.</p>
     */
    inline void SetAmortizedUpfrontCommitment(const char* value) { m_amortizedUpfrontCommitmentHasBeenSet = true; m_amortizedUpfrontCommitment.assign(value); }

    /**
     * <p>The amortized amount of your Savings Plans commitment that was purchased with
     * an <code>Upfront</code> or <code>PartialUpfront</code> Savings Plans.</p>
     */
    inline SavingsPlansAmortizedCommitment& WithAmortizedUpfrontCommitment(const Aws::String& value) { SetAmortizedUpfrontCommitment(value); return *this;}

    /**
     * <p>The amortized amount of your Savings Plans commitment that was purchased with
     * an <code>Upfront</code> or <code>PartialUpfront</code> Savings Plans.</p>
     */
    inline SavingsPlansAmortizedCommitment& WithAmortizedUpfrontCommitment(Aws::String&& value) { SetAmortizedUpfrontCommitment(std::move(value)); return *this;}

    /**
     * <p>The amortized amount of your Savings Plans commitment that was purchased with
     * an <code>Upfront</code> or <code>PartialUpfront</code> Savings Plans.</p>
     */
    inline SavingsPlansAmortizedCommitment& WithAmortizedUpfrontCommitment(const char* value) { SetAmortizedUpfrontCommitment(value); return *this;}


    /**
     * <p>The total amortized amount of your Savings Plans commitment, regardless of
     * your Savings Plans purchase method. </p>
     */
    inline const Aws::String& GetTotalAmortizedCommitment() const{ return m_totalAmortizedCommitment; }

    /**
     * <p>The total amortized amount of your Savings Plans commitment, regardless of
     * your Savings Plans purchase method. </p>
     */
    inline bool TotalAmortizedCommitmentHasBeenSet() const { return m_totalAmortizedCommitmentHasBeenSet; }

    /**
     * <p>The total amortized amount of your Savings Plans commitment, regardless of
     * your Savings Plans purchase method. </p>
     */
    inline void SetTotalAmortizedCommitment(const Aws::String& value) { m_totalAmortizedCommitmentHasBeenSet = true; m_totalAmortizedCommitment = value; }

    /**
     * <p>The total amortized amount of your Savings Plans commitment, regardless of
     * your Savings Plans purchase method. </p>
     */
    inline void SetTotalAmortizedCommitment(Aws::String&& value) { m_totalAmortizedCommitmentHasBeenSet = true; m_totalAmortizedCommitment = std::move(value); }

    /**
     * <p>The total amortized amount of your Savings Plans commitment, regardless of
     * your Savings Plans purchase method. </p>
     */
    inline void SetTotalAmortizedCommitment(const char* value) { m_totalAmortizedCommitmentHasBeenSet = true; m_totalAmortizedCommitment.assign(value); }

    /**
     * <p>The total amortized amount of your Savings Plans commitment, regardless of
     * your Savings Plans purchase method. </p>
     */
    inline SavingsPlansAmortizedCommitment& WithTotalAmortizedCommitment(const Aws::String& value) { SetTotalAmortizedCommitment(value); return *this;}

    /**
     * <p>The total amortized amount of your Savings Plans commitment, regardless of
     * your Savings Plans purchase method. </p>
     */
    inline SavingsPlansAmortizedCommitment& WithTotalAmortizedCommitment(Aws::String&& value) { SetTotalAmortizedCommitment(std::move(value)); return *this;}

    /**
     * <p>The total amortized amount of your Savings Plans commitment, regardless of
     * your Savings Plans purchase method. </p>
     */
    inline SavingsPlansAmortizedCommitment& WithTotalAmortizedCommitment(const char* value) { SetTotalAmortizedCommitment(value); return *this;}

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
