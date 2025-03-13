/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/glue/model/ConfigurationObject.h>
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
namespace Glue
{
namespace Model
{

  /**
   * <p>Specifies the job and session values that an admin configures in an Glue
   * usage profile.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/ProfileConfiguration">AWS
   * API Reference</a></p>
   */
  class ProfileConfiguration
  {
  public:
    AWS_GLUE_API ProfileConfiguration() = default;
    AWS_GLUE_API ProfileConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API ProfileConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A key-value map of configuration parameters for Glue sessions. </p>
     */
    inline const Aws::Map<Aws::String, ConfigurationObject>& GetSessionConfiguration() const { return m_sessionConfiguration; }
    inline bool SessionConfigurationHasBeenSet() const { return m_sessionConfigurationHasBeenSet; }
    template<typename SessionConfigurationT = Aws::Map<Aws::String, ConfigurationObject>>
    void SetSessionConfiguration(SessionConfigurationT&& value) { m_sessionConfigurationHasBeenSet = true; m_sessionConfiguration = std::forward<SessionConfigurationT>(value); }
    template<typename SessionConfigurationT = Aws::Map<Aws::String, ConfigurationObject>>
    ProfileConfiguration& WithSessionConfiguration(SessionConfigurationT&& value) { SetSessionConfiguration(std::forward<SessionConfigurationT>(value)); return *this;}
    template<typename SessionConfigurationKeyT = Aws::String, typename SessionConfigurationValueT = ConfigurationObject>
    ProfileConfiguration& AddSessionConfiguration(SessionConfigurationKeyT&& key, SessionConfigurationValueT&& value) {
      m_sessionConfigurationHasBeenSet = true; m_sessionConfiguration.emplace(std::forward<SessionConfigurationKeyT>(key), std::forward<SessionConfigurationValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>A key-value map of configuration parameters for Glue jobs. </p>
     */
    inline const Aws::Map<Aws::String, ConfigurationObject>& GetJobConfiguration() const { return m_jobConfiguration; }
    inline bool JobConfigurationHasBeenSet() const { return m_jobConfigurationHasBeenSet; }
    template<typename JobConfigurationT = Aws::Map<Aws::String, ConfigurationObject>>
    void SetJobConfiguration(JobConfigurationT&& value) { m_jobConfigurationHasBeenSet = true; m_jobConfiguration = std::forward<JobConfigurationT>(value); }
    template<typename JobConfigurationT = Aws::Map<Aws::String, ConfigurationObject>>
    ProfileConfiguration& WithJobConfiguration(JobConfigurationT&& value) { SetJobConfiguration(std::forward<JobConfigurationT>(value)); return *this;}
    template<typename JobConfigurationKeyT = Aws::String, typename JobConfigurationValueT = ConfigurationObject>
    ProfileConfiguration& AddJobConfiguration(JobConfigurationKeyT&& key, JobConfigurationValueT&& value) {
      m_jobConfigurationHasBeenSet = true; m_jobConfiguration.emplace(std::forward<JobConfigurationKeyT>(key), std::forward<JobConfigurationValueT>(value)); return *this;
    }
    ///@}
  private:

    Aws::Map<Aws::String, ConfigurationObject> m_sessionConfiguration;
    bool m_sessionConfigurationHasBeenSet = false;

    Aws::Map<Aws::String, ConfigurationObject> m_jobConfiguration;
    bool m_jobConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
