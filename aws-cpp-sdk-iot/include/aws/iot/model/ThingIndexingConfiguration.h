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
#include <aws/iot/model/ThingIndexingMode.h>
#include <aws/iot/model/ThingConnectivityIndexingMode.h>
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
namespace IoT
{
namespace Model
{

  /**
   * <p>The thing indexing configuration. For more information, see <a
   * href="https://docs.aws.amazon.com/iot/latest/developerguide/managing-index.html">Managing
   * Thing Indexing</a>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/ThingIndexingConfiguration">AWS
   * API Reference</a></p>
   */
  class AWS_IOT_API ThingIndexingConfiguration
  {
  public:
    ThingIndexingConfiguration();
    ThingIndexingConfiguration(Aws::Utils::Json::JsonView jsonValue);
    ThingIndexingConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Thing indexing mode. Valid values are:</p> <ul> <li> <p>REGISTRY – Your thing
     * index contains registry data only.</p> </li> <li> <p>REGISTRY_AND_SHADOW - Your
     * thing index contains registry and shadow data.</p> </li> <li> <p>OFF - Thing
     * indexing is disabled.</p> </li> </ul>
     */
    inline const ThingIndexingMode& GetThingIndexingMode() const{ return m_thingIndexingMode; }

    /**
     * <p>Thing indexing mode. Valid values are:</p> <ul> <li> <p>REGISTRY – Your thing
     * index contains registry data only.</p> </li> <li> <p>REGISTRY_AND_SHADOW - Your
     * thing index contains registry and shadow data.</p> </li> <li> <p>OFF - Thing
     * indexing is disabled.</p> </li> </ul>
     */
    inline bool ThingIndexingModeHasBeenSet() const { return m_thingIndexingModeHasBeenSet; }

    /**
     * <p>Thing indexing mode. Valid values are:</p> <ul> <li> <p>REGISTRY – Your thing
     * index contains registry data only.</p> </li> <li> <p>REGISTRY_AND_SHADOW - Your
     * thing index contains registry and shadow data.</p> </li> <li> <p>OFF - Thing
     * indexing is disabled.</p> </li> </ul>
     */
    inline void SetThingIndexingMode(const ThingIndexingMode& value) { m_thingIndexingModeHasBeenSet = true; m_thingIndexingMode = value; }

    /**
     * <p>Thing indexing mode. Valid values are:</p> <ul> <li> <p>REGISTRY – Your thing
     * index contains registry data only.</p> </li> <li> <p>REGISTRY_AND_SHADOW - Your
     * thing index contains registry and shadow data.</p> </li> <li> <p>OFF - Thing
     * indexing is disabled.</p> </li> </ul>
     */
    inline void SetThingIndexingMode(ThingIndexingMode&& value) { m_thingIndexingModeHasBeenSet = true; m_thingIndexingMode = std::move(value); }

    /**
     * <p>Thing indexing mode. Valid values are:</p> <ul> <li> <p>REGISTRY – Your thing
     * index contains registry data only.</p> </li> <li> <p>REGISTRY_AND_SHADOW - Your
     * thing index contains registry and shadow data.</p> </li> <li> <p>OFF - Thing
     * indexing is disabled.</p> </li> </ul>
     */
    inline ThingIndexingConfiguration& WithThingIndexingMode(const ThingIndexingMode& value) { SetThingIndexingMode(value); return *this;}

    /**
     * <p>Thing indexing mode. Valid values are:</p> <ul> <li> <p>REGISTRY – Your thing
     * index contains registry data only.</p> </li> <li> <p>REGISTRY_AND_SHADOW - Your
     * thing index contains registry and shadow data.</p> </li> <li> <p>OFF - Thing
     * indexing is disabled.</p> </li> </ul>
     */
    inline ThingIndexingConfiguration& WithThingIndexingMode(ThingIndexingMode&& value) { SetThingIndexingMode(std::move(value)); return *this;}


    /**
     * <p>Thing connectivity indexing mode. Valid values are: </p> <ul> <li> <p>STATUS
     * – Your thing index contains connectivity status. To enable thing connectivity
     * indexing, thingIndexMode must not be set to OFF.</p> </li> <li> <p>OFF - Thing
     * connectivity status indexing is disabled.</p> </li> </ul>
     */
    inline const ThingConnectivityIndexingMode& GetThingConnectivityIndexingMode() const{ return m_thingConnectivityIndexingMode; }

    /**
     * <p>Thing connectivity indexing mode. Valid values are: </p> <ul> <li> <p>STATUS
     * – Your thing index contains connectivity status. To enable thing connectivity
     * indexing, thingIndexMode must not be set to OFF.</p> </li> <li> <p>OFF - Thing
     * connectivity status indexing is disabled.</p> </li> </ul>
     */
    inline bool ThingConnectivityIndexingModeHasBeenSet() const { return m_thingConnectivityIndexingModeHasBeenSet; }

    /**
     * <p>Thing connectivity indexing mode. Valid values are: </p> <ul> <li> <p>STATUS
     * – Your thing index contains connectivity status. To enable thing connectivity
     * indexing, thingIndexMode must not be set to OFF.</p> </li> <li> <p>OFF - Thing
     * connectivity status indexing is disabled.</p> </li> </ul>
     */
    inline void SetThingConnectivityIndexingMode(const ThingConnectivityIndexingMode& value) { m_thingConnectivityIndexingModeHasBeenSet = true; m_thingConnectivityIndexingMode = value; }

    /**
     * <p>Thing connectivity indexing mode. Valid values are: </p> <ul> <li> <p>STATUS
     * – Your thing index contains connectivity status. To enable thing connectivity
     * indexing, thingIndexMode must not be set to OFF.</p> </li> <li> <p>OFF - Thing
     * connectivity status indexing is disabled.</p> </li> </ul>
     */
    inline void SetThingConnectivityIndexingMode(ThingConnectivityIndexingMode&& value) { m_thingConnectivityIndexingModeHasBeenSet = true; m_thingConnectivityIndexingMode = std::move(value); }

    /**
     * <p>Thing connectivity indexing mode. Valid values are: </p> <ul> <li> <p>STATUS
     * – Your thing index contains connectivity status. To enable thing connectivity
     * indexing, thingIndexMode must not be set to OFF.</p> </li> <li> <p>OFF - Thing
     * connectivity status indexing is disabled.</p> </li> </ul>
     */
    inline ThingIndexingConfiguration& WithThingConnectivityIndexingMode(const ThingConnectivityIndexingMode& value) { SetThingConnectivityIndexingMode(value); return *this;}

    /**
     * <p>Thing connectivity indexing mode. Valid values are: </p> <ul> <li> <p>STATUS
     * – Your thing index contains connectivity status. To enable thing connectivity
     * indexing, thingIndexMode must not be set to OFF.</p> </li> <li> <p>OFF - Thing
     * connectivity status indexing is disabled.</p> </li> </ul>
     */
    inline ThingIndexingConfiguration& WithThingConnectivityIndexingMode(ThingConnectivityIndexingMode&& value) { SetThingConnectivityIndexingMode(std::move(value)); return *this;}

  private:

    ThingIndexingMode m_thingIndexingMode;
    bool m_thingIndexingModeHasBeenSet;

    ThingConnectivityIndexingMode m_thingConnectivityIndexingMode;
    bool m_thingConnectivityIndexingModeHasBeenSet;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
