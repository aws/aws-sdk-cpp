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
    AWS_CONNECT_API HistoricalMetricResult();
    AWS_CONNECT_API HistoricalMetricResult(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API HistoricalMetricResult& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The dimension for the metrics.</p>
     */
    inline const Dimensions& GetDimensions() const{ return m_dimensions; }

    /**
     * <p>The dimension for the metrics.</p>
     */
    inline bool DimensionsHasBeenSet() const { return m_dimensionsHasBeenSet; }

    /**
     * <p>The dimension for the metrics.</p>
     */
    inline void SetDimensions(const Dimensions& value) { m_dimensionsHasBeenSet = true; m_dimensions = value; }

    /**
     * <p>The dimension for the metrics.</p>
     */
    inline void SetDimensions(Dimensions&& value) { m_dimensionsHasBeenSet = true; m_dimensions = std::move(value); }

    /**
     * <p>The dimension for the metrics.</p>
     */
    inline HistoricalMetricResult& WithDimensions(const Dimensions& value) { SetDimensions(value); return *this;}

    /**
     * <p>The dimension for the metrics.</p>
     */
    inline HistoricalMetricResult& WithDimensions(Dimensions&& value) { SetDimensions(std::move(value)); return *this;}


    /**
     * <p>The set of metrics.</p>
     */
    inline const Aws::Vector<HistoricalMetricData>& GetCollections() const{ return m_collections; }

    /**
     * <p>The set of metrics.</p>
     */
    inline bool CollectionsHasBeenSet() const { return m_collectionsHasBeenSet; }

    /**
     * <p>The set of metrics.</p>
     */
    inline void SetCollections(const Aws::Vector<HistoricalMetricData>& value) { m_collectionsHasBeenSet = true; m_collections = value; }

    /**
     * <p>The set of metrics.</p>
     */
    inline void SetCollections(Aws::Vector<HistoricalMetricData>&& value) { m_collectionsHasBeenSet = true; m_collections = std::move(value); }

    /**
     * <p>The set of metrics.</p>
     */
    inline HistoricalMetricResult& WithCollections(const Aws::Vector<HistoricalMetricData>& value) { SetCollections(value); return *this;}

    /**
     * <p>The set of metrics.</p>
     */
    inline HistoricalMetricResult& WithCollections(Aws::Vector<HistoricalMetricData>&& value) { SetCollections(std::move(value)); return *this;}

    /**
     * <p>The set of metrics.</p>
     */
    inline HistoricalMetricResult& AddCollections(const HistoricalMetricData& value) { m_collectionsHasBeenSet = true; m_collections.push_back(value); return *this; }

    /**
     * <p>The set of metrics.</p>
     */
    inline HistoricalMetricResult& AddCollections(HistoricalMetricData&& value) { m_collectionsHasBeenSet = true; m_collections.push_back(std::move(value)); return *this; }

  private:

    Dimensions m_dimensions;
    bool m_dimensionsHasBeenSet = false;

    Aws::Vector<HistoricalMetricData> m_collections;
    bool m_collectionsHasBeenSet = false;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
