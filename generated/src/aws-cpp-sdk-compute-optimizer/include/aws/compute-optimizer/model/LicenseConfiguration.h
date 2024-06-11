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
    AWS_COMPUTEOPTIMIZER_API LicenseConfiguration();
    AWS_COMPUTEOPTIMIZER_API LicenseConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_COMPUTEOPTIMIZER_API LicenseConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_COMPUTEOPTIMIZER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> The current number of cores associated with the instance. </p>
     */
    inline int GetNumberOfCores() const{ return m_numberOfCores; }
    inline bool NumberOfCoresHasBeenSet() const { return m_numberOfCoresHasBeenSet; }
    inline void SetNumberOfCores(int value) { m_numberOfCoresHasBeenSet = true; m_numberOfCores = value; }
    inline LicenseConfiguration& WithNumberOfCores(int value) { SetNumberOfCores(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The instance type used in the license. </p>
     */
    inline const Aws::String& GetInstanceType() const{ return m_instanceType; }
    inline bool InstanceTypeHasBeenSet() const { return m_instanceTypeHasBeenSet; }
    inline void SetInstanceType(const Aws::String& value) { m_instanceTypeHasBeenSet = true; m_instanceType = value; }
    inline void SetInstanceType(Aws::String&& value) { m_instanceTypeHasBeenSet = true; m_instanceType = std::move(value); }
    inline void SetInstanceType(const char* value) { m_instanceTypeHasBeenSet = true; m_instanceType.assign(value); }
    inline LicenseConfiguration& WithInstanceType(const Aws::String& value) { SetInstanceType(value); return *this;}
    inline LicenseConfiguration& WithInstanceType(Aws::String&& value) { SetInstanceType(std::move(value)); return *this;}
    inline LicenseConfiguration& WithInstanceType(const char* value) { SetInstanceType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The operating system of the instance. </p>
     */
    inline const Aws::String& GetOperatingSystem() const{ return m_operatingSystem; }
    inline bool OperatingSystemHasBeenSet() const { return m_operatingSystemHasBeenSet; }
    inline void SetOperatingSystem(const Aws::String& value) { m_operatingSystemHasBeenSet = true; m_operatingSystem = value; }
    inline void SetOperatingSystem(Aws::String&& value) { m_operatingSystemHasBeenSet = true; m_operatingSystem = std::move(value); }
    inline void SetOperatingSystem(const char* value) { m_operatingSystemHasBeenSet = true; m_operatingSystem.assign(value); }
    inline LicenseConfiguration& WithOperatingSystem(const Aws::String& value) { SetOperatingSystem(value); return *this;}
    inline LicenseConfiguration& WithOperatingSystem(Aws::String&& value) { SetOperatingSystem(std::move(value)); return *this;}
    inline LicenseConfiguration& WithOperatingSystem(const char* value) { SetOperatingSystem(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The edition of the license for the application that runs on the instance.
     * </p>
     */
    inline const LicenseEdition& GetLicenseEdition() const{ return m_licenseEdition; }
    inline bool LicenseEditionHasBeenSet() const { return m_licenseEditionHasBeenSet; }
    inline void SetLicenseEdition(const LicenseEdition& value) { m_licenseEditionHasBeenSet = true; m_licenseEdition = value; }
    inline void SetLicenseEdition(LicenseEdition&& value) { m_licenseEditionHasBeenSet = true; m_licenseEdition = std::move(value); }
    inline LicenseConfiguration& WithLicenseEdition(const LicenseEdition& value) { SetLicenseEdition(value); return *this;}
    inline LicenseConfiguration& WithLicenseEdition(LicenseEdition&& value) { SetLicenseEdition(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The name of the license for the application that runs on the instance. </p>
     */
    inline const LicenseName& GetLicenseName() const{ return m_licenseName; }
    inline bool LicenseNameHasBeenSet() const { return m_licenseNameHasBeenSet; }
    inline void SetLicenseName(const LicenseName& value) { m_licenseNameHasBeenSet = true; m_licenseName = value; }
    inline void SetLicenseName(LicenseName&& value) { m_licenseNameHasBeenSet = true; m_licenseName = std::move(value); }
    inline LicenseConfiguration& WithLicenseName(const LicenseName& value) { SetLicenseName(value); return *this;}
    inline LicenseConfiguration& WithLicenseName(LicenseName&& value) { SetLicenseName(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The license type associated with the instance. </p>
     */
    inline const LicenseModel& GetLicenseModel() const{ return m_licenseModel; }
    inline bool LicenseModelHasBeenSet() const { return m_licenseModelHasBeenSet; }
    inline void SetLicenseModel(const LicenseModel& value) { m_licenseModelHasBeenSet = true; m_licenseModel = value; }
    inline void SetLicenseModel(LicenseModel&& value) { m_licenseModelHasBeenSet = true; m_licenseModel = std::move(value); }
    inline LicenseConfiguration& WithLicenseModel(const LicenseModel& value) { SetLicenseModel(value); return *this;}
    inline LicenseConfiguration& WithLicenseModel(LicenseModel&& value) { SetLicenseModel(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The version of the license for the application that runs on the instance.
     * </p>
     */
    inline const Aws::String& GetLicenseVersion() const{ return m_licenseVersion; }
    inline bool LicenseVersionHasBeenSet() const { return m_licenseVersionHasBeenSet; }
    inline void SetLicenseVersion(const Aws::String& value) { m_licenseVersionHasBeenSet = true; m_licenseVersion = value; }
    inline void SetLicenseVersion(Aws::String&& value) { m_licenseVersionHasBeenSet = true; m_licenseVersion = std::move(value); }
    inline void SetLicenseVersion(const char* value) { m_licenseVersionHasBeenSet = true; m_licenseVersion.assign(value); }
    inline LicenseConfiguration& WithLicenseVersion(const Aws::String& value) { SetLicenseVersion(value); return *this;}
    inline LicenseConfiguration& WithLicenseVersion(Aws::String&& value) { SetLicenseVersion(std::move(value)); return *this;}
    inline LicenseConfiguration& WithLicenseVersion(const char* value) { SetLicenseVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The list of metric sources required to generate recommendations for
     * commercial software licenses. </p>
     */
    inline const Aws::Vector<MetricSource>& GetMetricsSource() const{ return m_metricsSource; }
    inline bool MetricsSourceHasBeenSet() const { return m_metricsSourceHasBeenSet; }
    inline void SetMetricsSource(const Aws::Vector<MetricSource>& value) { m_metricsSourceHasBeenSet = true; m_metricsSource = value; }
    inline void SetMetricsSource(Aws::Vector<MetricSource>&& value) { m_metricsSourceHasBeenSet = true; m_metricsSource = std::move(value); }
    inline LicenseConfiguration& WithMetricsSource(const Aws::Vector<MetricSource>& value) { SetMetricsSource(value); return *this;}
    inline LicenseConfiguration& WithMetricsSource(Aws::Vector<MetricSource>&& value) { SetMetricsSource(std::move(value)); return *this;}
    inline LicenseConfiguration& AddMetricsSource(const MetricSource& value) { m_metricsSourceHasBeenSet = true; m_metricsSource.push_back(value); return *this; }
    inline LicenseConfiguration& AddMetricsSource(MetricSource&& value) { m_metricsSourceHasBeenSet = true; m_metricsSource.push_back(std::move(value)); return *this; }
    ///@}
  private:

    int m_numberOfCores;
    bool m_numberOfCoresHasBeenSet = false;

    Aws::String m_instanceType;
    bool m_instanceTypeHasBeenSet = false;

    Aws::String m_operatingSystem;
    bool m_operatingSystemHasBeenSet = false;

    LicenseEdition m_licenseEdition;
    bool m_licenseEditionHasBeenSet = false;

    LicenseName m_licenseName;
    bool m_licenseNameHasBeenSet = false;

    LicenseModel m_licenseModel;
    bool m_licenseModelHasBeenSet = false;

    Aws::String m_licenseVersion;
    bool m_licenseVersionHasBeenSet = false;

    Aws::Vector<MetricSource> m_metricsSource;
    bool m_metricsSourceHasBeenSet = false;
  };

} // namespace Model
} // namespace ComputeOptimizer
} // namespace Aws
