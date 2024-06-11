﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class ThingTypeDefinition
  {
  public:
    AWS_IOT_API ThingTypeDefinition();
    AWS_IOT_API ThingTypeDefinition(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOT_API ThingTypeDefinition& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the thing type.</p>
     */
    inline const Aws::String& GetThingTypeName() const{ return m_thingTypeName; }
    inline bool ThingTypeNameHasBeenSet() const { return m_thingTypeNameHasBeenSet; }
    inline void SetThingTypeName(const Aws::String& value) { m_thingTypeNameHasBeenSet = true; m_thingTypeName = value; }
    inline void SetThingTypeName(Aws::String&& value) { m_thingTypeNameHasBeenSet = true; m_thingTypeName = std::move(value); }
    inline void SetThingTypeName(const char* value) { m_thingTypeNameHasBeenSet = true; m_thingTypeName.assign(value); }
    inline ThingTypeDefinition& WithThingTypeName(const Aws::String& value) { SetThingTypeName(value); return *this;}
    inline ThingTypeDefinition& WithThingTypeName(Aws::String&& value) { SetThingTypeName(std::move(value)); return *this;}
    inline ThingTypeDefinition& WithThingTypeName(const char* value) { SetThingTypeName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The thing type ARN.</p>
     */
    inline const Aws::String& GetThingTypeArn() const{ return m_thingTypeArn; }
    inline bool ThingTypeArnHasBeenSet() const { return m_thingTypeArnHasBeenSet; }
    inline void SetThingTypeArn(const Aws::String& value) { m_thingTypeArnHasBeenSet = true; m_thingTypeArn = value; }
    inline void SetThingTypeArn(Aws::String&& value) { m_thingTypeArnHasBeenSet = true; m_thingTypeArn = std::move(value); }
    inline void SetThingTypeArn(const char* value) { m_thingTypeArnHasBeenSet = true; m_thingTypeArn.assign(value); }
    inline ThingTypeDefinition& WithThingTypeArn(const Aws::String& value) { SetThingTypeArn(value); return *this;}
    inline ThingTypeDefinition& WithThingTypeArn(Aws::String&& value) { SetThingTypeArn(std::move(value)); return *this;}
    inline ThingTypeDefinition& WithThingTypeArn(const char* value) { SetThingTypeArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ThingTypeProperties for the thing type.</p>
     */
    inline const ThingTypeProperties& GetThingTypeProperties() const{ return m_thingTypeProperties; }
    inline bool ThingTypePropertiesHasBeenSet() const { return m_thingTypePropertiesHasBeenSet; }
    inline void SetThingTypeProperties(const ThingTypeProperties& value) { m_thingTypePropertiesHasBeenSet = true; m_thingTypeProperties = value; }
    inline void SetThingTypeProperties(ThingTypeProperties&& value) { m_thingTypePropertiesHasBeenSet = true; m_thingTypeProperties = std::move(value); }
    inline ThingTypeDefinition& WithThingTypeProperties(const ThingTypeProperties& value) { SetThingTypeProperties(value); return *this;}
    inline ThingTypeDefinition& WithThingTypeProperties(ThingTypeProperties&& value) { SetThingTypeProperties(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ThingTypeMetadata contains additional information about the thing type
     * including: creation date and time, a value indicating whether the thing type is
     * deprecated, and a date and time when it was deprecated.</p>
     */
    inline const ThingTypeMetadata& GetThingTypeMetadata() const{ return m_thingTypeMetadata; }
    inline bool ThingTypeMetadataHasBeenSet() const { return m_thingTypeMetadataHasBeenSet; }
    inline void SetThingTypeMetadata(const ThingTypeMetadata& value) { m_thingTypeMetadataHasBeenSet = true; m_thingTypeMetadata = value; }
    inline void SetThingTypeMetadata(ThingTypeMetadata&& value) { m_thingTypeMetadataHasBeenSet = true; m_thingTypeMetadata = std::move(value); }
    inline ThingTypeDefinition& WithThingTypeMetadata(const ThingTypeMetadata& value) { SetThingTypeMetadata(value); return *this;}
    inline ThingTypeDefinition& WithThingTypeMetadata(ThingTypeMetadata&& value) { SetThingTypeMetadata(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_thingTypeName;
    bool m_thingTypeNameHasBeenSet = false;

    Aws::String m_thingTypeArn;
    bool m_thingTypeArnHasBeenSet = false;

    ThingTypeProperties m_thingTypeProperties;
    bool m_thingTypePropertiesHasBeenSet = false;

    ThingTypeMetadata m_thingTypeMetadata;
    bool m_thingTypeMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
