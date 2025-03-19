/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/forecastquery/ForecastQueryService_EXPORTS.h>
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
namespace ForecastQueryService
{
namespace Model
{

  /**
   * <p>The forecast value for a specific date. Part of the <a>Forecast</a>
   * object.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/forecastquery-2018-06-26/DataPoint">AWS
   * API Reference</a></p>
   */
  class DataPoint
  {
  public:
    AWS_FORECASTQUERYSERVICE_API DataPoint() = default;
    AWS_FORECASTQUERYSERVICE_API DataPoint(Aws::Utils::Json::JsonView jsonValue);
    AWS_FORECASTQUERYSERVICE_API DataPoint& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_FORECASTQUERYSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The timestamp of the specific forecast.</p>
     */
    inline const Aws::String& GetTimestamp() const { return m_timestamp; }
    inline bool TimestampHasBeenSet() const { return m_timestampHasBeenSet; }
    template<typename TimestampT = Aws::String>
    void SetTimestamp(TimestampT&& value) { m_timestampHasBeenSet = true; m_timestamp = std::forward<TimestampT>(value); }
    template<typename TimestampT = Aws::String>
    DataPoint& WithTimestamp(TimestampT&& value) { SetTimestamp(std::forward<TimestampT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The forecast value.</p>
     */
    inline double GetValue() const { return m_value; }
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }
    inline void SetValue(double value) { m_valueHasBeenSet = true; m_value = value; }
    inline DataPoint& WithValue(double value) { SetValue(value); return *this;}
    ///@}
  private:

    Aws::String m_timestamp;
    bool m_timestampHasBeenSet = false;

    double m_value{0.0};
    bool m_valueHasBeenSet = false;
  };

} // namespace Model
} // namespace ForecastQueryService
} // namespace Aws
