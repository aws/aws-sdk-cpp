/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot/IoT_EXPORTS.h>
#include <aws/iot/IoTRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iot/model/ThingTypeProperties.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/iot/model/Tag.h>
#include <utility>

namespace Aws
{
namespace IoT
{
namespace Model
{

  /**
   * <p>The input for the CreateThingType operation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/CreateThingTypeRequest">AWS
   * API Reference</a></p>
   */
  class CreateThingTypeRequest : public IoTRequest
  {
  public:
    AWS_IOT_API CreateThingTypeRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateThingType"; }

    AWS_IOT_API Aws::String SerializePayload() const override;


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
    inline CreateThingTypeRequest& WithThingTypeName(const Aws::String& value) { SetThingTypeName(value); return *this;}

    /**
     * <p>The name of the thing type.</p>
     */
    inline CreateThingTypeRequest& WithThingTypeName(Aws::String&& value) { SetThingTypeName(std::move(value)); return *this;}

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
    inline bool ThingTypePropertiesHasBeenSet() const { return m_thingTypePropertiesHasBeenSet; }

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
    inline void SetThingTypeProperties(ThingTypeProperties&& value) { m_thingTypePropertiesHasBeenSet = true; m_thingTypeProperties = std::move(value); }

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
    inline CreateThingTypeRequest& WithThingTypeProperties(ThingTypeProperties&& value) { SetThingTypeProperties(std::move(value)); return *this;}


    /**
     * <p>Metadata which can be used to manage the thing type.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p>Metadata which can be used to manage the thing type.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>Metadata which can be used to manage the thing type.</p>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>Metadata which can be used to manage the thing type.</p>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>Metadata which can be used to manage the thing type.</p>
     */
    inline CreateThingTypeRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>Metadata which can be used to manage the thing type.</p>
     */
    inline CreateThingTypeRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>Metadata which can be used to manage the thing type.</p>
     */
    inline CreateThingTypeRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>Metadata which can be used to manage the thing type.</p>
     */
    inline CreateThingTypeRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_thingTypeName;
    bool m_thingTypeNameHasBeenSet = false;

    ThingTypeProperties m_thingTypeProperties;
    bool m_thingTypePropertiesHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
