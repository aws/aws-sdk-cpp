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
#include <aws/pinpoint/model/AttributeType.h>
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
   * <p>Specifies attribute-based criteria for including or excluding endpoints from
   * a segment.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/AttributeDimension">AWS
   * API Reference</a></p>
   */
  class AWS_PINPOINT_API AttributeDimension
  {
  public:
    AttributeDimension();
    AttributeDimension(Aws::Utils::Json::JsonView jsonValue);
    AttributeDimension& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The type of segment dimension to use. Valid values are: INCLUSIVE, endpoints
     * that match the criteria are included in the segment; and, EXCLUSIVE, endpoints
     * that match the criteria are excluded from the segment.</p>
     */
    inline const AttributeType& GetAttributeType() const{ return m_attributeType; }

    /**
     * <p>The type of segment dimension to use. Valid values are: INCLUSIVE, endpoints
     * that match the criteria are included in the segment; and, EXCLUSIVE, endpoints
     * that match the criteria are excluded from the segment.</p>
     */
    inline bool AttributeTypeHasBeenSet() const { return m_attributeTypeHasBeenSet; }

    /**
     * <p>The type of segment dimension to use. Valid values are: INCLUSIVE, endpoints
     * that match the criteria are included in the segment; and, EXCLUSIVE, endpoints
     * that match the criteria are excluded from the segment.</p>
     */
    inline void SetAttributeType(const AttributeType& value) { m_attributeTypeHasBeenSet = true; m_attributeType = value; }

    /**
     * <p>The type of segment dimension to use. Valid values are: INCLUSIVE, endpoints
     * that match the criteria are included in the segment; and, EXCLUSIVE, endpoints
     * that match the criteria are excluded from the segment.</p>
     */
    inline void SetAttributeType(AttributeType&& value) { m_attributeTypeHasBeenSet = true; m_attributeType = std::move(value); }

    /**
     * <p>The type of segment dimension to use. Valid values are: INCLUSIVE, endpoints
     * that match the criteria are included in the segment; and, EXCLUSIVE, endpoints
     * that match the criteria are excluded from the segment.</p>
     */
    inline AttributeDimension& WithAttributeType(const AttributeType& value) { SetAttributeType(value); return *this;}

    /**
     * <p>The type of segment dimension to use. Valid values are: INCLUSIVE, endpoints
     * that match the criteria are included in the segment; and, EXCLUSIVE, endpoints
     * that match the criteria are excluded from the segment.</p>
     */
    inline AttributeDimension& WithAttributeType(AttributeType&& value) { SetAttributeType(std::move(value)); return *this;}


    /**
     * <p>The criteria values to use for the segment dimension. Depending on the value
     * of the AttributeType property, endpoints are included or excluded from the
     * segment if their attribute values match the criteria values.</p>
     */
    inline const Aws::Vector<Aws::String>& GetValues() const{ return m_values; }

    /**
     * <p>The criteria values to use for the segment dimension. Depending on the value
     * of the AttributeType property, endpoints are included or excluded from the
     * segment if their attribute values match the criteria values.</p>
     */
    inline bool ValuesHasBeenSet() const { return m_valuesHasBeenSet; }

    /**
     * <p>The criteria values to use for the segment dimension. Depending on the value
     * of the AttributeType property, endpoints are included or excluded from the
     * segment if their attribute values match the criteria values.</p>
     */
    inline void SetValues(const Aws::Vector<Aws::String>& value) { m_valuesHasBeenSet = true; m_values = value; }

    /**
     * <p>The criteria values to use for the segment dimension. Depending on the value
     * of the AttributeType property, endpoints are included or excluded from the
     * segment if their attribute values match the criteria values.</p>
     */
    inline void SetValues(Aws::Vector<Aws::String>&& value) { m_valuesHasBeenSet = true; m_values = std::move(value); }

    /**
     * <p>The criteria values to use for the segment dimension. Depending on the value
     * of the AttributeType property, endpoints are included or excluded from the
     * segment if their attribute values match the criteria values.</p>
     */
    inline AttributeDimension& WithValues(const Aws::Vector<Aws::String>& value) { SetValues(value); return *this;}

    /**
     * <p>The criteria values to use for the segment dimension. Depending on the value
     * of the AttributeType property, endpoints are included or excluded from the
     * segment if their attribute values match the criteria values.</p>
     */
    inline AttributeDimension& WithValues(Aws::Vector<Aws::String>&& value) { SetValues(std::move(value)); return *this;}

    /**
     * <p>The criteria values to use for the segment dimension. Depending on the value
     * of the AttributeType property, endpoints are included or excluded from the
     * segment if their attribute values match the criteria values.</p>
     */
    inline AttributeDimension& AddValues(const Aws::String& value) { m_valuesHasBeenSet = true; m_values.push_back(value); return *this; }

    /**
     * <p>The criteria values to use for the segment dimension. Depending on the value
     * of the AttributeType property, endpoints are included or excluded from the
     * segment if their attribute values match the criteria values.</p>
     */
    inline AttributeDimension& AddValues(Aws::String&& value) { m_valuesHasBeenSet = true; m_values.push_back(std::move(value)); return *this; }

    /**
     * <p>The criteria values to use for the segment dimension. Depending on the value
     * of the AttributeType property, endpoints are included or excluded from the
     * segment if their attribute values match the criteria values.</p>
     */
    inline AttributeDimension& AddValues(const char* value) { m_valuesHasBeenSet = true; m_values.push_back(value); return *this; }

  private:

    AttributeType m_attributeType;
    bool m_attributeTypeHasBeenSet;

    Aws::Vector<Aws::String> m_values;
    bool m_valuesHasBeenSet;
  };

} // namespace Model
} // namespace Pinpoint
} // namespace Aws
