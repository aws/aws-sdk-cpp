/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/amp/PrometheusService_EXPORTS.h>

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
namespace PrometheusService
{
namespace Model
{

  /**
   * <p>This structure contains the information about the limits that apply to time
   * series that match one label set.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/amp-2020-08-01/LimitsPerLabelSetEntry">AWS
   * API Reference</a></p>
   */
  class LimitsPerLabelSetEntry
  {
  public:
    AWS_PROMETHEUSSERVICE_API LimitsPerLabelSetEntry() = default;
    AWS_PROMETHEUSSERVICE_API LimitsPerLabelSetEntry(Aws::Utils::Json::JsonView jsonValue);
    AWS_PROMETHEUSSERVICE_API LimitsPerLabelSetEntry& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PROMETHEUSSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The maximum number of active series that can be ingested that match this
     * label set. </p> <p>Setting this to 0 causes no label set limit to be enforced,
     * but it does cause Amazon Managed Service for Prometheus to vend label set
     * metrics to CloudWatch</p>
     */
    inline long long GetMaxSeries() const { return m_maxSeries; }
    inline bool MaxSeriesHasBeenSet() const { return m_maxSeriesHasBeenSet; }
    inline void SetMaxSeries(long long value) { m_maxSeriesHasBeenSet = true; m_maxSeries = value; }
    inline LimitsPerLabelSetEntry& WithMaxSeries(long long value) { SetMaxSeries(value); return *this;}
    ///@}
  private:

    long long m_maxSeries{0};
    bool m_maxSeriesHasBeenSet = false;
  };

} // namespace Model
} // namespace PrometheusService
} // namespace Aws
