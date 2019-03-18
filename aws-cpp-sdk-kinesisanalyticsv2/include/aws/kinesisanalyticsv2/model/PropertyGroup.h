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
   * <p>Property key-value pairs passed into a Java-based Kinesis Data Analytics
   * application.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/kinesisanalyticsv2-2018-05-23/PropertyGroup">AWS
   * API Reference</a></p>
   */
  class AWS_KINESISANALYTICSV2_API PropertyGroup
  {
  public:
    PropertyGroup();
    PropertyGroup(Aws::Utils::Json::JsonView jsonValue);
    PropertyGroup& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Describes the key of an application execution property key-value pair.</p>
     */
    inline const Aws::String& GetPropertyGroupId() const{ return m_propertyGroupId; }

    /**
     * <p>Describes the key of an application execution property key-value pair.</p>
     */
    inline bool PropertyGroupIdHasBeenSet() const { return m_propertyGroupIdHasBeenSet; }

    /**
     * <p>Describes the key of an application execution property key-value pair.</p>
     */
    inline void SetPropertyGroupId(const Aws::String& value) { m_propertyGroupIdHasBeenSet = true; m_propertyGroupId = value; }

    /**
     * <p>Describes the key of an application execution property key-value pair.</p>
     */
    inline void SetPropertyGroupId(Aws::String&& value) { m_propertyGroupIdHasBeenSet = true; m_propertyGroupId = std::move(value); }

    /**
     * <p>Describes the key of an application execution property key-value pair.</p>
     */
    inline void SetPropertyGroupId(const char* value) { m_propertyGroupIdHasBeenSet = true; m_propertyGroupId.assign(value); }

    /**
     * <p>Describes the key of an application execution property key-value pair.</p>
     */
    inline PropertyGroup& WithPropertyGroupId(const Aws::String& value) { SetPropertyGroupId(value); return *this;}

    /**
     * <p>Describes the key of an application execution property key-value pair.</p>
     */
    inline PropertyGroup& WithPropertyGroupId(Aws::String&& value) { SetPropertyGroupId(std::move(value)); return *this;}

    /**
     * <p>Describes the key of an application execution property key-value pair.</p>
     */
    inline PropertyGroup& WithPropertyGroupId(const char* value) { SetPropertyGroupId(value); return *this;}


    /**
     * <p>Describes the value of an application execution property key-value pair.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetPropertyMap() const{ return m_propertyMap; }

    /**
     * <p>Describes the value of an application execution property key-value pair.</p>
     */
    inline bool PropertyMapHasBeenSet() const { return m_propertyMapHasBeenSet; }

    /**
     * <p>Describes the value of an application execution property key-value pair.</p>
     */
    inline void SetPropertyMap(const Aws::Map<Aws::String, Aws::String>& value) { m_propertyMapHasBeenSet = true; m_propertyMap = value; }

    /**
     * <p>Describes the value of an application execution property key-value pair.</p>
     */
    inline void SetPropertyMap(Aws::Map<Aws::String, Aws::String>&& value) { m_propertyMapHasBeenSet = true; m_propertyMap = std::move(value); }

    /**
     * <p>Describes the value of an application execution property key-value pair.</p>
     */
    inline PropertyGroup& WithPropertyMap(const Aws::Map<Aws::String, Aws::String>& value) { SetPropertyMap(value); return *this;}

    /**
     * <p>Describes the value of an application execution property key-value pair.</p>
     */
    inline PropertyGroup& WithPropertyMap(Aws::Map<Aws::String, Aws::String>&& value) { SetPropertyMap(std::move(value)); return *this;}

    /**
     * <p>Describes the value of an application execution property key-value pair.</p>
     */
    inline PropertyGroup& AddPropertyMap(const Aws::String& key, const Aws::String& value) { m_propertyMapHasBeenSet = true; m_propertyMap.emplace(key, value); return *this; }

    /**
     * <p>Describes the value of an application execution property key-value pair.</p>
     */
    inline PropertyGroup& AddPropertyMap(Aws::String&& key, const Aws::String& value) { m_propertyMapHasBeenSet = true; m_propertyMap.emplace(std::move(key), value); return *this; }

    /**
     * <p>Describes the value of an application execution property key-value pair.</p>
     */
    inline PropertyGroup& AddPropertyMap(const Aws::String& key, Aws::String&& value) { m_propertyMapHasBeenSet = true; m_propertyMap.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Describes the value of an application execution property key-value pair.</p>
     */
    inline PropertyGroup& AddPropertyMap(Aws::String&& key, Aws::String&& value) { m_propertyMapHasBeenSet = true; m_propertyMap.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>Describes the value of an application execution property key-value pair.</p>
     */
    inline PropertyGroup& AddPropertyMap(const char* key, Aws::String&& value) { m_propertyMapHasBeenSet = true; m_propertyMap.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Describes the value of an application execution property key-value pair.</p>
     */
    inline PropertyGroup& AddPropertyMap(Aws::String&& key, const char* value) { m_propertyMapHasBeenSet = true; m_propertyMap.emplace(std::move(key), value); return *this; }

    /**
     * <p>Describes the value of an application execution property key-value pair.</p>
     */
    inline PropertyGroup& AddPropertyMap(const char* key, const char* value) { m_propertyMapHasBeenSet = true; m_propertyMap.emplace(key, value); return *this; }

  private:

    Aws::String m_propertyGroupId;
    bool m_propertyGroupIdHasBeenSet;

    Aws::Map<Aws::String, Aws::String> m_propertyMap;
    bool m_propertyMapHasBeenSet;
  };

} // namespace Model
} // namespace KinesisAnalyticsV2
} // namespace Aws
