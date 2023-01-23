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
   * <p>Describes updates to the execution property groups for a Flink-based Kinesis
   * Data Analytics application or a Studio notebook.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/kinesisanalyticsv2-2018-05-23/EnvironmentPropertyUpdates">AWS
   * API Reference</a></p>
   */
  class EnvironmentPropertyUpdates
  {
  public:
    AWS_KINESISANALYTICSV2_API EnvironmentPropertyUpdates();
    AWS_KINESISANALYTICSV2_API EnvironmentPropertyUpdates(Aws::Utils::Json::JsonView jsonValue);
    AWS_KINESISANALYTICSV2_API EnvironmentPropertyUpdates& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_KINESISANALYTICSV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Describes updates to the execution property groups.</p>
     */
    inline const Aws::Vector<PropertyGroup>& GetPropertyGroups() const{ return m_propertyGroups; }

    /**
     * <p>Describes updates to the execution property groups.</p>
     */
    inline bool PropertyGroupsHasBeenSet() const { return m_propertyGroupsHasBeenSet; }

    /**
     * <p>Describes updates to the execution property groups.</p>
     */
    inline void SetPropertyGroups(const Aws::Vector<PropertyGroup>& value) { m_propertyGroupsHasBeenSet = true; m_propertyGroups = value; }

    /**
     * <p>Describes updates to the execution property groups.</p>
     */
    inline void SetPropertyGroups(Aws::Vector<PropertyGroup>&& value) { m_propertyGroupsHasBeenSet = true; m_propertyGroups = std::move(value); }

    /**
     * <p>Describes updates to the execution property groups.</p>
     */
    inline EnvironmentPropertyUpdates& WithPropertyGroups(const Aws::Vector<PropertyGroup>& value) { SetPropertyGroups(value); return *this;}

    /**
     * <p>Describes updates to the execution property groups.</p>
     */
    inline EnvironmentPropertyUpdates& WithPropertyGroups(Aws::Vector<PropertyGroup>&& value) { SetPropertyGroups(std::move(value)); return *this;}

    /**
     * <p>Describes updates to the execution property groups.</p>
     */
    inline EnvironmentPropertyUpdates& AddPropertyGroups(const PropertyGroup& value) { m_propertyGroupsHasBeenSet = true; m_propertyGroups.push_back(value); return *this; }

    /**
     * <p>Describes updates to the execution property groups.</p>
     */
    inline EnvironmentPropertyUpdates& AddPropertyGroups(PropertyGroup&& value) { m_propertyGroupsHasBeenSet = true; m_propertyGroups.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<PropertyGroup> m_propertyGroups;
    bool m_propertyGroupsHasBeenSet = false;
  };

} // namespace Model
} // namespace KinesisAnalyticsV2
} // namespace Aws
