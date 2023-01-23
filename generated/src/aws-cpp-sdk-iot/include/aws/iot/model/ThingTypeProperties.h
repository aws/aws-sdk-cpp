/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot/IoT_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
   * <p>The ThingTypeProperties contains information about the thing type including:
   * a thing type description, and a list of searchable thing attribute
   * names.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/ThingTypeProperties">AWS
   * API Reference</a></p>
   */
  class ThingTypeProperties
  {
  public:
    AWS_IOT_API ThingTypeProperties();
    AWS_IOT_API ThingTypeProperties(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOT_API ThingTypeProperties& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The description of the thing type.</p>
     */
    inline const Aws::String& GetThingTypeDescription() const{ return m_thingTypeDescription; }

    /**
     * <p>The description of the thing type.</p>
     */
    inline bool ThingTypeDescriptionHasBeenSet() const { return m_thingTypeDescriptionHasBeenSet; }

    /**
     * <p>The description of the thing type.</p>
     */
    inline void SetThingTypeDescription(const Aws::String& value) { m_thingTypeDescriptionHasBeenSet = true; m_thingTypeDescription = value; }

    /**
     * <p>The description of the thing type.</p>
     */
    inline void SetThingTypeDescription(Aws::String&& value) { m_thingTypeDescriptionHasBeenSet = true; m_thingTypeDescription = std::move(value); }

    /**
     * <p>The description of the thing type.</p>
     */
    inline void SetThingTypeDescription(const char* value) { m_thingTypeDescriptionHasBeenSet = true; m_thingTypeDescription.assign(value); }

    /**
     * <p>The description of the thing type.</p>
     */
    inline ThingTypeProperties& WithThingTypeDescription(const Aws::String& value) { SetThingTypeDescription(value); return *this;}

    /**
     * <p>The description of the thing type.</p>
     */
    inline ThingTypeProperties& WithThingTypeDescription(Aws::String&& value) { SetThingTypeDescription(std::move(value)); return *this;}

    /**
     * <p>The description of the thing type.</p>
     */
    inline ThingTypeProperties& WithThingTypeDescription(const char* value) { SetThingTypeDescription(value); return *this;}


    /**
     * <p>A list of searchable thing attribute names.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSearchableAttributes() const{ return m_searchableAttributes; }

    /**
     * <p>A list of searchable thing attribute names.</p>
     */
    inline bool SearchableAttributesHasBeenSet() const { return m_searchableAttributesHasBeenSet; }

    /**
     * <p>A list of searchable thing attribute names.</p>
     */
    inline void SetSearchableAttributes(const Aws::Vector<Aws::String>& value) { m_searchableAttributesHasBeenSet = true; m_searchableAttributes = value; }

    /**
     * <p>A list of searchable thing attribute names.</p>
     */
    inline void SetSearchableAttributes(Aws::Vector<Aws::String>&& value) { m_searchableAttributesHasBeenSet = true; m_searchableAttributes = std::move(value); }

    /**
     * <p>A list of searchable thing attribute names.</p>
     */
    inline ThingTypeProperties& WithSearchableAttributes(const Aws::Vector<Aws::String>& value) { SetSearchableAttributes(value); return *this;}

    /**
     * <p>A list of searchable thing attribute names.</p>
     */
    inline ThingTypeProperties& WithSearchableAttributes(Aws::Vector<Aws::String>&& value) { SetSearchableAttributes(std::move(value)); return *this;}

    /**
     * <p>A list of searchable thing attribute names.</p>
     */
    inline ThingTypeProperties& AddSearchableAttributes(const Aws::String& value) { m_searchableAttributesHasBeenSet = true; m_searchableAttributes.push_back(value); return *this; }

    /**
     * <p>A list of searchable thing attribute names.</p>
     */
    inline ThingTypeProperties& AddSearchableAttributes(Aws::String&& value) { m_searchableAttributesHasBeenSet = true; m_searchableAttributes.push_back(std::move(value)); return *this; }

    /**
     * <p>A list of searchable thing attribute names.</p>
     */
    inline ThingTypeProperties& AddSearchableAttributes(const char* value) { m_searchableAttributesHasBeenSet = true; m_searchableAttributes.push_back(value); return *this; }

  private:

    Aws::String m_thingTypeDescription;
    bool m_thingTypeDescriptionHasBeenSet = false;

    Aws::Vector<Aws::String> m_searchableAttributes;
    bool m_searchableAttributesHasBeenSet = false;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
