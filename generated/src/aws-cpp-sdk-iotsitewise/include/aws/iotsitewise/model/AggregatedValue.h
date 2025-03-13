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
    AWS_IOTSITEWISE_API AggregatedValue() = default;
    AWS_IOTSITEWISE_API AggregatedValue(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTSITEWISE_API AggregatedValue& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTSITEWISE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The date the aggregating computations occurred, in Unix epoch time.</p>
     */
    inline const Aws::Utils::DateTime& GetTimestamp() const { return m_timestamp; }
    inline bool TimestampHasBeenSet() const { return m_timestampHasBeenSet; }
    template<typename TimestampT = Aws::Utils::DateTime>
    void SetTimestamp(TimestampT&& value) { m_timestampHasBeenSet = true; m_timestamp = std::forward<TimestampT>(value); }
    template<typename TimestampT = Aws::Utils::DateTime>
    AggregatedValue& WithTimestamp(TimestampT&& value) { SetTimestamp(std::forward<TimestampT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The quality of the aggregated data.</p>
     */
    inline Quality GetQuality() const { return m_quality; }
    inline bool QualityHasBeenSet() const { return m_qualityHasBeenSet; }
    inline void SetQuality(Quality value) { m_qualityHasBeenSet = true; m_quality = value; }
    inline AggregatedValue& WithQuality(Quality value) { SetQuality(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The value of the aggregates.</p>
     */
    inline const Aggregates& GetValue() const { return m_value; }
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }
    template<typename ValueT = Aggregates>
    void SetValue(ValueT&& value) { m_valueHasBeenSet = true; m_value = std::forward<ValueT>(value); }
    template<typename ValueT = Aggregates>
    AggregatedValue& WithValue(ValueT&& value) { SetValue(std::forward<ValueT>(value)); return *this;}
    ///@}
  private:

    Aws::Utils::DateTime m_timestamp{};
    bool m_timestampHasBeenSet = false;

    Quality m_quality{Quality::NOT_SET};
    bool m_qualityHasBeenSet = false;

    Aggregates m_value;
    bool m_valueHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTSiteWise
} // namespace Aws
