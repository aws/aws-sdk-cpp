/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot/IoT_EXPORTS.h>
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
namespace IoT
{
namespace Model
{

  /**
   * <p>Metadata attributes of the time series that are written in each measure
   * record.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/TimestreamDimension">AWS
   * API Reference</a></p>
   */
  class TimestreamDimension
  {
  public:
    AWS_IOT_API TimestreamDimension();
    AWS_IOT_API TimestreamDimension(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOT_API TimestreamDimension& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The metadata dimension name. This is the name of the column in the Amazon
     * Timestream database table record.</p> <p>Dimensions cannot be named:
     * <code>measure_name</code>, <code>measure_value</code>, or <code>time</code>.
     * These names are reserved. Dimension names cannot start with <code>ts_</code> or
     * <code>measure_value</code> and they cannot contain the colon (<code>:</code>)
     * character.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The metadata dimension name. This is the name of the column in the Amazon
     * Timestream database table record.</p> <p>Dimensions cannot be named:
     * <code>measure_name</code>, <code>measure_value</code>, or <code>time</code>.
     * These names are reserved. Dimension names cannot start with <code>ts_</code> or
     * <code>measure_value</code> and they cannot contain the colon (<code>:</code>)
     * character.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The metadata dimension name. This is the name of the column in the Amazon
     * Timestream database table record.</p> <p>Dimensions cannot be named:
     * <code>measure_name</code>, <code>measure_value</code>, or <code>time</code>.
     * These names are reserved. Dimension names cannot start with <code>ts_</code> or
     * <code>measure_value</code> and they cannot contain the colon (<code>:</code>)
     * character.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The metadata dimension name. This is the name of the column in the Amazon
     * Timestream database table record.</p> <p>Dimensions cannot be named:
     * <code>measure_name</code>, <code>measure_value</code>, or <code>time</code>.
     * These names are reserved. Dimension names cannot start with <code>ts_</code> or
     * <code>measure_value</code> and they cannot contain the colon (<code>:</code>)
     * character.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The metadata dimension name. This is the name of the column in the Amazon
     * Timestream database table record.</p> <p>Dimensions cannot be named:
     * <code>measure_name</code>, <code>measure_value</code>, or <code>time</code>.
     * These names are reserved. Dimension names cannot start with <code>ts_</code> or
     * <code>measure_value</code> and they cannot contain the colon (<code>:</code>)
     * character.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The metadata dimension name. This is the name of the column in the Amazon
     * Timestream database table record.</p> <p>Dimensions cannot be named:
     * <code>measure_name</code>, <code>measure_value</code>, or <code>time</code>.
     * These names are reserved. Dimension names cannot start with <code>ts_</code> or
     * <code>measure_value</code> and they cannot contain the colon (<code>:</code>)
     * character.</p>
     */
    inline TimestreamDimension& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The metadata dimension name. This is the name of the column in the Amazon
     * Timestream database table record.</p> <p>Dimensions cannot be named:
     * <code>measure_name</code>, <code>measure_value</code>, or <code>time</code>.
     * These names are reserved. Dimension names cannot start with <code>ts_</code> or
     * <code>measure_value</code> and they cannot contain the colon (<code>:</code>)
     * character.</p>
     */
    inline TimestreamDimension& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The metadata dimension name. This is the name of the column in the Amazon
     * Timestream database table record.</p> <p>Dimensions cannot be named:
     * <code>measure_name</code>, <code>measure_value</code>, or <code>time</code>.
     * These names are reserved. Dimension names cannot start with <code>ts_</code> or
     * <code>measure_value</code> and they cannot contain the colon (<code>:</code>)
     * character.</p>
     */
    inline TimestreamDimension& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The value to write in this column of the database record.</p>
     */
    inline const Aws::String& GetValue() const{ return m_value; }

    /**
     * <p>The value to write in this column of the database record.</p>
     */
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }

    /**
     * <p>The value to write in this column of the database record.</p>
     */
    inline void SetValue(const Aws::String& value) { m_valueHasBeenSet = true; m_value = value; }

    /**
     * <p>The value to write in this column of the database record.</p>
     */
    inline void SetValue(Aws::String&& value) { m_valueHasBeenSet = true; m_value = std::move(value); }

    /**
     * <p>The value to write in this column of the database record.</p>
     */
    inline void SetValue(const char* value) { m_valueHasBeenSet = true; m_value.assign(value); }

    /**
     * <p>The value to write in this column of the database record.</p>
     */
    inline TimestreamDimension& WithValue(const Aws::String& value) { SetValue(value); return *this;}

    /**
     * <p>The value to write in this column of the database record.</p>
     */
    inline TimestreamDimension& WithValue(Aws::String&& value) { SetValue(std::move(value)); return *this;}

    /**
     * <p>The value to write in this column of the database record.</p>
     */
    inline TimestreamDimension& WithValue(const char* value) { SetValue(value); return *this;}

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_value;
    bool m_valueHasBeenSet = false;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
