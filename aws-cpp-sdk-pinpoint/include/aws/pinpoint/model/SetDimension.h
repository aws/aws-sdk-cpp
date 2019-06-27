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
#include <aws/pinpoint/Pinpoint_EXPORTS.h>
#include <aws/pinpoint/model/DimensionType.h>
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
namespace Pinpoint
{
namespace Model
{

  /**
   * <p>Specifies the dimension type and values for a segment
   * dimension.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/SetDimension">AWS
   * API Reference</a></p>
   */
  class AWS_PINPOINT_API SetDimension
  {
  public:
    SetDimension();
    SetDimension(Aws::Utils::Json::JsonView jsonValue);
    SetDimension& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The type of segment dimension to use. Valid values are: INCLUSIVE, endpoints
     * that match the criteria are included in the segment; and, EXCLUSIVE, endpoints
     * that match the criteria are excluded from the segment.</p>
     */
    inline const DimensionType& GetDimensionType() const{ return m_dimensionType; }

    /**
     * <p>The type of segment dimension to use. Valid values are: INCLUSIVE, endpoints
     * that match the criteria are included in the segment; and, EXCLUSIVE, endpoints
     * that match the criteria are excluded from the segment.</p>
     */
    inline bool DimensionTypeHasBeenSet() const { return m_dimensionTypeHasBeenSet; }

    /**
     * <p>The type of segment dimension to use. Valid values are: INCLUSIVE, endpoints
     * that match the criteria are included in the segment; and, EXCLUSIVE, endpoints
     * that match the criteria are excluded from the segment.</p>
     */
    inline void SetDimensionType(const DimensionType& value) { m_dimensionTypeHasBeenSet = true; m_dimensionType = value; }

    /**
     * <p>The type of segment dimension to use. Valid values are: INCLUSIVE, endpoints
     * that match the criteria are included in the segment; and, EXCLUSIVE, endpoints
     * that match the criteria are excluded from the segment.</p>
     */
    inline void SetDimensionType(DimensionType&& value) { m_dimensionTypeHasBeenSet = true; m_dimensionType = std::move(value); }

    /**
     * <p>The type of segment dimension to use. Valid values are: INCLUSIVE, endpoints
     * that match the criteria are included in the segment; and, EXCLUSIVE, endpoints
     * that match the criteria are excluded from the segment.</p>
     */
    inline SetDimension& WithDimensionType(const DimensionType& value) { SetDimensionType(value); return *this;}

    /**
     * <p>The type of segment dimension to use. Valid values are: INCLUSIVE, endpoints
     * that match the criteria are included in the segment; and, EXCLUSIVE, endpoints
     * that match the criteria are excluded from the segment.</p>
     */
    inline SetDimension& WithDimensionType(DimensionType&& value) { SetDimensionType(std::move(value)); return *this;}


    /**
     * <p>The criteria values to use for the segment dimension. Depending on the value
     * of the DimensionType property, endpoints are included or excluded from the
     * segment if their values match the criteria values.</p>
     */
    inline const Aws::Vector<Aws::String>& GetValues() const{ return m_values; }

    /**
     * <p>The criteria values to use for the segment dimension. Depending on the value
     * of the DimensionType property, endpoints are included or excluded from the
     * segment if their values match the criteria values.</p>
     */
    inline bool ValuesHasBeenSet() const { return m_valuesHasBeenSet; }

    /**
     * <p>The criteria values to use for the segment dimension. Depending on the value
     * of the DimensionType property, endpoints are included or excluded from the
     * segment if their values match the criteria values.</p>
     */
    inline void SetValues(const Aws::Vector<Aws::String>& value) { m_valuesHasBeenSet = true; m_values = value; }

    /**
     * <p>The criteria values to use for the segment dimension. Depending on the value
     * of the DimensionType property, endpoints are included or excluded from the
     * segment if their values match the criteria values.</p>
     */
    inline void SetValues(Aws::Vector<Aws::String>&& value) { m_valuesHasBeenSet = true; m_values = std::move(value); }

    /**
     * <p>The criteria values to use for the segment dimension. Depending on the value
     * of the DimensionType property, endpoints are included or excluded from the
     * segment if their values match the criteria values.</p>
     */
    inline SetDimension& WithValues(const Aws::Vector<Aws::String>& value) { SetValues(value); return *this;}

    /**
     * <p>The criteria values to use for the segment dimension. Depending on the value
     * of the DimensionType property, endpoints are included or excluded from the
     * segment if their values match the criteria values.</p>
     */
    inline SetDimension& WithValues(Aws::Vector<Aws::String>&& value) { SetValues(std::move(value)); return *this;}

    /**
     * <p>The criteria values to use for the segment dimension. Depending on the value
     * of the DimensionType property, endpoints are included or excluded from the
     * segment if their values match the criteria values.</p>
     */
    inline SetDimension& AddValues(const Aws::String& value) { m_valuesHasBeenSet = true; m_values.push_back(value); return *this; }

    /**
     * <p>The criteria values to use for the segment dimension. Depending on the value
     * of the DimensionType property, endpoints are included or excluded from the
     * segment if their values match the criteria values.</p>
     */
    inline SetDimension& AddValues(Aws::String&& value) { m_valuesHasBeenSet = true; m_values.push_back(std::move(value)); return *this; }

    /**
     * <p>The criteria values to use for the segment dimension. Depending on the value
     * of the DimensionType property, endpoints are included or excluded from the
     * segment if their values match the criteria values.</p>
     */
    inline SetDimension& AddValues(const char* value) { m_valuesHasBeenSet = true; m_values.push_back(value); return *this; }

  private:

    DimensionType m_dimensionType;
    bool m_dimensionTypeHasBeenSet;

    Aws::Vector<Aws::String> m_values;
    bool m_valuesHasBeenSet;
  };

} // namespace Model
} // namespace Pinpoint
} // namespace Aws
