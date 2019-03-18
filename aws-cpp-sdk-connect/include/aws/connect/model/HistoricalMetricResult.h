/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
   * <p>The metrics data returned from a <code>GetMetricData</code>
   * operation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/HistoricalMetricResult">AWS
   * API Reference</a></p>
   */
  class AWS_CONNECT_API HistoricalMetricResult
  {
  public:
    HistoricalMetricResult();
    HistoricalMetricResult(Aws::Utils::Json::JsonView jsonValue);
    HistoricalMetricResult& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The <code>Dimensions</code> for the metrics.</p>
     */
    inline const Dimensions& GetDimensions() const{ return m_dimensions; }

    /**
     * <p>The <code>Dimensions</code> for the metrics.</p>
     */
    inline bool DimensionsHasBeenSet() const { return m_dimensionsHasBeenSet; }

    /**
     * <p>The <code>Dimensions</code> for the metrics.</p>
     */
    inline void SetDimensions(const Dimensions& value) { m_dimensionsHasBeenSet = true; m_dimensions = value; }

    /**
     * <p>The <code>Dimensions</code> for the metrics.</p>
     */
    inline void SetDimensions(Dimensions&& value) { m_dimensionsHasBeenSet = true; m_dimensions = std::move(value); }

    /**
     * <p>The <code>Dimensions</code> for the metrics.</p>
     */
    inline HistoricalMetricResult& WithDimensions(const Dimensions& value) { SetDimensions(value); return *this;}

    /**
     * <p>The <code>Dimensions</code> for the metrics.</p>
     */
    inline HistoricalMetricResult& WithDimensions(Dimensions&& value) { SetDimensions(std::move(value)); return *this;}


    /**
     * <p>A list of <code>HistoricalMetricData</code> objects.</p>
     */
    inline const Aws::Vector<HistoricalMetricData>& GetCollections() const{ return m_collections; }

    /**
     * <p>A list of <code>HistoricalMetricData</code> objects.</p>
     */
    inline bool CollectionsHasBeenSet() const { return m_collectionsHasBeenSet; }

    /**
     * <p>A list of <code>HistoricalMetricData</code> objects.</p>
     */
    inline void SetCollections(const Aws::Vector<HistoricalMetricData>& value) { m_collectionsHasBeenSet = true; m_collections = value; }

    /**
     * <p>A list of <code>HistoricalMetricData</code> objects.</p>
     */
    inline void SetCollections(Aws::Vector<HistoricalMetricData>&& value) { m_collectionsHasBeenSet = true; m_collections = std::move(value); }

    /**
     * <p>A list of <code>HistoricalMetricData</code> objects.</p>
     */
    inline HistoricalMetricResult& WithCollections(const Aws::Vector<HistoricalMetricData>& value) { SetCollections(value); return *this;}

    /**
     * <p>A list of <code>HistoricalMetricData</code> objects.</p>
     */
    inline HistoricalMetricResult& WithCollections(Aws::Vector<HistoricalMetricData>&& value) { SetCollections(std::move(value)); return *this;}

    /**
     * <p>A list of <code>HistoricalMetricData</code> objects.</p>
     */
    inline HistoricalMetricResult& AddCollections(const HistoricalMetricData& value) { m_collectionsHasBeenSet = true; m_collections.push_back(value); return *this; }

    /**
     * <p>A list of <code>HistoricalMetricData</code> objects.</p>
     */
    inline HistoricalMetricResult& AddCollections(HistoricalMetricData&& value) { m_collectionsHasBeenSet = true; m_collections.push_back(std::move(value)); return *this; }

  private:

    Dimensions m_dimensions;
    bool m_dimensionsHasBeenSet;

    Aws::Vector<HistoricalMetricData> m_collections;
    bool m_collectionsHasBeenSet;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
