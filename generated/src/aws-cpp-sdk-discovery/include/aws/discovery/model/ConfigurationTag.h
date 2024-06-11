/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/discovery/ApplicationDiscoveryService_EXPORTS.h>
#include <aws/discovery/model/ConfigurationItemType.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
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
   * <p>Tags for a configuration item. Tags are metadata that help you categorize IT
   * assets.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/discovery-2015-11-01/ConfigurationTag">AWS
   * API Reference</a></p>
   */
  class ConfigurationTag
  {
  public:
    AWS_APPLICATIONDISCOVERYSERVICE_API ConfigurationTag();
    AWS_APPLICATIONDISCOVERYSERVICE_API ConfigurationTag(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPLICATIONDISCOVERYSERVICE_API ConfigurationTag& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPLICATIONDISCOVERYSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A type of IT asset to tag.</p>
     */
    inline const ConfigurationItemType& GetConfigurationType() const{ return m_configurationType; }
    inline bool ConfigurationTypeHasBeenSet() const { return m_configurationTypeHasBeenSet; }
    inline void SetConfigurationType(const ConfigurationItemType& value) { m_configurationTypeHasBeenSet = true; m_configurationType = value; }
    inline void SetConfigurationType(ConfigurationItemType&& value) { m_configurationTypeHasBeenSet = true; m_configurationType = std::move(value); }
    inline ConfigurationTag& WithConfigurationType(const ConfigurationItemType& value) { SetConfigurationType(value); return *this;}
    inline ConfigurationTag& WithConfigurationType(ConfigurationItemType&& value) { SetConfigurationType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The configuration ID for the item to tag. You can specify a list of keys and
     * values.</p>
     */
    inline const Aws::String& GetConfigurationId() const{ return m_configurationId; }
    inline bool ConfigurationIdHasBeenSet() const { return m_configurationIdHasBeenSet; }
    inline void SetConfigurationId(const Aws::String& value) { m_configurationIdHasBeenSet = true; m_configurationId = value; }
    inline void SetConfigurationId(Aws::String&& value) { m_configurationIdHasBeenSet = true; m_configurationId = std::move(value); }
    inline void SetConfigurationId(const char* value) { m_configurationIdHasBeenSet = true; m_configurationId.assign(value); }
    inline ConfigurationTag& WithConfigurationId(const Aws::String& value) { SetConfigurationId(value); return *this;}
    inline ConfigurationTag& WithConfigurationId(Aws::String&& value) { SetConfigurationId(std::move(value)); return *this;}
    inline ConfigurationTag& WithConfigurationId(const char* value) { SetConfigurationId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A type of tag on which to filter. For example, <i>serverType</i>.</p>
     */
    inline const Aws::String& GetKey() const{ return m_key; }
    inline bool KeyHasBeenSet() const { return m_keyHasBeenSet; }
    inline void SetKey(const Aws::String& value) { m_keyHasBeenSet = true; m_key = value; }
    inline void SetKey(Aws::String&& value) { m_keyHasBeenSet = true; m_key = std::move(value); }
    inline void SetKey(const char* value) { m_keyHasBeenSet = true; m_key.assign(value); }
    inline ConfigurationTag& WithKey(const Aws::String& value) { SetKey(value); return *this;}
    inline ConfigurationTag& WithKey(Aws::String&& value) { SetKey(std::move(value)); return *this;}
    inline ConfigurationTag& WithKey(const char* value) { SetKey(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A value on which to filter. For example <i>key = serverType</i> and <i>value
     * = web server</i>.</p>
     */
    inline const Aws::String& GetValue() const{ return m_value; }
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }
    inline void SetValue(const Aws::String& value) { m_valueHasBeenSet = true; m_value = value; }
    inline void SetValue(Aws::String&& value) { m_valueHasBeenSet = true; m_value = std::move(value); }
    inline void SetValue(const char* value) { m_valueHasBeenSet = true; m_value.assign(value); }
    inline ConfigurationTag& WithValue(const Aws::String& value) { SetValue(value); return *this;}
    inline ConfigurationTag& WithValue(Aws::String&& value) { SetValue(std::move(value)); return *this;}
    inline ConfigurationTag& WithValue(const char* value) { SetValue(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time the configuration tag was created in Coordinated Universal Time
     * (UTC).</p>
     */
    inline const Aws::Utils::DateTime& GetTimeOfCreation() const{ return m_timeOfCreation; }
    inline bool TimeOfCreationHasBeenSet() const { return m_timeOfCreationHasBeenSet; }
    inline void SetTimeOfCreation(const Aws::Utils::DateTime& value) { m_timeOfCreationHasBeenSet = true; m_timeOfCreation = value; }
    inline void SetTimeOfCreation(Aws::Utils::DateTime&& value) { m_timeOfCreationHasBeenSet = true; m_timeOfCreation = std::move(value); }
    inline ConfigurationTag& WithTimeOfCreation(const Aws::Utils::DateTime& value) { SetTimeOfCreation(value); return *this;}
    inline ConfigurationTag& WithTimeOfCreation(Aws::Utils::DateTime&& value) { SetTimeOfCreation(std::move(value)); return *this;}
    ///@}
  private:

    ConfigurationItemType m_configurationType;
    bool m_configurationTypeHasBeenSet = false;

    Aws::String m_configurationId;
    bool m_configurationIdHasBeenSet = false;

    Aws::String m_key;
    bool m_keyHasBeenSet = false;

    Aws::String m_value;
    bool m_valueHasBeenSet = false;

    Aws::Utils::DateTime m_timeOfCreation;
    bool m_timeOfCreationHasBeenSet = false;
  };

} // namespace Model
} // namespace ApplicationDiscoveryService
} // namespace Aws
