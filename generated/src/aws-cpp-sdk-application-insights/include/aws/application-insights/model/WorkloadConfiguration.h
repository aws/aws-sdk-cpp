/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/application-insights/ApplicationInsights_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/application-insights/model/Tier.h>
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
namespace ApplicationInsights
{
namespace Model
{

  /**
   * <p>The configuration of the workload.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/application-insights-2018-11-25/WorkloadConfiguration">AWS
   * API Reference</a></p>
   */
  class WorkloadConfiguration
  {
  public:
    AWS_APPLICATIONINSIGHTS_API WorkloadConfiguration();
    AWS_APPLICATIONINSIGHTS_API WorkloadConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPLICATIONINSIGHTS_API WorkloadConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPLICATIONINSIGHTS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the workload.</p>
     */
    inline const Aws::String& GetWorkloadName() const{ return m_workloadName; }
    inline bool WorkloadNameHasBeenSet() const { return m_workloadNameHasBeenSet; }
    inline void SetWorkloadName(const Aws::String& value) { m_workloadNameHasBeenSet = true; m_workloadName = value; }
    inline void SetWorkloadName(Aws::String&& value) { m_workloadNameHasBeenSet = true; m_workloadName = std::move(value); }
    inline void SetWorkloadName(const char* value) { m_workloadNameHasBeenSet = true; m_workloadName.assign(value); }
    inline WorkloadConfiguration& WithWorkloadName(const Aws::String& value) { SetWorkloadName(value); return *this;}
    inline WorkloadConfiguration& WithWorkloadName(Aws::String&& value) { SetWorkloadName(std::move(value)); return *this;}
    inline WorkloadConfiguration& WithWorkloadName(const char* value) { SetWorkloadName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The configuration of the workload tier.</p>
     */
    inline const Tier& GetTier() const{ return m_tier; }
    inline bool TierHasBeenSet() const { return m_tierHasBeenSet; }
    inline void SetTier(const Tier& value) { m_tierHasBeenSet = true; m_tier = value; }
    inline void SetTier(Tier&& value) { m_tierHasBeenSet = true; m_tier = std::move(value); }
    inline WorkloadConfiguration& WithTier(const Tier& value) { SetTier(value); return *this;}
    inline WorkloadConfiguration& WithTier(Tier&& value) { SetTier(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The configuration settings of the workload.</p>
     */
    inline const Aws::String& GetConfiguration() const{ return m_configuration; }
    inline bool ConfigurationHasBeenSet() const { return m_configurationHasBeenSet; }
    inline void SetConfiguration(const Aws::String& value) { m_configurationHasBeenSet = true; m_configuration = value; }
    inline void SetConfiguration(Aws::String&& value) { m_configurationHasBeenSet = true; m_configuration = std::move(value); }
    inline void SetConfiguration(const char* value) { m_configurationHasBeenSet = true; m_configuration.assign(value); }
    inline WorkloadConfiguration& WithConfiguration(const Aws::String& value) { SetConfiguration(value); return *this;}
    inline WorkloadConfiguration& WithConfiguration(Aws::String&& value) { SetConfiguration(std::move(value)); return *this;}
    inline WorkloadConfiguration& WithConfiguration(const char* value) { SetConfiguration(value); return *this;}
    ///@}
  private:

    Aws::String m_workloadName;
    bool m_workloadNameHasBeenSet = false;

    Tier m_tier;
    bool m_tierHasBeenSet = false;

    Aws::String m_configuration;
    bool m_configurationHasBeenSet = false;
  };

} // namespace Model
} // namespace ApplicationInsights
} // namespace Aws
