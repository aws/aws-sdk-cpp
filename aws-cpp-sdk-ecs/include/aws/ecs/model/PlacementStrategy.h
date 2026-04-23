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
#include <aws/ecs/ECS_EXPORTS.h>
#include <aws/ecs/model/PlacementStrategyType.h>
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
namespace ECS
{
namespace Model
{

  /**
   * <p>The task placement strategy for a task or service. For more information, see
   * <a
   * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/task-placement-strategies.html">Task
   * Placement Strategies</a> in the <i>Amazon Elastic Container Service Developer
   * Guide</i>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ecs-2014-11-13/PlacementStrategy">AWS
   * API Reference</a></p>
   */
  class AWS_ECS_API PlacementStrategy
  {
  public:
    PlacementStrategy();
    PlacementStrategy(Aws::Utils::Json::JsonView jsonValue);
    PlacementStrategy& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The type of placement strategy. The <code>random</code> placement strategy
     * randomly places tasks on available candidates. The <code>spread</code> placement
     * strategy spreads placement across available candidates evenly based on the
     * <code>field</code> parameter. The <code>binpack</code> strategy places tasks on
     * available candidates that have the least available amount of the resource that
     * is specified with the <code>field</code> parameter. For example, if you binpack
     * on memory, a task is placed on the instance with the least amount of remaining
     * memory (but still enough to run the task).</p>
     */
    inline const PlacementStrategyType& GetType() const{ return m_type; }

