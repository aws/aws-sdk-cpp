﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/macie2/Macie2_EXPORTS.h>
#include <aws/macie2/model/Currency.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/macie2/model/UsageType.h>
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
namespace Macie2
{
namespace Model
{

  /**
   * <p>Provides aggregated data for an Amazon Macie usage metric. The value for the
   * metric reports estimated usage data for an account for the preceding 30 days or
   * the current calendar month to date, depending on the time period (timeRange)
   * specified in the request.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/macie2-2020-01-01/UsageTotal">AWS
   * API Reference</a></p>
   */
  class UsageTotal
  {
  public:
    AWS_MACIE2_API UsageTotal() = default;
    AWS_MACIE2_API UsageTotal(Aws::Utils::Json::JsonView jsonValue);
    AWS_MACIE2_API UsageTotal& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MACIE2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The type of currency that the value for the metric (estimatedCost) is
     * reported in.</p>
     */
    inline Currency GetCurrency() const { return m_currency; }
    inline bool CurrencyHasBeenSet() const { return m_currencyHasBeenSet; }
    inline void SetCurrency(Currency value) { m_currencyHasBeenSet = true; m_currency = value; }
    inline UsageTotal& WithCurrency(Currency value) { SetCurrency(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The estimated value for the metric.</p>
     */
    inline const Aws::String& GetEstimatedCost() const { return m_estimatedCost; }
    inline bool EstimatedCostHasBeenSet() const { return m_estimatedCostHasBeenSet; }
    template<typename EstimatedCostT = Aws::String>
    void SetEstimatedCost(EstimatedCostT&& value) { m_estimatedCostHasBeenSet = true; m_estimatedCost = std::forward<EstimatedCostT>(value); }
    template<typename EstimatedCostT = Aws::String>
    UsageTotal& WithEstimatedCost(EstimatedCostT&& value) { SetEstimatedCost(std::forward<EstimatedCostT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the metric. Possible values are: AUTOMATED_OBJECT_MONITORING, to
     * monitor S3 objects for automated sensitive data discovery;
     * AUTOMATED_SENSITIVE_DATA_DISCOVERY, to analyze S3 objects for automated
     * sensitive data discovery; DATA_INVENTORY_EVALUATION, to monitor S3 buckets; and,
     * SENSITIVE_DATA_DISCOVERY, to run classification jobs.</p>
     */
    inline UsageType GetType() const { return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(UsageType value) { m_typeHasBeenSet = true; m_type = value; }
    inline UsageTotal& WithType(UsageType value) { SetType(value); return *this;}
    ///@}
  private:

    Currency m_currency{Currency::NOT_SET};
    bool m_currencyHasBeenSet = false;

    Aws::String m_estimatedCost;
    bool m_estimatedCostHasBeenSet = false;

    UsageType m_type{UsageType::NOT_SET};
    bool m_typeHasBeenSet = false;
  };

} // namespace Model
} // namespace Macie2
} // namespace Aws
