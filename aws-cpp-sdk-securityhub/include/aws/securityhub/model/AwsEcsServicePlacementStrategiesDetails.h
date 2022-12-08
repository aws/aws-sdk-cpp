/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
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
namespace SecurityHub
{
namespace Model
{

  /**
   * <p>A placement strategy that determines how to place the tasks for the
   * service.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/AwsEcsServicePlacementStrategiesDetails">AWS
   * API Reference</a></p>
   */
  class AwsEcsServicePlacementStrategiesDetails
  {
  public:
    AWS_SECURITYHUB_API AwsEcsServicePlacementStrategiesDetails();
    AWS_SECURITYHUB_API AwsEcsServicePlacementStrategiesDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AwsEcsServicePlacementStrategiesDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The field to apply the placement strategy against.</p> <p>For the
     * <code>spread</code> placement strategy, valid values are <code>instanceId</code>
     * (or <code>host</code>, which has the same effect), or any platform or custom
     * attribute that is applied to a container instance, such as
     * <code>attribute:ecs.availability-zone</code>.</p> <p>For the
     * <code>binpack</code> placement strategy, valid values are <code>cpu</code> and
     * <code>memory</code>.</p> <p>For the <code>random</code> placement strategy, this
     * attribute is not used.</p>
     */
    inline const Aws::String& GetField() const{ return m_field; }

    /**
     * <p>The field to apply the placement strategy against.</p> <p>For the
     * <code>spread</code> placement strategy, valid values are <code>instanceId</code>
     * (or <code>host</code>, which has the same effect), or any platform or custom
     * attribute that is applied to a container instance, such as
     * <code>attribute:ecs.availability-zone</code>.</p> <p>For the
     * <code>binpack</code> placement strategy, valid values are <code>cpu</code> and
     * <code>memory</code>.</p> <p>For the <code>random</code> placement strategy, this
     * attribute is not used.</p>
     */
    inline bool FieldHasBeenSet() const { return m_fieldHasBeenSet; }

    /**
     * <p>The field to apply the placement strategy against.</p> <p>For the
     * <code>spread</code> placement strategy, valid values are <code>instanceId</code>
     * (or <code>host</code>, which has the same effect), or any platform or custom
     * attribute that is applied to a container instance, such as
     * <code>attribute:ecs.availability-zone</code>.</p> <p>For the
     * <code>binpack</code> placement strategy, valid values are <code>cpu</code> and
     * <code>memory</code>.</p> <p>For the <code>random</code> placement strategy, this
     * attribute is not used.</p>
     */
    inline void SetField(const Aws::String& value) { m_fieldHasBeenSet = true; m_field = value; }

    /**
     * <p>The field to apply the placement strategy against.</p> <p>For the
     * <code>spread</code> placement strategy, valid values are <code>instanceId</code>
     * (or <code>host</code>, which has the same effect), or any platform or custom
     * attribute that is applied to a container instance, such as
     * <code>attribute:ecs.availability-zone</code>.</p> <p>For the
     * <code>binpack</code> placement strategy, valid values are <code>cpu</code> and
     * <code>memory</code>.</p> <p>For the <code>random</code> placement strategy, this
     * attribute is not used.</p>
     */
    inline void SetField(Aws::String&& value) { m_fieldHasBeenSet = true; m_field = std::move(value); }

    /**
     * <p>The field to apply the placement strategy against.</p> <p>For the
     * <code>spread</code> placement strategy, valid values are <code>instanceId</code>
     * (or <code>host</code>, which has the same effect), or any platform or custom
     * attribute that is applied to a container instance, such as
     * <code>attribute:ecs.availability-zone</code>.</p> <p>For the
     * <code>binpack</code> placement strategy, valid values are <code>cpu</code> and
     * <code>memory</code>.</p> <p>For the <code>random</code> placement strategy, this
     * attribute is not used.</p>
     */
    inline void SetField(const char* value) { m_fieldHasBeenSet = true; m_field.assign(value); }

    /**
     * <p>The field to apply the placement strategy against.</p> <p>For the
     * <code>spread</code> placement strategy, valid values are <code>instanceId</code>
     * (or <code>host</code>, which has the same effect), or any platform or custom
     * attribute that is applied to a container instance, such as
     * <code>attribute:ecs.availability-zone</code>.</p> <p>For the
     * <code>binpack</code> placement strategy, valid values are <code>cpu</code> and
     * <code>memory</code>.</p> <p>For the <code>random</code> placement strategy, this
     * attribute is not used.</p>
     */
    inline AwsEcsServicePlacementStrategiesDetails& WithField(const Aws::String& value) { SetField(value); return *this;}

    /**
     * <p>The field to apply the placement strategy against.</p> <p>For the
     * <code>spread</code> placement strategy, valid values are <code>instanceId</code>
     * (or <code>host</code>, which has the same effect), or any platform or custom
     * attribute that is applied to a container instance, such as
     * <code>attribute:ecs.availability-zone</code>.</p> <p>For the
     * <code>binpack</code> placement strategy, valid values are <code>cpu</code> and
     * <code>memory</code>.</p> <p>For the <code>random</code> placement strategy, this
     * attribute is not used.</p>
     */
    inline AwsEcsServicePlacementStrategiesDetails& WithField(Aws::String&& value) { SetField(std::move(value)); return *this;}