    /**
     * <p>The type of placement strategy. The <code>random</code> placement strategy
     * randomly places tasks on available candidates. The <code>spread</code> placement
     * strategy spreads placement across available candidates evenly based on the
     * <code>field</code> parameter. The <code>binpack</code> strategy places tasks on
     * available candidates that have the least available amount of the resource that
     * is specified with the <code>field</code> parameter. For example, if you binpack
     * on memory, a task is placed on the instance with the least amount of remaining
     * memory (but still enough to run the task).</p>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p>The type of placement strategy. The <code>random</code> placement strategy
     * randomly places tasks on available candidates. The <code>spread</code> placement
     * strategy spreads placement across available candidates evenly based on the
     * <code>field</code> parameter. The <code>binpack</code> strategy places tasks on
     * available candidates that have the least available amount of the resource that
     * is specified with the <code>field</code> parameter. For example, if you binpack
     * on memory, a task is placed on the instance with the least amount of remaining
     * memory (but still enough to run the task).</p>
     */
    inline void SetType(const PlacementStrategyType& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>The type of placement strategy. The <code>random</code> placement strategy
     * randomly places tasks on available candidates. The <code>spread</code> placement
     * strategy spreads placement across available candidates evenly based on the
     * <code>field</code> parameter. The <code>binpack</code> strategy places tasks on
     * available candidates that have the least available amount of the resource that
     * is specified with the <code>field</code> parameter. For example, if you binpack
     * on memory, a task is placed on the instance with the least amount of remaining
     * memory (but still enough to run the task).</p>
     */
    inline void SetType(PlacementStrategyType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p>The type of placement strategy. The <code>random</code> placement strategy
     * randomly places tasks on available candidates. The <code>spread</code> placement
     * strategy spreads placement across available candidates evenly based on the
     * <code>field</code> parameter. The <code>binpack</code> strategy places tasks on
     * available candidates that have the least available amount of the resource that
     * is specified with the <code>field</code> parameter. For example, if you binpack
     * on memory, a task is placed on the instance with the least amount of remaining
     * memory (but still enough to run the task).</p>
     */
    inline PlacementStrategy& WithType(const PlacementStrategyType& value) { SetType(value); return *this;}

    /**
     * <p>The type of placement strategy. The <code>random</code> placement strategy
     * randomly places tasks on available candidates. The <code>spread</code> placement
     * strategy spreads placement across available candidates evenly based on the
     * <code>field</code> parameter. The <code>binpack</code> strategy places tasks on
     * available candidates that have the least available amount of the resource that
     * is specified with the <code>field</code> parameter. For example, if you binpack
     * on memory, a task is placed on the instance with the least amount of remaining
     * memory (but still enough to run the task).</p>
     */
    inline PlacementStrategy& WithType(PlacementStrategyType&& value) { SetType(std::move(value)); return *this;}


    /**
     * <p>The field to apply the placement strategy against. For the
     * <code>spread</code> placement strategy, valid values are <code>instanceId</code>
     * (or <code>host</code>, which has the same effect), or any platform or custom
     * attribute that is applied to a container instance, such as
     * <code>attribute:ecs.availability-zone</code>. For the <code>binpack</code>
     * placement strategy, valid values are <code>cpu</code> and <code>memory</code>.
     * For the <code>random</code> placement strategy, this field is not used.</p>
     */
    inline const Aws::String& GetField() const{ return m_field; }

    /**
     * <p>The field to apply the placement strategy against. For the
     * <code>spread</code> placement strategy, valid values are <code>instanceId</code>
     * (or <code>host</code>, which has the same effect), or any platform or custom
     * attribute that is applied to a container instance, such as
     * <code>attribute:ecs.availability-zone</code>. For the <code>binpack</code>
     * placement strategy, valid values are <code>cpu</code> and <code>memory</code>.
     * For the <code>random</code> placement strategy, this field is not used.</p>
     */
    inline bool FieldHasBeenSet() const { return m_fieldHasBeenSet; }

    /**
     * <p>The field to apply the placement strategy against. For the
     * <code>spread</code> placement strategy, valid values are <code>instanceId</code>
     * (or <code>host</code>, which has the same effect), or any platform or custom
     * attribute that is applied to a container instance, such as
     * <code>attribute:ecs.availability-zone</code>. For the <code>binpack</code>
     * placement strategy, valid values are <code>cpu</code> and <code>memory</code>.
     * For the <code>random</code> placement strategy, this field is not used.</p>
     */
    inline void SetField(const Aws::String& value) { m_fieldHasBeenSet = true; m_field = value; }

    /**
     * <p>The field to apply the placement strategy against. For the
     * <code>spread</code> placement strategy, valid values are <code>instanceId</code>
     * (or <code>host</code>, which has the same effect), or any platform or custom
     * attribute that is applied to a container instance, such as
     * <code>attribute:ecs.availability-zone</code>. For the <code>binpack</code>
     * placement strategy, valid values are <code>cpu</code> and <code>memory</code>.
     * For the <code>random</code> placement strategy, this field is not used.</p>
     */
    inline void SetField(Aws::String&& value) { m_fieldHasBeenSet = true; m_field = std::move(value); }

    /**
     * <p>The field to apply the placement strategy against. For the
     * <code>spread</code> placement strategy, valid values are <code>instanceId</code>
     * (or <code>host</code>, which has the same effect), or any platform or custom
     * attribute that is applied to a container instance, such as
     * <code>attribute:ecs.availability-zone</code>. For the <code>binpack</code>
     * placement strategy, valid values are <code>cpu</code> and <code>memory</code>.
     * For the <code>random</code> placement strategy, this field is not used.</p>
     */
    inline void SetField(const char* value) { m_fieldHasBeenSet = true; m_field.assign(value); }

    /**
     * <p>The field to apply the placement strategy against. For the
     * <code>spread</code> placement strategy, valid values are <code>instanceId</code>
     * (or <code>host</code>, which has the same effect), or any platform or custom
     * attribute that is applied to a container instance, such as
     * <code>attribute:ecs.availability-zone</code>. For the <code>binpack</code>
     * placement strategy, valid values are <code>cpu</code> and <code>memory</code>.
     * For the <code>random</code> placement strategy, this field is not used.</p>
     */
    inline PlacementStrategy& WithField(const Aws::String& value) { SetField(value); return *this;}

    /**
     * <p>The field to apply the placement strategy against. For the
     * <code>spread</code> placement strategy, valid values are <code>instanceId</code>
     * (or <code>host</code>, which has the same effect), or any platform or custom
     * attribute that is applied to a container instance, such as
     * <code>attribute:ecs.availability-zone</code>. For the <code>binpack</code>
     * placement strategy, valid values are <code>cpu</code> and <code>memory</code>.
     * For the <code>random</code> placement strategy, this field is not used.</p>
     */
    inline PlacementStrategy& WithField(Aws::String&& value) { SetField(std::move(value)); return *this;}

    /**
     * <p>The field to apply the placement strategy against. For the
     * <code>spread</code> placement strategy, valid values are <code>instanceId</code>
     * (or <code>host</code>, which has the same effect), or any platform or custom
     * attribute that is applied to a container instance, such as
     * <code>attribute:ecs.availability-zone</code>. For the <code>binpack</code>
     * placement strategy, valid values are <code>cpu</code> and <code>memory</code>.
     * For the <code>random</code> placement strategy, this field is not used.</p>
     */
    inline PlacementStrategy& WithField(const char* value) { SetField(value); return *this;}

  private:

    PlacementStrategyType m_type;
    bool m_typeHasBeenSet;

    Aws::String m_field;
    bool m_fieldHasBeenSet;
  };

} // namespace Model
} // namespace ECS
} // namespace Aws
