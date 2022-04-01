/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iottwinmaker/IoTTwinMaker_EXPORTS.h>
#include <aws/core/utils/DateTime.h>
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


    /**
     * <p>The timestamp of a value for a time series property.</p>
     */
    inline const Aws::Utils::DateTime& GetTimestamp() const{ return m_timestamp; }

    /**
     * <p>The timestamp of a value for a time series property.</p>
     */
    inline bool TimestampHasBeenSet() const { return m_timestampHasBeenSet; }

    /**
     * <p>The timestamp of a value for a time series property.</p>
     */
    inline void SetTimestamp(const Aws::Utils::DateTime& value) { m_timestampHasBeenSet = true; m_timestamp = value; }

    /**
     * <p>The timestamp of a value for a time series property.</p>
     */
    inline void SetTimestamp(Aws::Utils::DateTime&& value) { m_timestampHasBeenSet = true; m_timestamp = std::move(value); }

    /**
     * <p>The timestamp of a value for a time series property.</p>
     */
    inline PropertyValue& WithTimestamp(const Aws::Utils::DateTime& value) { SetTimestamp(value); return *this;}

    /**
     * <p>The timestamp of a value for a time series property.</p>
     */
    inline PropertyValue& WithTimestamp(Aws::Utils::DateTime&& value) { SetTimestamp(std::move(value)); return *this;}


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

    Aws::Utils::DateTime m_timestamp;
    bool m_timestampHasBeenSet;

    DataValue m_value;
    bool m_valueHasBeenSet;
  };

} // namespace Model
} // namespace IoTTwinMaker
} // namespace Aws
