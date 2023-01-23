/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot1click-projects/IoT1ClickProjects_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iot1click-projects/model/DeviceTemplate.h>
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
namespace IoT1ClickProjects
{
namespace Model
{

  /**
   * <p>An object defining the template for a placement.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iot1click-projects-2018-05-14/PlacementTemplate">AWS
   * API Reference</a></p>
   */
  class PlacementTemplate
  {
  public:
    AWS_IOT1CLICKPROJECTS_API PlacementTemplate();
    AWS_IOT1CLICKPROJECTS_API PlacementTemplate(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOT1CLICKPROJECTS_API PlacementTemplate& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOT1CLICKPROJECTS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The default attributes (key/value pairs) to be applied to all placements
     * using this template.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetDefaultAttributes() const{ return m_defaultAttributes; }

    /**
     * <p>The default attributes (key/value pairs) to be applied to all placements
     * using this template.</p>
     */
    inline bool DefaultAttributesHasBeenSet() const { return m_defaultAttributesHasBeenSet; }

    /**
     * <p>The default attributes (key/value pairs) to be applied to all placements
     * using this template.</p>
     */
    inline void SetDefaultAttributes(const Aws::Map<Aws::String, Aws::String>& value) { m_defaultAttributesHasBeenSet = true; m_defaultAttributes = value; }

    /**
     * <p>The default attributes (key/value pairs) to be applied to all placements
     * using this template.</p>
     */
    inline void SetDefaultAttributes(Aws::Map<Aws::String, Aws::String>&& value) { m_defaultAttributesHasBeenSet = true; m_defaultAttributes = std::move(value); }

    /**
     * <p>The default attributes (key/value pairs) to be applied to all placements
     * using this template.</p>
     */
    inline PlacementTemplate& WithDefaultAttributes(const Aws::Map<Aws::String, Aws::String>& value) { SetDefaultAttributes(value); return *this;}

    /**
     * <p>The default attributes (key/value pairs) to be applied to all placements
     * using this template.</p>
     */
    inline PlacementTemplate& WithDefaultAttributes(Aws::Map<Aws::String, Aws::String>&& value) { SetDefaultAttributes(std::move(value)); return *this;}

    /**
     * <p>The default attributes (key/value pairs) to be applied to all placements
     * using this template.</p>
     */
    inline PlacementTemplate& AddDefaultAttributes(const Aws::String& key, const Aws::String& value) { m_defaultAttributesHasBeenSet = true; m_defaultAttributes.emplace(key, value); return *this; }

    /**
     * <p>The default attributes (key/value pairs) to be applied to all placements
     * using this template.</p>
     */
    inline PlacementTemplate& AddDefaultAttributes(Aws::String&& key, const Aws::String& value) { m_defaultAttributesHasBeenSet = true; m_defaultAttributes.emplace(std::move(key), value); return *this; }

    /**
     * <p>The default attributes (key/value pairs) to be applied to all placements
     * using this template.</p>
     */
    inline PlacementTemplate& AddDefaultAttributes(const Aws::String& key, Aws::String&& value) { m_defaultAttributesHasBeenSet = true; m_defaultAttributes.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The default attributes (key/value pairs) to be applied to all placements
     * using this template.</p>
     */
    inline PlacementTemplate& AddDefaultAttributes(Aws::String&& key, Aws::String&& value) { m_defaultAttributesHasBeenSet = true; m_defaultAttributes.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>The default attributes (key/value pairs) to be applied to all placements
     * using this template.</p>
     */
    inline PlacementTemplate& AddDefaultAttributes(const char* key, Aws::String&& value) { m_defaultAttributesHasBeenSet = true; m_defaultAttributes.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The default attributes (key/value pairs) to be applied to all placements
     * using this template.</p>
     */
    inline PlacementTemplate& AddDefaultAttributes(Aws::String&& key, const char* value) { m_defaultAttributesHasBeenSet = true; m_defaultAttributes.emplace(std::move(key), value); return *this; }

    /**
     * <p>The default attributes (key/value pairs) to be applied to all placements
     * using this template.</p>
     */
    inline PlacementTemplate& AddDefaultAttributes(const char* key, const char* value) { m_defaultAttributesHasBeenSet = true; m_defaultAttributes.emplace(key, value); return *this; }


    /**
     * <p>An object specifying the <a>DeviceTemplate</a> for all placements using this
     * (<a>PlacementTemplate</a>) template.</p>
     */
    inline const Aws::Map<Aws::String, DeviceTemplate>& GetDeviceTemplates() const{ return m_deviceTemplates; }

    /**
     * <p>An object specifying the <a>DeviceTemplate</a> for all placements using this
     * (<a>PlacementTemplate</a>) template.</p>
     */
    inline bool DeviceTemplatesHasBeenSet() const { return m_deviceTemplatesHasBeenSet; }

    /**
     * <p>An object specifying the <a>DeviceTemplate</a> for all placements using this
     * (<a>PlacementTemplate</a>) template.</p>
     */
    inline void SetDeviceTemplates(const Aws::Map<Aws::String, DeviceTemplate>& value) { m_deviceTemplatesHasBeenSet = true; m_deviceTemplates = value; }

    /**
     * <p>An object specifying the <a>DeviceTemplate</a> for all placements using this
     * (<a>PlacementTemplate</a>) template.</p>
     */
    inline void SetDeviceTemplates(Aws::Map<Aws::String, DeviceTemplate>&& value) { m_deviceTemplatesHasBeenSet = true; m_deviceTemplates = std::move(value); }

    /**
     * <p>An object specifying the <a>DeviceTemplate</a> for all placements using this
     * (<a>PlacementTemplate</a>) template.</p>
     */
    inline PlacementTemplate& WithDeviceTemplates(const Aws::Map<Aws::String, DeviceTemplate>& value) { SetDeviceTemplates(value); return *this;}

    /**
     * <p>An object specifying the <a>DeviceTemplate</a> for all placements using this
     * (<a>PlacementTemplate</a>) template.</p>
     */
    inline PlacementTemplate& WithDeviceTemplates(Aws::Map<Aws::String, DeviceTemplate>&& value) { SetDeviceTemplates(std::move(value)); return *this;}

    /**
     * <p>An object specifying the <a>DeviceTemplate</a> for all placements using this
     * (<a>PlacementTemplate</a>) template.</p>
     */
    inline PlacementTemplate& AddDeviceTemplates(const Aws::String& key, const DeviceTemplate& value) { m_deviceTemplatesHasBeenSet = true; m_deviceTemplates.emplace(key, value); return *this; }

    /**
     * <p>An object specifying the <a>DeviceTemplate</a> for all placements using this
     * (<a>PlacementTemplate</a>) template.</p>
     */
    inline PlacementTemplate& AddDeviceTemplates(Aws::String&& key, const DeviceTemplate& value) { m_deviceTemplatesHasBeenSet = true; m_deviceTemplates.emplace(std::move(key), value); return *this; }

    /**
     * <p>An object specifying the <a>DeviceTemplate</a> for all placements using this
     * (<a>PlacementTemplate</a>) template.</p>
     */
    inline PlacementTemplate& AddDeviceTemplates(const Aws::String& key, DeviceTemplate&& value) { m_deviceTemplatesHasBeenSet = true; m_deviceTemplates.emplace(key, std::move(value)); return *this; }

    /**
     * <p>An object specifying the <a>DeviceTemplate</a> for all placements using this
     * (<a>PlacementTemplate</a>) template.</p>
     */
    inline PlacementTemplate& AddDeviceTemplates(Aws::String&& key, DeviceTemplate&& value) { m_deviceTemplatesHasBeenSet = true; m_deviceTemplates.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>An object specifying the <a>DeviceTemplate</a> for all placements using this
     * (<a>PlacementTemplate</a>) template.</p>
     */
    inline PlacementTemplate& AddDeviceTemplates(const char* key, DeviceTemplate&& value) { m_deviceTemplatesHasBeenSet = true; m_deviceTemplates.emplace(key, std::move(value)); return *this; }

    /**
     * <p>An object specifying the <a>DeviceTemplate</a> for all placements using this
     * (<a>PlacementTemplate</a>) template.</p>
     */
    inline PlacementTemplate& AddDeviceTemplates(const char* key, const DeviceTemplate& value) { m_deviceTemplatesHasBeenSet = true; m_deviceTemplates.emplace(key, value); return *this; }

  private:

    Aws::Map<Aws::String, Aws::String> m_defaultAttributes;
    bool m_defaultAttributesHasBeenSet = false;

    Aws::Map<Aws::String, DeviceTemplate> m_deviceTemplates;
    bool m_deviceTemplatesHasBeenSet = false;
  };

} // namespace Model
} // namespace IoT1ClickProjects
} // namespace Aws
