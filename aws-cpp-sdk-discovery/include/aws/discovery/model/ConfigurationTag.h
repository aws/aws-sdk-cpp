/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
  class AWS_APPLICATIONDISCOVERYSERVICE_API ConfigurationTag
  {
  public:
    ConfigurationTag();
    ConfigurationTag(Aws::Utils::Json::JsonView jsonValue);
    ConfigurationTag& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A type of IT asset to tag.</p>
     */
    inline const ConfigurationItemType& GetConfigurationType() const{ return m_configurationType; }

    /**
     * <p>A type of IT asset to tag.</p>
     */
    inline bool ConfigurationTypeHasBeenSet() const { return m_configurationTypeHasBeenSet; }

    /**
     * <p>A type of IT asset to tag.</p>
     */
    inline void SetConfigurationType(const ConfigurationItemType& value) { m_configurationTypeHasBeenSet = true; m_configurationType = value; }

    /**
     * <p>A type of IT asset to tag.</p>
     */
    inline void SetConfigurationType(ConfigurationItemType&& value) { m_configurationTypeHasBeenSet = true; m_configurationType = std::move(value); }

    /**
     * <p>A type of IT asset to tag.</p>
     */
    inline ConfigurationTag& WithConfigurationType(const ConfigurationItemType& value) { SetConfigurationType(value); return *this;}

    /**
     * <p>A type of IT asset to tag.</p>
     */
    inline ConfigurationTag& WithConfigurationType(ConfigurationItemType&& value) { SetConfigurationType(std::move(value)); return *this;}


    /**
     * <p>The configuration ID for the item to tag. You can specify a list of keys and
     * values.</p>
     */
    inline const Aws::String& GetConfigurationId() const{ return m_configurationId; }

    /**
     * <p>The configuration ID for the item to tag. You can specify a list of keys and
     * values.</p>
     */
    inline bool ConfigurationIdHasBeenSet() const { return m_configurationIdHasBeenSet; }

    /**
     * <p>The configuration ID for the item to tag. You can specify a list of keys and
     * values.</p>
     */
    inline void SetConfigurationId(const Aws::String& value) { m_configurationIdHasBeenSet = true; m_configurationId = value; }

    /**
     * <p>The configuration ID for the item to tag. You can specify a list of keys and
     * values.</p>
     */
    inline void SetConfigurationId(Aws::String&& value) { m_configurationIdHasBeenSet = true; m_configurationId = std::move(value); }

    /**
     * <p>The configuration ID for the item to tag. You can specify a list of keys and
     * values.</p>
     */
    inline void SetConfigurationId(const char* value) { m_configurationIdHasBeenSet = true; m_configurationId.assign(value); }

    /**
     * <p>The configuration ID for the item to tag. You can specify a list of keys and
     * values.</p>
     */
    inline ConfigurationTag& WithConfigurationId(const Aws::String& value) { SetConfigurationId(value); return *this;}

    /**
     * <p>The configuration ID for the item to tag. You can specify a list of keys and
     * values.</p>
     */
    inline ConfigurationTag& WithConfigurationId(Aws::String&& value) { SetConfigurationId(std::move(value)); return *this;}

    /**
     * <p>The configuration ID for the item to tag. You can specify a list of keys and
     * values.</p>
     */
    inline ConfigurationTag& WithConfigurationId(const char* value) { SetConfigurationId(value); return *this;}


    /**
     * <p>A type of tag on which to filter. For example, <i>serverType</i>.</p>
     */
    inline const Aws::String& GetKey() const{ return m_key; }

    /**
     * <p>A type of tag on which to filter. For example, <i>serverType</i>.</p>
     */
    inline bool KeyHasBeenSet() const { return m_keyHasBeenSet; }

    /**
     * <p>A type of tag on which to filter. For example, <i>serverType</i>.</p>
     */
    inline void SetKey(const Aws::String& value) { m_keyHasBeenSet = true; m_key = value; }

    /**
     * <p>A type of tag on which to filter. For example, <i>serverType</i>.</p>
     */
    inline void SetKey(Aws::String&& value) { m_keyHasBeenSet = true; m_key = std::move(value); }

    /**
     * <p>A type of tag on which to filter. For example, <i>serverType</i>.</p>
     */
    inline void SetKey(const char* value) { m_keyHasBeenSet = true; m_key.assign(value); }

    /**
     * <p>A type of tag on which to filter. For example, <i>serverType</i>.</p>
     */
    inline ConfigurationTag& WithKey(const Aws::String& value) { SetKey(value); return *this;}

    /**
     * <p>A type of tag on which to filter. For example, <i>serverType</i>.</p>
     */
    inline ConfigurationTag& WithKey(Aws::String&& value) { SetKey(std::move(value)); return *this;}

    /**
     * <p>A type of tag on which to filter. For example, <i>serverType</i>.</p>
     */
    inline ConfigurationTag& WithKey(const char* value) { SetKey(value); return *this;}


    /**
     * <p>A value on which to filter. For example <i>key = serverType</i> and <i>value
     * = web server</i>.</p>
     */
    inline const Aws::String& GetValue() const{ return m_value; }

    /**
     * <p>A value on which to filter. For example <i>key = serverType</i> and <i>value
     * = web server</i>.</p>
     */
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }

    /**
     * <p>A value on which to filter. For example <i>key = serverType</i> and <i>value
     * = web server</i>.</p>
     */
    inline void SetValue(const Aws::String& value) { m_valueHasBeenSet = true; m_value = value; }

    /**
     * <p>A value on which to filter. For example <i>key = serverType</i> and <i>value
     * = web server</i>.</p>
     */
    inline void SetValue(Aws::String&& value) { m_valueHasBeenSet = true; m_value = std::move(value); }

    /**
     * <p>A value on which to filter. For example <i>key = serverType</i> and <i>value
     * = web server</i>.</p>
     */
    inline void SetValue(const char* value) { m_valueHasBeenSet = true; m_value.assign(value); }

    /**
     * <p>A value on which to filter. For example <i>key = serverType</i> and <i>value
     * = web server</i>.</p>
     */
    inline ConfigurationTag& WithValue(const Aws::String& value) { SetValue(value); return *this;}

    /**
     * <p>A value on which to filter. For example <i>key = serverType</i> and <i>value
     * = web server</i>.</p>
     */
    inline ConfigurationTag& WithValue(Aws::String&& value) { SetValue(std::move(value)); return *this;}

    /**
     * <p>A value on which to filter. For example <i>key = serverType</i> and <i>value
     * = web server</i>.</p>
     */
    inline ConfigurationTag& WithValue(const char* value) { SetValue(value); return *this;}


    /**
     * <p>The time the configuration tag was created in Coordinated Universal Time
     * (UTC).</p>
     */
    inline const Aws::Utils::DateTime& GetTimeOfCreation() const{ return m_timeOfCreation; }

    /**
     * <p>The time the configuration tag was created in Coordinated Universal Time
     * (UTC).</p>
     */
    inline bool TimeOfCreationHasBeenSet() const { return m_timeOfCreationHasBeenSet; }

    /**
     * <p>The time the configuration tag was created in Coordinated Universal Time
     * (UTC).</p>
     */
    inline void SetTimeOfCreation(const Aws::Utils::DateTime& value) { m_timeOfCreationHasBeenSet = true; m_timeOfCreation = value; }

    /**
     * <p>The time the configuration tag was created in Coordinated Universal Time
     * (UTC).</p>
     */
    inline void SetTimeOfCreation(Aws::Utils::DateTime&& value) { m_timeOfCreationHasBeenSet = true; m_timeOfCreation = std::move(value); }

    /**
     * <p>The time the configuration tag was created in Coordinated Universal Time
     * (UTC).</p>
     */
    inline ConfigurationTag& WithTimeOfCreation(const Aws::Utils::DateTime& value) { SetTimeOfCreation(value); return *this;}

    /**
     * <p>The time the configuration tag was created in Coordinated Universal Time
     * (UTC).</p>
     */
    inline ConfigurationTag& WithTimeOfCreation(Aws::Utils::DateTime&& value) { SetTimeOfCreation(std::move(value)); return *this;}

  private:

    ConfigurationItemType m_configurationType;
    bool m_configurationTypeHasBeenSet;

    Aws::String m_configurationId;
    bool m_configurationIdHasBeenSet;

    Aws::String m_key;
    bool m_keyHasBeenSet;

    Aws::String m_value;
    bool m_valueHasBeenSet;

    Aws::Utils::DateTime m_timeOfCreation;
    bool m_timeOfCreationHasBeenSet;
  };

} // namespace Model
} // namespace ApplicationDiscoveryService
} // namespace Aws
