/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/connect/model/Dimensions.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/connect/model/HistoricalMetricData.h>
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
   * <p>Contains information about the historical metrics retrieved.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/HistoricalMetricResult">AWS
   * API Reference</a></p>
   */
  class HistoricalMetricResult
  {
  public:
    AWS_CONNECT_API HistoricalMetricResult() = default;
    AWS_CONNECT_API HistoricalMetricResult(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API HistoricalMetricResult& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The dimension for the metrics.</p>
     */
    inline const Dimensions& GetDimensions() const { return m_dimensions; }
    inline bool DimensionsHasBeenSet() const { return m_dimensionsHasBeenSet; }
    template<typename DimensionsT = Dimensions>
    void SetDimensions(DimensionsT&& value) { m_dimensionsHasBeenSet = true; m_dimensions = std::forward<DimensionsT>(value); }
    template<typename DimensionsT = Dimensions>
    HistoricalMetricResult& WithDimensions(DimensionsT&& value) { SetDimensions(std::forward<DimensionsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The set of metrics.</p>
     */
    inline const Aws::Vector<HistoricalMetricData>& GetCollections() const { return m_collections; }
    inline bool CollectionsHasBeenSet() const { return m_collectionsHasBeenSet; }
    template<typename CollectionsT = Aws::Vector<HistoricalMetricData>>
    void SetCollections(CollectionsT&& value) { m_collectionsHasBeenSet = true; m_collections = std::forward<CollectionsT>(value); }
    template<typename CollectionsT = Aws::Vector<HistoricalMetricData>>
    HistoricalMetricResult& WithCollections(CollectionsT&& value) { SetCollections(std::forward<CollectionsT>(value)); return *this;}
    template<typename CollectionsT = HistoricalMetricData>
    HistoricalMetricResult& AddCollections(CollectionsT&& value) { m_collectionsHasBeenSet = true; m_collections.emplace_back(std::forward<CollectionsT>(value)); return *this; }
    ///@}
  private:

    Dimensions m_dimensions;
    bool m_dimensionsHasBeenSet = false;

    Aws::Vector<HistoricalMetricData> m_collections;
    bool m_collectionsHasBeenSet = false;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
