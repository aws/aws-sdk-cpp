/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/discovery/ApplicationDiscoveryService_EXPORTS.h>
#include <aws/discovery/model/UsageMetricBasis.h>
#include <aws/discovery/model/Tenancy.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/discovery/model/ReservedInstanceOptions.h>
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
namespace ApplicationDiscoveryService
{
namespace Model
{

  /**
   * <p> Indicates that the exported data must include EC2 instance type matches for
   * on-premises servers that are discovered through Amazon Web Services Application
   * Discovery Service. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/discovery-2015-11-01/Ec2RecommendationsExportPreferences">AWS
   * API Reference</a></p>
   */
  class Ec2RecommendationsExportPreferences
  {
  public:
    AWS_APPLICATIONDISCOVERYSERVICE_API Ec2RecommendationsExportPreferences() = default;
    AWS_APPLICATIONDISCOVERYSERVICE_API Ec2RecommendationsExportPreferences(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPLICATIONDISCOVERYSERVICE_API Ec2RecommendationsExportPreferences& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPLICATIONDISCOVERYSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> If set to true, the export <a
     * href="https://docs.aws.amazon.com/application-discovery/latest/APIReference/API_StartExportTask.html#API_StartExportTask_RequestSyntax">preferences</a>
     * is set to <code>Ec2RecommendationsExportPreferences</code>. </p>
     */
    inline bool GetEnabled() const { return m_enabled; }
    inline bool EnabledHasBeenSet() const { return m_enabledHasBeenSet; }
    inline void SetEnabled(bool value) { m_enabledHasBeenSet = true; m_enabled = value; }
    inline Ec2RecommendationsExportPreferences& WithEnabled(bool value) { SetEnabled(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The recommended EC2 instance type that matches the CPU usage metric of
     * server performance data. </p>
     */
    inline const UsageMetricBasis& GetCpuPerformanceMetricBasis() const { return m_cpuPerformanceMetricBasis; }
    inline bool CpuPerformanceMetricBasisHasBeenSet() const { return m_cpuPerformanceMetricBasisHasBeenSet; }
    template<typename CpuPerformanceMetricBasisT = UsageMetricBasis>
    void SetCpuPerformanceMetricBasis(CpuPerformanceMetricBasisT&& value) { m_cpuPerformanceMetricBasisHasBeenSet = true; m_cpuPerformanceMetricBasis = std::forward<CpuPerformanceMetricBasisT>(value); }
    template<typename CpuPerformanceMetricBasisT = UsageMetricBasis>
    Ec2RecommendationsExportPreferences& WithCpuPerformanceMetricBasis(CpuPerformanceMetricBasisT&& value) { SetCpuPerformanceMetricBasis(std::forward<CpuPerformanceMetricBasisT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The recommended EC2 instance type that matches the Memory usage metric of
     * server performance data. </p>
     */
    inline const UsageMetricBasis& GetRamPerformanceMetricBasis() const { return m_ramPerformanceMetricBasis; }
    inline bool RamPerformanceMetricBasisHasBeenSet() const { return m_ramPerformanceMetricBasisHasBeenSet; }
    template<typename RamPerformanceMetricBasisT = UsageMetricBasis>
    void SetRamPerformanceMetricBasis(RamPerformanceMetricBasisT&& value) { m_ramPerformanceMetricBasisHasBeenSet = true; m_ramPerformanceMetricBasis = std::forward<RamPerformanceMetricBasisT>(value); }
    template<typename RamPerformanceMetricBasisT = UsageMetricBasis>
    Ec2RecommendationsExportPreferences& WithRamPerformanceMetricBasis(RamPerformanceMetricBasisT&& value) { SetRamPerformanceMetricBasis(std::forward<RamPerformanceMetricBasisT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The target tenancy to use for your recommended EC2 instances. </p>
     */
    inline Tenancy GetTenancy() const { return m_tenancy; }
    inline bool TenancyHasBeenSet() const { return m_tenancyHasBeenSet; }
    inline void SetTenancy(Tenancy value) { m_tenancyHasBeenSet = true; m_tenancy = value; }
    inline Ec2RecommendationsExportPreferences& WithTenancy(Tenancy value) { SetTenancy(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> An array of instance types to exclude from recommendations. </p>
     */
    inline const Aws::Vector<Aws::String>& GetExcludedInstanceTypes() const { return m_excludedInstanceTypes; }
    inline bool ExcludedInstanceTypesHasBeenSet() const { return m_excludedInstanceTypesHasBeenSet; }
    template<typename ExcludedInstanceTypesT = Aws::Vector<Aws::String>>
    void SetExcludedInstanceTypes(ExcludedInstanceTypesT&& value) { m_excludedInstanceTypesHasBeenSet = true; m_excludedInstanceTypes = std::forward<ExcludedInstanceTypesT>(value); }
    template<typename ExcludedInstanceTypesT = Aws::Vector<Aws::String>>
    Ec2RecommendationsExportPreferences& WithExcludedInstanceTypes(ExcludedInstanceTypesT&& value) { SetExcludedInstanceTypes(std::forward<ExcludedInstanceTypesT>(value)); return *this;}
    template<typename ExcludedInstanceTypesT = Aws::String>
    Ec2RecommendationsExportPreferences& AddExcludedInstanceTypes(ExcludedInstanceTypesT&& value) { m_excludedInstanceTypesHasBeenSet = true; m_excludedInstanceTypes.emplace_back(std::forward<ExcludedInstanceTypesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> The target Amazon Web Services Region for the recommendations. You can use
     * any of the Region codes available for the chosen service, as listed in <a
     * href="https://docs.aws.amazon.com/general/latest/gr/rande.html">Amazon Web
     * Services service endpoints</a> in the <i>Amazon Web Services General
     * Reference</i>. </p>
     */
    inline const Aws::String& GetPreferredRegion() const { return m_preferredRegion; }
    inline bool PreferredRegionHasBeenSet() const { return m_preferredRegionHasBeenSet; }
    template<typename PreferredRegionT = Aws::String>
    void SetPreferredRegion(PreferredRegionT&& value) { m_preferredRegionHasBeenSet = true; m_preferredRegion = std::forward<PreferredRegionT>(value); }
    template<typename PreferredRegionT = Aws::String>
    Ec2RecommendationsExportPreferences& WithPreferredRegion(PreferredRegionT&& value) { SetPreferredRegion(std::forward<PreferredRegionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The contract type for a reserved instance. If blank, we assume an On-Demand
     * instance is preferred. </p>
     */
    inline const ReservedInstanceOptions& GetReservedInstanceOptions() const { return m_reservedInstanceOptions; }
    inline bool ReservedInstanceOptionsHasBeenSet() const { return m_reservedInstanceOptionsHasBeenSet; }
    template<typename ReservedInstanceOptionsT = ReservedInstanceOptions>
    void SetReservedInstanceOptions(ReservedInstanceOptionsT&& value) { m_reservedInstanceOptionsHasBeenSet = true; m_reservedInstanceOptions = std::forward<ReservedInstanceOptionsT>(value); }
    template<typename ReservedInstanceOptionsT = ReservedInstanceOptions>
    Ec2RecommendationsExportPreferences& WithReservedInstanceOptions(ReservedInstanceOptionsT&& value) { SetReservedInstanceOptions(std::forward<ReservedInstanceOptionsT>(value)); return *this;}
    ///@}
  private:

    bool m_enabled{false};
    bool m_enabledHasBeenSet = false;

    UsageMetricBasis m_cpuPerformanceMetricBasis;
    bool m_cpuPerformanceMetricBasisHasBeenSet = false;

    UsageMetricBasis m_ramPerformanceMetricBasis;
    bool m_ramPerformanceMetricBasisHasBeenSet = false;

    Tenancy m_tenancy{Tenancy::NOT_SET};
    bool m_tenancyHasBeenSet = false;

    Aws::Vector<Aws::String> m_excludedInstanceTypes;
    bool m_excludedInstanceTypesHasBeenSet = false;

    Aws::String m_preferredRegion;
    bool m_preferredRegionHasBeenSet = false;

    ReservedInstanceOptions m_reservedInstanceOptions;
    bool m_reservedInstanceOptionsHasBeenSet = false;
  };

} // namespace Model
} // namespace ApplicationDiscoveryService
} // namespace Aws
