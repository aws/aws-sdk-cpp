/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/core/utils/DateTime.h>
#include <aws/quicksight/model/RollingDateConfiguration.h>
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
namespace QuickSight
{
namespace Model
{

  /**
   * <p>The value of a time range filter.</p> <p>This is a union type structure. For
   * this structure to be valid, only one of the attributes can be
   * defined.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/TimeRangeFilterValue">AWS
   * API Reference</a></p>
   */
  class TimeRangeFilterValue
  {
  public:
    AWS_QUICKSIGHT_API TimeRangeFilterValue();
    AWS_QUICKSIGHT_API TimeRangeFilterValue(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API TimeRangeFilterValue& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The static input value.</p>
     */
    inline const Aws::Utils::DateTime& GetStaticValue() const{ return m_staticValue; }

    /**
     * <p>The static input value.</p>
     */
    inline bool StaticValueHasBeenSet() const { return m_staticValueHasBeenSet; }

    /**
     * <p>The static input value.</p>
     */
    inline void SetStaticValue(const Aws::Utils::DateTime& value) { m_staticValueHasBeenSet = true; m_staticValue = value; }

    /**
     * <p>The static input value.</p>
     */
    inline void SetStaticValue(Aws::Utils::DateTime&& value) { m_staticValueHasBeenSet = true; m_staticValue = std::move(value); }

    /**
     * <p>The static input value.</p>
     */
    inline TimeRangeFilterValue& WithStaticValue(const Aws::Utils::DateTime& value) { SetStaticValue(value); return *this;}

    /**
     * <p>The static input value.</p>
     */
    inline TimeRangeFilterValue& WithStaticValue(Aws::Utils::DateTime&& value) { SetStaticValue(std::move(value)); return *this;}


    /**
     * <p>The rolling date input value.</p>
     */
    inline const RollingDateConfiguration& GetRollingDate() const{ return m_rollingDate; }

    /**
     * <p>The rolling date input value.</p>
     */
    inline bool RollingDateHasBeenSet() const { return m_rollingDateHasBeenSet; }

    /**
     * <p>The rolling date input value.</p>
     */
    inline void SetRollingDate(const RollingDateConfiguration& value) { m_rollingDateHasBeenSet = true; m_rollingDate = value; }

    /**
     * <p>The rolling date input value.</p>
     */
    inline void SetRollingDate(RollingDateConfiguration&& value) { m_rollingDateHasBeenSet = true; m_rollingDate = std::move(value); }

    /**
     * <p>The rolling date input value.</p>
     */
    inline TimeRangeFilterValue& WithRollingDate(const RollingDateConfiguration& value) { SetRollingDate(value); return *this;}

    /**
     * <p>The rolling date input value.</p>
     */
    inline TimeRangeFilterValue& WithRollingDate(RollingDateConfiguration&& value) { SetRollingDate(std::move(value)); return *this;}


    /**
     * <p>The parameter type input value.</p>
     */
    inline const Aws::String& GetParameter() const{ return m_parameter; }

    /**
     * <p>The parameter type input value.</p>
     */
    inline bool ParameterHasBeenSet() const { return m_parameterHasBeenSet; }

    /**
     * <p>The parameter type input value.</p>
     */
    inline void SetParameter(const Aws::String& value) { m_parameterHasBeenSet = true; m_parameter = value; }

    /**
     * <p>The parameter type input value.</p>
     */
    inline void SetParameter(Aws::String&& value) { m_parameterHasBeenSet = true; m_parameter = std::move(value); }

    /**
     * <p>The parameter type input value.</p>
     */
    inline void SetParameter(const char* value) { m_parameterHasBeenSet = true; m_parameter.assign(value); }

    /**
     * <p>The parameter type input value.</p>
     */
    inline TimeRangeFilterValue& WithParameter(const Aws::String& value) { SetParameter(value); return *this;}

    /**
     * <p>The parameter type input value.</p>
     */
    inline TimeRangeFilterValue& WithParameter(Aws::String&& value) { SetParameter(std::move(value)); return *this;}

    /**
     * <p>The parameter type input value.</p>
     */
    inline TimeRangeFilterValue& WithParameter(const char* value) { SetParameter(value); return *this;}

  private:

    Aws::Utils::DateTime m_staticValue;
    bool m_staticValueHasBeenSet = false;

    RollingDateConfiguration m_rollingDate;
    bool m_rollingDateHasBeenSet = false;

    Aws::String m_parameter;
    bool m_parameterHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
