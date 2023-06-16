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
    AWS_APPLICATIONDISCOVERYSERVICE_API Ec2RecommendationsExportPreferences();
    AWS_APPLICATIONDISCOVERYSERVICE_API Ec2RecommendationsExportPreferences(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPLICATIONDISCOVERYSERVICE_API Ec2RecommendationsExportPreferences& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPLICATIONDISCOVERYSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p> If set to true, the export <a
     * href="https://docs.aws.amazon.com/application-discovery/latest/APIReference/API_StartExportTask.html#API_StartExportTask_RequestSyntax">preferences</a>
     * is set to <code>Ec2RecommendationsExportPreferences</code>. </p>
     */
    inline bool GetEnabled() const{ return m_enabled; }

    /**
     * <p> If set to true, the export <a
     * href="https://docs.aws.amazon.com/application-discovery/latest/APIReference/API_StartExportTask.html#API_StartExportTask_RequestSyntax">preferences</a>
     * is set to <code>Ec2RecommendationsExportPreferences</code>. </p>
     */
    inline bool EnabledHasBeenSet() const { return m_enabledHasBeenSet; }

    /**
     * <p> If set to true, the export <a
     * href="https://docs.aws.amazon.com/application-discovery/latest/APIReference/API_StartExportTask.html#API_StartExportTask_RequestSyntax">preferences</a>
     * is set to <code>Ec2RecommendationsExportPreferences</code>. </p>
     */
    inline void SetEnabled(bool value) { m_enabledHasBeenSet = true; m_enabled = value; }

    /**
     * <p> If set to true, the export <a
     * href="https://docs.aws.amazon.com/application-discovery/latest/APIReference/API_StartExportTask.html#API_StartExportTask_RequestSyntax">preferences</a>
     * is set to <code>Ec2RecommendationsExportPreferences</code>. </p>
     */
    inline Ec2RecommendationsExportPreferences& WithEnabled(bool value) { SetEnabled(value); return *this;}


    /**
     * <p> The recommended EC2 instance type that matches the CPU usage metric of
     * server performance data. </p>
     */
    inline const UsageMetricBasis& GetCpuPerformanceMetricBasis() const{ return m_cpuPerformanceMetricBasis; }

    /**
     * <p> The recommended EC2 instance type that matches the CPU usage metric of
     * server performance data. </p>
     */
    inline bool CpuPerformanceMetricBasisHasBeenSet() const { return m_cpuPerformanceMetricBasisHasBeenSet; }

    /**
     * <p> The recommended EC2 instance type that matches the CPU usage metric of
     * server performance data. </p>
     */
    inline void SetCpuPerformanceMetricBasis(const UsageMetricBasis& value) { m_cpuPerformanceMetricBasisHasBeenSet = true; m_cpuPerformanceMetricBasis = value; }

    /**
     * <p> The recommended EC2 instance type that matches the CPU usage metric of
     * server performance data. </p>
     */
    inline void SetCpuPerformanceMetricBasis(UsageMetricBasis&& value) { m_cpuPerformanceMetricBasisHasBeenSet = true; m_cpuPerformanceMetricBasis = std::move(value); }

    /**
     * <p> The recommended EC2 instance type that matches the CPU usage metric of
     * server performance data. </p>
     */
    inline Ec2RecommendationsExportPreferences& WithCpuPerformanceMetricBasis(const UsageMetricBasis& value) { SetCpuPerformanceMetricBasis(value); return *this;}

    /**
     * <p> The recommended EC2 instance type that matches the CPU usage metric of
     * server performance data. </p>
     */
    inline Ec2RecommendationsExportPreferences& WithCpuPerformanceMetricBasis(UsageMetricBasis&& value) { SetCpuPerformanceMetricBasis(std::move(value)); return *this;}


    /**
     * <p> The recommended EC2 instance type that matches the Memory usage metric of
     * server performance data. </p>
     */
    inline const UsageMetricBasis& GetRamPerformanceMetricBasis() const{ return m_ramPerformanceMetricBasis; }

    /**
     * <p> The recommended EC2 instance type that matches the Memory usage metric of
     * server performance data. </p>
     */
    inline bool RamPerformanceMetricBasisHasBeenSet() const { return m_ramPerformanceMetricBasisHasBeenSet; }

    /**
     * <p> The recommended EC2 instance type that matches the Memory usage metric of
     * server performance data. </p>
     */
    inline void SetRamPerformanceMetricBasis(const UsageMetricBasis& value) { m_ramPerformanceMetricBasisHasBeenSet = true; m_ramPerformanceMetricBasis = value; }

    /**
     * <p> The recommended EC2 instance type that matches the Memory usage metric of
     * server performance data. </p>
     */
    inline void SetRamPerformanceMetricBasis(UsageMetricBasis&& value) { m_ramPerformanceMetricBasisHasBeenSet = true; m_ramPerformanceMetricBasis = std::move(value); }

    /**
     * <p> The recommended EC2 instance type that matches the Memory usage metric of
     * server performance data. </p>
     */
    inline Ec2RecommendationsExportPreferences& WithRamPerformanceMetricBasis(const UsageMetricBasis& value) { SetRamPerformanceMetricBasis(value); return *this;}

    /**
     * <p> The recommended EC2 instance type that matches the Memory usage metric of
     * server performance data. </p>
     */
    inline Ec2RecommendationsExportPreferences& WithRamPerformanceMetricBasis(UsageMetricBasis&& value) { SetRamPerformanceMetricBasis(std::move(value)); return *this;}


    /**
     * <p> The target tenancy to use for your recommended EC2 instances. </p>
     */
    inline const Tenancy& GetTenancy() const{ return m_tenancy; }

    /**
     * <p> The target tenancy to use for your recommended EC2 instances. </p>
     */
    inline bool TenancyHasBeenSet() const { return m_tenancyHasBeenSet; }

    /**
     * <p> The target tenancy to use for your recommended EC2 instances. </p>
     */
    inline void SetTenancy(const Tenancy& value) { m_tenancyHasBeenSet = true; m_tenancy = value; }

    /**
     * <p> The target tenancy to use for your recommended EC2 instances. </p>
     */
    inline void SetTenancy(Tenancy&& value) { m_tenancyHasBeenSet = true; m_tenancy = std::move(value); }

    /**
     * <p> The target tenancy to use for your recommended EC2 instances. </p>
     */
    inline Ec2RecommendationsExportPreferences& WithTenancy(const Tenancy& value) { SetTenancy(value); return *this;}

    /**
     * <p> The target tenancy to use for your recommended EC2 instances. </p>
     */
    inline Ec2RecommendationsExportPreferences& WithTenancy(Tenancy&& value) { SetTenancy(std::move(value)); return *this;}


    /**
     * <p> An array of instance types to exclude from recommendations. </p>
     */
    inline const Aws::Vector<Aws::String>& GetExcludedInstanceTypes() const{ return m_excludedInstanceTypes; }

    /**
     * <p> An array of instance types to exclude from recommendations. </p>
     */
    inline bool ExcludedInstanceTypesHasBeenSet() const { return m_excludedInstanceTypesHasBeenSet; }

    /**
     * <p> An array of instance types to exclude from recommendations. </p>
     */
    inline void SetExcludedInstanceTypes(const Aws::Vector<Aws::String>& value) { m_excludedInstanceTypesHasBeenSet = true; m_excludedInstanceTypes = value; }

    /**
     * <p> An array of instance types to exclude from recommendations. </p>
     */
    inline void SetExcludedInstanceTypes(Aws::Vector<Aws::String>&& value) { m_excludedInstanceTypesHasBeenSet = true; m_excludedInstanceTypes = std::move(value); }

    /**
     * <p> An array of instance types to exclude from recommendations. </p>
     */
    inline Ec2RecommendationsExportPreferences& WithExcludedInstanceTypes(const Aws::Vector<Aws::String>& value) { SetExcludedInstanceTypes(value); return *this;}

    /**
     * <p> An array of instance types to exclude from recommendations. </p>
     */
    inline Ec2RecommendationsExportPreferences& WithExcludedInstanceTypes(Aws::Vector<Aws::String>&& value) { SetExcludedInstanceTypes(std::move(value)); return *this;}

    /**
     * <p> An array of instance types to exclude from recommendations. </p>
     */
    inline Ec2RecommendationsExportPreferences& AddExcludedInstanceTypes(const Aws::String& value) { m_excludedInstanceTypesHasBeenSet = true; m_excludedInstanceTypes.push_back(value); return *this; }

    /**
     * <p> An array of instance types to exclude from recommendations. </p>
     */
    inline Ec2RecommendationsExportPreferences& AddExcludedInstanceTypes(Aws::String&& value) { m_excludedInstanceTypesHasBeenSet = true; m_excludedInstanceTypes.push_back(std::move(value)); return *this; }

    /**
     * <p> An array of instance types to exclude from recommendations. </p>
     */
    inline Ec2RecommendationsExportPreferences& AddExcludedInstanceTypes(const char* value) { m_excludedInstanceTypesHasBeenSet = true; m_excludedInstanceTypes.push_back(value); return *this; }


    /**
     * <p> The target Amazon Web Services Region for the recommendations. You can use
     * any of the Region codes available for the chosen service, as listed in <a
     * href="https://docs.aws.amazon.com/general/latest/gr/rande.html">Amazon Web
     * Services service endpoints</a> in the <i>Amazon Web Services General
     * Reference</i>. </p>
     */
    inline const Aws::String& GetPreferredRegion() const{ return m_preferredRegion; }

    /**
     * <p> The target Amazon Web Services Region for the recommendations. You can use
     * any of the Region codes available for the chosen service, as listed in <a
     * href="https://docs.aws.amazon.com/general/latest/gr/rande.html">Amazon Web
     * Services service endpoints</a> in the <i>Amazon Web Services General
     * Reference</i>. </p>
     */
    inline bool PreferredRegionHasBeenSet() const { return m_preferredRegionHasBeenSet; }

    /**
     * <p> The target Amazon Web Services Region for the recommendations. You can use
     * any of the Region codes available for the chosen service, as listed in <a
     * href="https://docs.aws.amazon.com/general/latest/gr/rande.html">Amazon Web
     * Services service endpoints</a> in the <i>Amazon Web Services General
     * Reference</i>. </p>
     */
    inline void SetPreferredRegion(const Aws::String& value) { m_preferredRegionHasBeenSet = true; m_preferredRegion = value; }

    /**
     * <p> The target Amazon Web Services Region for the recommendations. You can use
     * any of the Region codes available for the chosen service, as listed in <a
     * href="https://docs.aws.amazon.com/general/latest/gr/rande.html">Amazon Web
     * Services service endpoints</a> in the <i>Amazon Web Services General
     * Reference</i>. </p>
     */
    inline void SetPreferredRegion(Aws::String&& value) { m_preferredRegionHasBeenSet = true; m_preferredRegion = std::move(value); }

    /**
     * <p> The target Amazon Web Services Region for the recommendations. You can use
     * any of the Region codes available for the chosen service, as listed in <a
     * href="https://docs.aws.amazon.com/general/latest/gr/rande.html">Amazon Web
     * Services service endpoints</a> in the <i>Amazon Web Services General
     * Reference</i>. </p>
     */
    inline void SetPreferredRegion(const char* value) { m_preferredRegionHasBeenSet = true; m_preferredRegion.assign(value); }

    /**
     * <p> The target Amazon Web Services Region for the recommendations. You can use
     * any of the Region codes available for the chosen service, as listed in <a
     * href="https://docs.aws.amazon.com/general/latest/gr/rande.html">Amazon Web
     * Services service endpoints</a> in the <i>Amazon Web Services General
     * Reference</i>. </p>
     */
    inline Ec2RecommendationsExportPreferences& WithPreferredRegion(const Aws::String& value) { SetPreferredRegion(value); return *this;}

    /**
     * <p> The target Amazon Web Services Region for the recommendations. You can use
     * any of the Region codes available for the chosen service, as listed in <a
     * href="https://docs.aws.amazon.com/general/latest/gr/rande.html">Amazon Web
     * Services service endpoints</a> in the <i>Amazon Web Services General
     * Reference</i>. </p>
     */
    inline Ec2RecommendationsExportPreferences& WithPreferredRegion(Aws::String&& value) { SetPreferredRegion(std::move(value)); return *this;}

    /**
     * <p> The target Amazon Web Services Region for the recommendations. You can use
     * any of the Region codes available for the chosen service, as listed in <a
     * href="https://docs.aws.amazon.com/general/latest/gr/rande.html">Amazon Web
     * Services service endpoints</a> in the <i>Amazon Web Services General
     * Reference</i>. </p>
     */
    inline Ec2RecommendationsExportPreferences& WithPreferredRegion(const char* value) { SetPreferredRegion(value); return *this;}


    /**
     * <p> The contract type for a reserved instance. If blank, we assume an On-Demand
     * instance is preferred. </p>
     */
    inline const ReservedInstanceOptions& GetReservedInstanceOptions() const{ return m_reservedInstanceOptions; }

    /**
     * <p> The contract type for a reserved instance. If blank, we assume an On-Demand
     * instance is preferred. </p>
     */
    inline bool ReservedInstanceOptionsHasBeenSet() const { return m_reservedInstanceOptionsHasBeenSet; }

    /**
     * <p> The contract type for a reserved instance. If blank, we assume an On-Demand
     * instance is preferred. </p>
     */
    inline void SetReservedInstanceOptions(const ReservedInstanceOptions& value) { m_reservedInstanceOptionsHasBeenSet = true; m_reservedInstanceOptions = value; }

    /**
     * <p> The contract type for a reserved instance. If blank, we assume an On-Demand
     * instance is preferred. </p>
     */
    inline void SetReservedInstanceOptions(ReservedInstanceOptions&& value) { m_reservedInstanceOptionsHasBeenSet = true; m_reservedInstanceOptions = std::move(value); }

    /**
     * <p> The contract type for a reserved instance. If blank, we assume an On-Demand
     * instance is preferred. </p>
     */
    inline Ec2RecommendationsExportPreferences& WithReservedInstanceOptions(const ReservedInstanceOptions& value) { SetReservedInstanceOptions(value); return *this;}

    /**
     * <p> The contract type for a reserved instance. If blank, we assume an On-Demand
     * instance is preferred. </p>
     */
    inline Ec2RecommendationsExportPreferences& WithReservedInstanceOptions(ReservedInstanceOptions&& value) { SetReservedInstanceOptions(std::move(value)); return *this;}

  private:

    bool m_enabled;
    bool m_enabledHasBeenSet = false;

    UsageMetricBasis m_cpuPerformanceMetricBasis;
    bool m_cpuPerformanceMetricBasisHasBeenSet = false;

    UsageMetricBasis m_ramPerformanceMetricBasis;
    bool m_ramPerformanceMetricBasisHasBeenSet = false;

    Tenancy m_tenancy;
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
