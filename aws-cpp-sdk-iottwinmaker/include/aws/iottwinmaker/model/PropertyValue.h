/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iottwinmaker/IoTTwinMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iottwinmaker/model/DataValue.h>
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
namespace IoTTwinMaker
{
namespace Model
{

  /**
   * <p>An object that contains information about a value for a time series
   * property.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iottwinmaker-2021-11-29/PropertyValue">AWS
   * API Reference</a></p>
   */
  class AWS_IOTTWINMAKER_API PropertyValue
  {
  public:
    PropertyValue();
    PropertyValue(Aws::Utils::Json::JsonView jsonValue);
    PropertyValue& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    
    inline const Aws::String& GetTime() const{ return m_time; }

    
    inline bool TimeHasBeenSet() const { return m_timeHasBeenSet; }

    
    inline void SetTime(const Aws::String& value) { m_timeHasBeenSet = true; m_time = value; }

    
    inline void SetTime(Aws::String&& value) { m_timeHasBeenSet = true; m_time = std::move(value); }

    
    inline void SetTime(const char* value) { m_timeHasBeenSet = true; m_time.assign(value); }

    
    inline PropertyValue& WithTime(const Aws::String& value) { SetTime(value); return *this;}

    
    inline PropertyValue& WithTime(Aws::String&& value) { SetTime(std::move(value)); return *this;}

    
    inline PropertyValue& WithTime(const char* value) { SetTime(value); return *this;}


    /**
     * <p>An object that specifies a value for a time series property.</p>
     */
    inline const DataValue& GetValue() const{ return m_value; }

    /**
     * <p>An object that specifies a value for a time series property.</p>
     */
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }

    /**
     * <p>An object that specifies a value for a time series property.</p>
     */
    inline void SetValue(const DataValue& value) { m_valueHasBeenSet = true; m_value = value; }

    /**
     * <p>An object that specifies a value for a time series property.</p>
     */
    inline void SetValue(DataValue&& value) { m_valueHasBeenSet = true; m_value = std::move(value); }

    /**
     * <p>An object that specifies a value for a time series property.</p>
     */
    inline PropertyValue& WithValue(const DataValue& value) { SetValue(value); return *this;}

    /**
     * <p>An object that specifies a value for a time series property.</p>
     */
    inline PropertyValue& WithValue(DataValue&& value) { SetValue(std::move(value)); return *this;}

  private:

    Aws::String m_time;
    bool m_timeHasBeenSet;

    DataValue m_value;
    bool m_valueHasBeenSet;
  };

} // namespace Model
} // namespace IoTTwinMaker
} // namespace Aws
