﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ce/CostExplorer_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ce/model/ResourceDetails.h>
#include <aws/ce/model/ResourceUtilization.h>
#include <aws/ce/model/TagValues.h>
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
   * <p>Context about the current instance.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ce-2017-10-25/CurrentInstance">AWS
   * API Reference</a></p>
   */
  class CurrentInstance
  {
  public:
    AWS_COSTEXPLORER_API CurrentInstance();
    AWS_COSTEXPLORER_API CurrentInstance(Aws::Utils::Json::JsonView jsonValue);
    AWS_COSTEXPLORER_API CurrentInstance& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_COSTEXPLORER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Resource ID of the current instance.</p>
     */
    inline const Aws::String& GetResourceId() const{ return m_resourceId; }
    inline bool ResourceIdHasBeenSet() const { return m_resourceIdHasBeenSet; }
    inline void SetResourceId(const Aws::String& value) { m_resourceIdHasBeenSet = true; m_resourceId = value; }
    inline void SetResourceId(Aws::String&& value) { m_resourceIdHasBeenSet = true; m_resourceId = std::move(value); }
    inline void SetResourceId(const char* value) { m_resourceIdHasBeenSet = true; m_resourceId.assign(value); }
    inline CurrentInstance& WithResourceId(const Aws::String& value) { SetResourceId(value); return *this;}
    inline CurrentInstance& WithResourceId(Aws::String&& value) { SetResourceId(std::move(value)); return *this;}
    inline CurrentInstance& WithResourceId(const char* value) { SetResourceId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name that you given an instance. This field shows as blank if you haven't
     * given the instance a name.</p>
     */
    inline const Aws::String& GetInstanceName() const{ return m_instanceName; }
    inline bool InstanceNameHasBeenSet() const { return m_instanceNameHasBeenSet; }
    inline void SetInstanceName(const Aws::String& value) { m_instanceNameHasBeenSet = true; m_instanceName = value; }
    inline void SetInstanceName(Aws::String&& value) { m_instanceNameHasBeenSet = true; m_instanceName = std::move(value); }
    inline void SetInstanceName(const char* value) { m_instanceNameHasBeenSet = true; m_instanceName.assign(value); }
    inline CurrentInstance& WithInstanceName(const Aws::String& value) { SetInstanceName(value); return *this;}
    inline CurrentInstance& WithInstanceName(Aws::String&& value) { SetInstanceName(std::move(value)); return *this;}
    inline CurrentInstance& WithInstanceName(const char* value) { SetInstanceName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Cost allocation resource tags that are applied to the instance.</p>
     */
    inline const Aws::Vector<TagValues>& GetTags() const{ return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    inline void SetTags(const Aws::Vector<TagValues>& value) { m_tagsHasBeenSet = true; m_tags = value; }
    inline void SetTags(Aws::Vector<TagValues>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }
    inline CurrentInstance& WithTags(const Aws::Vector<TagValues>& value) { SetTags(value); return *this;}
    inline CurrentInstance& WithTags(Aws::Vector<TagValues>&& value) { SetTags(std::move(value)); return *this;}
    inline CurrentInstance& AddTags(const TagValues& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }
    inline CurrentInstance& AddTags(TagValues&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Details about the resource and utilization.</p>
     */
    inline const ResourceDetails& GetResourceDetails() const{ return m_resourceDetails; }
    inline bool ResourceDetailsHasBeenSet() const { return m_resourceDetailsHasBeenSet; }
    inline void SetResourceDetails(const ResourceDetails& value) { m_resourceDetailsHasBeenSet = true; m_resourceDetails = value; }
    inline void SetResourceDetails(ResourceDetails&& value) { m_resourceDetailsHasBeenSet = true; m_resourceDetails = std::move(value); }
    inline CurrentInstance& WithResourceDetails(const ResourceDetails& value) { SetResourceDetails(value); return *this;}
    inline CurrentInstance& WithResourceDetails(ResourceDetails&& value) { SetResourceDetails(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Utilization information of the current instance during the lookback
     * period.</p>
     */
    inline const ResourceUtilization& GetResourceUtilization() const{ return m_resourceUtilization; }
    inline bool ResourceUtilizationHasBeenSet() const { return m_resourceUtilizationHasBeenSet; }
    inline void SetResourceUtilization(const ResourceUtilization& value) { m_resourceUtilizationHasBeenSet = true; m_resourceUtilization = value; }
    inline void SetResourceUtilization(ResourceUtilization&& value) { m_resourceUtilizationHasBeenSet = true; m_resourceUtilization = std::move(value); }
    inline CurrentInstance& WithResourceUtilization(const ResourceUtilization& value) { SetResourceUtilization(value); return *this;}
    inline CurrentInstance& WithResourceUtilization(ResourceUtilization&& value) { SetResourceUtilization(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of hours during the lookback period that's covered by
     * reservations.</p>
     */
    inline const Aws::String& GetReservationCoveredHoursInLookbackPeriod() const{ return m_reservationCoveredHoursInLookbackPeriod; }
    inline bool ReservationCoveredHoursInLookbackPeriodHasBeenSet() const { return m_reservationCoveredHoursInLookbackPeriodHasBeenSet; }
    inline void SetReservationCoveredHoursInLookbackPeriod(const Aws::String& value) { m_reservationCoveredHoursInLookbackPeriodHasBeenSet = true; m_reservationCoveredHoursInLookbackPeriod = value; }
    inline void SetReservationCoveredHoursInLookbackPeriod(Aws::String&& value) { m_reservationCoveredHoursInLookbackPeriodHasBeenSet = true; m_reservationCoveredHoursInLookbackPeriod = std::move(value); }
    inline void SetReservationCoveredHoursInLookbackPeriod(const char* value) { m_reservationCoveredHoursInLookbackPeriodHasBeenSet = true; m_reservationCoveredHoursInLookbackPeriod.assign(value); }
    inline CurrentInstance& WithReservationCoveredHoursInLookbackPeriod(const Aws::String& value) { SetReservationCoveredHoursInLookbackPeriod(value); return *this;}
    inline CurrentInstance& WithReservationCoveredHoursInLookbackPeriod(Aws::String&& value) { SetReservationCoveredHoursInLookbackPeriod(std::move(value)); return *this;}
    inline CurrentInstance& WithReservationCoveredHoursInLookbackPeriod(const char* value) { SetReservationCoveredHoursInLookbackPeriod(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of hours during the lookback period that's covered by Savings
     * Plans.</p>
     */
    inline const Aws::String& GetSavingsPlansCoveredHoursInLookbackPeriod() const{ return m_savingsPlansCoveredHoursInLookbackPeriod; }
    inline bool SavingsPlansCoveredHoursInLookbackPeriodHasBeenSet() const { return m_savingsPlansCoveredHoursInLookbackPeriodHasBeenSet; }
    inline void SetSavingsPlansCoveredHoursInLookbackPeriod(const Aws::String& value) { m_savingsPlansCoveredHoursInLookbackPeriodHasBeenSet = true; m_savingsPlansCoveredHoursInLookbackPeriod = value; }
    inline void SetSavingsPlansCoveredHoursInLookbackPeriod(Aws::String&& value) { m_savingsPlansCoveredHoursInLookbackPeriodHasBeenSet = true; m_savingsPlansCoveredHoursInLookbackPeriod = std::move(value); }
    inline void SetSavingsPlansCoveredHoursInLookbackPeriod(const char* value) { m_savingsPlansCoveredHoursInLookbackPeriodHasBeenSet = true; m_savingsPlansCoveredHoursInLookbackPeriod.assign(value); }
    inline CurrentInstance& WithSavingsPlansCoveredHoursInLookbackPeriod(const Aws::String& value) { SetSavingsPlansCoveredHoursInLookbackPeriod(value); return *this;}
    inline CurrentInstance& WithSavingsPlansCoveredHoursInLookbackPeriod(Aws::String&& value) { SetSavingsPlansCoveredHoursInLookbackPeriod(std::move(value)); return *this;}
    inline CurrentInstance& WithSavingsPlansCoveredHoursInLookbackPeriod(const char* value) { SetSavingsPlansCoveredHoursInLookbackPeriod(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of hours during the lookback period that's billed at On-Demand
     * rates.</p>
     */
    inline const Aws::String& GetOnDemandHoursInLookbackPeriod() const{ return m_onDemandHoursInLookbackPeriod; }
    inline bool OnDemandHoursInLookbackPeriodHasBeenSet() const { return m_onDemandHoursInLookbackPeriodHasBeenSet; }
    inline void SetOnDemandHoursInLookbackPeriod(const Aws::String& value) { m_onDemandHoursInLookbackPeriodHasBeenSet = true; m_onDemandHoursInLookbackPeriod = value; }
    inline void SetOnDemandHoursInLookbackPeriod(Aws::String&& value) { m_onDemandHoursInLookbackPeriodHasBeenSet = true; m_onDemandHoursInLookbackPeriod = std::move(value); }
    inline void SetOnDemandHoursInLookbackPeriod(const char* value) { m_onDemandHoursInLookbackPeriodHasBeenSet = true; m_onDemandHoursInLookbackPeriod.assign(value); }
    inline CurrentInstance& WithOnDemandHoursInLookbackPeriod(const Aws::String& value) { SetOnDemandHoursInLookbackPeriod(value); return *this;}
    inline CurrentInstance& WithOnDemandHoursInLookbackPeriod(Aws::String&& value) { SetOnDemandHoursInLookbackPeriod(std::move(value)); return *this;}
    inline CurrentInstance& WithOnDemandHoursInLookbackPeriod(const char* value) { SetOnDemandHoursInLookbackPeriod(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The total number of hours that the instance ran during the lookback
     * period.</p>
     */
    inline const Aws::String& GetTotalRunningHoursInLookbackPeriod() const{ return m_totalRunningHoursInLookbackPeriod; }
    inline bool TotalRunningHoursInLookbackPeriodHasBeenSet() const { return m_totalRunningHoursInLookbackPeriodHasBeenSet; }
    inline void SetTotalRunningHoursInLookbackPeriod(const Aws::String& value) { m_totalRunningHoursInLookbackPeriodHasBeenSet = true; m_totalRunningHoursInLookbackPeriod = value; }
    inline void SetTotalRunningHoursInLookbackPeriod(Aws::String&& value) { m_totalRunningHoursInLookbackPeriodHasBeenSet = true; m_totalRunningHoursInLookbackPeriod = std::move(value); }
    inline void SetTotalRunningHoursInLookbackPeriod(const char* value) { m_totalRunningHoursInLookbackPeriodHasBeenSet = true; m_totalRunningHoursInLookbackPeriod.assign(value); }
    inline CurrentInstance& WithTotalRunningHoursInLookbackPeriod(const Aws::String& value) { SetTotalRunningHoursInLookbackPeriod(value); return *this;}
    inline CurrentInstance& WithTotalRunningHoursInLookbackPeriod(Aws::String&& value) { SetTotalRunningHoursInLookbackPeriod(std::move(value)); return *this;}
    inline CurrentInstance& WithTotalRunningHoursInLookbackPeriod(const char* value) { SetTotalRunningHoursInLookbackPeriod(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current On-Demand cost of operating this instance on a monthly basis.</p>
     */
    inline const Aws::String& GetMonthlyCost() const{ return m_monthlyCost; }
    inline bool MonthlyCostHasBeenSet() const { return m_monthlyCostHasBeenSet; }
    inline void SetMonthlyCost(const Aws::String& value) { m_monthlyCostHasBeenSet = true; m_monthlyCost = value; }
    inline void SetMonthlyCost(Aws::String&& value) { m_monthlyCostHasBeenSet = true; m_monthlyCost = std::move(value); }
    inline void SetMonthlyCost(const char* value) { m_monthlyCostHasBeenSet = true; m_monthlyCost.assign(value); }
    inline CurrentInstance& WithMonthlyCost(const Aws::String& value) { SetMonthlyCost(value); return *this;}
    inline CurrentInstance& WithMonthlyCost(Aws::String&& value) { SetMonthlyCost(std::move(value)); return *this;}
    inline CurrentInstance& WithMonthlyCost(const char* value) { SetMonthlyCost(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The currency code that Amazon Web Services used to calculate the costs for
     * this instance.</p>
     */
    inline const Aws::String& GetCurrencyCode() const{ return m_currencyCode; }
    inline bool CurrencyCodeHasBeenSet() const { return m_currencyCodeHasBeenSet; }
    inline void SetCurrencyCode(const Aws::String& value) { m_currencyCodeHasBeenSet = true; m_currencyCode = value; }
    inline void SetCurrencyCode(Aws::String&& value) { m_currencyCodeHasBeenSet = true; m_currencyCode = std::move(value); }
    inline void SetCurrencyCode(const char* value) { m_currencyCodeHasBeenSet = true; m_currencyCode.assign(value); }
    inline CurrentInstance& WithCurrencyCode(const Aws::String& value) { SetCurrencyCode(value); return *this;}
    inline CurrentInstance& WithCurrencyCode(Aws::String&& value) { SetCurrencyCode(std::move(value)); return *this;}
    inline CurrentInstance& WithCurrencyCode(const char* value) { SetCurrencyCode(value); return *this;}
    ///@}
  private:

    Aws::String m_resourceId;
    bool m_resourceIdHasBeenSet = false;

    Aws::String m_instanceName;
    bool m_instanceNameHasBeenSet = false;

    Aws::Vector<TagValues> m_tags;
    bool m_tagsHasBeenSet = false;

    ResourceDetails m_resourceDetails;
    bool m_resourceDetailsHasBeenSet = false;

    ResourceUtilization m_resourceUtilization;
    bool m_resourceUtilizationHasBeenSet = false;

    Aws::String m_reservationCoveredHoursInLookbackPeriod;
    bool m_reservationCoveredHoursInLookbackPeriodHasBeenSet = false;

    Aws::String m_savingsPlansCoveredHoursInLookbackPeriod;
    bool m_savingsPlansCoveredHoursInLookbackPeriodHasBeenSet = false;

    Aws::String m_onDemandHoursInLookbackPeriod;
    bool m_onDemandHoursInLookbackPeriodHasBeenSet = false;

    Aws::String m_totalRunningHoursInLookbackPeriod;
    bool m_totalRunningHoursInLookbackPeriodHasBeenSet = false;

    Aws::String m_monthlyCost;
    bool m_monthlyCostHasBeenSet = false;

    Aws::String m_currencyCode;
    bool m_currencyCodeHasBeenSet = false;
  };

} // namespace Model
} // namespace CostExplorer
} // namespace Aws
