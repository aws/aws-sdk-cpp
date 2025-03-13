/**
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
    AWS_IOT_API ThingTypeDefinition() = default;
    AWS_IOT_API ThingTypeDefinition(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOT_API ThingTypeDefinition& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the thing type.</p>
     */
    inline const Aws::String& GetThingTypeName() const { return m_thingTypeName; }
    inline bool ThingTypeNameHasBeenSet() const { return m_thingTypeNameHasBeenSet; }
    template<typename ThingTypeNameT = Aws::String>
    void SetThingTypeName(ThingTypeNameT&& value) { m_thingTypeNameHasBeenSet = true; m_thingTypeName = std::forward<ThingTypeNameT>(value); }
    template<typename ThingTypeNameT = Aws::String>
    ThingTypeDefinition& WithThingTypeName(ThingTypeNameT&& value) { SetThingTypeName(std::forward<ThingTypeNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The thing type ARN.</p>
     */
    inline const Aws::String& GetThingTypeArn() const { return m_thingTypeArn; }
    inline bool ThingTypeArnHasBeenSet() const { return m_thingTypeArnHasBeenSet; }
    template<typename ThingTypeArnT = Aws::String>
    void SetThingTypeArn(ThingTypeArnT&& value) { m_thingTypeArnHasBeenSet = true; m_thingTypeArn = std::forward<ThingTypeArnT>(value); }
    template<typename ThingTypeArnT = Aws::String>
    ThingTypeDefinition& WithThingTypeArn(ThingTypeArnT&& value) { SetThingTypeArn(std::forward<ThingTypeArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ThingTypeProperties for the thing type.</p>
     */
    inline const ThingTypeProperties& GetThingTypeProperties() const { return m_thingTypeProperties; }
    inline bool ThingTypePropertiesHasBeenSet() const { return m_thingTypePropertiesHasBeenSet; }
    template<typename ThingTypePropertiesT = ThingTypeProperties>
    void SetThingTypeProperties(ThingTypePropertiesT&& value) { m_thingTypePropertiesHasBeenSet = true; m_thingTypeProperties = std::forward<ThingTypePropertiesT>(value); }
    template<typename ThingTypePropertiesT = ThingTypeProperties>
    ThingTypeDefinition& WithThingTypeProperties(ThingTypePropertiesT&& value) { SetThingTypeProperties(std::forward<ThingTypePropertiesT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ThingTypeMetadata contains additional information about the thing type
     * including: creation date and time, a value indicating whether the thing type is
     * deprecated, and a date and time when it was deprecated.</p>
     */
    inline const ThingTypeMetadata& GetThingTypeMetadata() const { return m_thingTypeMetadata; }
    inline bool ThingTypeMetadataHasBeenSet() const { return m_thingTypeMetadataHasBeenSet; }
    template<typename ThingTypeMetadataT = ThingTypeMetadata>
    void SetThingTypeMetadata(ThingTypeMetadataT&& value) { m_thingTypeMetadataHasBeenSet = true; m_thingTypeMetadata = std::forward<ThingTypeMetadataT>(value); }
    template<typename ThingTypeMetadataT = ThingTypeMetadata>
    ThingTypeDefinition& WithThingTypeMetadata(ThingTypeMetadataT&& value) { SetThingTypeMetadata(std::forward<ThingTypeMetadataT>(value)); return *this;}
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
