/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class UpdateIndexingConfigurationRequest : public IoTRequest
  {
  public:
    AWS_IOT_API UpdateIndexingConfigurationRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateIndexingConfiguration"; }

    AWS_IOT_API Aws::String SerializePayload() const override;


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
    bool m_thingIndexingConfigurationHasBeenSet = false;

    ThingGroupIndexingConfiguration m_thingGroupIndexingConfiguration;
    bool m_thingGroupIndexingConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
