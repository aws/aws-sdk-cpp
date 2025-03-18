/**
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
    AWS_COSTEXPLORER_API CurrentInstance() = default;
    AWS_COSTEXPLORER_API CurrentInstance(Aws::Utils::Json::JsonView jsonValue);
    AWS_COSTEXPLORER_API CurrentInstance& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_COSTEXPLORER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Resource ID of the current instance.</p>
     */
    inline const Aws::String& GetResourceId() const { return m_resourceId; }
    inline bool ResourceIdHasBeenSet() const { return m_resourceIdHasBeenSet; }
    template<typename ResourceIdT = Aws::String>
    void SetResourceId(ResourceIdT&& value) { m_resourceIdHasBeenSet = true; m_resourceId = std::forward<ResourceIdT>(value); }
    template<typename ResourceIdT = Aws::String>
    CurrentInstance& WithResourceId(ResourceIdT&& value) { SetResourceId(std::forward<ResourceIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name that you given an instance. This field shows as blank if you haven't
     * given the instance a name.</p>
     */
    inline const Aws::String& GetInstanceName() const { return m_instanceName; }
    inline bool InstanceNameHasBeenSet() const { return m_instanceNameHasBeenSet; }
    template<typename InstanceNameT = Aws::String>
    void SetInstanceName(InstanceNameT&& value) { m_instanceNameHasBeenSet = true; m_instanceName = std::forward<InstanceNameT>(value); }
    template<typename InstanceNameT = Aws::String>
    CurrentInstance& WithInstanceName(InstanceNameT&& value) { SetInstanceName(std::forward<InstanceNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Cost allocation resource tags that are applied to the instance.</p>
     */
    inline const Aws::Vector<TagValues>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Vector<TagValues>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Vector<TagValues>>
    CurrentInstance& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsT = TagValues>
    CurrentInstance& AddTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags.emplace_back(std::forward<TagsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Details about the resource and utilization.</p>
     */
    inline const ResourceDetails& GetResourceDetails() const { return m_resourceDetails; }
    inline bool ResourceDetailsHasBeenSet() const { return m_resourceDetailsHasBeenSet; }
    template<typename ResourceDetailsT = ResourceDetails>
    void SetResourceDetails(ResourceDetailsT&& value) { m_resourceDetailsHasBeenSet = true; m_resourceDetails = std::forward<ResourceDetailsT>(value); }
    template<typename ResourceDetailsT = ResourceDetails>
    CurrentInstance& WithResourceDetails(ResourceDetailsT&& value) { SetResourceDetails(std::forward<ResourceDetailsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Utilization information of the current instance during the lookback
     * period.</p>
     */
    inline const ResourceUtilization& GetResourceUtilization() const { return m_resourceUtilization; }
    inline bool ResourceUtilizationHasBeenSet() const { return m_resourceUtilizationHasBeenSet; }
    template<typename ResourceUtilizationT = ResourceUtilization>
    void SetResourceUtilization(ResourceUtilizationT&& value) { m_resourceUtilizationHasBeenSet = true; m_resourceUtilization = std::forward<ResourceUtilizationT>(value); }
    template<typename ResourceUtilizationT = ResourceUtilization>
    CurrentInstance& WithResourceUtilization(ResourceUtilizationT&& value) { SetResourceUtilization(std::forward<ResourceUtilizationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of hours during the lookback period that's covered by
     * reservations.</p>
     */
    inline const Aws::String& GetReservationCoveredHoursInLookbackPeriod() const { return m_reservationCoveredHoursInLookbackPeriod; }
    inline bool ReservationCoveredHoursInLookbackPeriodHasBeenSet() const { return m_reservationCoveredHoursInLookbackPeriodHasBeenSet; }
    template<typename ReservationCoveredHoursInLookbackPeriodT = Aws::String>
    void SetReservationCoveredHoursInLookbackPeriod(ReservationCoveredHoursInLookbackPeriodT&& value) { m_reservationCoveredHoursInLookbackPeriodHasBeenSet = true; m_reservationCoveredHoursInLookbackPeriod = std::forward<ReservationCoveredHoursInLookbackPeriodT>(value); }
    template<typename ReservationCoveredHoursInLookbackPeriodT = Aws::String>
    CurrentInstance& WithReservationCoveredHoursInLookbackPeriod(ReservationCoveredHoursInLookbackPeriodT&& value) { SetReservationCoveredHoursInLookbackPeriod(std::forward<ReservationCoveredHoursInLookbackPeriodT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of hours during the lookback period that's covered by Savings
     * Plans.</p>
     */
    inline const Aws::String& GetSavingsPlansCoveredHoursInLookbackPeriod() const { return m_savingsPlansCoveredHoursInLookbackPeriod; }
    inline bool SavingsPlansCoveredHoursInLookbackPeriodHasBeenSet() const { return m_savingsPlansCoveredHoursInLookbackPeriodHasBeenSet; }
    template<typename SavingsPlansCoveredHoursInLookbackPeriodT = Aws::String>
    void SetSavingsPlansCoveredHoursInLookbackPeriod(SavingsPlansCoveredHoursInLookbackPeriodT&& value) { m_savingsPlansCoveredHoursInLookbackPeriodHasBeenSet = true; m_savingsPlansCoveredHoursInLookbackPeriod = std::forward<SavingsPlansCoveredHoursInLookbackPeriodT>(value); }
    template<typename SavingsPlansCoveredHoursInLookbackPeriodT = Aws::String>
    CurrentInstance& WithSavingsPlansCoveredHoursInLookbackPeriod(SavingsPlansCoveredHoursInLookbackPeriodT&& value) { SetSavingsPlansCoveredHoursInLookbackPeriod(std::forward<SavingsPlansCoveredHoursInLookbackPeriodT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of hours during the lookback period that's billed at On-Demand
     * rates.</p>
     */
    inline const Aws::String& GetOnDemandHoursInLookbackPeriod() const { return m_onDemandHoursInLookbackPeriod; }
    inline bool OnDemandHoursInLookbackPeriodHasBeenSet() const { return m_onDemandHoursInLookbackPeriodHasBeenSet; }
    template<typename OnDemandHoursInLookbackPeriodT = Aws::String>
    void SetOnDemandHoursInLookbackPeriod(OnDemandHoursInLookbackPeriodT&& value) { m_onDemandHoursInLookbackPeriodHasBeenSet = true; m_onDemandHoursInLookbackPeriod = std::forward<OnDemandHoursInLookbackPeriodT>(value); }
    template<typename OnDemandHoursInLookbackPeriodT = Aws::String>
    CurrentInstance& WithOnDemandHoursInLookbackPeriod(OnDemandHoursInLookbackPeriodT&& value) { SetOnDemandHoursInLookbackPeriod(std::forward<OnDemandHoursInLookbackPeriodT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The total number of hours that the instance ran during the lookback
     * period.</p>
     */
    inline const Aws::String& GetTotalRunningHoursInLookbackPeriod() const { return m_totalRunningHoursInLookbackPeriod; }
    inline bool TotalRunningHoursInLookbackPeriodHasBeenSet() const { return m_totalRunningHoursInLookbackPeriodHasBeenSet; }
    template<typename TotalRunningHoursInLookbackPeriodT = Aws::String>
    void SetTotalRunningHoursInLookbackPeriod(TotalRunningHoursInLookbackPeriodT&& value) { m_totalRunningHoursInLookbackPeriodHasBeenSet = true; m_totalRunningHoursInLookbackPeriod = std::forward<TotalRunningHoursInLookbackPeriodT>(value); }
    template<typename TotalRunningHoursInLookbackPeriodT = Aws::String>
    CurrentInstance& WithTotalRunningHoursInLookbackPeriod(TotalRunningHoursInLookbackPeriodT&& value) { SetTotalRunningHoursInLookbackPeriod(std::forward<TotalRunningHoursInLookbackPeriodT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current On-Demand cost of operating this instance on a monthly basis.</p>
     */
    inline const Aws::String& GetMonthlyCost() const { return m_monthlyCost; }
    inline bool MonthlyCostHasBeenSet() const { return m_monthlyCostHasBeenSet; }
    template<typename MonthlyCostT = Aws::String>
    void SetMonthlyCost(MonthlyCostT&& value) { m_monthlyCostHasBeenSet = true; m_monthlyCost = std::forward<MonthlyCostT>(value); }
    template<typename MonthlyCostT = Aws::String>
    CurrentInstance& WithMonthlyCost(MonthlyCostT&& value) { SetMonthlyCost(std::forward<MonthlyCostT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The currency code that Amazon Web Services used to calculate the costs for
     * this instance.</p>
     */
    inline const Aws::String& GetCurrencyCode() const { return m_currencyCode; }
    inline bool CurrencyCodeHasBeenSet() const { return m_currencyCodeHasBeenSet; }
    template<typename CurrencyCodeT = Aws::String>
    void SetCurrencyCode(CurrencyCodeT&& value) { m_currencyCodeHasBeenSet = true; m_currencyCode = std::forward<CurrencyCodeT>(value); }
    template<typename CurrencyCodeT = Aws::String>
    CurrentInstance& WithCurrencyCode(CurrencyCodeT&& value) { SetCurrencyCode(std::forward<CurrencyCodeT>(value)); return *this;}
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
