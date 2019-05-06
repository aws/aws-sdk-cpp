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
#include <aws/iot/model/ThingIndexingConfiguration.h>
#include <aws/iot/model/ThingGroupIndexingConfiguration.h>
#include <utility>

namespace Aws
{
namespace IoT
{
namespace Model
{

  /**
   */
  class AWS_IOT_API UpdateIndexingConfigurationRequest : public IoTRequest
  {
  public:
    UpdateIndexingConfigurationRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateIndexingConfiguration"; }

    Aws::String SerializePayload() const override;


    /**
     * <p>Thing indexing configuration.</p>
     */
    inline const ThingIndexingConfiguration& GetThingIndexingConfiguration() const{ return m_thingIndexingConfiguration; }

    /**
     * <p>Thing indexing configuration.</p>
     */
    inline bool ThingIndexingConfigurationHasBeenSet() const { return m_thingIndexingConfigurationHasBeenSet; }

    /**
     * <p>Thing indexing configuration.</p>
     */
    inline void SetThingIndexingConfiguration(const ThingIndexingConfiguration& value) { m_thingIndexingConfigurationHasBeenSet = true; m_thingIndexingConfiguration = value; }

    /**
     * <p>Thing indexing configuration.</p>
     */
    inline void SetThingIndexingConfiguration(ThingIndexingConfiguration&& value) { m_thingIndexingConfigurationHasBeenSet = true; m_thingIndexingConfiguration = std::move(value); }

    /**
     * <p>Thing indexing configuration.</p>
     */
    inline UpdateIndexingConfigurationRequest& WithThingIndexingConfiguration(const ThingIndexingConfiguration& value) { SetThingIndexingConfiguration(value); return *this;}

    /**
     * <p>Thing indexing configuration.</p>
     */
    inline UpdateIndexingConfigurationRequest& WithThingIndexingConfiguration(ThingIndexingConfiguration&& value) { SetThingIndexingConfiguration(std::move(value)); return *this;}


    /**
     * <p>Thing group indexing configuration.</p>
     */
    inline const ThingGroupIndexingConfiguration& GetThingGroupIndexingConfiguration() const{ return m_thingGroupIndexingConfiguration; }

    /**
     * <p>Thing group indexing configuration.</p>
     */
    inline bool ThingGroupIndexingConfigurationHasBeenSet() const { return m_thingGroupIndexingConfigurationHasBeenSet; }

    /**
     * <p>Thing group indexing configuration.</p>
     */
    inline void SetThingGroupIndexingConfiguration(const ThingGroupIndexingConfiguration& value) { m_thingGroupIndexingConfigurationHasBeenSet = true; m_thingGroupIndexingConfiguration = value; }

    /**
     * <p>Thing group indexing configuration.</p>
     */
    inline void SetThingGroupIndexingConfiguration(ThingGroupIndexingConfiguration&& value) { m_thingGroupIndexingConfigurationHasBeenSet = true; m_thingGroupIndexingConfiguration = std::move(value); }

    /**
     * <p>Thing group indexing configuration.</p>
     */
    inline UpdateIndexingConfigurationRequest& WithThingGroupIndexingConfiguration(const ThingGroupIndexingConfiguration& value) { SetThingGroupIndexingConfiguration(value); return *this;}

    /**
     * <p>Thing group indexing configuration.</p>
     */
    inline UpdateIndexingConfigurationRequest& WithThingGroupIndexingConfiguration(ThingGroupIndexingConfiguration&& value) { SetThingGroupIndexingConfiguration(std::move(value)); return *this;}

  private:

    ThingIndexingConfiguration m_thingIndexingConfiguration;
    bool m_thingIndexingConfigurationHasBeenSet;

    ThingGroupIndexingConfiguration m_thingGroupIndexingConfiguration;
    bool m_thingGroupIndexingConfigurationHasBeenSet;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
