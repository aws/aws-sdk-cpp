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
    AWS_FORECASTQUERYSERVICE_API DataPoint();
    AWS_FORECASTQUERYSERVICE_API DataPoint(Aws::Utils::Json::JsonView jsonValue);
    AWS_FORECASTQUERYSERVICE_API DataPoint& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_FORECASTQUERYSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The timestamp of the specific forecast.</p>
     */
    inline const Aws::String& GetTimestamp() const{ return m_timestamp; }

    /**
     * <p>The timestamp of the specific forecast.</p>
     */
    inline bool TimestampHasBeenSet() const { return m_timestampHasBeenSet; }

    /**
     * <p>The timestamp of the specific forecast.</p>
     */
    inline void SetTimestamp(const Aws::String& value) { m_timestampHasBeenSet = true; m_timestamp = value; }

    /**
     * <p>The timestamp of the specific forecast.</p>
     */
    inline void SetTimestamp(Aws::String&& value) { m_timestampHasBeenSet = true; m_timestamp = std::move(value); }

    /**
     * <p>The timestamp of the specific forecast.</p>
     */
    inline void SetTimestamp(const char* value) { m_timestampHasBeenSet = true; m_timestamp.assign(value); }

    /**
     * <p>The timestamp of the specific forecast.</p>
     */
    inline DataPoint& WithTimestamp(const Aws::String& value) { SetTimestamp(value); return *this;}

    /**
     * <p>The timestamp of the specific forecast.</p>
     */
    inline DataPoint& WithTimestamp(Aws::String&& value) { SetTimestamp(std::move(value)); return *this;}

    /**
     * <p>The timestamp of the specific forecast.</p>
     */
    inline DataPoint& WithTimestamp(const char* value) { SetTimestamp(value); return *this;}


    /**
     * <p>The forecast value.</p>
     */
    inline double GetValue() const{ return m_value; }

    /**
     * <p>The forecast value.</p>
     */
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }

    /**
     * <p>The forecast value.</p>
     */
    inline void SetValue(double value) { m_valueHasBeenSet = true; m_value = value; }

    /**
     * <p>The forecast value.</p>
     */
    inline DataPoint& WithValue(double value) { SetValue(value); return *this;}

  private:

    Aws::String m_timestamp;
    bool m_timestampHasBeenSet = false;

    double m_value;
    bool m_valueHasBeenSet = false;
  };

} // namespace Model
} // namespace ForecastQueryService
} // namespace Aws
