/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/freetier/FreeTier_EXPORTS.h>
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
namespace FreeTier
{
namespace Model
{

  /**
   * <p>Consists of a Amazon Web Services Free Tier offer’s metadata and your data
   * usage for the offer.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/freetier-2023-09-07/FreeTierUsage">AWS
   * API Reference</a></p>
   */
  class FreeTierUsage
  {
  public:
    AWS_FREETIER_API FreeTierUsage() = default;
    AWS_FREETIER_API FreeTierUsage(Aws::Utils::Json::JsonView jsonValue);
    AWS_FREETIER_API FreeTierUsage& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_FREETIER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the Amazon Web Services service providing the Free Tier offer.
     * For example, this can be Amazon Elastic Compute Cloud.</p>
     */
    inline const Aws::String& GetService() const { return m_service; }
    inline bool ServiceHasBeenSet() const { return m_serviceHasBeenSet; }
    template<typename ServiceT = Aws::String>
    void SetService(ServiceT&& value) { m_serviceHasBeenSet = true; m_service = std::forward<ServiceT>(value); }
    template<typename ServiceT = Aws::String>
    FreeTierUsage& WithService(ServiceT&& value) { SetService(std::forward<ServiceT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Describes <code>usageType</code> more granularly with the specific Amazon Web
     * Services service API operation. For example, this can be the
     * <code>RunInstances</code> API operation for Amazon Elastic Compute Cloud.</p>
     */
    inline const Aws::String& GetOperation() const { return m_operation; }
    inline bool OperationHasBeenSet() const { return m_operationHasBeenSet; }
    template<typename OperationT = Aws::String>
    void SetOperation(OperationT&& value) { m_operationHasBeenSet = true; m_operation = std::forward<OperationT>(value); }
    template<typename OperationT = Aws::String>
    FreeTierUsage& WithOperation(OperationT&& value) { SetOperation(std::forward<OperationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Describes the usage details of the offer. For example, this might be
     * <code>Global-BoxUsage:freetrial</code>.</p>
     */
    inline const Aws::String& GetUsageType() const { return m_usageType; }
    inline bool UsageTypeHasBeenSet() const { return m_usageTypeHasBeenSet; }
    template<typename UsageTypeT = Aws::String>
    void SetUsageType(UsageTypeT&& value) { m_usageTypeHasBeenSet = true; m_usageType = std::forward<UsageTypeT>(value); }
    template<typename UsageTypeT = Aws::String>
    FreeTierUsage& WithUsageType(UsageTypeT&& value) { SetUsageType(std::forward<UsageTypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Describes the Amazon Web Services Region for which this offer is
     * applicable</p>
     */
    inline const Aws::String& GetRegion() const { return m_region; }
    inline bool RegionHasBeenSet() const { return m_regionHasBeenSet; }
    template<typename RegionT = Aws::String>
    void SetRegion(RegionT&& value) { m_regionHasBeenSet = true; m_region = std::forward<RegionT>(value); }
    template<typename RegionT = Aws::String>
    FreeTierUsage& WithRegion(RegionT&& value) { SetRegion(std::forward<RegionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Describes the actual usage accrued month-to-day (MTD) that you've used so
     * far.</p>
     */
    inline double GetActualUsageAmount() const { return m_actualUsageAmount; }
    inline bool ActualUsageAmountHasBeenSet() const { return m_actualUsageAmountHasBeenSet; }
    inline void SetActualUsageAmount(double value) { m_actualUsageAmountHasBeenSet = true; m_actualUsageAmount = value; }
    inline FreeTierUsage& WithActualUsageAmount(double value) { SetActualUsageAmount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Describes the forecasted usage by the month that you're expected to use.</p>
     */
    inline double GetForecastedUsageAmount() const { return m_forecastedUsageAmount; }
    inline bool ForecastedUsageAmountHasBeenSet() const { return m_forecastedUsageAmountHasBeenSet; }
    inline void SetForecastedUsageAmount(double value) { m_forecastedUsageAmountHasBeenSet = true; m_forecastedUsageAmount = value; }
    inline FreeTierUsage& WithForecastedUsageAmount(double value) { SetForecastedUsageAmount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Describes the maximum usage allowed in Free Tier.</p>
     */
    inline double GetLimit() const { return m_limit; }
    inline bool LimitHasBeenSet() const { return m_limitHasBeenSet; }
    inline void SetLimit(double value) { m_limitHasBeenSet = true; m_limit = value; }
    inline FreeTierUsage& WithLimit(double value) { SetLimit(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Describes the unit of the <code>usageType</code>, such as
     * <code>Hrs</code>.</p>
     */
    inline const Aws::String& GetUnit() const { return m_unit; }
    inline bool UnitHasBeenSet() const { return m_unitHasBeenSet; }
    template<typename UnitT = Aws::String>
    void SetUnit(UnitT&& value) { m_unitHasBeenSet = true; m_unit = std::forward<UnitT>(value); }
    template<typename UnitT = Aws::String>
    FreeTierUsage& WithUnit(UnitT&& value) { SetUnit(std::forward<UnitT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the Free Tier offer.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    FreeTierUsage& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Describes the type of the Free Tier offer. For example, the offer can be
     * <code>"12 Months Free"</code>, <code>"Always Free"</code>, and <code>"Free
     * Trial"</code>.</p>
     */
    inline const Aws::String& GetFreeTierType() const { return m_freeTierType; }
    inline bool FreeTierTypeHasBeenSet() const { return m_freeTierTypeHasBeenSet; }
    template<typename FreeTierTypeT = Aws::String>
    void SetFreeTierType(FreeTierTypeT&& value) { m_freeTierTypeHasBeenSet = true; m_freeTierType = std::forward<FreeTierTypeT>(value); }
    template<typename FreeTierTypeT = Aws::String>
    FreeTierUsage& WithFreeTierType(FreeTierTypeT&& value) { SetFreeTierType(std::forward<FreeTierTypeT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_service;
    bool m_serviceHasBeenSet = false;

    Aws::String m_operation;
    bool m_operationHasBeenSet = false;

    Aws::String m_usageType;
    bool m_usageTypeHasBeenSet = false;

    Aws::String m_region;
    bool m_regionHasBeenSet = false;

    double m_actualUsageAmount{0.0};
    bool m_actualUsageAmountHasBeenSet = false;

    double m_forecastedUsageAmount{0.0};
    bool m_forecastedUsageAmountHasBeenSet = false;

    double m_limit{0.0};
    bool m_limitHasBeenSet = false;

    Aws::String m_unit;
    bool m_unitHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_freeTierType;
    bool m_freeTierTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace FreeTier
} // namespace Aws
