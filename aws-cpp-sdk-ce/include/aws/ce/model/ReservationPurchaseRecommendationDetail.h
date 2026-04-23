/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/ce/CostExplorer_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ce/model/InstanceDetails.h>
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
   * <p>Details about your recommended reservation purchase.</p><p><h3>See Also:</h3>
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ce-2017-10-25/ReservationPurchaseRecommendationDetail">AWS
   * API Reference</a></p>
   */
  class AWS_COSTEXPLORER_API ReservationPurchaseRecommendationDetail
  {
  public:
    ReservationPurchaseRecommendationDetail();
    ReservationPurchaseRecommendationDetail(Aws::Utils::Json::JsonView jsonValue);
    ReservationPurchaseRecommendationDetail& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The account that this RI recommendation is for.</p>
     */
    inline const Aws::String& GetAccountId() const{ return m_accountId; }

    /**
     * <p>The account that this RI recommendation is for.</p>
     */
    inline bool AccountIdHasBeenSet() const { return m_accountIdHasBeenSet; }

    /**
     * <p>The account that this RI recommendation is for.</p>
     */
    inline void SetAccountId(const Aws::String& value) { m_accountIdHasBeenSet = true; m_accountId = value; }

    /**
     * <p>The account that this RI recommendation is for.</p>
     */
    inline void SetAccountId(Aws::String&& value) { m_accountIdHasBeenSet = true; m_accountId = std::move(value); }

    /**
     * <p>The account that this RI recommendation is for.</p>
     */
    inline void SetAccountId(const char* value) { m_accountIdHasBeenSet = true; m_accountId.assign(value); }

    /**
     * <p>The account that this RI recommendation is for.</p>
     */
    inline ReservationPurchaseRecommendationDetail& WithAccountId(const Aws::String& value) { SetAccountId(value); return *this;}

    /**
     * <p>The account that this RI recommendation is for.</p>
     */
    inline ReservationPurchaseRecommendationDetail& WithAccountId(Aws::String&& value) { SetAccountId(std::move(value)); return *this;}

    /**
     * <p>The account that this RI recommendation is for.</p>
     */
    inline ReservationPurchaseRecommendationDetail& WithAccountId(const char* value) { SetAccountId(value); return *this;}


    /**
     * <p>Details about the instances that AWS recommends that you purchase.</p>
     */
    inline const InstanceDetails& GetInstanceDetails() const{ return m_instanceDetails; }

    /**
     * <p>Details about the instances that AWS recommends that you purchase.</p>
     */
    inline bool InstanceDetailsHasBeenSet() const { return m_instanceDetailsHasBeenSet; }

    /**
     * <p>Details about the instances that AWS recommends that you purchase.</p>
     */
    inline void SetInstanceDetails(const InstanceDetails& value) { m_instanceDetailsHasBeenSet = true; m_instanceDetails = value; }

    /**
     * <p>Details about the instances that AWS recommends that you purchase.</p>
     */
    inline void SetInstanceDetails(InstanceDetails&& value) { m_instanceDetailsHasBeenSet = true; m_instanceDetails = std::move(value); }

    /**
     * <p>Details about the instances that AWS recommends that you purchase.</p>
     */
    inline ReservationPurchaseRecommendationDetail& WithInstanceDetails(const InstanceDetails& value) { SetInstanceDetails(value); return *this;}

    /**
     * <p>Details about the instances that AWS recommends that you purchase.</p>
     */
    inline ReservationPurchaseRecommendationDetail& WithInstanceDetails(InstanceDetails&& value) { SetInstanceDetails(std::move(value)); return *this;}


    /**
     * <p>The number of instances that AWS recommends that you purchase.</p>
     */
    inline const Aws::String& GetRecommendedNumberOfInstancesToPurchase() const{ return m_recommendedNumberOfInstancesToPurchase; }

    /**
     * <p>The number of instances that AWS recommends that you purchase.</p>
     */
    inline bool RecommendedNumberOfInstancesToPurchaseHasBeenSet() const { return m_recommendedNumberOfInstancesToPurchaseHasBeenSet; }

    /**
     * <p>The number of instances that AWS recommends that you purchase.</p>
     */
    inline void SetRecommendedNumberOfInstancesToPurchase(const Aws::String& value) { m_recommendedNumberOfInstancesToPurchaseHasBeenSet = true; m_recommendedNumberOfInstancesToPurchase = value; }

    /**
     * <p>The number of instances that AWS recommends that you purchase.</p>
     */
    inline void SetRecommendedNumberOfInstancesToPurchase(Aws::String&& value) { m_recommendedNumberOfInstancesToPurchaseHasBeenSet = true; m_recommendedNumberOfInstancesToPurchase = std::move(value); }

    /**
     * <p>The number of instances that AWS recommends that you purchase.</p>
     */
    inline void SetRecommendedNumberOfInstancesToPurchase(const char* value) { m_recommendedNumberOfInstancesToPurchaseHasBeenSet = true; m_recommendedNumberOfInstancesToPurchase.assign(value); }

    /**
     * <p>The number of instances that AWS recommends that you purchase.</p>
     */
    inline ReservationPurchaseRecommendationDetail& WithRecommendedNumberOfInstancesToPurchase(const Aws::String& value) { SetRecommendedNumberOfInstancesToPurchase(value); return *this;}

    /**
     * <p>The number of instances that AWS recommends that you purchase.</p>
     */
    inline ReservationPurchaseRecommendationDetail& WithRecommendedNumberOfInstancesToPurchase(Aws::String&& value) { SetRecommendedNumberOfInstancesToPurchase(std::move(value)); return *this;}

    /**
     * <p>The number of instances that AWS recommends that you purchase.</p>
     */
    inline ReservationPurchaseRecommendationDetail& WithRecommendedNumberOfInstancesToPurchase(const char* value) { SetRecommendedNumberOfInstancesToPurchase(value); return *this;}


    /**
     * <p>The number of normalized units that AWS recommends that you purchase.</p>
     */
    inline const Aws::String& GetRecommendedNormalizedUnitsToPurchase() const{ return m_recommendedNormalizedUnitsToPurchase; }

    /**
     * <p>The number of normalized units that AWS recommends that you purchase.</p>
     */
    inline bool RecommendedNormalizedUnitsToPurchaseHasBeenSet() const { return m_recommendedNormalizedUnitsToPurchaseHasBeenSet; }

    /**
     * <p>The number of normalized units that AWS recommends that you purchase.</p>
     */
    inline void SetRecommendedNormalizedUnitsToPurchase(const Aws::String& value) { m_recommendedNormalizedUnitsToPurchaseHasBeenSet = true; m_recommendedNormalizedUnitsToPurchase = value; }

    /**
     * <p>The number of normalized units that AWS recommends that you purchase.</p>
     */
    inline void SetRecommendedNormalizedUnitsToPurchase(Aws::String&& value) { m_recommendedNormalizedUnitsToPurchaseHasBeenSet = true; m_recommendedNormalizedUnitsToPurchase = std::move(value); }

    /**
     * <p>The number of normalized units that AWS recommends that you purchase.</p>
     */
    inline void SetRecommendedNormalizedUnitsToPurchase(const char* value) { m_recommendedNormalizedUnitsToPurchaseHasBeenSet = true; m_recommendedNormalizedUnitsToPurchase.assign(value); }

    /**
     * <p>The number of normalized units that AWS recommends that you purchase.</p>
     */
    inline ReservationPurchaseRecommendationDetail& WithRecommendedNormalizedUnitsToPurchase(const Aws::String& value) { SetRecommendedNormalizedUnitsToPurchase(value); return *this;}

    /**
     * <p>The number of normalized units that AWS recommends that you purchase.</p>
     */
    inline ReservationPurchaseRecommendationDetail& WithRecommendedNormalizedUnitsToPurchase(Aws::String&& value) { SetRecommendedNormalizedUnitsToPurchase(std::move(value)); return *this;}

    /**
     * <p>The number of normalized units that AWS recommends that you purchase.</p>
     */
    inline ReservationPurchaseRecommendationDetail& WithRecommendedNormalizedUnitsToPurchase(const char* value) { SetRecommendedNormalizedUnitsToPurchase(value); return *this;}


    /**
     * <p>The minimum number of instances that you used in an hour during the
     * historical period. AWS uses this to calculate your recommended reservation
     * purchases.</p>
     */
    inline const Aws::String& GetMinimumNumberOfInstancesUsedPerHour() const{ return m_minimumNumberOfInstancesUsedPerHour; }

    /**
     * <p>The minimum number of instances that you used in an hour during the
     * historical period. AWS uses this to calculate your recommended reservation
     * purchases.</p>
     */
    inline bool MinimumNumberOfInstancesUsedPerHourHasBeenSet() const { return m_minimumNumberOfInstancesUsedPerHourHasBeenSet; }

    /**
     * <p>The minimum number of instances that you used in an hour during the
     * historical period. AWS uses this to calculate your recommended reservation
     * purchases.</p>
     */
    inline void SetMinimumNumberOfInstancesUsedPerHour(const Aws::String& value) { m_minimumNumberOfInstancesUsedPerHourHasBeenSet = true; m_minimumNumberOfInstancesUsedPerHour = value; }

    /**
     * <p>The minimum number of instances that you used in an hour during the
     * historical period. AWS uses this to calculate your recommended reservation
     * purchases.</p>
     */
    inline void SetMinimumNumberOfInstancesUsedPerHour(Aws::String&& value) { m_minimumNumberOfInstancesUsedPerHourHasBeenSet = true; m_minimumNumberOfInstancesUsedPerHour = std::move(value); }

    /**
     * <p>The minimum number of instances that you used in an hour during the
     * historical period. AWS uses this to calculate your recommended reservation
     * purchases.</p>
     */
    inline void SetMinimumNumberOfInstancesUsedPerHour(const char* value) { m_minimumNumberOfInstancesUsedPerHourHasBeenSet = true; m_minimumNumberOfInstancesUsedPerHour.assign(value); }

    /**
     * <p>The minimum number of instances that you used in an hour during the
     * historical period. AWS uses this to calculate your recommended reservation
     * purchases.</p>
     */
    inline ReservationPurchaseRecommendationDetail& WithMinimumNumberOfInstancesUsedPerHour(const Aws::String& value) { SetMinimumNumberOfInstancesUsedPerHour(value); return *this;}

    /**
     * <p>The minimum number of instances that you used in an hour during the
     * historical period. AWS uses this to calculate your recommended reservation
     * purchases.</p>
     */
    inline ReservationPurchaseRecommendationDetail& WithMinimumNumberOfInstancesUsedPerHour(Aws::String&& value) { SetMinimumNumberOfInstancesUsedPerHour(std::move(value)); return *this;}

    /**
     * <p>The minimum number of instances that you used in an hour during the
     * historical period. AWS uses this to calculate your recommended reservation
     * purchases.</p>
     */
    inline ReservationPurchaseRecommendationDetail& WithMinimumNumberOfInstancesUsedPerHour(const char* value) { SetMinimumNumberOfInstancesUsedPerHour(value); return *this;}


    /**
     * <p>The minimum number of normalized units that you used in an hour during the
     * historical period. AWS uses this to calculate your recommended reservation
     * purchases.</p>
     */
    inline const Aws::String& GetMinimumNormalizedUnitsUsedPerHour() const{ return m_minimumNormalizedUnitsUsedPerHour; }

    /**
     * <p>The minimum number of normalized units that you used in an hour during the
     * historical period. AWS uses this to calculate your recommended reservation
     * purchases.</p>
     */
    inline bool MinimumNormalizedUnitsUsedPerHourHasBeenSet() const { return m_minimumNormalizedUnitsUsedPerHourHasBeenSet; }

    /**
     * <p>The minimum number of normalized units that you used in an hour during the
     * historical period. AWS uses this to calculate your recommended reservation
     * purchases.</p>
     */
    inline void SetMinimumNormalizedUnitsUsedPerHour(const Aws::String& value) { m_minimumNormalizedUnitsUsedPerHourHasBeenSet = true; m_minimumNormalizedUnitsUsedPerHour = value; }

    /**
     * <p>The minimum number of normalized units that you used in an hour during the
     * historical period. AWS uses this to calculate your recommended reservation
     * purchases.</p>
     */
    inline void SetMinimumNormalizedUnitsUsedPerHour(Aws::String&& value) { m_minimumNormalizedUnitsUsedPerHourHasBeenSet = true; m_minimumNormalizedUnitsUsedPerHour = std::move(value); }

    /**
     * <p>The minimum number of normalized units that you used in an hour during the
     * historical period. AWS uses this to calculate your recommended reservation
     * purchases.</p>
     */
    inline void SetMinimumNormalizedUnitsUsedPerHour(const char* value) { m_minimumNormalizedUnitsUsedPerHourHasBeenSet = true; m_minimumNormalizedUnitsUsedPerHour.assign(value); }

    /**
     * <p>The minimum number of normalized units that you used in an hour during the
     * historical period. AWS uses this to calculate your recommended reservation
     * purchases.</p>
     */
    inline ReservationPurchaseRecommendationDetail& WithMinimumNormalizedUnitsUsedPerHour(const Aws::String& value) { SetMinimumNormalizedUnitsUsedPerHour(value); return *this;}

    /**
     * <p>The minimum number of normalized units that you used in an hour during the
     * historical period. AWS uses this to calculate your recommended reservation
     * purchases.</p>
     */
    inline ReservationPurchaseRecommendationDetail& WithMinimumNormalizedUnitsUsedPerHour(Aws::String&& value) { SetMinimumNormalizedUnitsUsedPerHour(std::move(value)); return *this;}

    /**
     * <p>The minimum number of normalized units that you used in an hour during the
     * historical period. AWS uses this to calculate your recommended reservation
     * purchases.</p>
     */
    inline ReservationPurchaseRecommendationDetail& WithMinimumNormalizedUnitsUsedPerHour(const char* value) { SetMinimumNormalizedUnitsUsedPerHour(value); return *this;}


    /**
     * <p>The maximum number of instances that you used in an hour during the
     * historical period. AWS uses this to calculate your recommended reservation
     * purchases.</p>
     */
    inline const Aws::String& GetMaximumNumberOfInstancesUsedPerHour() const{ return m_maximumNumberOfInstancesUsedPerHour; }

    /**
     * <p>The maximum number of instances that you used in an hour during the
     * historical period. AWS uses this to calculate your recommended reservation
     * purchases.</p>
     */
    inline bool MaximumNumberOfInstancesUsedPerHourHasBeenSet() const { return m_maximumNumberOfInstancesUsedPerHourHasBeenSet; }

    /**
     * <p>The maximum number of instances that you used in an hour during the
     * historical period. AWS uses this to calculate your recommended reservation
     * purchases.</p>
     */
    inline void SetMaximumNumberOfInstancesUsedPerHour(const Aws::String& value) { m_maximumNumberOfInstancesUsedPerHourHasBeenSet = true; m_maximumNumberOfInstancesUsedPerHour = value; }

    /**
     * <p>The maximum number of instances that you used in an hour during the
     * historical period. AWS uses this to calculate your recommended reservation
     * purchases.</p>
     */
    inline void SetMaximumNumberOfInstancesUsedPerHour(Aws::String&& value) { m_maximumNumberOfInstancesUsedPerHourHasBeenSet = true; m_maximumNumberOfInstancesUsedPerHour = std::move(value); }

    /**
     * <p>The maximum number of instances that you used in an hour during the
     * historical period. AWS uses this to calculate your recommended reservation
     * purchases.</p>
     */
    inline void SetMaximumNumberOfInstancesUsedPerHour(const char* value) { m_maximumNumberOfInstancesUsedPerHourHasBeenSet = true; m_maximumNumberOfInstancesUsedPerHour.assign(value); }

    /**
     * <p>The maximum number of instances that you used in an hour during the
     * historical period. AWS uses this to calculate your recommended reservation
     * purchases.</p>
     */
    inline ReservationPurchaseRecommendationDetail& WithMaximumNumberOfInstancesUsedPerHour(const Aws::String& value) { SetMaximumNumberOfInstancesUsedPerHour(value); return *this;}

    /**
     * <p>The maximum number of instances that you used in an hour during the
     * historical period. AWS uses this to calculate your recommended reservation
     * purchases.</p>
     */
    inline ReservationPurchaseRecommendationDetail& WithMaximumNumberOfInstancesUsedPerHour(Aws::String&& value) { SetMaximumNumberOfInstancesUsedPerHour(std::move(value)); return *this;}

    /**
     * <p>The maximum number of instances that you used in an hour during the
     * historical period. AWS uses this to calculate your recommended reservation
     * purchases.</p>
     */
    inline ReservationPurchaseRecommendationDetail& WithMaximumNumberOfInstancesUsedPerHour(const char* value) { SetMaximumNumberOfInstancesUsedPerHour(value); return *this;}


    /**
     * <p>The maximum number of normalized units that you used in an hour during the
     * historical period. AWS uses this to calculate your recommended reservation
     * purchases.</p>
     */
    inline const Aws::String& GetMaximumNormalizedUnitsUsedPerHour() const{ return m_maximumNormalizedUnitsUsedPerHour; }

    /**
     * <p>The maximum number of normalized units that you used in an hour during the
     * historical period. AWS uses this to calculate your recommended reservation
     * purchases.</p>
     */
    inline bool MaximumNormalizedUnitsUsedPerHourHasBeenSet() const { return m_maximumNormalizedUnitsUsedPerHourHasBeenSet; }

    /**
     * <p>The maximum number of normalized units that you used in an hour during the
     * historical period. AWS uses this to calculate your recommended reservation
     * purchases.</p>
     */
    inline void SetMaximumNormalizedUnitsUsedPerHour(const Aws::String& value) { m_maximumNormalizedUnitsUsedPerHourHasBeenSet = true; m_maximumNormalizedUnitsUsedPerHour = value; }

    /**
     * <p>The maximum number of normalized units that you used in an hour during the
     * historical period. AWS uses this to calculate your recommended reservation
     * purchases.</p>
     */
    inline void SetMaximumNormalizedUnitsUsedPerHour(Aws::String&& value) { m_maximumNormalizedUnitsUsedPerHourHasBeenSet = true; m_maximumNormalizedUnitsUsedPerHour = std::move(value); }

    /**
     * <p>The maximum number of normalized units that you used in an hour during the
     * historical period. AWS uses this to calculate your recommended reservation
     * purchases.</p>
     */
    inline void SetMaximumNormalizedUnitsUsedPerHour(const char* value) { m_maximumNormalizedUnitsUsedPerHourHasBeenSet = true; m_maximumNormalizedUnitsUsedPerHour.assign(value); }

    /**
     * <p>The maximum number of normalized units that you used in an hour during the
     * historical period. AWS uses this to calculate your recommended reservation
     * purchases.</p>
     */
    inline ReservationPurchaseRecommendationDetail& WithMaximumNormalizedUnitsUsedPerHour(const Aws::String& value) { SetMaximumNormalizedUnitsUsedPerHour(value); return *this;}

    /**
     * <p>The maximum number of normalized units that you used in an hour during the
     * historical period. AWS uses this to calculate your recommended reservation
     * purchases.</p>
     */
    inline ReservationPurchaseRecommendationDetail& WithMaximumNormalizedUnitsUsedPerHour(Aws::String&& value) { SetMaximumNormalizedUnitsUsedPerHour(std::move(value)); return *this;}

    /**
     * <p>The maximum number of normalized units that you used in an hour during the
     * historical period. AWS uses this to calculate your recommended reservation
     * purchases.</p>
     */
    inline ReservationPurchaseRecommendationDetail& WithMaximumNormalizedUnitsUsedPerHour(const char* value) { SetMaximumNormalizedUnitsUsedPerHour(value); return *this;}


    /**
     * <p>The average number of instances that you used in an hour during the
     * historical period. AWS uses this to calculate your recommended reservation
     * purchases.</p>
     */
    inline const Aws::String& GetAverageNumberOfInstancesUsedPerHour() const{ return m_averageNumberOfInstancesUsedPerHour; }

    /**
     * <p>The average number of instances that you used in an hour during the
     * historical period. AWS uses this to calculate your recommended reservation
     * purchases.</p>
     */
    inline bool AverageNumberOfInstancesUsedPerHourHasBeenSet() const { return m_averageNumberOfInstancesUsedPerHourHasBeenSet; }

    /**
     * <p>The average number of instances that you used in an hour during the
     * historical period. AWS uses this to calculate your recommended reservation
     * purchases.</p>
     */
    inline void SetAverageNumberOfInstancesUsedPerHour(const Aws::String& value) { m_averageNumberOfInstancesUsedPerHourHasBeenSet = true; m_averageNumberOfInstancesUsedPerHour = value; }

    /**
     * <p>The average number of instances that you used in an hour during the
     * historical period. AWS uses this to calculate your recommended reservation
     * purchases.</p>
     */
    inline void SetAverageNumberOfInstancesUsedPerHour(Aws::String&& value) { m_averageNumberOfInstancesUsedPerHourHasBeenSet = true; m_averageNumberOfInstancesUsedPerHour = std::move(value); }

    /**
     * <p>The average number of instances that you used in an hour during the
     * historical period. AWS uses this to calculate your recommended reservation
     * purchases.</p>
     */
    inline void SetAverageNumberOfInstancesUsedPerHour(const char* value) { m_averageNumberOfInstancesUsedPerHourHasBeenSet = true; m_averageNumberOfInstancesUsedPerHour.assign(value); }

    /**
     * <p>The average number of instances that you used in an hour during the
     * historical period. AWS uses this to calculate your recommended reservation
     * purchases.</p>
     */
    inline ReservationPurchaseRecommendationDetail& WithAverageNumberOfInstancesUsedPerHour(const Aws::String& value) { SetAverageNumberOfInstancesUsedPerHour(value); return *this;}

    /**
     * <p>The average number of instances that you used in an hour during the
     * historical period. AWS uses this to calculate your recommended reservation
     * purchases.</p>
     */
    inline ReservationPurchaseRecommendationDetail& WithAverageNumberOfInstancesUsedPerHour(Aws::String&& value) { SetAverageNumberOfInstancesUsedPerHour(std::move(value)); return *this;}

    /**
     * <p>The average number of instances that you used in an hour during the
     * historical period. AWS uses this to calculate your recommended reservation
     * purchases.</p>
     */
    inline ReservationPurchaseRecommendationDetail& WithAverageNumberOfInstancesUsedPerHour(const char* value) { SetAverageNumberOfInstancesUsedPerHour(value); return *this;}


    /**
     * <p>The average number of normalized units that you used in an hour during the
     * historical period. AWS uses this to calculate your recommended reservation
     * purchases.</p>
     */
    inline const Aws::String& GetAverageNormalizedUnitsUsedPerHour() const{ return m_averageNormalizedUnitsUsedPerHour; }

    /**
     * <p>The average number of normalized units that you used in an hour during the
     * historical period. AWS uses this to calculate your recommended reservation
     * purchases.</p>
     */
    inline bool AverageNormalizedUnitsUsedPerHourHasBeenSet() const { return m_averageNormalizedUnitsUsedPerHourHasBeenSet; }

    /**
     * <p>The average number of normalized units that you used in an hour during the
     * historical period. AWS uses this to calculate your recommended reservation
     * purchases.</p>
     */
    inline void SetAverageNormalizedUnitsUsedPerHour(const Aws::String& value) { m_averageNormalizedUnitsUsedPerHourHasBeenSet = true; m_averageNormalizedUnitsUsedPerHour = value; }

    /**
     * <p>The average number of normalized units that you used in an hour during the
     * historical period. AWS uses this to calculate your recommended reservation
     * purchases.</p>
     */
    inline void SetAverageNormalizedUnitsUsedPerHour(Aws::String&& value) { m_averageNormalizedUnitsUsedPerHourHasBeenSet = true; m_averageNormalizedUnitsUsedPerHour = std::move(value); }

    /**
     * <p>The average number of normalized units that you used in an hour during the
     * historical period. AWS uses this to calculate your recommended reservation
     * purchases.</p>
     */
    inline void SetAverageNormalizedUnitsUsedPerHour(const char* value) { m_averageNormalizedUnitsUsedPerHourHasBeenSet = true; m_averageNormalizedUnitsUsedPerHour.assign(value); }

    /**
     * <p>The average number of normalized units that you used in an hour during the
     * historical period. AWS uses this to calculate your recommended reservation
     * purchases.</p>
     */
    inline ReservationPurchaseRecommendationDetail& WithAverageNormalizedUnitsUsedPerHour(const Aws::String& value) { SetAverageNormalizedUnitsUsedPerHour(value); return *this;}

    /**
     * <p>The average number of normalized units that you used in an hour during the
     * historical period. AWS uses this to calculate your recommended reservation
     * purchases.</p>
     */
    inline ReservationPurchaseRecommendationDetail& WithAverageNormalizedUnitsUsedPerHour(Aws::String&& value) { SetAverageNormalizedUnitsUsedPerHour(std::move(value)); return *this;}

    /**
     * <p>The average number of normalized units that you used in an hour during the
     * historical period. AWS uses this to calculate your recommended reservation
     * purchases.</p>
     */
    inline ReservationPurchaseRecommendationDetail& WithAverageNormalizedUnitsUsedPerHour(const char* value) { SetAverageNormalizedUnitsUsedPerHour(value); return *this;}


    /**
     * <p>The average utilization of your instances. AWS uses this to calculate your
     * recommended reservation purchases.</p>
     */
    inline const Aws::String& GetAverageUtilization() const{ return m_averageUtilization; }

    /**
     * <p>The average utilization of your instances. AWS uses this to calculate your
     * recommended reservation purchases.</p>
     */
    inline bool AverageUtilizationHasBeenSet() const { return m_averageUtilizationHasBeenSet; }

    /**
     * <p>The average utilization of your instances. AWS uses this to calculate your
     * recommended reservation purchases.</p>
     */
    inline void SetAverageUtilization(const Aws::String& value) { m_averageUtilizationHasBeenSet = true; m_averageUtilization = value; }

    /**
     * <p>The average utilization of your instances. AWS uses this to calculate your
     * recommended reservation purchases.</p>
     */
    inline void SetAverageUtilization(Aws::String&& value) { m_averageUtilizationHasBeenSet = true; m_averageUtilization = std::move(value); }

    /**
     * <p>The average utilization of your instances. AWS uses this to calculate your
     * recommended reservation purchases.</p>
     */
    inline void SetAverageUtilization(const char* value) { m_averageUtilizationHasBeenSet = true; m_averageUtilization.assign(value); }

    /**
     * <p>The average utilization of your instances. AWS uses this to calculate your
     * recommended reservation purchases.</p>
     */
    inline ReservationPurchaseRecommendationDetail& WithAverageUtilization(const Aws::String& value) { SetAverageUtilization(value); return *this;}

    /**
     * <p>The average utilization of your instances. AWS uses this to calculate your
     * recommended reservation purchases.</p>
     */
    inline ReservationPurchaseRecommendationDetail& WithAverageUtilization(Aws::String&& value) { SetAverageUtilization(std::move(value)); return *this;}

    /**
     * <p>The average utilization of your instances. AWS uses this to calculate your
     * recommended reservation purchases.</p>
     */
    inline ReservationPurchaseRecommendationDetail& WithAverageUtilization(const char* value) { SetAverageUtilization(value); return *this;}


    /**
     * <p>How long AWS estimates that it takes for this instance to start saving you
     * money, in months.</p>
     */
    inline const Aws::String& GetEstimatedBreakEvenInMonths() const{ return m_estimatedBreakEvenInMonths; }

    /**
     * <p>How long AWS estimates that it takes for this instance to start saving you
     * money, in months.</p>
     */
    inline bool EstimatedBreakEvenInMonthsHasBeenSet() const { return m_estimatedBreakEvenInMonthsHasBeenSet; }

    /**
     * <p>How long AWS estimates that it takes for this instance to start saving you
     * money, in months.</p>
     */
    inline void SetEstimatedBreakEvenInMonths(const Aws::String& value) { m_estimatedBreakEvenInMonthsHasBeenSet = true; m_estimatedBreakEvenInMonths = value; }

    /**
     * <p>How long AWS estimates that it takes for this instance to start saving you
     * money, in months.</p>
     */
    inline void SetEstimatedBreakEvenInMonths(Aws::String&& value) { m_estimatedBreakEvenInMonthsHasBeenSet = true; m_estimatedBreakEvenInMonths = std::move(value); }

    /**
     * <p>How long AWS estimates that it takes for this instance to start saving you
     * money, in months.</p>
     */
    inline void SetEstimatedBreakEvenInMonths(const char* value) { m_estimatedBreakEvenInMonthsHasBeenSet = true; m_estimatedBreakEvenInMonths.assign(value); }

    /**
     * <p>How long AWS estimates that it takes for this instance to start saving you
     * money, in months.</p>
     */
    inline ReservationPurchaseRecommendationDetail& WithEstimatedBreakEvenInMonths(const Aws::String& value) { SetEstimatedBreakEvenInMonths(value); return *this;}

    /**
     * <p>How long AWS estimates that it takes for this instance to start saving you
     * money, in months.</p>
     */
    inline ReservationPurchaseRecommendationDetail& WithEstimatedBreakEvenInMonths(Aws::String&& value) { SetEstimatedBreakEvenInMonths(std::move(value)); return *this;}

    /**
     * <p>How long AWS estimates that it takes for this instance to start saving you
     * money, in months.</p>
     */
    inline ReservationPurchaseRecommendationDetail& WithEstimatedBreakEvenInMonths(const char* value) { SetEstimatedBreakEvenInMonths(value); return *this;}


    /**
     * <p>The currency code that AWS used to calculate the costs for this instance.</p>
     */
    inline const Aws::String& GetCurrencyCode() const{ return m_currencyCode; }

    /**
     * <p>The currency code that AWS used to calculate the costs for this instance.</p>
     */
    inline bool CurrencyCodeHasBeenSet() const { return m_currencyCodeHasBeenSet; }

    /**
     * <p>The currency code that AWS used to calculate the costs for this instance.</p>
     */
    inline void SetCurrencyCode(const Aws::String& value) { m_currencyCodeHasBeenSet = true; m_currencyCode = value; }

    /**
     * <p>The currency code that AWS used to calculate the costs for this instance.</p>
     */
    inline void SetCurrencyCode(Aws::String&& value) { m_currencyCodeHasBeenSet = true; m_currencyCode = std::move(value); }

    /**
     * <p>The currency code that AWS used to calculate the costs for this instance.</p>
     */
    inline void SetCurrencyCode(const char* value) { m_currencyCodeHasBeenSet = true; m_currencyCode.assign(value); }

    /**
     * <p>The currency code that AWS used to calculate the costs for this instance.</p>
     */
    inline ReservationPurchaseRecommendationDetail& WithCurrencyCode(const Aws::String& value) { SetCurrencyCode(value); return *this;}

    /**
     * <p>The currency code that AWS used to calculate the costs for this instance.</p>
     */
    inline ReservationPurchaseRecommendationDetail& WithCurrencyCode(Aws::String&& value) { SetCurrencyCode(std::move(value)); return *this;}

    /**
     * <p>The currency code that AWS used to calculate the costs for this instance.</p>
     */
    inline ReservationPurchaseRecommendationDetail& WithCurrencyCode(const char* value) { SetCurrencyCode(value); return *this;}


    /**
     * <p>How much AWS estimates that this specific recommendation could save you in a
     * month.</p>
     */
    inline const Aws::String& GetEstimatedMonthlySavingsAmount() const{ return m_estimatedMonthlySavingsAmount; }

    /**
     * <p>How much AWS estimates that this specific recommendation could save you in a
     * month.</p>
     */
    inline bool EstimatedMonthlySavingsAmountHasBeenSet() const { return m_estimatedMonthlySavingsAmountHasBeenSet; }

    /**
     * <p>How much AWS estimates that this specific recommendation could save you in a
     * month.</p>
     */
    inline void SetEstimatedMonthlySavingsAmount(const Aws::String& value) { m_estimatedMonthlySavingsAmountHasBeenSet = true; m_estimatedMonthlySavingsAmount = value; }

    /**
     * <p>How much AWS estimates that this specific recommendation could save you in a
     * month.</p>
     */
    inline void SetEstimatedMonthlySavingsAmount(Aws::String&& value) { m_estimatedMonthlySavingsAmountHasBeenSet = true; m_estimatedMonthlySavingsAmount = std::move(value); }

    /**
     * <p>How much AWS estimates that this specific recommendation could save you in a
     * month.</p>
     */
    inline void SetEstimatedMonthlySavingsAmount(const char* value) { m_estimatedMonthlySavingsAmountHasBeenSet = true; m_estimatedMonthlySavingsAmount.assign(value); }

    /**
     * <p>How much AWS estimates that this specific recommendation could save you in a
     * month.</p>
     */
    inline ReservationPurchaseRecommendationDetail& WithEstimatedMonthlySavingsAmount(const Aws::String& value) { SetEstimatedMonthlySavingsAmount(value); return *this;}

    /**
     * <p>How much AWS estimates that this specific recommendation could save you in a
     * month.</p>
     */
    inline ReservationPurchaseRecommendationDetail& WithEstimatedMonthlySavingsAmount(Aws::String&& value) { SetEstimatedMonthlySavingsAmount(std::move(value)); return *this;}

    /**
     * <p>How much AWS estimates that this specific recommendation could save you in a
     * month.</p>
     */
    inline ReservationPurchaseRecommendationDetail& WithEstimatedMonthlySavingsAmount(const char* value) { SetEstimatedMonthlySavingsAmount(value); return *this;}


    /**
     * <p>How much AWS estimates that this specific recommendation could save you in a
     * month, as a percentage of your overall costs.</p>
     */
    inline const Aws::String& GetEstimatedMonthlySavingsPercentage() const{ return m_estimatedMonthlySavingsPercentage; }

    /**
     * <p>How much AWS estimates that this specific recommendation could save you in a
     * month, as a percentage of your overall costs.</p>
     */
    inline bool EstimatedMonthlySavingsPercentageHasBeenSet() const { return m_estimatedMonthlySavingsPercentageHasBeenSet; }

    /**
     * <p>How much AWS estimates that this specific recommendation could save you in a
     * month, as a percentage of your overall costs.</p>
     */
    inline void SetEstimatedMonthlySavingsPercentage(const Aws::String& value) { m_estimatedMonthlySavingsPercentageHasBeenSet = true; m_estimatedMonthlySavingsPercentage = value; }

    /**
     * <p>How much AWS estimates that this specific recommendation could save you in a
     * month, as a percentage of your overall costs.</p>
     */
    inline void SetEstimatedMonthlySavingsPercentage(Aws::String&& value) { m_estimatedMonthlySavingsPercentageHasBeenSet = true; m_estimatedMonthlySavingsPercentage = std::move(value); }

    /**
     * <p>How much AWS estimates that this specific recommendation could save you in a
     * month, as a percentage of your overall costs.</p>
     */
    inline void SetEstimatedMonthlySavingsPercentage(const char* value) { m_estimatedMonthlySavingsPercentageHasBeenSet = true; m_estimatedMonthlySavingsPercentage.assign(value); }

    /**
     * <p>How much AWS estimates that this specific recommendation could save you in a
     * month, as a percentage of your overall costs.</p>
     */
    inline ReservationPurchaseRecommendationDetail& WithEstimatedMonthlySavingsPercentage(const Aws::String& value) { SetEstimatedMonthlySavingsPercentage(value); return *this;}

    /**
     * <p>How much AWS estimates that this specific recommendation could save you in a
     * month, as a percentage of your overall costs.</p>
     */
    inline ReservationPurchaseRecommendationDetail& WithEstimatedMonthlySavingsPercentage(Aws::String&& value) { SetEstimatedMonthlySavingsPercentage(std::move(value)); return *this;}

    /**
     * <p>How much AWS estimates that this specific recommendation could save you in a
     * month, as a percentage of your overall costs.</p>
     */
    inline ReservationPurchaseRecommendationDetail& WithEstimatedMonthlySavingsPercentage(const char* value) { SetEstimatedMonthlySavingsPercentage(value); return *this;}


    /**
     * <p>How much AWS estimates that you spend on On-Demand Instances in a month.</p>
     */
    inline const Aws::String& GetEstimatedMonthlyOnDemandCost() const{ return m_estimatedMonthlyOnDemandCost; }

    /**
     * <p>How much AWS estimates that you spend on On-Demand Instances in a month.</p>
     */
    inline bool EstimatedMonthlyOnDemandCostHasBeenSet() const { return m_estimatedMonthlyOnDemandCostHasBeenSet; }

    /**
     * <p>How much AWS estimates that you spend on On-Demand Instances in a month.</p>
     */
    inline void SetEstimatedMonthlyOnDemandCost(const Aws::String& value) { m_estimatedMonthlyOnDemandCostHasBeenSet = true; m_estimatedMonthlyOnDemandCost = value; }

    /**
     * <p>How much AWS estimates that you spend on On-Demand Instances in a month.</p>
     */
    inline void SetEstimatedMonthlyOnDemandCost(Aws::String&& value) { m_estimatedMonthlyOnDemandCostHasBeenSet = true; m_estimatedMonthlyOnDemandCost = std::move(value); }

    /**
     * <p>How much AWS estimates that you spend on On-Demand Instances in a month.</p>
     */
    inline void SetEstimatedMonthlyOnDemandCost(const char* value) { m_estimatedMonthlyOnDemandCostHasBeenSet = true; m_estimatedMonthlyOnDemandCost.assign(value); }

    /**
     * <p>How much AWS estimates that you spend on On-Demand Instances in a month.</p>
     */
    inline ReservationPurchaseRecommendationDetail& WithEstimatedMonthlyOnDemandCost(const Aws::String& value) { SetEstimatedMonthlyOnDemandCost(value); return *this;}

    /**
     * <p>How much AWS estimates that you spend on On-Demand Instances in a month.</p>
     */
    inline ReservationPurchaseRecommendationDetail& WithEstimatedMonthlyOnDemandCost(Aws::String&& value) { SetEstimatedMonthlyOnDemandCost(std::move(value)); return *this;}

    /**
     * <p>How much AWS estimates that you spend on On-Demand Instances in a month.</p>
     */
    inline ReservationPurchaseRecommendationDetail& WithEstimatedMonthlyOnDemandCost(const char* value) { SetEstimatedMonthlyOnDemandCost(value); return *this;}


    /**
     * <p>How much AWS estimates that you would have spent for all usage during the
     * specified historical period if you had had a reservation.</p>
     */
    inline const Aws::String& GetEstimatedReservationCostForLookbackPeriod() const{ return m_estimatedReservationCostForLookbackPeriod; }

    /**
     * <p>How much AWS estimates that you would have spent for all usage during the
     * specified historical period if you had had a reservation.</p>
     */
    inline bool EstimatedReservationCostForLookbackPeriodHasBeenSet() const { return m_estimatedReservationCostForLookbackPeriodHasBeenSet; }

    /**
     * <p>How much AWS estimates that you would have spent for all usage during the
     * specified historical period if you had had a reservation.</p>
     */
    inline void SetEstimatedReservationCostForLookbackPeriod(const Aws::String& value) { m_estimatedReservationCostForLookbackPeriodHasBeenSet = true; m_estimatedReservationCostForLookbackPeriod = value; }

    /**
     * <p>How much AWS estimates that you would have spent for all usage during the
     * specified historical period if you had had a reservation.</p>
     */
    inline void SetEstimatedReservationCostForLookbackPeriod(Aws::String&& value) { m_estimatedReservationCostForLookbackPeriodHasBeenSet = true; m_estimatedReservationCostForLookbackPeriod = std::move(value); }

    /**
     * <p>How much AWS estimates that you would have spent for all usage during the
     * specified historical period if you had had a reservation.</p>
     */
    inline void SetEstimatedReservationCostForLookbackPeriod(const char* value) { m_estimatedReservationCostForLookbackPeriodHasBeenSet = true; m_estimatedReservationCostForLookbackPeriod.assign(value); }

    /**
     * <p>How much AWS estimates that you would have spent for all usage during the
     * specified historical period if you had had a reservation.</p>
     */
    inline ReservationPurchaseRecommendationDetail& WithEstimatedReservationCostForLookbackPeriod(const Aws::String& value) { SetEstimatedReservationCostForLookbackPeriod(value); return *this;}

    /**
     * <p>How much AWS estimates that you would have spent for all usage during the
     * specified historical period if you had had a reservation.</p>
     */
    inline ReservationPurchaseRecommendationDetail& WithEstimatedReservationCostForLookbackPeriod(Aws::String&& value) { SetEstimatedReservationCostForLookbackPeriod(std::move(value)); return *this;}

    /**
     * <p>How much AWS estimates that you would have spent for all usage during the
     * specified historical period if you had had a reservation.</p>
     */
    inline ReservationPurchaseRecommendationDetail& WithEstimatedReservationCostForLookbackPeriod(const char* value) { SetEstimatedReservationCostForLookbackPeriod(value); return *this;}


    /**
     * <p>How much purchasing this instance costs you upfront.</p>
     */
    inline const Aws::String& GetUpfrontCost() const{ return m_upfrontCost; }

    /**
     * <p>How much purchasing this instance costs you upfront.</p>
     */
    inline bool UpfrontCostHasBeenSet() const { return m_upfrontCostHasBeenSet; }

    /**
     * <p>How much purchasing this instance costs you upfront.</p>
     */
    inline void SetUpfrontCost(const Aws::String& value) { m_upfrontCostHasBeenSet = true; m_upfrontCost = value; }

    /**
     * <p>How much purchasing this instance costs you upfront.</p>
     */
    inline void SetUpfrontCost(Aws::String&& value) { m_upfrontCostHasBeenSet = true; m_upfrontCost = std::move(value); }

    /**
     * <p>How much purchasing this instance costs you upfront.</p>
     */
    inline void SetUpfrontCost(const char* value) { m_upfrontCostHasBeenSet = true; m_upfrontCost.assign(value); }

    /**
     * <p>How much purchasing this instance costs you upfront.</p>
     */
    inline ReservationPurchaseRecommendationDetail& WithUpfrontCost(const Aws::String& value) { SetUpfrontCost(value); return *this;}

    /**
     * <p>How much purchasing this instance costs you upfront.</p>
     */
    inline ReservationPurchaseRecommendationDetail& WithUpfrontCost(Aws::String&& value) { SetUpfrontCost(std::move(value)); return *this;}

    /**
     * <p>How much purchasing this instance costs you upfront.</p>
     */
    inline ReservationPurchaseRecommendationDetail& WithUpfrontCost(const char* value) { SetUpfrontCost(value); return *this;}


    /**
     * <p>How much purchasing this instance costs you on a monthly basis.</p>
     */
    inline const Aws::String& GetRecurringStandardMonthlyCost() const{ return m_recurringStandardMonthlyCost; }

    /**
     * <p>How much purchasing this instance costs you on a monthly basis.</p>
     */
    inline bool RecurringStandardMonthlyCostHasBeenSet() const { return m_recurringStandardMonthlyCostHasBeenSet; }

    /**
     * <p>How much purchasing this instance costs you on a monthly basis.</p>
     */
    inline void SetRecurringStandardMonthlyCost(const Aws::String& value) { m_recurringStandardMonthlyCostHasBeenSet = true; m_recurringStandardMonthlyCost = value; }

    /**
     * <p>How much purchasing this instance costs you on a monthly basis.</p>
     */
    inline void SetRecurringStandardMonthlyCost(Aws::String&& value) { m_recurringStandardMonthlyCostHasBeenSet = true; m_recurringStandardMonthlyCost = std::move(value); }

    /**
     * <p>How much purchasing this instance costs you on a monthly basis.</p>
     */
    inline void SetRecurringStandardMonthlyCost(const char* value) { m_recurringStandardMonthlyCostHasBeenSet = true; m_recurringStandardMonthlyCost.assign(value); }

    /**
     * <p>How much purchasing this instance costs you on a monthly basis.</p>
     */
    inline ReservationPurchaseRecommendationDetail& WithRecurringStandardMonthlyCost(const Aws::String& value) { SetRecurringStandardMonthlyCost(value); return *this;}

    /**
     * <p>How much purchasing this instance costs you on a monthly basis.</p>
     */
    inline ReservationPurchaseRecommendationDetail& WithRecurringStandardMonthlyCost(Aws::String&& value) { SetRecurringStandardMonthlyCost(std::move(value)); return *this;}

    /**
     * <p>How much purchasing this instance costs you on a monthly basis.</p>
     */
    inline ReservationPurchaseRecommendationDetail& WithRecurringStandardMonthlyCost(const char* value) { SetRecurringStandardMonthlyCost(value); return *this;}

  private:

    Aws::String m_accountId;
    bool m_accountIdHasBeenSet;

    InstanceDetails m_instanceDetails;
    bool m_instanceDetailsHasBeenSet;

    Aws::String m_recommendedNumberOfInstancesToPurchase;
    bool m_recommendedNumberOfInstancesToPurchaseHasBeenSet;

    Aws::String m_recommendedNormalizedUnitsToPurchase;
    bool m_recommendedNormalizedUnitsToPurchaseHasBeenSet;

    Aws::String m_minimumNumberOfInstancesUsedPerHour;
    bool m_minimumNumberOfInstancesUsedPerHourHasBeenSet;

    Aws::String m_minimumNormalizedUnitsUsedPerHour;
    bool m_minimumNormalizedUnitsUsedPerHourHasBeenSet;

    Aws::String m_maximumNumberOfInstancesUsedPerHour;
    bool m_maximumNumberOfInstancesUsedPerHourHasBeenSet;

    Aws::String m_maximumNormalizedUnitsUsedPerHour;
    bool m_maximumNormalizedUnitsUsedPerHourHasBeenSet;

    Aws::String m_averageNumberOfInstancesUsedPerHour;
    bool m_averageNumberOfInstancesUsedPerHourHasBeenSet;

    Aws::String m_averageNormalizedUnitsUsedPerHour;
    bool m_averageNormalizedUnitsUsedPerHourHasBeenSet;

    Aws::String m_averageUtilization;
    bool m_averageUtilizationHasBeenSet;

    Aws::String m_estimatedBreakEvenInMonths;
    bool m_estimatedBreakEvenInMonthsHasBeenSet;

    Aws::String m_currencyCode;
    bool m_currencyCodeHasBeenSet;

    Aws::String m_estimatedMonthlySavingsAmount;
    bool m_estimatedMonthlySavingsAmountHasBeenSet;

    Aws::String m_estimatedMonthlySavingsPercentage;
    bool m_estimatedMonthlySavingsPercentageHasBeenSet;

    Aws::String m_estimatedMonthlyOnDemandCost;
    bool m_estimatedMonthlyOnDemandCostHasBeenSet;

    Aws::String m_estimatedReservationCostForLookbackPeriod;
    bool m_estimatedReservationCostForLookbackPeriodHasBeenSet;

    Aws::String m_upfrontCost;
    bool m_upfrontCostHasBeenSet;

    Aws::String m_recurringStandardMonthlyCost;
    bool m_recurringStandardMonthlyCostHasBeenSet;
  };

} // namespace Model
} // namespace CostExplorer
} // namespace Aws
