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
#include <aws/pi/PI_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace PI
{
namespace Model
{

  /**
   * <p>An array of descriptions and aggregated values for each dimension within a
   * dimension group.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/pi-2018-02-27/DimensionKeyDescription">AWS
   * API Reference</a></p>
   */
  class AWS_PI_API DimensionKeyDescription
  {
  public:
    DimensionKeyDescription();
    DimensionKeyDescription(Aws::Utils::Json::JsonView jsonValue);
    DimensionKeyDescription& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A map of name-value pairs for the dimensions in the group.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetDimensions() const{ return m_dimensions; }

    /**
     * <p>A map of name-value pairs for the dimensions in the group.</p>
     */
    inline bool DimensionsHasBeenSet() const { return m_dimensionsHasBeenSet; }

    /**
     * <p>A map of name-value pairs for the dimensions in the group.</p>
     */
    inline void SetDimensions(const Aws::Map<Aws::String, Aws::String>& value) { m_dimensionsHasBeenSet = true; m_dimensions = value; }

    /**
     * <p>A map of name-value pairs for the dimensions in the group.</p>
     */
    inline void SetDimensions(Aws::Map<Aws::String, Aws::String>&& value) { m_dimensionsHasBeenSet = true; m_dimensions = std::move(value); }

    /**
     * <p>A map of name-value pairs for the dimensions in the group.</p>
     */
    inline DimensionKeyDescription& WithDimensions(const Aws::Map<Aws::String, Aws::String>& value) { SetDimensions(value); return *this;}

    /**
     * <p>A map of name-value pairs for the dimensions in the group.</p>
     */
    inline DimensionKeyDescription& WithDimensions(Aws::Map<Aws::String, Aws::String>&& value) { SetDimensions(std::move(value)); return *this;}

    /**
     * <p>A map of name-value pairs for the dimensions in the group.</p>
     */
    inline DimensionKeyDescription& AddDimensions(const Aws::String& key, const Aws::String& value) { m_dimensionsHasBeenSet = true; m_dimensions.emplace(key, value); return *this; }

    /**
     * <p>A map of name-value pairs for the dimensions in the group.</p>
     */
    inline DimensionKeyDescription& AddDimensions(Aws::String&& key, const Aws::String& value) { m_dimensionsHasBeenSet = true; m_dimensions.emplace(std::move(key), value); return *this; }

    /**
     * <p>A map of name-value pairs for the dimensions in the group.</p>
     */
    inline DimensionKeyDescription& AddDimensions(const Aws::String& key, Aws::String&& value) { m_dimensionsHasBeenSet = true; m_dimensions.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A map of name-value pairs for the dimensions in the group.</p>
     */
    inline DimensionKeyDescription& AddDimensions(Aws::String&& key, Aws::String&& value) { m_dimensionsHasBeenSet = true; m_dimensions.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>A map of name-value pairs for the dimensions in the group.</p>
     */
    inline DimensionKeyDescription& AddDimensions(const char* key, Aws::String&& value) { m_dimensionsHasBeenSet = true; m_dimensions.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A map of name-value pairs for the dimensions in the group.</p>
     */
    inline DimensionKeyDescription& AddDimensions(Aws::String&& key, const char* value) { m_dimensionsHasBeenSet = true; m_dimensions.emplace(std::move(key), value); return *this; }

    /**
     * <p>A map of name-value pairs for the dimensions in the group.</p>
     */
    inline DimensionKeyDescription& AddDimensions(const char* key, const char* value) { m_dimensionsHasBeenSet = true; m_dimensions.emplace(key, value); return *this; }


    /**
     * <p>The aggregated metric value for the dimension(s), over the requested time
     * range.</p>
     */
    inline double GetTotal() const{ return m_total; }

    /**
     * <p>The aggregated metric value for the dimension(s), over the requested time
     * range.</p>
     */
    inline bool TotalHasBeenSet() const { return m_totalHasBeenSet; }

    /**
     * <p>The aggregated metric value for the dimension(s), over the requested time
     * range.</p>
     */
    inline void SetTotal(double value) { m_totalHasBeenSet = true; m_total = value; }

    /**
     * <p>The aggregated metric value for the dimension(s), over the requested time
     * range.</p>
     */
    inline DimensionKeyDescription& WithTotal(double value) { SetTotal(value); return *this;}


    /**
     * <p>If <code>PartitionBy</code> was specified, <code>PartitionKeys</code>
     * contains the dimensions that were.</p>
     */
    inline const Aws::Vector<double>& GetPartitions() const{ return m_partitions; }

    /**
     * <p>If <code>PartitionBy</code> was specified, <code>PartitionKeys</code>
     * contains the dimensions that were.</p>
     */
    inline bool PartitionsHasBeenSet() const { return m_partitionsHasBeenSet; }

    /**
     * <p>If <code>PartitionBy</code> was specified, <code>PartitionKeys</code>
     * contains the dimensions that were.</p>
     */
    inline void SetPartitions(const Aws::Vector<double>& value) { m_partitionsHasBeenSet = true; m_partitions = value; }

    /**
     * <p>If <code>PartitionBy</code> was specified, <code>PartitionKeys</code>
     * contains the dimensions that were.</p>
     */
    inline void SetPartitions(Aws::Vector<double>&& value) { m_partitionsHasBeenSet = true; m_partitions = std::move(value); }

    /**
     * <p>If <code>PartitionBy</code> was specified, <code>PartitionKeys</code>
     * contains the dimensions that were.</p>
     */
    inline DimensionKeyDescription& WithPartitions(const Aws::Vector<double>& value) { SetPartitions(value); return *this;}

    /**
     * <p>If <code>PartitionBy</code> was specified, <code>PartitionKeys</code>
     * contains the dimensions that were.</p>
     */
    inline DimensionKeyDescription& WithPartitions(Aws::Vector<double>&& value) { SetPartitions(std::move(value)); return *this;}

    /**
     * <p>If <code>PartitionBy</code> was specified, <code>PartitionKeys</code>
     * contains the dimensions that were.</p>
     */
    inline DimensionKeyDescription& AddPartitions(double value) { m_partitionsHasBeenSet = true; m_partitions.push_back(value); return *this; }

  private:

    Aws::Map<Aws::String, Aws::String> m_dimensions;
    bool m_dimensionsHasBeenSet;

    double m_total;
    bool m_totalHasBeenSet;

    Aws::Vector<double> m_partitions;
    bool m_partitionsHasBeenSet;
  };

} // namespace Model
} // namespace PI
} // namespace Aws
