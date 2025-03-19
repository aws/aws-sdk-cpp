/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/connect/model/Dimensions.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/connect/model/CurrentMetricData.h>
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
   * <p>Contains information about a set of real-time metrics.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/CurrentMetricResult">AWS
   * API Reference</a></p>
   */
  class CurrentMetricResult
  {
  public:
    AWS_CONNECT_API CurrentMetricResult() = default;
    AWS_CONNECT_API CurrentMetricResult(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API CurrentMetricResult& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The dimensions for the metrics.</p>
     */
    inline const Dimensions& GetDimensions() const { return m_dimensions; }
    inline bool DimensionsHasBeenSet() const { return m_dimensionsHasBeenSet; }
    template<typename DimensionsT = Dimensions>
    void SetDimensions(DimensionsT&& value) { m_dimensionsHasBeenSet = true; m_dimensions = std::forward<DimensionsT>(value); }
    template<typename DimensionsT = Dimensions>
    CurrentMetricResult& WithDimensions(DimensionsT&& value) { SetDimensions(std::forward<DimensionsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The set of metrics.</p>
     */
    inline const Aws::Vector<CurrentMetricData>& GetCollections() const { return m_collections; }
    inline bool CollectionsHasBeenSet() const { return m_collectionsHasBeenSet; }
    template<typename CollectionsT = Aws::Vector<CurrentMetricData>>
    void SetCollections(CollectionsT&& value) { m_collectionsHasBeenSet = true; m_collections = std::forward<CollectionsT>(value); }
    template<typename CollectionsT = Aws::Vector<CurrentMetricData>>
    CurrentMetricResult& WithCollections(CollectionsT&& value) { SetCollections(std::forward<CollectionsT>(value)); return *this;}
    template<typename CollectionsT = CurrentMetricData>
    CurrentMetricResult& AddCollections(CollectionsT&& value) { m_collectionsHasBeenSet = true; m_collections.emplace_back(std::forward<CollectionsT>(value)); return *this; }
    ///@}
  private:

    Dimensions m_dimensions;
    bool m_dimensionsHasBeenSet = false;

    Aws::Vector<CurrentMetricData> m_collections;
    bool m_collectionsHasBeenSet = false;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
