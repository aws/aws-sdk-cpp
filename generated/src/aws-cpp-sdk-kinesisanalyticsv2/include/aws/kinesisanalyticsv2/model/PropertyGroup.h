/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kinesisanalyticsv2/KinesisAnalyticsV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
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
namespace KinesisAnalyticsV2
{
namespace Model
{

  /**
   * <p>Property key-value pairs passed into an application.</p><p><h3>See Also:</h3>
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/kinesisanalyticsv2-2018-05-23/PropertyGroup">AWS
   * API Reference</a></p>
   */
  class PropertyGroup
  {
  public:
    AWS_KINESISANALYTICSV2_API PropertyGroup() = default;
    AWS_KINESISANALYTICSV2_API PropertyGroup(Aws::Utils::Json::JsonView jsonValue);
    AWS_KINESISANALYTICSV2_API PropertyGroup& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_KINESISANALYTICSV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Describes the key of an application execution property key-value pair.</p>
     */
    inline const Aws::String& GetPropertyGroupId() const { return m_propertyGroupId; }
    inline bool PropertyGroupIdHasBeenSet() const { return m_propertyGroupIdHasBeenSet; }
    template<typename PropertyGroupIdT = Aws::String>
    void SetPropertyGroupId(PropertyGroupIdT&& value) { m_propertyGroupIdHasBeenSet = true; m_propertyGroupId = std::forward<PropertyGroupIdT>(value); }
    template<typename PropertyGroupIdT = Aws::String>
    PropertyGroup& WithPropertyGroupId(PropertyGroupIdT&& value) { SetPropertyGroupId(std::forward<PropertyGroupIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Describes the value of an application execution property key-value pair.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetPropertyMap() const { return m_propertyMap; }
    inline bool PropertyMapHasBeenSet() const { return m_propertyMapHasBeenSet; }
    template<typename PropertyMapT = Aws::Map<Aws::String, Aws::String>>
    void SetPropertyMap(PropertyMapT&& value) { m_propertyMapHasBeenSet = true; m_propertyMap = std::forward<PropertyMapT>(value); }
    template<typename PropertyMapT = Aws::Map<Aws::String, Aws::String>>
    PropertyGroup& WithPropertyMap(PropertyMapT&& value) { SetPropertyMap(std::forward<PropertyMapT>(value)); return *this;}
    template<typename PropertyMapKeyT = Aws::String, typename PropertyMapValueT = Aws::String>
    PropertyGroup& AddPropertyMap(PropertyMapKeyT&& key, PropertyMapValueT&& value) {
      m_propertyMapHasBeenSet = true; m_propertyMap.emplace(std::forward<PropertyMapKeyT>(key), std::forward<PropertyMapValueT>(value)); return *this;
    }
    ///@}
  private:

    Aws::String m_propertyGroupId;
    bool m_propertyGroupIdHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_propertyMap;
    bool m_propertyMapHasBeenSet = false;
  };

} // namespace Model
} // namespace KinesisAnalyticsV2
} // namespace Aws