    /**
     * <p>The field to apply the placement strategy against.</p> <p>For the
     * <code>spread</code> placement strategy, valid values are <code>instanceId</code>
     * (or <code>host</code>, which has the same effect), or any platform or custom
     * attribute that is applied to a container instance, such as
     * <code>attribute:ecs.availability-zone</code>.</p> <p>For the
     * <code>binpack</code> placement strategy, valid values are <code>cpu</code> and
     * <code>memory</code>.</p> <p>For the <code>random</code> placement strategy, this
     * attribute is not used.</p>
     */
    inline AwsEcsServicePlacementStrategiesDetails& WithField(const char* value) { SetField(value); return *this;}


    /**
     * <p>The type of placement strategy.</p> <p>The <code>random</code> placement
     * strategy randomly places tasks on available candidates.</p> <p>The
     * <code>spread</code> placement strategy spreads placement across available
     * candidates evenly based on the value of <code>Field</code>.</p> <p>The
     * <code>binpack</code> strategy places tasks on available candidates that have the
     * least available amount of the resource that is specified in
     * <code>Field</code>.</p> <p>Valid values: <code>random</code> |
     * <code>spread</code> | <code>binpack</code> </p>
     */
    inline const Aws::String& GetType() const{ return m_type; }

    /**
     * <p>The type of placement strategy.</p> <p>The <code>random</code> placement
     * strategy randomly places tasks on available candidates.</p> <p>The
     * <code>spread</code> placement strategy spreads placement across available
     * candidates evenly based on the value of <code>Field</code>.</p> <p>The
     * <code>binpack</code> strategy places tasks on available candidates that have the
     * least available amount of the resource that is specified in
     * <code>Field</code>.</p> <p>Valid values: <code>random</code> |
     * <code>spread</code> | <code>binpack</code> </p>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p>The type of placement strategy.</p> <p>The <code>random</code> placement
     * strategy randomly places tasks on available candidates.</p> <p>The
     * <code>spread</code> placement strategy spreads placement across available
     * candidates evenly based on the value of <code>Field</code>.</p> <p>The
     * <code>binpack</code> strategy places tasks on available candidates that have the
     * least available amount of the resource that is specified in
     * <code>Field</code>.</p> <p>Valid values: <code>random</code> |
     * <code>spread</code> | <code>binpack</code> </p>
     */
    inline void SetType(const Aws::String& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>The type of placement strategy.</p> <p>The <code>random</code> placement
     * strategy randomly places tasks on available candidates.</p> <p>The
     * <code>spread</code> placement strategy spreads placement across available
     * candidates evenly based on the value of <code>Field</code>.</p> <p>The
     * <code>binpack</code> strategy places tasks on available candidates that have the
     * least available amount of the resource that is specified in
     * <code>Field</code>.</p> <p>Valid values: <code>random</code> |
     * <code>spread</code> | <code>binpack</code> </p>
     */
    inline void SetType(Aws::String&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p>The type of placement strategy.</p> <p>The <code>random</code> placement
     * strategy randomly places tasks on available candidates.</p> <p>The
     * <code>spread</code> placement strategy spreads placement across available
     * candidates evenly based on the value of <code>Field</code>.</p> <p>The
     * <code>binpack</code> strategy places tasks on available candidates that have the
     * least available amount of the resource that is specified in
     * <code>Field</code>.</p> <p>Valid values: <code>random</code> |
     * <code>spread</code> | <code>binpack</code> </p>
     */
    inline void SetType(const char* value) { m_typeHasBeenSet = true; m_type.assign(value); }

    /**
     * <p>The type of placement strategy.</p> <p>The <code>random</code> placement
     * strategy randomly places tasks on available candidates.</p> <p>The
     * <code>spread</code> placement strategy spreads placement across available
     * candidates evenly based on the value of <code>Field</code>.</p> <p>The
     * <code>binpack</code> strategy places tasks on available candidates that have the
     * least available amount of the resource that is specified in
     * <code>Field</code>.</p> <p>Valid values: <code>random</code> |
     * <code>spread</code> | <code>binpack</code> </p>
     */
    inline AwsEcsServicePlacementStrategiesDetails& WithType(const Aws::String& value) { SetType(value); return *this;}

    /**
     * <p>The type of placement strategy.</p> <p>The <code>random</code> placement
     * strategy randomly places tasks on available candidates.</p> <p>The
     * <code>spread</code> placement strategy spreads placement across available
     * candidates evenly based on the value of <code>Field</code>.</p> <p>The
     * <code>binpack</code> strategy places tasks on available candidates that have the
     * least available amount of the resource that is specified in
     * <code>Field</code>.</p> <p>Valid values: <code>random</code> |
     * <code>spread</code> | <code>binpack</code> </p>
     */
    inline AwsEcsServicePlacementStrategiesDetails& WithType(Aws::String&& value) { SetType(std::move(value)); return *this;}

    /**
     * <p>The type of placement strategy.</p> <p>The <code>random</code> placement
     * strategy randomly places tasks on available candidates.</p> <p>The
     * <code>spread</code> placement strategy spreads placement across available
     * candidates evenly based on the value of <code>Field</code>.</p> <p>The
     * <code>binpack</code> strategy places tasks on available candidates that have the
     * least available amount of the resource that is specified in
     * <code>Field</code>.</p> <p>Valid values: <code>random</code> |
     * <code>spread</code> | <code>binpack</code> </p>
     */
    inline AwsEcsServicePlacementStrategiesDetails& WithType(const char* value) { SetType(value); return *this;}

  private:

    Aws::String m_field;
    bool m_fieldHasBeenSet = false;

    Aws::String m_type;
    bool m_typeHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
