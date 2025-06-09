/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/customer-profiles/CustomerProfiles_EXPORTS.h>
#include <aws/customer-profiles/model/Unit.h>
#include <aws/customer-profiles/model/ValueRange.h>
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
namespace CustomerProfiles
{
namespace Model
{

  /**
   * <p>The relative time period over which data is included in the
   * aggregation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/customer-profiles-2020-08-15/Range">AWS
   * API Reference</a></p>
   */
  class Range
  {
  public:
    AWS_CUSTOMERPROFILES_API Range() = default;
    AWS_CUSTOMERPROFILES_API Range(Aws::Utils::Json::JsonView jsonValue);
    AWS_CUSTOMERPROFILES_API Range& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CUSTOMERPROFILES_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The amount of time of the specified unit.</p>
     */
    inline int GetValue() const { return m_value; }
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }
    inline void SetValue(int value) { m_valueHasBeenSet = true; m_value = value; }
    inline Range& WithValue(int value) { SetValue(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unit of time.</p>
     */
    inline Unit GetUnit() const { return m_unit; }
    inline bool UnitHasBeenSet() const { return m_unitHasBeenSet; }
    inline void SetUnit(Unit value) { m_unitHasBeenSet = true; m_unit = value; }
    inline Range& WithUnit(Unit value) { SetUnit(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A structure letting customers specify a relative time window over which over
     * which data is included in the Calculated Attribute. Use positive numbers to
     * indicate that the endpoint is in the past, and negative numbers to indicate it
     * is in the future. ValueRange overrides Value.</p>
     */
    inline const ValueRange& GetValueRange() const { return m_valueRange; }
    inline bool ValueRangeHasBeenSet() const { return m_valueRangeHasBeenSet; }
    template<typename ValueRangeT = ValueRange>
    void SetValueRange(ValueRangeT&& value) { m_valueRangeHasBeenSet = true; m_valueRange = std::forward<ValueRangeT>(value); }
    template<typename ValueRangeT = ValueRange>
    Range& WithValueRange(ValueRangeT&& value) { SetValueRange(std::forward<ValueRangeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An expression specifying the field in your JSON object from which the date
     * should be parsed. The expression should follow the structure of
     * \"{ObjectTypeName.&lt;Location of timestamp field in JSON pointer format&gt;}\".
     * E.g. if your object type is MyType and source JSON is {"generatedAt":
     * {"timestamp": "1737587945945"}}, then TimestampSource should be
     * "{MyType.generatedAt.timestamp}".</p>
     */
    inline const Aws::String& GetTimestampSource() const { return m_timestampSource; }
    inline bool TimestampSourceHasBeenSet() const { return m_timestampSourceHasBeenSet; }
    template<typename TimestampSourceT = Aws::String>
    void SetTimestampSource(TimestampSourceT&& value) { m_timestampSourceHasBeenSet = true; m_timestampSource = std::forward<TimestampSourceT>(value); }
    template<typename TimestampSourceT = Aws::String>
    Range& WithTimestampSource(TimestampSourceT&& value) { SetTimestampSource(std::forward<TimestampSourceT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The format the timestamp field in your JSON object is specified. This value
     * should be one of EPOCHMILLI (for Unix epoch timestamps with second/millisecond
     * level precision) or ISO_8601 (following ISO_8601 format with second/millisecond
     * level precision, with an optional offset of Z or in the format HH:MM or HHMM.).
     * E.g. if your object type is MyType and source JSON is {"generatedAt":
     * {"timestamp": "2001-07-04T12:08:56.235-0700"}}, then TimestampFormat should be
     * "ISO_8601".</p>
     */
    inline const Aws::String& GetTimestampFormat() const { return m_timestampFormat; }
    inline bool TimestampFormatHasBeenSet() const { return m_timestampFormatHasBeenSet; }
    template<typename TimestampFormatT = Aws::String>
    void SetTimestampFormat(TimestampFormatT&& value) { m_timestampFormatHasBeenSet = true; m_timestampFormat = std::forward<TimestampFormatT>(value); }
    template<typename TimestampFormatT = Aws::String>
    Range& WithTimestampFormat(TimestampFormatT&& value) { SetTimestampFormat(std::forward<TimestampFormatT>(value)); return *this;}
    ///@}
  private:

    int m_value{0};
    bool m_valueHasBeenSet = false;

    Unit m_unit{Unit::NOT_SET};
    bool m_unitHasBeenSet = false;

    ValueRange m_valueRange;
    bool m_valueRangeHasBeenSet = false;

    Aws::String m_timestampSource;
    bool m_timestampSourceHasBeenSet = false;

    Aws::String m_timestampFormat;
    bool m_timestampFormatHasBeenSet = false;
  };

} // namespace Model
} // namespace CustomerProfiles
} // namespace Aws
