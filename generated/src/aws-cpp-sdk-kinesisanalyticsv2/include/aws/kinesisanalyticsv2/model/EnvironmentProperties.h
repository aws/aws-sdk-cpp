/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
   * <p>Describes execution properties for a Managed Service for Apache Flink
   * application.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/kinesisanalyticsv2-2018-05-23/EnvironmentProperties">AWS
   * API Reference</a></p>
   */
  class EnvironmentProperties
  {
  public:
    AWS_KINESISANALYTICSV2_API EnvironmentProperties() = default;
    AWS_KINESISANALYTICSV2_API EnvironmentProperties(Aws::Utils::Json::JsonView jsonValue);
    AWS_KINESISANALYTICSV2_API EnvironmentProperties& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_KINESISANALYTICSV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Describes the execution property groups.</p>
     */
    inline const Aws::Vector<PropertyGroup>& GetPropertyGroups() const { return m_propertyGroups; }
    inline bool PropertyGroupsHasBeenSet() const { return m_propertyGroupsHasBeenSet; }
    template<typename PropertyGroupsT = Aws::Vector<PropertyGroup>>
    void SetPropertyGroups(PropertyGroupsT&& value) { m_propertyGroupsHasBeenSet = true; m_propertyGroups = std::forward<PropertyGroupsT>(value); }
    template<typename PropertyGroupsT = Aws::Vector<PropertyGroup>>
    EnvironmentProperties& WithPropertyGroups(PropertyGroupsT&& value) { SetPropertyGroups(std::forward<PropertyGroupsT>(value)); return *this;}
    template<typename PropertyGroupsT = PropertyGroup>
    EnvironmentProperties& AddPropertyGroups(PropertyGroupsT&& value) { m_propertyGroupsHasBeenSet = true; m_propertyGroups.emplace_back(std::forward<PropertyGroupsT>(value)); return *this; }
    ///@}
  private:

    Aws::Vector<PropertyGroup> m_propertyGroups;
    bool m_propertyGroupsHasBeenSet = false;
  };

} // namespace Model
} // namespace KinesisAnalyticsV2
} // namespace Aws
