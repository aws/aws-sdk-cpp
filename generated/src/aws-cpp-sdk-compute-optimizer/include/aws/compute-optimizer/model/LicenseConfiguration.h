/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/compute-optimizer/ComputeOptimizer_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/compute-optimizer/model/LicenseEdition.h>
#include <aws/compute-optimizer/model/LicenseName.h>
#include <aws/compute-optimizer/model/LicenseModel.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/compute-optimizer/model/MetricSource.h>
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
namespace ComputeOptimizer
{
namespace Model
{

  /**
   * <p> Describes the configuration of a license for an Amazon EC2 instance.
   * </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/compute-optimizer-2019-11-01/LicenseConfiguration">AWS
   * API Reference</a></p>
   */
  class LicenseConfiguration
  {
  public:
    AWS_COMPUTEOPTIMIZER_API LicenseConfiguration() = default;
    AWS_COMPUTEOPTIMIZER_API LicenseConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_COMPUTEOPTIMIZER_API LicenseConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_COMPUTEOPTIMIZER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> The current number of cores associated with the instance. </p>
     */
    inline int GetNumberOfCores() const { return m_numberOfCores; }
    inline bool NumberOfCoresHasBeenSet() const { return m_numberOfCoresHasBeenSet; }
    inline void SetNumberOfCores(int value) { m_numberOfCoresHasBeenSet = true; m_numberOfCores = value; }
    inline LicenseConfiguration& WithNumberOfCores(int value) { SetNumberOfCores(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The instance type used in the license. </p>
     */
    inline const Aws::String& GetInstanceType() const { return m_instanceType; }
    inline bool InstanceTypeHasBeenSet() const { return m_instanceTypeHasBeenSet; }
    template<typename InstanceTypeT = Aws::String>
    void SetInstanceType(InstanceTypeT&& value) { m_instanceTypeHasBeenSet = true; m_instanceType = std::forward<InstanceTypeT>(value); }
    template<typename InstanceTypeT = Aws::String>
    LicenseConfiguration& WithInstanceType(InstanceTypeT&& value) { SetInstanceType(std::forward<InstanceTypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The operating system of the instance. </p>
     */
    inline const Aws::String& GetOperatingSystem() const { return m_operatingSystem; }
    inline bool OperatingSystemHasBeenSet() const { return m_operatingSystemHasBeenSet; }
    template<typename OperatingSystemT = Aws::String>
    void SetOperatingSystem(OperatingSystemT&& value) { m_operatingSystemHasBeenSet = true; m_operatingSystem = std::forward<OperatingSystemT>(value); }
    template<typename OperatingSystemT = Aws::String>
    LicenseConfiguration& WithOperatingSystem(OperatingSystemT&& value) { SetOperatingSystem(std::forward<OperatingSystemT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The edition of the license for the application that runs on the instance.
     * </p>
     */
    inline LicenseEdition GetLicenseEdition() const { return m_licenseEdition; }
    inline bool LicenseEditionHasBeenSet() const { return m_licenseEditionHasBeenSet; }
    inline void SetLicenseEdition(LicenseEdition value) { m_licenseEditionHasBeenSet = true; m_licenseEdition = value; }
    inline LicenseConfiguration& WithLicenseEdition(LicenseEdition value) { SetLicenseEdition(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The name of the license for the application that runs on the instance. </p>
     */
    inline LicenseName GetLicenseName() const { return m_licenseName; }
    inline bool LicenseNameHasBeenSet() const { return m_licenseNameHasBeenSet; }
    inline void SetLicenseName(LicenseName value) { m_licenseNameHasBeenSet = true; m_licenseName = value; }
    inline LicenseConfiguration& WithLicenseName(LicenseName value) { SetLicenseName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The license type associated with the instance. </p>
     */
    inline LicenseModel GetLicenseModel() const { return m_licenseModel; }
    inline bool LicenseModelHasBeenSet() const { return m_licenseModelHasBeenSet; }
    inline void SetLicenseModel(LicenseModel value) { m_licenseModelHasBeenSet = true; m_licenseModel = value; }
    inline LicenseConfiguration& WithLicenseModel(LicenseModel value) { SetLicenseModel(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The version of the license for the application that runs on the instance.
     * </p>
     */
    inline const Aws::String& GetLicenseVersion() const { return m_licenseVersion; }
    inline bool LicenseVersionHasBeenSet() const { return m_licenseVersionHasBeenSet; }
    template<typename LicenseVersionT = Aws::String>
    void SetLicenseVersion(LicenseVersionT&& value) { m_licenseVersionHasBeenSet = true; m_licenseVersion = std::forward<LicenseVersionT>(value); }
    template<typename LicenseVersionT = Aws::String>
    LicenseConfiguration& WithLicenseVersion(LicenseVersionT&& value) { SetLicenseVersion(std::forward<LicenseVersionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The list of metric sources required to generate recommendations for
     * commercial software licenses. </p>
     */
    inline const Aws::Vector<MetricSource>& GetMetricsSource() const { return m_metricsSource; }
    inline bool MetricsSourceHasBeenSet() const { return m_metricsSourceHasBeenSet; }
    template<typename MetricsSourceT = Aws::Vector<MetricSource>>
    void SetMetricsSource(MetricsSourceT&& value) { m_metricsSourceHasBeenSet = true; m_metricsSource = std::forward<MetricsSourceT>(value); }
    template<typename MetricsSourceT = Aws::Vector<MetricSource>>
    LicenseConfiguration& WithMetricsSource(MetricsSourceT&& value) { SetMetricsSource(std::forward<MetricsSourceT>(value)); return *this;}
    template<typename MetricsSourceT = MetricSource>
    LicenseConfiguration& AddMetricsSource(MetricsSourceT&& value) { m_metricsSourceHasBeenSet = true; m_metricsSource.emplace_back(std::forward<MetricsSourceT>(value)); return *this; }
    ///@}
  private:

    int m_numberOfCores{0};
    bool m_numberOfCoresHasBeenSet = false;

    Aws::String m_instanceType;
    bool m_instanceTypeHasBeenSet = false;

    Aws::String m_operatingSystem;
    bool m_operatingSystemHasBeenSet = false;

    LicenseEdition m_licenseEdition{LicenseEdition::NOT_SET};
    bool m_licenseEditionHasBeenSet = false;

    LicenseName m_licenseName{LicenseName::NOT_SET};
    bool m_licenseNameHasBeenSet = false;

    LicenseModel m_licenseModel{LicenseModel::NOT_SET};
    bool m_licenseModelHasBeenSet = false;

    Aws::String m_licenseVersion;
    bool m_licenseVersionHasBeenSet = false;

    Aws::Vector<MetricSource> m_metricsSource;
    bool m_metricsSourceHasBeenSet = false;
  };

} // namespace Model
} // namespace ComputeOptimizer
} // namespace Aws
