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
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/kinesisanalyticsv2/model/PropertyGroup.h>
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
   * <p>Describes execution properties for a Java-based Kinesis Data Analytics
   * application.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/kinesisanalyticsv2-2018-05-23/EnvironmentProperties">AWS
   * API Reference</a></p>
   */
  class AWS_KINESISANALYTICSV2_API EnvironmentProperties
  {
  public:
    EnvironmentProperties();
    EnvironmentProperties(Aws::Utils::Json::JsonView jsonValue);
    EnvironmentProperties& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Describes the execution property groups.</p>
     */
    inline const Aws::Vector<PropertyGroup>& GetPropertyGroups() const{ return m_propertyGroups; }

    /**
     * <p>Describes the execution property groups.</p>
     */
    inline bool PropertyGroupsHasBeenSet() const { return m_propertyGroupsHasBeenSet; }

    /**
     * <p>Describes the execution property groups.</p>
     */
    inline void SetPropertyGroups(const Aws::Vector<PropertyGroup>& value) { m_propertyGroupsHasBeenSet = true; m_propertyGroups = value; }

    /**
     * <p>Describes the execution property groups.</p>
     */
    inline void SetPropertyGroups(Aws::Vector<PropertyGroup>&& value) { m_propertyGroupsHasBeenSet = true; m_propertyGroups = std::move(value); }

    /**
     * <p>Describes the execution property groups.</p>
     */
    inline EnvironmentProperties& WithPropertyGroups(const Aws::Vector<PropertyGroup>& value) { SetPropertyGroups(value); return *this;}

    /**
     * <p>Describes the execution property groups.</p>
     */
    inline EnvironmentProperties& WithPropertyGroups(Aws::Vector<PropertyGroup>&& value) { SetPropertyGroups(std::move(value)); return *this;}

    /**
     * <p>Describes the execution property groups.</p>
     */
    inline EnvironmentProperties& AddPropertyGroups(const PropertyGroup& value) { m_propertyGroupsHasBeenSet = true; m_propertyGroups.push_back(value); return *this; }

    /**
     * <p>Describes the execution property groups.</p>
     */
    inline EnvironmentProperties& AddPropertyGroups(PropertyGroup&& value) { m_propertyGroupsHasBeenSet = true; m_propertyGroups.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<PropertyGroup> m_propertyGroups;
    bool m_propertyGroupsHasBeenSet;
  };

} // namespace Model
} // namespace KinesisAnalyticsV2
} // namespace Aws
