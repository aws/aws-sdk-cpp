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
#include <aws/pinpoint/Pinpoint_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/pinpoint/model/SegmentBehaviors.h>
#include <aws/pinpoint/model/SegmentDemographics.h>
#include <aws/pinpoint/model/SegmentLocation.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/pinpoint/model/AttributeDimension.h>
#include <aws/pinpoint/model/MetricDimension.h>
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
namespace Pinpoint
{
namespace Model
{

  /**
   * Segment dimensions<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/SegmentDimensions">AWS
   * API Reference</a></p>
   */
  class AWS_PINPOINT_API SegmentDimensions
  {
  public:
    SegmentDimensions();
    SegmentDimensions(Aws::Utils::Json::JsonView jsonValue);
    SegmentDimensions& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * Custom segment attributes.
     */
    inline const Aws::Map<Aws::String, AttributeDimension>& GetAttributes() const{ return m_attributes; }

    /**
     * Custom segment attributes.
     */
    inline bool AttributesHasBeenSet() const { return m_attributesHasBeenSet; }

    /**
     * Custom segment attributes.
     */
    inline void SetAttributes(const Aws::Map<Aws::String, AttributeDimension>& value) { m_attributesHasBeenSet = true; m_attributes = value; }

    /**
     * Custom segment attributes.
     */
    inline void SetAttributes(Aws::Map<Aws::String, AttributeDimension>&& value) { m_attributesHasBeenSet = true; m_attributes = std::move(value); }

    /**
     * Custom segment attributes.
     */
    inline SegmentDimensions& WithAttributes(const Aws::Map<Aws::String, AttributeDimension>& value) { SetAttributes(value); return *this;}

    /**
     * Custom segment attributes.
     */
    inline SegmentDimensions& WithAttributes(Aws::Map<Aws::String, AttributeDimension>&& value) { SetAttributes(std::move(value)); return *this;}

    /**
     * Custom segment attributes.
     */
    inline SegmentDimensions& AddAttributes(const Aws::String& key, const AttributeDimension& value) { m_attributesHasBeenSet = true; m_attributes.emplace(key, value); return *this; }

    /**
     * Custom segment attributes.
     */
    inline SegmentDimensions& AddAttributes(Aws::String&& key, const AttributeDimension& value) { m_attributesHasBeenSet = true; m_attributes.emplace(std::move(key), value); return *this; }

    /**
     * Custom segment attributes.
     */
    inline SegmentDimensions& AddAttributes(const Aws::String& key, AttributeDimension&& value) { m_attributesHasBeenSet = true; m_attributes.emplace(key, std::move(value)); return *this; }

