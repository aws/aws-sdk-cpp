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
    AWS_GLUE_API ProfileConfiguration();
    AWS_GLUE_API ProfileConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API ProfileConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A key-value map of configuration parameters for Glue sessions. </p>
     */
    inline const Aws::Map<Aws::String, ConfigurationObject>& GetSessionConfiguration() const{ return m_sessionConfiguration; }
    inline bool SessionConfigurationHasBeenSet() const { return m_sessionConfigurationHasBeenSet; }
    inline void SetSessionConfiguration(const Aws::Map<Aws::String, ConfigurationObject>& value) { m_sessionConfigurationHasBeenSet = true; m_sessionConfiguration = value; }
    inline void SetSessionConfiguration(Aws::Map<Aws::String, ConfigurationObject>&& value) { m_sessionConfigurationHasBeenSet = true; m_sessionConfiguration = std::move(value); }
    inline ProfileConfiguration& WithSessionConfiguration(const Aws::Map<Aws::String, ConfigurationObject>& value) { SetSessionConfiguration(value); return *this;}
    inline ProfileConfiguration& WithSessionConfiguration(Aws::Map<Aws::String, ConfigurationObject>&& value) { SetSessionConfiguration(std::move(value)); return *this;}
    inline ProfileConfiguration& AddSessionConfiguration(const Aws::String& key, const ConfigurationObject& value) { m_sessionConfigurationHasBeenSet = true; m_sessionConfiguration.emplace(key, value); return *this; }
    inline ProfileConfiguration& AddSessionConfiguration(Aws::String&& key, const ConfigurationObject& value) { m_sessionConfigurationHasBeenSet = true; m_sessionConfiguration.emplace(std::move(key), value); return *this; }
    inline ProfileConfiguration& AddSessionConfiguration(const Aws::String& key, ConfigurationObject&& value) { m_sessionConfigurationHasBeenSet = true; m_sessionConfiguration.emplace(key, std::move(value)); return *this; }
    inline ProfileConfiguration& AddSessionConfiguration(Aws::String&& key, ConfigurationObject&& value) { m_sessionConfigurationHasBeenSet = true; m_sessionConfiguration.emplace(std::move(key), std::move(value)); return *this; }
    inline ProfileConfiguration& AddSessionConfiguration(const char* key, ConfigurationObject&& value) { m_sessionConfigurationHasBeenSet = true; m_sessionConfiguration.emplace(key, std::move(value)); return *this; }
    inline ProfileConfiguration& AddSessionConfiguration(const char* key, const ConfigurationObject& value) { m_sessionConfigurationHasBeenSet = true; m_sessionConfiguration.emplace(key, value); return *this; }
    ///@}

    ///@{
    /**
     * <p>A key-value map of configuration parameters for Glue jobs. </p>
     */
    inline const Aws::Map<Aws::String, ConfigurationObject>& GetJobConfiguration() const{ return m_jobConfiguration; }
    inline bool JobConfigurationHasBeenSet() const { return m_jobConfigurationHasBeenSet; }
    inline void SetJobConfiguration(const Aws::Map<Aws::String, ConfigurationObject>& value) { m_jobConfigurationHasBeenSet = true; m_jobConfiguration = value; }
    inline void SetJobConfiguration(Aws::Map<Aws::String, ConfigurationObject>&& value) { m_jobConfigurationHasBeenSet = true; m_jobConfiguration = std::move(value); }
    inline ProfileConfiguration& WithJobConfiguration(const Aws::Map<Aws::String, ConfigurationObject>& value) { SetJobConfiguration(value); return *this;}
    inline ProfileConfiguration& WithJobConfiguration(Aws::Map<Aws::String, ConfigurationObject>&& value) { SetJobConfiguration(std::move(value)); return *this;}
    inline ProfileConfiguration& AddJobConfiguration(const Aws::String& key, const ConfigurationObject& value) { m_jobConfigurationHasBeenSet = true; m_jobConfiguration.emplace(key, value); return *this; }
    inline ProfileConfiguration& AddJobConfiguration(Aws::String&& key, const ConfigurationObject& value) { m_jobConfigurationHasBeenSet = true; m_jobConfiguration.emplace(std::move(key), value); return *this; }
    inline ProfileConfiguration& AddJobConfiguration(const Aws::String& key, ConfigurationObject&& value) { m_jobConfigurationHasBeenSet = true; m_jobConfiguration.emplace(key, std::move(value)); return *this; }
    inline ProfileConfiguration& AddJobConfiguration(Aws::String&& key, ConfigurationObject&& value) { m_jobConfigurationHasBeenSet = true; m_jobConfiguration.emplace(std::move(key), std::move(value)); return *this; }
    inline ProfileConfiguration& AddJobConfiguration(const char* key, ConfigurationObject&& value) { m_jobConfigurationHasBeenSet = true; m_jobConfiguration.emplace(key, std::move(value)); return *this; }
    inline ProfileConfiguration& AddJobConfiguration(const char* key, const ConfigurationObject& value) { m_jobConfigurationHasBeenSet = true; m_jobConfiguration.emplace(key, value); return *this; }
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
