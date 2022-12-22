/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/timestream-write/TimestreamWrite_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/timestream-write/model/MeasureValueType.h>
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
namespace TimestreamWrite
{
namespace Model
{

  /**
   * <p> MeasureValue represents the data attribute of the time series. For example,
   * the CPU utilization of an EC2 instance or the RPM of a wind turbine are
   * measures. MeasureValue has both name and value. </p> <p> MeasureValue is only
   * allowed for type <code>MULTI</code>. Using <code>MULTI</code> type, you can pass
   * multiple data attributes associated with the same time series in a single record
   * </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/timestream-write-2018-11-01/MeasureValue">AWS
   * API Reference</a></p>
   */
  class MeasureValue
  {
  public:
    AWS_TIMESTREAMWRITE_API MeasureValue();
    AWS_TIMESTREAMWRITE_API MeasureValue(Aws::Utils::Json::JsonView jsonValue);
    AWS_TIMESTREAMWRITE_API MeasureValue& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_TIMESTREAMWRITE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p> Name of the MeasureValue. </p> <p> For constraints on MeasureValue names,
     * refer to <a
     * href="https://docs.aws.amazon.com/timestream/latest/developerguide/ts-limits.html#limits.naming">
     * Naming Constraints</a> in the Timestream developer guide.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p> Name of the MeasureValue. </p> <p> For constraints on MeasureValue names,
     * refer to <a
     * href="https://docs.aws.amazon.com/timestream/latest/developerguide/ts-limits.html#limits.naming">
     * Naming Constraints</a> in the Timestream developer guide.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p> Name of the MeasureValue. </p> <p> For constraints on MeasureValue names,
     * refer to <a
     * href="https://docs.aws.amazon.com/timestream/latest/developerguide/ts-limits.html#limits.naming">
     * Naming Constraints</a> in the Timestream developer guide.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p> Name of the MeasureValue. </p> <p> For constraints on MeasureValue names,
     * refer to <a
     * href="https://docs.aws.amazon.com/timestream/latest/developerguide/ts-limits.html#limits.naming">
     * Naming Constraints</a> in the Timestream developer guide.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p> Name of the MeasureValue. </p> <p> For constraints on MeasureValue names,
     * refer to <a
     * href="https://docs.aws.amazon.com/timestream/latest/developerguide/ts-limits.html#limits.naming">
     * Naming Constraints</a> in the Timestream developer guide.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p> Name of the MeasureValue. </p> <p> For constraints on MeasureValue names,
     * refer to <a
     * href="https://docs.aws.amazon.com/timestream/latest/developerguide/ts-limits.html#limits.naming">
     * Naming Constraints</a> in the Timestream developer guide.</p>
     */
    inline MeasureValue& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p> Name of the MeasureValue. </p> <p> For constraints on MeasureValue names,
     * refer to <a
     * href="https://docs.aws.amazon.com/timestream/latest/developerguide/ts-limits.html#limits.naming">
     * Naming Constraints</a> in the Timestream developer guide.</p>
     */
    inline MeasureValue& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p> Name of the MeasureValue. </p> <p> For constraints on MeasureValue names,
     * refer to <a
     * href="https://docs.aws.amazon.com/timestream/latest/developerguide/ts-limits.html#limits.naming">
     * Naming Constraints</a> in the Timestream developer guide.</p>
     */
    inline MeasureValue& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p> Value for the MeasureValue. </p>
     */
    inline const Aws::String& GetValue() const{ return m_value; }

    /**
     * <p> Value for the MeasureValue. </p>
     */
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }

    /**
     * <p> Value for the MeasureValue. </p>
     */
    inline void SetValue(const Aws::String& value) { m_valueHasBeenSet = true; m_value = value; }

    /**
     * <p> Value for the MeasureValue. </p>
     */
    inline void SetValue(Aws::String&& value) { m_valueHasBeenSet = true; m_value = std::move(value); }

    /**
     * <p> Value for the MeasureValue. </p>
     */
    inline void SetValue(const char* value) { m_valueHasBeenSet = true; m_value.assign(value); }

    /**
     * <p> Value for the MeasureValue. </p>
     */
    inline MeasureValue& WithValue(const Aws::String& value) { SetValue(value); return *this;}

    /**
     * <p> Value for the MeasureValue. </p>
     */
    inline MeasureValue& WithValue(Aws::String&& value) { SetValue(std::move(value)); return *this;}

    /**
     * <p> Value for the MeasureValue. </p>
     */
    inline MeasureValue& WithValue(const char* value) { SetValue(value); return *this;}


    /**
     * <p>Contains the data type of the MeasureValue for the time series data
     * point.</p>
     */
    inline const MeasureValueType& GetType() const{ return m_type; }

    /**
     * <p>Contains the data type of the MeasureValue for the time series data
     * point.</p>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p>Contains the data type of the MeasureValue for the time series data
     * point.</p>
     */
    inline void SetType(const MeasureValueType& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>Contains the data type of the MeasureValue for the time series data
     * point.</p>
     */
    inline void SetType(MeasureValueType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p>Contains the data type of the MeasureValue for the time series data
     * point.</p>
     */
    inline MeasureValue& WithType(const MeasureValueType& value) { SetType(value); return *this;}

    /**
     * <p>Contains the data type of the MeasureValue for the time series data
     * point.</p>
     */
    inline MeasureValue& WithType(MeasureValueType&& value) { SetType(std::move(value)); return *this;}

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_value;
    bool m_valueHasBeenSet = false;

    MeasureValueType m_type;
    bool m_typeHasBeenSet = false;
  };

} // namespace Model
} // namespace TimestreamWrite
} // namespace Aws
