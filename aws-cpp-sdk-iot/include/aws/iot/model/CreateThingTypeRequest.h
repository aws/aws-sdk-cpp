/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iot/model/ThingTypeProperties.h>

namespace Aws
{
namespace IoT
{
namespace Model
{

  /**
   * <p>The input for the CreateThingType operation.</p>
   */
  class AWS_IOT_API CreateThingTypeRequest : public IoTRequest
  {
  public:
    CreateThingTypeRequest();
    Aws::String SerializePayload() const override;

    /**
     * <p>The name of the thing type.</p>
     */
    inline const Aws::String& GetThingTypeName() const{ return m_thingTypeName; }

    /**
     * <p>The name of the thing type.</p>
     */
    inline void SetThingTypeName(const Aws::String& value) { m_thingTypeNameHasBeenSet = true; m_thingTypeName = value; }

    /**
     * <p>The name of the thing type.</p>
     */
    inline void SetThingTypeName(Aws::String&& value) { m_thingTypeNameHasBeenSet = true; m_thingTypeName = value; }

    /**
     * <p>The name of the thing type.</p>
     */
    inline void SetThingTypeName(const char* value) { m_thingTypeNameHasBeenSet = true; m_thingTypeName.assign(value); }

    /**
     * <p>The name of the thing type.</p>
     */
    inline CreateThingTypeRequest& WithThingTypeName(const Aws::String& value) { SetThingTypeName(value); return *this;}

    /**
     * <p>The name of the thing type.</p>
     */
    inline CreateThingTypeRequest& WithThingTypeName(Aws::String&& value) { SetThingTypeName(value); return *this;}

    /**
     * <p>The name of the thing type.</p>
     */
    inline CreateThingTypeRequest& WithThingTypeName(const char* value) { SetThingTypeName(value); return *this;}

    /**
     * <p>The ThingTypeProperties for the thing type to create. It contains information
     * about the new thing type including a description, and a list of searchable thing
     * attribute names.</p>
     */
    inline const ThingTypeProperties& GetThingTypeProperties() const{ return m_thingTypeProperties; }

    /**
     * <p>The ThingTypeProperties for the thing type to create. It contains information
     * about the new thing type including a description, and a list of searchable thing
     * attribute names.</p>
     */
    inline void SetThingTypeProperties(const ThingTypeProperties& value) { m_thingTypePropertiesHasBeenSet = true; m_thingTypeProperties = value; }

    /**
     * <p>The ThingTypeProperties for the thing type to create. It contains information
     * about the new thing type including a description, and a list of searchable thing
     * attribute names.</p>
     */
    inline void SetThingTypeProperties(ThingTypeProperties&& value) { m_thingTypePropertiesHasBeenSet = true; m_thingTypeProperties = value; }

    /**
     * <p>The ThingTypeProperties for the thing type to create. It contains information
     * about the new thing type including a description, and a list of searchable thing
     * attribute names.</p>
     */
    inline CreateThingTypeRequest& WithThingTypeProperties(const ThingTypeProperties& value) { SetThingTypeProperties(value); return *this;}

    /**
     * <p>The ThingTypeProperties for the thing type to create. It contains information
     * about the new thing type including a description, and a list of searchable thing
     * attribute names.</p>
     */
    inline CreateThingTypeRequest& WithThingTypeProperties(ThingTypeProperties&& value) { SetThingTypeProperties(value); return *this;}

  private:
    Aws::String m_thingTypeName;
    bool m_thingTypeNameHasBeenSet;
    ThingTypeProperties m_thingTypeProperties;
    bool m_thingTypePropertiesHasBeenSet;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
