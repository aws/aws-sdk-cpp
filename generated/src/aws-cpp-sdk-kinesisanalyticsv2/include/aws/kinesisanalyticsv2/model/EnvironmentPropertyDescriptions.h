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
   * <p>Describes the execution properties for an Apache Flink runtime.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/kinesisanalyticsv2-2018-05-23/EnvironmentPropertyDescriptions">AWS
   * API Reference</a></p>
   */
  class EnvironmentPropertyDescriptions
  {
  public:
    AWS_KINESISANALYTICSV2_API EnvironmentPropertyDescriptions();
    AWS_KINESISANALYTICSV2_API EnvironmentPropertyDescriptions(Aws::Utils::Json::JsonView jsonValue);
    AWS_KINESISANALYTICSV2_API EnvironmentPropertyDescriptions& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_KINESISANALYTICSV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Describes the execution property groups.</p>
     */
    inline const Aws::Vector<PropertyGroup>& GetPropertyGroupDescriptions() const{ return m_propertyGroupDescriptions; }

    /**
     * <p>Describes the execution property groups.</p>
     */
    inline bool PropertyGroupDescriptionsHasBeenSet() const { return m_propertyGroupDescriptionsHasBeenSet; }

    /**
     * <p>Describes the execution property groups.</p>
     */
    inline void SetPropertyGroupDescriptions(const Aws::Vector<PropertyGroup>& value) { m_propertyGroupDescriptionsHasBeenSet = true; m_propertyGroupDescriptions = value; }

    /**
     * <p>Describes the execution property groups.</p>
     */
    inline void SetPropertyGroupDescriptions(Aws::Vector<PropertyGroup>&& value) { m_propertyGroupDescriptionsHasBeenSet = true; m_propertyGroupDescriptions = std::move(value); }

    /**
     * <p>Describes the execution property groups.</p>
     */
    inline EnvironmentPropertyDescriptions& WithPropertyGroupDescriptions(const Aws::Vector<PropertyGroup>& value) { SetPropertyGroupDescriptions(value); return *this;}

    /**
     * <p>Describes the execution property groups.</p>
     */
    inline EnvironmentPropertyDescriptions& WithPropertyGroupDescriptions(Aws::Vector<PropertyGroup>&& value) { SetPropertyGroupDescriptions(std::move(value)); return *this;}

    /**
     * <p>Describes the execution property groups.</p>
     */
    inline EnvironmentPropertyDescriptions& AddPropertyGroupDescriptions(const PropertyGroup& value) { m_propertyGroupDescriptionsHasBeenSet = true; m_propertyGroupDescriptions.push_back(value); return *this; }

    /**
     * <p>Describes the execution property groups.</p>
     */
    inline EnvironmentPropertyDescriptions& AddPropertyGroupDescriptions(PropertyGroup&& value) { m_propertyGroupDescriptionsHasBeenSet = true; m_propertyGroupDescriptions.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<PropertyGroup> m_propertyGroupDescriptions;
    bool m_propertyGroupDescriptionsHasBeenSet = false;
  };

} // namespace Model
} // namespace KinesisAnalyticsV2
} // namespace Aws
