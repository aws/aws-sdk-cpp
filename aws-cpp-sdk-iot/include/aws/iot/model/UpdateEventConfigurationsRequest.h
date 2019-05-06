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
#include <aws/iot/IoT_EXPORTS.h>
#include <aws/iot/IoTRequest.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/iot/model/EventType.h>
#include <aws/iot/model/Configuration.h>
#include <utility>

namespace Aws
{
namespace IoT
{
namespace Model
{

  /**
   */
  class AWS_IOT_API UpdateEventConfigurationsRequest : public IoTRequest
  {
  public:
    UpdateEventConfigurationsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateEventConfigurations"; }

    Aws::String SerializePayload() const override;


    /**
     * <p>The new event configuration values.</p>
     */
    inline const Aws::Map<EventType, Configuration>& GetEventConfigurations() const{ return m_eventConfigurations; }

    /**
     * <p>The new event configuration values.</p>
     */
    inline bool EventConfigurationsHasBeenSet() const { return m_eventConfigurationsHasBeenSet; }

    /**
     * <p>The new event configuration values.</p>
     */
    inline void SetEventConfigurations(const Aws::Map<EventType, Configuration>& value) { m_eventConfigurationsHasBeenSet = true; m_eventConfigurations = value; }

    /**
     * <p>The new event configuration values.</p>
     */
    inline void SetEventConfigurations(Aws::Map<EventType, Configuration>&& value) { m_eventConfigurationsHasBeenSet = true; m_eventConfigurations = std::move(value); }

    /**
     * <p>The new event configuration values.</p>
     */
    inline UpdateEventConfigurationsRequest& WithEventConfigurations(const Aws::Map<EventType, Configuration>& value) { SetEventConfigurations(value); return *this;}

    /**
     * <p>The new event configuration values.</p>
     */
    inline UpdateEventConfigurationsRequest& WithEventConfigurations(Aws::Map<EventType, Configuration>&& value) { SetEventConfigurations(std::move(value)); return *this;}

    /**
     * <p>The new event configuration values.</p>
     */
    inline UpdateEventConfigurationsRequest& AddEventConfigurations(const EventType& key, const Configuration& value) { m_eventConfigurationsHasBeenSet = true; m_eventConfigurations.emplace(key, value); return *this; }

    /**
     * <p>The new event configuration values.</p>
     */
    inline UpdateEventConfigurationsRequest& AddEventConfigurations(EventType&& key, const Configuration& value) { m_eventConfigurationsHasBeenSet = true; m_eventConfigurations.emplace(std::move(key), value); return *this; }

    /**
     * <p>The new event configuration values.</p>
     */
    inline UpdateEventConfigurationsRequest& AddEventConfigurations(const EventType& key, Configuration&& value) { m_eventConfigurationsHasBeenSet = true; m_eventConfigurations.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The new event configuration values.</p>
     */
    inline UpdateEventConfigurationsRequest& AddEventConfigurations(EventType&& key, Configuration&& value) { m_eventConfigurationsHasBeenSet = true; m_eventConfigurations.emplace(std::move(key), std::move(value)); return *this; }

  private:

    Aws::Map<EventType, Configuration> m_eventConfigurations;
    bool m_eventConfigurationsHasBeenSet;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
