/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ce/CostExplorer_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ce/model/ResourceDetails.h>
#include <aws/ce/model/ResourceUtilization.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ce/model/PlatformDifference.h>
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
   * <p>Details on recommended instance.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ce-2017-10-25/TargetInstance">AWS
   * API Reference</a></p>
   */
  class TargetInstance
  {
  public:
    AWS_COSTEXPLORER_API TargetInstance() = default;
    AWS_COSTEXPLORER_API TargetInstance(Aws::Utils::Json::JsonView jsonValue);
    AWS_COSTEXPLORER_API TargetInstance& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_COSTEXPLORER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The expected cost to operate this instance type on a monthly basis.</p>
     */
    inline const Aws::String& GetEstimatedMonthlyCost() const { return m_estimatedMonthlyCost; }
    inline bool EstimatedMonthlyCostHasBeenSet() const { return m_estimatedMonthlyCostHasBeenSet; }
    template<typename EstimatedMonthlyCostT = Aws::String>
    void SetEstimatedMonthlyCost(EstimatedMonthlyCostT&& value) { m_estimatedMonthlyCostHasBeenSet = true; m_estimatedMonthlyCost = std::forward<EstimatedMonthlyCostT>(value); }
    template<typename EstimatedMonthlyCostT = Aws::String>
    TargetInstance& WithEstimatedMonthlyCost(EstimatedMonthlyCostT&& value) { SetEstimatedMonthlyCost(std::forward<EstimatedMonthlyCostT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The estimated savings that result from modification, on a monthly basis.</p>
     */
    inline const Aws::String& GetEstimatedMonthlySavings() const { return m_estimatedMonthlySavings; }
    inline bool EstimatedMonthlySavingsHasBeenSet() const { return m_estimatedMonthlySavingsHasBeenSet; }
    template<typename EstimatedMonthlySavingsT = Aws::String>
    void SetEstimatedMonthlySavings(EstimatedMonthlySavingsT&& value) { m_estimatedMonthlySavingsHasBeenSet = true; m_estimatedMonthlySavings = std::forward<EstimatedMonthlySavingsT>(value); }
    template<typename EstimatedMonthlySavingsT = Aws::String>
    TargetInstance& WithEstimatedMonthlySavings(EstimatedMonthlySavingsT&& value) { SetEstimatedMonthlySavings(std::forward<EstimatedMonthlySavingsT>(value)); return *this;}
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
    TargetInstance& WithCurrencyCode(CurrencyCodeT&& value) { SetCurrencyCode(std::forward<CurrencyCodeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Determines whether this recommendation is the defaulted Amazon Web Services
     * recommendation.</p>
     */
    inline bool GetDefaultTargetInstance() const { return m_defaultTargetInstance; }
    inline bool DefaultTargetInstanceHasBeenSet() const { return m_defaultTargetInstanceHasBeenSet; }
    inline void SetDefaultTargetInstance(bool value) { m_defaultTargetInstanceHasBeenSet = true; m_defaultTargetInstance = value; }
    inline TargetInstance& WithDefaultTargetInstance(bool value) { SetDefaultTargetInstance(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Details on the target instance type. </p>
     */
    inline const ResourceDetails& GetResourceDetails() const { return m_resourceDetails; }
    inline bool ResourceDetailsHasBeenSet() const { return m_resourceDetailsHasBeenSet; }
    template<typename ResourceDetailsT = ResourceDetails>
    void SetResourceDetails(ResourceDetailsT&& value) { m_resourceDetailsHasBeenSet = true; m_resourceDetails = std::forward<ResourceDetailsT>(value); }
    template<typename ResourceDetailsT = ResourceDetails>
    TargetInstance& WithResourceDetails(ResourceDetailsT&& value) { SetResourceDetails(std::forward<ResourceDetailsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The expected utilization metrics for target instance type.</p>
     */
    inline const ResourceUtilization& GetExpectedResourceUtilization() const { return m_expectedResourceUtilization; }
    inline bool ExpectedResourceUtilizationHasBeenSet() const { return m_expectedResourceUtilizationHasBeenSet; }
    template<typename ExpectedResourceUtilizationT = ResourceUtilization>
    void SetExpectedResourceUtilization(ExpectedResourceUtilizationT&& value) { m_expectedResourceUtilizationHasBeenSet = true; m_expectedResourceUtilization = std::forward<ExpectedResourceUtilizationT>(value); }
    template<typename ExpectedResourceUtilizationT = ResourceUtilization>
    TargetInstance& WithExpectedResourceUtilization(ExpectedResourceUtilizationT&& value) { SetExpectedResourceUtilization(std::forward<ExpectedResourceUtilizationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Explains the actions that you might need to take to successfully migrate your
     * workloads from the current instance type to the recommended instance type. </p>
     */
    inline const Aws::Vector<PlatformDifference>& GetPlatformDifferences() const { return m_platformDifferences; }
    inline bool PlatformDifferencesHasBeenSet() const { return m_platformDifferencesHasBeenSet; }
    template<typename PlatformDifferencesT = Aws::Vector<PlatformDifference>>
    void SetPlatformDifferences(PlatformDifferencesT&& value) { m_platformDifferencesHasBeenSet = true; m_platformDifferences = std::forward<PlatformDifferencesT>(value); }
    template<typename PlatformDifferencesT = Aws::Vector<PlatformDifference>>
    TargetInstance& WithPlatformDifferences(PlatformDifferencesT&& value) { SetPlatformDifferences(std::forward<PlatformDifferencesT>(value)); return *this;}
    inline TargetInstance& AddPlatformDifferences(PlatformDifference value) { m_platformDifferencesHasBeenSet = true; m_platformDifferences.push_back(value); return *this; }
    ///@}
  private:

    Aws::String m_estimatedMonthlyCost;
    bool m_estimatedMonthlyCostHasBeenSet = false;

    Aws::String m_estimatedMonthlySavings;
    bool m_estimatedMonthlySavingsHasBeenSet = false;

    Aws::String m_currencyCode;
    bool m_currencyCodeHasBeenSet = false;

    bool m_defaultTargetInstance{false};
    bool m_defaultTargetInstanceHasBeenSet = false;

    ResourceDetails m_resourceDetails;
    bool m_resourceDetailsHasBeenSet = false;

    ResourceUtilization m_expectedResourceUtilization;
    bool m_expectedResourceUtilizationHasBeenSet = false;

    Aws::Vector<PlatformDifference> m_platformDifferences;
    bool m_platformDifferencesHasBeenSet = false;
  };

} // namespace Model
} // namespace CostExplorer
} // namespace Aws
