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
    AWS_IOT1CLICKPROJECTS_API PlacementTemplate() = default;
    AWS_IOT1CLICKPROJECTS_API PlacementTemplate(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOT1CLICKPROJECTS_API PlacementTemplate& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOT1CLICKPROJECTS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The default attributes (key/value pairs) to be applied to all placements
     * using this template.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetDefaultAttributes() const { return m_defaultAttributes; }
    inline bool DefaultAttributesHasBeenSet() const { return m_defaultAttributesHasBeenSet; }
    template<typename DefaultAttributesT = Aws::Map<Aws::String, Aws::String>>
    void SetDefaultAttributes(DefaultAttributesT&& value) { m_defaultAttributesHasBeenSet = true; m_defaultAttributes = std::forward<DefaultAttributesT>(value); }
    template<typename DefaultAttributesT = Aws::Map<Aws::String, Aws::String>>
    PlacementTemplate& WithDefaultAttributes(DefaultAttributesT&& value) { SetDefaultAttributes(std::forward<DefaultAttributesT>(value)); return *this;}
    template<typename DefaultAttributesKeyT = Aws::String, typename DefaultAttributesValueT = Aws::String>
    PlacementTemplate& AddDefaultAttributes(DefaultAttributesKeyT&& key, DefaultAttributesValueT&& value) {
      m_defaultAttributesHasBeenSet = true; m_defaultAttributes.emplace(std::forward<DefaultAttributesKeyT>(key), std::forward<DefaultAttributesValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>An object specifying the <a>DeviceTemplate</a> for all placements using this
     * (<a>PlacementTemplate</a>) template.</p>
     */
    inline const Aws::Map<Aws::String, DeviceTemplate>& GetDeviceTemplates() const { return m_deviceTemplates; }
    inline bool DeviceTemplatesHasBeenSet() const { return m_deviceTemplatesHasBeenSet; }
    template<typename DeviceTemplatesT = Aws::Map<Aws::String, DeviceTemplate>>
    void SetDeviceTemplates(DeviceTemplatesT&& value) { m_deviceTemplatesHasBeenSet = true; m_deviceTemplates = std::forward<DeviceTemplatesT>(value); }
    template<typename DeviceTemplatesT = Aws::Map<Aws::String, DeviceTemplate>>
    PlacementTemplate& WithDeviceTemplates(DeviceTemplatesT&& value) { SetDeviceTemplates(std::forward<DeviceTemplatesT>(value)); return *this;}
    template<typename DeviceTemplatesKeyT = Aws::String, typename DeviceTemplatesValueT = DeviceTemplate>
    PlacementTemplate& AddDeviceTemplates(DeviceTemplatesKeyT&& key, DeviceTemplatesValueT&& value) {
      m_deviceTemplatesHasBeenSet = true; m_deviceTemplates.emplace(std::forward<DeviceTemplatesKeyT>(key), std::forward<DeviceTemplatesValueT>(value)); return *this;
    }
    ///@}
  private:

    Aws::Map<Aws::String, Aws::String> m_defaultAttributes;
    bool m_defaultAttributesHasBeenSet = false;

    Aws::Map<Aws::String, DeviceTemplate> m_deviceTemplates;
    bool m_deviceTemplatesHasBeenSet = false;
  };

} // namespace Model
} // namespace IoT1ClickProjects
} // namespace Aws