    /**
     * Custom segment attributes.
     */
    inline SegmentDimensions& AddAttributes(Aws::String&& key, AttributeDimension&& value) { m_attributesHasBeenSet = true; m_attributes.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * Custom segment attributes.
     */
    inline SegmentDimensions& AddAttributes(const char* key, AttributeDimension&& value) { m_attributesHasBeenSet = true; m_attributes.emplace(key, std::move(value)); return *this; }

    /**
     * Custom segment attributes.
     */
    inline SegmentDimensions& AddAttributes(const char* key, const AttributeDimension& value) { m_attributesHasBeenSet = true; m_attributes.emplace(key, value); return *this; }


    /**
     * The segment behaviors attributes.
     */
    inline const SegmentBehaviors& GetBehavior() const{ return m_behavior; }

    /**
     * The segment behaviors attributes.
     */
    inline bool BehaviorHasBeenSet() const { return m_behaviorHasBeenSet; }

    /**
     * The segment behaviors attributes.
     */
    inline void SetBehavior(const SegmentBehaviors& value) { m_behaviorHasBeenSet = true; m_behavior = value; }

    /**
     * The segment behaviors attributes.
     */
    inline void SetBehavior(SegmentBehaviors&& value) { m_behaviorHasBeenSet = true; m_behavior = std::move(value); }

    /**
     * The segment behaviors attributes.
     */
    inline SegmentDimensions& WithBehavior(const SegmentBehaviors& value) { SetBehavior(value); return *this;}

    /**
     * The segment behaviors attributes.
     */
    inline SegmentDimensions& WithBehavior(SegmentBehaviors&& value) { SetBehavior(std::move(value)); return *this;}


    /**
     * The segment demographics attributes.
     */
    inline const SegmentDemographics& GetDemographic() const{ return m_demographic; }

    /**
     * The segment demographics attributes.
     */
    inline bool DemographicHasBeenSet() const { return m_demographicHasBeenSet; }

    /**
     * The segment demographics attributes.
     */
    inline void SetDemographic(const SegmentDemographics& value) { m_demographicHasBeenSet = true; m_demographic = value; }

    /**
     * The segment demographics attributes.
     */
    inline void SetDemographic(SegmentDemographics&& value) { m_demographicHasBeenSet = true; m_demographic = std::move(value); }

    /**
     * The segment demographics attributes.
     */
    inline SegmentDimensions& WithDemographic(const SegmentDemographics& value) { SetDemographic(value); return *this;}

    /**
     * The segment demographics attributes.
     */
    inline SegmentDimensions& WithDemographic(SegmentDemographics&& value) { SetDemographic(std::move(value)); return *this;}


    /**
     * The segment location attributes.
     */
    inline const SegmentLocation& GetLocation() const{ return m_location; }

    /**
     * The segment location attributes.
     */
    inline bool LocationHasBeenSet() const { return m_locationHasBeenSet; }

    /**
     * The segment location attributes.
     */
    inline void SetLocation(const SegmentLocation& value) { m_locationHasBeenSet = true; m_location = value; }

    /**
     * The segment location attributes.
     */
    inline void SetLocation(SegmentLocation&& value) { m_locationHasBeenSet = true; m_location = std::move(value); }

    /**
     * The segment location attributes.
     */
    inline SegmentDimensions& WithLocation(const SegmentLocation& value) { SetLocation(value); return *this;}

    /**
     * The segment location attributes.
     */
    inline SegmentDimensions& WithLocation(SegmentLocation&& value) { SetLocation(std::move(value)); return *this;}


    /**
     * Custom segment metrics.
     */
    inline const Aws::Map<Aws::String, MetricDimension>& GetMetrics() const{ return m_metrics; }

    /**
     * Custom segment metrics.
     */
    inline bool MetricsHasBeenSet() const { return m_metricsHasBeenSet; }

    /**
     * Custom segment metrics.
     */
    inline void SetMetrics(const Aws::Map<Aws::String, MetricDimension>& value) { m_metricsHasBeenSet = true; m_metrics = value; }

    /**
     * Custom segment metrics.
     */
    inline void SetMetrics(Aws::Map<Aws::String, MetricDimension>&& value) { m_metricsHasBeenSet = true; m_metrics = std::move(value); }

    /**
     * Custom segment metrics.
     */
    inline SegmentDimensions& WithMetrics(const Aws::Map<Aws::String, MetricDimension>& value) { SetMetrics(value); return *this;}

    /**
     * Custom segment metrics.
     */
    inline SegmentDimensions& WithMetrics(Aws::Map<Aws::String, MetricDimension>&& value) { SetMetrics(std::move(value)); return *this;}

    /**
     * Custom segment metrics.
     */
    inline SegmentDimensions& AddMetrics(const Aws::String& key, const MetricDimension& value) { m_metricsHasBeenSet = true; m_metrics.emplace(key, value); return *this; }

    /**
     * Custom segment metrics.
     */
    inline SegmentDimensions& AddMetrics(Aws::String&& key, const MetricDimension& value) { m_metricsHasBeenSet = true; m_metrics.emplace(std::move(key), value); return *this; }

    /**
     * Custom segment metrics.
     */
    inline SegmentDimensions& AddMetrics(const Aws::String& key, MetricDimension&& value) { m_metricsHasBeenSet = true; m_metrics.emplace(key, std::move(value)); return *this; }

    /**
     * Custom segment metrics.
     */
    inline SegmentDimensions& AddMetrics(Aws::String&& key, MetricDimension&& value) { m_metricsHasBeenSet = true; m_metrics.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * Custom segment metrics.
     */
    inline SegmentDimensions& AddMetrics(const char* key, MetricDimension&& value) { m_metricsHasBeenSet = true; m_metrics.emplace(key, std::move(value)); return *this; }

    /**
     * Custom segment metrics.
     */
    inline SegmentDimensions& AddMetrics(const char* key, const MetricDimension& value) { m_metricsHasBeenSet = true; m_metrics.emplace(key, value); return *this; }


    /**
     * Custom segment user attributes.
     */
    inline const Aws::Map<Aws::String, AttributeDimension>& GetUserAttributes() const{ return m_userAttributes; }

    /**
     * Custom segment user attributes.
     */
    inline bool UserAttributesHasBeenSet() const { return m_userAttributesHasBeenSet; }

    /**
     * Custom segment user attributes.
     */
    inline void SetUserAttributes(const Aws::Map<Aws::String, AttributeDimension>& value) { m_userAttributesHasBeenSet = true; m_userAttributes = value; }

    /**
     * Custom segment user attributes.
     */
    inline void SetUserAttributes(Aws::Map<Aws::String, AttributeDimension>&& value) { m_userAttributesHasBeenSet = true; m_userAttributes = std::move(value); }

    /**
     * Custom segment user attributes.
     */
    inline SegmentDimensions& WithUserAttributes(const Aws::Map<Aws::String, AttributeDimension>& value) { SetUserAttributes(value); return *this;}

    /**
     * Custom segment user attributes.
     */
    inline SegmentDimensions& WithUserAttributes(Aws::Map<Aws::String, AttributeDimension>&& value) { SetUserAttributes(std::move(value)); return *this;}

    /**
     * Custom segment user attributes.
     */
    inline SegmentDimensions& AddUserAttributes(const Aws::String& key, const AttributeDimension& value) { m_userAttributesHasBeenSet = true; m_userAttributes.emplace(key, value); return *this; }

    /**
     * Custom segment user attributes.
     */
    inline SegmentDimensions& AddUserAttributes(Aws::String&& key, const AttributeDimension& value) { m_userAttributesHasBeenSet = true; m_userAttributes.emplace(std::move(key), value); return *this; }

    /**
     * Custom segment user attributes.
     */
    inline SegmentDimensions& AddUserAttributes(const Aws::String& key, AttributeDimension&& value) { m_userAttributesHasBeenSet = true; m_userAttributes.emplace(key, std::move(value)); return *this; }

    /**
     * Custom segment user attributes.
     */
    inline SegmentDimensions& AddUserAttributes(Aws::String&& key, AttributeDimension&& value) { m_userAttributesHasBeenSet = true; m_userAttributes.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * Custom segment user attributes.
     */
    inline SegmentDimensions& AddUserAttributes(const char* key, AttributeDimension&& value) { m_userAttributesHasBeenSet = true; m_userAttributes.emplace(key, std::move(value)); return *this; }

    /**
     * Custom segment user attributes.
     */
    inline SegmentDimensions& AddUserAttributes(const char* key, const AttributeDimension& value) { m_userAttributesHasBeenSet = true; m_userAttributes.emplace(key, value); return *this; }

  private:

    Aws::Map<Aws::String, AttributeDimension> m_attributes;
    bool m_attributesHasBeenSet;

    SegmentBehaviors m_behavior;
    bool m_behaviorHasBeenSet;

    SegmentDemographics m_demographic;
    bool m_demographicHasBeenSet;

    SegmentLocation m_location;
    bool m_locationHasBeenSet;

    Aws::Map<Aws::String, MetricDimension> m_metrics;
    bool m_metricsHasBeenSet;

    Aws::Map<Aws::String, AttributeDimension> m_userAttributes;
    bool m_userAttributesHasBeenSet;
  };

} // namespace Model
} // namespace Pinpoint
} // namespace Aws
