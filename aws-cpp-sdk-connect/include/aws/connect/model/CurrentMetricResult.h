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
   * <p>A <code>CurrentMetricResult</code> object.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/CurrentMetricResult">AWS
   * API Reference</a></p>
   */
  class AWS_CONNECT_API CurrentMetricResult
  {
  public:
    CurrentMetricResult();
    CurrentMetricResult(Aws::Utils::Json::JsonView jsonValue);
    CurrentMetricResult& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The <code>Dimensions</code> for the <code>CurrentMetricResult</code>
     * object.</p>
     */
    inline const Dimensions& GetDimensions() const{ return m_dimensions; }

    /**
     * <p>The <code>Dimensions</code> for the <code>CurrentMetricResult</code>
     * object.</p>
     */
    inline bool DimensionsHasBeenSet() const { return m_dimensionsHasBeenSet; }

    /**
     * <p>The <code>Dimensions</code> for the <code>CurrentMetricResult</code>
     * object.</p>
     */
    inline void SetDimensions(const Dimensions& value) { m_dimensionsHasBeenSet = true; m_dimensions = value; }

    /**
     * <p>The <code>Dimensions</code> for the <code>CurrentMetricResult</code>
     * object.</p>
     */
    inline void SetDimensions(Dimensions&& value) { m_dimensionsHasBeenSet = true; m_dimensions = std::move(value); }

    /**
     * <p>The <code>Dimensions</code> for the <code>CurrentMetricResult</code>
     * object.</p>
     */
    inline CurrentMetricResult& WithDimensions(const Dimensions& value) { SetDimensions(value); return *this;}

    /**
     * <p>The <code>Dimensions</code> for the <code>CurrentMetricResult</code>
     * object.</p>
     */
    inline CurrentMetricResult& WithDimensions(Dimensions&& value) { SetDimensions(std::move(value)); return *this;}


    /**
     * <p>The <code>Collections</code> for the <code>CurrentMetricResult</code>
     * object.</p>
     */
    inline const Aws::Vector<CurrentMetricData>& GetCollections() const{ return m_collections; }

    /**
     * <p>The <code>Collections</code> for the <code>CurrentMetricResult</code>
     * object.</p>
     */
    inline bool CollectionsHasBeenSet() const { return m_collectionsHasBeenSet; }

    /**
     * <p>The <code>Collections</code> for the <code>CurrentMetricResult</code>
     * object.</p>
     */
    inline void SetCollections(const Aws::Vector<CurrentMetricData>& value) { m_collectionsHasBeenSet = true; m_collections = value; }

    /**
     * <p>The <code>Collections</code> for the <code>CurrentMetricResult</code>
     * object.</p>
     */
    inline void SetCollections(Aws::Vector<CurrentMetricData>&& value) { m_collectionsHasBeenSet = true; m_collections = std::move(value); }

    /**
     * <p>The <code>Collections</code> for the <code>CurrentMetricResult</code>
     * object.</p>
     */
    inline CurrentMetricResult& WithCollections(const Aws::Vector<CurrentMetricData>& value) { SetCollections(value); return *this;}

    /**
     * <p>The <code>Collections</code> for the <code>CurrentMetricResult</code>
     * object.</p>
     */
    inline CurrentMetricResult& WithCollections(Aws::Vector<CurrentMetricData>&& value) { SetCollections(std::move(value)); return *this;}

    /**
     * <p>The <code>Collections</code> for the <code>CurrentMetricResult</code>
     * object.</p>
     */
    inline CurrentMetricResult& AddCollections(const CurrentMetricData& value) { m_collectionsHasBeenSet = true; m_collections.push_back(value); return *this; }

    /**
     * <p>The <code>Collections</code> for the <code>CurrentMetricResult</code>
     * object.</p>
     */
    inline CurrentMetricResult& AddCollections(CurrentMetricData&& value) { m_collectionsHasBeenSet = true; m_collections.push_back(std::move(value)); return *this; }

  private:

    Dimensions m_dimensions;
    bool m_dimensionsHasBeenSet;

    Aws::Vector<CurrentMetricData> m_collections;
    bool m_collectionsHasBeenSet;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
