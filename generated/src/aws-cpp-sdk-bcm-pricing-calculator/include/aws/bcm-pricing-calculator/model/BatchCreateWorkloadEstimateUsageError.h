/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bcm-pricing-calculator/BCMPricingCalculator_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/bcm-pricing-calculator/model/BatchCreateWorkloadEstimateUsageCode.h>
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
   * <p> Represents an error that occurred during a batch create operation for
   * workload estimate usage. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bcm-pricing-calculator-2024-06-19/BatchCreateWorkloadEstimateUsageError">AWS
   * API Reference</a></p>
   */
  class BatchCreateWorkloadEstimateUsageError
  {
  public:
    AWS_BCMPRICINGCALCULATOR_API BatchCreateWorkloadEstimateUsageError();
    AWS_BCMPRICINGCALCULATOR_API BatchCreateWorkloadEstimateUsageError(Aws::Utils::Json::JsonView jsonValue);
    AWS_BCMPRICINGCALCULATOR_API BatchCreateWorkloadEstimateUsageError& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BCMPRICINGCALCULATOR_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> The key of the entry that caused the error. </p>
     */
    inline const Aws::String& GetKey() const{ return m_key; }
    inline bool KeyHasBeenSet() const { return m_keyHasBeenSet; }
    inline void SetKey(const Aws::String& value) { m_keyHasBeenSet = true; m_key = value; }
    inline void SetKey(Aws::String&& value) { m_keyHasBeenSet = true; m_key = std::move(value); }
    inline void SetKey(const char* value) { m_keyHasBeenSet = true; m_key.assign(value); }
    inline BatchCreateWorkloadEstimateUsageError& WithKey(const Aws::String& value) { SetKey(value); return *this;}
    inline BatchCreateWorkloadEstimateUsageError& WithKey(Aws::String&& value) { SetKey(std::move(value)); return *this;}
    inline BatchCreateWorkloadEstimateUsageError& WithKey(const char* value) { SetKey(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The error code associated with the failed operation. </p>
     */
    inline const BatchCreateWorkloadEstimateUsageCode& GetErrorCode() const{ return m_errorCode; }
    inline bool ErrorCodeHasBeenSet() const { return m_errorCodeHasBeenSet; }
    inline void SetErrorCode(const BatchCreateWorkloadEstimateUsageCode& value) { m_errorCodeHasBeenSet = true; m_errorCode = value; }
    inline void SetErrorCode(BatchCreateWorkloadEstimateUsageCode&& value) { m_errorCodeHasBeenSet = true; m_errorCode = std::move(value); }
    inline BatchCreateWorkloadEstimateUsageError& WithErrorCode(const BatchCreateWorkloadEstimateUsageCode& value) { SetErrorCode(value); return *this;}
    inline BatchCreateWorkloadEstimateUsageError& WithErrorCode(BatchCreateWorkloadEstimateUsageCode&& value) { SetErrorCode(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> A descriptive message for the error that occurred. </p>
     */
    inline const Aws::String& GetErrorMessage() const{ return m_errorMessage; }
    inline bool ErrorMessageHasBeenSet() const { return m_errorMessageHasBeenSet; }
    inline void SetErrorMessage(const Aws::String& value) { m_errorMessageHasBeenSet = true; m_errorMessage = value; }
    inline void SetErrorMessage(Aws::String&& value) { m_errorMessageHasBeenSet = true; m_errorMessage = std::move(value); }
    inline void SetErrorMessage(const char* value) { m_errorMessageHasBeenSet = true; m_errorMessage.assign(value); }
    inline BatchCreateWorkloadEstimateUsageError& WithErrorMessage(const Aws::String& value) { SetErrorMessage(value); return *this;}
    inline BatchCreateWorkloadEstimateUsageError& WithErrorMessage(Aws::String&& value) { SetErrorMessage(std::move(value)); return *this;}
    inline BatchCreateWorkloadEstimateUsageError& WithErrorMessage(const char* value) { SetErrorMessage(value); return *this;}
    ///@}
  private:

    Aws::String m_key;
    bool m_keyHasBeenSet = false;

    BatchCreateWorkloadEstimateUsageCode m_errorCode;
    bool m_errorCodeHasBeenSet = false;

    Aws::String m_errorMessage;
    bool m_errorMessageHasBeenSet = false;
  };

} // namespace Model
} // namespace BCMPricingCalculator
} // namespace Aws
