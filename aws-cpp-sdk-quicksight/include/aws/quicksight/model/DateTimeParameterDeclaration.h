/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/quicksight/model/DateTimeDefaultValues.h>
#include <aws/quicksight/model/TimeGranularity.h>
#include <aws/quicksight/model/DateTimeValueWhenUnsetConfiguration.h>
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
namespace QuickSight
{
namespace Model
{

  /**
   * <p>A parameter declaration for the <code>DateTime</code> data
   * type.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/DateTimeParameterDeclaration">AWS
   * API Reference</a></p>
   */
  class DateTimeParameterDeclaration
  {
  public:
    AWS_QUICKSIGHT_API DateTimeParameterDeclaration();
    AWS_QUICKSIGHT_API DateTimeParameterDeclaration(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API DateTimeParameterDeclaration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the parameter that is being declared.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the parameter that is being declared.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the parameter that is being declared.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the parameter that is being declared.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the parameter that is being declared.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the parameter that is being declared.</p>
     */
    inline DateTimeParameterDeclaration& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the parameter that is being declared.</p>
     */
    inline DateTimeParameterDeclaration& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the parameter that is being declared.</p>
     */
    inline DateTimeParameterDeclaration& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The default values of a parameter. If the parameter is a single-value
     * parameter, a maximum of one default value can be provided.</p>
     */
    inline const DateTimeDefaultValues& GetDefaultValues() const{ return m_defaultValues; }

    /**
     * <p>The default values of a parameter. If the parameter is a single-value
     * parameter, a maximum of one default value can be provided.</p>
     */
    inline bool DefaultValuesHasBeenSet() const { return m_defaultValuesHasBeenSet; }

    /**
     * <p>The default values of a parameter. If the parameter is a single-value
     * parameter, a maximum of one default value can be provided.</p>
     */
    inline void SetDefaultValues(const DateTimeDefaultValues& value) { m_defaultValuesHasBeenSet = true; m_defaultValues = value; }

    /**
     * <p>The default values of a parameter. If the parameter is a single-value
     * parameter, a maximum of one default value can be provided.</p>
     */
    inline void SetDefaultValues(DateTimeDefaultValues&& value) { m_defaultValuesHasBeenSet = true; m_defaultValues = std::move(value); }

    /**
     * <p>The default values of a parameter. If the parameter is a single-value
     * parameter, a maximum of one default value can be provided.</p>
     */
    inline DateTimeParameterDeclaration& WithDefaultValues(const DateTimeDefaultValues& value) { SetDefaultValues(value); return *this;}

    /**
     * <p>The default values of a parameter. If the parameter is a single-value
     * parameter, a maximum of one default value can be provided.</p>
     */
    inline DateTimeParameterDeclaration& WithDefaultValues(DateTimeDefaultValues&& value) { SetDefaultValues(std::move(value)); return *this;}


    /**
     * <p>The level of time precision that is used to aggregate <code>DateTime</code>
     * values.</p>
     */
    inline const TimeGranularity& GetTimeGranularity() const{ return m_timeGranularity; }

    /**
     * <p>The level of time precision that is used to aggregate <code>DateTime</code>
     * values.</p>
     */
    inline bool TimeGranularityHasBeenSet() const { return m_timeGranularityHasBeenSet; }

    /**
     * <p>The level of time precision that is used to aggregate <code>DateTime</code>
     * values.</p>
     */
    inline void SetTimeGranularity(const TimeGranularity& value) { m_timeGranularityHasBeenSet = true; m_timeGranularity = value; }

    /**
     * <p>The level of time precision that is used to aggregate <code>DateTime</code>
     * values.</p>
     */
    inline void SetTimeGranularity(TimeGranularity&& value) { m_timeGranularityHasBeenSet = true; m_timeGranularity = std::move(value); }

    /**
     * <p>The level of time precision that is used to aggregate <code>DateTime</code>
     * values.</p>
     */
    inline DateTimeParameterDeclaration& WithTimeGranularity(const TimeGranularity& value) { SetTimeGranularity(value); return *this;}

    /**
     * <p>The level of time precision that is used to aggregate <code>DateTime</code>
     * values.</p>
     */
    inline DateTimeParameterDeclaration& WithTimeGranularity(TimeGranularity&& value) { SetTimeGranularity(std::move(value)); return *this;}


    /**
     * <p>The configuration that defines the default value of a <code>DateTime</code>
     * parameter when a value has not been set.</p>
     */
    inline const DateTimeValueWhenUnsetConfiguration& GetValueWhenUnset() const{ return m_valueWhenUnset; }

    /**
     * <p>The configuration that defines the default value of a <code>DateTime</code>
     * parameter when a value has not been set.</p>
     */
    inline bool ValueWhenUnsetHasBeenSet() const { return m_valueWhenUnsetHasBeenSet; }

    /**
     * <p>The configuration that defines the default value of a <code>DateTime</code>
     * parameter when a value has not been set.</p>
     */
    inline void SetValueWhenUnset(const DateTimeValueWhenUnsetConfiguration& value) { m_valueWhenUnsetHasBeenSet = true; m_valueWhenUnset = value; }

    /**
     * <p>The configuration that defines the default value of a <code>DateTime</code>
     * parameter when a value has not been set.</p>
     */
    inline void SetValueWhenUnset(DateTimeValueWhenUnsetConfiguration&& value) { m_valueWhenUnsetHasBeenSet = true; m_valueWhenUnset = std::move(value); }

    /**
     * <p>The configuration that defines the default value of a <code>DateTime</code>
     * parameter when a value has not been set.</p>
     */
    inline DateTimeParameterDeclaration& WithValueWhenUnset(const DateTimeValueWhenUnsetConfiguration& value) { SetValueWhenUnset(value); return *this;}

    /**
     * <p>The configuration that defines the default value of a <code>DateTime</code>
     * parameter when a value has not been set.</p>
     */
    inline DateTimeParameterDeclaration& WithValueWhenUnset(DateTimeValueWhenUnsetConfiguration&& value) { SetValueWhenUnset(std::move(value)); return *this;}

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    DateTimeDefaultValues m_defaultValues;
    bool m_defaultValuesHasBeenSet = false;

    TimeGranularity m_timeGranularity;
    bool m_timeGranularityHasBeenSet = false;

    DateTimeValueWhenUnsetConfiguration m_valueWhenUnset;
    bool m_valueWhenUnsetHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
