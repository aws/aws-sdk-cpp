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
   * Custom attibute dimension<p><h3>See Also:</h3>   <a
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
     * The type of dimension:

INCLUSIVE - Endpoints that match the criteria are
     * included in the segment.

EXCLUSIVE - Endpoints that match the criteria are
     * excluded from the segment.
     */
    inline const AttributeType& GetAttributeType() const{ return m_attributeType; }

    /**
     * The type of dimension:

INCLUSIVE - Endpoints that match the criteria are
     * included in the segment.

EXCLUSIVE - Endpoints that match the criteria are
     * excluded from the segment.
     */
    inline bool AttributeTypeHasBeenSet() const { return m_attributeTypeHasBeenSet; }

    /**
     * The type of dimension:

INCLUSIVE - Endpoints that match the criteria are
     * included in the segment.

EXCLUSIVE - Endpoints that match the criteria are
     * excluded from the segment.
     */
    inline void SetAttributeType(const AttributeType& value) { m_attributeTypeHasBeenSet = true; m_attributeType = value; }

    /**
     * The type of dimension:

INCLUSIVE - Endpoints that match the criteria are
     * included in the segment.

EXCLUSIVE - Endpoints that match the criteria are
     * excluded from the segment.
     */
    inline void SetAttributeType(AttributeType&& value) { m_attributeTypeHasBeenSet = true; m_attributeType = std::move(value); }

    /**
     * The type of dimension:

INCLUSIVE - Endpoints that match the criteria are
     * included in the segment.

EXCLUSIVE - Endpoints that match the criteria are
     * excluded from the segment.
     */
    inline AttributeDimension& WithAttributeType(const AttributeType& value) { SetAttributeType(value); return *this;}

    /**
     * The type of dimension:

INCLUSIVE - Endpoints that match the criteria are
     * included in the segment.

EXCLUSIVE - Endpoints that match the criteria are
     * excluded from the segment.
     */
    inline AttributeDimension& WithAttributeType(AttributeType&& value) { SetAttributeType(std::move(value)); return *this;}


    /**
     * The criteria values for the segment dimension. Endpoints with matching attribute
     * values are included or excluded from the segment, depending on the setting for
     * Type.
     */
    inline const Aws::Vector<Aws::String>& GetValues() const{ return m_values; }

    /**
     * The criteria values for the segment dimension. Endpoints with matching attribute
     * values are included or excluded from the segment, depending on the setting for
     * Type.
     */
    inline bool ValuesHasBeenSet() const { return m_valuesHasBeenSet; }

    /**
     * The criteria values for the segment dimension. Endpoints with matching attribute
     * values are included or excluded from the segment, depending on the setting for
     * Type.
     */
    inline void SetValues(const Aws::Vector<Aws::String>& value) { m_valuesHasBeenSet = true; m_values = value; }

    /**
     * The criteria values for the segment dimension. Endpoints with matching attribute
     * values are included or excluded from the segment, depending on the setting for
     * Type.
     */
    inline void SetValues(Aws::Vector<Aws::String>&& value) { m_valuesHasBeenSet = true; m_values = std::move(value); }

    /**
     * The criteria values for the segment dimension. Endpoints with matching attribute
     * values are included or excluded from the segment, depending on the setting for
     * Type.
     */
    inline AttributeDimension& WithValues(const Aws::Vector<Aws::String>& value) { SetValues(value); return *this;}

    /**
     * The criteria values for the segment dimension. Endpoints with matching attribute
     * values are included or excluded from the segment, depending on the setting for
     * Type.
     */
    inline AttributeDimension& WithValues(Aws::Vector<Aws::String>&& value) { SetValues(std::move(value)); return *this;}

    /**
     * The criteria values for the segment dimension. Endpoints with matching attribute
     * values are included or excluded from the segment, depending on the setting for
     * Type.
     */
    inline AttributeDimension& AddValues(const Aws::String& value) { m_valuesHasBeenSet = true; m_values.push_back(value); return *this; }

    /**
     * The criteria values for the segment dimension. Endpoints with matching attribute
     * values are included or excluded from the segment, depending on the setting for
     * Type.
     */
    inline AttributeDimension& AddValues(Aws::String&& value) { m_valuesHasBeenSet = true; m_values.push_back(std::move(value)); return *this; }

    /**
     * The criteria values for the segment dimension. Endpoints with matching attribute
     * values are included or excluded from the segment, depending on the setting for
     * Type.
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
