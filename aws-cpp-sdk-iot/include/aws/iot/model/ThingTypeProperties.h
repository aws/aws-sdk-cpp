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
  class AWS_IOT_API ThingTypeProperties
  {
  public:
    ThingTypeProperties();
    ThingTypeProperties(Aws::Utils::Json::JsonView jsonValue);
    ThingTypeProperties& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


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
    bool m_thingTypeDescriptionHasBeenSet;

    Aws::Vector<Aws::String> m_searchableAttributes;
    bool m_searchableAttributesHasBeenSet;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
