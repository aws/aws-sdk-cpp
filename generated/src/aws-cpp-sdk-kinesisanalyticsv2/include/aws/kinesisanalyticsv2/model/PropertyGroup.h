﻿/**
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
    AWS_KINESISANALYTICSV2_API PropertyGroup();
    AWS_KINESISANALYTICSV2_API PropertyGroup(Aws::Utils::Json::JsonView jsonValue);
    AWS_KINESISANALYTICSV2_API PropertyGroup& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_KINESISANALYTICSV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Describes the key of an application execution property key-value pair.</p>
     */
    inline const Aws::String& GetPropertyGroupId() const{ return m_propertyGroupId; }
    inline bool PropertyGroupIdHasBeenSet() const { return m_propertyGroupIdHasBeenSet; }
    inline void SetPropertyGroupId(const Aws::String& value) { m_propertyGroupIdHasBeenSet = true; m_propertyGroupId = value; }
    inline void SetPropertyGroupId(Aws::String&& value) { m_propertyGroupIdHasBeenSet = true; m_propertyGroupId = std::move(value); }
    inline void SetPropertyGroupId(const char* value) { m_propertyGroupIdHasBeenSet = true; m_propertyGroupId.assign(value); }
    inline PropertyGroup& WithPropertyGroupId(const Aws::String& value) { SetPropertyGroupId(value); return *this;}
    inline PropertyGroup& WithPropertyGroupId(Aws::String&& value) { SetPropertyGroupId(std::move(value)); return *this;}
    inline PropertyGroup& WithPropertyGroupId(const char* value) { SetPropertyGroupId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Describes the value of an application execution property key-value pair.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetPropertyMap() const{ return m_propertyMap; }
    inline bool PropertyMapHasBeenSet() const { return m_propertyMapHasBeenSet; }
    inline void SetPropertyMap(const Aws::Map<Aws::String, Aws::String>& value) { m_propertyMapHasBeenSet = true; m_propertyMap = value; }
    inline void SetPropertyMap(Aws::Map<Aws::String, Aws::String>&& value) { m_propertyMapHasBeenSet = true; m_propertyMap = std::move(value); }
    inline PropertyGroup& WithPropertyMap(const Aws::Map<Aws::String, Aws::String>& value) { SetPropertyMap(value); return *this;}
    inline PropertyGroup& WithPropertyMap(Aws::Map<Aws::String, Aws::String>&& value) { SetPropertyMap(std::move(value)); return *this;}
    inline PropertyGroup& AddPropertyMap(const Aws::String& key, const Aws::String& value) { m_propertyMapHasBeenSet = true; m_propertyMap.emplace(key, value); return *this; }
    inline PropertyGroup& AddPropertyMap(Aws::String&& key, const Aws::String& value) { m_propertyMapHasBeenSet = true; m_propertyMap.emplace(std::move(key), value); return *this; }
    inline PropertyGroup& AddPropertyMap(const Aws::String& key, Aws::String&& value) { m_propertyMapHasBeenSet = true; m_propertyMap.emplace(key, std::move(value)); return *this; }
    inline PropertyGroup& AddPropertyMap(Aws::String&& key, Aws::String&& value) { m_propertyMapHasBeenSet = true; m_propertyMap.emplace(std::move(key), std::move(value)); return *this; }
    inline PropertyGroup& AddPropertyMap(const char* key, Aws::String&& value) { m_propertyMapHasBeenSet = true; m_propertyMap.emplace(key, std::move(value)); return *this; }
    inline PropertyGroup& AddPropertyMap(Aws::String&& key, const char* value) { m_propertyMapHasBeenSet = true; m_propertyMap.emplace(std::move(key), value); return *this; }
    inline PropertyGroup& AddPropertyMap(const char* key, const char* value) { m_propertyMapHasBeenSet = true; m_propertyMap.emplace(key, value); return *this; }
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
