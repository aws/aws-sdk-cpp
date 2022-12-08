/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/events/CloudWatchEvents_EXPORTS.h>
#include <aws/events/model/PlacementStrategyType.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace CloudWatchEvents
{
namespace Model
{

  /**
   * <p>The task placement strategy for a task or service. To learn more, see <a
   * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/task-placement-strategies.html">Task
   * Placement Strategies</a> in the Amazon Elastic Container Service Service
   * Developer Guide.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/events-2015-10-07/PlacementStrategy">AWS
   * API Reference</a></p>
   */
  class PlacementStrategy
  {
  public:
    AWS_CLOUDWATCHEVENTS_API PlacementStrategy();
    AWS_CLOUDWATCHEVENTS_API PlacementStrategy(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDWATCHEVENTS_API PlacementStrategy& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDWATCHEVENTS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The type of placement strategy. The random placement strategy randomly places
     * tasks on available candidates. The spread placement strategy spreads placement
     * across available candidates evenly based on the field parameter. The binpack
     * strategy places tasks on available candidates that have the least available
     * amount of the resource that is specified with the field parameter. For example,
     * if you binpack on memory, a task is placed on the instance with the least amount
     * of remaining memory (but still enough to run the task). </p>
     */
    inline const PlacementStrategyType& GetType() const{ return m_type; }

    /**
     * <p>The type of placement strategy. The random placement strategy randomly places
     * tasks on available candidates. The spread placement strategy spreads placement
     * across available candidates evenly based on the field parameter. The binpack
     * strategy places tasks on available candidates that have the least available
     * amount of the resource that is specified with the field parameter. For example,
     * if you binpack on memory, a task is placed on the instance with the least amount
     * of remaining memory (but still enough to run the task). </p>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p>The type of placement strategy. The random placement strategy randomly places
     * tasks on available candidates. The spread placement strategy spreads placement
     * across available candidates evenly based on the field parameter. The binpack
     * strategy places tasks on available candidates that have the least available
     * amount of the resource that is specified with the field parameter. For example,
     * if you binpack on memory, a task is placed on the instance with the least amount
     * of remaining memory (but still enough to run the task). </p>
     */
    inline void SetType(const PlacementStrategyType& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>The type of placement strategy. The random placement strategy randomly places
     * tasks on available candidates. The spread placement strategy spreads placement
     * across available candidates evenly based on the field parameter. The binpack
     * strategy places tasks on available candidates that have the least available
     * amount of the resource that is specified with the field parameter. For example,
     * if you binpack on memory, a task is placed on the instance with the least amount
     * of remaining memory (but still enough to run the task). </p>
     */
    inline void SetType(PlacementStrategyType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p>The type of placement strategy. The random placement strategy randomly places
     * tasks on available candidates. The spread placement strategy spreads placement
     * across available candidates evenly based on the field parameter. The binpack
     * strategy places tasks on available candidates that have the least available
     * amount of the resource that is specified with the field parameter. For example,
     * if you binpack on memory, a task is placed on the instance with the least amount
     * of remaining memory (but still enough to run the task). </p>
     */
    inline PlacementStrategy& WithType(const PlacementStrategyType& value) { SetType(value); return *this;}

    /**
     * <p>The type of placement strategy. The random placement strategy randomly places
     * tasks on available candidates. The spread placement strategy spreads placement
     * across available candidates evenly based on the field parameter. The binpack
     * strategy places tasks on available candidates that have the least available
     * amount of the resource that is specified with the field parameter. For example,
     * if you binpack on memory, a task is placed on the instance with the least amount
     * of remaining memory (but still enough to run the task). </p>
     */
    inline PlacementStrategy& WithType(PlacementStrategyType&& value) { SetType(std::move(value)); return *this;}


    /**
     * <p>The field to apply the placement strategy against. For the spread placement
     * strategy, valid values are instanceId (or host, which has the same effect), or
     * any platform or custom attribute that is applied to a container instance, such
     * as attribute:ecs.availability-zone. For the binpack placement strategy, valid
     * values are cpu and memory. For the random placement strategy, this field is not
     * used. </p>
     */
    inline const Aws::String& GetField() const{ return m_field; }

    /**
     * <p>The field to apply the placement strategy against. For the spread placement
     * strategy, valid values are instanceId (or host, which has the same effect), or
     * any platform or custom attribute that is applied to a container instance, such
     * as attribute:ecs.availability-zone. For the binpack placement strategy, valid
     * values are cpu and memory. For the random placement strategy, this field is not
     * used. </p>
     */
    inline bool FieldHasBeenSet() const { return m_fieldHasBeenSet; }

    /**
     * <p>The field to apply the placement strategy against. For the spread placement
     * strategy, valid values are instanceId (or host, which has the same effect), or
     * any platform or custom attribute that is applied to a container instance, such
     * as attribute:ecs.availability-zone. For the binpack placement strategy, valid
     * values are cpu and memory. For the random placement strategy, this field is not
     * used. </p>
     */
    inline void SetField(const Aws::String& value) { m_fieldHasBeenSet = true; m_field = value; }

    /**
     * <p>The field to apply the placement strategy against. For the spread placement
     * strategy, valid values are instanceId (or host, which has the same effect), or
     * any platform or custom attribute that is applied to a container instance, such
     * as attribute:ecs.availability-zone. For the binpack placement strategy, valid
     * values are cpu and memory. For the random placement strategy, this field is not
     * used. </p>
     */
    inline void SetField(Aws::String&& value) { m_fieldHasBeenSet = true; m_field = std::move(value); }

    /**
     * <p>The field to apply the placement strategy against. For the spread placement
     * strategy, valid values are instanceId (or host, which has the same effect), or
     * any platform or custom attribute that is applied to a container instance, such
     * as attribute:ecs.availability-zone. For the binpack placement strategy, valid
     * values are cpu and memory. For the random placement strategy, this field is not
     * used. </p>
     */
    inline void SetField(const char* value) { m_fieldHasBeenSet = true; m_field.assign(value); }

    /**
     * <p>The field to apply the placement strategy against. For the spread placement
     * strategy, valid values are instanceId (or host, which has the same effect), or
     * any platform or custom attribute that is applied to a container instance, such
     * as attribute:ecs.availability-zone. For the binpack placement strategy, valid
     * values are cpu and memory. For the random placement strategy, this field is not
     * used. </p>
     */
    inline PlacementStrategy& WithField(const Aws::String& value) { SetField(value); return *this;}

    /**
     * <p>The field to apply the placement strategy against. For the spread placement
     * strategy, valid values are instanceId (or host, which has the same effect), or
     * any platform or custom attribute that is applied to a container instance, such
     * as attribute:ecs.availability-zone. For the binpack placement strategy, valid
     * values are cpu and memory. For the random placement strategy, this field is not
     * used. </p>
     */
    inline PlacementStrategy& WithField(Aws::String&& value) { SetField(std::move(value)); return *this;}

    /**
     * <p>The field to apply the placement strategy against. For the spread placement
     * strategy, valid values are instanceId (or host, which has the same effect), or
     * any platform or custom attribute that is applied to a container instance, such
     * as attribute:ecs.availability-zone. For the binpack placement strategy, valid
     * values are cpu and memory. For the random placement strategy, this field is not
     * used. </p>
     */
    inline PlacementStrategy& WithField(const char* value) { SetField(value); return *this;}

  private:

    PlacementStrategyType m_type;
    bool m_typeHasBeenSet = false;

    Aws::String m_field;
    bool m_fieldHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudWatchEvents
} // namespace Aws
