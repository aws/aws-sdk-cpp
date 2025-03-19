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
    AWS_APPLICATIONDISCOVERYSERVICE_API ConfigurationTag() = default;
    AWS_APPLICATIONDISCOVERYSERVICE_API ConfigurationTag(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPLICATIONDISCOVERYSERVICE_API ConfigurationTag& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPLICATIONDISCOVERYSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A type of IT asset to tag.</p>
     */
    inline ConfigurationItemType GetConfigurationType() const { return m_configurationType; }
    inline bool ConfigurationTypeHasBeenSet() const { return m_configurationTypeHasBeenSet; }
    inline void SetConfigurationType(ConfigurationItemType value) { m_configurationTypeHasBeenSet = true; m_configurationType = value; }
    inline ConfigurationTag& WithConfigurationType(ConfigurationItemType value) { SetConfigurationType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The configuration ID for the item to tag. You can specify a list of keys and
     * values.</p>
     */
    inline const Aws::String& GetConfigurationId() const { return m_configurationId; }
    inline bool ConfigurationIdHasBeenSet() const { return m_configurationIdHasBeenSet; }
    template<typename ConfigurationIdT = Aws::String>
    void SetConfigurationId(ConfigurationIdT&& value) { m_configurationIdHasBeenSet = true; m_configurationId = std::forward<ConfigurationIdT>(value); }
    template<typename ConfigurationIdT = Aws::String>
    ConfigurationTag& WithConfigurationId(ConfigurationIdT&& value) { SetConfigurationId(std::forward<ConfigurationIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A type of tag on which to filter. For example, <i>serverType</i>.</p>
     */
    inline const Aws::String& GetKey() const { return m_key; }
    inline bool KeyHasBeenSet() const { return m_keyHasBeenSet; }
    template<typename KeyT = Aws::String>
    void SetKey(KeyT&& value) { m_keyHasBeenSet = true; m_key = std::forward<KeyT>(value); }
    template<typename KeyT = Aws::String>
    ConfigurationTag& WithKey(KeyT&& value) { SetKey(std::forward<KeyT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A value on which to filter. For example <i>key = serverType</i> and <i>value
     * = web server</i>.</p>
     */
    inline const Aws::String& GetValue() const { return m_value; }
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }
    template<typename ValueT = Aws::String>
    void SetValue(ValueT&& value) { m_valueHasBeenSet = true; m_value = std::forward<ValueT>(value); }
    template<typename ValueT = Aws::String>
    ConfigurationTag& WithValue(ValueT&& value) { SetValue(std::forward<ValueT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time the configuration tag was created in Coordinated Universal Time
     * (UTC).</p>
     */
    inline const Aws::Utils::DateTime& GetTimeOfCreation() const { return m_timeOfCreation; }
    inline bool TimeOfCreationHasBeenSet() const { return m_timeOfCreationHasBeenSet; }
    template<typename TimeOfCreationT = Aws::Utils::DateTime>
    void SetTimeOfCreation(TimeOfCreationT&& value) { m_timeOfCreationHasBeenSet = true; m_timeOfCreation = std::forward<TimeOfCreationT>(value); }
    template<typename TimeOfCreationT = Aws::Utils::DateTime>
    ConfigurationTag& WithTimeOfCreation(TimeOfCreationT&& value) { SetTimeOfCreation(std::forward<TimeOfCreationT>(value)); return *this;}
    ///@}
  private:

    ConfigurationItemType m_configurationType{ConfigurationItemType::NOT_SET};
    bool m_configurationTypeHasBeenSet = false;

    Aws::String m_configurationId;
    bool m_configurationIdHasBeenSet = false;

    Aws::String m_key;
    bool m_keyHasBeenSet = false;

    Aws::String m_value;
    bool m_valueHasBeenSet = false;

    Aws::Utils::DateTime m_timeOfCreation{};
    bool m_timeOfCreationHasBeenSet = false;
  };

} // namespace Model
} // namespace ApplicationDiscoveryService
} // namespace Aws
