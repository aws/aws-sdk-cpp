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
    AWS_COSTEXPLORER_API TargetInstance();
    AWS_COSTEXPLORER_API TargetInstance(Aws::Utils::Json::JsonView jsonValue);
    AWS_COSTEXPLORER_API TargetInstance& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_COSTEXPLORER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The expected cost to operate this instance type on a monthly basis.</p>
     */
    inline const Aws::String& GetEstimatedMonthlyCost() const{ return m_estimatedMonthlyCost; }

    /**
     * <p>The expected cost to operate this instance type on a monthly basis.</p>
     */
    inline bool EstimatedMonthlyCostHasBeenSet() const { return m_estimatedMonthlyCostHasBeenSet; }

    /**
     * <p>The expected cost to operate this instance type on a monthly basis.</p>
     */
    inline void SetEstimatedMonthlyCost(const Aws::String& value) { m_estimatedMonthlyCostHasBeenSet = true; m_estimatedMonthlyCost = value; }

    /**
     * <p>The expected cost to operate this instance type on a monthly basis.</p>
     */
    inline void SetEstimatedMonthlyCost(Aws::String&& value) { m_estimatedMonthlyCostHasBeenSet = true; m_estimatedMonthlyCost = std::move(value); }

    /**
     * <p>The expected cost to operate this instance type on a monthly basis.</p>
     */
    inline void SetEstimatedMonthlyCost(const char* value) { m_estimatedMonthlyCostHasBeenSet = true; m_estimatedMonthlyCost.assign(value); }

    /**
     * <p>The expected cost to operate this instance type on a monthly basis.</p>
     */
    inline TargetInstance& WithEstimatedMonthlyCost(const Aws::String& value) { SetEstimatedMonthlyCost(value); return *this;}

    /**
     * <p>The expected cost to operate this instance type on a monthly basis.</p>
     */
    inline TargetInstance& WithEstimatedMonthlyCost(Aws::String&& value) { SetEstimatedMonthlyCost(std::move(value)); return *this;}

    /**
     * <p>The expected cost to operate this instance type on a monthly basis.</p>
     */
    inline TargetInstance& WithEstimatedMonthlyCost(const char* value) { SetEstimatedMonthlyCost(value); return *this;}


    /**
     * <p>The estimated savings that result from modification, on a monthly basis.</p>
     */
    inline const Aws::String& GetEstimatedMonthlySavings() const{ return m_estimatedMonthlySavings; }

    /**
     * <p>The estimated savings that result from modification, on a monthly basis.</p>
     */
    inline bool EstimatedMonthlySavingsHasBeenSet() const { return m_estimatedMonthlySavingsHasBeenSet; }

    /**
     * <p>The estimated savings that result from modification, on a monthly basis.</p>
     */
    inline void SetEstimatedMonthlySavings(const Aws::String& value) { m_estimatedMonthlySavingsHasBeenSet = true; m_estimatedMonthlySavings = value; }

    /**
     * <p>The estimated savings that result from modification, on a monthly basis.</p>
     */
    inline void SetEstimatedMonthlySavings(Aws::String&& value) { m_estimatedMonthlySavingsHasBeenSet = true; m_estimatedMonthlySavings = std::move(value); }

    /**
     * <p>The estimated savings that result from modification, on a monthly basis.</p>
     */
    inline void SetEstimatedMonthlySavings(const char* value) { m_estimatedMonthlySavingsHasBeenSet = true; m_estimatedMonthlySavings.assign(value); }

    /**
     * <p>The estimated savings that result from modification, on a monthly basis.</p>
     */
    inline TargetInstance& WithEstimatedMonthlySavings(const Aws::String& value) { SetEstimatedMonthlySavings(value); return *this;}

    /**
     * <p>The estimated savings that result from modification, on a monthly basis.</p>
     */
    inline TargetInstance& WithEstimatedMonthlySavings(Aws::String&& value) { SetEstimatedMonthlySavings(std::move(value)); return *this;}

    /**
     * <p>The estimated savings that result from modification, on a monthly basis.</p>
     */
    inline TargetInstance& WithEstimatedMonthlySavings(const char* value) { SetEstimatedMonthlySavings(value); return *this;}


    /**
     * <p>The currency code that Amazon Web Services used to calculate the costs for
     * this instance.</p>
     */
    inline const Aws::String& GetCurrencyCode() const{ return m_currencyCode; }

    /**
     * <p>The currency code that Amazon Web Services used to calculate the costs for
     * this instance.</p>
     */
    inline bool CurrencyCodeHasBeenSet() const { return m_currencyCodeHasBeenSet; }

    /**
     * <p>The currency code that Amazon Web Services used to calculate the costs for
     * this instance.</p>
     */
    inline void SetCurrencyCode(const Aws::String& value) { m_currencyCodeHasBeenSet = true; m_currencyCode = value; }

    /**
     * <p>The currency code that Amazon Web Services used to calculate the costs for
     * this instance.</p>
     */
    inline void SetCurrencyCode(Aws::String&& value) { m_currencyCodeHasBeenSet = true; m_currencyCode = std::move(value); }

    /**
     * <p>The currency code that Amazon Web Services used to calculate the costs for
     * this instance.</p>
     */
    inline void SetCurrencyCode(const char* value) { m_currencyCodeHasBeenSet = true; m_currencyCode.assign(value); }

    /**
     * <p>The currency code that Amazon Web Services used to calculate the costs for
     * this instance.</p>
     */
    inline TargetInstance& WithCurrencyCode(const Aws::String& value) { SetCurrencyCode(value); return *this;}

    /**
     * <p>The currency code that Amazon Web Services used to calculate the costs for
     * this instance.</p>
     */
    inline TargetInstance& WithCurrencyCode(Aws::String&& value) { SetCurrencyCode(std::move(value)); return *this;}

    /**
     * <p>The currency code that Amazon Web Services used to calculate the costs for
     * this instance.</p>
     */
    inline TargetInstance& WithCurrencyCode(const char* value) { SetCurrencyCode(value); return *this;}


    /**
     * <p>Determines whether this recommendation is the defaulted Amazon Web Services
     * recommendation.</p>
     */
    inline bool GetDefaultTargetInstance() const{ return m_defaultTargetInstance; }

    /**
     * <p>Determines whether this recommendation is the defaulted Amazon Web Services
     * recommendation.</p>
     */
    inline bool DefaultTargetInstanceHasBeenSet() const { return m_defaultTargetInstanceHasBeenSet; }

    /**
     * <p>Determines whether this recommendation is the defaulted Amazon Web Services
     * recommendation.</p>
     */
    inline void SetDefaultTargetInstance(bool value) { m_defaultTargetInstanceHasBeenSet = true; m_defaultTargetInstance = value; }

    /**
     * <p>Determines whether this recommendation is the defaulted Amazon Web Services
     * recommendation.</p>
     */
    inline TargetInstance& WithDefaultTargetInstance(bool value) { SetDefaultTargetInstance(value); return *this;}


    /**
     * <p>Details on the target instance type. </p>
     */
    inline const ResourceDetails& GetResourceDetails() const{ return m_resourceDetails; }

    /**
     * <p>Details on the target instance type. </p>
     */
    inline bool ResourceDetailsHasBeenSet() const { return m_resourceDetailsHasBeenSet; }

    /**
     * <p>Details on the target instance type. </p>
     */
    inline void SetResourceDetails(const ResourceDetails& value) { m_resourceDetailsHasBeenSet = true; m_resourceDetails = value; }

    /**
     * <p>Details on the target instance type. </p>
     */
    inline void SetResourceDetails(ResourceDetails&& value) { m_resourceDetailsHasBeenSet = true; m_resourceDetails = std::move(value); }

    /**
     * <p>Details on the target instance type. </p>
     */
    inline TargetInstance& WithResourceDetails(const ResourceDetails& value) { SetResourceDetails(value); return *this;}

    /**
     * <p>Details on the target instance type. </p>
     */
    inline TargetInstance& WithResourceDetails(ResourceDetails&& value) { SetResourceDetails(std::move(value)); return *this;}


    /**
     * <p>The expected utilization metrics for target instance type.</p>
     */
    inline const ResourceUtilization& GetExpectedResourceUtilization() const{ return m_expectedResourceUtilization; }

    /**
     * <p>The expected utilization metrics for target instance type.</p>
     */
    inline bool ExpectedResourceUtilizationHasBeenSet() const { return m_expectedResourceUtilizationHasBeenSet; }

    /**
     * <p>The expected utilization metrics for target instance type.</p>
     */
    inline void SetExpectedResourceUtilization(const ResourceUtilization& value) { m_expectedResourceUtilizationHasBeenSet = true; m_expectedResourceUtilization = value; }

    /**
     * <p>The expected utilization metrics for target instance type.</p>
     */
    inline void SetExpectedResourceUtilization(ResourceUtilization&& value) { m_expectedResourceUtilizationHasBeenSet = true; m_expectedResourceUtilization = std::move(value); }

    /**
     * <p>The expected utilization metrics for target instance type.</p>
     */
    inline TargetInstance& WithExpectedResourceUtilization(const ResourceUtilization& value) { SetExpectedResourceUtilization(value); return *this;}

    /**
     * <p>The expected utilization metrics for target instance type.</p>
     */
    inline TargetInstance& WithExpectedResourceUtilization(ResourceUtilization&& value) { SetExpectedResourceUtilization(std::move(value)); return *this;}


    /**
     * <p>Explains the actions that you might need to take to successfully migrate your
     * workloads from the current instance type to the recommended instance type. </p>
     */
    inline const Aws::Vector<PlatformDifference>& GetPlatformDifferences() const{ return m_platformDifferences; }

    /**
     * <p>Explains the actions that you might need to take to successfully migrate your
     * workloads from the current instance type to the recommended instance type. </p>
     */
    inline bool PlatformDifferencesHasBeenSet() const { return m_platformDifferencesHasBeenSet; }

    /**
     * <p>Explains the actions that you might need to take to successfully migrate your
     * workloads from the current instance type to the recommended instance type. </p>
     */
    inline void SetPlatformDifferences(const Aws::Vector<PlatformDifference>& value) { m_platformDifferencesHasBeenSet = true; m_platformDifferences = value; }

    /**
     * <p>Explains the actions that you might need to take to successfully migrate your
     * workloads from the current instance type to the recommended instance type. </p>
     */
    inline void SetPlatformDifferences(Aws::Vector<PlatformDifference>&& value) { m_platformDifferencesHasBeenSet = true; m_platformDifferences = std::move(value); }

    /**
     * <p>Explains the actions that you might need to take to successfully migrate your
     * workloads from the current instance type to the recommended instance type. </p>
     */
    inline TargetInstance& WithPlatformDifferences(const Aws::Vector<PlatformDifference>& value) { SetPlatformDifferences(value); return *this;}

    /**
     * <p>Explains the actions that you might need to take to successfully migrate your
     * workloads from the current instance type to the recommended instance type. </p>
     */
    inline TargetInstance& WithPlatformDifferences(Aws::Vector<PlatformDifference>&& value) { SetPlatformDifferences(std::move(value)); return *this;}

    /**
     * <p>Explains the actions that you might need to take to successfully migrate your
     * workloads from the current instance type to the recommended instance type. </p>
     */
    inline TargetInstance& AddPlatformDifferences(const PlatformDifference& value) { m_platformDifferencesHasBeenSet = true; m_platformDifferences.push_back(value); return *this; }

    /**
     * <p>Explains the actions that you might need to take to successfully migrate your
     * workloads from the current instance type to the recommended instance type. </p>
     */
    inline TargetInstance& AddPlatformDifferences(PlatformDifference&& value) { m_platformDifferencesHasBeenSet = true; m_platformDifferences.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_estimatedMonthlyCost;
    bool m_estimatedMonthlyCostHasBeenSet = false;

    Aws::String m_estimatedMonthlySavings;
    bool m_estimatedMonthlySavingsHasBeenSet = false;

    Aws::String m_currencyCode;
    bool m_currencyCodeHasBeenSet = false;

    bool m_defaultTargetInstance;
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
