/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/emr-containers/EMRContainers_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/emr-containers/model/ParametricMonitoringConfiguration.h>
#include <aws/emr-containers/model/Configuration.h>
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
namespace EMRContainers
{
namespace Model
{

  /**
   * <p> A configuration specification to be used to override existing
   * configurations. This data type allows job template parameters to be specified
   * within.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/emr-containers-2020-10-01/ParametricConfigurationOverrides">AWS
   * API Reference</a></p>
   */
  class ParametricConfigurationOverrides
  {
  public:
    AWS_EMRCONTAINERS_API ParametricConfigurationOverrides();
    AWS_EMRCONTAINERS_API ParametricConfigurationOverrides(Aws::Utils::Json::JsonView jsonValue);
    AWS_EMRCONTAINERS_API ParametricConfigurationOverrides& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_EMRCONTAINERS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p> The configurations for the application running by the job run.</p>
     */
    inline const Aws::Vector<Configuration>& GetApplicationConfiguration() const{ return m_applicationConfiguration; }

    /**
     * <p> The configurations for the application running by the job run.</p>
     */
    inline bool ApplicationConfigurationHasBeenSet() const { return m_applicationConfigurationHasBeenSet; }

    /**
     * <p> The configurations for the application running by the job run.</p>
     */
    inline void SetApplicationConfiguration(const Aws::Vector<Configuration>& value) { m_applicationConfigurationHasBeenSet = true; m_applicationConfiguration = value; }

    /**
     * <p> The configurations for the application running by the job run.</p>
     */
    inline void SetApplicationConfiguration(Aws::Vector<Configuration>&& value) { m_applicationConfigurationHasBeenSet = true; m_applicationConfiguration = std::move(value); }

    /**
     * <p> The configurations for the application running by the job run.</p>
     */
    inline ParametricConfigurationOverrides& WithApplicationConfiguration(const Aws::Vector<Configuration>& value) { SetApplicationConfiguration(value); return *this;}

    /**
     * <p> The configurations for the application running by the job run.</p>
     */
    inline ParametricConfigurationOverrides& WithApplicationConfiguration(Aws::Vector<Configuration>&& value) { SetApplicationConfiguration(std::move(value)); return *this;}

    /**
     * <p> The configurations for the application running by the job run.</p>
     */
    inline ParametricConfigurationOverrides& AddApplicationConfiguration(const Configuration& value) { m_applicationConfigurationHasBeenSet = true; m_applicationConfiguration.push_back(value); return *this; }

    /**
     * <p> The configurations for the application running by the job run.</p>
     */
    inline ParametricConfigurationOverrides& AddApplicationConfiguration(Configuration&& value) { m_applicationConfigurationHasBeenSet = true; m_applicationConfiguration.push_back(std::move(value)); return *this; }


    /**
     * <p> The configurations for monitoring. </p>
     */
    inline const ParametricMonitoringConfiguration& GetMonitoringConfiguration() const{ return m_monitoringConfiguration; }

    /**
     * <p> The configurations for monitoring. </p>
     */
    inline bool MonitoringConfigurationHasBeenSet() const { return m_monitoringConfigurationHasBeenSet; }

    /**
     * <p> The configurations for monitoring. </p>
     */
    inline void SetMonitoringConfiguration(const ParametricMonitoringConfiguration& value) { m_monitoringConfigurationHasBeenSet = true; m_monitoringConfiguration = value; }

    /**
     * <p> The configurations for monitoring. </p>
     */
    inline void SetMonitoringConfiguration(ParametricMonitoringConfiguration&& value) { m_monitoringConfigurationHasBeenSet = true; m_monitoringConfiguration = std::move(value); }

    /**
     * <p> The configurations for monitoring. </p>
     */
    inline ParametricConfigurationOverrides& WithMonitoringConfiguration(const ParametricMonitoringConfiguration& value) { SetMonitoringConfiguration(value); return *this;}

    /**
     * <p> The configurations for monitoring. </p>
     */
    inline ParametricConfigurationOverrides& WithMonitoringConfiguration(ParametricMonitoringConfiguration&& value) { SetMonitoringConfiguration(std::move(value)); return *this;}

  private:

    Aws::Vector<Configuration> m_applicationConfiguration;
    bool m_applicationConfigurationHasBeenSet = false;

    ParametricMonitoringConfiguration m_monitoringConfiguration;
    bool m_monitoringConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace EMRContainers
} // namespace Aws
