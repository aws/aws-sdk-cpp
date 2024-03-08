/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/connect/model/MetricInterval.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/connect/model/MetricDataV2.h>
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
namespace Connect
{
namespace Model
{

  /**
   * <p>Contains information about the metric results.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/MetricResultV2">AWS
   * API Reference</a></p>
   */
  class MetricResultV2
  {
  public:
    AWS_CONNECT_API MetricResultV2();
    AWS_CONNECT_API MetricResultV2(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API MetricResultV2& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The dimension for the metrics.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetDimensions() const{ return m_dimensions; }

    /**
     * <p>The dimension for the metrics.</p>
     */
    inline bool DimensionsHasBeenSet() const { return m_dimensionsHasBeenSet; }

    /**
     * <p>The dimension for the metrics.</p>
     */
    inline void SetDimensions(const Aws::Map<Aws::String, Aws::String>& value) { m_dimensionsHasBeenSet = true; m_dimensions = value; }

    /**
     * <p>The dimension for the metrics.</p>
     */
    inline void SetDimensions(Aws::Map<Aws::String, Aws::String>&& value) { m_dimensionsHasBeenSet = true; m_dimensions = std::move(value); }

    /**
     * <p>The dimension for the metrics.</p>
     */
    inline MetricResultV2& WithDimensions(const Aws::Map<Aws::String, Aws::String>& value) { SetDimensions(value); return *this;}

    /**
     * <p>The dimension for the metrics.</p>
     */
    inline MetricResultV2& WithDimensions(Aws::Map<Aws::String, Aws::String>&& value) { SetDimensions(std::move(value)); return *this;}

    /**
     * <p>The dimension for the metrics.</p>
     */
    inline MetricResultV2& AddDimensions(const Aws::String& key, const Aws::String& value) { m_dimensionsHasBeenSet = true; m_dimensions.emplace(key, value); return *this; }

    /**
     * <p>The dimension for the metrics.</p>
     */
    inline MetricResultV2& AddDimensions(Aws::String&& key, const Aws::String& value) { m_dimensionsHasBeenSet = true; m_dimensions.emplace(std::move(key), value); return *this; }

    /**
     * <p>The dimension for the metrics.</p>
     */
    inline MetricResultV2& AddDimensions(const Aws::String& key, Aws::String&& value) { m_dimensionsHasBeenSet = true; m_dimensions.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The dimension for the metrics.</p>
     */
    inline MetricResultV2& AddDimensions(Aws::String&& key, Aws::String&& value) { m_dimensionsHasBeenSet = true; m_dimensions.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>The dimension for the metrics.</p>
     */
    inline MetricResultV2& AddDimensions(const char* key, Aws::String&& value) { m_dimensionsHasBeenSet = true; m_dimensions.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The dimension for the metrics.</p>
     */
    inline MetricResultV2& AddDimensions(Aws::String&& key, const char* value) { m_dimensionsHasBeenSet = true; m_dimensions.emplace(std::move(key), value); return *this; }

    /**
     * <p>The dimension for the metrics.</p>
     */
    inline MetricResultV2& AddDimensions(const char* key, const char* value) { m_dimensionsHasBeenSet = true; m_dimensions.emplace(key, value); return *this; }


    /**
     * <p>The interval period with the start and end time for the metrics.</p>
     */
    inline const MetricInterval& GetMetricInterval() const{ return m_metricInterval; }

    /**
     * <p>The interval period with the start and end time for the metrics.</p>
     */
    inline bool MetricIntervalHasBeenSet() const { return m_metricIntervalHasBeenSet; }

    /**
     * <p>The interval period with the start and end time for the metrics.</p>
     */
    inline void SetMetricInterval(const MetricInterval& value) { m_metricIntervalHasBeenSet = true; m_metricInterval = value; }

    /**
     * <p>The interval period with the start and end time for the metrics.</p>
     */
    inline void SetMetricInterval(MetricInterval&& value) { m_metricIntervalHasBeenSet = true; m_metricInterval = std::move(value); }

    /**
     * <p>The interval period with the start and end time for the metrics.</p>
     */
    inline MetricResultV2& WithMetricInterval(const MetricInterval& value) { SetMetricInterval(value); return *this;}

    /**
     * <p>The interval period with the start and end time for the metrics.</p>
     */
    inline MetricResultV2& WithMetricInterval(MetricInterval&& value) { SetMetricInterval(std::move(value)); return *this;}


    /**
     * <p>The set of metrics.</p>
     */
    inline const Aws::Vector<MetricDataV2>& GetCollections() const{ return m_collections; }

    /**
     * <p>The set of metrics.</p>
     */
    inline bool CollectionsHasBeenSet() const { return m_collectionsHasBeenSet; }

    /**
     * <p>The set of metrics.</p>
     */
    inline void SetCollections(const Aws::Vector<MetricDataV2>& value) { m_collectionsHasBeenSet = true; m_collections = value; }

    /**
     * <p>The set of metrics.</p>
     */
    inline void SetCollections(Aws::Vector<MetricDataV2>&& value) { m_collectionsHasBeenSet = true; m_collections = std::move(value); }

    /**
     * <p>The set of metrics.</p>
     */
    inline MetricResultV2& WithCollections(const Aws::Vector<MetricDataV2>& value) { SetCollections(value); return *this;}

    /**
     * <p>The set of metrics.</p>
     */
    inline MetricResultV2& WithCollections(Aws::Vector<MetricDataV2>&& value) { SetCollections(std::move(value)); return *this;}

    /**
     * <p>The set of metrics.</p>
     */
    inline MetricResultV2& AddCollections(const MetricDataV2& value) { m_collectionsHasBeenSet = true; m_collections.push_back(value); return *this; }

    /**
     * <p>The set of metrics.</p>
     */
    inline MetricResultV2& AddCollections(MetricDataV2&& value) { m_collectionsHasBeenSet = true; m_collections.push_back(std::move(value)); return *this; }

  private:

    Aws::Map<Aws::String, Aws::String> m_dimensions;
    bool m_dimensionsHasBeenSet = false;

    MetricInterval m_metricInterval;
    bool m_metricIntervalHasBeenSet = false;

    Aws::Vector<MetricDataV2> m_collections;
    bool m_collectionsHasBeenSet = false;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
