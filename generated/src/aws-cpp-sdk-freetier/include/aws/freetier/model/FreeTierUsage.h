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
    AWS_FREETIER_API FreeTierUsage();
    AWS_FREETIER_API FreeTierUsage(Aws::Utils::Json::JsonView jsonValue);
    AWS_FREETIER_API FreeTierUsage& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_FREETIER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Describes the actual usage accrued month-to-day (MTD) that you've used so
     * far.</p>
     */
    inline double GetActualUsageAmount() const{ return m_actualUsageAmount; }

    /**
     * <p>Describes the actual usage accrued month-to-day (MTD) that you've used so
     * far.</p>
     */
    inline bool ActualUsageAmountHasBeenSet() const { return m_actualUsageAmountHasBeenSet; }

    /**
     * <p>Describes the actual usage accrued month-to-day (MTD) that you've used so
     * far.</p>
     */
    inline void SetActualUsageAmount(double value) { m_actualUsageAmountHasBeenSet = true; m_actualUsageAmount = value; }

    /**
     * <p>Describes the actual usage accrued month-to-day (MTD) that you've used so
     * far.</p>
     */
    inline FreeTierUsage& WithActualUsageAmount(double value) { SetActualUsageAmount(value); return *this;}


    /**
     * <p>The description of the Free Tier offer.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The description of the Free Tier offer.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>The description of the Free Tier offer.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>The description of the Free Tier offer.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>The description of the Free Tier offer.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>The description of the Free Tier offer.</p>
     */
    inline FreeTierUsage& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The description of the Free Tier offer.</p>
     */
    inline FreeTierUsage& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The description of the Free Tier offer.</p>
     */
    inline FreeTierUsage& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>Describes the forecasted usage by the month that you're expected to use.</p>
     */
    inline double GetForecastedUsageAmount() const{ return m_forecastedUsageAmount; }

    /**
     * <p>Describes the forecasted usage by the month that you're expected to use.</p>
     */
    inline bool ForecastedUsageAmountHasBeenSet() const { return m_forecastedUsageAmountHasBeenSet; }

    /**
     * <p>Describes the forecasted usage by the month that you're expected to use.</p>
     */
    inline void SetForecastedUsageAmount(double value) { m_forecastedUsageAmountHasBeenSet = true; m_forecastedUsageAmount = value; }

    /**
     * <p>Describes the forecasted usage by the month that you're expected to use.</p>
     */
    inline FreeTierUsage& WithForecastedUsageAmount(double value) { SetForecastedUsageAmount(value); return *this;}


    /**
     * <p>Describes the type of the Free Tier offer. For example, the offer can be
     * <code>"12 Months Free"</code>, <code>"Always Free"</code>, and <code>"Free
     * Trial"</code>.</p>
     */
    inline const Aws::String& GetFreeTierType() const{ return m_freeTierType; }

    /**
     * <p>Describes the type of the Free Tier offer. For example, the offer can be
     * <code>"12 Months Free"</code>, <code>"Always Free"</code>, and <code>"Free
     * Trial"</code>.</p>
     */
    inline bool FreeTierTypeHasBeenSet() const { return m_freeTierTypeHasBeenSet; }

    /**
     * <p>Describes the type of the Free Tier offer. For example, the offer can be
     * <code>"12 Months Free"</code>, <code>"Always Free"</code>, and <code>"Free
     * Trial"</code>.</p>
     */
    inline void SetFreeTierType(const Aws::String& value) { m_freeTierTypeHasBeenSet = true; m_freeTierType = value; }

    /**
     * <p>Describes the type of the Free Tier offer. For example, the offer can be
     * <code>"12 Months Free"</code>, <code>"Always Free"</code>, and <code>"Free
     * Trial"</code>.</p>
     */
    inline void SetFreeTierType(Aws::String&& value) { m_freeTierTypeHasBeenSet = true; m_freeTierType = std::move(value); }

    /**
     * <p>Describes the type of the Free Tier offer. For example, the offer can be
     * <code>"12 Months Free"</code>, <code>"Always Free"</code>, and <code>"Free
     * Trial"</code>.</p>
     */
    inline void SetFreeTierType(const char* value) { m_freeTierTypeHasBeenSet = true; m_freeTierType.assign(value); }

    /**
     * <p>Describes the type of the Free Tier offer. For example, the offer can be
     * <code>"12 Months Free"</code>, <code>"Always Free"</code>, and <code>"Free
     * Trial"</code>.</p>
     */
    inline FreeTierUsage& WithFreeTierType(const Aws::String& value) { SetFreeTierType(value); return *this;}

    /**
     * <p>Describes the type of the Free Tier offer. For example, the offer can be
     * <code>"12 Months Free"</code>, <code>"Always Free"</code>, and <code>"Free
     * Trial"</code>.</p>
     */
    inline FreeTierUsage& WithFreeTierType(Aws::String&& value) { SetFreeTierType(std::move(value)); return *this;}

    /**
     * <p>Describes the type of the Free Tier offer. For example, the offer can be
     * <code>"12 Months Free"</code>, <code>"Always Free"</code>, and <code>"Free
     * Trial"</code>.</p>
     */
    inline FreeTierUsage& WithFreeTierType(const char* value) { SetFreeTierType(value); return *this;}


    /**
     * <p>Describes the maximum usage allowed in Free Tier.</p>
     */
    inline double GetLimit() const{ return m_limit; }

    /**
     * <p>Describes the maximum usage allowed in Free Tier.</p>
     */
    inline bool LimitHasBeenSet() const { return m_limitHasBeenSet; }

    /**
     * <p>Describes the maximum usage allowed in Free Tier.</p>
     */
    inline void SetLimit(double value) { m_limitHasBeenSet = true; m_limit = value; }

    /**
     * <p>Describes the maximum usage allowed in Free Tier.</p>
     */
    inline FreeTierUsage& WithLimit(double value) { SetLimit(value); return *this;}


    /**
     * <p>Describes <code>usageType</code> more granularly with the specific Amazon Web
     * Service API operation. For example, this can be the <code>RunInstances</code>
     * API operation for Amazon Elastic Compute Cloud.</p>
     */
    inline const Aws::String& GetOperation() const{ return m_operation; }

    /**
     * <p>Describes <code>usageType</code> more granularly with the specific Amazon Web
     * Service API operation. For example, this can be the <code>RunInstances</code>
     * API operation for Amazon Elastic Compute Cloud.</p>
     */
    inline bool OperationHasBeenSet() const { return m_operationHasBeenSet; }

    /**
     * <p>Describes <code>usageType</code> more granularly with the specific Amazon Web
     * Service API operation. For example, this can be the <code>RunInstances</code>
     * API operation for Amazon Elastic Compute Cloud.</p>
     */
    inline void SetOperation(const Aws::String& value) { m_operationHasBeenSet = true; m_operation = value; }

    /**
     * <p>Describes <code>usageType</code> more granularly with the specific Amazon Web
     * Service API operation. For example, this can be the <code>RunInstances</code>
     * API operation for Amazon Elastic Compute Cloud.</p>
     */
    inline void SetOperation(Aws::String&& value) { m_operationHasBeenSet = true; m_operation = std::move(value); }

    /**
     * <p>Describes <code>usageType</code> more granularly with the specific Amazon Web
     * Service API operation. For example, this can be the <code>RunInstances</code>
     * API operation for Amazon Elastic Compute Cloud.</p>
     */
    inline void SetOperation(const char* value) { m_operationHasBeenSet = true; m_operation.assign(value); }

    /**
     * <p>Describes <code>usageType</code> more granularly with the specific Amazon Web
     * Service API operation. For example, this can be the <code>RunInstances</code>
     * API operation for Amazon Elastic Compute Cloud.</p>
     */
    inline FreeTierUsage& WithOperation(const Aws::String& value) { SetOperation(value); return *this;}

    /**
     * <p>Describes <code>usageType</code> more granularly with the specific Amazon Web
     * Service API operation. For example, this can be the <code>RunInstances</code>
     * API operation for Amazon Elastic Compute Cloud.</p>
     */
    inline FreeTierUsage& WithOperation(Aws::String&& value) { SetOperation(std::move(value)); return *this;}

    /**
     * <p>Describes <code>usageType</code> more granularly with the specific Amazon Web
     * Service API operation. For example, this can be the <code>RunInstances</code>
     * API operation for Amazon Elastic Compute Cloud.</p>
     */
    inline FreeTierUsage& WithOperation(const char* value) { SetOperation(value); return *this;}


    /**
     * <p>Describes the Amazon Web Services Region for which this offer is
     * applicable</p>
     */
    inline const Aws::String& GetRegion() const{ return m_region; }

    /**
     * <p>Describes the Amazon Web Services Region for which this offer is
     * applicable</p>
     */
    inline bool RegionHasBeenSet() const { return m_regionHasBeenSet; }

    /**
     * <p>Describes the Amazon Web Services Region for which this offer is
     * applicable</p>
     */
    inline void SetRegion(const Aws::String& value) { m_regionHasBeenSet = true; m_region = value; }

    /**
     * <p>Describes the Amazon Web Services Region for which this offer is
     * applicable</p>
     */
    inline void SetRegion(Aws::String&& value) { m_regionHasBeenSet = true; m_region = std::move(value); }

    /**
     * <p>Describes the Amazon Web Services Region for which this offer is
     * applicable</p>
     */
    inline void SetRegion(const char* value) { m_regionHasBeenSet = true; m_region.assign(value); }

    /**
     * <p>Describes the Amazon Web Services Region for which this offer is
     * applicable</p>
     */
    inline FreeTierUsage& WithRegion(const Aws::String& value) { SetRegion(value); return *this;}

    /**
     * <p>Describes the Amazon Web Services Region for which this offer is
     * applicable</p>
     */
    inline FreeTierUsage& WithRegion(Aws::String&& value) { SetRegion(std::move(value)); return *this;}

    /**
     * <p>Describes the Amazon Web Services Region for which this offer is
     * applicable</p>
     */
    inline FreeTierUsage& WithRegion(const char* value) { SetRegion(value); return *this;}


    /**
     * <p>The name of the Amazon Web Service providing the Free Tier offer. For
     * example, this can be Amazon Elastic Compute Cloud.</p>
     */
    inline const Aws::String& GetService() const{ return m_service; }

    /**
     * <p>The name of the Amazon Web Service providing the Free Tier offer. For
     * example, this can be Amazon Elastic Compute Cloud.</p>
     */
    inline bool ServiceHasBeenSet() const { return m_serviceHasBeenSet; }

    /**
     * <p>The name of the Amazon Web Service providing the Free Tier offer. For
     * example, this can be Amazon Elastic Compute Cloud.</p>
     */
    inline void SetService(const Aws::String& value) { m_serviceHasBeenSet = true; m_service = value; }

    /**
     * <p>The name of the Amazon Web Service providing the Free Tier offer. For
     * example, this can be Amazon Elastic Compute Cloud.</p>
     */
    inline void SetService(Aws::String&& value) { m_serviceHasBeenSet = true; m_service = std::move(value); }

    /**
     * <p>The name of the Amazon Web Service providing the Free Tier offer. For
     * example, this can be Amazon Elastic Compute Cloud.</p>
     */
    inline void SetService(const char* value) { m_serviceHasBeenSet = true; m_service.assign(value); }

    /**
     * <p>The name of the Amazon Web Service providing the Free Tier offer. For
     * example, this can be Amazon Elastic Compute Cloud.</p>
     */
    inline FreeTierUsage& WithService(const Aws::String& value) { SetService(value); return *this;}

    /**
     * <p>The name of the Amazon Web Service providing the Free Tier offer. For
     * example, this can be Amazon Elastic Compute Cloud.</p>
     */
    inline FreeTierUsage& WithService(Aws::String&& value) { SetService(std::move(value)); return *this;}

    /**
     * <p>The name of the Amazon Web Service providing the Free Tier offer. For
     * example, this can be Amazon Elastic Compute Cloud.</p>
     */
    inline FreeTierUsage& WithService(const char* value) { SetService(value); return *this;}


    /**
     * <p>Describes the unit of the <code>usageType</code>, such as
     * <code>Hrs</code>.</p>
     */
    inline const Aws::String& GetUnit() const{ return m_unit; }

    /**
     * <p>Describes the unit of the <code>usageType</code>, such as
     * <code>Hrs</code>.</p>
     */
    inline bool UnitHasBeenSet() const { return m_unitHasBeenSet; }

    /**
     * <p>Describes the unit of the <code>usageType</code>, such as
     * <code>Hrs</code>.</p>
     */
    inline void SetUnit(const Aws::String& value) { m_unitHasBeenSet = true; m_unit = value; }

    /**
     * <p>Describes the unit of the <code>usageType</code>, such as
     * <code>Hrs</code>.</p>
     */
    inline void SetUnit(Aws::String&& value) { m_unitHasBeenSet = true; m_unit = std::move(value); }

    /**
     * <p>Describes the unit of the <code>usageType</code>, such as
     * <code>Hrs</code>.</p>
     */
    inline void SetUnit(const char* value) { m_unitHasBeenSet = true; m_unit.assign(value); }

    /**
     * <p>Describes the unit of the <code>usageType</code>, such as
     * <code>Hrs</code>.</p>
     */
    inline FreeTierUsage& WithUnit(const Aws::String& value) { SetUnit(value); return *this;}

    /**
     * <p>Describes the unit of the <code>usageType</code>, such as
     * <code>Hrs</code>.</p>
     */
    inline FreeTierUsage& WithUnit(Aws::String&& value) { SetUnit(std::move(value)); return *this;}

    /**
     * <p>Describes the unit of the <code>usageType</code>, such as
     * <code>Hrs</code>.</p>
     */
    inline FreeTierUsage& WithUnit(const char* value) { SetUnit(value); return *this;}


    /**
     * <p>Describes the usage details of the offer. For example, this might be
     * <code>Global-BoxUsage:freetrial</code>.</p>
     */
    inline const Aws::String& GetUsageType() const{ return m_usageType; }

    /**
     * <p>Describes the usage details of the offer. For example, this might be
     * <code>Global-BoxUsage:freetrial</code>.</p>
     */
    inline bool UsageTypeHasBeenSet() const { return m_usageTypeHasBeenSet; }

    /**
     * <p>Describes the usage details of the offer. For example, this might be
     * <code>Global-BoxUsage:freetrial</code>.</p>
     */
    inline void SetUsageType(const Aws::String& value) { m_usageTypeHasBeenSet = true; m_usageType = value; }

    /**
     * <p>Describes the usage details of the offer. For example, this might be
     * <code>Global-BoxUsage:freetrial</code>.</p>
     */
    inline void SetUsageType(Aws::String&& value) { m_usageTypeHasBeenSet = true; m_usageType = std::move(value); }

    /**
     * <p>Describes the usage details of the offer. For example, this might be
     * <code>Global-BoxUsage:freetrial</code>.</p>
     */
    inline void SetUsageType(const char* value) { m_usageTypeHasBeenSet = true; m_usageType.assign(value); }

    /**
     * <p>Describes the usage details of the offer. For example, this might be
     * <code>Global-BoxUsage:freetrial</code>.</p>
     */
    inline FreeTierUsage& WithUsageType(const Aws::String& value) { SetUsageType(value); return *this;}

    /**
     * <p>Describes the usage details of the offer. For example, this might be
     * <code>Global-BoxUsage:freetrial</code>.</p>
     */
    inline FreeTierUsage& WithUsageType(Aws::String&& value) { SetUsageType(std::move(value)); return *this;}

    /**
     * <p>Describes the usage details of the offer. For example, this might be
     * <code>Global-BoxUsage:freetrial</code>.</p>
     */
    inline FreeTierUsage& WithUsageType(const char* value) { SetUsageType(value); return *this;}

  private:

    double m_actualUsageAmount;
    bool m_actualUsageAmountHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    double m_forecastedUsageAmount;
    bool m_forecastedUsageAmountHasBeenSet = false;

    Aws::String m_freeTierType;
    bool m_freeTierTypeHasBeenSet = false;

    double m_limit;
    bool m_limitHasBeenSet = false;

    Aws::String m_operation;
    bool m_operationHasBeenSet = false;

    Aws::String m_region;
    bool m_regionHasBeenSet = false;

    Aws::String m_service;
    bool m_serviceHasBeenSet = false;

    Aws::String m_unit;
    bool m_unitHasBeenSet = false;

    Aws::String m_usageType;
    bool m_usageTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace FreeTier
} // namespace Aws
