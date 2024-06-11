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
   * <p>Describes how to interpret an application-defined timestamp value from an
   * MQTT message payload and the precision of that value.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/LocationTimestamp">AWS
   * API Reference</a></p>
   */
  class LocationTimestamp
  {
  public:
    AWS_IOT_API LocationTimestamp();
    AWS_IOT_API LocationTimestamp(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOT_API LocationTimestamp& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>An expression that returns a long epoch time value.</p>
     */
    inline const Aws::String& GetValue() const{ return m_value; }
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }
    inline void SetValue(const Aws::String& value) { m_valueHasBeenSet = true; m_value = value; }
    inline void SetValue(Aws::String&& value) { m_valueHasBeenSet = true; m_value = std::move(value); }
    inline void SetValue(const char* value) { m_valueHasBeenSet = true; m_value.assign(value); }
    inline LocationTimestamp& WithValue(const Aws::String& value) { SetValue(value); return *this;}
    inline LocationTimestamp& WithValue(Aws::String&& value) { SetValue(std::move(value)); return *this;}
    inline LocationTimestamp& WithValue(const char* value) { SetValue(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The precision of the timestamp value that results from the expression
     * described in <code>value</code>.</p> <p>Valid values: <code>SECONDS</code> |
     * <code>MILLISECONDS</code> | <code>MICROSECONDS</code> |
     * <code>NANOSECONDS</code>. The default is <code>MILLISECONDS</code>.</p>
     */
    inline const Aws::String& GetUnit() const{ return m_unit; }
    inline bool UnitHasBeenSet() const { return m_unitHasBeenSet; }
    inline void SetUnit(const Aws::String& value) { m_unitHasBeenSet = true; m_unit = value; }
    inline void SetUnit(Aws::String&& value) { m_unitHasBeenSet = true; m_unit = std::move(value); }
    inline void SetUnit(const char* value) { m_unitHasBeenSet = true; m_unit.assign(value); }
    inline LocationTimestamp& WithUnit(const Aws::String& value) { SetUnit(value); return *this;}
    inline LocationTimestamp& WithUnit(Aws::String&& value) { SetUnit(std::move(value)); return *this;}
    inline LocationTimestamp& WithUnit(const char* value) { SetUnit(value); return *this;}
    ///@}
  private:

    Aws::String m_value;
    bool m_valueHasBeenSet = false;

    Aws::String m_unit;
    bool m_unitHasBeenSet = false;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
