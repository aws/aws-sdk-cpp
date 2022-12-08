/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotsitewise/IoTSiteWise_EXPORTS.h>
#include <aws/core/utils/DateTime.h>
#include <aws/iotsitewise/model/Quality.h>
#include <aws/iotsitewise/model/Aggregates.h>
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
namespace IoTSiteWise
{
namespace Model
{

  /**
   * <p>Contains aggregated asset property values (for example, average, minimum, and
   * maximum).</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotsitewise-2019-12-02/AggregatedValue">AWS
   * API Reference</a></p>
   */
  class AggregatedValue
  {
  public:
    AWS_IOTSITEWISE_API AggregatedValue();
    AWS_IOTSITEWISE_API AggregatedValue(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTSITEWISE_API AggregatedValue& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTSITEWISE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The date the aggregating computations occurred, in Unix epoch time.</p>
     */
    inline const Aws::Utils::DateTime& GetTimestamp() const{ return m_timestamp; }

    /**
     * <p>The date the aggregating computations occurred, in Unix epoch time.</p>
     */
    inline bool TimestampHasBeenSet() const { return m_timestampHasBeenSet; }

    /**
     * <p>The date the aggregating computations occurred, in Unix epoch time.</p>
     */
    inline void SetTimestamp(const Aws::Utils::DateTime& value) { m_timestampHasBeenSet = true; m_timestamp = value; }

    /**
     * <p>The date the aggregating computations occurred, in Unix epoch time.</p>
     */
    inline void SetTimestamp(Aws::Utils::DateTime&& value) { m_timestampHasBeenSet = true; m_timestamp = std::move(value); }

    /**
     * <p>The date the aggregating computations occurred, in Unix epoch time.</p>
     */
    inline AggregatedValue& WithTimestamp(const Aws::Utils::DateTime& value) { SetTimestamp(value); return *this;}

    /**
     * <p>The date the aggregating computations occurred, in Unix epoch time.</p>
     */
    inline AggregatedValue& WithTimestamp(Aws::Utils::DateTime&& value) { SetTimestamp(std::move(value)); return *this;}


    /**
     * <p>The quality of the aggregated data.</p>
     */
    inline const Quality& GetQuality() const{ return m_quality; }

    /**
     * <p>The quality of the aggregated data.</p>
     */
    inline bool QualityHasBeenSet() const { return m_qualityHasBeenSet; }

    /**
     * <p>The quality of the aggregated data.</p>
     */
    inline void SetQuality(const Quality& value) { m_qualityHasBeenSet = true; m_quality = value; }

    /**
     * <p>The quality of the aggregated data.</p>
     */
    inline void SetQuality(Quality&& value) { m_qualityHasBeenSet = true; m_quality = std::move(value); }

    /**
     * <p>The quality of the aggregated data.</p>
     */
    inline AggregatedValue& WithQuality(const Quality& value) { SetQuality(value); return *this;}

    /**
     * <p>The quality of the aggregated data.</p>
     */
    inline AggregatedValue& WithQuality(Quality&& value) { SetQuality(std::move(value)); return *this;}


    /**
     * <p>The value of the aggregates.</p>
     */
    inline const Aggregates& GetValue() const{ return m_value; }

    /**
     * <p>The value of the aggregates.</p>
     */
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }

    /**
     * <p>The value of the aggregates.</p>
     */
    inline void SetValue(const Aggregates& value) { m_valueHasBeenSet = true; m_value = value; }

    /**
     * <p>The value of the aggregates.</p>
     */
    inline void SetValue(Aggregates&& value) { m_valueHasBeenSet = true; m_value = std::move(value); }

    /**
     * <p>The value of the aggregates.</p>
     */
    inline AggregatedValue& WithValue(const Aggregates& value) { SetValue(value); return *this;}

    /**
     * <p>The value of the aggregates.</p>
     */
    inline AggregatedValue& WithValue(Aggregates&& value) { SetValue(std::move(value)); return *this;}

  private:

    Aws::Utils::DateTime m_timestamp;
    bool m_timestampHasBeenSet = false;

    Quality m_quality;
    bool m_qualityHasBeenSet = false;

    Aggregates m_value;
    bool m_valueHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTSiteWise
} // namespace Aws
