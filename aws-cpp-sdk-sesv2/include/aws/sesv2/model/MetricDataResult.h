/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sesv2/SESV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/DateTime.h>
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
namespace SESV2
{
namespace Model
{

  /**
   * <p>The result of a single metric data query.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/MetricDataResult">AWS
   * API Reference</a></p>
   */
  class MetricDataResult
  {
  public:
    AWS_SESV2_API MetricDataResult();
    AWS_SESV2_API MetricDataResult(Aws::Utils::Json::JsonView jsonValue);
    AWS_SESV2_API MetricDataResult& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SESV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The query identifier.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>The query identifier.</p>
     */
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }

    /**
     * <p>The query identifier.</p>
     */
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * <p>The query identifier.</p>
     */
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }

    /**
     * <p>The query identifier.</p>
     */
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    /**
     * <p>The query identifier.</p>
     */
    inline MetricDataResult& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>The query identifier.</p>
     */
    inline MetricDataResult& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p>The query identifier.</p>
     */
    inline MetricDataResult& WithId(const char* value) { SetId(value); return *this;}


    /**
     * <p>A list of timestamps for the metric data results.</p>
     */
    inline const Aws::Vector<Aws::Utils::DateTime>& GetTimestamps() const{ return m_timestamps; }

    /**
     * <p>A list of timestamps for the metric data results.</p>
     */
    inline bool TimestampsHasBeenSet() const { return m_timestampsHasBeenSet; }

    /**
     * <p>A list of timestamps for the metric data results.</p>
     */
    inline void SetTimestamps(const Aws::Vector<Aws::Utils::DateTime>& value) { m_timestampsHasBeenSet = true; m_timestamps = value; }

    /**
     * <p>A list of timestamps for the metric data results.</p>
     */
    inline void SetTimestamps(Aws::Vector<Aws::Utils::DateTime>&& value) { m_timestampsHasBeenSet = true; m_timestamps = std::move(value); }

    /**
     * <p>A list of timestamps for the metric data results.</p>
     */
    inline MetricDataResult& WithTimestamps(const Aws::Vector<Aws::Utils::DateTime>& value) { SetTimestamps(value); return *this;}

    /**
     * <p>A list of timestamps for the metric data results.</p>
     */
    inline MetricDataResult& WithTimestamps(Aws::Vector<Aws::Utils::DateTime>&& value) { SetTimestamps(std::move(value)); return *this;}

    /**
     * <p>A list of timestamps for the metric data results.</p>
     */
    inline MetricDataResult& AddTimestamps(const Aws::Utils::DateTime& value) { m_timestampsHasBeenSet = true; m_timestamps.push_back(value); return *this; }

    /**
     * <p>A list of timestamps for the metric data results.</p>
     */
    inline MetricDataResult& AddTimestamps(Aws::Utils::DateTime&& value) { m_timestampsHasBeenSet = true; m_timestamps.push_back(std::move(value)); return *this; }


    /**
     * <p>A list of values (cumulative / sum) for the metric data results.</p>
     */
    inline const Aws::Vector<long long>& GetValues() const{ return m_values; }

    /**
     * <p>A list of values (cumulative / sum) for the metric data results.</p>
     */
    inline bool ValuesHasBeenSet() const { return m_valuesHasBeenSet; }

    /**
     * <p>A list of values (cumulative / sum) for the metric data results.</p>
     */
    inline void SetValues(const Aws::Vector<long long>& value) { m_valuesHasBeenSet = true; m_values = value; }

    /**
     * <p>A list of values (cumulative / sum) for the metric data results.</p>
     */
    inline void SetValues(Aws::Vector<long long>&& value) { m_valuesHasBeenSet = true; m_values = std::move(value); }

    /**
     * <p>A list of values (cumulative / sum) for the metric data results.</p>
     */
    inline MetricDataResult& WithValues(const Aws::Vector<long long>& value) { SetValues(value); return *this;}

    /**
     * <p>A list of values (cumulative / sum) for the metric data results.</p>
     */
    inline MetricDataResult& WithValues(Aws::Vector<long long>&& value) { SetValues(std::move(value)); return *this;}

    /**
     * <p>A list of values (cumulative / sum) for the metric data results.</p>
     */
    inline MetricDataResult& AddValues(long long value) { m_valuesHasBeenSet = true; m_values.push_back(value); return *this; }

  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::Vector<Aws::Utils::DateTime> m_timestamps;
    bool m_timestampsHasBeenSet = false;

    Aws::Vector<long long> m_values;
    bool m_valuesHasBeenSet = false;
  };

} // namespace Model
} // namespace SESV2
} // namespace Aws
