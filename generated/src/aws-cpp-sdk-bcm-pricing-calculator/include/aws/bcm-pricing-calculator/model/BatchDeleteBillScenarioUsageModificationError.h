﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bcm-pricing-calculator/BCMPricingCalculator_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/bcm-pricing-calculator/model/BatchDeleteBillScenarioUsageModificationErrorCode.h>
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
namespace BCMPricingCalculator
{
namespace Model
{

  /**
   * <p> Represents an error that occurred when deleting usage in a Bill Scenario.
   * </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bcm-pricing-calculator-2024-06-19/BatchDeleteBillScenarioUsageModificationError">AWS
   * API Reference</a></p>
   */
  class BatchDeleteBillScenarioUsageModificationError
  {
  public:
    AWS_BCMPRICINGCALCULATOR_API BatchDeleteBillScenarioUsageModificationError();
    AWS_BCMPRICINGCALCULATOR_API BatchDeleteBillScenarioUsageModificationError(Aws::Utils::Json::JsonView jsonValue);
    AWS_BCMPRICINGCALCULATOR_API BatchDeleteBillScenarioUsageModificationError& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BCMPRICINGCALCULATOR_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> The ID of the error. </p>
     */
    inline const Aws::String& GetId() const{ return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }
    inline BatchDeleteBillScenarioUsageModificationError& WithId(const Aws::String& value) { SetId(value); return *this;}
    inline BatchDeleteBillScenarioUsageModificationError& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}
    inline BatchDeleteBillScenarioUsageModificationError& WithId(const char* value) { SetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The message that describes the error. </p>
     */
    inline const Aws::String& GetErrorMessage() const{ return m_errorMessage; }
    inline bool ErrorMessageHasBeenSet() const { return m_errorMessageHasBeenSet; }
    inline void SetErrorMessage(const Aws::String& value) { m_errorMessageHasBeenSet = true; m_errorMessage = value; }
    inline void SetErrorMessage(Aws::String&& value) { m_errorMessageHasBeenSet = true; m_errorMessage = std::move(value); }
    inline void SetErrorMessage(const char* value) { m_errorMessageHasBeenSet = true; m_errorMessage.assign(value); }
    inline BatchDeleteBillScenarioUsageModificationError& WithErrorMessage(const Aws::String& value) { SetErrorMessage(value); return *this;}
    inline BatchDeleteBillScenarioUsageModificationError& WithErrorMessage(Aws::String&& value) { SetErrorMessage(std::move(value)); return *this;}
    inline BatchDeleteBillScenarioUsageModificationError& WithErrorMessage(const char* value) { SetErrorMessage(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The code associated with the error. </p>
     */
    inline const BatchDeleteBillScenarioUsageModificationErrorCode& GetErrorCode() const{ return m_errorCode; }
    inline bool ErrorCodeHasBeenSet() const { return m_errorCodeHasBeenSet; }
    inline void SetErrorCode(const BatchDeleteBillScenarioUsageModificationErrorCode& value) { m_errorCodeHasBeenSet = true; m_errorCode = value; }
    inline void SetErrorCode(BatchDeleteBillScenarioUsageModificationErrorCode&& value) { m_errorCodeHasBeenSet = true; m_errorCode = std::move(value); }
    inline BatchDeleteBillScenarioUsageModificationError& WithErrorCode(const BatchDeleteBillScenarioUsageModificationErrorCode& value) { SetErrorCode(value); return *this;}
    inline BatchDeleteBillScenarioUsageModificationError& WithErrorCode(BatchDeleteBillScenarioUsageModificationErrorCode&& value) { SetErrorCode(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_errorMessage;
    bool m_errorMessageHasBeenSet = false;

    BatchDeleteBillScenarioUsageModificationErrorCode m_errorCode;
    bool m_errorCodeHasBeenSet = false;
  };

} // namespace Model
} // namespace BCMPricingCalculator
} // namespace Aws
