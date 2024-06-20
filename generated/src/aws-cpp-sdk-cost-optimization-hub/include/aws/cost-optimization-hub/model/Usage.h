/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cost-optimization-hub/CostOptimizationHub_EXPORTS.h>
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
namespace CostOptimizationHub
{
namespace Model
{

  /**
   * <p>Details about the usage.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cost-optimization-hub-2022-07-26/Usage">AWS
   * API Reference</a></p>
   */
  class Usage
  {
  public:
    AWS_COSTOPTIMIZATIONHUB_API Usage();
    AWS_COSTOPTIMIZATIONHUB_API Usage(Aws::Utils::Json::JsonView jsonValue);
    AWS_COSTOPTIMIZATIONHUB_API Usage& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_COSTOPTIMIZATIONHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The usage type.</p>
     */
    inline const Aws::String& GetUsageType() const{ return m_usageType; }
    inline bool UsageTypeHasBeenSet() const { return m_usageTypeHasBeenSet; }
    inline void SetUsageType(const Aws::String& value) { m_usageTypeHasBeenSet = true; m_usageType = value; }
    inline void SetUsageType(Aws::String&& value) { m_usageTypeHasBeenSet = true; m_usageType = std::move(value); }
    inline void SetUsageType(const char* value) { m_usageTypeHasBeenSet = true; m_usageType.assign(value); }
    inline Usage& WithUsageType(const Aws::String& value) { SetUsageType(value); return *this;}
    inline Usage& WithUsageType(Aws::String&& value) { SetUsageType(std::move(value)); return *this;}
    inline Usage& WithUsageType(const char* value) { SetUsageType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The usage amount.</p>
     */
    inline double GetUsageAmount() const{ return m_usageAmount; }
    inline bool UsageAmountHasBeenSet() const { return m_usageAmountHasBeenSet; }
    inline void SetUsageAmount(double value) { m_usageAmountHasBeenSet = true; m_usageAmount = value; }
    inline Usage& WithUsageAmount(double value) { SetUsageAmount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The operation value.</p>
     */
    inline const Aws::String& GetOperation() const{ return m_operation; }
    inline bool OperationHasBeenSet() const { return m_operationHasBeenSet; }
    inline void SetOperation(const Aws::String& value) { m_operationHasBeenSet = true; m_operation = value; }
    inline void SetOperation(Aws::String&& value) { m_operationHasBeenSet = true; m_operation = std::move(value); }
    inline void SetOperation(const char* value) { m_operationHasBeenSet = true; m_operation.assign(value); }
    inline Usage& WithOperation(const Aws::String& value) { SetOperation(value); return *this;}
    inline Usage& WithOperation(Aws::String&& value) { SetOperation(std::move(value)); return *this;}
    inline Usage& WithOperation(const char* value) { SetOperation(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The product code.</p>
     */
    inline const Aws::String& GetProductCode() const{ return m_productCode; }
    inline bool ProductCodeHasBeenSet() const { return m_productCodeHasBeenSet; }
    inline void SetProductCode(const Aws::String& value) { m_productCodeHasBeenSet = true; m_productCode = value; }
    inline void SetProductCode(Aws::String&& value) { m_productCodeHasBeenSet = true; m_productCode = std::move(value); }
    inline void SetProductCode(const char* value) { m_productCodeHasBeenSet = true; m_productCode.assign(value); }
    inline Usage& WithProductCode(const Aws::String& value) { SetProductCode(value); return *this;}
    inline Usage& WithProductCode(Aws::String&& value) { SetProductCode(std::move(value)); return *this;}
    inline Usage& WithProductCode(const char* value) { SetProductCode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The usage unit.</p>
     */
    inline const Aws::String& GetUnit() const{ return m_unit; }
    inline bool UnitHasBeenSet() const { return m_unitHasBeenSet; }
    inline void SetUnit(const Aws::String& value) { m_unitHasBeenSet = true; m_unit = value; }
    inline void SetUnit(Aws::String&& value) { m_unitHasBeenSet = true; m_unit = std::move(value); }
    inline void SetUnit(const char* value) { m_unitHasBeenSet = true; m_unit.assign(value); }
    inline Usage& WithUnit(const Aws::String& value) { SetUnit(value); return *this;}
    inline Usage& WithUnit(Aws::String&& value) { SetUnit(std::move(value)); return *this;}
    inline Usage& WithUnit(const char* value) { SetUnit(value); return *this;}
    ///@}
  private:

    Aws::String m_usageType;
    bool m_usageTypeHasBeenSet = false;

    double m_usageAmount;
    bool m_usageAmountHasBeenSet = false;

    Aws::String m_operation;
    bool m_operationHasBeenSet = false;

    Aws::String m_productCode;
    bool m_productCodeHasBeenSet = false;

    Aws::String m_unit;
    bool m_unitHasBeenSet = false;
  };

} // namespace Model
} // namespace CostOptimizationHub
} // namespace Aws
