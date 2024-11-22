/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bcm-pricing-calculator/BCMPricingCalculator_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/bcm-pricing-calculator/model/BillInterval.h>
#include <aws/bcm-pricing-calculator/model/Expression.h>
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
   * <p> Represents historical usage data for a specific entity. </p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bcm-pricing-calculator-2024-06-19/HistoricalUsageEntity">AWS
   * API Reference</a></p>
   */
  class HistoricalUsageEntity
  {
  public:
    AWS_BCMPRICINGCALCULATOR_API HistoricalUsageEntity();
    AWS_BCMPRICINGCALCULATOR_API HistoricalUsageEntity(Aws::Utils::Json::JsonView jsonValue);
    AWS_BCMPRICINGCALCULATOR_API HistoricalUsageEntity& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BCMPRICINGCALCULATOR_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> The Amazon Web Services service code associated with the usage. </p>
     */
    inline const Aws::String& GetServiceCode() const{ return m_serviceCode; }
    inline bool ServiceCodeHasBeenSet() const { return m_serviceCodeHasBeenSet; }
    inline void SetServiceCode(const Aws::String& value) { m_serviceCodeHasBeenSet = true; m_serviceCode = value; }
    inline void SetServiceCode(Aws::String&& value) { m_serviceCodeHasBeenSet = true; m_serviceCode = std::move(value); }
    inline void SetServiceCode(const char* value) { m_serviceCodeHasBeenSet = true; m_serviceCode.assign(value); }
    inline HistoricalUsageEntity& WithServiceCode(const Aws::String& value) { SetServiceCode(value); return *this;}
    inline HistoricalUsageEntity& WithServiceCode(Aws::String&& value) { SetServiceCode(std::move(value)); return *this;}
    inline HistoricalUsageEntity& WithServiceCode(const char* value) { SetServiceCode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The type of usage. </p>
     */
    inline const Aws::String& GetUsageType() const{ return m_usageType; }
    inline bool UsageTypeHasBeenSet() const { return m_usageTypeHasBeenSet; }
    inline void SetUsageType(const Aws::String& value) { m_usageTypeHasBeenSet = true; m_usageType = value; }
    inline void SetUsageType(Aws::String&& value) { m_usageTypeHasBeenSet = true; m_usageType = std::move(value); }
    inline void SetUsageType(const char* value) { m_usageTypeHasBeenSet = true; m_usageType.assign(value); }
    inline HistoricalUsageEntity& WithUsageType(const Aws::String& value) { SetUsageType(value); return *this;}
    inline HistoricalUsageEntity& WithUsageType(Aws::String&& value) { SetUsageType(std::move(value)); return *this;}
    inline HistoricalUsageEntity& WithUsageType(const char* value) { SetUsageType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The specific operation associated with the usage. </p>
     */
    inline const Aws::String& GetOperation() const{ return m_operation; }
    inline bool OperationHasBeenSet() const { return m_operationHasBeenSet; }
    inline void SetOperation(const Aws::String& value) { m_operationHasBeenSet = true; m_operation = value; }
    inline void SetOperation(Aws::String&& value) { m_operationHasBeenSet = true; m_operation = std::move(value); }
    inline void SetOperation(const char* value) { m_operationHasBeenSet = true; m_operation.assign(value); }
    inline HistoricalUsageEntity& WithOperation(const Aws::String& value) { SetOperation(value); return *this;}
    inline HistoricalUsageEntity& WithOperation(Aws::String&& value) { SetOperation(std::move(value)); return *this;}
    inline HistoricalUsageEntity& WithOperation(const char* value) { SetOperation(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The location associated with the usage. </p>
     */
    inline const Aws::String& GetLocation() const{ return m_location; }
    inline bool LocationHasBeenSet() const { return m_locationHasBeenSet; }
    inline void SetLocation(const Aws::String& value) { m_locationHasBeenSet = true; m_location = value; }
    inline void SetLocation(Aws::String&& value) { m_locationHasBeenSet = true; m_location = std::move(value); }
    inline void SetLocation(const char* value) { m_locationHasBeenSet = true; m_location.assign(value); }
    inline HistoricalUsageEntity& WithLocation(const Aws::String& value) { SetLocation(value); return *this;}
    inline HistoricalUsageEntity& WithLocation(Aws::String&& value) { SetLocation(std::move(value)); return *this;}
    inline HistoricalUsageEntity& WithLocation(const char* value) { SetLocation(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The Amazon Web Services account ID associated with the usage. </p>
     */
    inline const Aws::String& GetUsageAccountId() const{ return m_usageAccountId; }
    inline bool UsageAccountIdHasBeenSet() const { return m_usageAccountIdHasBeenSet; }
    inline void SetUsageAccountId(const Aws::String& value) { m_usageAccountIdHasBeenSet = true; m_usageAccountId = value; }
    inline void SetUsageAccountId(Aws::String&& value) { m_usageAccountIdHasBeenSet = true; m_usageAccountId = std::move(value); }
    inline void SetUsageAccountId(const char* value) { m_usageAccountIdHasBeenSet = true; m_usageAccountId.assign(value); }
    inline HistoricalUsageEntity& WithUsageAccountId(const Aws::String& value) { SetUsageAccountId(value); return *this;}
    inline HistoricalUsageEntity& WithUsageAccountId(Aws::String&& value) { SetUsageAccountId(std::move(value)); return *this;}
    inline HistoricalUsageEntity& WithUsageAccountId(const char* value) { SetUsageAccountId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The time interval for the historical usage data. </p>
     */
    inline const BillInterval& GetBillInterval() const{ return m_billInterval; }
    inline bool BillIntervalHasBeenSet() const { return m_billIntervalHasBeenSet; }
    inline void SetBillInterval(const BillInterval& value) { m_billIntervalHasBeenSet = true; m_billInterval = value; }
    inline void SetBillInterval(BillInterval&& value) { m_billIntervalHasBeenSet = true; m_billInterval = std::move(value); }
    inline HistoricalUsageEntity& WithBillInterval(const BillInterval& value) { SetBillInterval(value); return *this;}
    inline HistoricalUsageEntity& WithBillInterval(BillInterval&& value) { SetBillInterval(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> An optional filter expression to apply to the historical usage data. </p>
     */
    inline const Expression& GetFilterExpression() const{ return m_filterExpression; }
    inline bool FilterExpressionHasBeenSet() const { return m_filterExpressionHasBeenSet; }
    inline void SetFilterExpression(const Expression& value) { m_filterExpressionHasBeenSet = true; m_filterExpression = value; }
    inline void SetFilterExpression(Expression&& value) { m_filterExpressionHasBeenSet = true; m_filterExpression = std::move(value); }
    inline HistoricalUsageEntity& WithFilterExpression(const Expression& value) { SetFilterExpression(value); return *this;}
    inline HistoricalUsageEntity& WithFilterExpression(Expression&& value) { SetFilterExpression(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_serviceCode;
    bool m_serviceCodeHasBeenSet = false;

    Aws::String m_usageType;
    bool m_usageTypeHasBeenSet = false;

    Aws::String m_operation;
    bool m_operationHasBeenSet = false;

    Aws::String m_location;
    bool m_locationHasBeenSet = false;

    Aws::String m_usageAccountId;
    bool m_usageAccountIdHasBeenSet = false;

    BillInterval m_billInterval;
    bool m_billIntervalHasBeenSet = false;

    Expression m_filterExpression;
    bool m_filterExpressionHasBeenSet = false;
  };

} // namespace Model
} // namespace BCMPricingCalculator
} // namespace Aws
