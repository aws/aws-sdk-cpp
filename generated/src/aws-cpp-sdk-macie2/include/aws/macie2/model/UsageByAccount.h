/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/macie2/Macie2_EXPORTS.h>
#include <aws/macie2/model/Currency.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/macie2/model/ServiceLimit.h>
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
   * <p>Provides data for a specific usage metric and the corresponding quota for an
   * Amazon Macie account.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/macie2-2020-01-01/UsageByAccount">AWS
   * API Reference</a></p>
   */
  class UsageByAccount
  {
  public:
    AWS_MACIE2_API UsageByAccount();
    AWS_MACIE2_API UsageByAccount(Aws::Utils::Json::JsonView jsonValue);
    AWS_MACIE2_API UsageByAccount& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MACIE2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The type of currency that the value for the metric (estimatedCost) is
     * reported in.</p>
     */
    inline const Currency& GetCurrency() const{ return m_currency; }
    inline bool CurrencyHasBeenSet() const { return m_currencyHasBeenSet; }
    inline void SetCurrency(const Currency& value) { m_currencyHasBeenSet = true; m_currency = value; }
    inline void SetCurrency(Currency&& value) { m_currencyHasBeenSet = true; m_currency = std::move(value); }
    inline UsageByAccount& WithCurrency(const Currency& value) { SetCurrency(value); return *this;}
    inline UsageByAccount& WithCurrency(Currency&& value) { SetCurrency(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The estimated value for the metric.</p>
     */
    inline const Aws::String& GetEstimatedCost() const{ return m_estimatedCost; }
    inline bool EstimatedCostHasBeenSet() const { return m_estimatedCostHasBeenSet; }
    inline void SetEstimatedCost(const Aws::String& value) { m_estimatedCostHasBeenSet = true; m_estimatedCost = value; }
    inline void SetEstimatedCost(Aws::String&& value) { m_estimatedCostHasBeenSet = true; m_estimatedCost = std::move(value); }
    inline void SetEstimatedCost(const char* value) { m_estimatedCostHasBeenSet = true; m_estimatedCost.assign(value); }
    inline UsageByAccount& WithEstimatedCost(const Aws::String& value) { SetEstimatedCost(value); return *this;}
    inline UsageByAccount& WithEstimatedCost(Aws::String&& value) { SetEstimatedCost(std::move(value)); return *this;}
    inline UsageByAccount& WithEstimatedCost(const char* value) { SetEstimatedCost(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current value for the quota that corresponds to the metric specified by
     * the type field.</p>
     */
    inline const ServiceLimit& GetServiceLimit() const{ return m_serviceLimit; }
    inline bool ServiceLimitHasBeenSet() const { return m_serviceLimitHasBeenSet; }
    inline void SetServiceLimit(const ServiceLimit& value) { m_serviceLimitHasBeenSet = true; m_serviceLimit = value; }
    inline void SetServiceLimit(ServiceLimit&& value) { m_serviceLimitHasBeenSet = true; m_serviceLimit = std::move(value); }
    inline UsageByAccount& WithServiceLimit(const ServiceLimit& value) { SetServiceLimit(value); return *this;}
    inline UsageByAccount& WithServiceLimit(ServiceLimit&& value) { SetServiceLimit(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the metric. Possible values are: AUTOMATED_OBJECT_MONITORING, to
     * monitor S3 objects for automated sensitive data discovery;
     * AUTOMATED_SENSITIVE_DATA_DISCOVERY, to analyze S3 objects for automated
     * sensitive data discovery; DATA_INVENTORY_EVALUATION, to monitor S3 buckets; and,
     * SENSITIVE_DATA_DISCOVERY, to run classification jobs.</p>
     */
    inline const UsageType& GetType() const{ return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(const UsageType& value) { m_typeHasBeenSet = true; m_type = value; }
    inline void SetType(UsageType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }
    inline UsageByAccount& WithType(const UsageType& value) { SetType(value); return *this;}
    inline UsageByAccount& WithType(UsageType&& value) { SetType(std::move(value)); return *this;}
    ///@}
  private:

    Currency m_currency;
    bool m_currencyHasBeenSet = false;

    Aws::String m_estimatedCost;
    bool m_estimatedCostHasBeenSet = false;

    ServiceLimit m_serviceLimit;
    bool m_serviceLimitHasBeenSet = false;

    UsageType m_type;
    bool m_typeHasBeenSet = false;
  };

} // namespace Model
} // namespace Macie2
} // namespace Aws
