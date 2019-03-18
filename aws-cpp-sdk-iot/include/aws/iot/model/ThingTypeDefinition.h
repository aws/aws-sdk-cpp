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
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iot/model/ThingTypeProperties.h>
#include <aws/iot/model/ThingTypeMetadata.h>
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
   * <p>The definition of the thing type, including thing type name and
   * description.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/ThingTypeDefinition">AWS
   * API Reference</a></p>
   */
  class AWS_IOT_API ThingTypeDefinition
  {
  public:
    ThingTypeDefinition();
    ThingTypeDefinition(Aws::Utils::Json::JsonView jsonValue);
    ThingTypeDefinition& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the thing type.</p>
     */
    inline const Aws::String& GetThingTypeName() const{ return m_thingTypeName; }

    /**
     * <p>The name of the thing type.</p>
     */
    inline bool ThingTypeNameHasBeenSet() const { return m_thingTypeNameHasBeenSet; }

    /**
     * <p>The name of the thing type.</p>
     */
    inline void SetThingTypeName(const Aws::String& value) { m_thingTypeNameHasBeenSet = true; m_thingTypeName = value; }

    /**
     * <p>The name of the thing type.</p>
     */
    inline void SetThingTypeName(Aws::String&& value) { m_thingTypeNameHasBeenSet = true; m_thingTypeName = std::move(value); }

    /**
     * <p>The name of the thing type.</p>
     */
    inline void SetThingTypeName(const char* value) { m_thingTypeNameHasBeenSet = true; m_thingTypeName.assign(value); }

    /**
     * <p>The name of the thing type.</p>
     */
    inline ThingTypeDefinition& WithThingTypeName(const Aws::String& value) { SetThingTypeName(value); return *this;}

    /**
     * <p>The name of the thing type.</p>
     */
    inline ThingTypeDefinition& WithThingTypeName(Aws::String&& value) { SetThingTypeName(std::move(value)); return *this;}

    /**
     * <p>The name of the thing type.</p>
     */
    inline ThingTypeDefinition& WithThingTypeName(const char* value) { SetThingTypeName(value); return *this;}


    /**
     * <p>The thing type ARN.</p>
     */
    inline const Aws::String& GetThingTypeArn() const{ return m_thingTypeArn; }

    /**
     * <p>The thing type ARN.</p>
     */
    inline bool ThingTypeArnHasBeenSet() const { return m_thingTypeArnHasBeenSet; }

    /**
     * <p>The thing type ARN.</p>
     */
    inline void SetThingTypeArn(const Aws::String& value) { m_thingTypeArnHasBeenSet = true; m_thingTypeArn = value; }

    /**
     * <p>The thing type ARN.</p>
     */
    inline void SetThingTypeArn(Aws::String&& value) { m_thingTypeArnHasBeenSet = true; m_thingTypeArn = std::move(value); }

    /**
     * <p>The thing type ARN.</p>
     */
    inline void SetThingTypeArn(const char* value) { m_thingTypeArnHasBeenSet = true; m_thingTypeArn.assign(value); }

    /**
     * <p>The thing type ARN.</p>
     */
    inline ThingTypeDefinition& WithThingTypeArn(const Aws::String& value) { SetThingTypeArn(value); return *this;}

    /**
     * <p>The thing type ARN.</p>
     */
    inline ThingTypeDefinition& WithThingTypeArn(Aws::String&& value) { SetThingTypeArn(std::move(value)); return *this;}

    /**
     * <p>The thing type ARN.</p>
     */
    inline ThingTypeDefinition& WithThingTypeArn(const char* value) { SetThingTypeArn(value); return *this;}


    /**
     * <p>The ThingTypeProperties for the thing type.</p>
     */
    inline const ThingTypeProperties& GetThingTypeProperties() const{ return m_thingTypeProperties; }

    /**
     * <p>The ThingTypeProperties for the thing type.</p>
     */
    inline bool ThingTypePropertiesHasBeenSet() const { return m_thingTypePropertiesHasBeenSet; }

    /**
     * <p>The ThingTypeProperties for the thing type.</p>
     */
    inline void SetThingTypeProperties(const ThingTypeProperties& value) { m_thingTypePropertiesHasBeenSet = true; m_thingTypeProperties = value; }

    /**
     * <p>The ThingTypeProperties for the thing type.</p>
     */
    inline void SetThingTypeProperties(ThingTypeProperties&& value) { m_thingTypePropertiesHasBeenSet = true; m_thingTypeProperties = std::move(value); }

    /**
     * <p>The ThingTypeProperties for the thing type.</p>
     */
    inline ThingTypeDefinition& WithThingTypeProperties(const ThingTypeProperties& value) { SetThingTypeProperties(value); return *this;}

    /**
     * <p>The ThingTypeProperties for the thing type.</p>
     */
    inline ThingTypeDefinition& WithThingTypeProperties(ThingTypeProperties&& value) { SetThingTypeProperties(std::move(value)); return *this;}


    /**
     * <p>The ThingTypeMetadata contains additional information about the thing type
     * including: creation date and time, a value indicating whether the thing type is
     * deprecated, and a date and time when it was deprecated.</p>
     */
    inline const ThingTypeMetadata& GetThingTypeMetadata() const{ return m_thingTypeMetadata; }

    /**
     * <p>The ThingTypeMetadata contains additional information about the thing type
     * including: creation date and time, a value indicating whether the thing type is
     * deprecated, and a date and time when it was deprecated.</p>
     */
    inline bool ThingTypeMetadataHasBeenSet() const { return m_thingTypeMetadataHasBeenSet; }

    /**
     * <p>The ThingTypeMetadata contains additional information about the thing type
     * including: creation date and time, a value indicating whether the thing type is
     * deprecated, and a date and time when it was deprecated.</p>
     */
    inline void SetThingTypeMetadata(const ThingTypeMetadata& value) { m_thingTypeMetadataHasBeenSet = true; m_thingTypeMetadata = value; }

    /**
     * <p>The ThingTypeMetadata contains additional information about the thing type
     * including: creation date and time, a value indicating whether the thing type is
     * deprecated, and a date and time when it was deprecated.</p>
     */
    inline void SetThingTypeMetadata(ThingTypeMetadata&& value) { m_thingTypeMetadataHasBeenSet = true; m_thingTypeMetadata = std::move(value); }

    /**
     * <p>The ThingTypeMetadata contains additional information about the thing type
     * including: creation date and time, a value indicating whether the thing type is
     * deprecated, and a date and time when it was deprecated.</p>
     */
    inline ThingTypeDefinition& WithThingTypeMetadata(const ThingTypeMetadata& value) { SetThingTypeMetadata(value); return *this;}

    /**
     * <p>The ThingTypeMetadata contains additional information about the thing type
     * including: creation date and time, a value indicating whether the thing type is
     * deprecated, and a date and time when it was deprecated.</p>
     */
    inline ThingTypeDefinition& WithThingTypeMetadata(ThingTypeMetadata&& value) { SetThingTypeMetadata(std::move(value)); return *this;}

  private:

    Aws::String m_thingTypeName;
    bool m_thingTypeNameHasBeenSet;

    Aws::String m_thingTypeArn;
    bool m_thingTypeArnHasBeenSet;

    ThingTypeProperties m_thingTypeProperties;
    bool m_thingTypePropertiesHasBeenSet;

    ThingTypeMetadata m_thingTypeMetadata;
    bool m_thingTypeMetadataHasBeenSet;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
