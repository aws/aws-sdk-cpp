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
#include <aws/iot/model/ThingGroupIndexingMode.h>
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
   * <p>Thing group indexing configuration.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/ThingGroupIndexingConfiguration">AWS
   * API Reference</a></p>
   */
  class AWS_IOT_API ThingGroupIndexingConfiguration
  {
  public:
    ThingGroupIndexingConfiguration();
    ThingGroupIndexingConfiguration(Aws::Utils::Json::JsonView jsonValue);
    ThingGroupIndexingConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Thing group indexing mode.</p>
     */
    inline const ThingGroupIndexingMode& GetThingGroupIndexingMode() const{ return m_thingGroupIndexingMode; }

    /**
     * <p>Thing group indexing mode.</p>
     */
    inline bool ThingGroupIndexingModeHasBeenSet() const { return m_thingGroupIndexingModeHasBeenSet; }

    /**
     * <p>Thing group indexing mode.</p>
     */
    inline void SetThingGroupIndexingMode(const ThingGroupIndexingMode& value) { m_thingGroupIndexingModeHasBeenSet = true; m_thingGroupIndexingMode = value; }

    /**
     * <p>Thing group indexing mode.</p>
     */
    inline void SetThingGroupIndexingMode(ThingGroupIndexingMode&& value) { m_thingGroupIndexingModeHasBeenSet = true; m_thingGroupIndexingMode = std::move(value); }

    /**
     * <p>Thing group indexing mode.</p>
     */
    inline ThingGroupIndexingConfiguration& WithThingGroupIndexingMode(const ThingGroupIndexingMode& value) { SetThingGroupIndexingMode(value); return *this;}

    /**
     * <p>Thing group indexing mode.</p>
     */
    inline ThingGroupIndexingConfiguration& WithThingGroupIndexingMode(ThingGroupIndexingMode&& value) { SetThingGroupIndexingMode(std::move(value)); return *this;}

  private:

    ThingGroupIndexingMode m_thingGroupIndexingMode;
    bool m_thingGroupIndexingModeHasBeenSet;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
