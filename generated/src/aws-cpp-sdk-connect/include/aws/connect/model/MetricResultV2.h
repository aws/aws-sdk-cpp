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
    AWS_CONNECT_API MetricResultV2() = default;
    AWS_CONNECT_API MetricResultV2(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API MetricResultV2& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The dimension for the metrics.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetDimensions() const { return m_dimensions; }
    inline bool DimensionsHasBeenSet() const { return m_dimensionsHasBeenSet; }
    template<typename DimensionsT = Aws::Map<Aws::String, Aws::String>>
    void SetDimensions(DimensionsT&& value) { m_dimensionsHasBeenSet = true; m_dimensions = std::forward<DimensionsT>(value); }
    template<typename DimensionsT = Aws::Map<Aws::String, Aws::String>>
    MetricResultV2& WithDimensions(DimensionsT&& value) { SetDimensions(std::forward<DimensionsT>(value)); return *this;}
    template<typename DimensionsKeyT = Aws::String, typename DimensionsValueT = Aws::String>
    MetricResultV2& AddDimensions(DimensionsKeyT&& key, DimensionsValueT&& value) {
      m_dimensionsHasBeenSet = true; m_dimensions.emplace(std::forward<DimensionsKeyT>(key), std::forward<DimensionsValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>The interval period with the start and end time for the metrics.</p>
     */
    inline const MetricInterval& GetMetricInterval() const { return m_metricInterval; }
    inline bool MetricIntervalHasBeenSet() const { return m_metricIntervalHasBeenSet; }
    template<typename MetricIntervalT = MetricInterval>
    void SetMetricInterval(MetricIntervalT&& value) { m_metricIntervalHasBeenSet = true; m_metricInterval = std::forward<MetricIntervalT>(value); }
    template<typename MetricIntervalT = MetricInterval>
    MetricResultV2& WithMetricInterval(MetricIntervalT&& value) { SetMetricInterval(std::forward<MetricIntervalT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The set of metrics.</p>
     */
    inline const Aws::Vector<MetricDataV2>& GetCollections() const { return m_collections; }
    inline bool CollectionsHasBeenSet() const { return m_collectionsHasBeenSet; }
    template<typename CollectionsT = Aws::Vector<MetricDataV2>>
    void SetCollections(CollectionsT&& value) { m_collectionsHasBeenSet = true; m_collections = std::forward<CollectionsT>(value); }
    template<typename CollectionsT = Aws::Vector<MetricDataV2>>
    MetricResultV2& WithCollections(CollectionsT&& value) { SetCollections(std::forward<CollectionsT>(value)); return *this;}
    template<typename CollectionsT = MetricDataV2>
    MetricResultV2& AddCollections(CollectionsT&& value) { m_collectionsHasBeenSet = true; m_collections.emplace_back(std::forward<CollectionsT>(value)); return *this; }
    ///@}
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
